/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <locale.h>

int main () {

  int vetor_1[8];
  int vetor_2[8]; 
  int cont;
  setlocale(LC_ALL, "Portuguese");

  for (cont = 0; cont < 8;cont++) {
    printf("Informe um número inteiro para posição  %dº do vetor: ", cont + 1);
    scanf("%d", &vetor_1[cont]);
  }

  printf("\n\nSegue abaixo, o Resultado da Multiplicação:");
  for (cont = 0; cont < 8; cont++) {
    vetor_2[cont] = ( vetor_1[cont] * 3 ) ; 
    printf("\nvetor_1[%d] * 3= %d", cont, vetor_2[cont]);
  }

  return 0;
}



