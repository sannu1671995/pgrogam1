#include<stdio.h>
void main(){
int a,i;
printf("Enter the number \n");
scanf("%d",&a);
printf("Multiplication table for %d till 20 is \n",a);
for(i=0;i<=20;i++){
printf("%d * %d = %d \n",a,i,a*i);
}
getch();
}
