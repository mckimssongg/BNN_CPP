
# BNN_CPP

Este proyecto implementa una red neuronal básica en C++ utilizando perceptrones multicapa.

## Archivos

- `RRNN.cpp`: Contiene el código principal que configura y ejecuta la red neuronal.
- `PerceptronMulticapa.h`: Define las clases `Perceptron` y `PerceptronMulticapa`.
- `PerceptronMulticapa.cpp`: Implementa los métodos de las clases `Perceptron` y `PerceptronMulticapa`.

## Uso

Para compilar y ejecutar el proyecto, use los siguientes comandos:

```sh
g++ RRNN.cpp PerceptronMulticapa.cpp -o BNN_CPP
./BNN_CPP
```

## Descripción

El programa configura una red neuronal con una capa de entrada de 3 neuronas, una capa oculta de 5 neuronas y una capa de salida de 1 neurona. Luego, alimenta la red con datos de un paciente (edad, nivel de colesterol, presión arterial) y evalúa el riesgo de enfermedad basado en la salida de la red.

## Contribuciones

Las contribuciones son bienvenidas. Por favor, abra un issue o un pull request para discutir cualquier cambio que desee realizar.
