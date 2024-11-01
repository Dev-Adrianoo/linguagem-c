#include <stdio.h>
#include <string.h>
#include <stdbool.h>

#define MAX_TAREFAS 100

typedef struct {
    int dia, mes, ano;
} Data;

typedef struct {
    int hora, minuto;
} Hora;

typedef struct {
    char descricao[50];
    Data data;
    Hora hora;
    bool status;
} Tarefa;

int main() {
    char temp[2];
    int opcao, contadorTarefa = 0;
    Tarefa tarefa[MAX_TAREFAS];

    while (1) {
        printf("Escolha uma das opções a seguir:\n");
        printf("1. Cadastrar uma nova tarefa\n2. Listar Tarefas Pendentes\n3. Listar Tarefas Concluídas\n4. Sair\n");
        scanf("%d", &opcao);
        getchar();

        switch (opcao) {
            case 1:
                if (contadorTarefa == MAX_TAREFAS) {
                    printf("Não é possível cadastrar mais tarefas.\n");
                    break;
                }
                printf("Informe o dia para a data da tarefa:\n");
                scanf("%d", &tarefa[contadorTarefa].data.dia);

                printf("Informe o mês para a data da tarefa:\n");
                scanf("%d", &tarefa[contadorTarefa].data.mes);

                printf("Informe o ano para a data da tarefa:\n");
                scanf("%d", &tarefa[contadorTarefa].data.ano);

                printf("Informe a hora para a tarefa:\n");
                scanf("%d", &tarefa[contadorTarefa].hora.hora);

                printf("Informe o minuto para a tarefa:\n");
                scanf("%d", &tarefa[contadorTarefa].hora.minuto);

                getchar(); // Limpar o buffer
                printf("Descreva a tarefa: ");
                fgets(tarefa[contadorTarefa].descricao, sizeof(tarefa[contadorTarefa].descricao), stdin);
                tarefa[contadorTarefa].descricao[strcspn(tarefa[contadorTarefa].descricao, "\n")] = '\0';
                do {
                    printf("Esta tarefa está concluída (S/N): ");
                    scanf(" %c", &temp[0]);
                    getchar(); // Limpar o buffer
                    if (temp[0] == 'S' || temp[0] == 's') {
                        tarefa[contadorTarefa].status = true;
                        break;
                    } else if (temp[0] == 'N' || temp[0] == 'n') {
                        tarefa[contadorTarefa].status = false;
                        break;
                    } else {
                        printf("Entrada inválida. Tente novamente.\n");
                    }
                } while (1);
                contadorTarefa++;
                break;
            case 2:
                printf("Tarefas Pendentes:\n");
                for (int i = 0; i < contadorTarefa; i++) {
                    if (!tarefa[i].status) {
                        printf("\n -- Tarefa %d -- \n", i + 1);
                        printf("Data/Hora: %d/%d/%d %d:%d\n", tarefa[i].data.dia, tarefa[i].data.mes, tarefa[i].data.ano, tarefa[i].hora.hora, tarefa[i].hora.minuto);
                        printf("Descrição: %s\n", tarefa[i].descricao);
                    }
                }
                break;
            case 3:
                printf("Tarefas Concluídas:\n");
                for (int i = 0; i < contadorTarefa; i++) {
                    if (tarefa[i].status) {
                        printf("\n -- Tarefa %d -- \n", i + 1);
                        printf("Data/Hora: %d/%d/%d %d:%d\n", tarefa[i].data.dia, tarefa[i].data.mes, tarefa[i].data.ano, tarefa[i].hora.hora, tarefa[i].hora.minuto);
                        printf("Descrição: %s\n", tarefa[i].descricao);
                    }
                }
                break;
            case 4:
                printf("Saindo do programa!\n");
                return 0;
            default:
                printf("Opção inválida!\n");
                break;
        }
    }
}
