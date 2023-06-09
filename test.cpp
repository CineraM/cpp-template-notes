#include <iostream>
#include <fstream>
#include <sstream>
#include <map>
#include <cmath>
#include <vector>
#include <algorithm>
#include <string>
#include <set>
#include <stack>
#include <unordered_set>
#include <regex>
#include <unordered_map>
#include <queue>


/*
        POINTER STUFF!!
https://www3.ntu.edu.sg/home/ehchua/programming/cpp/cp4_PointerReference.html#:~:text=A%20reference%20variable%20provides%20a,value%20stored%20in%20a%20pointer.
https://github.com/mortennobel/cpp-cheatsheet/blob/master/README.md

int * var;      -> pointer variable

int * a;
int b = 1;
a = &b;         -> & address operand


   int number = 88;          // Declare an int variable called number
   int & refNumber = number; // Declare a reference (alias) to the variable number
                             // Both refNumber and number refer to the same value

   cout << number << endl;    // Print value of variable number (88)
   cout << refNumber << endl; // Print value of reference (88)
 
   refNumber = 99;            // Re-assign a new value to refNumber
   cout << refNumber << endl;
   cout << number << endl;    // Value of number also changes (99)

*/

void stuff(std::vector<int> & vec)
{
    for(int &num : vec)
        num = 3;
}

int main()
{
    std::unordered_map<int,int> mp;
    std::vector<int> vec {1, 1, 1, 1, 1, 1, 1, 1, 1, 1};

    for(int i = 0; i<10; i++)
        mp[i] = 1;

    // for(auto &itr : mp)
    // {
    //     itr.second = 2;
    //     std::cout << itr.second << ' '; 
    // }

    stuff(vec);
    for(auto itr : vec) std::cout << itr << ' ';


    return 1;
}
