#include <stdio.h>
#include <unistd.h> 
int main(){
    int sum=0;
    for(int i=0;i<2;i++)
        sum++;
    printf("%d",sum);
}