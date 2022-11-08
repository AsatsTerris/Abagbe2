/*
 ============================================================================
 Name        : Agbae2.c
 Author      : StudentT
 Version     :
 Copyright   : Hochschule Augsburg
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

// Aufgabe 1
int min(int* samples, int n)
{

	if ((samples[0] < samples[1]) && (samples[0] < samples[2]) && (samples[0] < samples[3]) && (samples[0] < samples[4]))
	{
		return samples[0];
	}
	else if ((samples[1] < samples[0]) && (samples[1] < samples[2]) && (samples[1] < samples[3]) && (samples[1] < samples[4]))
	{
		return samples[1];
	}
	else if ((samples[2] < samples[1]) && (samples[2] < samples[0]) && (samples[2] < samples[3]) && (samples[2] < samples[4]))
	{
		return samples[2];
	}
	else if ((samples[3] < samples[1]) && (samples[3] < samples[2]) && (samples[3] < samples[0]) && (samples[3] < samples[4]))
	{
		return samples[3];
	}
	else
	{
		return samples[4];
	}
}

int max(int* samples, int n)
// Funktioniert nicht / gibt samples 1 wieder
{
	if 	((samples[0] > samples[1]) && (samples[0] > samples[2]) && (samples[0] > samples[3]) && (samples[0] > samples[4]))
		{
			return samples[0];
		}
		else if ((samples[1] > samples[0]) && (samples[1] > samples[2]) && (samples[1] > samples[3]) && (samples[1] > samples[4]))
		{
			return samples[1];
		}
		else if ((samples[2] > samples[1]) && (samples[2] > samples[0]) && (samples[2] > samples[3]) && (samples[2] > samples[4]))
		{
			return samples[2];
		}
		else if ((samples[3] > samples[1]) && (samples[3] > samples[2]) && (samples[3] > samples[0]) && (samples[3] > samples[4]))
		{
			return samples[3];
		}
		else
		{
			return samples[4];
		}
}

float mean(int* samples, int n)
{
	// gibt int wieder keine komma stellen
	float mean1 = (samples[0] + samples[1] + samples[2] + samples[3] + samples[1])/5;
	return mean1;
}

//Aufgabe 2
void printIntArray(int* samples, int n)
{

	printf("%i %i %i %i %i\n",samples[4],samples[3],samples[2],samples[1],samples[0]);

}

//Aufgabe 3
/*void printSumIntArray(int* samples, int n)
{

	samples[0] + samples[1] + samples[2] + samples[3] + samples[4];

}
*/


int main(void)
{
//Aufgabe 1

int samples[] = { 2, 6, 8, 10, 4 };
printf("Minimum aus Samples = %d\n", min(samples, 5));
printf("Maximum aus Samples = %d\n", max(samples, 5));
printf("%i %i %i %i %i\n",samples[0],samples[1],samples[2],samples[3],samples[4]);
printf("Der Mittelwert von Samples = %f\n", mean(samples, 5));

//Aufgabe 2
/*int samples[] = { 2, 6, 8, 10, 4 };
printIntArray(samples, 5);*/

//Aufgabe 3
/*int samples[] = { 2, 6, 8, 10, 4 };
int summe = printSumIntArray(samples, 5);
printf("Die Summe ist: = %d\n", summe);
*/

return 0;
}
