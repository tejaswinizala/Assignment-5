#include <stdio.h>
void find(int a[],int n,int *max,int *min){
    *max=*min=a[0];
    for(int i=1;i<n;i++){
        if(a[i]>*max){
            *max=a[i];
        }
        if(a[i]<*min){
            *min=a[i];
        }
    }
}
int main(){
    int a[10],n,mx,mn;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    find(a,n,&mx,&mn);
    printf("Max=%d Min=%d",mx,mn);
}

