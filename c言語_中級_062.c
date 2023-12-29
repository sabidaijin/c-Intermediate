#include <stdio.h>
#include <string.h>

int main (int argc,char* argv[]){
    int z;
    int optX=0;
    int optY=0;
    
    // 戻ってきて使う前に1増やす
    for(z=1;z<argc;++z){
        printf("%d\n",z);
        if (strcmp(argv[z],"-x")==0){
            optX=1;
        }
        else if (strcmp(argv[z],"-y")==0){
            optY=1;
        }
        else if (argv[z][0]=='-'){
            fprintf(stderr,"%s is unknown flag.\n",argv[z]);
        }
        else {
            break;
        }}

    if(optX==1){
        printf("-xがありました\n");
    }
    if(optY==1){
        printf("-yがありました\n");
    }
    return 0;
}