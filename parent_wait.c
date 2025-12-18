#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>

int main() {
    pid_t pid = fork();

    if (pid == 0) {
        printf("Child process running\n");
        sleep(3);
        printf("Child completed\n");
    } else {
        wait(NULL);
        printf("Parent resumes after child completion\n");
    }
    return 0;
}
