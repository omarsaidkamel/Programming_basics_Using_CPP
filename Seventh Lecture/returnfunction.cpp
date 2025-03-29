#include<iostream>
using namespace std;
int math(int a,char c,int b){
    if(c=='-')return a-b;
    if(c=='+')return a+b;
    if(c=='*')return a*b;
}

char reverse1(char c){
    if(c>='a'&&c<='z') return c-32;
    else return c+32;
}

int main(){
    //***return Function***


    /*
    int a,b;char c;
    cin>>a>>c>>b;
    int x = math(a,c,b);
    cout<<x;
    */

    /*
    char c;cin>>c;
    cout<<reverse1(c);

    */
    return 0;
}
