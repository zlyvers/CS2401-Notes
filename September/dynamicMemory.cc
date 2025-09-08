#include <iostream>

using namespace std;

int main(){
// Initializing Pointers
int* i;
// double* d;
// char* c;

int x = 5;
i = &x; // i now points to x

cout << i << endl; // prints address of x
cout << &i << endl; // prints address of i
cout << *i << endl; // prints value of x

// Dynamic Memory
i = new int; // allocates memory for an int and assigns address to i
*i = 13; // assigns 13 to the memory location pointed to by i
delete i; // frees the memory allocated for the int
}