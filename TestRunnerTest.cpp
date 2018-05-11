//============================================================================
// Name        : TestRunnerTest.cpp
// Author      : Klaus Beyer
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include <iostream>

namespace CatchUnitTest {
TEST_CASE("Simple test case", "[tag]")
{
   REQUIRE(5 == 5);
   CHECK(3 == 4);
   REQUIRE(9 == 0);
   WARN("Test Done.");
}

TEST_CASE("Another test case", "[tag]")
{
   int a = 5;
   int b = 6;
   REQUIRE(a == a);
   CHECK(a == b);

   SECTION("A Section test")
   {
      b = 5;
      CHECK(a == b);
   }
}

TEST_CASE("Third test case", "[tag]")
{
	int a = 5;
	int b = 6;
	REQUIRE(a == a);
	FAIL_CHECK("Fail check");
}
}