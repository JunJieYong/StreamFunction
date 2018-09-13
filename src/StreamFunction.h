#include "Arduino.h"

#ifndef SYNC_COMMAND_H
#define SYNC_COMMAND_H

#ifndef NUM_FUNCTION
#define NUM_FUNCTION 32
#endif

typedef String (*callBackFunction)(void);

class StreamFunction {
  private:
    Stream* stream;
    Print* debugStream;
    int fxIndex = 0;
    byte keyByte[NUM_FUNCTION];
    callBackFunction fx[NUM_FUNCTION];
    size_t debug(String);
  public:
    void begin(Stream&);
    void begin(Stream&, Print&);
    void addDebugStream(Print&);
    int addFunction(byte, callBackFunction);

    int available();
    byte getByte();
    char getChar();
    unsigned int getUInt();
    int getInt();
    unsigned long getULong();
    long getLong();
    String getString(byte = 0);

    int run(uint32_t = 2000);
};
#endif
