#include <iostream>

using std::cout;
using std::endl;

// Declarar funcion a la cual le entra como parametro dos matrices  que retorne un producto matricial

double** matrix_product(double m1, double m2);

double** get_matriz(int M, int N);


//que debe hacer la funcion


double** matrix_product(double m1, double m2){

	//para multiplicar el numero de columnas de A debe ser el numero filas de B

	

	//for (int i=0; i<filasA;  i++){

	//	for (int j=0; j< columnasB; j++){

	//	}
	//}


	// inicializar matriz c

}

// la funcion get_matriz se crea una matriz de ceros de M*N

double** get_matriz(int M, int N){

// como crear una matriz
	// vector de n componentes

	double *a = new double[N];

	// crear la matriz con n vectores

	double **matriz= new double* [N];

	for (int i=0; i<N; i++){
		matriz[i]= new double[N];
	}

	// inicializar la matriz con un for 
	int i;
	int j;

	// ciclo que recorre filas y columnas
	for (i=0; i<N; i++){

		for (j=0;  j<M; j++){

			cout<<"ingrese el numero"<<endl;
			double variable;
			cin<<variable;

			matriz[i][j]= variable;
			cout<<matriz[i][j]<<" ";

		}

		cout<<endl;

	
}

int main(){

	//para entrar las dimensiones desde la consola

	cout<<"entrada de dimensiones de i"<<endl;
	double ix;

	cin>>ix;
	
	cout<<"entrada de dimensiones de j"<<endl;
	double jy; 
	
	cin>>jy;                                                                                            
	
	get_matriz(ix,jy);



	return 0;

}




