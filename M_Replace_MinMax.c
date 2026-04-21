#include<stdio.h>
#include<limits.h>
int main(){

    //M. Replace MinMax
    int n;
    scanf("%d",&n);
    int array[n];

    for(int i = 0;i<n;i++){
        scanf("%d",&array[i]);
    }
int  min = INT_MAX,min_indx=-1;


for(int i = 0;i<n;i++){
    if(array[i]<min){
        min = array[i];
        min_indx = i;
    }
}
int  max = INT_MIN,max_indx=-1;
for(int i = 0;i<n;i++){
    if(array[i]>max){
        max = array[i];
        max_indx = i;
    }
}

array[max_indx] = min;
array[min_indx] = max;
for(int i = 0;i<n;i++){
printf("%d ",array[i]);
}       
   
  

return 0;
}