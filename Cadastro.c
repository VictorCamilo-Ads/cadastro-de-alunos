#include <stdio.h>
#include <string.h>


int main(){

char nome[50];
int idade;
int matricula;
float notas;
int opcao;

printf("***************************************************\n");
printf("* Seja Bem-Vindo ao sistema de Cadastro de Alunos *\n");
printf("***************************************************\n");
printf("\n\n");

//Menu de cadastro de alunos 
printf("------Menu de Cadastro de Alunos------\n");
printf("1 - Cadastrar Aluno\n");
printf("2 - Listar Alunos\n");
printf("3 - Buscar por Nomes\n");
printf("4 - Sair\n");
printf("Escolha uma opção: \n");
scanf("%d",&opcao);





printf("Digite o nome completo do aluno: \n");
fgets(nome, sizeof(nome), stdin);

nome[strcspn(nome, "\n")] = 0; // Remove o caractere de nova linha do final da string   


printf("Digite a idade do aluno: \n");
scanf("%d",&idade);

printf("Digite a matricula do aluno: \n");
scanf("%d",&matricula);

printf("Digite a nota do aluno: \n");
scanf("%f",&notas);





}