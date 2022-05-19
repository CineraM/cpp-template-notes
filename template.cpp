#include <iostream>
#include <fstream>
#include <iostream>
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
using namespace std;


 // Definition for a binary tree node.
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

// Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};


ListNode* mergeKLists(vector<ListNode*>& lists)
{
    vector<int> nums;
    ListNode* cur = new ListNode;
    ListNode* head = new ListNode;

    for(auto list : lists)
    {
        for(cur = list; cur != nullptr; cur = cur->next)
            nums.push_back(cur->val);
    }

    int size = nums.size();
    if(size <= 0)
        return head;

    sort(nums.begin(), nums.end());
    
    head->val = nums[0];
    cur = head;

    for(int i = 1; i<size; i++)
    {
        ListNode* new_node = new ListNode;
        new_node->val = nums[i];
        cur->next = new_node;
        cur = cur->next;
    }

    return head;
    
}

int main()
{
    vector<int> a = {2,1,4,7,3,2,5};

    return 1;
}

/*


3. Given N = 22, your function should return [2, 4, 6, 10] in any order.
*/

/////////////////////////// C++ NOTES //////////////////////////////////////
/*
//---------------------------------------------------------------------------------------------------
// useful stuff
//---------------------------------------------------------------------------------------------------
permutations
do
{
    // for(int i = 0; i<size;i++)
    //      cout << range[i] << " ";
    //  cout << endl;
    perm.push_back(range);
} while (next_permutation(range.begin(), range.end()));



it = find(vec.begin(), vec.end(), item) != vec.end() // find element on DS
int index = it - vec.begin();
min(x, y); max(x, y);         // Smaller/larger of x, y (any type defining <)
swap(x, y);                   // Exchange values of variables x and y
sort(a, a+n);                 // Sort array a[0]..a[n-1] by <
sort(a.begin(), a.end());     // Sort vector or deque
reverse(a.begin(), a.end());  // Reverse vector or deque

Loop stuff
    for(int i = 0; i < size; i++)

inverse loop
    for(int j = size-1; j >= 0; j--)

Iterators loop:
    for(auto it = v.begin(); it != v.end(); ++it)
or
    for(auto it : data_structure)

 LL loop
 node_t* cur = new node_t; --> use constructor or auto
    for(cur = this->head; cur != nullptr;cur = cur->next)
    */

/*
//---------------------------------------------------------------------------------------------------
// STRING-STRING-STRING-STRING-STRING-STRING-STRING-STRING-STRING-STRING-STRING-STRING
//---------------------------------------------------------------------------------------------------
#include <string>         // Include string (std namespace)
string s1, s2="hello";    // Create strings
s1.size(), s2.size();     // Number of characters: 0, 5
s1 += s2 + ' ' + "world"; // Concatenation
s1 == "hello world"       // Comparison, also <, >, !=, etc.
s1[0];                    // 'h'
s1.substr(m, n);          // Substring of size n starting at s1[m]
s1.c_str();               // Convert to const char*
s1 = to_string(12.05);    // Converts number to string
getline(cin, s);          // Read line ending in '\n'

isupper(), islower()      // check for capitalized or lowercase

transform(str.begin(), str.end(), str.begin(), ::toupper); // make to upper or lower

// ony for small integers
int x = stoi("123");
int x = (int)'a';

// string to int
Easiest --> to
rev is a string;
int ret;
istringstream line(rev);
   line >> ret;
*/


/* fstreams
#include <fstream>          // Include filestream (std namespace)
ifstream f1("filename");    // Open text file for reading
if (f1)                     // Test if open and input available
    f1 >> x;                // Read object from file
f1.get(s);                  // Read char or line
f1.getline(s, n);           // Read line into string s[n]
ofstream f2("filename");    // Open file for writing
if (f2) f2 << x;            // Write to file
*/

/*fLOATING POINT MATCH INCLUDE math.h, cmath
#include <cmath>            // Include cmath (std namespace)
sin(x); cos(x); tan(x);     // Trig functions, x (double) is in radians
asin(x); acos(x); atan(x);  // Inverses
atan2(y, x);                // atan(y/x)
sinh(x); cosh(x); tanh(x);  // Hyperbolic sin, cos, tan functions
exp(x); log(x); log10(x);   // e to the x, log base e, log base 10
pow(x, y); sqrt(x);         // x to the y, square root
ceil(x); floor(x);          // Round up or down (as a double)
fabs(x); fmod(x, y);        // Absolute value, x mod y
*/


