#include <stdint.h>
#include <malloc.h>

typedef struct CircularBuffer{
	int16_t size; 
	int16_t *buffer;
	int16_t *pntwrite;
	int16_t *pntread;
	} CircularBuffer;

void CreateBuffer(CircularBuffer* cb, int16_t size);
