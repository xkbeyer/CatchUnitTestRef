#include "catch.hpp"
#include <iostream>

namespace CatchUnitTest {

TEST_CASE("Test Case with Sections", "[sections]")
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

   SECTION("Section FAIL")
   {
      aVar += 2;
      FAIL("Section N/A");
   }

   int a = 4;
   CHECK(5 == a);
}

TEST_CASE("Sections with FAIL", "[sections]")
{
   CHECK(true);
   SECTION("Section FAIL")
   {
      FAIL("Section N/A");
   }
}

}