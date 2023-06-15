#include<stdio.h>
#include<unistd.h>

void main(){
    int c=fork();
    if(c>0){
        sleep(1);
        for(int i=11;i<=20;i++)//parent process
        {
            printf("%d\n",i);
        }
    }
    else if(c==0){
        for(int i=1;i<=10;i++)//child process
        {
            printf("%d\n",i);
        }
    }
}