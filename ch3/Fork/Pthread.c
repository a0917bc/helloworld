#include <pthread.h>
#include <stdio.h>
#include <unistd.h> 
#include <sys/types.h> 
#include <sys/wait.h>
int value=0; 
void *runner(void *param);
int main(int argc, char *argv[]){
    int pid;
    pthread_t tid, tid2;
    pthread_attr_t attr;

    pid = fork();
    value++;
    if(pid==0){
        pthread_attr_init(&attr);
        pthread_create(&tid, &attr, runner, NULL);
        pthread_create(&tid2, &attr, runner, NULL);
        pthread_join(tid, NULL);
        pthread_join(tid2, NULL);
        
        printf("%d",value);

    }
    else{
        wait(NULL);
        return 0;
    }
}

void *runner(void *param){
    int temp=value;
    temp+=5;
    //sleep(2);
    value=temp;
    sleep(2);
    pthread_exit(0);

}