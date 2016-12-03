#include "levelable_interface.hpp"

int levelable_interface::level() const {
    return calculate_level(experience());
}