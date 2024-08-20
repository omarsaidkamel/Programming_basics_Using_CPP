/*
A For loop is a repetition control structure that allows us to write a loop that is executed a specific number of times.
The loop enables us to perform n number of steps together in one line. 

Syntax: 
for (initialization expr; test expr; update expr)
{    
     // body of the loop
     // statements we want to execute
}

*/

// C++ program to Demonstrate for loop
#include <iostream>
using namespace std;
 
int main()
{
    for (int i = 1; i <= 5; i++) {
        cout << "Hello World\n";
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

For Example:

#include <iostream>
using namespace std;
 
int main()
{
    int i = 99;
    for (i = 0; i < 5; i++) {
        cout << i << " ";
    }
    cout << "\n" << i;
    return 0;
}
/*
Output

0    1    2    3    4    
99
*/


For Example:

#include <iostream>
using namespace std;
 
int main()
{
    int i = 99;
    for (i = 0; i < 5; i++) {
        cout << i << " ";
    }
    cout << "\n" << i;
    return 0;
}
/*
0 1 2 3 4 
5
*/

