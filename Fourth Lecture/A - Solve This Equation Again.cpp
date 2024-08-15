#include <iostream>
using namespace std;
int main(){
    long long int a,b;
    cin>>a>>b;
    //A^3 = A * A * A
    cout<<"The Result = "<<(a*a*a)+(b*b*b)+(a*b);
    return 0;
}
