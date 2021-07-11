#ifndef __NT36672A_PARAM_H__
#define __NT36672A_PARAM_H__
#include <linux/types.h>
#include <linux/kernel.h>

#define EXTEND_BRIGHTNESS	306
#define UI_MAX_BRIGHTNESS	255
#define UI_DEFAULT_BRIGHTNESS	128

struct lcd_seq_info {
	unsigned char	*cmd;
	unsigned int	len;
	unsigned int	sleep;
};

static u8 LM36274_INIT[] = {
	0x02, 0x2B, /*(defalut 28) ramp & PWM enable*/
	0x03, 0x0E, /*(defalut 8d) LED current ramp, PWM sample rate & hysteris */
	0x04, 0x04, /* D[2:0] LSB of 11 bit BL code*/
	0x05, 0xD4, /* D[7:0] MSB of 11 bit BL code*/
	0x09, 0x99, /* VPOS and VNEG enabled via external pin*/
	0x0E, 0x1E, /* VNEG -5.5V */
	0x10, 0x07, /* PWM sample rate 24MHz */
	0x11, 0x75, /* backlight_boost_l_select:10uH */
	0x08, 0x1F, /* finally: BL_EN, all LEDs enable*/
};

static unsigned char SEQ_INIT_1_TABLE[] = {
	0xFF, 0x10,
	0xFB, 0x01,
	0xFF, 0x20,
	0xFB, 0x01,
	0x07, 0x9E,
	0x0F, 0xA4,
	0x5D, 0x07,
	0x62, 0xAF,
	0x6D, 0x44,
	0x78, 0x01,
	0x95, 0xE1,
	0x96, 0xE1,
	0xFF, 0x24,
	0xFB, 0x01,
	0x00, 0x1C,
	0x01, 0x1C,
	0x02, 0x1C,
	0x03, 0x0E,
	0x04, 0x20,
	0x05, 0x1C,
	0x06, 0x1C,
	0x07, 0x01,
	0x08, 0x09,
	0x09, 0x1C,
	0x0A, 0x0A,
	0x0B, 0x0D,
	0x0C, 0x1E,
	0x0D, 0x03,
	0x0E, 0x04,
	0x0F, 0x05,
	0x10, 0x06,
	0x11, 0x1C,
	0x12, 0x14,
	0x13, 0x12,
	0x14, 0x10,
	0x15, 0x1C,
	0x16, 0x1C,
	0x17, 0x1C,
	0x18, 0x1C,
	0x19, 0x1C,
	0x1A, 0x20,
	0x1B, 0x20,
	0x1C, 0x1C,
	0x1D, 0x1C,
	0x1E, 0x01,
	0x1F, 0x09,
	0x20, 0x1C,
	0x21, 0x0A,
	0x22, 0x0D,
	0x23, 0x1E,
	0x24, 0x03,
	0x25, 0x04,
	0x26, 0x05,
	0x27, 0x06,
	0x28, 0x1C,
	0x29, 0x14,
	0x2A, 0x12,
	0x2B, 0x10,
	0x2D, 0x1C,
	0x2F, 0x1C,
	0x31, 0x04,
	0x32, 0x0A,
	0x33, 0x04,
	0x34, 0x03,
	0x37, 0x03,
	0x38, 0x6E,
	0x39, 0x6E,
	0x3F, 0x6E,
	0x41, 0x04,
	0x42, 0x0A,
	0x4C, 0x1C,
	0x4D, 0x1C,
	0x60, 0x90,
	0x61, 0x24,
	0x72, 0x00,
	0x73, 0x00,
	0x74, 0x00,
	0x75, 0x00,
	0x79, 0x87,
	0x7A, 0x0B,
	0x7B, 0x9C,
	0x7C, 0x80,
	0x7D, 0x06,
	0x80, 0x45,
	0x81, 0x05,
	0x82, 0x13,
	0x83, 0x22,
	0x84, 0x31,
	0x85, 0x00,
	0x86, 0x00,
	0x87, 0x00,
	0x88, 0x13,
	0x89, 0x22,
	0x8A, 0x31,
	0x8B, 0x00,
	0x8C, 0x00,
	0x8D, 0x00,
	0x8E, 0xF4,
	0x8F, 0x01,
	0x90, 0x80,
	0x92, 0x73,
	0x9D, 0xB1,
	0xB3, 0x0A,
	0xB4, 0x04,
	0xDC, 0x25,
	0xDD, 0x04,
	0xDE, 0x02,
	0xDF, 0x72,
	0xE0, 0x01,
	0xEB, 0x0B,
	0xFF, 0x25,
	0xFB, 0x01,
	0x21, 0x1C,
	0x22, 0x1C,
	0x24, 0x73,
	0x25, 0x73,
	0x30, 0x2F,
	0x38, 0x2F,
	0x3F, 0x21,
	0x40, 0x5F,
	0x4B, 0x21,
	0x4C, 0x5F,
	0x69, 0x10,
	0x84, 0x78,
	0x85, 0x75,
	0x8D, 0x00,
	0xBF, 0x00,
	0xC2, 0x5A,
	0xC3, 0x13,
	0xD9, 0x48,
	0xDB, 0x22,
	0xFF, 0x26,
	0xFB, 0x01,
	0x06, 0xFF,
	0x12, 0x75,
	0x19, 0x0A,
	0x1A, 0xF7,
	0x1C, 0xAF,
	0x1E, 0x7A,
	0x98, 0xF1,
	0xA9, 0x11,
	0xAA, 0x11,
	0xAE, 0x8A,
	0xFF, 0x27,
	0xFB, 0x01,
	0x13, 0x00,
	0x1E, 0x14,
	0xFF, 0xF0,
	0xFB, 0x01,
	0xA2, 0x00,
	0xFF, 0x20,
	0xFB, 0x01,
};

