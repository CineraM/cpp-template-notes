
#include "sample.h"

#define AREA(l, b) (l * b)
// definition of a macro

using namespace EnumNS;
using namespace MathConstants;
//  exporting namespaces from header files

int main()
{
    SampleClass test_var = SampleClass(5);
    test_var.nums_getter();

    int l1=20, l2=2, area;
    area = AREA(l1,l2);

    // std::cout << area << '\n'; // testing macros

    std::cout << kPI << '\n';
    std::cout << PAMIMtrianglepresent::kLowerEdge << '\n';
    
    
    return 1;
}
//  how to compile gcc -o rwmain	main.c	readerwriter.c	-l	pthread