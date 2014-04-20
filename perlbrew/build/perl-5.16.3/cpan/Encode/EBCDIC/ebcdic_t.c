/*
 !!!!!!!   DO NOT EDIT THIS FILE   !!!!!!!
 This file was autogenerated by:
 /home/babyry/perl5/perlbrew/build/perl-5.16.3/miniperl ../bin/enc2xs -Q -O -o ebcdic_t.c -f ebcdic_t.fnm
 enc2xs VERSION 2.07
*/
#include "encode.h"

static const encpage_t utf8_cp1026[6];
static const encpage_t utf8_cp1047[4];
static const encpage_t utf8_cp37[4];
static const encpage_t utf8_cp500[4];
static const encpage_t utf8_cp875[6];
static const encpage_t utf8_posix_bc[4];

static const U8 enctable[2174] = { 0,1,2,3,55,45,46,47,22,5,21,11,12,13,14,
15,16,17,18,19,60,61,50,38,24,25,63,39,28,29,30,31,64,90,127,123,91,108,80,
125,77,93,92,78,107,96,75,97,240,241,242,243,244,245,246,247,248,249,122,94,
76,126,110,111,124,193,194,195,196,197,198,199,200,201,209,210,211,212,213,
214,215,216,217,226,227,228,229,230,231,232,233,173,224,189,95,109,121,129,
130,131,132,133,134,135,136,137,145,146,147,148,149,150,151,152,153,162,163,
164,165,166,167,168,169,192,79,208,161,7,0,1,2,3,55,45,46,47,22,5,21,11,12,13,
14,15,16,17,18,19,60,61,50,38,24,25,63,39,28,29,30,31,64,90,127,123,91,108,80,
125,77,93,92,78,107,96,75,97,240,241,242,243,244,245,246,247,248,249,122,94,
76,126,110,111,124,193,194,195,196,197,198,199,200,201,209,210,211,212,213,
214,215,216,217,226,227,228,229,230,231,232,233,187,188,189,106,109,74,129,
130,131,132,133,134,135,136,137,145,146,147,148,149,150,151,152,153,162,163,
164,165,166,167,168,169,251,79,253,255,7,0,1,2,3,55,45,46,47,22,5,37,11,12,13,
14,15,16,17,18,19,60,61,50,38,24,25,63,39,28,29,30,31,64,79,127,123,91,108,80,
125,77,93,92,78,107,96,75,97,240,241,242,243,244,245,246,247,248,249,122,94,
76,126,110,111,124,193,194,195,196,197,198,199,200,201,209,210,211,212,213,
214,215,216,217,226,227,228,229,230,231,232,233,74,224,90,95,109,121,129,130,
131,132,133,134,135,136,137,145,146,147,148,149,150,151,152,153,162,163,164,
165,166,167,168,169,192,187,208,161,7,0,1,2,3,55,45,46,47,22,5,37,11,12,13,14,
15,16,17,18,19,60,61,50,38,24,25,63,39,28,29,30,31,64,79,252,236,173,108,80,
125,77,93,92,78,107,96,75,97,240,241,242,243,244,245,246,247,248,249,122,94,
76,126,110,111,174,193,194,195,196,197,198,199,200,201,209,210,211,212,213,
214,215,216,217,226,227,228,229,230,231,232,233,104,220,172,95,109,141,129,
130,131,132,133,134,135,136,137,145,146,147,148,149,150,151,152,153,162,163,
164,165,166,167,168,169,72,187,140,204,7,0,1,2,3,55,45,46,47,22,5,37,11,12,13,
14,15,16,17,18,19,60,61,50,38,24,25,63,39,28,29,30,31,64,90,127,123,91,108,80,
125,77,93,92,78,107,96,75,97,240,241,242,243,244,245,246,247,248,249,122,94,
76,126,110,111,124,193,194,195,196,197,198,199,200,201,209,210,211,212,213,
214,215,216,217,226,227,228,229,230,231,232,233,186,224,187,176,109,121,129,
130,131,132,133,134,135,136,137,145,146,147,148,149,150,151,152,153,162,163,
164,165,166,167,168,169,192,79,208,161,7,0,1,2,3,55,45,46,47,22,5,37,11,12,13,
14,15,16,17,18,19,60,61,50,38,24,25,253,39,28,29,30,31,64,79,127,123,91,108,
80,125,77,93,92,78,107,96,75,97,240,241,242,243,244,245,246,247,248,249,122,
94,76,126,110,111,124,193,194,195,196,197,198,199,200,201,209,210,211,212,213,
214,215,216,217,226,227,228,229,230,231,232,233,74,224,90,95,109,121,129,130,
131,132,133,134,135,136,137,145,146,147,148,149,150,151,152,153,162,163,164,
165,166,167,168,169,192,106,208,161,7,32,33,34,35,36,21,6,23,40,41,42,43,44,9,
10,27,48,49,26,51,52,53,54,8,56,57,58,59,4,20,62,255,65,170,74,177,159,178,
106,181,189,180,154,138,95,202,175,188,144,143,234,250,190,160,182,179,157,
218,155,139,183,184,185,171,32,33,34,35,36,21,6,23,40,41,42,43,44,9,10,27,48,
49,26,51,52,53,54,8,56,57,58,59,4,20,62,255,65,170,176,177,159,178,106,181,
189,180,154,138,186,202,175,188,144,143,234,250,190,160,182,179,157,218,155,
139,183,184,185,171,32,33,34,35,36,21,6,23,40,41,42,43,44,9,10,27,48,49,26,51,
52,53,54,8,56,57,58,59,4,20,62,255,65,170,176,177,159,178,142,181,189,180,154,
138,186,202,175,188,144,143,234,250,190,160,182,179,157,218,155,139,183,184,
185,171,32,33,34,35,36,37,6,23,40,41,42,43,44,9,10,27,48,49,26,51,52,53,54,8,
56,57,58,59,4,20,62,95,65,170,176,177,159,178,208,181,121,180,154,138,186,202,
175,161,144,143,234,250,190,160,182,179,157,218,155,139,183,184,185,171,32,33,
34,35,36,37,6,23,40,41,42,43,44,9,10,27,48,49,26,51,52,53,54,8,56,57,58,59,4,
20,62,255,65,170,74,177,159,178,106,181,187,180,154,138,176,202,175,188,144,
143,234,250,190,160,182,179,157,218,155,139,183,184,185,171,100,101,98,102,99,
103,158,104,116,113,114,115,120,117,118,119,172,105,237,238,235,239,236,191,
128,224,254,221,252,173,174,89,68,69,66,70,67,71,156,72,84,81,82,83,88,85,86,
87,140,73,205,206,203,207,204,225,112,192,222,219,220,141,142,223,100,101,98,
102,99,103,158,104,116,113,114,115,120,117,118,119,172,105,237,238,235,239,
236,191,128,253,254,251,252,173,174,89,68,69,66,70,67,71,156,72,84,81,82,83,
88,85,86,87,140,73,205,206,203,207,204,225,112,221,222,219,220,141,142,223,
100,101,98,102,99,103,158,104,116,113,114,115,120,117,118,119,172,105,237,238,
235,239,236,191,128,253,254,251,252,186,174,89,68,69,66,70,67,71,156,72,84,81,
82,83,88,85,86,87,140,73,205,206,203,207,204,225,112,221,222,219,220,141,142,
223,206,189,206,190,206,191,207,128,207,129,207,131,194,163,206,172,206,173,
206,174,207,138,206,175,207,140,207,141,207,139,207,142,207,130,207,132,207,
133,207,134,207,135,207,136,194,161,194,191,195,144,195,157,195,158,194,174,
194,162,194,163,194,165,194,183,194,169,194,167,194,182,194,188,194,189,194,
190,194,172,32,33,34,35,36,21,6,23,40,41,42,43,44,9,10,27,48,49,26,51,52,53,
54,8,56,57,58,59,4,20,62,255,116,195,158,194,174,194,172,194,163,194,165,194,
183,194,169,194,167,194,182,194,188,194,189,194,190,195,157,194,168,194,175,
89,98,99,100,101,102,103,104,105,177,178,179,181,205,138,139,140,141,142,143,
154,155,156,157,158,159,170,171,172,195,169,195,170,195,171,195,168,195,173,
195,174,195,175,195,172,195,159,196,158,196,176,119,120,204,65,66,67,68,69,70,
71,72,73,81,82,83,84,85,86,87,88,194,160,195,162,195,164,195,160,195,161,195,
163,195,165,195,167,195,177,194,162,195,184,195,137,195,138,195,139,195,136,
195,141,195,142,195,143,195,140,194,168,195,184,195,137,195,138,195,139,195,
136,195,141,195,142,195,143,195,140,196,177,194,168,206,134,206,136,206,137,
194,160,206,138,206,140,206,142,206,143,195,130,195,132,195,128,195,129,195,
131,195,133,195,135,195,145,194,166,206,145,206,146,206,147,206,148,206,149,
206,150,206,151,206,152,206,153,206,154,206,155,206,156,206,157,206,158,206,
159,206,160,206,161,206,163,89,68,69,66,70,67,71,156,192,84,81,82,83,88,85,86,
87,100,101,98,102,99,103,158,74,116,113,114,115,120,117,118,119,194,170,194,
186,195,166,194,184,195,134,194,164,194,181,194,175,194,170,194,186,195,166,
194,184,195,134,194,164,194,181,195,182,194,185,195,187,195,188,195,155,195,
186,195,191,195,153,195,183,206,164,206,165,206,166,206,167,206,168,206,169,
206,170,206,171,173,174,186,175,187,188,189,190,191,203,180,184,182,183,185,
194,171,194,187,195,176,195,189,195,190,194,177,194,176,194,173,195,180,195,
182,195,178,195,179,195,181,194,166,206,177,206,178,206,179,206,180,206,181,
206,182,194,176,206,183,206,184,206,185,206,186,206,187,206,188,194,180,73,
205,206,203,207,161,225,112,221,222,219,224,105,237,238,235,239,123,191,128,
253,254,251,127,194,128,194,129,194,130,194,131,194,132,194,133,194,178,195,
148,195,150,195,146,195,147,195,149,194,179,195,155,195,156,195,153,195,154,
194,159,194,185,195,187,195,188,195,185,195,186,195,191,48,49,50,51,52,53,54,
55,56,57,123,65,66,67,68,69,70,71,72,73,125,74,75,76,77,78,79,80,81,82,194,
136,194,137,194,138,194,139,194,140,194,175,194,168,194,180,195,151,195,167,
195,185,195,186,195,191,195,188,195,183,97,98,99,100,101,102,103,104,105,106,
107,108,109,110,111,112,113,114,126,115,116,117,118,119,120,121,122,33,36,42,
41,59,94,45,47,83,84,85,86,87,88,89,90,93,36,42,41,59,94,45,47,194,147,194,
148,194,149,194,150,194,152,194,153,194,154,194,155,194,173,207,137,206,144,
206,176,195,178,195,179,195,181,196,159,91,46,60,40,43,33,38,96,46,60,40,43,
124,38,96,58,35,64,39,61,34,94,44,37,95,62,63,124,44,37,95,62,63,128,113,221,
114,115,117,194,151,194,141,194,142,194,166,194,177,194,176,194,180,195,151,
195,185,226,128,152,226,128,149,144,218,234,250,160,194,144,194,145,194,146,
194,143,194,157,194,133,194,171,194,172,194,177,194,189,194,178,194,167,194,
179,194,169,194,187,194,159,195,145,197,159,195,150,197,158,195,156,195,152,
195,177,195,135,223,235,112,251,5,6,7,10,23,27,91,92,93,36,64,226,128,153,238,
239,202,10,8,20,21,26,32,90,208,91,93,91,121,124,106,125,96,194,134,194,135,
194,156,194,158,206,133,206,135,206,222 };

