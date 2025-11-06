#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main(){
    char a[100];
    gets(a);
    for(int i=0; a[i]; i++){
        if(islower(a[i])){
            a[i] = toupper(a[i]);
        } else if(isupper(a[i])){
            a[i] = tolower(a[i]);
        }
    }
    printf("%s", a);
}
