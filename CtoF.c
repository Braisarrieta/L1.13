#include <stdio.h>
#include <string.h>
#include <stdlib.h>
double celsius_to_fahrenheit(double celsius) {
	return (celsius * 9 / 5) + 32;
}

double fahrenheit_to_celsius(double fahrenheit) {
	return (fahrenheit - 32) * 5 / 9;
}

int main() {
	double temperature;
	char unit;
	printf("Ingrese la temperatura: ");
	scanf("%lf", &temperature);
	getchar();
	
	printf("Ingrese la unidad (C/F): ");
	scanf("%c", &unit);
	
	double converted_temperature;
	if (unit == 'C' || unit == 'c') {
		converted_temperature = celsius_to_fahrenheit(temperature);
		printf("%.2lf grados Celsius equivale a %.2lf grados Fahrenheit.\n", temperature, converted_temperature);
	} else if (unit == 'F' || unit == 'f') {
		converted_temperature = fahrenheit_to_celsius(temperature);
		printf("%.2lf grados Fahrenheit equivale a %.2lf grados Celsius.\n", temperature, converted_temperature);
	} else {
		printf("Unidad no válida. Debe ingresar 'C' o 'F'.\n");
	}
}
