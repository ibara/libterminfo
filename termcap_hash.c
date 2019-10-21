/* DO NOT EDIT
 * Automatically generated from termcap.c */

#include <stdint.h>
#include <stdlib.h>

#include "term_private.h"

static uint32_t
_t_flaghash(const void * __restrict key, size_t keylen)
{
	static const uint8_t g[75] = {
	    0x0b, 0x17, 0x00, 0x06, 0x0b, 0x00, 0x23, 0x03, 0x0f, 0x1a,
	    0x13, 0x00, 0x04, 0x24, 0x1f, 0x1a, 0x00, 0x00, 0x1e, 0x00,
	    0x18, 0x17, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x20, 0x00,
	    0x00, 0x0f, 0x00, 0x12, 0x00, 0x14, 0x00, 0x1e, 0x0c, 0x00,
	    0x00, 0x1b, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x19, 0x07,
	    0x08, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x0f, 0x00, 0x1b,
	    0x00, 0x00, 0x00, 0x00, 0x15, 0x00, 0x00, 0x00, 0x12, 0x1b,
	    0x00, 0x16, 0x12, 0x00, 0x03,
	};
	uint32_t h[3];

	mi_vector_hash(key, keylen, 0x00000000U, h);
	return (g[h[0] % 75] + g[h[1] % 75]) % 37;
}

#include <stdlib.h>

static uint32_t
_t_numhash(const void * __restrict key, size_t keylen)
{
	static const uint8_t g[67] = {
	    0x00, 0x1e, 0x01, 0x16, 0x00, 0x00, 0x00, 0x1c, 0x00, 0x00,
	    0x00, 0x00, 0x00, 0x03, 0x06, 0x00, 0x00, 0x07, 0x00, 0x0f,
	    0x03, 0x1c, 0x0c, 0x00, 0x08, 0x11, 0x10, 0x00, 0x0c, 0x0d,
	    0x06, 0x00, 0x06, 0x1b, 0x1d, 0x00, 0x00, 0x00, 0x18, 0x1a,
	    0x00, 0x04, 0x00, 0x0e, 0x20, 0x1b, 0x00, 0x00, 0x00, 0x00,
	    0x00, 0x00, 0x00, 0x0a, 0x1e, 0x00, 0x00, 0x07, 0x00, 0x00,
	    0x19, 0x1e, 0x00, 0x02, 0x00, 0x05, 0x00,
	};
	uint32_t h[3];

	mi_vector_hash(key, keylen, 0x00000005U, h);
	return (g[h[0] % 67] + g[h[1] % 67]) % 33;
}

#include <stdlib.h>

