#include "utils.h"

#include <algorithm>
#include <iostream>
#include <iterator>

int main() {
    auto numbers = utils::generate(10);

    std::ranges::copy(numbers, std::ostream_iterator<int64_t>(std::cout, " "));
}