#ifndef __SAMPLE_CLASS
#define __SAMPLE_CLASS

#include <vector>
#include <string>
#include <iostream>

enum mark_t {UNDISCOVERED, DISCOVERED, EXPLORED};

namespace MathConstants
{
	const double kPI = 3.14159265;
	const double eps0 = 8.85418781762039e-012;
	const double micSq2mSq = 1e-12;
	const double kRadToDegree = 180 / kPI;
}

namespace EnumNS
{
    enum PAMIMtrianglepresent { kNoTriangle, kUpperEdge,
     kLowerEdge, kBothEdges };
}

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

/*
unamed name spaces are only available within a file
like static in C

*/
