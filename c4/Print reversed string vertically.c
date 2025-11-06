#include <stdio.h>
#include <string.h>
int main(){
    char a[100];
    gets(a);
    for(int i=strlen(a)-1; i>=0; i--){
        printf("%c\n", a[i]);
    }
}
