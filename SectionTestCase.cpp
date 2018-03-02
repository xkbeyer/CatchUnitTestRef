#include "catch.hpp"
#include <iostream>
using namespace std;

TEST_CASE("Test Case with Sections")
{
	bool expected = true;
	bool actual = true;
	REQUIRE(expected == actual);
	int aVar = 23;
	REQUIRE(23 == aVar);

	SECTION("Section A")
	{
		aVar++;
		CHECK(24 == aVar);
	}

	SECTION("Section B")
	{
		aVar += 10;
		CHECK(33 == aVar);
	}

	SECTION("Section C")
	{
		aVar += 7;
		CHECK(30 == aVar);
		SECTION("Nested Section in C")
		{
			aVar += 7;
			CHECK(37 == aVar);
		}
	}

	SECTION("Section D")
	{
		aVar += 2;
		CHECK(25 == aVar);
	}

	int a = 4;
	CHECK(5 == a);
}

