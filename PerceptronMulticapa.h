#include <vector>
#include <numeric>
#include <algorithm>
#include <random>
#include <time.h>
#include <cmath>

class Perceptron
{ 
    public:
        double ejecutar(std::vector<double> datos_de_entrada);
        void establecer_pesos(std::vector<double> pesos_iniciales);
        // funcion_de_activacion
        double sigmoide(double x);
        double bias;
};

class PerceptronMulticapa
{
    public:
};