#include <iostream>
#include <string>
#include <format>
#include "CalendarPeriod.h"

using namespace std;

struct FullName
{
    //Por defecto todo es publico
private:
   
public:
    string FirstName;
    string LastName;

};

struct FullNameC
{
    //Por defecto todo es privado
private:
    
public:
    string FirstName;
    string LastName;

};

using namespace CPPCompany::Billing;

int main()
{
    FullName f1{};
    f1.FirstName = "Juan";
    f1.LastName = "Perez";

    FullNameC f2{};
    f2.FirstName = "Juan";
    f2.LastName = "Perez";

    CalendarPeriod p{ 2023, Months::January };
    cout << format("\n{}\n", p.ToString());

    for (size_t i = 0; i < 10; i++)
    {
        p.Next();
        cout << format("\n{}\n", p.ToString());
    }

    cout << "READY!\n";
}
