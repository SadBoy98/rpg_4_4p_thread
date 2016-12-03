#include "fightable_interface.hpp"

fightable_interface::attribute_type::attribute_type(int base_value, int coefficient):
    base_value(base_value),
    coefficient(coefficient)
{}

int fightable_interface::attribute_type::operator()(int level) const {
    return base_value + coefficient * level;
}

int fightable_interface::attribute_value(attribute_type const &attr) const {
    return attr(level());
}

std::experimental::optional<fightable_interface::attribute_type> fightable_interface::attribute(std::string const &name) const {
    if(attributes().count(name))
        return attributes().at(name);
    return {};
}

bool fightable_interface::beats(fightable_interface const &rhs) const {
    return overall_power() > rhs.overall_power();
}