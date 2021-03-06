
#define CATCH_CONFIG_MAIN
#include "../catch.hpp"
#include <cassert>

// This will result in a broken XML output. Since the runner is stopped.
int function_with_assert()
{
   assert(false);
   return 5;
}

TEST_CASE("C++ assert in other function")
{
   REQUIRE(function_with_assert() == 5);
}
