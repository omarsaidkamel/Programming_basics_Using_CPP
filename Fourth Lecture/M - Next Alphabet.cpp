#include <iostream>
using namespace std;
int main(){      // 25 + 2 % 26
    char c;int n;//z + 1
    cin>>c>>n;
    if(c>='a' && c<='z'){
    //z 2
    // 'z' - 'a' = 25 + 2 = 27 % 26 = 1 +'a' = b
        int s = ((c-'a') + n)%26;
        cout<<(char)((s+'a')- 32);  // 5 + 'a' =f
         /*  3 + 2 = 5 % 26 = 5
          (char) 5 + 'a';*/
    }// D 2
     if(c>='A' && c<='Z'){
        int s = ((c-'A') + n) %26;
        cout<<(char)((s+'A') + 32);  // 5 + 'a' =f
         /*  3 + 2 = 5 % 26 = 5
          (char) 5 + 'a';*/
    }
/*
    a->z ->a
    26
    a b c .... z
    0 1 2      25*/
    return 0;
