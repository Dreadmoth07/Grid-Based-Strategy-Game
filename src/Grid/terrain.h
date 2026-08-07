#ifndef SRC_GRID_TERRAIN_H_
#define SRC_GRID_TERRAIN_H_

#include <SDL3/SDL.h>
#include <iostream>

class Terrain{
    protected:
        float traversability[3] = {0};  // Grounded, Coastal, Naval traversabilities respectively.

    public:
        Terrain();

        Terrain(float, float, float);

        float get_grounded_traversability();

        float get_coastal_traversability();

        float get_naval_traversability();

        void set_grounded_traversability(float);

        void set_coastal_traversability(float);

        void set_naval_traversability(float);

        void describe();

};

#endif