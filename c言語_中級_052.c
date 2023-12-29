#include<stdio.h>

void str_dcount(const char str[],int cnt[]);

int main(void){

    int i;
    // とりあえず最初は0で後から箱を入れ替える
    int dcnt[10]={0};
    char str[100];
    printf("文字列を入力してください");
    scanf("%s",str);

    str_dcount(str,dcnt);

    puts("数字文字の出現回数");

    for(i=0;i<10;i++){

        printf("'%d':%d\n",i,dcnt[i]);

    }
    return 0 ;
}

void str_dcount(const char str[],int cnt[]){

    unsigned i = 0;
    while(str[i]){
        if(str[i]>='0'&&str[i]<='9'){
            cnt[str[i]-'0']++;}
            i++;
        }


    }
