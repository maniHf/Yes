// ----------- INCLUDE ----------
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
//#include "func.h"
// --------- DEFINE -----------
#define HELP "-h"
#define WHILE "-While"
#define WHILENUMBER "-WhileNumber"
#define NULLIFOR ifor = 0
// ------------ MAIN FUNCTION -----------
int 
main(int argc, char *argv[])
{
    if (strcmp(argv[1], HELP) == 0) {
        printf("\n\t- yes [argument 1] [argument 2]\n");
        printf("\t- yes -While [string]\n");
        printf("\t- yes -WhileNumber [string]\n");
        printf("\t- yes -Number [Number 1] [+] [Number 2]\n");
        printf("\t- yes -Number [Number 1] [-] [Number 2]\n");
        printf("\t- yes -Number [Number 1] [*] [Number 2]\n");
        printf("\t- yes -Number [Number 1] [:] [Number 2]\n");
        // написать продолжение 
    }
    int ifor = 0; // ДЛЯ FOR 
    if (strcmp(argv[1], WHILE) == 0) while(1){printf("\n%s", argv[2]);}
    if (strcmp(argv[1], WHILENUMBER) == 0) {for(ifor;ifor < atoi(argv[2]); ifor++){printf("%s\n", argv[3]);}}
    return 0;
}
