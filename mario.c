#include <stdio.h>
#include <cs50.h>

void print_row(int spaces, int bricks);

int main(void)
{
	// promt user for pyramid height 
	int height;
	do 
	{
		height = get_int("Height: ");
	} 
	while(height > 8 || height < 1);

	// print pyramid  
	for (int i = 0; i < height; i++)
	{
		print_row(height - i -1, i); // left pyramid
		printf("  "); // space in the middle
		print_row(0, i); // right pyramid
		printf("\n");
	}

}

void print_row(int spaces,  int bricks)
{
	// print spaces
	for (int j = 0; j < spaces; j++)
	{
		printf(" ");
	}

	// print bricks
	for (int i = 0; i < bricks + 1; i++)
	{
		printf("#");
	}
}
