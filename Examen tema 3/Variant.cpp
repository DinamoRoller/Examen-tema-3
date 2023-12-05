#include "Variant.h"

Variant::Variant() : value(0){}

Variant::Variant(int intValue) : value(intValue) {}

Variant::Variant(const std::string& stringValue) : value(stringValue) {}

std::ostream& operator<<(std::ostream& os, const Variant& variant) {
    std::visit([&os](auto&& arg){ os << arg; }, variant.value);
    return os;
}