static unsigned char SEQ_R_N_1[] = {
	0xB0, 0x00, 0x10, 0x00, 0x32, 0x00, 0x65, 0x00, 0x8B, 0x00, 0xA9, 0x00, 0xC2, 0x00, 0xD9, 0x00, 0xEB
};

static unsigned char SEQ_R_N_2[] = {
	0xB1, 0x00, 0xFB, 0x01, 0x35, 0x01, 0x5E, 0x01, 0x9B, 0x01, 0xC9, 0x02, 0x0E, 0x02, 0x45, 0x02, 0x47
};

static unsigned char SEQ_R_N_3[] = {
	0xB2, 0x02, 0x6C, 0x02, 0xA8, 0x02, 0xCC, 0x03, 0x0B, 0x03, 0x2A, 0x03, 0x50, 0x03, 0x5D, 0x03, 0x6A
};

static unsigned char SEQ_R_N_4[] = {
	0xB3, 0x03, 0x7A, 0x03, 0x8A, 0x03, 0xA1, 0x03, 0xB7, 0x03, 0xCE, 0x03, 0xD3
};

static unsigned char SEQ_G_N_1[] = {
	0xB4, 0x00, 0x10, 0x00, 0x32, 0x00, 0x65, 0x00, 0x8B, 0x00, 0xA9, 0x00, 0xC2, 0x00, 0xD9, 0x00, 0xEB
};

static unsigned char SEQ_G_N_2[] = {
	0xB5, 0x00, 0xFB, 0x01, 0x35, 0x01, 0x5E, 0x01, 0x9B, 0x01, 0xC9, 0x02, 0x0E, 0x02, 0x45, 0x02, 0x47
};

static unsigned char SEQ_G_N_3[] = {
	0xB6, 0x02, 0x6C, 0x02, 0xA8, 0x02, 0xCC, 0x03, 0x0B, 0x03, 0x2A, 0x03, 0x50, 0x03, 0x5D, 0x03, 0x6A
};

static unsigned char SEQ_G_N_4[] = {
	0xB7, 0x03, 0x7A, 0x03, 0x8A, 0x03, 0xA1, 0x03, 0xB7, 0x03, 0xCE, 0x03, 0xD3
};

static unsigned char SEQ_B_N_1[] = {
	0xB8, 0x00, 0x10, 0x00, 0x32, 0x00, 0x65, 0x00, 0x8B, 0x00, 0xA9, 0x00, 0xC2, 0x00, 0xD9, 0x00, 0xEB
};

static unsigned char SEQ_B_N_2[] = {
	0xB9, 0x00, 0xFB, 0x01, 0x35, 0x01, 0x5E, 0x01, 0x9B, 0x01, 0xC9, 0x02, 0x0E, 0x02, 0x45, 0x02, 0x47
};

static unsigned char SEQ_B_N_3[] = {
	0xBA, 0x02, 0x6C, 0x02, 0xA8, 0x02, 0xCC, 0x03, 0x0B, 0x03, 0x2A, 0x03, 0x50, 0x03, 0x5D, 0x03, 0x6A
};

