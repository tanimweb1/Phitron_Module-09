#include<stdio.h>
int main(){

    //reverse a array with swaping
int n;
scanf("%d",&n);
int array[n];

for(int i = 0;i<n;i++){
    scanf("%d",&array[i]);
}
int i = 0,j= n-1,temp;
while(i<j){
 temp = array[i];
 array[i] = array[j];
array[j] = temp;
i++;
j--;


}
for(int i = 0;i<n;i++){
    printf("%d ", array[i]);
}



return 0;
}