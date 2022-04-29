#include<stdio.h>
#include<stdlib.h>


main()
{
    int n1,n2,n3;
    
    printf("digite um numero: ");
    scanf("%d",&n1);
    
    printf("digite um numero: ");
    scanf("%d",&n2);
    
    printf("digite um numero: ");
    scanf("%d",&n3);
    
    if(n1<n2 && n1<n3)
    	printf("O menor: %d\n",n1);
    else if(n2<n1 && n2<n3)	
			printf("O menor : %d\n",n2); // \n quebra linha
			else
		printf("O menor: %d\n",n3);	
	
	system("pause");
}
