/*
 *  Embedded SMTP Client Examples
 *
 *  ./software/ch4/emsmtpc/main.c
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

#include "emsmtpc.h"


void  text_example();
void  html_example();
void table_example();

int main(int argc, char **argv)
{
  text_example();
}

/*
 * Example 1:
 *  Construct a text message (text/plain).
 *
 */

void text_example ( void )
{
  static struct mailHeader mail;
  static char   buffer[512];

  bzero((void *)&mail, sizeof(mail));
  bzero((void *)buffer, sizeof(buffer));
  mail.contents = buffer;

  strcpy(mail.subject, "uClinux text message");
  strcpy(mail.sender, "se02@localhost");
  strcpy(mail.recipient, "se02@localhost");
  strcpy(mail.contentType, "text/plain");
  strcpy(mail.specialHeaders, "X-header: Boing\n");
  strcpy(mail.contents, "Tests Client SMTP uClinux\n");

  sendMail(&mail);
}


/*
 * Example 2:
 *  Construct an HTML message (text/html).
 *
 */

void html_example ( void )
{
  struct mailHeader mail;
  char   buffer[512];

  bzero((void *)&mail, sizeof(mail));
  bzero((void *)buffer, sizeof(buffer));
  mail.contents = buffer;

  strcpy(mail.subject, "This is an HTML message");
  strcpy(mail.sender, "root@localhost");
  strcpy(mail.recipient, "root@localhost");
  strcpy(mail.contentType, "text/html");
  strcpy(mail.contents, 
	 "<HTML>"
	 "<BODY><H1><center>Example HTML Mail</center></H1>"
	 "<BR><H2>This is sample text.</H2>"
	 "</BODY></HTML>\n");

  sendMail(&mail);
}


/*
 * Example 3:
 *  Construction of a HTML table with dynamic data.
 *
 */

void table_example ( void )
{
  struct mailHeader mail;
  char   buffer[512];

  bzero((void *)&mail, sizeof(mail));
  bzero((void *)buffer, sizeof(buffer));
  mail.contents = buffer;

  strcpy(mail.subject, "This is an HTML table message");
  strcpy(mail.sender, "root@localhost");
  strcpy(mail.recipient, "root@localhost");
  strcpy(mail.contentType, "text/html");
  strcpy(mail.contents, 
	 "<HTML><BODY><H2>Remote Device Data:</H2><BR>"
	 "<CENTER>"
	 "<TABLE BORDER><CAPTION>Sensor Data</CAPTION>");

  {
    int sensor1 = 52, 
      sensor2 = 2, 
      sensor3 = 17;

    sprintf(&mail.contents[strlen(mail.contents)],
	    "<TR><TH>Sensor</TH><TH>Value</TH></TR>"
	    "<TR><TD>Sensor 1</TD><TD><FONT color=red>%d</FONT></TD></TR>"
	    "<TR><TD>Sensor 2</TD><TD>%d</TD></TR>"
	    "<TR><TD>Sensor 3</TD><TD>%d</TD></TR>"
	    "</TABLE></CENTER>"
	    "</BODY></HTML>",
	    sensor1, sensor2, sensor3);
  }

  sendMail(&mail);
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

