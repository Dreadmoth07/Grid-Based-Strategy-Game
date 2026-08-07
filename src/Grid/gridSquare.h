#ifndef SRC_GRID_GRIDSQUARE_H_
#define SRC_GRID_GRIDSQUARE_H_

#include <SDL3/SDL.h>
#include <iostream>

#include "terrain.h"

class GridSquare{
    protected:
    Terrain terrain;
    int xPos;
    int yPos;

    public:
    Terrain get_terrain();

    int get_x_position();
    int get_y_position();

    void set_terrain(Terrain);

    void set_x_position(int);
    void set_y_position(int);
};

#endif