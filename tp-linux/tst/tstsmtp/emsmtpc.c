/*
 *  Embedded SMTP Client
 *
 *  ./software/ch4/emsmtpc/emsmtpc.c
 *
 *  mtj@cogitollc.com
 *
 */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>
#include <strings.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <netdb.h>
#include <arpa/inet.h>

#include "emsmtpc.h"

static char *hello_msg={"HELO enseirb.fr\n"};
static char *mailServer={"localhost"};


// PK
#undef DEBUG
//#define DEBUG 1
/*
 *  strscan()
 *
 *  Extract the return code and check it against the passed
 *  reference code (str).
 *
 *  Returns 0 on success, -1 on error.
 *
 */

int strscan(char *line, char *str, int len)
{
  int i;
  for (i = 0 ; i < strlen(line) - len ; i++) {
    if (line[i] == str[0]) {
      if (!strncmp(line, str, 3)) return(0);
    }
  }
  return(-1);
}


/*
 *  dialog()
 *
 *  Perform a dialog with the connected mail server.  If the command is 
 *  present (non-NULL), send it through the socket to the server.  If 
 *  the response is present, check it against the return code from the 
 *  mail server.
 *
 *  Returns 0 on success, -1 on error.
 *
 */

int dialog(int sd, char *command, char *resp)
{
  int ret, len;
  static char line[128];

  if (command != NULL) {
    len = strlen(command);
#ifdef DEBUG
    // pk
    printf("Command =%s", command);
#endif
    if (write(sd, command, len) != len) return -1;
  }

  if (resp != NULL) {
    ret = read(sd, line, sizeof(line)-1); line[ret] = 0;
#ifdef DEBUG
    // pk
    printf("Response=%s", line);
#endif
    if (strscan(line, resp, 3) == -1) return -1;
  }
  return 0;
}


/*
 *  sendMail()
 *
 *  Given a passed mailHeader structure, send the email to the mail
 *  server defined by the mailServer variable.
 *
 *  Returns 0 on success, -1 on error.
 *
 */

int sendMail(struct mailHeader *mail)
{
  int connfd, result, ret, goodMsg = 0;
  struct sockaddr_in servaddr;
  static char mailRcpt[129];
  static char line[256];

  connfd = socket(AF_INET, SOCK_STREAM, 0);

  bzero((void *)&servaddr, sizeof(servaddr));
  servaddr.sin_family = AF_INET;
  servaddr.sin_port = htons(25);

  servaddr.sin_addr.s_addr = inet_addr(mailServer);

  /* if the prior inet_addr results in a '-1' (or error), then we
   * assume that the gateway symbolic is not an dotted-notation
   * IP address.  It must therefore be a fully-qualified domain name
   * and we use gethostbyname to resolve it.
   */
  //    printf("gethostbyname()...");
  if (servaddr.sin_addr.s_addr == 0xffffffff) {
    struct hostent *hptr = (struct hostent *)gethostbyname(mailServer);
    if (hptr == NULL) {
      //	printf("BAD\n");
      /* Don't know what the mailServer represents... */
      return(-1);
    } else {
      struct in_addr **addrs;
      addrs = (struct in_addr **)hptr->h_addr_list;
      memcpy(&servaddr.sin_addr, 
	     *addrs, sizeof(struct in_addr));
      //	printf("OK\n");
    }
  }

  // printf("connect()...");
  result = connect(connfd, 
		   (struct sockaddr *)&servaddr, sizeof(servaddr));

  // printf("OK\n");
  do {

    /* Look for initial salutation */
    if ( dialog( connfd, NULL, "220" ) ) break;

    /* Send HELO and await response */
    if ( dialog( connfd, hello_msg, "250" ) ) break;

    /* Send MAIL FROM and await response */
    sprintf(line, "MAIL FROM:<%s>\n", mail->sender);
    if ( dialog( connfd, line, "250" ) ) break;

    /* Send RCPT TO and await response */
    sprintf(line, "RCPT TO:<%s>\n", mail->recipient);
    if ( dialog( connfd, line, "250" ) ) break;

    /* Send DATA and await response */
    if ( dialog( connfd, "DATA\n", "354" ) ) break;

    /* Send out the header first */
    sprintf(line, "From: %s\n", mail->sender);
    if ( dialog( connfd, line, NULL ) ) break;

    sprintf(line, "To: %s\n", mail->recipient);
    if ( dialog( connfd, line, NULL ) ) break;

    sprintf(line, "Subject: %s\n", mail->subject);
    if ( dialog( connfd, line, NULL ) ) break;

    if (mail->contentType[0] != 0) {
      sprintf(line, "Content-Type: %s\n", mail->contentType);
      if ( dialog( connfd, line, NULL ) ) break;
    }

    if (mail->specialHeaders[0] != 0) {
      if ( dialog( connfd, mail->specialHeaders, NULL ) ) break;
    }

    if ( dialog( connfd, mail->contents, NULL ) ) break;


    /* Send mail-end and await response */
    if ( dialog( connfd, "\n.\n", "250" ) ) break;

    if ( dialog( connfd, "QUIT\n", "221" ) ) break;

    goodMsg = 1;

  } while (0);

  close(connfd);

  return(goodMsg);
}

/*
 *  Copyright (c) 2002 Charles River Media.  All rights reserved.
 * 
 *  Redistribution and use in source and binary forms, with or 
 *  without modification, is hereby granted without fee provided 
 *  that the following conditions are met:
 * 
 *    1.  Redistributions of source code must retain the above 
 *        copyright notice, this list of conditions and the 
 *        following disclaimer.
 *    2.  Redistributions in binary form must reproduce the above
 *        copyright notice, this list of conditions and the 
 *        following disclaimer in the documentation and/or other 
 *        materials provided with the distribution.
 *    3.  Neither the name of Charles River Media nor the names of 
 *        its contributors may be used to endorse or promote products 
 *        derived from this software without specific prior 
 *        written permission.
 * 
 * THIS SOFTWARE IS PROVIDED BY CHARLES RIVER MEDIA AND CONTRIBUTERS 
 * 'AS IS' AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT 
 * LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTIBILITY AND FITNESS 
 * FOR A PARTICULAR PURPOSE ARE DISCLAIMED.  IN NO EVENT SHALL CHARLES
 * RIVER MEDIA OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, 
 * INCIDENTAL, SPECIAL, EXEMPLARAY, OR CONSEQUENTIAL DAMAGES (INCLUDING, 
 * BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS 
 * OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED 
 * AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT 
 * LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN 
 * ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE 
 * POSSIBILITY OF SUCH DAMAGE.
 */

