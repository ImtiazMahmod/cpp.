

#include<iostream>
using namespace std;

main()
{
  //Biggest & smallest number

  int x,y,z;

  cout<< "Enter three numbers : ";
  cin>> x>> y>> z;

    if(x>y && x>z){
        cout<< "X is Biggest.";
    }
    else if (y>x && y>z){
        cout<< "Y is Biggest.";
    }
    else {
        cout<< "Z is Biggest.";
    }

    return 0;
}
