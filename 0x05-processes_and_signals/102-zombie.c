#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

int main() {
    int i;
    for (i = 0; i < 5; i++) {
        pid_t pid = fork();
        if (pid == 0) { // child process
            exit(0);
        } else { // parent process
            wait(NULL);
        }
    }
    return 0;
}
}
