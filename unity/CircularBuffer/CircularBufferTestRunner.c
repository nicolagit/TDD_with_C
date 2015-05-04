#include "unity_fixture.h"

TEST_GROUP_RUNNER(CircularBuffer)
{
	RUN_TEST_CASE(CircularBuffer, BufferStartsWithPredefinedSize);
	RUN_TEST_CASE(CircularBuffer, BufferStartsEmpty);
	RUN_TEST_CASE(CircularBuffer, PointerWriteStartsInPosZero);
	RUN_TEST_CASE(CircularBuffer, PointerReadStartsInPosZero);
	RUN_TEST_CASE(CircularBuffer, NewElementIsWrittenInPointerWritePosition);
	RUN_TEST_CASE(CircularBuffer, PointerWriteIncreasesByOnePositionAfterWrote);
	RUN_TEST_CASE(CircularBuffer, PointerWriteRestartFromPosZeroWhenReachingEndOfBuffer);
	RUN_TEST_CASE(CircularBuffer, ExceptionIfTryToWriteElementNotINT);
	RUN_TEST_CASE(CircularBuffer, ReadingElementsReturnTheValueFromPointerReadPosition);
	RUN_TEST_CASE(CircularBuffer, PointerReadIncreasesByOnePositionAfterRead);
	RUN_TEST_CASE(CircularBuffer, PointerReadRestartFromPosZeroWhenReachingEndOfBuffer);
	RUN_TEST_CASE(CircularBuffer, PointerReadForwardedByOneIfPointerWriteReachesIt);
}
