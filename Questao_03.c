#include <stdio.h>

int main(){
    int senhaOriginal, validacaoSenha = -1;
    scanf("%d", &senhaOriginal);
    printf("senha cadastrada: %d\n", senhaOriginal);

    while(1){
        scanf("%d", &validacaoSenha);
        if(validacaoSenha != senhaOriginal){
            printf("senha invalida!\n");
        } else {
            printf("senha valida\n");
        }
    }

    printf("Senha valida\n");

    return 0;
}
