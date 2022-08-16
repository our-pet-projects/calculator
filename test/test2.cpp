#include <doctest/doctest.h>

int factorial2(int number) {
    return number <= 1 ? number : factorial2(number - 1) * number;
}

TEST_CASE("testing the factorial") {
    CHECK(factorial2(1) == 1);
    CHECK(factorial2(2) == 2);
    CHECK(factorial2(3) == 6);
    CHECK(factorial2(10) == 3628800);
}
