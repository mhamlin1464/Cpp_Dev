/*
    . Project description
        . Topic #1
        . Topic #2
*/


#include "utilities.h"
#include <fmt/format.h>

int main() {
    int value1 {10};
    int value2 {20};

    fmt::print("The values are {} and {}\n", value1, value2);
}