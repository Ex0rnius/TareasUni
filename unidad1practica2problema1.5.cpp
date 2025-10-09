#include "iostream"
using namespace std;
int main()
{
	float RADIO, ALTURA, VOLUMEN, AREA;
	const float PI=3.141592;
	
	//Entrada de datos
	cout << "Escribe la medida del radio: " << "\n";
	cin >> RADIO;
	
	cout << "Escribe la medida de la altura: " << "\n";
	cin >> ALTURA;
	
	//Calculo
	VOLUMEN= PI*(RADIO*RADIO)*ALTURA;
	AREA=2*PI*RADIO*ALTURA;
	
	//Resultados
	cout << "El volumen del cilindro es: " <<VOLUMEN<< "\n";
	cout << "El area del cilindro es: " <<AREA<< "\n";
	return 0;
}
