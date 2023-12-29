// program071

#include<stdio.h>
int main(void){
    // b:最初から改行文字を代入しておくことで、データがない場合に何もせずに処理を終える(int)
    // c:getcharで入力を受け付ける(char)
    // n:行番号のカウンター(int)



    int b='\n';
    int c;
    int n = 1;


    while(1){
        c=getchar();
        if(c==EOF){
            break;}
        if(b=='\n'){
            printf("%02d:",n);
            ++n;
        }
        // putcharは戻り値としてアスキーを返す
        b=putchar(c);
         }

return 0;
}
