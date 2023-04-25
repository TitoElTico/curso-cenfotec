/*
1. Write a program that reads a list of integers from the user and stores them in a vector.
The program should then pass this vector to a function that finds and returns the largest
and smallest values in the vector. Finally, the program should print these values to the screen.
*/

#include <iostream>
#include <vector>
//#include <algorithm>

using namespace std;

int main()
{
    vector<int> numeros;
    int numero;

    cout << "\n\nEnter the numbers you want to calculate the Maximum and Minimum value of the set\n";
    cout << "To finish the entry, type any letter \n";


    while (cin >> numero)
    {
        numeros.push_back(numero);  //La función vector.push_back registra el dato en la ultima posición del vector
    }

    cout << "\nThe numbers you entered were: ";

    for (int i = 0; i < numeros.size(); i++)
    {
        cout << numeros[i] << " ";
    }

    int mayor = numeros[0];
    int menor = numeros[0];

    for (int i = 1; i < numeros.size(); i++)
    {
        if (numeros[i] > mayor)
        {
            mayor = numeros[i];
        }
        if (numeros[i] < menor)
        {
            menor = numeros[i];
        }
    }

    cout << "\n\nThe largest value in the vector is: " << mayor << endl;
    cout << "The smallest value in the vector is: " << menor << endl << endl;

    // auto maximo = max_element(numeros.begin(), numeros.end());
    // cout << "\n El valor maximo es: " << *maximo << "\n";

    // auto minimo = min_element(numeros.begin(), numeros.end());
    // cout << "El valor minimo es: " << *minimo << "\n";

    return 0;
}