#include "catch.hpp"
#include <iostream>
using namespace std;

namespace CatchUnitTest {

class TestWithFixture
{
public:
   TestWithFixture() {}
   virtual ~TestWithFixture() {}
};

TEST_CASE_METHOD(TestWithFixture, "First fixture", "[fixture]")
{
   bool expected = true;
   bool actual = true;
   CHECK(expected == actual);
   INFO(" A info message " << actual);
}

TEST_CASE_METHOD(TestWithFixture, "Second fixture", "[fixture]")
{
   bool expected = true;
   bool actual = false;
   REQUIRE(expected == actual);
   int aVar = 23;
   CAPTURE(aVar);
   WARN("A warning message " << actual);
}

TEST_CASE_METHOD(TestWithFixture, "Fail message test", "[fixture]")
{
   FAIL("Not implemented!");
}

}