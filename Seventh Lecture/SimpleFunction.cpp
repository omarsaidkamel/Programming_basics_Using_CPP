#include<iostream>
using namespace std;
void add(int a,int b){
    cout<<a+b<<"\n";
}
void sub(int a,int b){
    cout<<a-b<<"\n";
}

void math(char c,int a,int b){
    if(c=='-')cout<<a-b<<"\n";
    if(c=='+')cout<<a+b<<"\n";
    if(c=='*')cout<<a*b<<"\n";
}
void palindrom(string s){
    bool b=1;
    for(int i=0,j=s.size();i<j;i++,j--){
        if(s[i]!=s[j])b=0;
    }
    cout<<(b?"YES":"NO");
}
int main(){
    //***Simple Function***

    //int a,b;char c;
   // cin>>a>>c>>b;
    /*
    if(c=='-')add(a,b);
    if(c=='+')sub(a,b);
    */
    //math(c,a,b);


   /*
    string s;
    cin>>s;
    palindrom(s)
    */

/*
    int n,A[1002];
    cin>>n;
    for(int i=0;i<n;i++)cin>>A[i];
    freqarray(n,A);*/
    return 0;
}
