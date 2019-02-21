#include<stdio.h>


void fPortada();
void fLeeValores(int *, int *, int *);
void fSuma(int *, int *, int *);


main(){
	int opci, n, m, k;
	fPortada();
	do{
		fLeeValores(&n, &m, &k);
		fSuma(&n, &m, &k);
		
		printf("\nDesea otro calculo?");
		printf("\tSi=1\tNo=0\t");
	    scanf("%d",&opci);
	    while(opci!=1 && opci!=0){
	    	printf("\nLa opcion no es valida.");
		  	printf("\nIntente de nuevo.");
		  	printf("\nDesea otro calculo?\n");
		    printf("\tSi=1\tNo=0\t");
		    scanf("%d",&opci);
	    }
	    system("cls");
	}while(opci==1);
}
void fPortada(){
	system("color f1");
	printf("\n\t\t\tPrograma 03 Suma de serie");
	printf("\n\t\t\t_________________________");
	printf("\n\t\tEste programa te ayudara a sumar los numeros");
	printf("\n\t\tenteros que esten entre dos valores que tu");
	printf("\n\t\tdecidas (n, m) y con aumentos de una cantidad");
	printf("\n\t\tdada (k).");

	system("pause");
	system("cls");
}
void fLeeValores(int *n, int *m, int *k){
	printf("Dame los numeros donde inciara y donde terminara la suma (n ,m)\n");
	printf("\tpara n: ");
	scanf("%d",n);
	printf("\tpara m: ");
	scanf("%d",m);
	while(*n > *m){
		printf("No es posible, intenta de nuevo.\n");
		printf("\tpara n: ");
	    scanf("%d",n);
	    printf("\tpara m: ");
	    scanf("%d",m);
	}
	printf("Dame el aumento\n\tpara k: ");
	scanf("%d",k);
	while(*k > *m){
		printf("No es posible, el aumento es demaciado grande.\n");
		printf("Dame el aumento para k: ");
	    scanf("%d",k);
	}
}
void fSuma(int *n, int *m, int *k){
	int i, suma = 0, aux = 0;
	for(i = *n ; i <= *m ; i = i + *k){
		suma = suma + i;
		aux = suma;
	}
	printf("El resultado es: %d",aux);
}
