
#include "Environment.h"

Environment::Environment() = default;

void Environment::insert(const std::string& symbol, const Variant& value) {
    if (symbolTable.find(symbol) !=symbolTable.end()){
        throw std::runtime_error("El simbolo ya existe en el entorno");
    }
    symbolTable[symbol] = value;
}

Variant Environment::lookup(const std::string& symbol) const {
    auto it = symbolTable.find(symbol);
    if (it != symbolTable.end()) {
        return it->second;
    } else {
        throw std::runtime_error("El simbolo no existe en el entorno");
    }
}

void Environment::remove(const std::string& symbol) {
    auto it = symbolTable.find(symbol);
    if (it != symbolTable.end()) {
        symbolTable.erase(it);
    } else {
        throw std::runtime_error("No se puede eliminar. El simbolo no existe en el entorno");
    }
}

bool Environment::exists(const std::string& symbol) const {
    return symbolTable.find(symbol) != symbolTable.end();
}

size_t Environment::size() const {
    return symbolTable.size();
}

bool Environment::empty() const {
    return symbolTable.empty();
}