//---------------------------------------------------------------------------------------------------
// DATA STRUCTURES-DATA STRUCTURES-DATA STRUCTURES-DATA STRUCTURES-DATA STRUCTURES-DATA STRUCTURES
//---------------------------------------------------------------------------------------------------
/*
  VECTORS - VECTORS - VECTORS - VECTORS - VECTORS

for (int& p : a)
  p=0;                    // C++11: Set all elements of a to 0
for (vector<int>::iterator p=a.begin(); p!=a.end(); ++p)
  *p=0;                   // C++03: Set all elements of a to 0
vector<int> b(a.begin(), a.end());  // b is copy of a
vector<T> c(n, x);        // c[0]..c[n-1] init to x
T d[10]; vector<T> e(d, d+10);      // e is initialized from d


  DEQUE - DEQUE - DEQUE - DEQUE - DEQUE - DEQUE

#include <deque>          // Include deque (std namespace)
a.push_front(x);          // Puts x at a[0], shifts elements toward back
a.pop_front();            // Removes a[0], shifts toward front


  MAP - MAP - MAP - MAP - MAP - MAP - MAP - MAP - MAP

pair<string, int> a("hello", 3);  // A 2-element struct
a.first;                  // "hello"
a.second;                 // 3

BINARY TREE MAP
#include <map>            // Include map (std namespace)
map<string, int> a;       // Map from string to int
a["hello"] = 3;           // Add or replace element a["hello"]
for (auto& p:a)
    cout << p.first << p.second;  // Prints hello, 3
a.size();                 // 1


HASH TABLE MAP

#include <unordered_map>  // Include map (std namespace)
unordered_map<string, int> a; // Map from string to int
a["hello"] = 3;           // Add or replace element a["hello"]
for (auto& p:a)
    cout << p.first << p.second;  // Prints hello, 3
a.size();                 // 1


  SET - SET - SET - SET - SET - SET - SET - SET - SET - SET
Binary tree set

#include <set>            // Include set (std namespace)
set<int> s;               // Set of integers
s.insert(123);            // Add element to set
if (s.find(123) != s.end()) // Search for an element
    s.erase(123);
cout << s.size();         // Number of elements in set

hash table set
#include <unordered_set>  // Include set (std namespace)
unordered_set<int> s;     // Set of integers
s.insert(123);            // Add element to set
if (s.find(123) != s.end()) // Search for an element
    s.erase(123);
cout << s.size();         // Number of elements in set




//---------------------------------
// stack-stack-stack-stack
//---------------------------------
std::stack<int> s;
// Push
s.push(20);

// Size
unsigned int size = s.size();

// Pop
s.pop();

// Top
int top = s.top();


//---------------------------------
// queue-queue-queue-queue
//---------------------------------
std::queue<int> q;

// Insert
q.push(value);

// Access head, tail
int head = q.front();       // head
int tail = q.back();        // tail

// Size
unsigned int size = q.size();

// Remove
q.pop();



//---------------------------------
// priority_queue-priority_queue-priority_queue-priority_queue
//---------------------------------
std::priority_queue<int> p;

// Insert
p.push(value);

// Access
int top = p.top();  // 'Top' element

// Size
unsigned int size = p.size();

// Remove
p.pop();



//---------------------------------
// deque-deque-deque-deque
//---------------------------------
std::deque<int> d;

// Insert head, index, tail
d.push_front(value);                    // head
d.insert(d.begin() + index, value);     // index
d.push_back(value);                     // tail

// Access head, index, tail
int head = d.front();       // head
int value = d.at(index);    // index
int tail = d.back();        // tail

// Size
unsigned int size = d.size();

// Iterate
for(std::deque<int>::iterator it = d.begin(); it != d.end(); it++) {
    std::cout << *it << std::endl;
}

// Remove head, index, tail
d.pop_front();                  // head
d.erase(d.begin() + index);     // index
d.pop_back();                   // tail

// Clear
d.clear();


*/



/*
• DFS:
    – Mark all vertices undiscovered
    – Call DFS-Recursive(v0)
    – If any vertex still undiscovered, choose one and restart

• DFS-Recursive(v):
    – Mark v as discovered
    – For c in N(v):
        • If c is undiscovered
            – Call DFS-Recursive(c)
    – Mark v as explored (optional)

BFS:
    Mark all vertices as undiscovered
   • Add v0 to queue
   • Mark v0 as discovered
   • While queue is not empty:
       – Dequeue vertex v
       – Mark v as explored (optional)
       – Enqueue undiscovered neighbors of v
       – Mark those neighbors as discovered
   • If any vertex still undiscovered, choose one and restart

*/



//// CLASS SYNTAX ///////


/*TEMPLATES
template <class T> T f(T t);// Overload f for all types
template <class T> class X {// Class with type parameter T
  X(T t); };                // A constructor
template <class T> X<T>::X(T t) {}
                            // Definition of constructor
X<int> x(3);                // An object of type "X of int"
template <class T, class U=T, int n=0>
                            // Template with default parameters
*/

