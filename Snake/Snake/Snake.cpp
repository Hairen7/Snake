// Snake.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
using namespace std;
#include <time.h>
#include <conio.h>
#include <chrono>
#include <thread>


int fil;
int col;
int food[2];
int head[2];
char direction = 0;
bool gameOver = false;

void Input()
{
	if (_kbhit())
	{
		direction = _getch();
	}
}

void Logic()
{
	if (direction == 'd')
	{
		cout << "Derecha";
		head[0]++;
	}
	else if (direction == 's')
	{
		cout << "Abajo";
		head[1]++;
	}
	else if (direction == 'a')
	{
		cout << "Izquierda";
		head[0]--;
	}
	else if (direction == 'w')
	{
		cout << "Arriba";
		head[1]--;
	}
	cout << endl;
	cout << endl;



	if (head[0] >= fil || head[0] < 0 || head[1] >= col || head[1] < 0)
	{
		gameOver = true;
	}
}

void Draw()
{
	system("cls");
	
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
	this_thread::sleep_for(chrono::milliseconds(16));
}


int main()
{
	cout << "Snake" "\n";
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


	while (!gameOver)
	{

		Input();

		Logic();

		Draw();

	}

	system("pause");
	return 0;
}

