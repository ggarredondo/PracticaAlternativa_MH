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
    // obtención de la distribución de músculos
    std::vector<size_t> distribucion; // distribución de los músculos (indica dónde comienza cada músculo)
    distribucion.push_back(0); // el primer músculo siempre empieza en el 0
    size_t actual = 0, size = ini.size();
    std::uniform_int_distribution<size_t> muscle_dis(1, size*0.5); // un músculo será por lo menos de tamaño 1 y como máximo
    std::mt19937 gen(seed);                                              // la mitad del vector solución

    actual += muscle_dis(gen);
    while (actual < size) {
        distribucion.push_back(actual);
        actual += muscle_dis(gen);
    }

    // minimización del fitness
    std::vector<double> sol = ini;
    std::uniform_real_distribution<double> dis(-100,100); // rango de valores del vector solución [-100, 100]
    for (size_t ev = 0; ev < max_evals;) {
        size_t index = rand()%distribucion.size(); // escoger un músculo aleatorio a entrenar
        
    }

    return sol;
}


// Uso del algoritmo
int main() 
{
    muscular(std::vector<double>(15), 10, time(NULL));
}