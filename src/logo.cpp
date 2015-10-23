#include "image.hpp"
#include "logo.hpp"

static const uint8_t image[] = {
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFC, 0x01, 0x80, 0x1F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0x0F, 0xF8, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0xC0, 0x8F, 0x3F, 0xFE, 0xF9, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0xE0, 0x01, 0x78, 0x1F, 0x80, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x70, 0x00, 0xE0, 0x07, 0x00, 0x0F, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x38, 0x00, 0xC0, 0x01, 0x00, 0x0E, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x1C, 0x00, 0x80, 0x00, 0x00, 0x1C, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x0C, 0x00, 0x08, 0x00, 0x00, 0x38, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x0E, 0x00, 0x08, 0x00, 0x00, 0x30, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x06, 0x00, 0x08, 0x00, 0x00, 0x70, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0x00, 0x08, 0x00, 0x00, 0x60, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x0C, 0x00, 0x00, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x1C, 0x00, 0x00, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x1C, 0x00, 0x00, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x14, 0x00, 0x00, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x14, 0x00, 0x00, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x16, 0x00, 0x00, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x36, 0x00, 0x00, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0x00, 0x32, 0x00, 0x00, 0x60, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0x00, 0x22, 0x00, 0x00, 0x70, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x06, 0x00, 0x23, 0x00, 0x00, 0x70, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x0E, 0x00, 0x23, 0x00, 0x00, 0x3C, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x0C, 0x00, 0x21, 0x00, 0x00, 0x3F, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x1C, 0x00, 0x61, 0x00, 0xC0, 0x18, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x18, 0x00, 0x41, 0x00, 0x30, 0x1C, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0xF0, 0x9F, 0x41, 0xFC, 0x0F, 0x0E, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x70, 0x90, 0x41, 0x04, 0x00, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0xE0, 0xA0, 0x40, 0x04, 0x00, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0xC0, 0xE1, 0xC0, 0x02, 0x80, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0xC3, 0xC0, 0x02, 0xC0, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x87, 0x80, 0x02, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0E, 0x80, 0x01, 0x70, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1C, 0x80, 0x01, 0x38, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x38, 0x80, 0x00, 0x0E, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x70, 0x80, 0x00, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xE0, 0x00, 0x80, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x03, 0xC0, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0xF0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1E, 0x3C, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF8, 0x1F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF0, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x40, 0x00, 0x0A, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x40, 0x00, 0x0A, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x40, 0x00, 0x0A, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0xC1, 0x80, 0x41, 0x0C, 0x08, 0x00, 0x18, 0x60, 0x00, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0xD0, 0xF7, 0xE3, 0x47, 0x3F, 0x8A, 0x0F, 0x7E, 0xF8, 0x05, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x70, 0x1C, 0x32, 0xCC, 0x61, 0x4A, 0x10, 0xC3, 0x0C, 0x07, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x30, 0x08, 0x12, 0xD8, 0xC0, 0x2A, 0xA0, 0x81, 0x06, 0x06, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x30, 0x08, 0x1A, 0x58, 0x80, 0x2A, 0xA0, 0x01, 0x06, 0x04, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x30, 0x08, 0x1A, 0x50, 0x80, 0xEA, 0xBF, 0x00, 0x02, 0x04, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x30, 0x08, 0x1A, 0x50, 0x80, 0x2A, 0x80, 0x00, 0x06, 0x04, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x30, 0x08, 0x1A, 0x58, 0xC0, 0x2A, 0xA0, 0x01, 0x06, 0x06, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x30, 0x08, 0x32, 0xD8, 0x60, 0x6A, 0x30, 0x83, 0x0C, 0x06, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x30, 0x08, 0xE2, 0xCF, 0x3F, 0xCA, 0x18, 0xEE, 0xB8, 0x07, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x30, 0x08, 0xC2, 0x43, 0x1E, 0x0A, 0x07, 0x3C, 0xF0, 0x04, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x06, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0C, 0x03, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF8, 0x01, 0x00, 0x00, 0x00, 
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
};

const Image logo(image, 128, 64);