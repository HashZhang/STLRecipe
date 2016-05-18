#include "Bclass.h"
Bclass::Bclass()
{

}

Bclass::~Bclass()
{
    //dtor
}
int Bclass::count1 = 0;
int Bclass::count2 = 0;

int Bclass::getCount1(){
    return count1;
}

int Bclass::getCount2(){
    return count2;
}
