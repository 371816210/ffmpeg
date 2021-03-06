/*
 * This file is part of FFmpeg.
 *
 * FFmpeg is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 *
 * FFmpeg is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with FFmpeg; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA
 */

/**
 * @file
 * Replacements for frequently missing libm functions
 */

#ifndef AVUTIL_LIBM_H
#define AVUTIL_LIBM_H

#include <math.h>
#include "config.h"
#include "attributes.h"
#include "intfloat.h"

#if HAVE_MIPSFPU && HAVE_INLINE_ASM
#include "libavutil/mips/libm_mips.h"
#endif /* HAVE_MIPSFPU && HAVE_INLINE_ASM*/

#if !HAVE_ATANF
#undef atanf
#define atanf(x) ((float)atan(x))
#endif

#if !HAVE_ATAN2F
#undef atan2f
#define atan2f(y, x) ((float)atan2(y, x))
#endif

#if !HAVE_POWF
#undef powf
#define powf(x, y) ((float)pow(x, y))
#endif

#if !HAVE_CBRT

#endif

#if !HAVE_CBRTF

#endif

#if !HAVE_COSF
#undef cosf
#define cosf(x) ((float)cos(x))
#endif

#if !HAVE_EXPF
#undef expf
#define expf(x) ((float)exp(x))
#endif

#if !HAVE_EXP2
#undef exp2
#define exp2(x) exp((x) * 0.693147180559945)
#endif /* HAVE_EXP2 */

#if !HAVE_EXP2F
#undef exp2f
#define exp2f(x) ((float)exp2(x))
#endif /* HAVE_EXP2F */

#if !HAVE_ISINF

#endif /* HAVE_ISINF */

#if !HAVE_ISNAN

#endif /* HAVE_ISNAN */

#if !HAVE_LDEXPF
#undef ldexpf
#define ldexpf(x, exp) ((float)ldexp(x, exp))
#endif

#if !HAVE_LLRINT
#undef llrint
#define llrint(x) ((long long)rint(x))
#endif /* HAVE_LLRINT */

#if !HAVE_LLRINTF
#undef llrintf
#define llrintf(x) ((long long)rint(x))
#endif /* HAVE_LLRINT */

#if !HAVE_LOG2
#undef log2
#define log2(x) (log(x) * 1.44269504088896340736)
#endif /* HAVE_LOG2 */

#if !HAVE_LOG2F
#undef log2f
#define log2f(x) ((float)log2(x))
#endif /* HAVE_LOG2F */

#if !HAVE_LOG10F
#undef log10f
#define log10f(x) ((float)log10(x))
#endif

#if !HAVE_SINF
#undef sinf
#define sinf(x) ((float)sin(x))
#endif

#if !HAVE_RINT

#endif /* HAVE_RINT */

#if !HAVE_LRINT

#endif /* HAVE_LRINT */

#if !HAVE_LRINTF

#endif /* HAVE_LRINTF */

#if !HAVE_ROUND

#endif /* HAVE_ROUND */

#if !HAVE_ROUNDF

#endif /* HAVE_ROUNDF */

#if !HAVE_TRUNC

#endif /* HAVE_TRUNC */

#if !HAVE_TRUNCF

#endif /* HAVE_TRUNCF */

#endif /* AVUTIL_LIBM_H */
