#include<iostream>
using namespace std;
void num(int n){
    if(n>1)num(n-1);
    cout<<n<<"\n";
}

int a;
int find1(string s,int index){
    if(index<s.size()){
        if(s[index]>='a'&&s[index]<='z')return find1(s,index+1)+1;
        else return find1(s,index+1);
    }
    return 0;
}

int main(){
     //***recursion Function***

     //num(5);


     string s;cin>>s;
     cout<<find1(s,0);
    return 0;
}
