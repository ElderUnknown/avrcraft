//From http://overcode.yak.net/12
#include <avr/pgmspace.h>

const unsigned char font_8x8_data[] PROGMEM = {

	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x10, 0x28, 0x28, 0x10, 0x00, 0x18, 0x10, 0x20, 0x08, 0x10, 0x10, 0x00, 0x00, 0x00, 0x80, 
	0x38, 0x10, 0x38, 0x38, 0x30, 0x7c, 0x38, 0x7c, 0x38, 0x38, 0x00, 0x00, 0x20, 0x00, 0x04, 0x38, 
	0x38, 0x38, 0x3c, 0x38, 0x3c, 0x7c, 0x7c, 0x38, 0x44, 0x38, 0x70, 0x44, 0x08, 0x82, 0x44, 0x38, 
	0x38, 0x38, 0x3c, 0x38, 0x7c, 0x44, 0x44, 0x82, 0x44, 0x44, 0x7c, 0x38, 0x02, 0x38, 0x10, 0x00, 
	0x08, 0x00, 0x08, 0x00, 0x40, 0x00, 0x30, 0x00, 0x04, 0x00, 0x00, 0x04, 0x18, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x30, 0x10, 0x0c, 0x00, 0x00, 
	
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x10, 0x28, 0x28, 0x78, 0x4c, 0x14, 0x10, 0x10, 0x10, 0x92, 0x10, 0x00, 0x00, 0x00, 0x40, 
	0x44, 0x18, 0x44, 0x44, 0x28, 0x04, 0x44, 0x40, 0x44, 0x44, 0x30, 0x30, 0x10, 0x00, 0x08, 0x44, 
	0x44, 0x44, 0x44, 0x44, 0x44, 0x04, 0x04, 0x44, 0x44, 0x10, 0x20, 0x44, 0x08, 0xc6, 0x4c, 0x44, 
	0x48, 0x44, 0x44, 0x44, 0x10, 0x44, 0x44, 0x82, 0x44, 0x44, 0x40, 0x08, 0x04, 0x20, 0x28, 0x00, 
	0x10, 0x38, 0x08, 0x00, 0x40, 0x00, 0x48, 0x00, 0x04, 0x10, 0x10, 0x04, 0x10, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 0x10, 0x10, 0x00, 0x00, 
	
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x10, 0x00, 0xfe, 0x14, 0x2c, 0x08, 0x00, 0x08, 0x20, 0x54, 0x10, 0x00, 0x00, 0x00, 0x20, 
	0x44, 0x10, 0x40, 0x40, 0x24, 0x04, 0x04, 0x20, 0x44, 0x44, 0x30, 0x30, 0x08, 0xfe, 0x10, 0x40, 
	0x74, 0x44, 0x44, 0x04, 0x44, 0x04, 0x04, 0x04, 0x44, 0x10, 0x20, 0x24, 0x08, 0xaa, 0x54, 0x44, 
	0x48, 0x44, 0x44, 0x04, 0x10, 0x44, 0x44, 0x82, 0x28, 0x28, 0x20, 0x08, 0x08, 0x20, 0x44, 0x00, 
	0x00, 0x40, 0x38, 0x38, 0x70, 0x38, 0x08, 0xb8, 0x34, 0x00, 0x00, 0x24, 0x10, 0x6d, 0x34, 0x38, 
	0x34, 0x58, 0x34, 0x38, 0x38, 0x24, 0x44, 0x82, 0x44, 0x48, 0x3c, 0x08, 0x10, 0x10, 0x0c, 0x00, 
	
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x10, 0x00, 0x28, 0x38, 0x10, 0x14, 0x00, 0x08, 0x20, 0x38, 0xfe, 0x00, 0xfe, 0x00, 0x10, 
	0x54, 0x10, 0x20, 0x30, 0x7c, 0x3c, 0x3c, 0x10, 0x38, 0x78, 0x00, 0x00, 0x04, 0x00, 0x20, 0x20, 
	0x54, 0x7c, 0x3c, 0x04, 0x44, 0x3c, 0x7c, 0x74, 0x7c, 0x10, 0x20, 0x1c, 0x08, 0x92, 0x54, 0x44, 
	0x38, 0x44, 0x3c, 0x38, 0x10, 0x44, 0x28, 0x54, 0x10, 0x10, 0x10, 0x08, 0x10, 0x20, 0x00, 0x00, 
	0x00, 0x78, 0x48, 0x04, 0x48, 0x44, 0x1c, 0x44, 0x4c, 0x10, 0x10, 0x14, 0x10, 0x92, 0x48, 0x44, 
	0x48, 0x24, 0x0c, 0x04, 0x10, 0x24, 0x44, 0x82, 0x28, 0x48, 0x20, 0x04, 0x10, 0x20, 0x92, 0x00, 
	
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x10, 0x00, 0xfe, 0x50, 0x68, 0x62, 0x00, 0x08, 0x20, 0x54, 0x10, 0x30, 0x00, 0x00, 0x08, 
	0x44, 0x10, 0x10, 0x40, 0x20, 0x40, 0x44, 0x08, 0x44, 0x40, 0x30, 0x30, 0x08, 0xfe, 0x10, 0x10, 
	0x74, 0x44, 0x44, 0x04, 0x44, 0x04, 0x04, 0x44, 0x44, 0x10, 0x24, 0x24, 0x08, 0x82, 0x64, 0x44, 
	0x08, 0x44, 0x14, 0x40, 0x10, 0x44, 0x28, 0x54, 0x28, 0x10, 0x08, 0x08, 0x20, 0x20, 0x00, 0x00, 
	0x00, 0x44, 0x48, 0x04, 0x48, 0x7c, 0x08, 0x44, 0x44, 0x10, 0x10, 0x0c, 0x10, 0x92, 0x48, 0x44, 
	0x48, 0x24, 0x04, 0x18, 0x10, 0x24, 0x44, 0x92, 0x10, 0x48, 0x10, 0x08, 0x10, 0x10, 0x60, 0x00, 
	
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x28, 0x3c, 0x64, 0x22, 0x00, 0x10, 0x10, 0x92, 0x10, 0x30, 0x00, 0x30, 0x04, 
	0x44, 0x10, 0x08, 0x44, 0x20, 0x44, 0x44, 0x08, 0x44, 0x44, 0x30, 0x30, 0x10, 0x00, 0x08, 0x00, 
	0x04, 0x44, 0x44, 0x44, 0x44, 0x04, 0x04, 0x44, 0x44, 0x10, 0x24, 0x44, 0x08, 0x82, 0x44, 0x44, 
	0x08, 0x44, 0x24, 0x44, 0x10, 0x44, 0x10, 0x28, 0x44, 0x10, 0x04, 0x08, 0x40, 0x20, 0x00, 0x00, 
	0x00, 0x44, 0x48, 0x04, 0x48, 0x04, 0x08, 0x78, 0x44, 0x10, 0x10, 0x14, 0x10, 0x82, 0x48, 0x44, 
	0x38, 0x38, 0x04, 0x20, 0x10, 0x24, 0x28, 0xaa, 0x28, 0x70, 0x08, 0x08, 0x10, 0x10, 0x00, 0x00, 
	
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x10, 0x00, 0x28, 0x10, 0x00, 0x5c, 0x00, 0x20, 0x08, 0x10, 0x10, 0x20, 0x00, 0x30, 0x02, 
	0x38, 0x38, 0x7c, 0x38, 0x70, 0x38, 0x38, 0x08, 0x38, 0x38, 0x00, 0x20, 0x20, 0x00, 0x04, 0x10, 
	0x38, 0x44, 0x3c, 0x38, 0x3c, 0x7c, 0x04, 0x38, 0x44, 0x38, 0x18, 0x44, 0x78, 0x82, 0x44, 0x38, 
	0x08, 0x38, 0x44, 0x38, 0x10, 0x38, 0x10, 0x28, 0x44, 0x10, 0x7c, 0x38, 0x80, 0x38, 0x00, 0x00, 
	0x00, 0xb8, 0x34, 0x38, 0xb0, 0x38, 0x08, 0x40, 0x44, 0x10, 0x10, 0x24, 0x10, 0x82, 0x48, 0x38, 
	0x08, 0x20, 0x04, 0x1c, 0x10, 0x58, 0x10, 0x44, 0x44, 0x40, 0x3c, 0x30, 0x10, 0x0c, 0x00, 0x00, 
	
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x60, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xfe, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x38, 0x00, 0x00, 0x0c, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x08, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x38, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	};
