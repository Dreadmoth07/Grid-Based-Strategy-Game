#include "gridSquare.h"

int main(int argc, char const *argv[]){
    GridSquare squ;
    squ.set_terrain(Terrain(1.0,0.0,0.0));

    squ.get_terrain().describe();
}
