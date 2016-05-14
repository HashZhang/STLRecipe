#ifndef PEOPLE_H
#define PEOPLE_H


class People
{
    public:
        People();
        virtual ~People();
        struct PERSON{
            int id,sex;
            double core;
            void clear(){
                id = 0;
                sex = 0;
                core = 0;
            }
        };
    protected:
    private:
        list <PERSON> PERSONList;
};

#endif // PEOPLE_H
