//  The Binary (main program)

#include<iostream>
#include"mathutils.h"
using namespace std;

int main(){
    int x = 5,y = 3;
    cout<<"Add :" << add(x,y) << endl;
    cout<<"Subtract :" << subtract(x,y) << endl;
    cout<<"Multiply :" << multiply(x,y) << endl;
    return 0;
}