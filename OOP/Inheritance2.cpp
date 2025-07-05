#include <iostream>

class Shape
{
    public:
        double area;
        double volume;
};
class Cube : public Shape
{
    public:
        double side;
    Cube(double side)
    {
        this-> side = side;
        this-> area = 6 * side * side;
        this-> volume = side * side * side;
    }
};
class Sphere : public Shape
{
    public:
        double radius;
    Sphere(double radius)
    {
        this-> radius = radius;
        this-> area = 4 * 3.14149 * (radius * radius);
        this-> volume = (4 / 3.0) * 3.14149 * (radius * radius * radius);
    }
};

int main()
{
    Cube cube(10);
    Sphere sphere(5);

    std::cout<<"Area of cube: "<< cube.area << "cm^2"<< std::endl;
    std::cout<<"Volume of cube: "<< cube.volume << "cm^3"<< std::endl;
    
    std::cout<<"Area of sphere: "<< sphere.area << "cm^2"<< std::endl;
    std::cout<<"Volume of sphere: "<< sphere.volume << "cm^3"<< std::endl;

    return 0;
}