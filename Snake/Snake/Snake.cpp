// Snake.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
using namespace std;
#include <time.h>



int main()
{
	cout << "Snake" "\n";

	int fil;
	int col;
	int food[2];
	int head[2];
	
	
	


	cout << "Ingrese el numero de columnas: ";
	cin >> col;

	cout << "Ingrese el numero de filas: ";
	cin >> fil; 

	cout<<endl;
	cout << endl;

	srand(time(0));

	head[0] = 1;
	head[1] = 1;

	food[0] = rand() % (fil-2) +1;
	food[1] = rand() % (col-2) +1;

	for (int i = 0; i < fil; i++)
	{
		for (int j = 0; j < col; j++)
		{
			if (i == 0 || j == 0 || i == fil - 1 || j == col - 1)
			{
				cout << "#";
			}
			else if (j == head[0] && i == head[1])
			{
				cout << "Q";
			}
			else if (j == food[0] && i == food[1])
			{
				cout << "n";
			}
			else
			{
				cout << ".";
			}	
		}
		cout << endl;	
	} 
	return 0;
}


// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
