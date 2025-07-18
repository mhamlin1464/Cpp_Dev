
/*
    - This is a mulitlines comments
    . Project description
        . Topic #1
        . Topic #2
*/
//This will comment out the entire line
#include <fmt/format.h>
#include <string>  
#include <iostream>
// One Line Comment 
// import is going to bring in the libraries that we need
import utilities;


//This is the main function of your code. First thing that will be ran in your program. The entry point.
int main()
{

    fmt::print("Hello World\n");
    int value{1};
    int value1{2};
    int value3{3};
    int sum {value1+value3+value};

    fmt::print("Sum of values: ");
    std::cout<< sum << std::endl;
}