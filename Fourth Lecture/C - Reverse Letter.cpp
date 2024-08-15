#include <iostream>
using namespace std;
int main(){
    char c;
    cin>>c;
    // 'a' - 'A' = 32
    // 'a' -  32 = 'A'
    // 'A' + 32 = 'a'
    if(c>='a'&&c<='z'){
        //c+=32;
        cout<<(char)(c-32);
    }
    else {
        cout<<(char)(c+32);
    }
    return 0;
}
