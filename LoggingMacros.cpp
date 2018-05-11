#include <cstdlib>
#include <cstdio>
#include "catch.hpp"

namespace CatchUnitTest {

TEST_CASE("Warn", "[Logging]")
{
   WARN("This is a warning message"); // Always logged
   CHECK(false); // to see something in TestExplorer
}

TEST_CASE("Info", "[Logging]")
{
   INFO("This is a info message"); 
   CHECK(true); // Info is logged here
}

TEST_CASE("FailCheck", "[Logging]")
{
   FAIL_CHECK("This is a fail check message"); // Message is logged and test continues...
   CHECK(true);
   CHECK(5 == 5);
   REQUIRE(false);
}

TEST_CASE("Fail", "[Logging]")
{
   FAIL("This is a fail message"); // Test stops here
   CHECK(false);
}

TEST_CASE("Capture", "[Logging]")
{
   int theAnswer = 42;
   CAPTURE(theAnswer);
   CHECK(false); // Now capture is logged.
}

TEST_CASE("CheckAndFail", "[check]")
{
   int theAnswer = 42;
   CAPTURE(theAnswer);
   CHECK(false); // Now capture is logged.
   //REQUIRE(false); // Now capture is logged.
   FAIL("Failed again");// Now capture is logged.
}

}

