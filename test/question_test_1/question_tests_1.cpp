#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "question1.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("factorial string")
{
	REQUIRE(factorial(3) == "3*2*1=6");
	REQUIRE(factorial(4) == "4*3*2*1=24");
	REQUIRE(factorial(5) == "5*4*3*2*1=120");
	REQUIRE(factorial(6) == "6*5*4*3*2*1=720");
}
