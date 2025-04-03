#include<stdio.h>
#include<unistd.h>

int main()
{
    int a,b,c;
    scanf("%d %d",&a,&b);
    c=a+b;
    printf("addition is %d",c);
    printf("we are in addition file %d",getpid());
}