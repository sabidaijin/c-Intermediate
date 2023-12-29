#include <stdio.h>

// 関数プロトタイプ


void sort3 (int *x,int *y,int *z);

int main(void) {
    int a;
    int b;
    int c;
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    printf("%d",a);
    printf("%d",b);
    printf("%d",c);

    sort3(&a,&b,&c);
    printf("%d",a);
    printf("%d",b);
    printf("%d",c);
}

void sort3(int *x, int *y, int *z) {
    int a = *x;
    int b = *y;
    int c = *z;
    int temp;

    if (a > b) {
        temp = a;
        a = b;
        b = temp;
    }
    if (b > c) {
        temp = b;
        b = c;
        c = temp;
    }
    if (a > b) {
        temp = a;
        a = b;
        b = temp;
    }

    *x = a;
    *y = b;
    *z = c;
}
