#include <avr/io.h>
#include "notes.c"

// sequence encoding:
// first element: music event type (also implying length)
// 0: sleep, 1-4: select 1-4 pitches, 5: tone, 
// 6: instrument index 7: rhythm unit (tempo)
// following elements are the function parameters

#define SLEEP(x) 0, x,
#define TONE(x) 5, x,
#define SILENCE(x) TONE(0) SLEEP(x)
#define PITCH(x) 1, x,
#define PITCH2(x, y) 2, x, y,
#define PITCH3(x, y, z) 3, x, y, z,
#define PITCH4(x, y, z, w) 4, x, y, z, w,
#define INSTRUMENT(x) 6, x,
#define TEMPO(x) 7, x,
#define JUMPBACK(x) 8, x,

#define QUIET 0
#define SQUARE 1
#define SINE 2

uint32_t sequenceTreble[] =
{
    INSTRUMENT(SQUARE)

    TONE(2)
    PITCH2(G4, E5)
    SLEEP(6)
    TONE(3)
    SLEEP(6)
    TONE(4)
    PITCH2(Ab4, F5)
    SLEEP(6)
    TONE(5)
    SLEEP(6)
    TONE(6)
    PITCH2(Bb4, G5)
    SLEEP(6)
    TONE(7)
    SLEEP(6)
    TONE(8)
    PITCH2(Ab4, F5)
    SLEEP(6)
    TONE(9)
    SLEEP(6)
    TONE(10)
    PITCH2(G4, E5)
    SLEEP(6)
    PITCH2(G4, E5)
    SLEEP(6)
    PITCH2(Ab4, F5)
    SLEEP(6)
    PITCH2(Ab4, F5)
    SLEEP(6)
    TONE(9)
    PITCH2(Bb4, G5)
    SLEEP(3)
    TONE(8)
    SLEEP(3)
    TONE(7)
    PITCH2(Bb4, G5)
    SLEEP(3)
    TONE(6)
    SLEEP(3)
    TONE(5)
    PITCH2(Ab4, F5)
    SLEEP(3)
    TONE(4)
    SLEEP(3)
    TONE(3)
    PITCH2(Ab4, F5)
    SLEEP(3)
    TONE(2)
    SLEEP(3)
};
uint32_t sequenceBass[] =
{
    INSTRUMENT(SQUARE)
    PITCH(C3) // just to shut up the beep
    TONE(0)

    SLEEP(6)
    SLEEP(6)
    SLEEP(6)
    SLEEP(6)
    SLEEP(6)
    SLEEP(6)
    SLEEP(6)
    SLEEP(6)
    SLEEP(6)
        TONE(10)
        PITCH(C3)
    SLEEP(6)
        SILENCE(6)
        TONE(10)
        PITCH(F3)
    SLEEP(6)
        SILENCE(6)
        TONE(10)
        PITCH(D3)
    SLEEP(6)
        SILENCE(6)
        TONE(10)
        PITCH(F3)
    SLEEP(6)
};