static unsigned char SEQ_B_N_4[] = {
	0xBB, 0x03, 0x7A, 0x03, 0x8A, 0x03, 0xA1, 0x03, 0xB7, 0x03, 0xCE, 0x03, 0xD3
};

static unsigned char SEQ_INIT_2_TABLE[] = {
	0xFF, 0x21,
	0xFB, 0x01,
};

static unsigned char SEQ_R_P_1[] = {
	0xB0, 0x00, 0x18, 0x00, 0x3A, 0x00, 0x6D, 0x00, 0x93, 0x00, 0xB1, 0x00, 0xCA, 0x00, 0xE1, 0x00, 0xF3
};

static unsigned char SEQ_R_P_2[] = {
	0xB1, 0x01, 0x03, 0x01, 0x3D, 0x01, 0x66, 0x01, 0xA3, 0x01, 0xD1, 0x02, 0x16, 0x02, 0x4D, 0x02, 0x4F
};

static unsigned char SEQ_R_P_3[] = {
	0xB2, 0x02, 0x8E, 0x02, 0xCA, 0x02, 0xEE, 0x03, 0x13, 0x03, 0x32, 0x03, 0x58, 0x03, 0x65, 0x03, 0x72
};

static unsigned char SEQ_R_P_4[] = {
	0xB3, 0x03, 0x82, 0x03, 0x92, 0x03, 0xA9, 0x03, 0xBF, 0x03, 0xD6, 0x03, 0xDB
};

static unsigned char SEQ_G_P_1[] = {
	0xB4, 0x00, 0x18, 0x00, 0x3A, 0x00, 0x6D, 0x00, 0x93, 0x00, 0xB1, 0x00, 0xCA, 0x00, 0xE1, 0x00, 0xF3
};

static unsigned char SEQ_G_P_2[] = {
	0xB5, 0x01, 0x03, 0x01, 0x3D, 0x01, 0x66, 0x01, 0xA3, 0x01, 0xD1, 0x02, 0x16, 0x02, 0x4D, 0x02, 0x4F
};

static unsigned char SEQ_G_P_3[] = {
	0xB6, 0x02, 0x8E, 0x02, 0xCA, 0x02, 0xEE, 0x03, 0x13, 0x03, 0x32, 0x03, 0x58, 0x03, 0x65, 0x03, 0x72
};

static unsigned char SEQ_G_P_4[] = {
	0xB7, 0x03, 0x82, 0x03, 0x92, 0x03, 0xA9, 0x03, 0xBF, 0x03, 0xD6, 0x03, 0xDB
};

static unsigned char SEQ_B_P_1[] = {
	0xB8, 0x00, 0x18, 0x00, 0x3A, 0x00, 0x6D, 0x00, 0x93, 0x00, 0xB1, 0x00, 0xCA, 0x00, 0xE1, 0x00, 0xF3
};

static unsigned char SEQ_B_P_2[] = {
	0xB9, 0x01, 0x03, 0x01, 0x3D, 0x01, 0x66, 0x01, 0xA3, 0x01, 0xD1, 0x02, 0x16, 0x02, 0x4D, 0x02, 0x4F
};

static unsigned char SEQ_B_P_3[] = {
	0xBA, 0x02, 0x8E, 0x02, 0xCA, 0x02, 0xEE, 0x03, 0x13, 0x03, 0x32, 0x03, 0x58, 0x03, 0x65, 0x03, 0x72
};

static unsigned char SEQ_B_P_4[] = {
	0xBB, 0x03, 0x82, 0x03, 0x92, 0x03, 0xA9, 0x03, 0xBF, 0x03, 0xD6, 0x03, 0xDB
};

static unsigned char SEQ_INIT_3_TABLE[] = {
	//Gamma Enhance
	0xFF, 0x20,
	0xFB, 0x01,
	0xFF, 0x10,
	0x35, 0x00,
	//PWM 12bit ,Frequency  15KHZ
	0xFF, 0x23,
	0xFB, 0x01,
	0x00, 0x80,
	0x07, 0x00,
	0x08, 0x01,
	0x09, 0x00,
	// CABC 15% for UI mode
	0x10, 0x50,
	0x11, 0x01,
	0x12, 0x8A,
	0x15, 0x6A,
	0x16, 0x0B,
	0x29, 0x80,
	0x30, 0xFF,
	0x31, 0xFC,
	0x32, 0xF9,
	0x33, 0xF6,
	0x34, 0xF3,
	0x35, 0xF1,
	0x36, 0xEE,
	0x37, 0xEB,
	0x38, 0xE9,
	0x39, 0xE6,
	0x3A, 0xE4,
	0x3B, 0xE1,
	0x3D, 0xDF,
	0x3F, 0xDD,
	0x40, 0xDB,
	0x41, 0xD9,
	// Dimming step to min (2step)
	0x04, 0x00,
	//SET CMD 0 page
	0xFF, 0x10,
	0xFB, 0x01,
};

