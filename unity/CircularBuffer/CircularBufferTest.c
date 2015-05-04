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
	TEST_FAIL_MESSAGE("BufferStartsWithPredefinedSize");
}
TEST(CircularBuffer, BufferStartsEmpty)
{
	TEST_FAIL_MESSAGE("BufferStartsEmpty");
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
