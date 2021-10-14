#include <iostream>
#include <array>
#include "constexpr_tasks.h"
#include "constexpr_with_rec_templates.h"
#include "recursive_templates_tasks.h"



int main()
{
	constexpr size_t value = 9;

	constexpr size_t res1 = constexpr_templ_ns::max_int<value>();
	constexpr size_t res2 = constexpr_ns::max_int(value);

	size_t res3 = recursive_templates::max_int<value>();

	static_assert(res1 == res2);

	
	std::cout << res1 << std::endl << res2 << std::endl << res3 << std::endl;
	return 0;
}
