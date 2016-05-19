#include <iostream>
#include "Calculator.h"
#include <list>
#include <Bclass.h>

/*#define PASTE(n) "paste "#n

#define MAX 1000*/

using namespace std;

/*void power3(double *p){
    *p = (*p)*(*p)*(*p);
}*/

extern int CalculatorNumber;

int main(){
    /*Calculator* calculator = new Calculator();
    calculator->Setparameter1(1.9);
    calculator->Setparameter2(2.9);

    cout << calculator->add() << endl;
    delete calculator;*/

    /*Calculator calculator;
    calculator.Setparameter1(1.9);
    calculator.Setparameter2(2.9);

    cout << calculator.add() << endl;*/
    /*People *people = new People();
    List<PERSON> peopleList = people->GetPERSONList();
    */
    /*double a = 2.0;
    power3(&a);
    cout << a;*/

    /*cout << CalculatorNumber;
    */
    /*printf("%s",PASTE("asd"));*/

    /*#if MAX>100
        printf("%d",MAX);
    #else
        printf("not recognized!");
    #endif // MAX

    #ifdef MAX
        printf("%d",MAX);
    #endif // MAX

    #ifndef MAX111
        printf("%d",MAX);
    #endif // MAX*/

    /*int count = 5;
    int cur_num = 0;
    list<int> numlist;
    while(count){
        cin >> cur_num;
        numlist.push_back(cur_num);
        count --;
    }
    list<int> :: iterator iter;

    for(iter = numlist.begin(); iter != numlist.end(); iter++ )
    {
        cout << *iter << "|";
    }
    return 0;*/
    /*Bclass class1;
    class1.count1++;
    cout << class1.count1 << endl ;
    cout << Bclass::count1;*/

    /*Calculator *p(new Calculator());
    p->Setparameter1(2.0);
    p->Setparameter2(3.0);
    cout << p->add();
    delete p;*/

    auto_ptr <Calculator> calAutoPtr(new Calculator());
    Calculator *calculator1 = calAutoPtr.get();
    calculator1->Setparameter1(2.0);
    calculator1->Setparameter2(3.0);
    cout << calculator1->add() << endl;

    calculator1 = calAutoPtr.release();
    delete calculator1;
    cout << "release 之后，不再保存对应指针" << endl;

    calAutoPtr.reset(new Calculator());
    calAutoPtr.reset(new Calculator());
    cout << "reset 之后，对应指针被干掉" << endl;
}
/*#undef PASTE*/
