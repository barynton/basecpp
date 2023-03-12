#pragma once

#include <cstdint>
#include <ctime>
#include <functional>
#include <random>
#include <vector>

namespace utils {

std::vector<int64_t> generate(int64_t number)
{
    std::vector<int64_t> result;
    std::mt19937_64 generator(std::time(nullptr));
    std::generate_n(std::back_inserter(result), number, std::ref(generator));

    return result;
}

}