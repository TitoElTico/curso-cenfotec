/*
2. Write a program that generates a random number between 1 and 100 and asks the user to guess 
   the number. If the user's guess is too low, the program should print "Too low! Guess again." 
   If the user's guess is too high, the program should print "Too high! Guess again." If the user 
   guesses the number correctly, the program should print "Congratulations, you guessed the number!"
 */

#include <iostream>
#include <stdlib.h>
#include <time.h>
#include "random.h"

using namespace std;

int main()
{
	int user_option;
	int secret_number;

	secret_number = random_number();

	do
	{
		cout << "==================================";
		cout << "\nGuess the number between 1 and 100";
		cout << "\n==================================";

		cout << "\nInsert your number here --> ";
		cin >> user_option;

		verificar_numero(user_option, secret_number);

	} while (user_option != secret_number);
   
	system("pause");
}
