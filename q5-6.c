#include <stdio.h>

struct Professor {
    char nome[50];
    int idade;
    char especialidade[50];
};

struct Disciplina {
    char nome[50];
    int codigo;
    struct Professor responsavel; 
    int cargaHoraria;
};

int main() {
    struct Professor prof1 = {"Daniel Silva", 35, "Programação"};
    struct Disciplina disciplina1 = {"Laboratorio de Programação", 0450523, prof1, 80};

    return 0;
}
