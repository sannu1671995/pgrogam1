#include<stdio.h>
#include<math.h>
int check(double a,double b);
void main(){
double x,y,z;
printf("Enter the number \n");
scanf("%lf",&x);
check(x,z);
getch();
}
int check(double a,double b){
return  !((modf(log(a)/log(2),&b))==0.0000) ? printf("\n The number is not a power of 2 ") : printf("\n The number is power of 2");
}
