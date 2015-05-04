#include "unity_fixture.h"
#include "CircularBuffer.h"

TEST_GROUP(CircularBuffer);

TEST_SETUP(CircularBuffer)
{
}

TEST_TEAR_DOWN(CircularBuffer)
{
}

TEST(CircularBuffer, BufferStartsWithPredefinedSize)
{
	CircularBuffer* test_buffer = malloc(sizeof(CircularBuffer));
	CreateBuffer(test_buffer, 6);
	TEST_ASSERT_EQUAL(6, (sizeof(test_buffer->buffer) / sizeof(int16_t) ) );
	free(test_buffer->buffer);
	free(test_buffer);
}
TEST(CircularBuffer, BufferStartsEmpty)
{
	CircularBuffer* test_buffer = malloc(sizeof(CircularBuffer));
	CreateBuffer(test_buffer, 3);
	TEST_ASSERT_EQUAL(NULL, test_buffer->buffer[0]);
	TEST_ASSERT_EQUAL(NULL, test_buffer->buffer[1]);
	TEST_ASSERT_EQUAL(NULL, test_buffer->buffer[2]);
	free(test_buffer->buffer);
	free(test_buffer);
}
TEST(CircularBuffer, PointerWriteStartsInPosZero)
{
	TEST_FAIL_MESSAGE("PointerWriteStartsInPosZero");
}
TEST(CircularBuffer, PointerReadStartsInPosZero)
{
	TEST_FAIL_MESSAGE("PointerReadStartsInPosZero");
}
TEST(CircularBuffer, NewElementIsWrittenInPointerWritePosition)
{
	TEST_FAIL_MESSAGE("NewElementIsWrittenInPointerWritePosition");
}
TEST(CircularBuffer, PointerWriteIncreasesByOnePositionAfterWrote)
{
	TEST_FAIL_MESSAGE("PointerWriteIncreasesByOnePositionAfterWrote");
}
TEST(CircularBuffer, PointerWriteRestartFromPosZeroWhenReachingEndOfBuffer)
{
	TEST_FAIL_MESSAGE("PointerWriteRestartFromPosZeroWhenReachingEndOfBuffer");
}
TEST(CircularBuffer, ExceptionIfTryToWriteElementNotINT)
{
	TEST_FAIL_MESSAGE("ExceptionIfTryToWriteElementNotINT");
}
TEST(CircularBuffer, ReadingElementsReturnTheValueFromPointerReadPosition)
{
	TEST_FAIL_MESSAGE("ReadingElementsReturnTheValueFromPointerReadPosition");
}
TEST(CircularBuffer, PointerReadIncreasesByOnePositionAfterRead)
{
	TEST_FAIL_MESSAGE("PointerReadIncreasesByOnePositionAfterRead");
}
TEST(CircularBuffer, PointerReadRestartFromPosZeroWhenReachingEndOfBuffer)
{
	TEST_FAIL_MESSAGE("PointerReadRestartFromPosZeroWhenReachingEndOfBuffer");
}
TEST(CircularBuffer, PointerReadForwardedByOneIfPointerWriteReachesIt)
{
	TEST_FAIL_MESSAGE("PointerReadForwardedByOneIfPointerWriteReachesIt");
}
