#include <iostream>
#include <iomanip>
#include <cstdlib>

using namespace std;

#ifndef NUMBERS_H
#define NUMBERS_H

class Numbers{
    public:
        static const int SIZE = 1000;
        Numbers () {used = 0;}

        void add_item(double i);
        double sum_all() const;

        void remove(double target);

    private:
        double data[SIZE];
        size_t used;
};

#endif