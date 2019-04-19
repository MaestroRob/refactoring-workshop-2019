#pragma once

namespace Snake
{
using Coordinate = std::pair<int,int>;

struct Position
{
    int x;
    int y;

    bool operator==(Position const& rhs) const { return x == rhs.x and y == rhs.y; }
};

} // namespace Snake
