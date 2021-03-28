#include "pch.h"
#include "CppUnitTest.h"
#include "../Complex.h"
#include "D:\Project\OOP\LB3\LB_3.1\Complex.cpp"
#include "D:\Project\OOP\LB3\LB_3.1\Pair.h"
#include "D:\Project\OOP\LB3\LB_3.1\Pair.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest31
{
	TEST_CLASS(UnitTest31)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Complex i(2);
			Pair  h1(4), h2(2);

			Assert::AreEqual(i.Diff_1(h1, h2), 2);
		}
	};
}
