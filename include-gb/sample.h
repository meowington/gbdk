/*
 * Playback raw sound sample with length len from start at 8192Hz rate.
 * len defines the length of the sample in samples/32 or bytes/16.
 * The format of the data is unsigned 4-bit samples,
 * 2 samples per byte, upper 4-bits played before lower 4 bits.
 *
 * Adaption for GBDK by Lars Malmborg <glue@df.lth.se>.
 * Original code by Jeff Frohwein.
 */
#ifndef _SAMPLE_H
#define _SAMPLE_H

void
play_sample(UBYTE *start, UWORD len);

#endif /* _SAMPLE_H */
