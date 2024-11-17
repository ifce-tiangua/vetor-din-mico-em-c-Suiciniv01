#include <stdio.h>
#include <stdlib.h>

int main(){

    int n, i;
    scanf("%d", &n);

    if (n == 0){

        printf("[vazio]");
        return 0;

    }

    int *v = (int *) malloc(n * sizeof(int));

    for (i = 0; i < n; i++){

        scanf("%d", &v[i]);

    }

    printf("[");
    for (i = 0; i < n; i++){
        
        printf("%d", v[i]);

        if (i < n-1){

            printf(", ");

        }
        
    }
    printf("]");

    free(v);

    return 0;
}