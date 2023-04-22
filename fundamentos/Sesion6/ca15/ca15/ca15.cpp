#include <iostream>
#include <format>
#include <vector>
#include <windows.h>

using namespace std;

int main()
{
	SetConsoleOutputCP(1252);

	try
	{
		auto n{ 0 };
		auto m{ 1 / n };

		vector <int> vec{1, 2, 3};
		//auto v1{ vec.at(5) };

		throw "Oooops!";

	}
	catch (const out_of_range& ex) 
	{
		cerr << format("Se presento una excepción out_of_range: {}\n", ex.what());
	}
	catch (const runtime_error& ex)
	{
		cerr << format("Se presento una excepcion: {}\n", ex.what());
	}
	catch (const logic_error& ex)
	{
		cerr << format("Se presento una excepcion: {}\n", ex.what());
	}
	catch (const system_error& ex)
	{
		cerr << format("Se presento una excepcion: {}\n", ex.what());
	}
	catch (const exception& ex)
	{
		cerr << format("Se presento una excepcion: {}\n", ex.what());
	}
	catch (...) 
	{
		cerr << "Se presento una excepcion \n";
	}

    cout << "Ready\n";
}
