#include <stdio.h>
#include <stdlib.h>



main(){
	
	   float n1,n2,r;
	   char op;
	   
	   
	   printf("Digite um numero: ");
	   scanf("%f",&n1);
	   
	   
	   printf("Digite um numero: ");
	   scanf("%f",&n2);
	   
	   
	   printf("Digite um operação: + - * / ");
	   getchar();
	   scanf("%c",&op);
	   
	   
	   switch(op)
	   {
	   	 case '+':
	   	 	r = n1+n2;
	   	 	printf(" resultado: %.2f\n", r);
	   	 	break;
	   	 case '-':
			r= n1-n2;
			printf(" resultado: %.2f\n", r);
			break;
		case '*':
			r = n1*n2;
			printf(" resultado: %.2f\n", r);
			break;
		case '/':
		    r= n1/n2;
			printf(" resultado: %.2f\n", r);	
		    break;
		default:
		printf("operacao invalida ");    
		    
		    
	   	
	   }
	   
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	system("pause");
}
