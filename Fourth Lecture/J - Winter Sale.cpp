#include <iostream>
#include<iomanip>
using namespace std;
int main(){ //15 20
    double x,y;
    cin>>x>>y;
     cout << fixed << setprecision(2);
    cout<<y + (y * (x/100) / ((100-x)/100));
     return 0;
}
