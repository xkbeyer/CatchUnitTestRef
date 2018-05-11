#include <cstdlib>
#include <cstdio>
#include "catch.hpp"

namespace CatchUnitTest {
TEST_CASE("With printf")
{
   printf("Test uses a %s\n", "printf");
   CHECK(6 > 7);
}

}

