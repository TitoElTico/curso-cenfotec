#include <iostream>
# include <format>

//#define PI 3.14159265358979323846264338328
//const double PI{ 3.14159265358979323846264338328 };
constexpr double PI{ 3.14159265358979323846264338328 };

#define MULTIME(a) a * a;


using namespace std;

constexpr double MultiMe(double n)
{
    double result{};

    result = n * n;

    return result;
}


int main()
{
    double radius{}, area{};

    std::cout << "enter the radius of the circle: ";
    std::cin >> radius;

    area = PI * MultiMe(radius);

  cout << format("the area of the circle is: {:.2f} \n", area);

  double prueba{ MultiMe(2) };

	cout << "ready! \n";
}