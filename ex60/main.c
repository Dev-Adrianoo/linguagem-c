/*
1. Cadastrar conta bancaria
2. Realizar deposito
3. Relizar saque (se for conta correte - 5 reias)
4. Listar todas contas
5. Exibir uma conta em espeficio exibindo a idade atual do titular ao inves do ano de nascimento
6. Sair

A conta bancaria possui:
- Numero da conta
- Tipo de conta (poupanca ou conta-corrente)
- Saldo
- titular da conta

O titular possui:
- Nome
- Ano de nascimento
- CPF
*/

#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>

typedef struct
{
    char nome[30];
    int anoNascimento;
    char cpf[15];
} Usuario;

typedef struct
{
    int numeroConta;
    int contaPoupanca;
    int contaCorrente;
    float saldo;
    Usuario usuario;
} Conta;

#define Totalcontas 100

int main()
{
    int opcao, tipodeconta, quantidade_conta = 0, auxiliar;
    float valor;
    Conta conta[Totalcontas]; // 100
    
    while (1)
    {
        printf("1. Cadastrar conta bancaria\n2. Realizar deposito\n3. Relizar saque (se for conta correte - 5 reais)\n4. Listar todas contas\n5. Buscar conta\n6. Sair\n");
        scanf("%d", &opcao);
        getchar();

        switch (opcao)
        {
        case 1: // Cadastrar conta bancaria

            printf("\n---- Cadastrar conta bancaria ----\n");
            printf("Digite\n1.Conta Poupanca: \n2.Conta Corrente:\n");
            scanf("%d", &tipodeconta);
            getchar();

            if (tipodeconta == 1)
            {
                conta[quantidade_conta].contaPoupanca = tipodeconta;
            }
            else if (tipodeconta == 2)
            {
                conta[quantidade_conta].contaCorrente = tipodeconta;
            }
            else
            {
                printf("Invalido");
            }

            printf("\nNumero da conta: ");
            scanf("%d", &conta[quantidade_conta].numeroConta); // Numero da conta salvo nessa Var
            getchar();

            printf("Digite o nome do usuario: ");
            fgets(conta[quantidade_conta].usuario.nome, sizeof(conta[quantidade_conta].usuario.nome), stdin);
            conta[quantidade_conta].usuario.nome[strcspn(conta[quantidade_conta].usuario.nome, "\n")] = '\0';

            printf("Data de nascimento: ");
            scanf("%d", &conta[quantidade_conta].usuario.anoNascimento);
            getchar();

            printf("Digite o CPF: ");
            fgets(conta[quantidade_conta].usuario.cpf, sizeof(conta[quantidade_conta].usuario.cpf), stdin);
            conta[quantidade_conta].usuario.cpf[strcspn(conta[quantidade_conta].usuario.cpf, "\n")] = '\0';

            printf("Saldo: ");
            scanf("%f", &conta[quantidade_conta].saldo);
            getchar();

            printf("\n--- Conta cadastrada ---\n");
            quantidade_conta++;
            break;

        case 2: // Realizar deposito
        
            printf("---- Realizar deposito ----\n");
            printf("Digite o numero da conta: \n");
            scanf("\n%d\n", &auxiliar);
            getchar();
          
            for (int i = 0; i < quantidade_conta; i++)
            {
                if (conta[i].numeroConta == auxiliar)
                {
                    printf("Digite o valor para deposito: ");
                    scanf("%f", &valor);
                    getchar();

                    conta[quantidade_conta].saldo +=  valor;

                    printf("Seu saldo e: R$%.2f", conta[quantidade_conta].saldo);
                    break;
                }
                else
                {
                    printf("\nInvalido\n");
                }
            } 
                  

                  break;
        case 3: // Relizar saque (se for conta correte - 5 reias)
            printf("---- Realizar saque ----\n");

            break;
        case 4: // Listar todas contas

            break;
        case 5: // Exibir uma conta em espeficio exibindo a idade atual do titular ao inves do ano de nascimento

            break;
        case 6: // sair
            printf("Encerrando programa..."); 
            return 0;
        default:
            printf("Numero invalido! ");
            break;
        }
    }
}

