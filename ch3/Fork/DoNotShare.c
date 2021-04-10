#include <stdio.h> 
#include <sys/types.h> 
#include <unistd.h> 
int main() 
{ 
    pid_t pid;
    for(int i=0;i<2;i++){
        pid=fork(); 
        /* fork(); 
        fork();  */
    }
	printf("hello\n"); 
	return 0; 
} 

