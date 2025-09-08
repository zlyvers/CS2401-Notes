#include <iostream>
#include <iomanip>
#include <cstdlib>
#include "numbers.h"

using namespace std;

void Numbers::add_item(double i){
    if (used < SIZE){
        data[used] = i;
        used++;
    }
    else{
        cout << "Array is full" << endl;
    }
}

double Numbers::sum_all() const{
    double sum = 0;
    for (size_t i = 0; i < used; i++){
        sum += data[i];
    }
    return sum;
}

void Numbers::remove(double target){
    for (size_t i = 0; i < used; i++){
        if (data[i] == target){
            data[i] = data[used - 1];
            used--;
            i--;
        }
    }
}
