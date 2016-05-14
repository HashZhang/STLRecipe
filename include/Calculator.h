#ifndef CALCULATOR_H
#define CALCULATOR_H


class Calculator
{
    public:
        Calculator();
        virtual ~Calculator();
        double Getparameter1() { return parameter1; }
        void Setparameter1(double val) { parameter1 = val; }
        double Getparameter2() { return parameter2; }
        void Setparameter2(double val) { parameter2 = val; }
        double add();
    protected:
    private:
        double parameter1;
        double parameter2;
};

#endif // CALCULATOR_H
