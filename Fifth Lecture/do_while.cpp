/*
Do-while loop
In Do-while loops also the loop execution is terminated on the basis of test conditions.
The main difference between a do-while loop and the while loop is in the do-while loop the condition is tested at the end of the loop body,
i.e do-while loop is exit controlled whereas the other two loops are entry-controlled loops. 

Syntax: 

initialization expression;
do
{
   // statements
   update_expression;
} while (test_expression);
*/

// C++ program to Demonstrate do-while loop
#include <iostream>
using namespace std;
 
int main()
{
    int i = 2; // Initialization expression
 
    do {
        // loop body
        cout << "Hello World\n";
 
        // update expression
        i++;
 
    } while (i < 1); // test expression
 
    return 0;
}
/*
Output

Hello World
*/
