
#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    float a,b,c,A1,A2,A3,Bn,Cn,x,x1;
     cout<<"Enter your First value in a : ";
     cin>>a;
     cout<<"Enter your Second Value in b : ";
     cin>>b;
     cout<<"Enter your Third Value in c : ";
     cin>>c;

   // printf("Enter your Second Value in b : ");
   // scanf("%lf\n",&b);
    //printf("Enter your Third Value in c : ");
    //scanf("%lf\n",&c);
        Cn=(a*a + b*b - c*c)/(2*a*b) ;
        cout<<Cn;

        A3 = acos(Cn)*180/M_PI;

        Bn = (c*c + a*a - b*b)/(2*a*c);


        A2 = acos(Bn)*180/M_PI;

        A1 = 180 - (A3 + A2);


   cout<<A3<<endl;
   cout<<A2<<endl;
   cout<<A1<<endl;
    return 0;
}
