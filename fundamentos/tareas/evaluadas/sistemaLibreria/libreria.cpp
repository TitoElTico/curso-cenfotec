#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <sstream>

#include "libreria.h"

using namespace std;

int menuPrincipal()
{
	int opcion;

	do
	{
		cout << endl;
		cout << "|------------------------------------------------------------|" << endl;
		cout << "| Bienvenido al sistema de manejo de libros *Bibliobot V1.0* |" << endl;
		cout << "|------------------------------------------------------------|\n" << endl;
		cout << "El sistema cuenta con las siguientes opciones: \n" << endl;
		cout << "[1] Anadir libro a la coleccion" << endl;
		cout << "[2] Eliminar libro de la coleccion" << endl;
		cout << "[3] Ver toda la coleccion de libros" << endl;;
		cout << "[4] Salir del sistema" << endl;
		cout << "\nElija la opcion a ejecutar: ";
		cin >> opcion;

		switch (opcion)
		{
		case 1:
		{
			anadirLibro();
			break;
		}

		case 2:
		{
			eliminarLibro();
			break;
		}

		case 3:
		{
			verColeccion();
			break;
		}

		case 4:
		{
			system("cls");
			cout << "***************************************" << endl;
			cout << "* Ha saleccionado la opcion 4 - Salir *" << endl;
			cout << "***************************************\n" << endl;
			break;
		}

		default:
			system("cls");
			cout << "Opcion no valida, intente de nuevo" << endl;
			break;
		}

	} while (opcion != 4);

	return opcion;
}

void anadirLibro()
{
	system("cls");
	cout << "**********************************************" << endl;
	cout << "* Ha saleccionado la opcion 1 - Anadir libro *" << endl;
	cout << "**********************************************\n" << endl;

}

void eliminarLibro()
{
	system("cls");
	cout << "************************************************" << endl;
	cout << "* Ha saleccionado la opcion 2 - Eliminar libro *" << endl;
	cout << "************************************************\n" << endl;

}

void verColeccion()
{
	system("cls");
	cout << "***********************************************" << endl;
	cout << "* Ha saleccionado la opcion 3 - Ver coleccion *" << endl;
	cout << "***********************************************\n" << endl;

}

//Implementacion de clase libro

libro::libro() {
}

	libro::libro(string _titulo, string _autor, string _ISBN){
		titulo = _titulo;
		autor = _autor;
		ISBN = _ISBN;
	}

	//Getters
	string libro::getTitulo(){
		return titulo;
	}
	string libro::getAutor(){
		return autor;
	}
	string libro::getISBN(){
		return ISBN;
	}

	//Setters
	void libro::setTitulo(string _titulo){
		titulo = _titulo;
	}
	void libro::setAutor(string _autor){
		autor = _autor;
	}
	void libro::setISBN(string _ISBN){
		ISBN = _ISBN;
	}
