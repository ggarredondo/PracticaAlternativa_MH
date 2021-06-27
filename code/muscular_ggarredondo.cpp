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
double muscular(std::vector<double>& ini, size_t max_fails, size_t max_evals, std::mt19937& gen)
{
    // obtención de la distribución de músculos
    std::vector<size_t> distribucion; // distribución de los músculos (indica dónde comienza cada músculo)
    distribucion.push_back(0); // el primer músculo siempre empieza en el 0
    size_t actual = 0, dim = ini.size();
    std::uniform_int_distribution<size_t> muscle_dis(1, dim*0.5); // un músculo será por lo menos de tamaño 1 y como máximo
                                                                        // la mitad del vector solución

    actual += muscle_dis(gen);
    while (actual < dim) {
        distribucion.push_back(actual);
        actual += muscle_dis(gen);
    }

    // minimización del fitness
    size_t n_muscles = distribucion.size();
    distribucion.push_back(dim); // se añade la dimensión al final para saber dónde termina el vector solución
    std::vector<double> mejor = ini, aux;
    double f_mejor = cec17_fitness(&mejor[0]), f_aux;
    std::uniform_real_distribution<double> dis(-100,100); // rango de valores del vector solución [-100, 100]
    for (size_t ev = 1; ev < max_evals;) {
        size_t index = rand()%n_muscles; // escoger un músculo aleatorio a entrenar
        for (size_t i = distribucion[index], fails = 0; ev < max_evals && fails < max_fails; i = (i+1)%distribucion[index+1]) {
            aux = mejor;
            aux[i] = dis(gen);
            f_aux = cec17_fitness(&aux[0]);
            ++ev;
            if (f_aux < f_mejor) {
                mejor = aux;
                f_mejor = f_aux;
            }
            else
                ++fails;
        }
    }
    ini = mejor;
    return f_mejor;
}

std::vector<double> generar_solucion_aleatoria(size_t dim, std::mt19937& gen) {
    std::vector<double> sol(dim);
    std::uniform_real_distribution<double> dis(-100,100);
    for (size_t i = 0; i < dim; ++i)
        sol[i] = dis(gen);
    return sol;
}


// Uso del algoritmo
int main() 
{
    size_t seed = time(NULL), dim = 10;
    std::mt19937 gen(seed);
    cec17_init("muscular", 2, dim);
    std::vector<double> sol = generar_solucion_aleatoria(dim, gen);
    std::cout << muscular(sol, 1000, 10000*dim, gen) << std::endl;
    std::cout << cec17_fitness(&sol[0]) << std::endl; //remove
}