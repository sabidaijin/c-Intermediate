#include <stdio.h>

// 関数プロトタイプ
// 頭の型は戻り値の型

void line (int c,int n);

int main(void) {
    int mark='*';
    int n;
    int i;

    printf("高さ>");
    scanf("%d",&n);
    // nの数だけ
    for (i=0;i < n;++i){
        // 逆三角形を作るということは、一つづつマークがなくなっていけばいい（空白になっていけばいい）

        line(' ',i);
        line(mark,n-i);
        putchar('\n');
    }
    return 0;}

// この関数は単にputsの数だけmarkを入力している。
void line (int mark, int n){
    int i2;
    for(i2=0;i2<n;++i2){
        putchar(mark);}
}