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
std::vector<double> muscular(const std::vector<double>& ini, size_t n_muscles, size_t max_evals, size_t seed)
{
    std::vector<double> sol;
	std::vector<size_t> distribucion; // distribución de los músculos (donde empieza cada músculo)
	size_t ant = 0, actual;
    std::uniform_int_distribution<size_t> dis(1, ini.size()/n_muscles);
    std::mt19937 gen(seed);

    for (size_t i = 0; i < n_muscles-1; ++i) {
        actual = dis(gen) + ant;
        distribucion.push_back(actual);
        ant = actual;
    }

    return sol;
}

// Uso del algoritmo
int main() 
{
    muscular(std::vector<double>(15), 5, 10, time(NULL));
}