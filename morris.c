#include <stdio.h>
#include <conio.h>



long morris (int, int);

int main (){
	int l, m;
	
	printf("Introduce un numero: ");
	scanf("%i", &l);
	printf("Introduce otro numero: ");
	scanf("%i", &m);
	

	
	
	printf("%ld", morris (l,m) );
	
	
	
	
	getch ();
	return 0;
}



long morris (int a, int b){ // de manera recursiva

	if (a==b){
		return b+1;
	}
	else {
		return morris(a,morris(a-1,b+1)) ;	
	}

}
