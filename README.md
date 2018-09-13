# StreamFunction

Allow arduino's Stream (Serial, EthernetClient, etc) to excute user defined function

## Function

begin(Stream) // use Serial as an input

begin(Stream, Print)// use EthernetClient as an input, use Serial as debug console

addFunction(char c, function foo) // When the chracter c is detected, it will excuted function foo with no parameter and return a string

run() //Excute it at the beginning of the loop

### Retriving Variable

available() //gets the number of bytes available in the stream

getByte() //return the data in byte

getChar() //return the data in char

getUInt() //reutrn the data in unsigned int

getInt() //return the data in int

getULong() //reutrn the data in unsigned long

getLong() //reutrn the data in long

getString() //reutrn the data in String

getString(char c) //reutrn the data in String, the function will terminates if the terminator character is detected
