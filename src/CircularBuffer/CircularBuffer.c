#include "CircularBuffer.h"

void CreateBuffer(CircularBuffer* cb, int16_t size) {
	cb->size = size;
	cb->buffer = malloc(sizeof(int16_t) * size);
	cb->pntread = cb->buffer;
	cb->pntwrite = cb->buffer + 1;
}
