#include <stdio.h>
#include <unistd.h>

int main() {
    pid_t pid = fork();

    if (pid > 0) {
        printf("Parent exiting\n");
        return 0;
    } else {
        sleep(10);
        printf("Child running after parent exit\n");
    }
    return 0;
}
