
#include <iostream>
#include "Environment.h"

int main() {
    Environment env;

    try {
        env.insert("vida_jugador", Variant(100));
        env.insert("posicion_jugador", Variant("0,0"));

        Variant health = env.lookup("vida_jugador");
        std::cout << "Vida Jugador: " << health << std::endl;

        if (env.exists("vida_enemigo")) {
            Variant enemyHealth = env.lookup("vida_enemigo");
            std::cout << "Vida Enemigo: " << enemyHealth << std::endl; // esto no se imprime
        } else {
            std::cout << "Vida enemigo no encontrada" << std::endl;
        }

        env.remove("vida_jugador");

        std::cout << "Cantidad de simbolos en el entorno: " << env.size() << std::endl;

        if (env.empty()) {
            std::cout << "El entorno esta vacio" << std::endl;
        } else {
            std::cout << "El entorno no esta vacio" << std::endl;
        }
    } catch (const std::runtime_error& e) {
        std::cerr << "Error: " << e.what() << std::endl;
    }

    return 0;
}