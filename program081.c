// program081

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
// 最大読み込み数を定数で指定
#define MAXLINES 200
// 関数プロトタイプ
int getLine(char a[],int size);
void linesWrite(char *a[],int n);
void linesSort(char *a[],int n);
int linesRead(char *a[],int max);
void linesFree(char *a[],int n);

int main(void){
    // 各関数に指示を出すだけの処理を行う。
    

    char *a[MAXLINES];
    int nLine;
    

    // 入力を受け付ける。
    nLine=linesRead(a,MAXLINES);

    
    // 入力したものをそのまま出力する
    printf("\n===before sorting===\n");
    linesWrite(a,nLine);

    // 頭文字並び替えを実行する
    linesSort(a,nLine);

    // 並び替え完了したものを出力する
    printf("\n===after sorting===\n");
    linesWrite(a,nLine);

    // 領域の開放をする
    linesFree(a,nLine);
    return 0;
    
}
int linesRead(char *a[],int max){
    char line[100];
    int z;
    char *p;
    for(z=0;z<max;++z){
        printf(">");

        // 毎度listで入力を受け付けて、そこから数を数え、領域を確保し、その領域に内容をコピーするという手順で行う
        //ここでEOFだったらbreakとしているので、EOFだった時はその時点で入力受付終了となる
        if(getLine(line,sizeof(line))==EOF){
            break;}
        p=(char*)malloc(strlen(line)+1);
        strcpy(p,line);
        a[z]=p;
        
        }
    return z;
    }


int getLine(char a[],int size){
    // ctrl+dでEOFとして終了できる、windowsならctrlz
    
    int c;
    int z=0;

    while(1){
        if(z==size-1){
            break;
        }
        c=getchar();
        if(c=='\n'){
            break;
        }
        // これがなかったら？？？がたくさん出ていた。でも官僚は
        // EOFだったら入力も終了だし、EOFをreturnするので、入力受付自体も終了する(linesreadで確認できる)
        if(c==EOF){
            return EOF;
        }
        a[z++]=c;
    }
    
    a[z]='\0';
    return z;    
    

}

void linesSort(char *a[],int n){
    int i;
    int nSwap;
    char *p;
    do{

    nSwap=0;
        for(i=0;i+1!=n;i++){
            if(strcmp(a[i],a[i+1])>0){
                ++nSwap;
                // pはtemp。ソートの一時預かり場所
                p=a[i];
                a[i]=a[i+1];
                a[i+1]=p;            
            }
        }
        // nswapが0だったら、もう並び替えが行われていない！だから終了する
    }while(nSwap!=0);
    


}

void linesFree(char *a[],int n){
    int i;
    for(i=0;i<n;++i){
        free(a[i]);
    }
    
}

void linesWrite(char *a[],int n){
    int i;
    for(i=0;i<n;++i){
        printf("%s\n",a[i]);

    }


}