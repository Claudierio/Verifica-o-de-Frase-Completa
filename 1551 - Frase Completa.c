#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int n, total, i, j, tamanho;
    int letras[26];
    char frase[1010];
    char alfabeto[27] = "abcdefghijklmnopqrstuvwxyz";

    scanf("%d ", &n);

    while (n--) {
        fgets(frase, 1010, stdin);
        tamanho = strlen(frase);
        memset(letras, 0, sizeof(letras));
        for (i = 0; i < tamanho; i++){
            for (j = 0; j < 26; j++){
                if (frase[i] == alfabeto[j]){
                    letras[j] = 1;
                }
            }
        }

        total = 0;

        for (i = 0; i < 26; i++){
            total += letras[i];
        }
        printf("frase ");

        if (total == 26){
            printf("completa\n");
        }

        else if (total > 12){
            printf("quase completa\n");
        }

        else{
            printf("mal elaborada\n");
        }
    }

    return 0;
}