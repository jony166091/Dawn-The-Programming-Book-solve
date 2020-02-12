#include<iostream>
#include<math.h>
using namespace std;
int main(){
    //find perimeter in circle . Formula : p=2*pi*r , pi = acos(-1) .
    long double pi,r,p;
    cout<<"Enter your radius in circle : " ;
    cin>>r;
    pi = acos(-1);
    p= 2 * pi * r;
    cout<<"Circle Perimeter is : " << p <<endl;


return 0;
}
