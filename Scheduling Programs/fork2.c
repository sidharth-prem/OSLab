#include<stdio.h>
#include<unistd.h>

void main(){
    printf("I am A!\n");
    printf("My ID is: %d.\n",getpid());
    int c=fork();
    if(c>0){
        int b=fork();
        if(b==0){
            printf("I am B!\n");
            printf("My ID is: %d.\n",getpid());
            printf("My parent ID is: %d.\n",getppid()); 
        }
        
    }
    if(c==0){
        printf("I am C!\n");
        printf("My ID is: %d.\n",getpid());
        printf("My parent ID is: %d.\n",getppid());
        int d=fork();
        if(d==0){
            printf("I am D!\n");
            printf("My ID is: %d.\n",getpid());
            printf("My parent ID is: %d.\n",getppid());
        }
    }
}