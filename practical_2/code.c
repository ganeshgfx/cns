#include <stdio.h>
#include <conio.h>

void main()
{

	char key[50] = "PASSWORD";

	char keyMatrix[5][5] = {
		{'a', 'b', 'c', 'd', 'e'},
		{'f', 'g', 'h', 'i', 'k'},
		{'l', 'm', 'n', 'o', 'p'},
		{'q', 'r', 's', 't', 'u'},
		{'v', 'w', 'x', 'y', 'z'}};

	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			printf("%c", keyMatrix[i][j]);
		}
	}
}
