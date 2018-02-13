#include "test.hpp"
#include "../movement.hpp"
#include "../astar.hpp"

#include <functional>
#include <unordered_map>

Metadata Test::meta()
{
    return {
        "#000000",
        "#FFFFFF",
        "http://www.edm2.com/images/thumb/1/13/C%2B%2B.png/250px-C%2B%2B.png",
        "C++ test",
        "Hi",
        "pixel",
        "pixel"
    };
}

Direction Test::move(World world)
{
    std::cout << "***1\n";
    std::unordered_map<std::string, std::string> tt;
    tt["asdf"] = "asdf";
    std::cout << tt["asdf"] << std::endl;

    GameState state(world);
    std::cout << "***2\n";
    auto directions = closestFood(state);
    std::cout << "***3\n";
    if (directions.possible)
    {
        std::cout << "***4\n";
        return directions.direction;
    }
    return Direction::Left;
}