/*CLASSES
class T {                   // A new type
private:                    // Section accessible only to T's member functions
protected:                  // Also accessible to classes derived from T
public:                     // Accessible to all
    int x;                  // Member data
    void f();               // Member function
    void g() {return;}      // Inline member function
    void h() const;         // Does not modify any data members
    int operator+(int y);   // t+y means t.operator+(y)
    int operator-();        // -t means t.operator-()
    T(): x(1) {}            // Constructor with initialization list
    T(const T& t): x(t.x) {}// Copy constructor
    T& operator=(const T& t)
    {x=t.x; return *this; } // Assignment operator
    ~T();                   // Destructor (automatic cleanup routine)
    explicit T(int a);      // Allow t=T(3) but not t=3
    T(float x): T((int)x) {}// Delegate constructor to T(int)
    operator int() const
    {return x;}             // Allows int(t)
    friend void i();        // Global function i() has private access
    friend class U;         // Members of class U have private access
    static int y;           // Data shared by all T objects
    static void l();        // Shared code.  May access y but not x
    class Z {};             // Nested class T::Z
    typedef int V;          // T::V means int
};
void T::f() {               // Code for member function f of class T
    this->x = x;}           // this is address of self (means x=x;)
int T::y = 2;               // Initialization of static member (required)
T::l();                     // Call to static member
T t;                        // Create object t implicit call constructor
t.f();                      // Call method f on object t

struct T {                  // Equivalent to: class T { public:
  virtual void i();         // May be overridden at run time by derived class
  virtual void g()=0; };    // Must be overridden (pure virtual)
class U: public T {         // Derived class U inherits all members of base T
  public:
  void g(int) override; };  // Override method g
class V: private T {};      // Inherited members of T become private
class W: public T, public U {};
                            // Multiple inheritance
class X: public virtual T {};
                            // Classes derived from X have base T directly
*/

/*EXPRESSIONS
T::X                        // Name X defined in class T
N::X                        // Name X defined in namespace N
::X                         // Global name X

t.x                         // Member x of struct or class t
p-> x                       // Member x of struct or class pointed to by p
a[i]                        // i'th element of array a
f(x,y)                      // Call to function f with arguments x and y
T(x,y)                      // Object of class T initialized with x and y
x++                         // Add 1 to x, evaluates to original x (postfix)
x--                         // Subtract 1 from x, evaluates to original x
typeid(x)                   // Type of x
typeid(T)                   // Equals typeid(x) if x is a T
dynamic_cast< T>(x)         // Converts x to a T, checked at run time.
static_cast< T>(x)          // Converts x to a T, not checked
reinterpret_cast< T>(x)     // Interpret bits of x as a T
const_cast< T>(x)           // Converts x to same type T but not const

sizeof x                    // Number of bytes used to represent object x
sizeof(T)                   // Number of bytes to represent type T
++x                         // Add 1 to x, evaluates to new value (prefix)
--x                         // Subtract 1 from x, evaluates to new value
~x                          // Bitwise complement of x
!x                          // true if x is 0, else false (1 or 0 in C)
-x                          // Unary minus
+x                          // Unary plus (default)
&x                          // Address of x
*p                          // Contents of address p (*&x equals x)
new T                       // Address of newly allocated T object
new T(x, y)                 // Address of a T initialized with x, y
new T[x]                    // Address of allocated n-element array of T
delete p                    // Destroy and free object at address p
delete[] p                  // Destroy and free array of objects at p
(T) x                       // Convert x to T (obsolete, use .._cast<T>(x))

x * y                       // Multiply
x / y                       // Divide (integers round toward 0)
x % y                       // Modulo (result has sign of x)

x + y                       // Add, or \&x[y]
x - y                       // Subtract, or number of elements from *x to *y
x << y                      // x shifted y bits to left (x * pow(2, y))
x >> y                      // x shifted y bits to right (x / pow(2, y))

x < y                       // Less than
x <= y                      // Less than or equal to
x > y                       // Greater than
x >= y                      // Greater than or equal to

x & y                       // Bitwise and (3 & 6 is 2)
x ^ y                       // Bitwise exclusive or (3 ^ 6 is 5)
x | y                       // Bitwise or (3 | 6 is 7)
x && y                      // x and then y (evaluates y only if x (not 0))
x || y                      // x or else y (evaluates y only if x is false (0))
x = y                       // Assign y to x, returns new value of x
x += y                      // x = x + y, also -= *= /= <<= >>= &= |= ^=
x ? y : z                   // y if x is true (nonzero), else z
throw x                     // Throw exception, aborts if not caught
x , y                       // evaluates x and y, returns y (seldom used)






#include <iostream>

#define NIL 0
#define MAX 1000

long int lookup_table[MAX] = {};

using namespace std;

long int fib(int n) {
    if(n <= 1)
        return n;
    return fib(n-1) + fib(n-2);
}

long int fib_mem(int n) {
    assert(n < MAX);
    if(lookup_table[n] == NIL) {
        if(n <= 1)
            lookup_table[n] = n;
        else
            lookup_table[n] = fib_mem(n-1) + fib_mem(n-2);
    }
    return lookup_table[n];
}
*/