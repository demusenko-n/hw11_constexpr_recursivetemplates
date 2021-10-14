#pragma once
#include <cmath>

namespace recursive_templates
{
	template<size_t N>
	size_t max_int()
	{
		return 9 * static_cast<int>(std::pow(10, N - 1)) + max_int<N - 1>();
	}

	template<>
	size_t max_int<0>();
}
