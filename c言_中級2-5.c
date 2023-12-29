#include <stdio.h>
int a[9]={1,2,5,12,29,70,120,1000,23131};


int main(void){
    int *pa;
    int *pb;

    printf("%p:[%2d]<<a[0]\n",&a[0],a[0]);
    printf("%p:[%2d]<<a[1]\n",&a[1],a[1]);
    printf("%p:[%2d]<<a[2]\n",&a[2],a[2]);
    printf("%p:[%2d]<<a[3]\n",&a[3],a[3]);

    printf("a=%p[%2d]&a[0]=%p[%2d]\n",a,*a,&a[0],a[0]);
    printf("a+1=%p[%2d]&a[1]=%p[%2d]\n",a+1,*(a+1),&a[1],a[1]);
    printf("a+2=%p[%2d]&a[2]=%p[%2d]\n",a+2,*(a+2),&a[2],a[2]);
    printf("a+3=%p[%2d]&a[3]=%p[%2d]\n",a+3,*(a+3),&a[3],a[3]);

    pa=a;
    pb=a+3;
    printf("&pa=%p,pa=%p,*pa=%d\n",&pa,pa,*pa);
    printf("&pb=%p,pb=%p,*pb=%d\n",&pb,pb,*pb);

    pb=pb+1;
    printf("pb=%p[%2d]\n",pb,*pb);
    printf("pb-pa=%d\n",pb-pa);
    
    return 0;



}
    

