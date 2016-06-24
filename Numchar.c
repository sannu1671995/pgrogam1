#include<stdio.h>
#include<string.h>
void main(){
char a[20];
int i,j,count,k;
printf("Enter the string \n");
scanf("%s",&a);
j=strlen(a);
count=0;
for(i=0;i<j;i++){
if(isdigit(a[i])==0){
count=count+1;
}
}
k=j-count;
printf(" The number of Numeric character in the string are %d",k);
getch();
}
