#include<stdio.h>
#define SIZE 10

int linear_search(int target,int *a,int size);

int main(void){
    // まず使うものを宣言する。
    int a[SIZE]={1,2,3,4,5,33,544,555,11,222};
    int target;
    int index;
    int i;
    
    // 探したい値を入力してもらう
    printf("入力された値を%dこの中から探します\n",SIZE);
    printf("探す値はなんですか?\n");
    scanf("%d",&target);
    // 渡すものは配列の先頭のポインタとターゲット
    // 帰ってくるものはindex。
   
    index=linear_search(target,a,SIZE);

    if(index==-1){
        printf("探していた数字は見つかりませんでした");

    }else{
        printf("探していた%dは",target);
        printf("%d番目に見つかりました",index+1);}

    printf("配列データ=[");

    for(i=0;i<SIZE;i++){
        printf("%d",a[i]);
    }
    printf("]\n");
    return 0;
}

int linear_search(int target,int *a,int size){
    
    // aの先頭ポインタをコピーする
    int *p=&a[0];
    int index=-1;
    int i = 0;

    while(i<size){
    
        if (*(a+i)==target){
            index=a+i-a;
        }
        i=i+1;}

    return index;

}
