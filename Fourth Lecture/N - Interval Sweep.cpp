#include <iostream>
using namespace std;
int main(){
    int a,b;
    cin>>a>>b;
    // 0 0
    if(a==0 && b==0) cout<<"NO";
    else if(a==b||a==b-1||a-1==b)cout<<"YES";
    else cout<<"NO";
    return 0;
}
/*o e
2 3
 
2 1 4 3 6*/
