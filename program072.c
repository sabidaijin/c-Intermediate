// program072
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(void){
    // """
    // 入力されたファイルから平均点、最大値、最小値を計算するプログラム
    // inFile:ターミナルから入力されたファイル名を受け取る配列
    // *in:FILEオブジェクトのポインタを受け取る変数(*)
    // n:データ表本数(int)
    // min:データの最小値(int)
    // max:データの最大値(int)
    // sum:データの合計値(double)
    // x:最大値計算の基準値(int)
    // 

    char inFile[100];
    FILE *in;
    int n;
    int min;
    int max;
    double sum;
    char name[100];
    int x;
    
    
    printf("inFILE>");
    scanf("%s",inFile);
    // 受け取ったファイル名をfopenの引数に使う
    in = fopen(inFile,"r");
    // もしもfopenが失敗したらNULLを返すため、NULL=開けなかったという意味でエラーを出す
    if(in==NULL){
        fprintf(stderr,"can't open for r@ fopen\n");
        exit(1);
    }
    
    n=0;
    sum=0.0;
    while(1){
        if(fscanf(in,"%s %d",name,&x)==EOF){

            break;

        }
        // 一周目時の値をmax,minの基準値とする
        if(n==0){
            min=x;
            max=x;
        }
        // 綺麗に表示するためにフォーマット指定をしている。
        // -20の-は左詰の意味,幅は20個分、sは文字列という意味。今回では20マス分の左詰で記入するという意味
    
        printf("%-20s %3d\n",name,x);
        ++n;
        sum+=x;
        if(x<min){
            min=x;
        }
        if(x>max){
            max=x;
        }
        }
    // もしもn==0つまりデータが一つもなかったら、データがないと表示する
    if(n==0){
        printf("cannot find data");
    }else{
        printf("n=%d,min=%d,average=%.2f,max=%d\n",n,min,sum/n,max);
    } 

    fclose(in);
    return 0;
}