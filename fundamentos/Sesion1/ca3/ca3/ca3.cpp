#include <iostream>
using namespace std;

int main()
{
	float a{}, b{};

   cout << "Type a number: \n";
   cin >> a;
   cout << "Type b number: \n";
   cin >> b;

   //flor c=a+b
   // float c{ a + b };

   float c{};
   
   //Asigment
   a + b;
   c = a + b;

   cout << "a + b = " << c << "\n";
}
