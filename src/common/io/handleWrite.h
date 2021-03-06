/***********************************************************************************************************************************
Handle IO Write

Write to a handle using the IoWrite interface.
***********************************************************************************************************************************/
#ifndef COMMON_IO_HANDLEWRITE_H
#define COMMON_IO_HANDLEWRITE_H

/***********************************************************************************************************************************
Object type
***********************************************************************************************************************************/
typedef struct IoHandleWrite IoHandleWrite;

#include "common/io/write.h"

/***********************************************************************************************************************************
Constructor
***********************************************************************************************************************************/
IoHandleWrite *ioHandleWriteNew(const String *name, int handle);

/***********************************************************************************************************************************
Functions
***********************************************************************************************************************************/
void ioHandleWrite(IoHandleWrite *this, Buffer *buffer);
IoHandleWrite *ioHandleWriteMove(IoHandleWrite *this, MemContext *parentNew);

/***********************************************************************************************************************************
Getters
***********************************************************************************************************************************/
IoWrite *ioHandleWriteIo(const IoHandleWrite *this);

/***********************************************************************************************************************************
Destructor
***********************************************************************************************************************************/
void ioHandleWriteFree(IoHandleWrite *this);

/***********************************************************************************************************************************
Helper functions
***********************************************************************************************************************************/
void ioHandleWriteOneStr(int handle, const String *string);

/***********************************************************************************************************************************
Macros for function logging
***********************************************************************************************************************************/
#define FUNCTION_LOG_IO_HANDLE_WRITE_TYPE                                                                                          \
    IoHandleWrite *
#define FUNCTION_LOG_IO_HANDLE_WRITE_FORMAT(value, buffer, bufferSize)                                                             \
    objToLog(value, "IoHandleWrite", buffer, bufferSize)

#endif
