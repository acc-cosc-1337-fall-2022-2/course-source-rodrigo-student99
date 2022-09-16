#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "void.h"
#include "val_ref.h"
TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Test function value/copy parameters dont change var values")
{
	int num = 10;
	int num1 = 15;
	val_ref_params(num,num1);

	REQUIRE(num == 10);
	REQUIRE(num1 == 30);
}