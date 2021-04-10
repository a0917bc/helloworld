#include <stdio.h>
#include <unistd.h>
int sum=0;
int main(){
    pid_t pid;
    /* for(int i=0;i<3;i++){
        if(fork()==0){
            sum++;
            fork();
            fork();
            fork();
        }
        else{
            printf("sum=%d\n",sum);
        }
    } */
    pid=fork();
    if(fork()==0){
        
    }

    return 0;
}