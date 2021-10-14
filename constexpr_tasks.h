#pragma once
namespace constexpr_ns
{
	constexpr int max_int(size_t digits_amount)
	{
		int res = 0, temp = 1;
		for (int i = 0; i < digits_amount; ++i)
		{
			res += 9 * temp;
			temp *= 10;
		}
		return res;
	}
}