#include "gridSquare.h"

Terrain GridSquare::get_terrain(){
    return terrain;
}

int GridSquare::get_x_position(){
    return xPos;
}
int GridSquare::get_y_position(){
    return yPos;
}

void GridSquare::set_terrain(Terrain newTerrain){
    terrain = newTerrain;
}

void GridSquare::set_x_position(int x){
    xPos = x;
}
void GridSquare::set_y_position(int y){
    yPos = y;
}