static uint32_t
_t_strhash(const void * __restrict key, size_t keylen)
{
	static const uint16_t g[789] = {
	    0x0172, 0x0088, 0x0000, 0x013f, 0x00a0, 0x0037, 0x0151, 0x0000,
	    0x0151, 0x0000, 0x0000, 0x0000, 0x0000, 0x006a, 0x0000, 0x0082,
	    0x0000, 0x0000, 0x00d4, 0x0025, 0x015e, 0x0000, 0x002e, 0x00b1,
	    0x0000, 0x0122, 0x00b1, 0x0000, 0x017f, 0x0141, 0x0172, 0x0000,
	    0x0000, 0x000a, 0x010c, 0x0185, 0x014f, 0x00c1, 0x0011, 0x0000,
	    0x0000, 0x012e, 0x0000, 0x0045, 0x0067, 0x00c4, 0x000d, 0x012e,
	    0x0000, 0x0004, 0x0000, 0x005f, 0x016c, 0x00df, 0x0000, 0x0000,
	    0x0000, 0x0000, 0x017d, 0x0099, 0x014a, 0x0000, 0x0000, 0x0032,
	    0x011e, 0x000a, 0x0000, 0x0037, 0x0057, 0x0065, 0x00d4, 0x00d5,
	    0x0000, 0x00c2, 0x00f0, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
	    0x0000, 0x0000, 0x00d6, 0x016d, 0x0000, 0x0086, 0x0000, 0x0114,
	    0x00ac, 0x0000, 0x0000, 0x00d6, 0x0000, 0x0000, 0x0000, 0x008a,
	    0x0000, 0x0000, 0x0000, 0x0000, 0x013c, 0x0000, 0x0042, 0x0000,
	    0x002e, 0x0000, 0x0000, 0x013e, 0x0032, 0x0000, 0x0000, 0x0000,
	    0x0000, 0x0000, 0x0000, 0x0130, 0x0000, 0x0000, 0x013c, 0x0073,
	    0x0000, 0x0095, 0x0000, 0x0000, 0x0000, 0x011e, 0x0012, 0x0000,
	    0x0067, 0x002b, 0x0000, 0x0000, 0x0000, 0x00c7, 0x0109, 0x0006,
	    0x0000, 0x00ff, 0x00d6, 0x0000, 0x0051, 0x0187, 0x0000, 0x0000,
	    0x0114, 0x0000, 0x00b5, 0x00c9, 0x000d, 0x0000, 0x0000, 0x0000,
	    0x017c, 0x00b5, 0x0171, 0x0000, 0x003b, 0x0000, 0x0000, 0x0089,
	    0x016f, 0x0000, 0x0000, 0x009a, 0x002f, 0x007c, 0x013e, 0x0000,
	    0x0000, 0x0000, 0x0000, 0x011b, 0x0000, 0x0000, 0x00d4, 0x0087,
	    0x0000, 0x0000, 0x0000, 0x0015, 0x00f3, 0x0000, 0x00c2, 0x0092,
	    0x0157, 0x0000, 0x0000, 0x0000, 0x0161, 0x0000, 0x0000, 0x0033,
	    0x0000, 0x00ff, 0x0156, 0x0000, 0x001c, 0x0000, 0x0000, 0x0139,
	    0x0156, 0x0000, 0x0098, 0x0000, 0x0069, 0x0093, 0x0000, 0x0000,
	    0x012b, 0x0000, 0x0000, 0x0168, 0x015b, 0x0075, 0x0000, 0x00c1,
	    0x00dd, 0x0000, 0x0038, 0x0000, 0x00e6, 0x0000, 0x0000, 0x0165,
	    0x00a7, 0x0000, 0x0022, 0x0000, 0x00a9, 0x0000, 0x006d, 0x0000,
	    0x0000, 0x0000, 0x013a, 0x0000, 0x004d, 0x0000, 0x0000, 0x0000,
	    0x0000, 0x0103, 0x0006, 0x006b, 0x0000, 0x0000, 0x0000, 0x0000,
	    0x0106, 0x0000, 0x0000, 0x0000, 0x00aa, 0x013a, 0x0090, 0x00d8,
	    0x0000, 0x0000, 0x016b, 0x0000, 0x002b, 0x0000, 0x0000, 0x0183,
	    0x0174, 0x0000, 0x0120, 0x0000, 0x0167, 0x00b0, 0x00b0, 0x0000,
	    0x0111, 0x0000, 0x0000, 0x015a, 0x0177, 0x0000, 0x0000, 0x0000,
	    0x0102, 0x0158, 0x0000, 0x0098, 0x0028, 0x00fd, 0x0168, 0x0032,
	    0x0000, 0x0000, 0x0000, 0x0029, 0x00cd, 0x0000, 0x0000, 0x005c,
	    0x0041, 0x0000, 0x0000, 0x015f, 0x0000, 0x0034, 0x017c, 0x00fc,
	    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x00a4, 0x0176,
	    0x0000, 0x0000, 0x0140, 0x0000, 0x0164, 0x009c, 0x010e, 0x0000,
	    0x0000, 0x0000, 0x00a2, 0x00ad, 0x0000, 0x0170, 0x0000, 0x00f6,
	    0x00a3, 0x0000, 0x017f, 0x0053, 0x0183, 0x0000, 0x0000, 0x00e8,
	    0x0188, 0x0103, 0x0000, 0x0080, 0x005c, 0x016e, 0x0027, 0x0000,
	    0x00b7, 0x0000, 0x0000, 0x0000, 0x0150, 0x0078, 0x0000, 0x0000,
	    0x00b7, 0x0000, 0x0000, 0x0038, 0x004b, 0x007b, 0x0000, 0x0000,
	    0x00b6, 0x0103, 0x0000, 0x006b, 0x0083, 0x0000, 0x0013, 0x00f3,
	    0x0000, 0x0031, 0x00bd, 0x0119, 0x005a, 0x0000, 0x0000, 0x0000,
	    0x0000, 0x000a, 0x008a, 0x0000, 0x0000, 0x0000, 0x0010, 0x0000,
	    0x0000, 0x0000, 0x0116, 0x0000, 0x00b8, 0x0156, 0x0000, 0x0054,
	    0x0000, 0x0000, 0x0092, 0x0000, 0x0000, 0x0000, 0x0000, 0x008b,
	    0x0172, 0x0000, 0x0000, 0x0188, 0x0000, 0x005d, 0x0000, 0x0000,
	    0x003b, 0x0000, 0x0066, 0x00ff, 0x0000, 0x0000, 0x0000, 0x007c,
	    0x0000, 0x00e0, 0x0000, 0x0000, 0x0151, 0x00cc, 0x007d, 0x0000,
	    0x015b, 0x000c, 0x00e1, 0x0000, 0x0000, 0x006b, 0x0076, 0x0000,
	    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x010f, 0x00f2, 0x0000,
	    0x012f, 0x0107, 0x00b7, 0x0000, 0x00d8, 0x0174, 0x00ea, 0x009d,
	    0x006d, 0x0000, 0x0000, 0x00d0, 0x0046, 0x012f, 0x00bd, 0x0000,
	    0x0120, 0x00ed, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0042,
	    0x00e8, 0x0000, 0x0000, 0x00c7, 0x0136, 0x0000, 0x00e8, 0x0002,
	    0x0000, 0x00ce, 0x0000, 0x0000, 0x0000, 0x017a, 0x0004, 0x00f7,
	    0x00a2, 0x0000, 0x00da, 0x0046, 0x0037, 0x007f, 0x0000, 0x0000,
	    0x0000, 0x0000, 0x0184, 0x0000, 0x0000, 0x012a, 0x0000, 0x0000,
	    0x0000, 0x0000, 0x0000, 0x00e3, 0x00b7, 0x0000, 0x0000, 0x0000,
	    0x0000, 0x013a, 0x0000, 0x00a6, 0x0000, 0x0065, 0x0000, 0x0000,
	    0x0000, 0x00cb, 0x010f, 0x0050, 0x0000, 0x0000, 0x0000, 0x0000,
	    0x003a, 0x0140, 0x0000, 0x0107, 0x0095, 0x00f2, 0x0000, 0x0000,
	    0x005b, 0x0000, 0x015c, 0x012f, 0x0000, 0x0171, 0x0000, 0x001e,
	    0x0000, 0x0000, 0x00be, 0x0000, 0x0000, 0x0113, 0x0000, 0x011e,
	    0x0000, 0x000c, 0x0000, 0x00a0, 0x0000, 0x0147, 0x006b, 0x00cb,
	    0x0025, 0x00f5, 0x0000, 0x0000, 0x0000, 0x00df, 0x00d9, 0x0000,
	    0x00e9, 0x00ab, 0x00f3, 0x0000, 0x0000, 0x0000, 0x00eb, 0x0087,
	    0x0000, 0x00cb, 0x0000, 0x0000, 0x0123, 0x0000, 0x0016, 0x0000,
	    0x011a, 0x0000, 0x00c8, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
	    0x011c, 0x0000, 0x0000, 0x0000, 0x0000, 0x0008, 0x0000, 0x0000,
	    0x0091, 0x00fb, 0x0000, 0x0000, 0x0000, 0x0165, 0x00bc, 0x0024,
	    0x015f, 0x0000, 0x0070, 0x00e1, 0x0000, 0x0000, 0x0175, 0x0048,
	    0x00c6, 0x0000, 0x008f, 0x00e2, 0x0176, 0x003f, 0x0000, 0x0000,
	    0x0000, 0x0035, 0x0000, 0x0011, 0x009e, 0x0000, 0x00d3, 0x003c,
	    0x0000, 0x00b0, 0x003e, 0x0180, 0x0000, 0x0064, 0x00ef, 0x0000,
	    0x0000, 0x0145, 0x0000, 0x0000, 0x00cf, 0x0000, 0x00e7, 0x0041,
	    0x0000, 0x0000, 0x0000, 0x0000, 0x017c, 0x007e, 0x014d, 0x013b,
	    0x0000, 0x0000, 0x0000, 0x0122, 0x0000, 0x0000, 0x0000, 0x0069,
	    0x0000, 0x0000, 0x0000, 0x0000, 0x00d5, 0x0187, 0x0137, 0x0000,
	    0x00f8, 0x0000, 0x0115, 0x008e, 0x0088, 0x0000, 0x0000, 0x0000,
	    0x008f, 0x0000, 0x0000, 0x009d, 0x0068, 0x0139, 0x015b, 0x009c,
	    0x0039, 0x0000, 0x00b0, 0x0000, 0x0110, 0x0000, 0x0059, 0x000b,
	    0x0000, 0x00d2, 0x0082, 0x0000, 0x0000, 0x0000, 0x0000, 0x005a,
	    0x013d, 0x0000, 0x0000, 0x004b, 0x0167, 0x0109, 0x0016, 0x0001,
	    0x0000, 0x00e4, 0x0000, 0x013d, 0x0000, 0x0000, 0x004d, 0x0000,
	    0x0000, 0x0000, 0x0029, 0x0000, 0x0000, 0x005d, 0x0000, 0x0001,
	    0x0000, 0x008d, 0x0000, 0x015c, 0x0000, 0x0000, 0x0000, 0x0000,
	    0x0000, 0x00c1, 0x0000, 0x0000, 0x0062, 0x0173, 0x0000, 0x0182,
	    0x0000, 0x006c, 0x0000, 0x00f1, 0x0000, 0x00e9, 0x012a, 0x0145,
	    0x0000, 0x0158, 0x000c, 0x015b, 0x0000, 0x0000, 0x0143, 0x0000,
	    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x00fd,
	    0x0142, 0x0070, 0x00e3, 0x0116, 0x0168, 0x0000, 0x0000, 0x00e5,
	    0x00f2, 0x0139, 0x0000, 0x0000, 0x0010, 0x0160, 0x0125, 0x0000,
	    0x00b3, 0x0158, 0x0062, 0x010a, 0x0000, 0x0000, 0x0000, 0x0000,
	    0x0000, 0x016e, 0x0000, 0x0000, 0x0000,
	};
	uint32_t h[3];

	mi_vector_hash(key, keylen, 0x00000002U, h);
	return (g[h[0] % 789] + g[h[1] % 789]) % 394;
}
