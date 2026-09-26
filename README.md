# 📚 Sistema de Cadastro de Alunos em C

Projeto desenvolvido em linguagem **C** com o objetivo de praticar conceitos fundamentais de programação através da criação de um sistema simples de cadastro e consulta de alunos.

O programa funciona através de um menu no terminal, permitindo cadastrar alunos, visualizar os registros cadastrados e realizar buscas pelo nome.

> 🚧 Projeto desenvolvido para fins de estudo e prática de programação em C.

---

## 🎯 Objetivo

O objetivo deste projeto é colocar em prática conceitos fundamentais da linguagem C, como:

* Estruturas (`struct`)
* Arrays
* Strings
* Funções da biblioteca padrão
* Estruturas de repetição
* Estruturas condicionais
* Entrada e saída de dados
* Manipulação de strings
* Busca de informações em memória

---

## ⚙️ Funcionalidades

O sistema possui as seguintes opções:

### 1️⃣ Cadastrar Aluno

Permite cadastrar um novo aluno informando:

* Nome completo
* Idade
* Matrícula
* Nota

O sistema permite armazenar até **100 alunos**.

### 2️⃣ Listar Alunos

Exibe todos os alunos cadastrados, apresentando:

* Nome
* Idade
* Matrícula
* Nota

### 3️⃣ Buscar por Nome

Permite pesquisar um aluno pelo nome informado.

Caso o aluno seja encontrado, seus dados são exibidos na tela.

### 4️⃣ Sair

Encerra a execução do programa.

---

## 🧠 Conceitos utilizados

### `struct`

Foi utilizada uma estrutura para representar os dados de cada aluno:

```c
typedef struct {
    char nome[MAX_NOME];
    int idade;
    int matricula;
    float notas;
} Aluno;
```

Dessa forma, todas as informações relacionadas a um aluno ficam agrupadas em uma única estrutura.

### Array de estruturas

Os alunos são armazenados em um array:

```c
Aluno banco_de_dados[MAX_ALUNOS];
```

Neste projeto, o limite definido é de:

```c
#define MAX_ALUNOS 100
```


## 🛠️ Tecnologias utilizadas

* **C**
* **GCC**
* **Visual Studio Code**
* **Git**
* **GitHub**

---

## ▶️ Como executar

### Pré-requisitos

É necessário ter um compilador C instalado.

Este projeto foi desenvolvido utilizando o **GCC**.

Para verificar se o GCC está instalado:

```bash
gcc --version
```

### Compilando o projeto

No terminal, dentro da pasta do projeto:

```bash
gcc Cadastro.C -o Cadastro.exe
./Cadastro.exe
```

## 💻 Exemplo de funcionamento

```text
***************************************************
* Seja Bem-Vindo ao sistema de Cadastro de Alunos *
***************************************************

------Menu de Cadastro------
1 - Cadastrar Aluno
2 - Listar Alunos
3 - Buscar por Nomes
4 - Sair

Escolha uma opção:
```

## 📖 O que aprendi com este projeto

Durante o desenvolvimento deste projeto, pratiquei conceitos importantes da linguagem C, principalmente a utilização de `struct`, arrays, strings, `scanf`, `fgets`, `strcmp` e estruturas de repetição.

O projeto também ajudou a compreender melhor como organizar informações relacionadas dentro de uma estrutura e como realizar operações de cadastro e busca utilizando dados armazenados em memória.

---

## 🚀 Próximos passos

A ideia é evoluir este projeto gradualmente, adicionando novas funcionalidades e aplicando conceitos mais avançados de programação.

- Adicionar um menu para excluir alunos cadastrados.
- Adicionar um sistema onde apresenta um "erro" ou uma "falha" ao adicionar alunos que já estão matriculados.
- Entre outras operações que podem ser útil e que vai enriquecer o projeto. 

---

## 👨‍💻 Autor

**Victor Camilo**

Estudante de **Análise e Desenvolvimento de Sistemas**, atualmente aprofundando os estudos em programação, Logica de programação, Algoritmos, Linguagem C, Git e GitHub. 

---

⭐ Projeto desenvolvido para fins de estudo e construção de portfólio.
