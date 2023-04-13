#include <stdio.h>
#include <conio.h>



int mcd (int, int);

int main (){
	int l, m;
	
	printf("Introduce un numero: ");
	scanf("%i", &l);
	printf("Introduce otro numero: ");
	scanf("%i", &m);
	

	
	
	printf("%d", mcd (l,m) );
	
	
	
	
	getch ();
	return 0;
}



int mcd (int a, int b){ // de manera recursiva

	if (a<b){
		return mcd(b,a);
		
	}
	else if (b==0) {
		return a;
	}
	else {
	return mcd(b,a%b);	
	}

}
