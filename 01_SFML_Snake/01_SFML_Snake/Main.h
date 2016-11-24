#pragma once

//Prototypes
void print_map(int tab[MAX_X][MAX_Y]);
void move_snake(int tab[MAX_X][MAX_Y]);

//Fontions
void move_snake(int tab[MAX_X][MAX_Y])
{

}

void print_map(int tab[MAX_X][MAX_Y])
{
	for (int i = 0; i < MAX_X; i++)
	{
		for (int j = 0; j < MAX_Y; j++)
		{
			cout << tab[i][j];
		}
		cout << endl;
	}
}