#include<stdio.h>
int main(){

    //insert a value in a array

    int n;
    scanf("%d",&n);
int a[n+1];
    for(int i = 0;i<n;i++){
        scanf("%d",&a[i]);
    }

    int idx,val;
    scanf("%d%d",&idx,&val);

    for(int i = n; i>=idx+1;i--){
        a[i] = a[i-1];
        
    }

    a[idx] = val;

    for(int i =  0;i<=n;i++){
        printf("%d ",a[i]);
    }



return 0;
}







#include<stdio.h>
int main(){

    //F. Reversing

    int n;
    scanf("%d",&n);
int a[n];
    for(int i = 0;i<n;i++){
        scanf("%d",&a[i]);
    }

    for(int i = n-1;i>=0;i--){
        printf("%d ",a[i]);
    }
return 0;
}


#include<stdio.h>
int main(){

    //delete an element from a array

int n;
scanf("%d",&n);

int a[n];
for(int i=0;i<n;i++){
    scanf("%d",&a[i]);
}
int idx;
scanf("%d",&idx);

for(int i = idx;i<n-1;i++){
    a[i] = a[i+1];
}

for(int i = 0;i<n-1;i++){
    printf("%d ",a[i]);
}


return 0;
}







#include<stdio.h>
int main(){

    //delete an element from a array

int n;
scanf("%d",&n);

int a[n];
for(int i=0;i<n;i++){
    scanf("%d",&a[i]);
}
int idx;
scanf("%d",&idx);

for(int i = idx;i<n-1;i++){
    a[i] = a[i+1];
}
n--;
for(int i = 0;i<n;i++){
    printf("%d ",a[i]);
}


return 0;
}







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
