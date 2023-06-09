#ifndef __SAMPLE_CLASS
#define __SAMPLE_CLASS

#include <vector>
#include <string>
#include <iostream>

enum mark_t {UNDISCOVERED, DISCOVERED, EXPLORED};

class SampleClass
{
    private:
        int n;
        bool** adj_matrix;  // 2d bool arr
        mark_t* marks;
        std::vector<int> nums;
    
    public:
         SampleClass(const int);
         std::vector<int> nums_getter();
};

#endif