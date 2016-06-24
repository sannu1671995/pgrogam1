#include<stdio.h>
void main()
{
int a;
printf("Enter the number from 0 to 9 \n");
scanf("%d",&a);
if(a>9 || a<0){
printf("The given number is out of range \n");
}
else{
printf("The number is %d",a);}
getch();
}
