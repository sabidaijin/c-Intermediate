#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// 共用体に触ってみよう

typedef struct TagTeacher{
    char c;
    char name[20];
    char major[20];
    char subject[100];
}Teacher;

typedef struct TagStudent{
    char c;
    char name[20];
    char major[20];
    int age;
}student;

typedef union{
    char c;
    Teacher t;
    student s;
}Member;

Teacher newTeacher(const char* n, const char* g,const char* k);

student newStudent(const char* n, const char* g,int a);

char* mString(Member m);

int main(void){
    Member m[100];
    int nM;
    char* t;
    int i;

    m[0].t=newTeacher("やまもと","スポーツ","データベース");
    m[1].s=newStudent("やまもと","スポーツ",299);
    m[2].t=newTeacher("やまもと","スポーツ","データベース");
    m[3].s=newStudent("やまもと","スポーツ",121);
    m[4].t=newTeacher("やまもと","スポーツ","データベース");
    m[5].s=newStudent("やまもと","スポーツ",2121);
    m[6].t=newTeacher("やまもと","スポーツ","データベース");
    nM=7;


    for (i=0;i<nM;i++){
        t = mString(m[i]);
        printf("%s\n",t);
        free(t);
    }
    return 0;
}


Teacher newTeacher(const char* n, const char* g,const char* k){

    Teacher z;
    z.c='T';
    strcpy(z.name,n);
    strcpy(z.major,g);
    strcpy(z.subject,k);
    return z;

}

student newStudent(const char* n, const char* g,int a){
    student z;
    z.c='S';
    strcpy(z.name,n);
    strcpy(z.major,g);
    z.age=a;
    return z;

}

char* mString(Member m){
    
    char* z;
    z=(char*)malloc(200);
    if(z==NULL){
        printf("malloc error"),exit(1);}

    if(m.c=='T'){
        sprintf(z,"教員[%s,%s,%s]",m.t.name,m.t.major,m.t.subject);

    }
    else if(m.c=='S'){
        sprintf(z,"学生[%s,%s,%d]",m.s.name,m.s.major,m.s.age);
        
    }
    else{
        sprintf(z,"あり得ないデータ");
    }
        
    return z;}