static const encpage_t cp1026_utf8[68] = {
{enctable + 0,cp1026_utf8,0x00,0x03,1,1},
{enctable + 2164,cp1026_utf8,0x04,0x04,2,1},
{enctable + 781,cp1026_utf8,0x05,0x05,1,1},
{enctable + 2160,cp1026_utf8,0x06,0x06,2,1},
{enctable + 34,cp1026_utf8,0x07,0x07,1,1},
{enctable + 2046,cp1026_utf8,0x08,0x0a,2,1},
{enctable + 11,cp1026_utf8,0x0b,0x13,1,1},
{enctable + 2083,cp1026_utf8,0x14,0x15,2,1},
{enctable + 791,cp1026_utf8,0x16,0x16,1,1},
{enctable + 2162,cp1026_utf8,0x17,0x17,2,1},
{enctable + 24,cp1026_utf8,0x18,0x19,1,1},
{enctable + 2079,cp1026_utf8,0x1a,0x1b,2,1},
{enctable + 28,cp1026_utf8,0x1c,0x1f,1,1},
{enctable + 1816,cp1026_utf8,0x20,0x24,2,1},
{enctable + 2130,cp1026_utf8,0x25,0x27,1,1},
{enctable + 1894,cp1026_utf8,0x28,0x2c,2,1},
{enctable + 2127,cp1026_utf8,0x2d,0x2f,1,1},
{enctable + 2075,cp1026_utf8,0x30,0x31,2,1},
{enctable + 8,cp1026_utf8,0x32,0x32,1,1},
{enctable + 1975,cp1026_utf8,0x33,0x36,2,1},
{enctable + 796,cp1026_utf8,0x37,0x37,1,1},
{enctable + 1983,cp1026_utf8,0x38,0x3b,2,1},
{enctable + 2146,cp1026_utf8,0x3c,0x3d,1,1},
{enctable + 2166,cp1026_utf8,0x3e,0x3e,2,1},
{enctable + 2148,cp1026_utf8,0x3f,0x40,1,1},
{enctable + 1492,cp1026_utf8,0x41,0x47,2,1},
{enctable + 35,cp1026_utf8,0x48,0x48,1,1},
{enctable + 2119,cp1026_utf8,0x49,0x4a,2,1},
{enctable + 2008,cp1026_utf8,0x4b,0x50,1,1},
{enctable + 1450,cp1026_utf8,0x51,0x5b,2,1},
{enctable + 1953,cp1026_utf8,0x5c,0x61,1,1},
{enctable + 1570,cp1026_utf8,0x62,0x67,2,1},
{enctable + 36,cp1026_utf8,0x68,0x68,1,1},
{enctable + 2107,cp1026_utf8,0x69,0x6a,2,1},
{enctable + 2029,cp1026_utf8,0x6b,0x6f,1,1},
{enctable + 1532,cp1026_utf8,0x70,0x79,2,1},
{enctable + 794,cp1026_utf8,0x7a,0x7a,1,1},
{enctable + 2111,cp1026_utf8,0x7b,0x7c,2,1},
{enctable + 2025,cp1026_utf8,0x7d,0x7e,1,1},
{enctable + 2115,cp1026_utf8,0x7f,0x80,2,1},
{enctable + 1924,cp1026_utf8,0x81,0x89,1,1},
{enctable + 1736,cp1026_utf8,0x8a,0x8b,2,1},
{enctable + 2158,cp1026_utf8,0x8c,0x8d,1,1},
{enctable + 2052,cp1026_utf8,0x8e,0x90,2,1},
{enctable + 1933,cp1026_utf8,0x91,0x99,1,1},
{enctable + 1673,cp1026_utf8,0x9a,0xa1,2,1},
{enctable + 1943,cp1026_utf8,0xa2,0xa9,1,1},
{enctable + 1324,cp1026_utf8,0xaa,0xab,2,1},
{enctable + 2135,cp1026_utf8,0xac,0xae,1,1},
{enctable + 1334,cp1026_utf8,0xaf,0xba,2,1},
{enctable + 64,cp1026_utf8,0xbb,0xbb,1,1},
{enctable + 1904,cp1026_utf8,0xbc,0xc0,2,1},
{enctable + 1475,cp1026_utf8,0xc1,0xc9,1,1},
{enctable + 1750,cp1026_utf8,0xca,0xcb,2,1},
{enctable + 61,cp1026_utf8,0xcc,0xcc,1,1},
{enctable + 1999,cp1026_utf8,0xcd,0xd0,2,1},
{enctable + 1885,cp1026_utf8,0xd1,0xd9,1,1},
{enctable + 1689,cp1026_utf8,0xda,0xdb,2,1},
{enctable + 42,cp1026_utf8,0xdc,0xdc,1,1},
{enctable + 1914,cp1026_utf8,0xdd,0xe1,2,1},
{enctable + 1959,cp1026_utf8,0xe2,0xe9,1,1},
{enctable + 1828,cp1026_utf8,0xea,0xeb,2,1},
{enctable + 771,cp1026_utf8,0xec,0xec,1,1},
{enctable + 1834,cp1026_utf8,0xed,0xef,2,1},
{enctable + 1864,cp1026_utf8,0xf0,0xf9,1,1},
{enctable + 1840,cp1026_utf8,0xfa,0xfb,2,1},
{enctable + 770,cp1026_utf8,0xfc,0xfc,1,1},
{enctable + 1846,cp1026_utf8,0xfd,0xff,2,1},
};

