#include "terrain.h"

int main(int argc, char const *argv[]){
    Terrain terr = Terrain(1,0,1);
    terr.set_coastal_traversability(1.4);
    terr.describe();
    return 0;
}
