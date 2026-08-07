#include "terrain.h"

Terrain::Terrain(){}

Terrain::Terrain(float groundTraversability, float coastalTraversability, float navalTraversability){
    traversability[0] = groundTraversability;
    traversability[1] = coastalTraversability;
    traversability[2] = navalTraversability;
}

float Terrain::get_grounded_traversability(){
    return this->traversability[0];
}
float Terrain::get_coastal_traversability(){
    return this->traversability[1];
}
float Terrain::get_naval_traversability(){
    return this->traversability[2];
}
void Terrain::set_grounded_traversability(float newValue){
    this->traversability[0] = newValue;
}
void Terrain::set_coastal_traversability(float newValue){
    this->traversability[1] = newValue;
}
void Terrain::set_naval_traversability(float newValue){
    this->traversability[2] = newValue;
}

void Terrain::describe(){
    std::cout << "grounded: " << this->get_grounded_traversability() << std::endl;
    std::cout << "coastal: " << this->get_coastal_traversability() << std::endl;
    std::cout << "naval: " << this->get_naval_traversability() << std::endl;
}