#include "pch.h"
#include "CppUnitTest.h"
#include "../Complex_Public.h"
#include "D:\Project\OOP\LB3\LB_3.3_D\Complex_Public.cpp"
#include "D:\Project\OOP\LB3\LB_3.3_D\Pair.h"
#include "D:\Project\OOP\LB3\LB_3.3_D\Pair.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest33D
{
	TEST_CLASS(UnitTest33D)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Complex_Public i(0,0);
			Pair  k1(4), k2(2);

			Assert::AreEqual(i.Diff_1(k1,k2), 2);
		}
	};
}
