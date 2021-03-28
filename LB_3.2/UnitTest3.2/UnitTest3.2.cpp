#include "pch.h"
#include "CppUnitTest.h"
#include "../Adult.h"
#include "D:\Project\OOP\LB3\LB_3.2\Adult.cpp"
#include "D:\Project\OOP\LB3\LB_3.2\Man.h"
#include "D:\Project\OOP\LB3\LB_3.2\Man.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest32
{
	TEST_CLASS(UnitTest32)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Adult I(2);
			I.SetPassportNumber(3);
			Assert::AreEqual(I.GetPassportNumber(), 3);
		}
	};
}
