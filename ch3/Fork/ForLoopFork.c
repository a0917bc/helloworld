#include <stdio.h>
#include <unistd.h>
int main(){
    pid_t pid;
    int a;
    int i;
    a=5;
    for(i=0; i<2; i++){
        pid = fork();
        if(pid<0){
            return 0;
        }
        else if(pid==0){
            a-=2;
            //printf("%d\n", a);
        }
        else{
            a--;
            //printf("%d\n", a);
        }
        //printf("%d\n", a);
    }
    printf("%d\n", a);
    return 0;
}