static const encpage_t utf8_cp1026_c2[2] = {
{enctable + 896,utf8_cp1026,0x80,0xbf,1,1},
{0,utf8_cp1026_c2,0xc0,0xff,0,0},
};

static const encpage_t utf8_cp1026_c3[6] = {
{enctable + 1641,utf8_cp1026,0x80,0x8f,1,1},
{enctable + 1804,utf8_cp1026,0x91,0x9c,1,1},
{enctable + 1624,utf8_cp1026,0x9f,0xaf,1,1},
{enctable + 1792,utf8_cp1026,0xb1,0xbc,1,1},
{enctable + 1151,utf8_cp1026,0xbf,0xbf,1,1},
{0,utf8_cp1026_c3,0xc0,0xff,0,0},
};

static const encpage_t utf8_cp1026_c4[3] = {
{enctable + 2150,utf8_cp1026,0x9e,0x9f,1,1},
{enctable + 2154,utf8_cp1026,0xb0,0xb1,1,1},
{0,utf8_cp1026_c4,0xb2,0xff,0,0},
};

static const encpage_t utf8_cp1026_c5[2] = {
{enctable + 2156,utf8_cp1026,0x9e,0x9f,1,1},
{0,utf8_cp1026_c5,0xa0,0xff,0,0},
};

