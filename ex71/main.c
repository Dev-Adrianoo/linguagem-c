/*
    Escreva um programa que cadastre até 100 clientes e até 100 produtos.
    No sistema o usuário deve poder:

    - Cadastrar o cliente (Código, Nome, idade, saldo)
    - Cadastrar produto (código do produto, descrição do produto, valor do produto, qtd)
    - Cadastrar uma venda de um produto pra um cliente (pelo código do cliente e código do produto).
    - Listar todas as vendas
    - Listar todas os cliente

    - Use subrotinas e ponteiros onde julgar necessário

    Cadastro de venda:
    - Recebe o código do cliente e valida se o cliente existe
    - Recebe o código do produto e valida se o produto existe
    - Recebe a quantidade de produto da venda e valida se existe em estoque
    - Calcula o total da Venda
    - Valida se o cliente tem saldo pra finalizar a compra
    - Abate o valor da venda no saldo do cliente e a quantidade vendida no estoque do produto
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAXCLIENTE 100
#define MAXPRODUTO 100
#define MAXVENDAS 100

typedef struct
{
    int codigoCliente;
    char nome[30];
    int idade;
    float saldo;
} Cliente;

typedef struct
{
    int codigoProduto;
    char descricaoProduto[40];
    float valorProduto;
    int qtdProduto;
} Produto;

typedef struct
{
    Cliente *pointerCliente;
    Produto *pointerProduto;
    int quantidade;
    float valorTotal;
} Vendas;

void cadastrarCliente(Cliente *pointerCliente, int clienteQNTD)
{
    pointerCliente->codigoCliente = clienteQNTD + 1;

    printf("---- CODIGO CLIENTE %d ----\n", pointerCliente->codigoCliente);
    getchar();

    printf("Nome do cliente: ");
    fgets(pointerCliente->nome, sizeof(pointerCliente->nome), stdin);
    pointerCliente->nome[strcspn(pointerCliente->nome, "\n")] = '\0';

    printf("Idade: ");
    scanf("%d", &pointerCliente->idade);
    getchar();

    printf("Saldo: ");
    scanf("%f", &pointerCliente->saldo);
    getchar();
}

void cadastrarProduto(Produto *pointerProduto, int produtoQNTD)
{
    pointerProduto->codigoProduto = produtoQNTD + 1;

    printf("---- CODIGO PRODUTO %d ----\n", pointerProduto->codigoProduto);
    getchar();

    printf("Descricao produto: ");
    fgets(pointerProduto->descricaoProduto, sizeof(pointerProduto->descricaoProduto), stdin);
    pointerProduto->descricaoProduto[strcspn(pointerProduto->descricaoProduto, "\n")] = '\0';

    printf("Valor produto: ");
    scanf("%f", &pointerProduto->valorProduto);
    getchar();

    printf("----- QUANTIDADE PRODUTO ATUAL %d -----\n", ++pointerProduto->qtdProduto);
}

Produto *buscarProdutoCodigo(Produto produtos[], int produtoQNTD, int codigo)
{
    for (int i = 0; i < produtoQNTD; i++)
    {
        if (produtos[i].codigoProduto == codigo)
        {
            return &produtos[i];
        }
    }
    return 0;
}

void cadastrarVenda(Cliente *pointerCliente, Produto *pointerProduto, Vendas vendas[], int *quantidadeVendas)
{
    int verifCodigoCliente, verifCodigoProduto, QntdProdutoDesejado = 0;
    float valorTotal = 0;
    // Multiplica a quantidade de produto necessario pelo valor
    // exemplo se pessoa pedir 1 produto de 50$ 1 * 50: 50
    printf("Digite codigo do cliente:\n");
    scanf("%d", &verifCodigoCliente);

    if (verifCodigoCliente == pointerCliente->codigoCliente)
    {
        printf("Digite o codigo do produto:\n");
        scanf("%d", &verifCodigoProduto);

        if (verifCodigoProduto == pointerProduto->codigoProduto)
        {
            printf("Quantas unidades do produto voce deseja?\n");
            scanf("%d", &QntdProdutoDesejado);
            valorTotal = QntdProdutoDesejado * pointerProduto->valorProduto;

            if (QntdProdutoDesejado > pointerProduto->qtdProduto)
            {
                printf("Quantidade Insuficiente no estoque.\n");
            }
            if (valorTotal < pointerCliente->saldo)
            {
                pointerProduto->qtdProduto -= QntdProdutoDesejado;
                pointerCliente->saldo -= valorTotal;

                vendas[*quantidadeVendas].pointerCliente = pointerCliente;
                vendas[*quantidadeVendas].pointerProduto = pointerProduto;
                vendas[*quantidadeVendas].quantidade = QntdProdutoDesejado;
                vendas[*quantidadeVendas].valorTotal = valorTotal;
                (*quantidadeVendas)++;
                printf("Compra realizada com sucesso!\nSaldo Atual: %.2f", pointerCliente->saldo);
            }
            else if (pointerProduto->valorProduto > pointerCliente->saldo)
            {
                printf("Saldo insuficiente!");
            }
        }
        else
        {
            printf("Codigo do produto invalido!");
        }
    }
    else
    {
        printf("Codigo do cliente invalido!");
    }
}

void listarVendas(Vendas vendas[], int quantidadeVendas)
{
    printf("--- LISTANDO VENDAS ---\n");
    for (int i = 0; i < quantidadeVendas; i++)
    {
        printf("Cliente: %s\n", vendas[i].pointerCliente->nome);
        printf("Produto: %s\n", vendas[i].pointerProduto->descricaoProduto);
        printf("Quantidade: %d\n", vendas[i].quantidade);
        printf("Valor total: %.2f\n", vendas[i].valorTotal);
    }
}

int main()
{
    int opcao, clienteQNTD = 0, produtoQNTD = 0, quantidadeVendas = 0;
    Cliente cliente[MAXCLIENTE];
    Produto produto[MAXPRODUTO];
    Vendas vendas[MAXVENDAS];

    while (1)
    {
        printf("\n-----------AOFI, CE TA BAO?----------");
        printf("\n1. Cadastrar Cliente\n2. Cadastrar produto\n3. Cadastrar Venda\n4. Listar Todas as vendas\n5. Listar todos os clientes\n6. Sair\n");
        scanf("%d", &opcao);

        switch (opcao)
        {
        case 1: // Cadastrar Cliente
            if (clienteQNTD < MAXCLIENTE)
            {
                cadastrarCliente(&cliente[clienteQNTD], clienteQNTD);
                clienteQNTD++;
            }
            else
            {
                printf("Quantidade de pessoas maximas cadastradas!");
            }

            break;
        case 2: // Cadastrar Produto
            if (produtoQNTD < MAXPRODUTO)
            {
                cadastrarProduto(&produto[produtoQNTD], produtoQNTD);
                produtoQNTD++;
            }
            else
            {
                printf("Quantidade maxima de produtos cadastrados!");
            }
            break;
        case 3: // Cadastrar Venda
            if (clienteQNTD > 0 && produtoQNTD > 0)
            {
                cadastrarVenda(&cliente[0], &produto[0], vendas, &quantidadeVendas);
            }
            else
            {
                printf("Nenhum cliente ou produto cadastrado!\n");
            }

            break;
        case 4: // Listar Todas as vendas
            listarVendas(vendas, quantidadeVendas);

            break;
        case 5: // Listar todos os clientes
            for (int i = 0; i < clienteQNTD; i++)
            {
                printf("Codigo: %d, Nome: %s, Saldo: %.2f\n", cliente[i].codigoCliente, cliente[i].nome, cliente[i].saldo);
            }
            break;
            break;
        case 6: // Sair
            printf("Encerrando!");
            return 0;
            break;
        }
    }
}