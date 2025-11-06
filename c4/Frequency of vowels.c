#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main(){
    char a[100];
    int A=0, E=0, I=0, O=0, U=0;
    gets(a);
    for(int i=0; a[i]; i++){
        char c = tolower(a[i]);
        if(c=='a'){
            A++;
        } else if(c=='e'){
            E++;
        } else if(c=='i'){
            I++;
        } else if(c=='o'){
            O++;
        } else if(c=='u'){
            U++;
        }
    }
    printf("A=%d E=%d I=%d O=%d U=%d", A, E, I, O, U);
}
