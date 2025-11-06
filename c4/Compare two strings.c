#include <stdio.h>
#include <string.h>
int main(){
    char a[100], b[100];
    gets(a);
    gets(b);
    int c = strcmp(a, b);
    if(c == 0){
        printf("Same");
    } else if(c > 0){
        printf("First greater");
    } else {
        printf("Second greater");
    }
}
