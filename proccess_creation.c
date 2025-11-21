#include <stdio.h>
#include <unistd.h>

int main(){
    pid_t pid = fork();
    if (pid == 0) {
        printf("child id. PID: %d\n", getpid());
    } else if (pid > 0) {
        printf("parent id. PID: %d\n", getpid());
    } else {
        printf("Fork failed!\n");
    }
    return 0;
}
