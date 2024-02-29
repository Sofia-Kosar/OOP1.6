#include "pch.h"
#include "CppUnitTest.h"
#include "../OOP1.6/Triad.h"
#include "../OOP1.6/Triad.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest16
{
	TEST_CLASS(UnitTest16)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Date::Triad t1;
			t1.Init(1, 2, 3);
			Assert::AreEqual(1, t1.getFirst());
			Assert::AreEqual(2, t1.getSecond());
			Assert::AreEqual(3, t1.getThird());

			Date::Triad t2;
			t2.Init(3, 2, 1);
			Assert::AreEqual(3, t2.getFirst());
			Assert::AreEqual(2, t2.getSecond());
			Assert::AreEqual(1, t2.getThird());

			Date d1, d2;
			d1.Init(t1);
			d2.Init(t2);

			Assert::IsTrue(d1.Le(d2));
			Assert::IsFalse(d1.Gt(d2));
			Assert::IsFalse(d1.Eq(d2));
			Assert::IsTrue(d1.Ne(d2));
			Assert::IsTrue(d1.Leq(d2));
			Assert::IsFalse(d1.Gtq(d2));
		}
	};
}
