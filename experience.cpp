#include "experience.hpp"

int calculate_level_experience(int level) {
    assert(level >= 1);
    return (int) std::exp(level*std::log(3))-1;
}

int calculate_level(int experience) {
    assert(experience >= 0);
    return !experience? 1 : (int) std::ceil(std::log(experience+1)/std::log(3));
}