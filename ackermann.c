#include <stdio.h>
#include <conio.h>



int ack (int, int);

int main (){
	int l, m;
	
	printf("Introduce un numero: ");
	scanf("%i", &l);
	printf("Introduce otro numero: ");
	scanf("%i", &m);
	

	
	
	printf("%d", ack (l,m) );
	
	
	
	
	getch ();
	return 0;
}



int ack (int a, int b){ // de manera recursiva

	if (a==0){
		return b+1;
		
	}
	else if ((a>0)&&(b==0)) {
		return ack(a-1,1) ;
	}
	else {
		return ack(a-1,ack(a,b-1)) ;	
	}

}
