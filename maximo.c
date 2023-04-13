
#include <stdio.h>

int Maximo(int A[], int i, int j);
int main (){
	int i=0;
	int j=7;
	int A[]={1,2,3,4,5,6,7};
	printf("El maximo valor del arreglo es: %d", Maximo (A,i,j));
	
	return 0;
}



int Maximo(int A[], int i, int j) {
 int medio, max1, max2;

 if (i == j){
 return A[i];
}
 else {
 medio = (i + j) / 2;
 max1 = Maximo(A, i, medio);
 max2 = Maximo(A, medio + 1, j);
}
 if (max1 > max2) {
 	
 return max1;
}
 else{
 return max2;
 }
 } 
