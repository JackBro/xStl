/*
 * Copyright (c) 2008-2016, Integrity Project Ltd. All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 *
 * Redistributions of source code must retain the above copyright notice,
 * this list of conditions and the following disclaimer.
 *
 * Redistributions in binary form must reproduce the above copyright notice,
 * this list of conditions and the following disclaimer in the documentation
 * and/or other materials provided with the distribution.
 *
 * Neither the name of the Integrity Project nor the names of its contributors
 * may be used to endorse or promote products derived from this software
 * without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
 * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE
 * LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
 * CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
 * SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
 * INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
 * CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
 * ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE
 */

#ifndef __TBA_STL_SOCKET_EXCEPTION_H
#define __TBA_STL_SOCKET_EXCEPTION_H

/*
 * socket_exception.h
 *
 * Define the group of socket exception.
 */
#include "xStl/except/exception.h"

#define SOCKET_EXCEPTION_BASE  (1024)

#define SOCKETEXCEPTION_CREATION_FAILD  ( 0 + SOCKET_EXCEPTION_BASE)
#define SOCKETEXCEPTION_WRITE_TIMEOUT   ( 1 + SOCKET_EXCEPTION_BASE)
#define SOCKETEXCEPTION_READ_TIMEOUT    ( 2 + SOCKET_EXCEPTION_BASE)
#define SOCKETEXCEPTION_WRITE_FAILD     ( 3 + SOCKET_EXCEPTION_BASE)
#define SOCKETEXCEPTION_READ_FAILD      ( 4 + SOCKET_EXCEPTION_BASE)
#define SOKCETEXCEPRION_NOT_INIT        ( 5 + SOCKET_EXCEPTION_BASE)
#define SOCKETEXCEPTION_ADDRESS_ERROR   ( 6 + SOCKET_EXCEPTION_BASE)
#define SOCKETEXCEPTION_CONNECT         ( 7 + SOCKET_EXCEPTION_BASE)
#define SOCKETEXCEPTION_BIND            ( 8 + SOCKET_EXCEPTION_BASE)
#define SOCKETEXCEPTION_LISTEN          ( 9 + SOCKET_EXCEPTION_BASE)
#define SOCKETEXCEPTION_ACCEPT          (10 + SOCKET_EXCEPTION_BASE)


/*
 * class cSocketException
 *
 * Basic Socket exception, from this class
 * all the Socket exception class will be inherited.
 *
 * This class is a shell class to provide simple division
 * from other exception.
 *
 * Author: Elad Raz <e@eladraz.com>
 */
class cSocketException : public cException
{
public:
    cSocketException(char * file, uint32 line, const uint32 msgId = 0);
    virtual ~cSocketException() {};
};

#endif
