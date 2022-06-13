#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * randomPasswordGeneration - function to randomly generate password
 * main - Entry point
 * @N: length of password
 * Return: 0 is always success otherwise 1
 */

void randomPasswordGeneration(int N)
{
	/* Initialize counter */
	int i = 0;
	int randomizer = 0;

	/* Array of numbers */
	char numbers[] = "0123456789";

	/* Array of small alphabets */
	char letter[] = "abcdefghijklmnoqprstuvwyzx";

	/* Array of capital alphabets */
	char LETTER[] = "ABCDEFGHIJKLMNOQPRSTUYWVZX";

	/* Array of all the special symbols */
	char symbols[] = "!@#$^&*?";

	/* Stores the random password */
	char *password = malloc(N * sizeof(password));

	/* To select the randomizer inside the loop */
	randomizer = rand() % 4;
	
	/*
	 * Seed the random-number generator with current time so that the
	 * numbers will be different every time
	 */
        srand((unsigned int)(time(NULL)));

	/* Iterate over the range [0, N] */
	for (i = 0; i < N; i++)
	{
		if (randomizer == 1)
		{
			password[i] = numbers[rand() % 10];
			randomizer = rand() % 4;
			printf("%c", password[i]);
		}
		else if (randomizer == 2)
		{
			password[i] = symbols[rand() % 8];
			randomizer = rand() % 4;
			printf("%c", password[i]);
		}
		else if (randomizer == 3)
		{
			password[i] = LETTER[rand() % 26];
			randomizer = rand() % 4;
			printf("%c", password[i]);
		}
		else
		{
			password[i] = letter[rand() % 26];
			randomizer = rand() % 4;
			printf("%c", password[i]);
		}
	}
	free (password);
}

/**
 * main - entry point
 * Return: 0 is always success otherwise 1
 * Drive code
 */
int main(void)
{
	/*Length of the password to be generated */
	int N = 10;

	/* Function Call */
	randomPasswordGeneration(N);

	return (0);
}
