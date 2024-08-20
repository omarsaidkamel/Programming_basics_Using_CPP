/*
We have already stated that a loop mainly consists of three statements – initialization expression, test expression, and update expression.
The syntax of the three loops – For, while, and do while mainly differs in the placement of these three statements. 

Syntax: 

initialization expression;
while (test_expression)
{
   // statements
 
  update_expression;
}
*/


// C++ program to Demonstrate while loop
#include <iostream>
using namespace std;
 
int main()
{
    // initialization expression
    int i = 1;
 
    // test expression
    while (i < 6) {
        cout << "Hello World\n";
 
        // update expression
        i++;
    }
 
    return 0;
}

/*
Output

Hello World
Hello World
Hello World
Hello World
Hello World
*/
