#include "sample.h"

SampleClass::SampleClass(const int input)
{
    n = input;

    adj_matrix = new bool*[n];
    for(int i = 0; i<n; i++)
    {
        adj_matrix[i] = new bool[n];
        for(int j = 0; j<n; j++)
        {
            adj_matrix[i][j] = false;
        }
    }

    marks = new mark_t[n];
    for(int i = 0; i < n; i++)
        marks[i] = UNDISCOVERED;

    for(int i = 0; i<n; i++) 
    nums.push_back(i);
}

std::vector<int> SampleClass::nums_getter()
{
    for(int itr : nums)
        std::cout << itr << " ";
    std::cout << '\n'; 
}