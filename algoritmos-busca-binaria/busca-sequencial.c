#include <stdio.h>
#include <stdlib.h>

#define TAMANHO_ARRAY 5

struct Pessoa {
    char nome[0];
    int idade;
    float altura;
};

int main() {

	Pessoa array[TAMANHO_ARRAY];
    int i;
    
    printf("Informe os dados da pessoa abaixo", TAMANHO_ARRAY);
	
    for (i = 0; i < TAMANHO_ARRAY; i++) {
        
		struct Pessoa pessoa1;
    
		printf("Informe o nome: ");
		fgets(pessoa1.nome, 50, stdin);
    
		printf("Informe a idade: ");
		scanf("%d", &pessoa1.idade);
    
		printf("Informe a altura: ");
		scanf("%f", &pessoa1.altura);
		
		array[i] = pessoa1;
    }
    
    return 0;
}

int buscaSequncial (int *conjunto, int chave) {
	
	
	
}#include <stdio.h>
#include <stdlib.h>

#define TAMANHO_ARRAY 5

struct Pessoa {
    char nome[0];
    int idade;
    float altura;
};

int main() {

	Pessoa array[TAMANHO_ARRAY];
    int i;
    
    printf("Informe os dados da pessoa abaixo", TAMANHO_ARRAY);
	
    for (i = 0; i < TAMANHO_ARRAY; i++) {
        
		struct Pessoa pessoa1;
    
		printf("Informe o nome: ");
		fgets(pessoa1.nome, 50, stdin);
    
		printf("Informe a idade: ");
		scanf("%d", &pessoa1.idade);
    
		printf("Informe a altura: ");
		scanf("%f", &pessoa1.altura);
		
		array[i] = pessoa1;
    }
    
    return 0;
}

int buscaSequncial (int *conjunto, int chave) {
	
	
	
}