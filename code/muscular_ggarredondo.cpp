extern "C" {
#include "cec17.h"
}
#include <iostream>
#include <vector>
#include <random>

template <class T> // Debug function - to be removed
void printv(std::vector<T> v) {
	for (auto i = v.begin(); i != v.end(); ++i)
		std::cout << *i << " ";
}

// Implementación del algoritmo muscular
std::vector<double> muscular(const std::vector<double>& ini, size_t max_evals, size_t seed)
{
    std::vector<double> sol;
	std::vector<size_t> distribucion; // distribución de los músculos (indica dónde comienza cada músculo)
	size_t actual = 0, size = ini.size();
    std::uniform_int_distribution<size_t> dis(1, size*0.5); // un músculo será por lo menos de tamaño 1 y como máximo
    std::mt19937 gen(seed);                                       // la mitad del vector solución

    // obtención de la distribución de músculos
    actual += dis(gen);
    while (actual < size) {
        distribucion.push_back(actual);
        actual += dis(gen);
    }

    return sol;
}

// Uso del algoritmo
int main() 
{
    muscular(std::vector<double>(15), 10, time(NULL));
}