#include "Terrain.h"

class Terrain{
    protected:
        float traversability[3] = {0};  // Grounded, Coastal, Naval traversabilities respectively.

    public:
        float get_grounded_traversability(){
            return traversability[0];
        }
        float get_coastal_traversability(){
            return traversability[1];
        }
        float get_naval_traversability(){
            return traversability[2];
        }
        void set_grounded_traversability(float newValue){
            traversability[0] = newValue;
        }
        void set_coastal_traversability(float newValue){
            traversability[1] = newValue;
        }
        void set_naval_traversability(float newValue){
            traversability[2] = newValue;
        }

        void describe(){
            std::cout << "grounded: " << get_grounded_traversability() << std::endl;
            std::cout << "coastal: " << get_naval_traversability() << std::endl;
            std::cout << "naval: " << get_naval_traversability() << std::endl;
        }

};
