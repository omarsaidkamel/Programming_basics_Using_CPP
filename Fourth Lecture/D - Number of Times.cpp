#include <iostream>
using namespace std;
int main(){
    long long int l;
    cin>>l;//21
    cout<<(l/20)+((l%20)/11)+(((l%20)%11)/4)+(((l%20)%11)%4);
    return 0;
}