static const encpage_t utf8_cp1026[6] = {
{enctable + 384,utf8_cp1026,0x00,0x7f,1,1},
{0,utf8_cp1026_c2,0xc2,0xc2,0,2},
{0,utf8_cp1026_c3,0xc3,0xc3,0,2},
{0,utf8_cp1026_c4,0xc4,0xc4,0,2},
{0,utf8_cp1026_c5,0xc5,0xc5,0,2},
{0,utf8_cp1026,0xc6,0xff,0,0},
};

static const encpage_t cp1047_utf8[54] = {
{enctable + 0,cp1047_utf8,0x00,0x03,1,1},
{enctable + 2164,cp1047_utf8,0x04,0x04,2,1},
{enctable + 781,cp1047_utf8,0x05,0x05,1,1},
{enctable + 2160,cp1047_utf8,0x06,0x06,2,1},
{enctable + 34,cp1047_utf8,0x07,0x07,1,1},
{enctable + 2046,cp1047_utf8,0x08,0x0a,2,1},
{enctable + 11,cp1047_utf8,0x0b,0x13,1,1},
{enctable + 2083,cp1047_utf8,0x14,0x14,2,1},
{enctable + 2144,cp1047_utf8,0x15,0x16,1,1},
{enctable + 2162,cp1047_utf8,0x17,0x17,2,1},
{enctable + 24,cp1047_utf8,0x18,0x19,1,1},
{enctable + 2079,cp1047_utf8,0x1a,0x1b,2,1},
{enctable + 28,cp1047_utf8,0x1c,0x1f,1,1},
{enctable + 1816,cp1047_utf8,0x20,0x25,2,1},
{enctable + 2131,cp1047_utf8,0x26,0x27,1,1},
{enctable + 1894,cp1047_utf8,0x28,0x2c,2,1},
{enctable + 2127,cp1047_utf8,0x2d,0x2f,1,1},
{enctable + 2075,cp1047_utf8,0x30,0x31,2,1},
{enctable + 8,cp1047_utf8,0x32,0x32,1,1},
{enctable + 1975,cp1047_utf8,0x33,0x36,2,1},
{enctable + 796,cp1047_utf8,0x37,0x37,1,1},
{enctable + 1983,cp1047_utf8,0x38,0x3b,2,1},
{enctable + 2146,cp1047_utf8,0x3c,0x3d,1,1},
{enctable + 2166,cp1047_utf8,0x3e,0x3e,2,1},
{enctable + 2148,cp1047_utf8,0x3f,0x40,1,1},
{enctable + 1492,cp1047_utf8,0x41,0x4a,2,1},
{enctable + 2015,cp1047_utf8,0x4b,0x50,1,1},
{enctable + 1450,cp1047_utf8,0x51,0x59,2,1},
{enctable + 1951,cp1047_utf8,0x5a,0x61,1,1},
{enctable + 1570,cp1047_utf8,0x62,0x6a,2,1},
{enctable + 2029,cp1047_utf8,0x6b,0x6f,1,1},
{enctable + 1512,cp1047_utf8,0x70,0x78,2,1},
{enctable + 2021,cp1047_utf8,0x79,0x7f,1,1},
{enctable + 2117,cp1047_utf8,0x80,0x80,2,1},
{enctable + 1924,cp1047_utf8,0x81,0x89,1,1},
{enctable + 1736,cp1047_utf8,0x8a,0x90,2,1},
{enctable + 1933,cp1047_utf8,0x91,0x99,1,1},
{enctable + 1657,cp1047_utf8,0x9a,0xa0,2,1},
{enctable + 1942,cp1047_utf8,0xa1,0xa9,1,1},
{enctable + 1324,cp1047_utf8,0xaa,0xac,2,1},
{enctable + 36,cp1047_utf8,0xad,0xad,1,1},
{enctable + 1391,cp1047_utf8,0xae,0xbc,2,1},
{enctable + 41,cp1047_utf8,0xbd,0xbd,1,1},
{enctable + 1908,cp1047_utf8,0xbe,0xbf,2,1},
{enctable + 1874,cp1047_utf8,0xc0,0xc9,1,1},
{enctable + 1750,cp1047_utf8,0xca,0xcf,2,1},
{enctable + 1884,cp1047_utf8,0xd0,0xd9,1,1},
{enctable + 1852,cp1047_utf8,0xda,0xdf,2,1},
{enctable + 42,cp1047_utf8,0xe0,0xe0,1,1},
{enctable + 1703,cp1047_utf8,0xe1,0xe1,2,1},
{enctable + 1959,cp1047_utf8,0xe2,0xe9,1,1},
{enctable + 1828,cp1047_utf8,0xea,0xef,2,1},
{enctable + 1864,cp1047_utf8,0xf0,0xf9,1,1},
{enctable + 1840,cp1047_utf8,0xfa,0xff,2,1},
};

static const encpage_t utf8_cp1047_c2[2] = {
{enctable + 1024,utf8_cp1047,0x80,0xbf,1,1},
{0,utf8_cp1047_c2,0xc0,0xff,0,0},
};

static const encpage_t utf8_cp1047_c3[2] = {
{enctable + 1216,utf8_cp1047,0x80,0xbf,1,1},
{0,utf8_cp1047_c3,0xc0,0xff,0,0},
};

static const encpage_t utf8_cp1047[4] = {
{enctable + 0,utf8_cp1047,0x00,0x7f,1,1},
{0,utf8_cp1047_c2,0xc2,0xc2,0,2},
{0,utf8_cp1047_c3,0xc3,0xc3,0,2},
{0,utf8_cp1047,0xc4,0xff,0,0},
};

