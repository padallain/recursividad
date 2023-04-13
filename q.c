#include <stdio.h>
#include <conio.h>



int Q (int, int);

int main (){
	int l, m;
	
	printf("Introduce un numero: ");
	scanf("%i", &l);
	printf("Introduce otro numero: ");
	scanf("%i", &m);
	

	
	
	printf("%ld", Q (l,m) );
	
	
	
	
	getch ();
	return 0;
}



int Q (int a, int b){ // de manera recursiva

	if (a<b){
		return 0;
	}
	else {
		return Q(a-b,b)+1
		 ;	
	}

}
