#include <iostream>
#include "random.h"
#include <stdlib.h>
#include <time.h>

using namespace std;

int random_number() 
{
	int secret_number;
	srand(time(NULL));
	secret_number = 1 + rand() % ((100 + 1) - 1);
	return secret_number;
}

void verificar_numero(int user_option, int secret_number) 
{
	if (user_option < secret_number)
	{
		cout << "\nToo low! Guess again.\n\n";
	}
	else if (user_option > secret_number)
	{
		cout << "\nToo high! Guess again.\n\n";
	}
	else
	{
		cout << "\nCongratulations, you guessed the number!\n\n";
	}
}