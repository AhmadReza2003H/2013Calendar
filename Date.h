#ifndef _DATE_H_
#define _DATE_H_
#include "maps.h"
class Date{
    public:
        Date(int day , int mounth);
        Date(int dayOfYear);
        int getDay() const;
        int getMounth() const;
        int getDayOfYear() const;
        int getRemainDays() const;
        Date setDate(int day , int mounth) const;
        Date plusDay(int day) const;
        Date minusDay(int day) const;
        void print() const;
    private:
        int day;
        int dayOfYear;
        int mounth;
        int remainDays;
        void calculateDate();
};

#endif