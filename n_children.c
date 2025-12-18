#include <stdio.h>
#include <unistd.h>

int main() {
    for (int i = 0; i < 5; i++) {
        if (fork() == 0) {
            printf("Child %d created, PID=%d\n", i+1, getpid());
            return 0;
        }
    }
    sleep(5);
    return 0;
}
