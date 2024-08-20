// C++ program to Demonstrate for loop
#include <iostream>
using namespace std;
 
int main(){
    int n; cin>>n;
    bool P = 1;
    for (int i = 2; i < n; i++) {
      if(n % i == 0)P=0;
    }
 cout<<(P ? "Prime" : "NotPrime");
    return 0;
}
