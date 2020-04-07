#pragma once

template <typename ArrayElement>
std::vector<ArrayElement> DutchFlagPartition(const std::vector<ArrayElement> &array_to_pivot, int64_t pivot_idx)
{
    std::vector<ArrayElement> pivoted_array;
    const auto &pivot = array_to_pivot[pivot_idx];
    for (const auto &element : array_to_pivot)
    {
        if (element < pivot)
        {
            pivoted_array.push_back(element);
        }
    }
    for (const auto &element : array_to_pivot)
    {
        if (element == pivot)
        {
            pivoted_array.push_back(element);
        }
    }
    for (const auto &element : array_to_pivot)
    {
        if (element > pivot)
        {
            pivoted_array.push_back(element);
        }
    }
    return pivoted_array;
}