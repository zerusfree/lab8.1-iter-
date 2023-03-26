#include "pch.h"
#define _CRT_SECURE_NO_WARNINGS
#include "CppUnitTest.h"
#include "../8.1(iter).cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest81iter
{
	TEST_CLASS(UnitTest81iter)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			char a[10] = "AGAOOS";
			bool f = AvailableElements(a);

			Assert::AreEqual(f,true);
		}
	};
}
