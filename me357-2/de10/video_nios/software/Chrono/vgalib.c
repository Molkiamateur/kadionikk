#include "vgalib.h"
#include <system.h>

static int *video_buffer;

static int cur_x; // En pixel
static int cur_y; // En pixel


void VgaInit() {
  video_buffer = (int *)VGA_VGA_PIXEL_DMA_BASE;
  cur_y = 0;
  cur_x = 0;
}

void VgaClearScreen(void) {
  int i;
  int  *ptr;

  // Memoire video pixels
  ptr = (int *)*(int *)VGA_VGA_PIXEL_DMA_BASE;
  for(i= 0; i<(0x40000/4); i++)
    *(ptr+i)= 0;

  // Memoire video caracteres
  ptr = (int *)VGA_CHAR_BUF_SUBSYSTEM_ONCHIP_SRAM_BASE;
  for(i= 0; i<(0x2000/4); i++)
    *(ptr+i)= 0;
}

void VgaSetCursor(int col, int row) {
  if(row > CHAR_ROW - 1) row = CHAR_ROW - 1;
  if(col > CHAR_COL - 1) col = CHAR_COL - 1;
  if(row < 0) row = 0;
  if(col < 0) col = 0;
  cur_y = row*8;
  cur_x = col*8;
}

void VgaWriteCharacter(unsigned char c) {
  int pixel_buf_ptr;
  int pixel_ptr, row, col;

  // cur_x * 2 car les pixels sont sur 16 bits
  // cur_y * 1024 car lignes sont alignees sur 1024 bits
  pixel_buf_ptr = *(int *)video_buffer + cur_x * 2 + (cur_y * 1024);

  for (row = 0; row < 8; row++) {
    short row_color = rom8x8_bits[(c * 8) + row];
    for (col = 0; col < 8; col++) {
      pixel_ptr = pixel_buf_ptr + (row * 1024) + (col << 1);
      if ((row_color >> (15 - col)) & 1) {
	*(short *)pixel_ptr = 0xFFFF;
      }
      else {
	*(short *)pixel_ptr = 0;
      }
    }
  }
}

void VgaWriteScreen(char *string) {
  int count;

  count = 0;

  while(string[count] != '\0') {
    VgaWriteCharacter(string[count]);
    cur_x += 8;
    count++;
  }
  //VgaWriteCharacter(' ');
}

void VgaPrintAt(int col, int row, char *string) {
  VgaSetCursor(col, row);
  VgaWriteScreen(string);
}

int VgaDrawBox(int x1, int y1, int x2, int y2, short pixel_color) {
  int pixel_buf_ptr = *(int *)video_buffer;
  int pixel_ptr, row, col;

  if((x1 < 0) || (x2 < 0) || (y1 < 0) || (y2 <0)) return(-1);
  if((x1 > SIZE_X - 1) || (x2 > SIZE_X - 1) || (y1 > SIZE_Y - 1) || (y2 > SIZE_Y - 1)) return(-1);
  if((x2 < x1) ||(y2 < y1)) return(-1);

  for (row = y1; row <= y2; row++) {
    for (col = x1; col <= x2; col++) {
      pixel_ptr = pixel_buf_ptr + (row * 1024) + (col << 1);
      *(short *)pixel_ptr = pixel_color;
    }
  }
  return(0);
}
