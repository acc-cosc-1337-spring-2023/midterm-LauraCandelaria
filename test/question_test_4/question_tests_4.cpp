#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "question4.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("test")
{
	REQUIRE(test_config() == true);
}


TEST_CASE("binary to decimal")
{
	std::string bin1 = "00001010";
	std::string bin2 = "10101010";
	std::string bin3 = "11111111";
	REQUIRE(binary_to_decimal(bin1) == 10);
	REQUIRE(binary_to_decimal(bin2) == 170);
	REQUIRE(binary_to_decimal(bin3) == 255);
}

TEST_CASE("validate bin num")
{
	std::string bin1 = "00001010";
	std::string bin2 = "101010101";
	std::string bin3 = "11111114";
	REQUIRE(validate_num(bin1) == true);
	REQUIRE(validate_num(bin2) == false);
	REQUIRE(validate_num(bin3) == false);
}