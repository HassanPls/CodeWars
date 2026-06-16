/* Write a function which calculates the average of the numbers in a given array.

Note: Empty arrays should return 0. */

#include <vector>

double calc_average(const std::vector<double>& values)
{
    if (values.empty()) return 0.0;

    double total = 0.0;
    for (size_t i = 0; i < values.size(); i++)
    {
        total += values[i];
    }

    return total/values.size();
}