#include<iostream>
#include "mathlibrary.h"
using namespace std;
int main() {
    int x=10,y=23;
    cout<<"the addition of two numbers: "<<mathlibrary::add(x,y)<<endl;
    cout<<"the product of two numbers: "<<mathlibrary::mul(x,y)<<endl;
    return 0;
}