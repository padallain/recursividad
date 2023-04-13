#include <stdio.h>
#include <conio.h>


int par(int);
int impar(int);


int main (){
	int l;
	
	printf("Introduce un numero: ");
	scanf("%i", &l);
	
	if (par(l)==1){
	printf("El numero es par\n");
	}
	else{
	printf("El numero es impar\n")	;
	}

	
	

	
	
	
	
	getch ();
	return 0;
}



int par (int n){ // de manera recursiva

	if (n==0){
		return 1;
	}
	else{
		return impar (n-1);
		
	}
}


int impar(int n){
	
	if (n==0){
		return 0;
	}
	else{
		return par(n-1);
	}
	}

