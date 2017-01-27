#pragma once

//Prototypes
void move_snake(int *X, int *Y, Direction lastMove);
void print_map(int tab[MAX_X][MAX_Y]);

//Fonctions
void move_snake(int *X, int *Y, Direction lastMove)
{
	switch (lastMove)
	{
		case UP:
			*X -= 1;
			break;
		case DOWN:
			*X += 1;
			break;
		case LEFT:
			*Y -= 1;
			break;
		case RIGHT:
			*Y += 1;
			break;
		default:
			break;
	}
}

void print_map(int tab[MAX_X][MAX_Y])
{
	system("cls");
	for (int i = 0; i < MAX_X; i++)
	{
		for (int j = 0; j < MAX_Y; j++)
		{
			cout << tab[i][j];
		}
		cout << endl;
	}
}