#include<stdio.h>
#include<math.h>

int main()
{
    double x1,x2,y1,y2,L,A,B;
    printf("Enter the 1st point value for x1 : ");
    scanf("%lf", &x1);
    printf("Enter the 2nd point value for x2 : ");
    scanf("%lf", &x2);
    printf("Enter the 3rd point value for y1 : ");
    scanf("%lf", &y1);
    printf("Enter the 4th point value for y2 : ");
    scanf("%lf",&y2);

    //Find the Length of these coordinate .

      A= (x2 - x1 );
      B= (y2-y1);
      A= A*A;
      B= B*B;
      L = A + B;
      L = sqrt(L);
      printf("%lf\n", L );


    return 0;
}
