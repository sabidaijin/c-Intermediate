#include <stdio.h>
// CPUの特性をみてみよう

typedef struct {
    char a;
    char b;
    int c;
}ABC;

void size(void);
void endian(void);
void align(void);

int main(void){
    size();
    endian();
    align();
    return 0;
}

void size(void){
    // 各型のメモリサイズを確認する
    printf("char=%2u bits\n",8 * sizeof(char));
    printf("short=%2u bits\n",8 * sizeof(short));
    printf("int=%2u bits\n",8 * sizeof(int));
    printf("long=%2u bits\n",8 * sizeof(long));
    
}
void endian(void){
    // エンディアンというCPUがメモリにアクセスする方式がビッグかリトルどちらなのか判断する
    unsigned short x =1;
    unsigned char *p;
    p=(unsigned char*)(&x);
    if(*p==0x00){
        printf("big endian\n\n");
    }
    if(*p==0x01){
        printf("little endian\n\n");
    }
}
void align(void){
    // 構造体のメモリサイズを確認する
    // 境界調整があるため、予想よりも大きくなる
    ABC x;
    printf("ABC=%u\n",sizeof(x));
    printf("x.a=+%d\n",(unsigned char*)&x.a-(unsigned char*)&x);
    printf("x.b=+%d\n",(unsigned char*)&x.b-(unsigned char*)&x);
    printf("x.c=+%d\n",(unsigned char*)&x.c-(unsigned char*)&x);
}