#pragma once
#include <string>

using namespace std;

namespace Nutricion {

	enum class NivelIMC
	{
		Inferior, Normal, Superior, Obesidad
	};

	struct IMC {
		float Peso;
		float Estatura;
		NivelIMC Nivel;
		float Resultado;
		void Calcular();
		string NivelDescripcion();

	};
}