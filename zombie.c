#include <stdio.h>
#include <unistd.h>

int main() {
    if (fork() == 0) {
        printf("Child exiting\n");
        return 0;
    } else {
        sleep(30);  
    }
    return 0;
}
