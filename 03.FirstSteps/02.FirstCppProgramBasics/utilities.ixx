module; //This will tell c++ that is is a module file

//Includes go after module keyword 
#include <fmt/format.h>//Global module fragment
//Need to set up a module interface 
export module utilities; 
//It is possible to have the module name and file name named differently. HOwever, make it easy and name it that same
//export module dog;
//The reason we have modules is to offload some work from the main function. 

//We need to set up a function to work with modules 
export int add_numbers(int first_parameter, int second_parameter) //We are creating a new function with an integer return type nad two parameters. 
{
    return first_parameter+second_parameter;
}

export void do_work() //keywords: export -- need for modules  and void -- a type where nothing is returned | function name: do_work()
{
    fmt::println("Doing somehting inside do_work");
    fmt::println("Hello World!"); //An easy way to print item to the terminal
    fmt::println("This is an awesome class! "); //println will create a new-line character after ther string 
    fmt::print("The function print does not create a new-line charcter. So the next item printed will be after this: ");
    fmt::println("If you notice I am using the println() function. This string is still print on the same line as the above one but it will create a new line once finished");

    //This is a variable that stores an integer. C++ is a strongly types language where each varaible, function, etc... is a specific type
    int num{5};
    int num2{6}; // Variables need have to different name and they are case sensitive . Num is not the same as num
    int result = add_numbers(num,num2); //Calling our function from 

    //Printing the result of the addition above 
    fmt::println("Result: {}", result); // This is like formatted text in python. We use curly braces 
    fmt::print("Easy peasy lemon skuessy");
    fmt::print("\n"); // This is another way of print a new line character. This is called an esceape sequences and there are many different type of escape sequences 
}


//It is important where you define functions and where you use your function inside of your file

