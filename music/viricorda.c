#include <avr/io.h>
#include "notationdefines.c"
#include "../notes.c"

uint8_t sequenceTreble[] =
{
    TEMPO(56)

    INSTRUMENT(SQUARE)
    TONE(24)
    PITCHS(G5, 8)
    TONE(32)
    PITCHS(F5, 4) SILENCE(4)
    //
    TONE(32)
    PITCHS(E5, 8)
    TONE(24)
    PITCHS(D5, 4)
    PITCHS(C5, 4)
    PITCHS(B4, 4)
    PITCHS(Db5, 3) SILENCE(1)
    //
    TONE(32)
    PITCHS(D5, 8)
    TONE(24)
    PITCHS(E5, 4)
    PITCHS(Gb5, 4)
    PITCHS(G5, 4)
    PITCHS(E5, 3) SILENCE(1)
    //
    TONE(32)
    PITCHS(Gb5, 16)
    PITCHS(D5, 12) SILENCE(4)
    TONE(24)
    PITCHS(G5, 4) SILENCE(4) TONE(24)
    PITCHS(G5, 4) SILENCE(4)
    //
    TONE(32)
    PITCHS(A5, 8)
    TONE(24)
    PITCHS(G5, 4)
    PITCHS(F5, 4)
    PITCHS(E5, 4)
    PITCHS(F5, 3) SILENCE(1)
    //
    TONE(32)
    PITCHS(G5, 8)
    TONE(24)
    PITCHS(F5, 4)
    PITCHS(E5, 4)
    PITCHS(D5, 4)
    PITCHS(E5, 3) SILENCE(1)
    //
    TONE(32)
    PITCHS(C5, 14) SILENCE(2)  TONE(32)
    PITCHS(C5, 12) SILENCE(4)
    TONE(24)                      
    PITCHS(D5, 4) SILENCE(4) TONE(24)
    PITCHS(D5, 6) SILENCE(2)
    //
    TONE(32)
    PITCHS(A5, 8)
    TONE(24)  SLEEP(4)
    PITCHS(G5, 4)
    PITCHS(Gb5, 4) SILENCE(4)

    //
    TONE(32)
    PITCHS(Ab5, 8)
    TONE(24)  SLEEP(4)
    PITCHS(A5, 4)
    PITCHS(B5, 4) SILENCE(4)

    //
    TONE(32)
    PITCHS(A5, 12) SILENCE(4) TONE(32)
    PITCHS(A5, 12) SILENCE(4)
    TONE(24)                      
    PITCHS(C5, 4) SILENCE(4) TONE(24)
    PITCHS(C5, 4) SILENCE(4)
    //
    TONE(32)
    PITCHS(G5, 8)
    TONE(24)   SLEEP(4)
    PITCHS(F5, 4)
    PITCHS(E5, 4) SILENCE(4)
    //
    TONE(32)
    PITCHS(Gb5, 8)
    TONE(24)   SLEEP(4)
    PITCHS(G5, 4)
    PITCHS(A5, 4) SILENCE(4)
    //
    TONE(32)
    PITCHS(G5, 12) SILENCE(4) TONE(24)
    PITCHS(G5, 12) SILENCE(4)
};
uint16_t sequenceTrebleLength = sizeof(sequenceTreble) / sizeof(sequenceTreble[0]);
uint8_t sequenceBass[] =
{
    INSTRUMENT(SQUARE)
    TONE(3)
    PITCHS(B3, 4) SILENCE(4) TONE(4)
    PITCHS(B3, 4) SILENCE(4) 
    //
    TONE(5)
    PITCHS(C4, 8)
    TONE(2)   SLEEP(4)
    PITCHS(D4, 2) SILENCE(2) TONE(2)
    PITCHS(E4, 4) SILENCE(4)
    //
    TONE(3)
    PITCHS(D4, 8)
    TONE(2)   SLEEP(8)
    PITCHS(A3, 4) SILENCE(4)
    //
    TONE(5)
    PITCHS(D4, 12) SILENCE(4) TONE(3)
    PITCHS(D4, 12) SILENCE(4)
    TONE(2)
    PITCHS(E4, 4) SILENCE(4) TONE(2)
    PITCHS(E4, 4) SILENCE(4)
    //
    TONE(3)
    PITCHS(F4, 8)
    TONE(2)    SLEEP(4)
    PITCHS(G4, 2) SILENCE(2) TONE(2)
    PITCHS(A4, 4) SILENCE(4)
    //
    TONE(3)
    PITCHS(G4, 8)
    TONE(2)   SLEEP(8)
    PITCHS(G3, 4) SILENCE(4)
    //
    TONE(5)
    PITCHS(C4, 12) SILENCE(4) TONE(3)
    PITCHS(C4, 12) SILENCE(4)
    TONE(2)
    PITCHS(G4, 4) SILENCE(4) TONE(2)
    PITCHS(G4, 4) SILENCE(4)
    //
    TONE(3)
    PITCHS(F4, 8)
    TONE(2)   SLEEP(4)
    PITCHS(E4, 2) SILENCE(2) TONE(2)
    PITCHS(D4, 4) SILENCE(4)
    //
    TONE(3)
    PITCHS(E4, 8)
    TONE(2)   SLEEP(8)
    PITCHS(E3, 4) SILENCE(4)
    //
    TONE(5)
    PITCHS(A3, 12) SILENCE(4) TONE(3)
    PITCHS(A3, 12) SILENCE(4)
    TONE(2)
    PITCHS(F4, 4) SILENCE(4) TONE(2)
    PITCHS(F4, 4) SILENCE(4)
    //
    TONE(3)
    PITCHS(E4, 8)
    TONE(2)   SLEEP(4)
    PITCHS(D4, 2) SILENCE(2) TONE(2)
    PITCHS(C4, 4) SILENCE(4)
    //
    TONE(3)
    PITCHS(D4, 8)
    TONE(2)   SLEEP(8)
    PITCHS(D4, 4) SILENCE(4)
    //
    TONE(3)
    PITCHS(G4, 12) SILENCE(4) TONE(2)
    PITCHS(G4, 12) SILENCE(4)
    // vocal part
    TONE(5)
    PITCHS(E5, 6) SILENCE(2) TONE(5)
    PITCHS(E5, 6) SILENCE(2)
    //
    TONE(6)
    PITCHS(E5, 14) SILENCE(2) TONE(5)
    PITCHS(C5, 3) SILENCE(1) TONE(5)
    PITCHS(C5, 3) SILENCE(1) TONE(5)
    PITCHS(B4, 14) SILENCE(2) TONE(5)
    PITCHS(B4, 3) SILENCE(1) TONE(5)
    PITCHS(B4, 3) SILENCE(1) TONE(5)
    TONE(7)
    PITCHS(A4, 12) SILENCE(4) TONE(6)
    PITCHS(A4, 12) SILENCE(4)
    //
    TONE(5)
    PITCHS(E4, 6) SILENCE(2) TONE(5)
    PITCHS(F4, 6) SILENCE(2)
    TONE(6)
    PITCHS(G4, 14) SILENCE(2) TONE(5)
    PITCHS(G4, 3) SILENCE(1) TONE(5)
    PITCHS(G4, 3) SILENCE(1) TONE(5)
    PITCHS(A4, 14) SILENCE(2) TONE(5)
    PITCHS(B4, 3) SILENCE(1) TONE(5)
    PITCHS(B4, 3) SILENCE(1) TONE(5)
    TONE(7)
    PITCHS(B4, 12) SILENCE(4) TONE(6)
    PITCHS(B4, 12) SILENCE(4)
    //
    TONE(5)
    PITCHS(A4, 6) SILENCE(2) TONE(5)
    PITCHS(B4, 6) SILENCE(2)
    TONE(6)
    PITCHS(C5, 12) SILENCE(4) TONE(5)
    PITCHS(D5, 12) SILENCE(4)
    TONE(4)
    PITCHS(A4, 6) SILENCE(2) TONE(4)
    PITCHS(B4, 6) SILENCE(2)
    //
    TONE(6)
    PITCHS(C5, 6) SILENCE(2) TONE(5)
    PITCHS(C5, 6) SILENCE(2)
    TONE(6)
    PITCHS(E5, 12) SILENCE(4) TONE(4)
    PITCHS(C5, 12) SILENCE(4)
    //
    TONE(6)
    PITCHS(D5, 8) TONE(4) SLEEP(8)
    PITCHS(B4, 8)
    PITCHS(C5, 4) SILENCE(4) TONE(4)
    PITCHS(A4, 8) TONE(3) SLEEP(8)
    TONE(6)
    PITCHS(B4, 12) SILENCE(4) TONE(5)
    PITCHS(A4, 12) SILENCE(4)
    //
    TONE(5)
    PITCHS(G4, 6) SILENCE(2) TONE(5)
    PITCHS(Db4, 6) SILENCE(2)
    TONE(6)
    PITCHS(G4, 8) TONE(4) SLEEP(8)
    PITCHS(A4, 6) SILENCE(2)
    TONE(6)
    PITCHS(A4, 8) TONE(4) SLEEP(8)
    PITCHS(G4, 6) SILENCE(2)
    TONE(6)
    PITCHS(G4, 12) SILENCE(4) TONE(5)
    PITCHS(G4, 12) SILENCE(4)
    //
    TONE(5)
    PITCHS(E5, 6) SILENCE(2) TONE(5)
    PITCHS(E5, 6) SILENCE(2)
    //
    TONE(6)
    PITCHS(E5, 14) SILENCE(2) TONE(5)
    PITCHS(C5, 3) SILENCE(1) TONE(5)
    PITCHS(C5, 3) SILENCE(1) TONE(5)
    PITCHS(B4, 14) SILENCE(2) TONE(5)
    PITCHS(B4, 3) SILENCE(1) TONE(5)
    PITCHS(B4, 3) SILENCE(1) TONE(5)
    TONE(7)
    PITCHS(A4, 12) SILENCE(4) TONE(6)
    PITCHS(A4, 12) SILENCE(4)
    //
    TONE(5)
    PITCHS(E4, 6) SILENCE(2) TONE(5)
    PITCHS(F4, 6) SILENCE(2)
    TONE(6)
    PITCHS(G4, 12)
    PITCHS(A4, 3) SILENCE(1) TONE(5)
    PITCHS(B4, 7) SILENCE(1) TONE(5)
    PITCHS(A4, 14) SILENCE(2) TONE(5)
    PITCHS(A4, 3) SILENCE(1) TONE(5)
    PITCHS(A4, 3) SILENCE(1) TONE(5)
    TONE(7)
    PITCHS(G4, 12) SILENCE(4) TONE(6)
    PITCHS(G4, 12) SILENCE(4)
};
uint16_t sequenceBassLength = sizeof(sequenceBass) / sizeof(sequenceBass[0]);