//
// Created by Suren on 05/12/2023.
//

#ifndef EXAMEN_TEMA_3_VARIANT_H
#define EXAMEN_TEMA_3_VARIANT_H
#pragma once

#include <iostream>
#include <variant>

class Variant {
public:
    std::variant<int, std::string> value;

    Variant();
    Variant(int intValue);
    Variant(const std::string& stringValue);
};

std::ostream& operator<<(std::ostream& os, const Variant& variant);
#endif //EXAMEN_TEMA_3_VARIANT_H
