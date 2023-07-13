#include <stdio.h>
#include <unistd.h>

int main()
{
    __pid_t ppid;

    ppid = getppid();

    printf("Parent id is %d\n", ppid);
}