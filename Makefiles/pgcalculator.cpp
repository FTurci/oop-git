#include <iostream>
#include <cmath>
#include "pgcalculator.h"

PolygonCalculator::PolygonCalculator(){
    // empty constructor
}
void PolygonCalculator::calculatePolygonArea(){
         // implement the area of a regular polygon formula
        this->area =  (this->numberOfSides * std::pow(this->sideLength, 2)) / (4 * std::tan(M_PI / this->numberOfSides));
    
}
void PolygonCalculator::request(){
    std::cout << "Regular Polygon Calculator" << std::endl;
    std::cout << "----------------------------" << std::endl;
    std::cout << "Enter the number of sides: ";
    std::cin >> this->numberOfSides;

    std::cout << "Enter the side length: ";
    std::cin >> sideLength;

}
void PolygonCalculator::run(){
    request();
    calculatePolygonArea();

}
void PolygonCalculator:: print(){
    std::cout << "\nResults" << std::endl;
    std::cout << "----------------------------" << std::endl;
    std::cout << "Number of Sides: " << numberOfSides << std::endl;
    std::cout << "Side Length: " << sideLength << std::endl;
    std::cout << "Area: "<< area << std::endl;
}
