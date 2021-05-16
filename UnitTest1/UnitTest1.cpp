#include "pch.h"
#include "../Project1/include/array_common.hpp"
#include "CppUnitTest.h"
#include "vector"
#include "string"
using namespace std;

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			vector<int> Lol{ 1,2,3,4,5,6 };
			Assert::AreEqual(arrays::sum(Lol),21);
			vector<double> quite{ 3.3, 5.7, 1.2, 7.8 };
			Assert::AreEqual<double>(arrays::sum(quite), 18);
		}

		TEST_METHOD(TestMethod2)
		{
			vector<int> Lol{ 5,7,8,9,4 };
			Assert::AreEqual<string>(arrays::to_str(Lol),"[5, 7, 8, 9, 4]");
		
		}
	};
}
