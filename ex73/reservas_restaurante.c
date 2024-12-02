#include <stdio.h>
#include <stdlib.h>
#include <string.h>


typedef struct {
    char nome[30];
    char cpf[15];
    int dia;
    int quantidadePessoas;
}Cliente;


Cliente fazerReserva(){
    Cliente cliente;

    printf("Nome: ");
    fgets(cliente.nome, sizeof(cliente.nome), stdin);
    cliente.nome[strcspn(cliente.nome, "\n")] = '\0';

    printf("CPF: ");
    fgets(cliente.cpf, sizeof(cliente.cpf), stdin);
    cliente.cpf[strcspn(cliente.cpf, "\n")] = '\0';

    printf("Dia da reserva\n1 - Quinta\n2 - Sexta\n3 - Sabado\n4 - Domingo\n");
    scanf("%d", &cliente.dia);
    getchar();

    printf("Qual a quantidade de pessoas que deseja levar? ");
    scanf("%d", &cliente.quantidadePessoas);
    getchar();

    return cliente;
}

void ListarReserva(Cliente reservas[], int contagem){
    
    for(int i = 0; i < contagem; i++){
        printf("===============================================\n");
        printf("Nome: %s\n", reservas[i].nome);
        printf("CPF: %s\n", reservas[i].cpf);
        printf("Dia: %d\n", reservas[i].dia);
        printf("Numero de pessoas: %d\n", reservas[i].quantidadePessoas);
        printf("==============================================\n");
    }
}

int totalPessoasDia(Cliente reservas[], int contagem , int dia){
    int total = 0;

    for(int i = 0; i < contagem; i++){
        if(reservas[i].dia == dia) {
            total += reservas[i].quantidadePessoas;
        }
    }
    return total;
}

int main(){
    Cliente reservas[100];
    int contagem = 0;
    int opcao;

    while(opcao != 4){

    printf("\n1. Fazer reserva.\n2. Listar Reservas.\n3. Total de pessoas Por dia.\n4. Sair\n");
    scanf("%d", &opcao);
    getchar();

    switch(opcao){
        case 1:
            reservas[contagem] = fazerReserva();
            contagem++;
            break;
        case 2:
            ListarReserva(reservas,contagem);
            break;
        case 3:
        {
            int dia;
            printf("Digite o dia da reserva\n1. Quinta\n2. Sexta\n3. Sabado\n4. Domingo\n");
            scanf("%d", &dia);
            getchar();
            int total = totalPessoasDia(reservas, contagem, dia);
            printf("Total de pessoas para o dia %d: %d\n", dia, total);
            break;
        }
        case 4: 
            printf("Saindo do programa!");
                return 0;
            break;
    }
  }
    return 0;
}