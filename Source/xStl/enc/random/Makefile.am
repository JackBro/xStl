INCLUDES = -I $(top_srcdir)/Include

if DEBUG
DBGFLAGS = -ggdb -DDEBUG
else
DBGFLAGS = -g
endif

lib_LTLIBRARIES = libxstl_random.la

libxstl_random_la_SOURCES = pmacRnd.cpp  prf.cpp  rc4rnd.cpp
libxstl_random_la_CFLAGS = $(CFLAGS_XSTL_COMMON) $(DBGFLAGS) $(AM_CFLAGS)
libxstl_random_la_CPPFLAGS = $(CFLAGS_XSTL_COMMON) $(DBGFLAGS) $(AM_CFLAGS)

if UNICODE
libxstl_random_la_CFLAGS+= -DXSTL_UNICODE -D_UNICODE
libxstl_random_la_CPPFLAGS+= -DXSTL_UNICODE -D_UNICODE
endif
