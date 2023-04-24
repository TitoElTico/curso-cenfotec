/*
Exercises #6

In these exercise, apply as many modern C++ as possible.

Keep any function, struct or enumeration definition on a separate .h file, and any
implementation on a separate .cpp file.

- Exercise: Count Lines, Paragraphs, and Words in a Text File

    - Objective: Write a C++ program that reads a text file and counts the total
      number of lines, paragraphs, and words in the file. The program should then
      print out the counts for each of these.

    - Input: A text file (with extension .txt) containing one or more paragraphs of
      text. The file may contain empty lines or lines with only spaces.

    - Output: The program should print out the total number of lines, paragraphs,
      and words in the file.

- Requirements

    - The program should prompt the user to enter the name of the text file to be read.
    - The program should then read the text file and count the number of lines, paragraphs,
      and words in the file.
    - A line is defined as any sequence of characters that ends with a newline character.
    - A paragraph is defined as any sequence of lines that is separated by one or more
      empty lines or lines with only spaces.
    - A word is defined as any sequence of non-space characters that is surrounded by spaces
      or the beginning/end of a line or paragraph.
    - The program should print out the total number of lines, paragraphs, and words in the file.
    - The program should handle any errors that may occur during the file reading process
      (such as file not found).

- Tips

    - You can use the std::ifstream class to read a text file.
    - You can use the getline() function to read each line of the file.
    - You can use a std::vector container to store the lines of the file and iterate
      through them to count the paragraphs and words.
    - You can use the std::stringstream class to split a line into words.
    - You can use exception handling to handle any errors that may occur during the file
      reading process.
    - You can test your program on different text files to ensure it works correctly.
    - You can use this website to generate some text to test on files. https://en.lipsum.com/

-- LAST LINE ---
*/


#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <vector>

using namespace std;

int main() 
{
    // Se le solicita al usuario el nombre del archivo que desea hacer lectura
    string filename;
    cout << "Ingrese el nombre del archivo: ";
    cin >> filename;

    // Abrimos el archivo
    ifstream file(filename);
    if (!file.is_open()) {
        cerr << "No se pudo abrir el archivo.\n";
        return 1;
    }

    // Contadores de líneas, párrafos y palabras
    int line_count = 0;
    int paragraph_count = 1; // Inicialmente se asume que existe al menos un parrafo
    int word_count = 0;

    // Vector para almacenar cada línea del archivo
    vector <string> lines;

    // Leemos cada línea del archivo
    string line;
    while (getline(file, line))
    {
        ++line_count;
        if (line.empty())
        { // Si la línea está vacía, se anade un nuevo parrafo
            ++paragraph_count;
        }
        else // Si la línea no está vacía, es enviada mediante push.back al final del vector
        {
            lines.push_back(line);

            // Se utiliza stringstream para contar las palabras en la línea
            istringstream iss(line);
            string word;
            while (iss >> word)
            {
                ++word_count;
            }
        }
    }

    cout << "El archivo tiene " << line_count << " lineas.\n";
    cout << "El archivo tiene " << paragraph_count << " parrafos.\n";
    cout << "El archivo tiene " << word_count << " palabras.\n";

    cout << "\nREADY!!! \n\n";

    return 0;
}