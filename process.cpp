#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

int main() {
    pid_t pid = fork();  // Create a child process

    if (pid < 0) {
        // If fork() returns a negative value, creation of child process failed
        printf("Fork failed!\n");
        return 1;
    } else if (pid == 0) {
        // Child process (fork() returns 0 in child process)
        printf("This is the child process!\n");
        printf("Child Process ID (PID): %d\n", getpid());
        printf("Parent Process ID (PPID): %d\n", getppid());
        printf("Child process is doing some work...\n");
        sleep(2);  // Simulate work in child process
        printf("Child process (PID: %d) has been killed by the parent.\n", getpid());
        exit(0);  // Terminate the child process
    } else {
        // Parent process (fork() returns PID of child in parent process)
        printf("This is the parent process!\n");
        printf("Parent Process ID (PID): %d\n", getpid());
        printf("Child Process ID (PID): %d\n", pid);
        wait(NULL);  // Parent waits for the child process to complete
        printf("Parent process finished.\n");
    }

    return 0;
}

