#pragma once

#include <array>
#include <string>
#include <vector>

constexpr std::array<const char, 12> vowels_array{'a', 'A', 'e', 'E', 'i', 'I', 'o', 'O', 'u', 'U', 'y', 'Y'};

void removeVowels(std::vector<std::string>& vec);
