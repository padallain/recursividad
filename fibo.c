#include <stdio.h>
#include <conio.h>


 int fibo(int );


int main (){
	int l;
	
	printf("Introduce hasta que posicion quieres saber de la serie: ");
	scanf("i%", &l);
	

	for (int i=1; i<=l ;i++){
	printf("%i", fibo (i) );	
	}
	

	
	
	
	
	getch ();
	return 0;
} 



int fibo (int n){ // de manera recursiva

	if (n==0){
		return 0;
		
	}
	else if (n==1) {
		return 1;
	}
	else {
		return fibo(n-2)+fibo(n+1);
	}
}
