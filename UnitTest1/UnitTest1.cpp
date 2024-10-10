#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab_5.4/Lab_5.4.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			double N = 16;
			double expected = 0.5;
			double actual = P0(N);
			Assert::AreEqual(expected, actual, 1e-10);

		}
	};
}
