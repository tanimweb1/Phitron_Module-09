#include<stdio.h>
int main(){

    //swaping values
int a,b,temp;
scanf("%d%d",&a,&b);

temp = a;
a = b;
b = temp;
printf("a is %d & b is %d",a,b);
return 0;
}