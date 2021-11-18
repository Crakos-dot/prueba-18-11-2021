#include <stdio.h>
#include <stdlib.h>
void saludar(char *name){
  printf("Hola, %s\n",name );
}

int potencia_de_dos(int n){
  int resultado=1;
  for (int  i = 0; i < n; i++) {
     resultado*= 2;
  }
  return resultado;
}
void print_array(int result[], int dimension){
  for (int i = 0; i < dimension; i++) {
    printf("%d ",result[i] );
  }
}

// pone el resultado de u + v en result
// todos vectores de dimension n
void suma_vectorial(int u[], int v[], int result[], int n){
  for (int i = 0; i < n; i++) {
    result[i]=(u[i]+v[i]);
  }
}

// realiza un cifrado por desplazamiento usando el entero key
// como cantidad de letras a desplazar
void cifrar(char word[], int key){
  //   int i=0;
  //
  //   // while (j<) {
  //     j++;
  //     while (word[i][j]!=0) {
  //       word[i]=word[i][j]+key;
  //       i++;
  //         }
  //
  //
  // }
    }
