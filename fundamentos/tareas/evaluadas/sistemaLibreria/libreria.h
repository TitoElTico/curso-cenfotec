#pragma once
#include <string>
#include <vector>

using namespace std;

//Declaracion de funciones
int menuPrincipal();
void anadirLibro();
void eliminarLibro();
void verColeccion();

//Declaracion de clases
class libro {
private: //Atributos
	string titulo;
	string autor;
	string ISBN;

public: //Metodos
	//Constructores
	libro(); //Constructor 1
	libro(string, string, string); //Constructor 2

	//Funciones
	void setTitulo(string);
	void setAutor(string);
	void setISBN(string);

	string getTitulo();
	string getAutor();
	string getISBN();
};

class libreria {
private:
	vector <libro> libros;

public:
	void anadirLibro();



};