static const encpage_t cp37_utf8[56] = {
{enctable + 0,cp37_utf8,0x00,0x03,1,1},
{enctable + 2164,cp37_utf8,0x04,0x04,2,1},
{enctable + 781,cp37_utf8,0x05,0x05,1,1},
{enctable + 2160,cp37_utf8,0x06,0x06,2,1},
{enctable + 34,cp37_utf8,0x07,0x07,1,1},
{enctable + 2046,cp37_utf8,0x08,0x0a,2,1},
{enctable + 11,cp37_utf8,0x0b,0x13,1,1},
{enctable + 2083,cp37_utf8,0x14,0x15,2,1},
{enctable + 791,cp37_utf8,0x16,0x16,1,1},
{enctable + 2162,cp37_utf8,0x17,0x17,2,1},
{enctable + 24,cp37_utf8,0x18,0x19,1,1},
{enctable + 2079,cp37_utf8,0x1a,0x1b,2,1},
{enctable + 28,cp37_utf8,0x1c,0x1f,1,1},
{enctable + 1816,cp37_utf8,0x20,0x24,2,1},
{enctable + 2130,cp37_utf8,0x25,0x27,1,1},
{enctable + 1894,cp37_utf8,0x28,0x2c,2,1},
{enctable + 2127,cp37_utf8,0x2d,0x2f,1,1},
{enctable + 2075,cp37_utf8,0x30,0x31,2,1},
{enctable + 8,cp37_utf8,0x32,0x32,1,1},
{enctable + 1975,cp37_utf8,0x33,0x36,2,1},
{enctable + 796,cp37_utf8,0x37,0x37,1,1},
{enctable + 1983,cp37_utf8,0x38,0x3b,2,1},
{enctable + 2146,cp37_utf8,0x3c,0x3d,1,1},
{enctable + 2166,cp37_utf8,0x3e,0x3e,2,1},
{enctable + 2148,cp37_utf8,0x3f,0x40,1,1},
{enctable + 1492,cp37_utf8,0x41,0x4a,2,1},
{enctable + 2015,cp37_utf8,0x4b,0x50,1,1},
{enctable + 1450,cp37_utf8,0x51,0x59,2,1},
{enctable + 1951,cp37_utf8,0x5a,0x5e,1,1},
{enctable + 1356,cp37_utf8,0x5f,0x5f,2,1},
{enctable + 1957,cp37_utf8,0x60,0x61,1,1},
{enctable + 1570,cp37_utf8,0x62,0x6a,2,1},
{enctable + 2029,cp37_utf8,0x6b,0x6f,1,1},
{enctable + 1512,cp37_utf8,0x70,0x78,2,1},
{enctable + 2021,cp37_utf8,0x79,0x7f,1,1},
{enctable + 2117,cp37_utf8,0x80,0x80,2,1},
{enctable + 1924,cp37_utf8,0x81,0x89,1,1},
{enctable + 1736,cp37_utf8,0x8a,0x90,2,1},
{enctable + 1933,cp37_utf8,0x91,0x99,1,1},
{enctable + 1657,cp37_utf8,0x9a,0xa0,2,1},
{enctable + 1942,cp37_utf8,0xa1,0xa9,1,1},
{enctable + 1324,cp37_utf8,0xaa,0xaf,2,1},
{enctable + 59,cp37_utf8,0xb0,0xb0,1,1},
{enctable + 1338,cp37_utf8,0xb1,0xb9,2,1},
{enctable + 2152,cp37_utf8,0xba,0xbb,1,1},
{enctable + 1904,cp37_utf8,0xbc,0xbf,2,1},
{enctable + 1874,cp37_utf8,0xc0,0xc9,1,1},
{enctable + 1750,cp37_utf8,0xca,0xcf,2,1},
{enctable + 1884,cp37_utf8,0xd0,0xd9,1,1},
{enctable + 1852,cp37_utf8,0xda,0xdf,2,1},
{enctable + 42,cp37_utf8,0xe0,0xe0,1,1},
{enctable + 1703,cp37_utf8,0xe1,0xe1,2,1},
{enctable + 1959,cp37_utf8,0xe2,0xe9,1,1},
{enctable + 1828,cp37_utf8,0xea,0xef,2,1},
{enctable + 1864,cp37_utf8,0xf0,0xf9,1,1},
{enctable + 1840,cp37_utf8,0xfa,0xff,2,1},
};

static const encpage_t utf8_cp37_c2[2] = {
{enctable + 768,utf8_cp37,0x80,0xbf,1,1},
{0,utf8_cp37_c2,0xc0,0xff,0,0},
};

static const encpage_t utf8_cp37_c3[2] = {
{enctable + 1152,utf8_cp37,0x80,0xbf,1,1},
{0,utf8_cp37_c3,0xc0,0xff,0,0},
};

static const encpage_t utf8_cp37[4] = {
{enctable + 512,utf8_cp37,0x00,0x7f,1,1},
{0,utf8_cp37_c2,0xc2,0xc2,0,2},
{0,utf8_cp37_c3,0xc3,0xc3,0,2},
{0,utf8_cp37,0xc4,0xff,0,0},
};

