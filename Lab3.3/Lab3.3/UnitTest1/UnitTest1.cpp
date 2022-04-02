#include "pch.h"
#include "CppUnitTest.h"
#include "..\Lab3.3\Lab3.3.cpp"


using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTestLab33
{
	TEST_CLASS(UnitTestLab33)
	{
	public:
		TEST_METHOD(TestMethod1)
		{
			const int N = 1;

			Bday* B = new Bday[N];
			Zodiac* Z = new Zodiac[N];

			B[0].day = 14;
			B[0].month = 11;
			B[0].year = 2002;

			Z[0].name = "Billy";
			Z[0].surname = "Herington";
			Z[0].zodiac_sign = "Scorpio";


			Assert::IsTrue(Search(Z, B, N, "Scorpio") == 1);
		}
	};
}
