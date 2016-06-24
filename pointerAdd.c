#include<stdio.h>
void main(){
int *a,*b,x,y,c;
printf("Enter the value of x and y \n");
scanf("%d%d",&x,&y);
a=&x;
b=&y;
c=*a + *b;
printf("Added value for x and y is %d :\t ",c);
getch();
}