static const encpage_t cp500_utf8[52] = {
{enctable + 0,cp500_utf8,0x00,0x03,1,1},
{enctable + 2164,cp500_utf8,0x04,0x04,2,1},
{enctable + 781,cp500_utf8,0x05,0x05,1,1},
{enctable + 2160,cp500_utf8,0x06,0x06,2,1},
{enctable + 34,cp500_utf8,0x07,0x07,1,1},
{enctable + 2046,cp500_utf8,0x08,0x0a,2,1},
{enctable + 11,cp500_utf8,0x0b,0x13,1,1},
{enctable + 2083,cp500_utf8,0x14,0x15,2,1},
{enctable + 791,cp500_utf8,0x16,0x16,1,1},
{enctable + 2162,cp500_utf8,0x17,0x17,2,1},
{enctable + 24,cp500_utf8,0x18,0x19,1,1},
{enctable + 2079,cp500_utf8,0x1a,0x1b,2,1},
{enctable + 28,cp500_utf8,0x1c,0x1f,1,1},
{enctable + 1816,cp500_utf8,0x20,0x24,2,1},
{enctable + 2130,cp500_utf8,0x25,0x27,1,1},
{enctable + 1894,cp500_utf8,0x28,0x2c,2,1},
{enctable + 2127,cp500_utf8,0x2d,0x2f,1,1},
{enctable + 2075,cp500_utf8,0x30,0x31,2,1},
{enctable + 8,cp500_utf8,0x32,0x32,1,1},
{enctable + 1975,cp500_utf8,0x33,0x36,2,1},
{enctable + 796,cp500_utf8,0x37,0x37,1,1},
{enctable + 1983,cp500_utf8,0x38,0x3b,2,1},
{enctable + 2146,cp500_utf8,0x3c,0x3d,1,1},
{enctable + 2166,cp500_utf8,0x3e,0x3e,2,1},
{enctable + 2148,cp500_utf8,0x3f,0x40,1,1},
{enctable + 1492,cp500_utf8,0x41,0x49,2,1},
{enctable + 2007,cp500_utf8,0x4a,0x50,1,1},
{enctable + 1450,cp500_utf8,0x51,0x59,2,1},
{enctable + 1967,cp500_utf8,0x5a,0x61,1,1},
{enctable + 1570,cp500_utf8,0x62,0x6a,2,1},
{enctable + 2029,cp500_utf8,0x6b,0x6f,1,1},
{enctable + 1512,cp500_utf8,0x70,0x78,2,1},
{enctable + 2021,cp500_utf8,0x79,0x7f,1,1},
{enctable + 2117,cp500_utf8,0x80,0x80,2,1},
{enctable + 1924,cp500_utf8,0x81,0x89,1,1},
{enctable + 1736,cp500_utf8,0x8a,0x90,2,1},
{enctable + 1933,cp500_utf8,0x91,0x99,1,1},
{enctable + 1657,cp500_utf8,0x9a,0xa0,2,1},
{enctable + 1942,cp500_utf8,0xa1,0xa9,1,1},
{enctable + 1324,cp500_utf8,0xaa,0xba,2,1},
{enctable + 64,cp500_utf8,0xbb,0xbb,1,1},
{enctable + 1904,cp500_utf8,0xbc,0xbf,2,1},
{enctable + 1874,cp500_utf8,0xc0,0xc9,1,1},
{enctable + 1750,cp500_utf8,0xca,0xcf,2,1},
{enctable + 1884,cp500_utf8,0xd0,0xd9,1,1},
{enctable + 1852,cp500_utf8,0xda,0xdf,2,1},
{enctable + 42,cp500_utf8,0xe0,0xe0,1,1},
{enctable + 1703,cp500_utf8,0xe1,0xe1,2,1},
{enctable + 1959,cp500_utf8,0xe2,0xe9,1,1},
{enctable + 1828,cp500_utf8,0xea,0xef,2,1},
{enctable + 1864,cp500_utf8,0xf0,0xf9,1,1},
{enctable + 1840,cp500_utf8,0xfa,0xff,2,1},
};

static const encpage_t utf8_cp500_c2[2] = {
{enctable + 832,utf8_cp500,0x80,0xbf,1,1},
{0,utf8_cp500_c2,0xc0,0xff,0,0},
};

static const encpage_t utf8_cp500_c3[2] = {
{enctable + 1152,utf8_cp500,0x80,0xbf,1,1},
{0,utf8_cp500_c3,0xc0,0xff,0,0},
};

static const encpage_t utf8_cp500[4] = {
{enctable + 256,utf8_cp500,0x00,0x7f,1,1},
{0,utf8_cp500_c2,0xc2,0xc2,0,2},
{0,utf8_cp500_c3,0xc3,0xc3,0,2},
{0,utf8_cp500,0xc4,0xff,0,0},
};

