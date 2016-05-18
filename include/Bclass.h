#ifndef BCLASS_H
#define BCLASS_H

class Bclass
{
    public:
        Bclass();
        virtual ~Bclass();
        static int count1;
        static int count2;
        int getCount1();
        static int getCount2();
    protected:
    private:
};

#endif // BCLASS_H
