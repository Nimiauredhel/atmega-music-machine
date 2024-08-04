#include "musicdata.h"

const PROGMEM uint8_t voiceOne[] =
{
    INSTRUMENT(SQUARE)
    TEMPO(56)
    NOTE(G5, 16, 8)
    NOTE(F5, 24, 4) SILENCE(4)
    //
    NOTE(E5, 32, 8)
    NOTE(D5, 24, 4)
    PITCHS(C5, 4)
    PITCHS(B4, 4)
    PITCHS(Db5, 3) SILENCE(1)
    //
    NOTE(D5, 32, 8)
    NOTE(E5, 24, 4)
    PITCHS(Gb5, 4)
    PITCHS(G5, 4)
    PITCHS(E5, 3) SILENCE(1)
    //
    NOTE(Gb5, 32, 16)
    PITCHS(D5, 16)
    NOTE(G5, 24, 7) SILENCE(1)
    JUMPBACK(7)
    //
    NOTE(A5, 32, 8)
    NOTE(G5, 24, 4)
    PITCHS(F5, 4)
    PITCHS(E5, 4)
    PITCHS(F5, 3) SILENCE(1)
    //
    NOTE(G5, 32, 8)
    NOTE(F5, 24, 4)
    PITCHS(E5, 4)
    PITCHS(D5, 4)
    PITCHS(E5, 3) SILENCE(1)
    //
    NOTE(C5, 32, 4)
    VOLUMES(28, 4)
    VOLUMES(24, 4)
    SILENCE(4)
    JUMPBACK(13)
    NOTE(D5, 24, 7) SILENCE(1)
    JUMPBACK(7)
    //
    NOTE(A5, 32, 8)
    VOLUMES(24, 4)
    NOTE(G5, 16, 4)
    PITCHS(Gb5, 4) SILENCE(4)
    //
    NOTE(Ab5, 32, 8)
    VOLUMES(24, 4)
    PITCHS(A5, 4)
    NOTE(B5, 16, 4) SILENCE(4)
    //
    NOTE(A5, 32, 4)
    VOLUMES(28, 4)
    VOLUMES(24, 4)
    SILENCE(4)
    JUMPBACK(13)
    NOTE(C5, 24, 6) SILENCE(2)
    JUMPBACK(7)
    //
    NOTE(G5, 32, 8)
    VOLUMES(24, 4)
    NOTE(F5, 16, 4)
    PITCHS(E5, 4) SILENCE(4)
    //
    NOTE(Gb5, 32, 8) VOLUMES(24, 4)
    NOTE(G5, 16, 4)
    PITCHS(A5, 4) SILENCE(4)
    //
    NOTE(G5, 16, 4) VOLUMES(24, 4) VOLUMES(28, 6) SILENCE(2)
    NOTE(G5, 32, 4) VOLUMES(28, 4) VOLUMES(24, 4) SILENCE(4)
    // vocal part (but this device does the bass for it)
    NOTE(G4, 16, 16)
    PITCHS(A4, 12) SILENCE(4)
    NOTE(A4, 16, 4) SILENCE(4)
    NOTE(E4, 16, 12) SILENCE(4)
    NOTE(E4, 16, 4) SILENCE(4) 
    NOTE(A3, 24, 12) SILENCE(4)
    JUMPBACK(7)
    //
    NOTE(A3, 16, 16)
    PITCHS(G3, 12) SILENCE(4)
    NOTE(G3, 16, 4) SILENCE(4) 
    NOTE(D4, 16, 12) SILENCE(4)
    NOTE(D4, 16, 4) SILENCE(4) 
    NOTE(G3, 24, 12) SILENCE(4)
    JUMPBACK(7)
    //
    NOTE(G3, 24, 16)
    PITCHS(F4, 32)
    NOTE(G4, 24, 12) SILENCE(4)
    NOTE(C4, 16, 12) SILENCE(4)
    JUMPBACK(7)
    //
    NOTE(C5, 16, 6) SILENCE(2)
    JUMPBACK(7)
    NOTE(B4, 24, 12) SILENCE(4)
    NOTE(B4, 16, 6) SILENCE(2) 
    NOTE(A4, 16, 12) SILENCE(4)
    NOTE(D4, 16, 6) SILENCE(2) 
    NOTE(G4, 24, 16)
    PITCHS(F4, 16)
    //
    NOTE(E4, 16, 8)
    PITCHS(D4, 8)
    NOTE(B3, 24, 12) SILENCE(4)
    NOTE(C4, 16, 6) SILENCE(2) 
    NOTE(D4, 16, 12) SILENCE(4)
    NOTE(D4, 16, 6) SILENCE(2) 
    NOTE(G3, 24, 12) SILENCE(4)
    JUMPBACK(7)
    //
    NOTE(G3, 16, 16)
    PITCHS(A4, 12) SILENCE(4)
    NOTE(A4, 16, 6) SILENCE(2)
    NOTE(E4, 16, 12) SILENCE(4)
    NOTE(E4, 16, 6) SILENCE(2)
    NOTE(A3, 24, 12) SILENCE(4)
    JUMPBACK(7)
    //
    NOTE(A3, 16, 16)
    PITCHS(G3, 12) SILENCE(4) 
    NOTE(G3, 16, 6) SILENCE(2)
    NOTE(D4, 16, 12) SILENCE(4)
    NOTE(D4, 24, 6) SILENCE(2)
    NOTE(G3, 32, 12) SILENCE(4)
    JUMPBACK(7)
};
const PROGMEM uint16_t voiceOneLength =
sizeof(voiceOne)/sizeof(voiceOne[0]);

