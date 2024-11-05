/*
    Escreva um programa em C que apresente o seguinte menu:

    1. Cadastrar conta Bancária
    2. Realizar Depósito
    3. Realizar Saque (Se for conta corrente, deverá ter uma taxa de R$5,00)
    4. Listar todas as contas
    5. Exibir uma conta em específico exibindo a idade atual do titular ao invés do ano de nascimento
    6. Sair

    A conta bacária possui:
    - Número da Conta
    - Tipo de Conta (Poupança ou Conta-Corrente)
    - Saldo
    - Titular da conta

    O titular possui:
    - Nome
    - Ano de nascimento
    - CPF

    O programa só poderá ser encerrado quando o usuário escolher a opção de sair.
    O programa permitirá o cadastro de ATÉ 100 contas.
*/


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <ctype.h>

#define MAX_CONTAS 100

typedef struct{

    char nome[30];
    int anoNascimento;
    char cpf[15];

} Titular;


typedef struct{

    int numeroConta;
    int tipoConta;
    float saldo;
    Titular titular;

}Conta;


int main() {

    setlocale(LC_ALL, "Portuguese");

    int opcao, contadorContas = 0;
    Conta conta[MAX_CONTAS];

        while(1){
            system("clear");
            printf("Escolha uma opção!!!\n");
            printf("1. Cadastrar Conta Bancária\n2. Realizar Depósito\n3. Realizar Saque\n4. Listar Todas as Contas\n5. Buscar uma Conta\n6. Sair\nOpção: ");
            scanf("%d", &opcao);
            getchar();

            switch (opcao){

                case 1:
                    system("clear");
                    printf("::: Cadastrar Conta Banária :::\n");

                    printf("Informe o nome do titular: ");
                    fgets(conta[contadorContas].titular.nome,sizeof(conta[contadorContas].titular.nome),stdin);
                    conta[contadorContas].titular.nome[strcspn(conta[contadorContas].titular.nome, "\n")] = '\0';

                    printf("Informe o ano de nascimento: ");
                    scanf("%d", &conta[contadorContas].titular.anoNascimento);
                    getchar();

                    while(1){
                        char aux[15];
                        printf("Informe o CPF: ");
                        fgets(aux,sizeof(aux),stdin);
                        aux[strcspn(aux, "\n")] = '\0';

                        for (int i = 0; i <= contadorContas; i++){
                            if (aux == conta[i].titular.cpf){  
                                printf("CPF já existente!!\n");
                            }
                            else if (aux != conta[i].titular.cpf){ 
                                conta[i].titular.cpf = aux;
                            }
                        }
                        
                        break;
                    }


                    
                    
                    break;

                case 2:
                    system("clear");
                    printf("::: Realizar Depósito :::\n");
                    break;

                case 3:
                    system("clear");
                    printf("::: Realizar Saque :::\n");
                    break;

                case 4:
                    system("clear");
                    printf("::: Listar Todas as Contas :::\n");
                    break;

                case 5:
                    system("clear");
                    printf("::: Buscar uma Conta :::\n");
                    break;

                case 6:
                    system("clear");
                    printf("::: Sair :::\n");
                    printf("Encerrando...");
                    return 0;
                    break;

                default:
                    system("clear");
                    printf("Opção inválida!!!\n");
                    break;

            }
        }
}