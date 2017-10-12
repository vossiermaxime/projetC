#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>         // pour fork(), getpid(), getppid()
#include <sys/types.h>      
#include <sys/wait.h>       // pour wait()
 
#define NBR_FILS 3
 
int main()
{
    int pid;
    int i;
 
    // Generation des fils
    for (i = 0; i < NBR_FILS; ++i) {
        pid = fork();
        // Traitement lors du fork
        if (pid < 0) {
            fputs("Fork impossible\n", stderr);
            exit(-1);
        }
        else if (pid == 0) {
            printf("pid : %d\t", getpid());
            printf("PPID : %d\n", getppid());
            return 0;
        }
    }
    // i contient le nombre de fils correctement créés
 
    // Attendre tous les fils
    for( ; i > 0; --i){
        wait(NULL);
    }

    printf("Tous les fils sont termines\n");
    return 0;
}