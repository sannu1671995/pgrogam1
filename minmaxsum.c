#include<stdio.h>
void main(){
int a[30],i,j;
int min,max,c;
printf("Enter the number of element in the array \n");
scanf("%d",&j);
for(i=0;i<j;i++){
scanf("%d",&a[i]);
}
min=a[0];
max=0;
for(i=0;i<j;i++){
if(a[i]<min){
min=a[i];
}
if(a[i]>max){
max=a[i];
}
}
printf("\n max:%d",max);
printf(" \n min: %d",min);
c=max+min;
printf("Sum of min and max value of array is %d ",c);
getch();
}
