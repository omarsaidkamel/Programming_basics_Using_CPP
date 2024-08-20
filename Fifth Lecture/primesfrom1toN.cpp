#include <iostream>
using namespace std;

int main(){
    int n; cin>>n;
  for(int i = 2; i < n; i++){  bool P = 1;
      for (int j = 2; j < n; j++) {
        if(i % j == 0 && i != j) P=0;
      }
       if(P) cout<<i<<" ";
  }
    return 0;
}
