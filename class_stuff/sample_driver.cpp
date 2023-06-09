
#include "sample.h"

int main()
{
    SampleClass test_var = SampleClass(5);
    test_var.nums_getter();
    return 1;
}
//  how to compile gcc -o rwmain	main.c	readerwriter.c	-l	pthread