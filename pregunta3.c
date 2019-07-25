#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>

int main()
{
    int call = fork();

    if (call == 0)
        {
        printf("Hola soy el hijo\n");
        }
    else if (call > 0)
        {
        sleep(1);
        printf("Adios soy el padre\n");
        }
return 0;
}