const PROGMEM uint8_t voiceTwo[] =
{
    INSTRUMENT(SQUARE)
    NOTE(B3, 24, 4) SILENCE(4)
    JUMPBACK(7)
    //
    NOTE(C4, 32, 12)
    NOTE(D4, 24, 4)
    PITCHS(E4, 4) SILENCE(4)
    NOTE(D4, 32, 8) VOLUMES(24, 8)
    PITCHS(A3, 4) SILENCE(4)
    NOTE(D4, 32, 4) VOLUMES(28, 4) VOLUMES(24, 4) SILENCE(4)
    JUMPBACK(13)
    //
    NOTE(E4, 24, 7) SILENCE(1)
    JUMPBACK(7)
    //
    NOTE(F4, 32, 8) VOLUMES(24, 4)
    PITCHS(G4, 2) SILENCE(2)
    NOTE(A4, 24, 4) SILENCE(4)
    //
    NOTE(G4, 24, 8) VOLUMES(24, 8)
    PITCHS(G3, 4) SILENCE(4)
    //
    NOTE(C4, 32, 4)
    VOLUMES(28, 4)
    VOLUMES(24, 4)
    SILENCE(4)
    JUMPBACK(13)
    NOTE(G4, 24, 6) SILENCE(2)
    JUMPBACK(7)
    //
    NOTE(F4, 32, 8) VOLUMES(24, 4)
    PITCHS(E4, 2) SILENCE(2)
    NOTE(D4, 24, 4) SILENCE(4)
    //
    NOTE(E4, 32, 8) VOLUMES(24, 8)
    PITCHS(E3, 4) SILENCE(4)
    NOTE(A3, 32, 4)
    VOLUMES(28, 4)
    VOLUMES(24, 4)
    SILENCE(4)
    JUMPBACK(13)
    //
    NOTE(F4, 24, 4) SILENCE(4)
    JUMPBACK(7)
    NOTE(E4, 32, 8) VOLUMES(24, 4)
    PITCHS(D4, 4)
    NOTE(C4, 24, 4) SILENCE(4)
    NOTE(D4, 32, 8) VOLUMES(24, 8)
    NOTE(D4, 28, 4) SILENCE(4)
    NOTE(G4, 32, 4)
    VOLUMES(28, 4)
    VOLUMES(24, 4)
    SILENCE(4)
    JUMPBACK(13)
    // vocal part
    NOTE(E5, 24, 6) SILENCE(2)
    JUMPBACK(7)
    NOTE(E5, 32, 14) SILENCE(2)
    NOTE(C5, 24, 3) SILENCE(1)
    JUMPBACK(7)
    NOTE(B4, 32, 14) SILENCE(2)
    NOTE(B4, 24, 3) SILENCE(1)
    JUMPBACK(7)
    NOTE(A4, 32, 12) SILENCE(4)
    JUMPBACK(7)
    //
    NOTE(E4, 16, 6) SILENCE(2)
    JUMPBACK(7)
    NOTE(G4, 32, 14) SILENCE(2)
    NOTE(G4, 24, 3) SILENCE(1)
    JUMPBACK(7)
    NOTE(A4, 32, 14) SILENCE(2)
    NOTE(B4, 24, 3) SILENCE(1)
    JUMPBACK(7)
    NOTE(B4, 32, 12) SILENCE(4)
    JUMPBACK(7)
    //
    NOTE(A4, 24, 6) SILENCE(2)
    NOTE(B4, 16, 6) SILENCE(2)
    NOTE(C5, 32, 12) SILENCE(4)
    NOTE(D5, 24, 12) SILENCE(4)
    NOTE(D5, 16, 6) SILENCE(2)
    NOTE(C5, 16, 6) SILENCE(2)
    //
    NOTE(C5, 32, 12) SILENCE(4)
    NOTE(C5, 24, 16)
    NOTE(E5, 32, 8)
    NOTE(C5, 24, 8)
    NOTE(D5, 32, 8) VOLUMES(16, 8)
    PITCHS(B4, 8)
    PITCHS(C5, 4) SILENCE(4)
    NOTE(A4, 16, 12) SILENCE(4)
    NOTE(B4, 32, 12) SILENCE(4)
    NOTE(A4, 24, 12) SILENCE(4)
    //
    NOTE(G4, 16, 8)
    PITCHS(Gb4, 8)
    NOTE(G4, 24, 16)
    NOTE(A4, 16, 6) SILENCE(2)
    NOTE(A4, 24, 16)
    NOTE(G4, 16, 6) SILENCE(2)
    NOTE(G4, 32, 12) SILENCE(4)
    JUMPBACK(7)
    //
    NOTE(E5, 16, 6) SILENCE(2)
    JUMPBACK(7)
    NOTE(E5, 24, 14) SILENCE(2)
    NOTE(C5, 16, 2) SILENCE(2)
    JUMPBACK(7)
    NOTE(B4, 24, 14) SILENCE(2)
    NOTE(B4, 16, 2) SILENCE(2)
    JUMPBACK(7)
    NOTE(A4, 24, 12) SILENCE(4)
    JUMPBACK(7)
    //
    NOTE(E4, 16, 6) SILENCE(2)
    NOTE(F4, 20, 6) SILENCE(2)
    NOTE(G4, 24, 8) VOLUMES(20, 4)
    NOTE(A4, 16, 4) 
    PITCHS(B4, 4) VOLUMES(20, 4)
    NOTE(A4, 24, 12) SILENCE(4)
    NOTE(A4, 20, 2) SILENCE(2)
    JUMPBACK(7)
    NOTE(G4, 32, 12) SILENCE(4)
    JUMPBACK(7)
};
const PROGMEM uint16_t voiceTwoLength =
sizeof(voiceTwo)/sizeof(voiceTwo[0]);

