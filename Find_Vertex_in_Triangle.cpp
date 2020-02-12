#include<iostream>
#include<math.h>
using namespace std;
int main(){
    //Find Vertex Area in Triangle , Formula = Ax(By-Cy)+Bx(Cy-Ay)+Cx(Ay-By)/2;
    double Ax,Bx,Cx,Ay,By,Cy ,T,Area;
    cout<<"Enter Ax,Ay coordinate : " << endl;
    cin>>Ax >> Ay ;
    cout<<"Enter Bx,By coordinate : " <<endl;
    cin>>Bx>>By;
    cout<<"Enter Cx,Cy coordinate : " <<endl;
    cin>>Cx>>Cy;
    //cout << Ax1 << " "<<Ay<<" " <<Bx1 <<" " <<By <<" " <<Cx1 <<" " <<Cy <<endl;
    T =(Ax* (By-Cy)+Bx*(Cy-Ay)+Cx*(Ay-By))/2 ;
    Area = fabs(T);
    cout << "Triangle Area is : " <<Area <<endl;


return 0;
}
