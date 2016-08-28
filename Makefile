TARGET=crc_test
CFLAGS=-Wall -g
OBJS=crc_test.o aprs_crc.o
CC=gcc

.PHONY: clean all

all: ${TARGET}

${TARGET}: ${OBJS}
	${CC} -o ${TARGET} ${OBJS} ${LIBS}

clean:
	rm -f ${TARGET} ${OBJS}
