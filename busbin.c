#include <stdio.h>
#include <conio.h>



int busquedaBinariaRecursiva(int arreglo[], int busqueda, int izquierda, int derecha);

int main (){
	int array[]={0,1,2,3,4,5,6,7,8,9};
	int x;
	
	printf("Elemento a buscar: ");
	scanf("%i", &x);
	
	
	
	if (busquedaBinariaRecursiva(array,x,0,9)== 2){
		printf("Elemento encontrado");
	}
	else{
		printf("Elemento no encontrado");
	}
	
	getch ();
	return 0;
}



int busquedaBinariaRecursiva(int arreglo[], int busqueda, int izquierda, int derecha){
    if (izquierda > derecha) return -1;
 
    int indiceDeLaMitad = (izquierda + derecha) / 2;
 
    int valorQueEstaEnElMedio = arreglo[indiceDeLaMitad];
    if (busqueda == valorQueEstaEnElMedio){
        return 2;
    }
    
    if (busqueda < valorQueEstaEnElMedio){
        // Entonces está hacia la izquierda
        derecha = indiceDeLaMitad - 1;
    }else{
        // Está hacia la derecha
        izquierda = indiceDeLaMitad + 1;
    }
    return busquedaBinariaRecursiva(arreglo, busqueda, izquierda, derecha);
}


 