static unsigned char SEQ_DEFAULT_BRIGHTNESS[] = {
	0x51,
	0x00, 0x00,
};

static unsigned char SEQ_DEFAULT_BRIGHTNESS_DIMMING[] = {
	0x68,
	0x00, 0x00,
};

static unsigned char SEQ_INIT_4_TABLE[] = {
	//BRIGHTNESS setting
//	0x51, 0x00,
	0x53, 0x2C,
	0x55, 0x01,
};

static const unsigned char SEQ_SLEEP_OUT[] = {
	0x11,
};

static const unsigned char SEQ_DISPLAY_ON[] = {
	0x29,
};

static const unsigned char SEQ_DISPLAY_OFF[] = {
	0x28,
	0x00, 0x00
};

static const unsigned char SEQ_SLEEP_IN[] = {
	0x10,
	0x00, 0x00
};

/* platform brightness <-> bl reg */
static unsigned int brightness_table[EXTEND_BRIGHTNESS + 1] = {
	0,
	24, 32, 41, 50, 59, 67, 76, 85, 94, 103, /* 1: 24 */
	111, 120, 129, 138, 147, 155, 164, 173, 182, 190,
	199, 208, 217, 226, 234, 243, 252, 261, 270, 278,
	287, 296, 305, 313, 322, 331, 340, 349, 357, 366,
	375, 384, 393, 401, 410, 419, 428, 437, 445, 454,
	463, 472, 480, 489, 498, 507, 516, 524, 533, 542,
	551, 560, 568, 577, 586, 595, 603, 612, 621, 630,
	639, 647, 656, 665, 674, 683, 691, 700, 709, 718,
	726, 735, 744, 753, 762, 770, 779, 788, 797, 806,
	814, 823, 832, 841, 850, 858, 867, 876, 885, 893,
	902, 911, 920, 929, 937, 946, 955, 964, 973, 981,
	990, 999, 1008, 1016, 1025, 1034, 1043, 1052, 1060, 1069,
	1078, 1087, 1096, 1104, 1113, 1122, 1131, 1140, 1155, 1170, /* 128: 1140 */
	1185, 1200, 1215, 1230, 1245, 1260, 1276, 1291, 1306, 1321,
	1336, 1351, 1366, 1381, 1397, 1412, 1427, 1442, 1457, 1472,
	1487, 1502, 1517, 1533, 1548, 1563, 1578, 1593, 1608, 1623,
	1638, 1654, 1669, 1684, 1699, 1714, 1729, 1744, 1759, 1774,
	1790, 1805, 1820, 1835, 1850, 1865, 1880, 1895, 1911, 1926,
	1941, 1956, 1971, 1986, 2001, 2016, 2031, 2047, 2062, 2077,
	2092, 2107, 2122, 2137, 2152, 2168, 2183, 2198, 2213, 2228,
	2243, 2258, 2273, 2288, 2304, 2319, 2334, 2349, 2364, 2379,
	2394, 2409, 2425, 2440, 2455, 2470, 2485, 2500, 2515, 2530,
	2545, 2561, 2576, 2591, 2606, 2621, 2636, 2651, 2666, 2682,
	2697, 2712, 2727, 2742, 2757, 2772, 2787, 2802, 2818, 2833,
	2848, 2863, 2878, 2893, 2908, 2923, 2939, 2954, 2969, 2984,
	2999, 3014, 3029, 3044, 3060, 3060, 3060, 3060, 3060, 3060, /* 255: 3060 */
	3060, 3060, 3060, 3060, 3060, 3060, 3060, 3060, 3060, 3060,
	3060, 3060, 3060, 3060, 3060, 3060, 3060, 3060, 3060, 3060,
	3060, 3060, 3060, 3060, 3060, 3060, 3060, 3060, 3060, 3060,
	3060, 3060, 3060, 3060, 3060, 3060, 3060, 3060, 3060, 3060,
	3060, 3060, 3060, 3060, 3060, 3716,
};
#endif /* __NT36672A_PARAM_H__ */
