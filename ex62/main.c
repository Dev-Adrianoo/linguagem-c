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
    int opcao, opcaoNaoEncont, tipodeconta, numeroDecontaParaDeposito, numeroDecontaParasaque, quantidade_conta = 0;
    float valor;
    Conta conta[Totalcontas]; // 100
    bool contaEncontrada;
    while (1)
    {
        printf("\n1. Cadastrar conta bancaria\n2. Realizar deposito\n3. Realizar saque (se for conta corrente - 5 reais)\n4. Listar todas contas\n5. Buscar conta\n6. Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);
        getchar();

        switch (opcao)
        {

        case 1: // Cadastrar conta bancaria
            printf("\n---- Cadastrar conta bancaria ----\n");
            printf("Digite\n1. Conta poupanca \n2. Conta Corrente\n");
            scanf("%d", &tipodeconta); // Lendo tipo de conta.

            if (tipodeconta == 1)
            {
                printf("\nConta Poupanca escolhida!\n");
                conta[quantidade_conta].contaPoupanca = tipodeconta; // var auxiliar
            }
            else if (tipodeconta == 2)
            {
                printf("Conta Corrente escolhida!\n");
                conta[quantidade_conta].contaCorrente = tipodeconta;
            }
            else
            {
                printf("Tipo de conta invalido!\n");
                break;
            }

            printf("Digite o numero da conta: \n");
            scanf("%d", &conta[quantidade_conta].numeroConta); // aqui
            getchar();

            printf("Digite o nome do usuario: \n");
            fgets(conta[quantidade_conta].usuario.nome, sizeof(conta[quantidade_conta].usuario.nome), stdin);
            conta[quantidade_conta].usuario.nome[strcspn(conta[quantidade_conta].usuario.nome, "\n")] = '\0';

            printf("Ano de nascimento: \n");
            scanf("%d", &conta[quantidade_conta].usuario.anoNascimento);
            getchar();

            printf("Digite o CPF: \n");
            fgets(conta[quantidade_conta].usuario.cpf, sizeof(conta[quantidade_conta].usuario.cpf), stdin);
            conta[quantidade_conta].usuario.cpf[strcspn(conta[quantidade_conta].usuario.cpf, "\n")] = '\0';

            printf("E necessario fazer um deposito inicial, digite um valor: \n");
            scanf("%f", &conta[quantidade_conta].saldo);
            getchar();
            printf("Parabens, sua conta foi criada! \n");

            quantidade_conta++;
            break;

        case 2: // Realizar deposito
            printf("\n---- Realizar deposito ----\n");
            contaEncontrada = false;
            while (!contaEncontrada)
            {
                printf("\nDigite o numero da conta: \n");
                scanf("%d", &numeroDecontaParaDeposito); // aqui
                getchar();

                for (int i = 0; i < quantidade_conta; i++)
                {
                    if (conta[i].numeroConta == numeroDecontaParaDeposito)
                    {
                        printf("Digite o valor que deseja depositar: \n");
                        scanf("%f", &valor);
                        getchar();

                        conta[i].saldo = conta[i].saldo + valor;

                        printf("Agora seu saldo e: R$ %.2f\n", conta[i].saldo);
                        printf("------------------\n");
                        contaEncontrada = true;
                        break;
                    }
                }
                if (!contaEncontrada)
                {
                    printf("Conta nao encontrada!\n");
                    printf("Tente novamente ou digite 1 para menu principal\n");
                    scanf("%d", &opcaoNaoEncont);
                    getchar();
                    if (opcaoNaoEncont == 1)
                    {
                        break;
                    }
                    else
                    {
                        printf("Opcao invalida!\n");
                    }
                }
            }

            break;
        case 3: // Realizar saque (se for conta corrente - 5 reais)

            printf("\n---- Realizar saque ----\n");
            contaEncontrada = false;
            while (!contaEncontrada)
            {
                printf("\nDigite o numero da conta: \n");
                scanf("%d", &numeroDecontaParasaque);
                getchar();

                for (int i = 0; i < quantidade_conta; i++)
                {
                    if (conta[i].numeroConta == numeroDecontaParasaque)
                    {
                        printf("Digite o valor que deseja sacar: \n");
                        scanf("%f", &valor);
                        getchar();

                        if (conta[i].contaPoupanca == 1)
                        {
                            if (conta[i].saldo >= valor)
                            {
                                conta[i].saldo = conta[i].saldo - valor;
                                contaEncontrada = true;
                                printf("Agora seu saldo e: R$ %.2f\n", conta[i].saldo);
                                break;
                            }
                            else
                            {
                                printf("Voce nao tem limite para sacar!!");
                            }
                        }
                        else if (conta[i].contaCorrente == 2)
                        {
                            if (conta[i].saldo >= valor)
                            {
                                conta[i].saldo = conta[i].saldo - valor - 5;
                                contaEncontrada = true;
                                printf("Agora seu saldo e: R$ %.2f\n", conta[i].saldo);
                                break;
                            }
                            else
                            {
                                printf("Voce nao tem limite para sacar!!");
                            
                            }
                        }
                    }
                }
            }
            break;

        case 4: // Listar todas contas
            printf("\n---- Listar todas as contas ----\n");
            for(int i = 0; i < quantidade_conta; i++){
                printf("Seu nome e: %s\n", conta[i].usuario.nome);
                printf("Seu cpf: %s\n", conta[i].usuario.cpf);
                printf("Data de nascimento: %d\n", conta[i].usuario.anoNascimento);
                printf("Numero da conta: %d\n", conta[i].numeroConta);
                printf("Saldo Atual: R$%.2f\n", conta[i].saldo);

                if (conta[i].contaPoupanca == 1){
                    printf("Conta Poupança\n"); 
                } else if (conta[i].contaCorrente == 2){
                    printf("Conta corrente\n");
                }
            
                printf("\n---------------------------\n");
                
            }
            break;

        case 5: // Buscar conta especifica e exibir idade do titular
            printf("\n---- Buscar conta ----\n");
            int numeroConta;
            
            printf("\nDigite o numero da conta: \n");
            scanf("%d", &numeroConta);
            getchar();

            for(int i = 0; i < quantidade_conta; i++)
            {
            if (conta[i].numeroConta == numeroConta)
                {
            
                    printf("Nome do usuario: %s\n", conta[i].usuario.nome);
                    printf("CPF do usuario: %s\n", conta[i].usuario.cpf);
                    printf("Numero da conta: %d\n", conta[i].numeroConta);
                    printf("Saldo Atual: R$%.2f\n", conta[i].saldo);
            
                    int anoAtual, idade;

                    time_t tempo = time(NULL);
                    struct tm dataAtual = *localtime(&tempo);  // Converte para estrutura de tempo local

                    // Obtém o ano atual
                    anoAtual = dataAtual.tm_year + 1900;

                    idade = anoAtual - conta[i].usuario.anoNascimento; 

                    printf("idade: %d\n", idade);
                }
            }
            break;
        case 6: // Sair
            printf("Saindo do programa...\n");
            return 0;

        default: 
            printf("Opcao invalida! Tente novamente.\n");
            break;
        }
    }
}