//#include <iostream>
//#include <format>
//#include <string>
//#include <limits>
//
//using namespace std;
//
//int main()
//{
//    short a{};
//    unsigned short b{};
//    int c{};
//    long long int d{};
//
//    //Format strings (fmt)
//
//    unsigned short n{ 7 };
//
//    n = n + 1;
//    n += 1;
//    n++;
//
//    //n = ~n;
//    n = n << 1 ;
//
//    cout << format("The value is: {}\n", n);
//    cout << format("The value size is: {} bits\n", sizeof(n) * 8);
//    cout << format("The value as bits as: {:#b}\n", n);
//    cout << format("The value as bits as: {0:#b} - {0:b}\n", n);
//    
//    string typeName{ typeid(n).name() };
//    int maxValue{ numeric_limits <unsigned short> ::max() };
//    int minValue{ numeric_limits <unsigned short> ::min() };
//
//    string output{};
//    output = format("The value type is:{0},\n \tmax: {1} \n \tmin {2}\n",
//        typeName, maxValue, minValue);
//        cout << output;
//
//
//   cout << "READY!\n";
//}


#include <iostream>
#include <format>
#include <string>
#include <limits>

using namespace std;

int main()
{
    short a{};
    unsigned short b{};
    int c{};
    long long int d{};

    //Format strings (fmt)

    float m{ 11 };
    cout << format("The value is: {:f}\n", m);
    cout << format("The value is: {:.2f}\n", m);
    
    char char1{ 'A' };
    wchar_t char2{ 'B' };

   cout << "READY!\n";
}
