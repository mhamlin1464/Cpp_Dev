
module;
//Global module fragments 
#include <string_view>
#include <fmt/format.h>

//module pramble 
export module utilities; 


// module perview
export void print_msg(std::string_view msg)
{
	fmt::println("{}", msg);
}