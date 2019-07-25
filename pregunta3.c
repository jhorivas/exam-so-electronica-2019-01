#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>

int main()
{
    int call = fork();

    if (call == 0)
        {
        int call_wait = wait(NULL);
        printf("Hola soy el hijo\n");
        }
    else if (call > 0)
        {
	printf("Adios soy el padre\n");
        }
    return 0;
}

