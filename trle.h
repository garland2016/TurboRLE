/**
    Copyright (C) powturbo 2015-2016
    GPL v2 License

    This program is free software; you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation; either version 2 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License along
    with this program; if not, write to the Free Software Foundation, Inc.,
    51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.

    - email    : powturbo [AT] gmail.com
    - github   : https://github.com/powturbo
    - homepage : https://sites.google.com/site/powturbo/
    - twitter  : https://twitter.com/powturbo

    TurboRLE - "Most efficient and fastest Run Length Encoding"
**/
#include <stdint.h>
#ifdef __cplusplus
extern "C" {
#endif
// RLE with specified escape char
unsigned _srlec8( unsigned char *in, unsigned inlen, unsigned char *out, uint8_t e);
unsigned _srled8( unsigned char *in,                 unsigned char *out, unsigned outlen, uint8_t e);

unsigned _srlec16(unsigned char *in, unsigned inlen, unsigned char *out, uint16_t e);
unsigned _srled16(unsigned char *in,                 unsigned char *out, unsigned outlen, uint16_t e);

unsigned _srlec32(unsigned char *in, unsigned inlen, unsigned char *out, uint32_t e);
unsigned _srled32(unsigned char *in,                 unsigned char *out, unsigned outlen, uint32_t e);

unsigned _srlec64(unsigned char *in, unsigned inlen, unsigned char *out, uint64_t e);
unsigned _srled64(unsigned char *in,                 unsigned char *out, unsigned outlen, uint64_t e);

// functions w/ overflow handling
unsigned  srlec8( unsigned char *in, unsigned inlen, unsigned char *out, uint8_t e);
unsigned  srled8( unsigned char *in, unsigned inlen, unsigned char *out, unsigned outlen, uint8_t e);

unsigned  srlec16(unsigned char *in, unsigned inlen, unsigned char *out, uint16_t e);
unsigned  srled16(unsigned char *in, unsigned inlen, unsigned char *out, unsigned outlen, uint16_t e);

unsigned  srlec32(unsigned char *in, unsigned inlen, unsigned char *out, uint32_t e);
unsigned  srled32(unsigned char *in, unsigned inlen, unsigned char *out, unsigned outlen, uint32_t e);

unsigned  srlec64(unsigned char *in, unsigned inlen, unsigned char *out, uint64_t e);
unsigned  srled64(unsigned char *in, unsigned inlen, unsigned char *out, unsigned outlen, uint64_t e);

// RLE w. automatic escape char determination
unsigned  srlec(unsigned char *in, unsigned inlen, unsigned char *out);
unsigned _srled(unsigned char *in,                 unsigned char *out, unsigned outlen);
unsigned  srled(unsigned char *in, unsigned inlen, unsigned char *out, unsigned outlen);

// Turbo RLE
unsigned  trlec(unsigned char *in, unsigned inlen, unsigned char *out);
unsigned _trled(unsigned char *in,                 unsigned char *out, unsigned outlen);
unsigned  trled(unsigned char *in, unsigned inlen, unsigned char *out, unsigned outlen);
#ifdef __cplusplus
}
#endif
