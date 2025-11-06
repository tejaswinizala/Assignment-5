#include <stdio.h>
void swap(int a,int b){
    int t=a;
    a=b;
    b=t;
    printf("Inside function a=%d b=%d\n",a,b);
}
int main(){
    int a,b;
    scanf("%d%d",&a,&b);
    swap(a,b);
    printf("Outside function a=%d b=%d",a,b);
}

