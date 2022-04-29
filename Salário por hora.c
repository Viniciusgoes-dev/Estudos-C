#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
  int salario_mensal, horas_trabalhada_por_mes, salario_por_hora;
  
  printf("Qual o seu salario mensal? ");
  scanf("%i", &salario_mensal);
  printf("%i\n", salario_mensal);
  
  printf("quantas horas trabalha por mes?");
  scanf("%i", &horas_trabalhada_por_mes);
  printf("%i\n", horas_trabalhada_por_mes);
  
  salario_por_hora = salario_mensal / horas_trabalhada_por_mes;
  
  printf("O salario por hora e: %d\n ", salario_por_hora);
  
  
  
  
  
  system("PAUSE");
  
  
  return 0;
}
