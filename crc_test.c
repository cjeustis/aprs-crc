#include <stdio.h>
#include <string.h>
#include <stdint.h>

#include "aprs_crc.h"

int main(int argc, char *argv[])
{
	uint16_t retVal;

	/* Ensure correct number of arguments */
	if (argc != 2) {
		printf("Usage: %s data\n", argv[0]);
		return(-1);
	}

	/* Calculate crc */
	retVal = calc_crc(argv[1], strlen(argv[1]));

	/* Print out calculated CRC value */
	printf("0x%X\n", retVal);

	return(1);
}