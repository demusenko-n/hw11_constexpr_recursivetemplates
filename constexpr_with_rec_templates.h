#pragma once
namespace constexpr_templ_ns
{
	template<size_t Power>
	constexpr size_t pow_base10()
	{
		return 10 * pow_base10<Power - 1>();
	}

	template<>
	constexpr size_t pow_base10<0>()
	{
		return 1;
	}

	template<size_t N>
	constexpr size_t max_int()
	{
		return 9 * pow_base10<N - 1>() + max_int<N - 1>();
	}

	template<>
	constexpr size_t max_int<0>()
	{
		return 0;
	}

}