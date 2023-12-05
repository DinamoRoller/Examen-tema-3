https://github.com/DinamoRoller/Examen-tema-3.git
# Examen-tema-3

# Ejercicios tipo test

1.B

2.A

3.B

4.C

# Codigo

El codigo cumple en un principio todos los requisitos pedidos en el enunciado del ejercicio.

--La estructura basica se realiza en la clase Environment, incluyendo el std::map

--Se insertan simbolos en el archivo main.cpp que muestran la vida del jugador y su posicion 

--La busqueda de simbolos se incluye en el main.cpp

--La gestion de errores se ha implementado con los ejemplos anteriores

--La clase Variant trabaja en conjunto con la clase Environment para proporcionar un entorno de ejecucion de scripts. Se usa para almacenar y manipular datos de diferentes tipos de entornos de scripting. Esto facilita la personalizacion y modificacion dinamica del comportamiento del juego mediante scripts.

--El apartado de Expandiendo Funcionalidades de incluye en el archivo Environment.cpp y se verifica al compilar el programa.

--Casos de uso: incluido en el main.cpp y se muestra su funcionalidad al compilar el programa.

--En cuanto a la reflexion y las mejoras, se podrian mejorar o incluir las siguientes:

Optimizacion de busqueda: si la tabla de simbolos se vuelve muy grande, se podrian considerar estructuras de datos mas eficientes, como por ejemplo "unordered_map".

Expansion de funcionalidades: Agregar capacidades avanzadas de scripting, como funciones definidas por el usuario, manejo de eventos, etc.

Manejo de tipos dinamicos: Se podria permitir que los scripts trabajen on tipos dinamicos sin necesidad de una clase "Variant"

Seguridad: Se podria implementra algun que otro mecanismo de seguridad para evitar la ejecucion de scripts maliciosos


