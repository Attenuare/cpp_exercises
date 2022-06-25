#include <iostream>
#include <locale.h>
#include <math.h>

using namespace std;
float circle_volume(float radius) {
	return ((4 * 3.14)* (pow(radius, 3)))/3;
}

int main(){
	setlocale(LC_ALL, "Portuguese");
	float radius;
	wcout << "Entre com o valor do raio da esfera: ";
	cin >> radius;
	wcout << "O Volume da esfera de raio " << radius << L" é igual a " << circle_volume(radius) << "!";
	return 0;
}