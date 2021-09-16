#pragma once

#include <random>
#include <vector>

namespace evol{

class Rng{
public:
    Rng();

    std::vector<int> fetchUniform(int from, int to, size_t num);
private:
    std::random_device rd_;
    std::mt19937 gen_;
};

}

