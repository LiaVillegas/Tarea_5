#include <iostream>
#include <string>
#include "triangle.h"
#include "circle.h"
#include "square.h"

using namespace std;

int main()
{

     {
        double lado1=3;
        double lado2=3;
        double lado3=3;

       std::cout << "Triangle Perimeter is: " << std::endl;
       std::cout << triangle::compute_perimeter(lado1,lado2,lado3) << std::endl;
     }

    {
       const float PI=3.1416;
       double p = 5;
       float r= 2*PI;

       cout << "Circle Perimeter is: " << endl;
       cout << circle::compute_perimeter(p,r) << endl;
     }

    {
        double ladoc1=4;
        double ladoc2=4;
        double ladoc3=4;
        double ladoc4=4;

       cout << "Square Perimeter is: " << endl;
       cout << square::compute_perimeter(ladoc1,ladoc2,ladoc3, ladoc4) << endl;
     }
}
