#include <iostream>
using namespace std;
int main(){
    //1 2 3 5 7 11 13 prime
    // 4 6 8 9 12 14 15 not prime
    int x;
    cin>>x;
    if(x==1||x==2||x==3||x==5||x==7||x==11||x==13) cout<<"Prime";
    else cout<<"NotPrime";
    return 0;
}
