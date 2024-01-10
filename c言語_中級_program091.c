#include <stdio.h>
#include <string.h>
// 構造体に触ってみよう
typedef struct{
    char name[20];
    int height;
    float weight;
    long schols;
}stdt_rcrd;

void set_schols(stdt_rcrd* std);
stdt_rcrd set_hw(char* x, int h, float w, long y);



int main(void){
    stdt_rcrd studentb;
    stdt_rcrd studentg={"takadano hanako",160.45,8000000};
    
    studentb=set_hw("waseda taro",175,58,200000);
    set_schols(&studentb);

    printf("氏名=%s\n",studentb.name);
    printf("身長=%s\n",studentb.height);
    printf("体重=%s\n",studentb.weight);
    printf("奨学金=%s\n",studentb.schols);

    printf("奨学金=%s\n",studentb.schols);

    return 0;
}
stdt_rcrd set_hw(char* x, int h, float w, long y){
    stdt_rcrd temp;
    strcpy(temp.name,x);
    temp.height=h;
    temp.weight=w;
    temp.schols=y;

    return temp;
}
void set_schols(stdt_rcrd* std){
    if(std->schols<10000){
        std->schols=100000;
    }
}
