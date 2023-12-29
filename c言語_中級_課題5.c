#include<stdio.h>

void strmycat(char *s1,char *s2,char *newstring);
const int SIZE=10;
int main(void){
    char a[SIZE]={"waseda"};
    char b[SIZE]={"university"};
    char newstring[30]={0};
    int i;
    
    // 投げるものはそれぞれの先頭配列
    // 受け取るのはくっつけたものの先頭配列

    strmycat(a,b,newstring);
    
    printf("%s",newstring);
    return 0;}

void strmycat(char *s1,char *s2,char *newstring){
   
    int i=0;
    int index=0;
    int n=0;
    int k=0;
    while(s1[index]!='\0'){
        newstring[index]=s1[index];
        index++;}
    
    newstring[index]=' ';
    index++;
    // この時i+1から入れれば良い。
    for(k=0;k<SIZE;k++){
        newstring[index]=s2[k];
        index++;
        }
    
    
}
