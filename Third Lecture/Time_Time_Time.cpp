#include <iostream>
using namespace std;
int main() {
  int h1,m1,s1,h2,m2,s2;
  cin>>h1>>m1>>s1;
  cin>>h2>>m2>>s2;
  cout<< h1 + h1 + (m1+m2+(s1+s2)/60)/60<<" : "<<(m1+m2+(s1+s2)/60)%60<<" : "<<(s1+s2)%60;
  return 0;
}
/*

4  10  10
2  2   2
---------
6  12  12


4 50 50
2 30 40
---------  /  %
   81 / 60 = 1, 21   90 / 60 => 1 ,30
7 21 30

*/
