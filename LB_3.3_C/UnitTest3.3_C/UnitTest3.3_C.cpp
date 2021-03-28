#include "pch.h"
#include "CppUnitTest.h"
#include "../FuzzyNumber.h"
#include "D:\Project\OOP\LB3\LB_3.3_C\FuzzyNumber.cpp"
#include "D:\Project\OOP\LB3\LB_3.3_C\Object.h"
#include "D:\Project\OOP\LB3\LB_3.3_C\Object.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest33C
{
	TEST_CLASS(UnitTest33C)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			FuzzyNumber A(1, 1, 1);
			A.SetX(5);
			Assert::AreEqual(A.GetX(), 5.);
		}
	};
}
