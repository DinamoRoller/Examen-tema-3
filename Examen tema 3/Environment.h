//
// Created by Suren on 05/12/2023.
//

#ifndef EXAMEN_TEMA_3_ENVIRONMENT_H
#define EXAMEN_TEMA_3_ENVIRONMENT_H
#pragma once

#include "Variant.h"
#include <map>
#include <stdexcept>


class Environment {
private:
    std::map<std::string, Variant> symbolTable;

public:
    Environment();

    void insert(const std::string& symbol, const Variant& value);
    Variant lookup(const std::string& symbol) const;
    void remove(const std::string& symbol);
    bool exists(const std::string& symbol) const;

    size_t size() const;
    bool empty() const;
};


#endif //EXAMEN_TEMA_3_ENVIRONMENT_H
