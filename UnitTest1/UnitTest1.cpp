#include "pch.h"
#include "CppUnitTest.h"
#include "../8.1.1.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			char str[] = "abc";
			int m = Count(str);
				Assert::AreEqual(m, 1);
		}
	};
}
