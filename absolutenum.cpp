#include<iostream>
#include<conio.h>
using namespace std;

main()
{
    //absolute number

    int num;
    cout<< " Enter a number :";
    cin >> num;

    if (num<0){
        cout<< (-num);
    }
    else {
        cout<< num;
    }

    return 0;
}


