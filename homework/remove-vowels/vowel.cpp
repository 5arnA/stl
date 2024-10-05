
#include "vowel.hpp"

#include <algorithm>
#include <array>
#include <string>
#include <vector>

void removeVowels(std::vector<std::string>& vec) {
#pragma unroll
    for (auto& str_it : vec) {
        str_it.erase(std::remove_if(
                         str_it.begin(),
                         str_it.end(),
                         [&](char char_it) { return std::find(vowels_array.begin(), vowels_array.end(), char_it) != vowels_array.end(); }),
                     str_it.end());
    }
}
