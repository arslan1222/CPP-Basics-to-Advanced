#include<sys/typrs.h>
#include<unistd.h>

pid_t fork(void);

int main(){
    int pid;
    pid = fork();
    if(pid ==0){
        // Code for child
    }
    else{
        // Code for parent
    }
}