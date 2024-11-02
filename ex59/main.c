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
    int ano;
    int CPF;
} Cadastro;

typedef struct
{
    int conta;
    int contaC; //Corrente
    int contaP; // PoupanÃÂ§a
    float saldo;
    Cadastro cadastro;
} Conta;

#define totalContas 100

int main()
{
    float deposito, saque;
    int opcao, tipodeconta, numeroConta ,idade, cont_conta = 0;
    Conta conta[totalContas];
    // int totalc[100];
    
    while (1)
    {

        printf("1. Cadastrar conta bancaria\n2. Realizar deposito\n3. Relizar saque (se for conta correte - 5 reais)\n4. Listar todas contas\n5. Buscar conta\n6. Sair\n");
        scanf("%d", &opcao);

        switch (opcao)
        {
        case 1:
        //for (cont_conta< conta[totalContas];totalc++ )
        {
            
        
            printf("Cadastrar conta bancaria\n");
            getchar();
            
            printf("Informe seu nome:\n");
            fgets(conta[cont_conta].cadastro.nome, sizeof(conta[cont_conta].cadastro.nome), stdin);
            conta[cont_conta].cadastro.nome[strcspn(conta[cont_conta].cadastro.nome, "\n")] = '\0';

            printf("Ano de nascimento:\n");
            scanf("%d", &conta[cont_conta].cadastro.ano);
            getchar();

            printf("CPF:\n");
            scanf("%d", &conta[cont_conta].cadastro.CPF);
            getchar();

            printf("Numero da conta:\n");
            scanf("%d", &conta[cont_conta].conta); // Essa variavel está guardando o número da conta...
            getchar();

            printf("Tipo de conta:\n1. Poupanca\n2. Corrente \n");
            scanf("%d", &tipodeconta);
            getchar();
            while (1)
                if (tipodeconta == 1) 
                {
                    conta[cont_conta].contaP++;
                    printf("Conta poupanca criada com sucesso.\n");
                    printf("Saldo:\n");
                    printf("%.2f", conta[cont_conta].saldo + 20); 
                    break;
                }
                else if (tipodeconta == 2)
                {
                    conta[cont_conta].contaC++;
                    printf("Conta corrente criada com sucesso.\n");
                    printf("Saldo:\n");
                    printf("%.2f", conta[cont_conta].saldo + 20);

                    break;
                }
                else
                {
                    printf("Tipo de conta invÃÂÃÂÃÂÃÂ¡lido.\n");
                }
                 getchar();

                 cont_conta++;
            break;


        case 2:
            printf("Realizar deposito\n");
            printf("Digite o numero da conta: "); // aqui está pedindo o número da conta novamente
            scanf("%d", &numeroConta); // e guardando numa nova variavel
            numeroConta = conta[cont_conta].conta; // nessa linha eu peguei esse numero digitado e guardei no "antigo"
            getchar();

            for (int i = 0; i < cont_conta; i++)
            {
                if (numeroConta == conta[cont_conta].conta)
                {
                    printf("Valor a depositar: \n");
                    scanf("%f", &deposito);

                    conta[cont_conta].saldo = conta[cont_conta].saldo + deposito;

                    printf("Deposito realizado com sucesso.\n");
                    printf("Novo saldo: %.2f \n", conta[cont_conta].saldo);
                }
            }
            break;

        case 3:
            printf("Saque\n");
            printf("Qual conta deseja sacar? \n1.Corrente \n2.Poupanca ");
            scanf("%d", &tipodeconta);
            getchar();

            if (tipodeconta == 1)
            {
                printf("Digite o numero da conta: ");
                scanf("%d", &conta[cont_conta].contaC);
                getchar();
                
                printf("Digite um valor de saque: \n");
                scanf("%f", &saque);
                getchar();

                printf("Saque do valor %f realizado com sucesso", saque);
                getchar();

                saque = saque + 5; // taxa
                conta[cont_conta].saldo = conta[cont_conta].saldo - saque;

                printf("Seu saldo depois do saque e de: %.2f", conta[cont_conta].saldo);
                getchar();
            }
            else if (tipodeconta == 2)
            {   printf("Digite o numero da conta: ");
                scanf("%d", &conta[cont_conta].contaP);
                getchar();
            
                printf("Digite um valor de saque: \n");
                scanf("%f", &saque);
                getchar();

                printf("Saque do valor %f realizado com sucesso", saque);
                getchar();
                conta[cont_conta].saldo = conta[cont_conta].saldo - saque;

                printf("Seu saldo depois do saque e de: %.2f", conta[cont_conta].saldo);
                getchar();
            }
            else
            {
                printf("Opacao invalida.\n\n Digite outra opcao.");
                getchar();
            }

            break;

        case 4:
            printf("Listando todas as contas...");
                //totalContas[1] = conta[cont_conta].contaC + conta[cont_conta].contaP;
                printf("Total contas adicionas: %d", totalContas); 
                
            break;

        case 5:
            printf("Buscando conta...");

            break;

        case 6:
            printf("Finalizando servico...");
            break;
        }
    }}
    return 0;
}
