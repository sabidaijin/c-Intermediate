int toUpperLower(int c);

#include <stdio.h>
int toUpperLower(int c){
        if(97<=c&&c<=122){
            c=c-'a'+'A';}
        else if(65<=c&&c<=95){
            c=c-'A'+'a';
        }
        putchar(c);    
        return 0;}

int main(void){
    while(1){
        char c;
        c=getchar();
        if(c==EOF){
            break;}
        toUpperLower(c);
        }
    return 0;
}



