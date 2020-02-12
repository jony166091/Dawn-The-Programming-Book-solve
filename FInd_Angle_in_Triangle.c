#include<stdio.h>
#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    double a,b,c,A1,A2,A3;
    printf("Enter your First value in a : ");
    scanf("%lf\n", &a);
    printf("Enter your Second Value in b : ");
    scanf("%lf\n",&b);
    printf("Enter your Third Value in c : ");
    scanf("%lf\n",&c);
    A3=((a*a + b*b - c*c)/2*a*b) ;
    A3=acos(A3);

    A2 = ((b*b + c*c - a*a)/2*b*c );
    A2 = acos(A2);

    A1 = 180 - (A3 + A2);

    printf("%lf\n",A3);
    printf("%lf\n",A2);
    printf("%lf\n",A1);

    return 0;
}
