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
#include <time.h>

// Aufgabe 1
int min(int* samples, int n)
{
	int counter = 0;
	for(int i = 0; i != n; i++)
	{
		counter = 0;
		for(int y = 0; y != n; y++)
		{
			if(i == y)
			{
			}
			else
			{
				if(samples[i] < samples[y])
				{
					counter++;
				}
			}
			if(counter == n-1)
			{
				return samples[i];
			}
		}
	}
	return 0;
}

int max(int* samples, int n)

{
	int counter = 0;
		for(int i = 0; i != n; i++)
		{
			counter = 0;
			for(int y = 0; y != n; y++)
			{
				if(i == y)
				{
				}
				else
				{
					if(samples[i] > samples[y])
					{
						counter++;
					}
				}
				if(counter == n-1)
				{
					return samples[i];
				}
			}
		}
		return 0;
}

float mean(int* samples, int n)
{

	float mean1;
	for(int i = 0; i < n; i++)
	{
		mean1 += samples[i];
	}
	return mean1/n;

}

//Aufgabe 2
void printIntArray(int* samples, int n)
{
	printf("samples[] = {%i,",samples[n-1]);
	for(int i = n-2; i > 0; i--)
	{
		printf("%i,",samples[i]);
	}
	printf("%i}\n\n\n",samples[0]);
}

//Aufgabe 3
int printSumIntArray(int* samples, int n)
{
	int sum = 0;
	for(int i = 0; i < n; i++)
		{
			sum += samples[i];
		}
	return sum;
}

int main(void)
{
//Aufgabe 1
printf("Aufgabe 1\n");
int samples[] = { 2, 6, 8, 10, 4 };
printf("Minimum aus Samples = %d\n", min(samples, 5));
printf("Maximum aus Samples = %d\n", max(samples, 5));
printf("Der Mittelwert von Samples = %.2f\n\n\n", mean(samples, 5));


//Aufgabe 2
printf("Aufgabe 2\n");
printIntArray(samples, 5);


//Aufgabe 3
printf("Aufgabe 3\n");
int summe = printSumIntArray(samples, 5);
printf("Die Summe ist: %d\n\n\n", summe);


//Aufgabe 4
printf("Aufgabe 4\n");

srand((unsigned)time(NULL));

char enter[20];// maximal 19 Zeichen
int Wurf = 1;

char Wurfel1[6][9] =
{ "Lehm","Holz","Schaf","Erz","Getreide","Gold"};
char Wurfel2[6][13] =
{ "Sonne","Mühle","Ritter","Fragezeichen","Rauber","Rauber"};

while (enter[20] != 'q')
{

	printf("%i. Wurf Würfel 1: %s Würfel 2: %s \n",Wurf,Wurfel1[rand()%6],Wurfel2[rand()%6]);
	scanf("%s",&enter[20]);
	Wurf++;
}

//Aufgabe 5
printf("Aufgabe 5\n");

int muenze_e2 = 0;
int muenze_e1 = 0;
int muenze_c50 = 0;
int muenze_c20 = 0;
int muenze_c10 = 0;
int muenze_c5 = 0;
int muenze_c2 = 0;
int muenze_c1 = 0;

float betrag;
scanf("%f", &betrag);
printf("Ihre Eingabe: %.2f\n\n", betrag);
betrag = betrag * 100;


if(betrag >= 200)
{
	while(betrag >= 200)
	{
		betrag = betrag - 200;
		muenze_e2++;
	}
}
if(betrag >= 100)
{
	while(betrag >= 100)
	{
		betrag = betrag - 100;
		muenze_e1++;
	}
}
if(betrag >= 50)
{
	while(betrag >= 50)
	{
		betrag = betrag - 50;
		muenze_c50++;
	}
}
if(betrag >= 20)
{
	while(betrag >= 20)
	{
		betrag = betrag - 20;
		muenze_c20++;
	}
}
if(betrag >= 10)
{
	while(betrag >= 10)
	{
		betrag = betrag - 10;
		muenze_c10++;
	}
}
if(betrag >= 5)
{
	while(betrag >= 5)
	{
		betrag = betrag - 5;
		muenze_c5++;
	}
}
if(betrag >= 2)
{
	while(betrag >= 2)
	{
		betrag = betrag - 2;
		muenze_c2++;
	}
}
if(betrag == 1)
{
	muenze_c1++;
}


printf("Große Münzen:\n %3.i x 2€\n %3.i x 1€\n",muenze_e2,muenze_e1);
printf("Kleine Münzen:\n %3.i x 0,50€\n %3.i x 0,20€\n %3.i x 0,10€\n %3.i x 0,05€\n %3.i x 0,02€\n %3.i x 0,01€\n",muenze_c50,muenze_c20,muenze_c10,muenze_c5,muenze_c2,muenze_c1);


return 0;
}