static const encpage_t cp875_utf8[56] = {
{enctable + 0,cp875_utf8,0x00,0x03,1,1},
{enctable + 2164,cp875_utf8,0x04,0x04,2,1},
{enctable + 781,cp875_utf8,0x05,0x05,1,1},
{enctable + 2160,cp875_utf8,0x06,0x06,2,1},
{enctable + 34,cp875_utf8,0x07,0x07,1,1},
{enctable + 2046,cp875_utf8,0x08,0x0a,2,1},
{enctable + 11,cp875_utf8,0x0b,0x13,1,1},
{enctable + 2083,cp875_utf8,0x14,0x15,2,1},
{enctable + 791,cp875_utf8,0x16,0x16,1,1},
{enctable + 2162,cp875_utf8,0x17,0x17,2,1},
{enctable + 24,cp875_utf8,0x18,0x19,1,1},
{enctable + 2079,cp875_utf8,0x1a,0x1b,2,1},
{enctable + 28,cp875_utf8,0x1c,0x1f,1,1},
{enctable + 1816,cp875_utf8,0x20,0x24,2,1},
{enctable + 2130,cp875_utf8,0x25,0x27,1,1},
{enctable + 1894,cp875_utf8,0x28,0x2c,2,1},
{enctable + 2127,cp875_utf8,0x2d,0x2f,1,1},
{enctable + 2075,cp875_utf8,0x30,0x31,2,1},
{enctable + 8,cp875_utf8,0x32,0x32,1,1},
{enctable + 1975,cp875_utf8,0x33,0x36,2,1},
{enctable + 796,cp875_utf8,0x37,0x37,1,1},
{enctable + 1983,cp875_utf8,0x38,0x3b,2,1},
{enctable + 2146,cp875_utf8,0x3c,0x3d,1,1},
{enctable + 2166,cp875_utf8,0x3e,0x3e,2,1},
{enctable + 768,cp875_utf8,0x40,0x40,1,1},
{enctable + 1588,cp875_utf8,0x41,0x49,2,1},
{enctable + 2007,cp875_utf8,0x4a,0x50,1,1},
{enctable + 1606,cp875_utf8,0x51,0x59,2,1},
{enctable + 1967,cp875_utf8,0x5a,0x61,1,1},
{enctable + 1705,cp875_utf8,0x62,0x69,2,1},
{enctable + 2034,cp875_utf8,0x6a,0x6f,1,1},
{enctable + 1552,cp875_utf8,0x70,0x78,2,1},
{enctable + 2021,cp875_utf8,0x79,0x7f,1,1},
{enctable + 2168,cp875_utf8,0x80,0x80,2,1},
{enctable + 1924,cp875_utf8,0x81,0x89,1,1},
{enctable + 1764,cp875_utf8,0x8a,0x90,2,1},
{enctable + 1933,cp875_utf8,0x91,0x99,1,1},
{enctable + 1778,cp875_utf8,0x9a,0xa0,2,1},
{enctable + 1942,cp875_utf8,0xa1,0xa9,1,1},
{enctable + 1280,cp875_utf8,0xaa,0xbf,2,1},
{enctable + 1874,cp875_utf8,0xc0,0xc9,1,1},
{enctable + 1991,cp875_utf8,0xca,0xcd,2,1},
{enctable + 2064,cp875_utf8,0xce,0xcf,3,1},
{enctable + 1884,cp875_utf8,0xd0,0xd9,1,1},
{enctable + 2091,cp875_utf8,0xda,0xdb,2,1},
{enctable + 2170,cp875_utf8,0xdd,0xdd,2,1},
{enctable + 2138,cp875_utf8,0xde,0xde,3,1},
{enctable + 1586,cp875_utf8,0xdf,0xdf,2,1},
{enctable + 42,cp875_utf8,0xe0,0xe0,1,1},
{enctable + 1959,cp875_utf8,0xe2,0xe9,1,1},
{enctable + 2095,cp875_utf8,0xea,0xeb,2,1},
{enctable + 2087,cp875_utf8,0xee,0xef,2,1},
{enctable + 1864,cp875_utf8,0xf0,0xf9,1,1},
{enctable + 2099,cp875_utf8,0xfa,0xfb,2,1},
{enctable + 786,cp875_utf8,0xfd,0xfd,1,1},
{enctable + 2103,cp875_utf8,0xfe,0xff,2,1},
};

static const encpage_t utf8_cp875_c2[8] = {
{enctable + 1358,utf8_cp875,0x80,0xa0,1,1},
{enctable + 606,utf8_cp875,0xa3,0xa3,1,1},
{enctable + 2123,utf8_cp875,0xa6,0xa9,1,1},
{enctable + 2141,utf8_cp875,0xab,0xad,1,1},
{enctable + 2070,utf8_cp875,0xb0,0xb4,1,1},
{enctable + 1114,utf8_cp875,0xbb,0xbb,1,1},
{enctable + 1147,utf8_cp875,0xbd,0xbd,1,1},
{0,utf8_cp875_c2,0xbe,0xff,0,0},
};

static const encpage_t utf8_cp875_ce[5] = {
{enctable + 2040,utf8_cp875,0x85,0x8a,1,1},
{enctable + 1102,utf8_cp875,0x8c,0x8c,1,1},
{enctable + 1472,utf8_cp875,0x8e,0xa1,1,1},
{enctable + 1421,utf8_cp875,0xa3,0xbf,1,1},
{0,utf8_cp875_ce,0xc0,0xff,0,0},
};

static const encpage_t utf8_cp875_cf[2] = {
{enctable + 1721,utf8_cp875,0x80,0x8e,1,1},
{0,utf8_cp875_cf,0x8f,0xff,0,0},
};

static const encpage_t utf8_cp875_e2_80[3] = {
{enctable + 1141,utf8_cp875,0x95,0x95,1,1},
{enctable + 2172,utf8_cp875,0x98,0x99,1,1},
{0,utf8_cp875_e2_80,0x9a,0xff,0,0},
};

static const encpage_t utf8_cp875_e2[2] = {
{0,utf8_cp875_e2_80,0x80,0x80,0,2},
{0,utf8_cp875_e2,0x81,0xff,0,0},
};

static const encpage_t utf8_cp875[6] = {
{enctable + 640,utf8_cp875,0x00,0x7f,1,1},
{0,utf8_cp875_c2,0xc2,0xc2,0,2},
{0,utf8_cp875_ce,0xce,0xce,0,2},
{0,utf8_cp875_cf,0xcf,0xcf,0,2},
{0,utf8_cp875_e2,0xe2,0xe2,0,3},
{0,utf8_cp875,0xe3,0xff,0,0},
};

