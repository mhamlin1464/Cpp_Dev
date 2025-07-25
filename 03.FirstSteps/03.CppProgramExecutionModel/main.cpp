
#include <string_view>
#include <fmt/format.h>
import utilities;

int f_add(int a, int b)
{
    return a + b;
}
//If you need a function that is simple then do that in the main file. 

//This is the main function of your code. First thing that will be ran in your program. The entry point.
int main()
{
    int a = 10;
    int b = 5;
    int c;
    print_msg("Statement 1");
    print_msg("Statement 2");
    c = f_add(a, b);
    fmt::println("{}", c);
    print_msg("Statement 3");
    print_msg("Statement 4");

}