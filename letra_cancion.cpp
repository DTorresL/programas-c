#include <stdio.h>
#include <stdlib.h>

int main(){
    FILE *pf;
    pf = fopen("LetraCancion.txt", "w");
    fprintf(pf, "Buenas Jovenaaaaasoo\n");
    fclose(pf);

    return EXIT_SUCCESS;
}

