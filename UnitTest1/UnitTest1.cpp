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
			vector<int> Swp{ 3, 10 };
			arrays::swap(Swp[0], Swp[1]);
			Assert::AreEqual(Swp[0], 10);
			Assert::AreEqual(Swp[1], 3);
		}


		TEST_METHOD(TestMethod2)
		{
			vector<char> Swp{ 'a', 'k' };
			arrays::swap(Swp[0], Swp[1]);
			Assert::AreEqual<char>(Swp[0], 'k');
			Assert::AreEqual<char>(Swp[1], 'a');
		}
	};
}
