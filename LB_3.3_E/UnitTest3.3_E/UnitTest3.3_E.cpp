#include "pch.h"
#include "CppUnitTest.h"
#include "../Complex.h"
#include "D:\Project\OOP\LB3\LB_3.3_E\Complex.cpp"
#include "D:\Project\OOP\LB3\LB_3.3_E\Pair.h"
#include "D:\Project\OOP\LB3\LB_3.3_E\Pair.cpp"
#include "D:\Project\OOP\LB3\LB_3.3_E\Object.h"
#include "D:\Project\OOP\LB3\LB_3.3_E\Object.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest33E
{
	TEST_CLASS(UnitTest33E)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Complex i(0, 0);
			Pair  k1(4), k2(2);

			Assert::AreEqual(i.Diff_1(k1, k2), 2);
		}
	};
}
