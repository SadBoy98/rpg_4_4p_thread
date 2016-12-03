#include "character.hpp"

character::character(attributes_map_type const &attrs, int experience):
    attributes_(attrs),
    experience_(experience)
{}

int character::health() const {
    return attribute_value(attribute("health").value_or(attribute_type{}));
}

int character::experience() const
{ return experience_; }

character::attributes_map_type const &character::attributes() const{
    return attributes_;
}

int character::overall_power() const {
    auto sum = std::accumulate(std::begin(attributes()), std::end(attributes()), 0, [this](auto acc, auto &&pair) {
        return acc + this->attribute_value(pair.second);
    });
    auto h = health();
    return h *(sum - h);
}