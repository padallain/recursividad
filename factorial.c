#include <stdio.h>
#include <conio.h>


int fact(int);
int factorial (int);

int main (){
	int l;
	
	printf("Introduce el factorial que quieres saber: ");
	scanf("%i", &l);
	

	
	
	printf("%d", factorial (l) );
	
	
	
	
	getch ();
	return 0;
}



int factorial (int n){ // de manera recursiva

	if (n==0){
		n= 1;
		
	}
	else {
		n*=factorial(n-1);
	}
	return n;
}
