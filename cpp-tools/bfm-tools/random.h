﻿#pragma once
#include <vector>
#include <random>
#include <time.h>

/* Function: randn
 * Usage: std::vector<double> seq = randn(n);
 * Parameters:
 *		n - The number of random element to be generated.
 * -------------------------------------------------------------
 * Generate a sequence of random numbers into a vector sequence.
 * Its distribution is normal distribution whose sigma = 0 ,and 
 * miu = 1.
 */

std::vector<double> randn(int n);