#include<iostream>
using namespace std;

main()
{
    //Area of triangle= 1/2 * base * height

    double base,height,area;
    cout<< "Input base:";
    cin>> base;

    cout<< "Input height:";
    cin>>height;

 area = (float)1/2 * base* height;
    cout<< "Area of triangle: "<<area;


    return 0;
}
