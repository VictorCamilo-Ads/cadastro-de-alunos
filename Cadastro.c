#include <stdio.h>
#include <string.h>

#define MAX_ALUNOS 100
#define MAX_NOME 50

typedef struct {
    char nome[MAX_NOME];
    int idade;
    int matricula;
    float notas;
} Aluno;


int main(){

    Aluno banco_de_dados[MAX_ALUNOS];
int total_alunos = 0;
char nome_busca[MAX_NOME]; //Variavel exclusiva para a busca
int idade;
int matricula;
float notas;
int opcao;

printf("***************************************************\n");
printf("* Seja Bem-Vindo ao sistema de Cadastro de Alunos *\n");
printf("***************************************************\n");
printf("\n\n");

//Menu 
do {
printf("------Menu de Cadastro------\n");
printf("1 - Cadastrar Aluno\n");
printf("2 - Listar Alunos\n");
printf("3 - Buscar por Nomes\n");
printf("4 - Sair\n");
printf("Escolha uma opção: \n");
scanf("%d",&opcao);

    while (getchar() != '\n'); // Limpa o buffer do teclado para evitar problemas com fgets


switch (opcao)
{
    case 1: 
        if (total_alunos >= MAX_ALUNOS) {
            printf("Erro: Banco de Dados cheio.\n");
            break;
        }

        printf("Digite o nome completo do aluno: \n");
        fgets(banco_de_dados[total_alunos].nome, sizeof(banco_de_dados[total_alunos].nome), stdin);
        banco_de_dados[total_alunos].nome[strcspn(banco_de_dados[total_alunos].nome, "\n")] = 0; // Remove o caractere de nova linha do final da string

        printf("Digite a idade do aluno: \n");
        scanf("%d",&idade);
        banco_de_dados[total_alunos].idade = idade; // Atribui a idade ao struct

        printf("Digite a matricula do aluno: \n");
        scanf("%d",&matricula);
        banco_de_dados[total_alunos].matricula = matricula; // Atribui a matrícula ao struct

        printf("Digite a nota do aluno: \n");
        scanf("%f",&notas);
        banco_de_dados[total_alunos].notas = notas; // Atribui a nota ao struct

        total_alunos++; // Incrementa o número total de alunos
        printf("Aluno cadastrado com sucesso!\n");
        break;

    case 2:
        if (total_alunos==0)
        {
            printf("Nenhum aluno cadastrado.\n");
        }
        else
        {
            printf("Lista de Alunos Cadastrados:\n");
        for (int i = 0; i < total_alunos; i++) {
            printf("Nome: %s\n", banco_de_dados[i].nome);
            printf("Idade: %d\n", banco_de_dados[i].idade);
            printf("Matricula: %d\n", banco_de_dados[i].matricula);
            printf("Nota: %.2f\n", banco_de_dados[i].notas);
            printf("-------------------------\n");
        }
    }
        break;
        
    case 3:
    if (total_alunos==0){
            printf("Nenhum aluno cadastrado.\n");
    } else{
        printf("Digite o nome do aluno que deseja buscar: \n");
        fgets(nome_busca, sizeof(nome_busca), stdin);
        nome_busca[strcspn(nome_busca, "\n")] = 0; // Remove o caractere de nova linha do final da string

        int encontrado = 0; // Variável para verificar se o aluno foi encontrado
        for (int i = 0; i < total_alunos; i++) {
            if (strcmp(banco_de_dados[i].nome, nome_busca) == 0) {
                printf("Aluno encontrado:\n");
                printf("Nome: %s\n", banco_de_dados[i].nome);
                printf("Idade: %d\n", banco_de_dados[i].idade);
                printf("Matricula: %d\n", banco_de_dados[i].matricula);
                printf("Nota: %.2f\n", banco_de_dados[i].notas);
                encontrado = 1; // Aluno encontrado
                break;
            }
        }
        if (!encontrado) {
            printf("Aluno não encontrado.\n");
        }
    }
        break;

    case 4:
        printf("Saindo do sistema...\n"); 
        break;  

    default:
        printf("Opção inválida. Tente novamente.\n");

}

 } while (opcao != 4); //o loop continua rodando enquanto a opçao nao for 4 (sair do sistema)

return 0;

}




