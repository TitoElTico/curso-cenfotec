#include <iostream>
#include <format>
#include <cmath>

using namespace std;

int main()
{
    cout << "Calculo del IMC(Indice de masa corporal)\n";

    while (true)
    {
        // IMC = peso (kg)/ [estatura (m)]^2
        float peso{}, estatura{}, imc{};


        cout << "\n Digite su peso en Kg: ";
        cin >> peso;

            if (peso == 0)
            {
            break;
            }
        cout << "\n Digite su estura en m: ";
        cin >> estatura;

        imc = peso / pow(estatura, 2);

        cout << format("Su IMC es {:.2f}, el cual se obtiene de = {}/{}^2 \n",
            imc, peso, estatura);

        // 0 = Peso inferior al normal	Menos de 18.5
        // 1 = Normal	18.5 – 24.9
        // 2 = Peso superior al normal	25.0 – 29.9
        // 3 = Obesidad	Más de 30.0

        short nivelIMC{ 0 };

        //bool esInferior {imc < 18.5};
        //if (esInferior)

        if (imc < 18.5)
        {
            nivelIMC = 0;
        }
        else if (18.5 <= imc && imc <= 24.9)
        {
            nivelIMC = 1;
        }
        else if (25.0 <= imc && imc <= 29.9)
        {
            nivelIMC = 2;
        }
        else
        {
            nivelIMC = 3;
        }

        cout << format("Su nivel de IMC es = {} \n", nivelIMC);
    }
    cout << "\n Ready! \n";
}

