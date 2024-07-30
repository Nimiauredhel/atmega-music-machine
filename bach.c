#include "notes.c"
#include <avr/io.h>

// sequence encoding:
// first element: music event type (also implying length)
// 0: sleep, 1-4: select 1-4 pitches, 5: tone, 6: instrument index
// following elements are the function parameters

#define SLEEP(x) 0, x,
#define TONE(x) 5, x,
#define SILENCE(x) TONE(0) SLEEP(x)
#define PITCH(x) 1, x,
#define PITCH2(x, y) 2, x, y,
#define PITCH3(x, y, z) 3, x, y, z,
#define PITCH4(x, y, z, w) 4, x, y, z, w,
#define INSTRUMENT(x) 6, x,

#define QUIET 0
#define SQUARE 1
#define SINE 2

uint8_t sequence[] =
{
    INSTRUMENT(SQUARE)

    PITCH(Gb5) TONE(32) SLEEP(2) SILENCE(2)
TONE(5)
    PITCH(B4) SLEEP(4)
    PITCH(D5) SLEEP(4)
    PITCH(Gb5) SLEEP(4)
    PITCH(B5) SLEEP(4)
TONE(10)
    PITCH(G5) SLEEP(4)
    PITCH(E5) SLEEP(4)
    PITCH(Db5) SLEEP(4)
    PITCH(E5) SLEEP(4)
TONE(15)
    PITCH(Bb4) SLEEP(4)
    PITCH(G5) SLEEP(4)
    PITCH(Gb5) SLEEP(4)
    PITCH(E5) SLEEP(4)
TONE(20)
    PITCH(D5) SLEEP(4)
    PITCH(B4) SLEEP(4)
    PITCH(Gb4) SLEEP(4)
    PITCH(A4) SLEEP(4)
TONE(25)
    PITCH(G4) SLEEP(4)
    PITCH(Gb5) SLEEP(4)
    PITCH(E5) SLEEP(4)
    PITCH(D5) SLEEP(4)
TONE(20)
    PITCH(Db5) SLEEP(4)
    PITCH(E5) SLEEP(4)
    PITCH(G5) SLEEP(4)
    PITCH(B4) SLEEP(4)
TONE(15)
    PITCH(Gb4) SLEEP(4)
    PITCH(Db5) SLEEP(4)
    PITCH(Gb4) SLEEP(4)
    PITCH(E4) SLEEP(4)
TONE(10)
    PITCH(D4) SLEEP(4)
TONE(15)
    PITCH(B4) SLEEP(4)
TONE(20)
    PITCH(Db4) SLEEP(4)
TONE(25)
    PITCH(Db5) SLEEP(4)
 //   PITCH2(D4, B4) SLEEP(4)
 //   PITCH2(Db4, Db5) SLEEP(4)

    // line 2

TONE(30)
    PITCH(D5) SLEEP(4)
    PITCH(Gb4) SLEEP(4)
TONE(1)
    PITCH(B3) SLEEP(4)
TONE(2)
    PITCH(Db4) SLEEP(4)
             
TONE(3)
    PITCH(D4) SLEEP(4)
TONE(4)
    PITCH(E4) SLEEP(4)
TONE(5)
    PITCH(Gb4) SLEEP(4)
    PITCH(G4) SLEEP(4)
TONE(10)
    PITCH(A4) SLEEP(4)
    PITCH(D4) SLEEP(4)
    PITCH(Gb4) SLEEP(4)
    PITCH(A4) SLEEP(4)
             
    PITCH(D5) SLEEP(4)
    PITCH(E5) SLEEP(4)
    PITCH(Gb5) SLEEP(4)
    PITCH(A4) SLEEP(4)

    PITCH(B4) SLEEP(4)
    PITCH(G4) SLEEP(4)
    PITCH(B4) SLEEP(4)
    PITCH(D5) SLEEP(4)
             
    PITCH(G5) SLEEP(4)
    PITCH(B4) SLEEP(4)
    PITCH(G4) SLEEP(4)
    PITCH(E4) SLEEP(4)
             
TONE(20)
    PITCH(Db4) SLEEP(4)
    PITCH(E4) SLEEP(4)
    PITCH(A4) SLEEP(4)
    PITCH(G5) SLEEP(4)
             
    PITCH(Gb5) SLEEP(4)
    PITCH(D4) SLEEP(4)
    PITCH(G4) SLEEP(4)
    PITCH(E5) SLEEP(4)
};
