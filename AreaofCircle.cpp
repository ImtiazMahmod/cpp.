#include<iostream>
using namespace std;

main()
{
    //Area of circle = pi * radius * radius

    double pi=3.1416, radius, area;
    cout<< "Input radius :  ";
    cin>> radius;

    area= pi* radius* radius;
    cout<< " Area of Circle : "<< area;

    return 0;
}
