#include<iostream>
#include<math.h>
using namespace std;
int main(){
    //Find Area in Triangle , Formula : s = a+b+c/2; (s=semi perimeter ) A = root(s(s-a)(s-b)(s-c))
    int Area,s,a,b,c,T;
    cout<<"Enter Sides a : " ;
    cin>>a;
    cout<<"Enter Sides b: " ;
    cin>>b;
    cout<<"Enter Sides C: " ;
    cin>>c;

    s = (a+b+c)/2;
    T = (s*(s-1)*(s-b)*(s-c));
    Area = sqrt(T);
    cout<<"Triangle Area is : "<<Area <<endl;

return 0;
}
