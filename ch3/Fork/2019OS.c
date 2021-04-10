#include<stdio.h>
#include <unistd.h> 
int main()
{
    pid_t pid;
    char sV='P';
    char *ptrSV;
    ptrSV=&sV;
    printf("Original address is %p\n", ptrSV);
    printf("Original char value is %c\n", sV);
    pid = fork();
    if(pid==0)
    {
        sV = 'C';
        printf("*****This is child*****\n");
        printf("address is %p\n", ptrSV);
        printf("char value is %c\n", sV);   
        //sleep(5);
    }
    else{
        //sleep(5);
        printf("*****This is parent*****\n");
        printf("address is %p\n", ptrSV);
        printf("char value is %c\n", sV);
    }
    return 0;
}