#include "pch.h"
#include "CppUnitTest.h"
#include "../Project9.1/Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest91А
{
	TEST_CLASS(UnitTest91А)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			const int k = 0;
			int N= 0;
			int m = Number(0,N);
			Assert::AreEqual(m, 0);
		}
	};
}
