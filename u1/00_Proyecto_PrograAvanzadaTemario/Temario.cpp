/**
 * Temario.cpp - Implementa la clase Temario.
 */
#include <iostream> /*cin, cout, endl*/
#include <stdio.h> /*printf, sprintf, scanf, gets */
#include "Temario.h"
using namespace std;
UnidadTematica::UnidadTematica(){
  cout<<"CONSTRUCTOR POR DEFECTO DE LA CLASE UnidadTematica"<<endl;
  printf("Unidad Num.? ");
  scanf("%d%*c",&NumDUnidad); /* %*c se usa para leer de buffer de entrada pero*/
  printf("Nombre de la unidad? ");/* no almacenar en los bytes de NumDUnidad*/
  gets(NombreDUnidad);
  printf("Cantidad de temas? ");
  scanf("%d%*c",&NumDTemas);
  for(int i=0;i<NumDTemas;i++){
    printf("Tema %d? ",i+1);
    gets(Tema[i]);
  }
}

std::string UnidadTematica::string_show(){
  string Result="";
  for(int i=0;i<NumDTemas;i++){
	Result+=string(Tema[i])+":";
  }
  return Result;
}