const PROGMEM uint8_t voiceThree[] =
{
    INSTRUMENT(SQUARE)
    NOTE(B3, 24, 4) SILENCE(4)
    JUMPBACK(7)
    //
    NOTE(C4, 32, 12)
    NOTE(D4, 24, 4)
    PITCHS(E4, 4) SILENCE(4)
    NOTE(D4, 32, 8) VOLUMES(24, 8)
    PITCHS(A3, 4) SILENCE(4)
    NOTE(D4, 32, 4) VOLUMES(28, 4) VOLUMES(24, 4) SILENCE(4)
    JUMPBACK(13)
    //
    NOTE(E4, 24, 7) SILENCE(1)
    JUMPBACK(7)
    //
    NOTE(F4, 32, 8) VOLUMES(24, 4)
    PITCHS(G4, 2) SILENCE(2)
    NOTE(A4, 24, 4) SILENCE(4)
    //
    NOTE(G4, 24, 8) VOLUMES(24, 8)
    PITCHS(G3, 4) SILENCE(4)
    //
    NOTE(C4, 32, 4)
    VOLUMES(28, 4)
    VOLUMES(24, 4)
    SILENCE(4)
    JUMPBACK(13)
    NOTE(G4, 24, 6) SILENCE(2)
    JUMPBACK(7)
    //
    NOTE(F4, 32, 8) VOLUMES(24, 4)
    PITCHS(E4, 2) SILENCE(2)
    NOTE(D4, 24, 4) SILENCE(4)
    //
    NOTE(E4, 32, 8) VOLUMES(24, 8)
    PITCHS(E3, 4) SILENCE(4)
    NOTE(A3, 32, 4)
    VOLUMES(28, 4)
    VOLUMES(24, 4)
    SILENCE(4)
    JUMPBACK(13)
    //
    NOTE(F4, 24, 4) SILENCE(4)
    JUMPBACK(7)
    NOTE(E4, 32, 8) VOLUMES(24, 4)
    PITCHS(D4, 4)
    NOTE(C4, 24, 4) SILENCE(4)
    NOTE(D4, 32, 8) VOLUMES(24, 8)
    NOTE(D4, 28, 4) SILENCE(4)
    NOTE(G4, 32, 4)
    VOLUMES(28, 4)
    VOLUMES(24, 4)
    SILENCE(4)
    JUMPBACK(13)
    // vocal part
    NOTE(E5, 24, 6) SILENCE(2)
    JUMPBACK(7)
    NOTE(E5, 32, 14) SILENCE(2)
    NOTE(C5, 24, 3) SILENCE(1)
    JUMPBACK(7)
    NOTE(B4, 32, 14) SILENCE(2)
    NOTE(B4, 24, 3) SILENCE(1)
    JUMPBACK(7)
    NOTE(A4, 32, 12) SILENCE(4)
    JUMPBACK(7)
    //
    NOTE(E4, 16, 6) SILENCE(2)
    JUMPBACK(7)
    NOTE(G4, 32, 14) SILENCE(2)
    NOTE(G4, 24, 3) SILENCE(1)
    JUMPBACK(7)
    NOTE(A4, 32, 14) SILENCE(2)
    NOTE(B4, 24, 3) SILENCE(1)
    JUMPBACK(7)
    NOTE(B4, 32, 12) SILENCE(4)
    JUMPBACK(7)
    //
    NOTE(A4, 24, 6) SILENCE(2)
    NOTE(B4, 16, 6) SILENCE(2)
    NOTE(C5, 32, 12) SILENCE(4)
    NOTE(D5, 24, 12) SILENCE(4)
    NOTE(D5, 16, 6) SILENCE(2)
    NOTE(C5, 16, 6) SILENCE(2)
    //
    NOTE(C5, 32, 12) SILENCE(4)
    NOTE(C5, 24, 16)
    NOTE(E5, 32, 8)
    NOTE(C5, 24, 8)
    NOTE(D5, 32, 8) VOLUMES(16, 8)
    PITCHS(B4, 8)
    PITCHS(C5, 4) SILENCE(4)
    NOTE(A4, 16, 12) SILENCE(4)
    NOTE(B4, 32, 12) SILENCE(4)
    NOTE(A4, 24, 12) SILENCE(4)
    //
    NOTE(G4, 16, 8)
    PITCHS(Gb4, 8)
    NOTE(G4, 24, 16)
    NOTE(A4, 16, 6) SILENCE(2)
    NOTE(A4, 24, 16)
    NOTE(G4, 16, 6) SILENCE(2)
    NOTE(G4, 32, 12) SILENCE(4)
    JUMPBACK(7)
    //
    NOTE(E5, 16, 6) SILENCE(2)
    JUMPBACK(7)
    NOTE(E5, 24, 14) SILENCE(2)
    NOTE(C5, 16, 2) SILENCE(2)
    JUMPBACK(7)
    NOTE(B4, 24, 14) SILENCE(2)
    NOTE(B4, 16, 2) SILENCE(2)
    JUMPBACK(7)
    NOTE(A4, 24, 12) SILENCE(4)
    JUMPBACK(7)
    //
    NOTE(E4, 16, 6) SILENCE(2)
    NOTE(F4, 20, 6) SILENCE(2)
    NOTE(G4, 24, 8) VOLUMES(20, 4)
    NOTE(A4, 16, 4) 
    PITCHS(B4, 4) VOLUMES(20, 4)
    NOTE(A4, 24, 12) SILENCE(4)
    NOTE(A4, 20, 2) SILENCE(2)
    JUMPBACK(7)
    NOTE(G4, 32, 12) SILENCE(4)
    JUMPBACK(7)
};
const PROGMEM uint16_t voiceThreeLength =
sizeof(voiceThree)/sizeof(voiceThree[0]);
