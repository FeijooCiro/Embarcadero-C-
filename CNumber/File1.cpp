#include <iostream>
#include <tchar.h>

class CNumber {
private:
    int num1;
    int num2;
    int num3;

public:
    // Constructor
    CNumber(int n1, int n2, int n3) : num1(n1), num2(n2), num3(n3) {}

    // Obtener el máximo de los 3 números
    int getMax() {
        int max = num1;
        if (num2 > max)
            max = num2;
        if (num3 > max)
            max = num3;
        return max;
    }

    // Obtener el mínimo de los 3 números
    int getMin() {
        int min = num1;
        if (num2 < min)
            min = num2;
        if (num3 < min)
            min = num3;
        return min;
    }

    // Calcular el promedio de los 3 números
    double getAverage() {
        return (num1 + num2 + num3) / 3.0;
    }

    // Contar la cantidad de elementos pares
    int countEven() {
        int count = 0;
        if (num1 % 2 == 0)
            count++;
        if (num2 % 2 == 0)
            count++;
        if (num3 % 2 == 0)
            count++;
        return count;
    }

    // Contar la cantidad de elementos impares
    int countOdd() {
        int count = 0;
        if (num1 % 2 != 0)
            count++;
        if (num2 % 2 != 0)
            count++;
        if (num3 % 2 != 0)
            count++;
        return count;
    }
};

int _tmain(int argc, _TCHAR* argv[])
{
	int num1, num2, num3;
    std::cout << "Ingrese tres números separados por espacios: ";
    std::cin >> num1 >> num2 >> num3;

	CNumber number(num1, num2, num3);

    std::cout << "Máximo: " << number.getMax() << std::endl;
    std::cout << "Mínimo: " << number.getMin() << std::endl;
    std::cout << "Promedio: " << number.getAverage() << std::endl;
    std::cout << "Cantidad de números pares: " << number.countEven() << std::endl;
	std::cout << "Cantidad de números impares: " << number.countOdd() << std::endl;

	return 0;
}