static const encpage_t posix_bc_utf8[57] = {
{enctable + 0,posix_bc_utf8,0x00,0x03,1,1},
{enctable + 2164,posix_bc_utf8,0x04,0x04,2,1},
{enctable + 781,posix_bc_utf8,0x05,0x05,1,1},
{enctable + 2160,posix_bc_utf8,0x06,0x06,2,1},
{enctable + 34,posix_bc_utf8,0x07,0x07,1,1},
{enctable + 2046,posix_bc_utf8,0x08,0x0a,2,1},
{enctable + 11,posix_bc_utf8,0x0b,0x13,1,1},
{enctable + 2083,posix_bc_utf8,0x14,0x14,2,1},
{enctable + 2144,posix_bc_utf8,0x15,0x16,1,1},
{enctable + 2162,posix_bc_utf8,0x17,0x17,2,1},
{enctable + 24,posix_bc_utf8,0x18,0x19,1,1},
{enctable + 2079,posix_bc_utf8,0x1a,0x1b,2,1},
{enctable + 28,posix_bc_utf8,0x1c,0x1f,1,1},
{enctable + 1816,posix_bc_utf8,0x20,0x25,2,1},
{enctable + 2131,posix_bc_utf8,0x26,0x27,1,1},
{enctable + 1894,posix_bc_utf8,0x28,0x2c,2,1},
{enctable + 2127,posix_bc_utf8,0x2d,0x2f,1,1},
{enctable + 2075,posix_bc_utf8,0x30,0x31,2,1},
{enctable + 8,posix_bc_utf8,0x32,0x32,1,1},
{enctable + 1975,posix_bc_utf8,0x33,0x36,2,1},
{enctable + 796,posix_bc_utf8,0x37,0x37,1,1},
{enctable + 1983,posix_bc_utf8,0x38,0x3b,2,1},
{enctable + 2146,posix_bc_utf8,0x3c,0x3d,1,1},
{enctable + 2166,posix_bc_utf8,0x3e,0x3e,2,1},
{enctable + 2148,posix_bc_utf8,0x3f,0x40,1,1},
{enctable + 1492,posix_bc_utf8,0x41,0x49,2,1},
{enctable + 2014,posix_bc_utf8,0x4a,0x50,1,1},
{enctable + 1450,posix_bc_utf8,0x51,0x59,2,1},
{enctable + 1951,posix_bc_utf8,0x5a,0x5e,1,1},
{enctable + 1850,posix_bc_utf8,0x5f,0x5f,2,1},
{enctable + 1957,posix_bc_utf8,0x60,0x61,1,1},
{enctable + 1570,posix_bc_utf8,0x62,0x69,2,1},
{enctable + 2028,posix_bc_utf8,0x6a,0x6f,1,1},
{enctable + 1512,posix_bc_utf8,0x70,0x79,2,1},
{enctable + 2022,posix_bc_utf8,0x7a,0x7f,1,1},
{enctable + 2117,posix_bc_utf8,0x80,0x80,2,1},
{enctable + 1924,posix_bc_utf8,0x81,0x89,1,1},
{enctable + 1736,posix_bc_utf8,0x8a,0x90,2,1},
{enctable + 1933,posix_bc_utf8,0x91,0x99,1,1},
{enctable + 1657,posix_bc_utf8,0x9a,0xa1,2,1},
{enctable + 1943,posix_bc_utf8,0xa2,0xa9,1,1},
{enctable + 1324,posix_bc_utf8,0xaa,0xba,2,1},
{enctable + 2133,posix_bc_utf8,0xbb,0xbd,1,1},
{enctable + 2058,posix_bc_utf8,0xbe,0xc0,2,1},
{enctable + 1475,posix_bc_utf8,0xc1,0xc9,1,1},
{enctable + 1750,posix_bc_utf8,0xca,0xd0,2,1},
{enctable + 1885,posix_bc_utf8,0xd1,0xd9,1,1},
{enctable + 1689,posix_bc_utf8,0xda,0xe1,2,1},
{enctable + 1959,posix_bc_utf8,0xe2,0xe9,1,1},
{enctable + 1828,posix_bc_utf8,0xea,0xef,2,1},
{enctable + 1864,posix_bc_utf8,0xf0,0xf9,1,1},
{enctable + 1840,posix_bc_utf8,0xfa,0xfa,2,1},
{enctable + 35,posix_bc_utf8,0xfb,0xfb,1,1},
{enctable + 1844,posix_bc_utf8,0xfc,0xfc,2,1},
{enctable + 39,posix_bc_utf8,0xfd,0xfd,1,1},
{enctable + 1848,posix_bc_utf8,0xfe,0xfe,2,1},
{enctable + 61,posix_bc_utf8,0xff,0xff,1,1},
};

static const encpage_t utf8_posix_bc_c2[2] = {
{enctable + 960,utf8_posix_bc,0x80,0xbf,1,1},
{0,utf8_posix_bc_c2,0xc0,0xff,0,0},
};

static const encpage_t utf8_posix_bc_c3[2] = {
{enctable + 1088,utf8_posix_bc,0x80,0xbf,1,1},
{0,utf8_posix_bc_c3,0xc0,0xff,0,0},
};

static const encpage_t utf8_posix_bc[4] = {
{enctable + 128,utf8_posix_bc,0x00,0x7f,1,1},
{0,utf8_posix_bc_c2,0xc2,0xc2,0,2},
{0,utf8_posix_bc_c3,0xc3,0xc3,0,2},
{0,utf8_posix_bc,0xc4,0xff,0,0},
};
static const U8 cp1026_encoding_rep_character[] = "\x6F";
static const char cp1026_encoding_enc_name[] = "cp1026";

 const encode_t cp1026_encoding = 
 {cp1026_utf8,utf8_cp1026,cp1026_encoding_rep_character,1,1,1,{cp1026_encoding_enc_name,(const char *)0}};

static const U8 cp1047_encoding_rep_character[] = "\x6F";
static const char cp1047_encoding_enc_name[] = "cp1047";

 const encode_t cp1047_encoding = 
 {cp1047_utf8,utf8_cp1047,cp1047_encoding_rep_character,1,1,1,{cp1047_encoding_enc_name,(const char *)0}};

static const U8 cp37_encoding_rep_character[] = "\x6F";
static const char cp37_encoding_enc_name[] = "cp37";

 const encode_t cp37_encoding = 
 {cp37_utf8,utf8_cp37,cp37_encoding_rep_character,1,1,1,{cp37_encoding_enc_name,(const char *)0}};

static const U8 cp500_encoding_rep_character[] = "\x6F";
static const char cp500_encoding_enc_name[] = "cp500";

 const encode_t cp500_encoding = 
 {cp500_utf8,utf8_cp500,cp500_encoding_rep_character,1,1,1,{cp500_encoding_enc_name,(const char *)0}};

static const U8 cp875_encoding_rep_character[] = "\x6F";
static const char cp875_encoding_enc_name[] = "cp875";

 const encode_t cp875_encoding = 
 {cp875_utf8,utf8_cp875,cp875_encoding_rep_character,1,1,1,{cp875_encoding_enc_name,(const char *)0}};

static const U8 posix_bc_encoding_rep_character[] = "\x6F";
static const char posix_bc_encoding_enc_name[] = "posix-bc";

 const encode_t posix_bc_encoding = 
 {posix_bc_utf8,utf8_posix_bc,posix_bc_encoding_rep_character,1,1,1,{posix_bc_encoding_enc_name,(const char *)0}};

