#include "Rng.h"

namespace evol{

Rng::Rng()
    : rd_()
    , gen_(rd_())
{} 

std::vector<int> Rng::fetchUniform(int from, int to, size_t num)
{
    std::uniform_int_distribution dist{from, to};
    std::vector<int> ret;
    for(size_t i = 0; i < num; ++i)
        ret.push_back(dist(gen_));
    return ret;
}

}

