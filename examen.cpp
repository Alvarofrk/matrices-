#include<iostream>
using namespace std;



int main(){
	//declaro variables 
	int filas , columnas , filas2, columnas2;
	//el do while primero ejecuta y luego verifica si cumple la sentencia 
	do{
	cout<<"numero de columnas de la matriz 1 tiene que ser igual al numero de filas de la matriz 2"<<endl
	;
	cout<<"digite el numero de filas de la matriz 1 : ";cin>>filas ;
	cout<<"digite el numero de columnas de la matriz 1 : ";cin>>columnas;
	cout<<"digite el numero de filas de la matriz 2 : ";cin>>filas2 ;
	cout<<"digite el numero de columnas de la matriz 2 : ";cin>>columnas2;
	
	}while(columnas!=filas2);
	//una vez pedidos los datos declaro las matrices 
	int matriz1[filas][columnas];
	int matriz2[filas2][columnas2];
	int matriz3[filas][columnas2];
	
	//matriz1
	//pido los datos generandome posiciones exactas para que se vea agradable
	
	/*
	esto equivale una matriz 
	[0][0] [0][1] [0][2]
	[1][0] [1][1] [1][2]
	[2][0] [2][1] [2][2]
	
	*/
	for(int i = 0;i<filas;i++){
		for(int j = 0; j < columnas ; j++){
			cout<<"introduce tu elemento matriz 1 ["<<i<<"]["<<j<<"] : ";
			cin>>matriz1[i][j];
		}
	}
	//imprimo la matriz 1
	cout<<endl;
	cout<<"matirz 1:"<<endl;
	for(int i = 0;i<filas;i++){
		for(int j = 0; j < columnas ; j++){
			cout<<"["<<matriz1[i][j]<<"] ";
		}
		cout<<endl;
	}
	cout<<endl;
	
	//matriz 2
	
	//pido los datos de la matriz 2 igual que la primera 
	for(int i = 0;i<filas2;i++){
		for(int j = 0; j < columnas2 ; j++){
			cout<<"introduce tu elemento matriz 2 ["<<i<<"]["<<j<<"] : ";
			cin>>matriz2[i][j];
		}
	}
	
	
	cout<<endl;
	cout<<"matirz 2:"<<endl;
	//imprimo matriz 2
	for(int i = 0;i<filas2;i++){
		for(int j = 0; j < columnas2 ; j++){
			cout<<"["<<matriz2[i][j]<<"] ";
		}
		cout<<endl;
	}
	
	
	//genero la matriz resultado inicializandola en 0 todos los elementos para que no me bote resultados basura 
	for(int i = 0;i<filas;i++){
		for(int j = 0; j < columnas2 ; j++){
			
			matriz3[i][j]=0;
		}
	}
	
	
	//hago la multiplicacion 
	for(int i=0;i<filas;i++){
		for(int j=0;j<columnas2;j++){
		    for(int z=0;z<columnas;z++){
		    	matriz3[i][j]+=matriz1[i][z]*matriz2[z][j];
			}
		}
	}
	
	
	//imprimo la matriz resultado
	cout<<endl;
	cout<<"nmatriz 3: "<<endl;
	for(int i = 0;i<filas;i++){
		for(int j = 0; j < columnas2 ; j++){
			cout<<"["<<matriz3[i][j]<<"] ";
		}
		cout<<endl;
	}
	
	
	cin.get();
	return 0;
}
