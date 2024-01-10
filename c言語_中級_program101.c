#include <stdio.h>
#include <stdlib.h> //strcpy
#include <string.h> //malloc
// ビット操作をしてみよう

//値xを2進数に変換する
char* toString(char* p, unsigned char x);

int main(void){
    unsigned char target=0xCD;
    unsigned char result;
    unsigned char mask =0x03;
    char p[9];
    
    
    printf("\n[4]左シフト演算子を使う:target<<2\n");
    target=0x03;
}
