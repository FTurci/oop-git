#ifndef PGCALCULATOR_H
#define PGCALCULATOR_H

class PolygonCalculator{
    public:

    PolygonCalculator();
    double sideLength;
    int numberOfSides;
    double area;

    
    void calculatePolygonArea();

    void request();
    void run();
    void print();

    
};

#endif // PGCALCULATOR_H