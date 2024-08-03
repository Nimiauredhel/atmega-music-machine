#include <avr/io.h>
#define GET_BIT(REG, BIT) (REG & (1 << BIT))
#define SET_BIT(REG, BIT) (REG |= (1 << BIT))
#define UNSET_BIT(REG, BIT) (REG &= ~(1 << BIT))
#define BUILTIN_LED_ON SET_BIT(PORTB, 5)
#define BUILTIN_LED_OFF UNSET_BIT(PORTB, 5)

typedef struct state
{
    uint16_t volume;
} state;

typedef struct variableSizePointer
{
    uint8_t pointerSize;
    union pointer
    {
        volatile uint8_t *eight;
        volatile uint16_t *sixteen;
    } pointer;
} variableSizePointer;

uint16_t VSP_Read(variableSizePointer *target)
{
    switch (target->pointerSize)
    {
        case 8:
            return *target->pointer.eight;
            break;
        case 16:
            return *target->pointer.sixteen;
            break;
        default:
            return *target->pointer.eight;
            break;
    }
}

void VSP_Write(uint16_t value, variableSizePointer *target)
{
    switch (target->pointerSize)
    {
        case 8:
            *target->pointer.eight = value;
            break;
        case 16:
            *target->pointer.sixteen = value;
            break;
        default:
            break;
    }
}

typedef struct device
{
    variableSizePointer pitch;
    variableSizePointer width;

} device;

typedef struct channel
{
    device *device;
    // the number of pitches represented by this channel
    uint8_t currentPitchCount;
    // array of pitches represented by this channel
    uint8_t currentPitches[4];
    // index of next pitch to sound on this channel
    uint8_t nextPitchIndex;
    // current "tone" (voltage?) set on this channel
    uint8_t currentTone;
    uint8_t polyCycleThreshold;
    uint8_t polyCycleCounter;
    // the "instrument" function assigned to this channel, controlling the waveform etc.
    void (*instrument)(struct channel *channel, state *state);
} channel;

typedef struct track
{
    // target channel associated with this track
    channel *channel;
    // the sequence of commands associated with this track
    const uint8_t *sequence;
    // the length of the command sequence
    uint16_t sLength;
    // the current position of the command sequence
    uint16_t sPosition;
    // the last position from which a jump was triggered
    uint16_t jPosition;
    // remaining track sleep time in microseconds
    uint64_t remainingSleepTime;
} track;

typedef void(*instrument)(channel *channel, state *state);

typedef struct composition
{
    uint8_t numDevices;
    uint8_t numChannels;
    uint8_t numTracks;

    device *devices;
    channel *channels;
    track *tracks;
} composition;
