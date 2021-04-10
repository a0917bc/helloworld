#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

int main()
{
pid_t pid;

	/* fork a child process */
	pid = fork();
    int truePid;
	if (pid < 0) { /* error occurred */
		fprintf(stderr, "Fork Failed\n");
		return 1;
	}
	else if (pid == 0) { /* child process */
        truePid=getpid();
        printf("Child's truePid=%d\n",truePid);
		printf("I am the child %d\n",pid);
		//execlp("/bin/ls","ls",NULL);
	}
	else { /* parent process */
		/* parent will wait for the child to complete */
        truePid=getpid();
        printf("Parent's truePid=%d\n",truePid);
		printf("I am the parent %d\n",pid);
		//wait(NULL);
		
		//printf("Child Complete\n");
	}
    
    return 0;
}