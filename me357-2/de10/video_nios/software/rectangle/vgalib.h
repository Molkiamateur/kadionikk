#define SIZE_X 		320 			// 320 320*2=640 chaque pixel x est duplique
#define SIZE_Y 		240				// 240 240*2=480 chaque pixel y is duplique
#define CHAR_ROW 	SIZE_Y*2/16   	// 30 lignes
#define CHAR_COL 	SIZE_X*2/16   	// 40 caracteres 16X16 par ligne

extern unsigned short rom8x8_bits[];

// Main Routines
void VgaWriteScreen(char * string);
void VgaPrintAt(int col, int row, char * string);
int VgaDrawBox(int x1, int y1, int x2, int y2, short pixel_color);

// Low Level Routines
void VgaInit(void);
void VgaClearScreen(void);
void VgaWriteCharacter(unsigned char character);
void VgaSetCursor(int col, int row);
