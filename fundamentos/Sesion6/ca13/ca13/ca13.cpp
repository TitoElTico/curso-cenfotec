#include <iostream>
#include <format>
#include <string>

using namespace std;

int main()
{
	// Implicit conversion
	// Explicit conversion

	float a{ 1 };

	//int b {1.1};
	auto b{ 1.1 };

	cout << format("b = {:f} \n", b);

	float c{};
	int d{ 1 };

	c = static_cast <float>(d) / 5;


  cout << "Ready!\n";
}

