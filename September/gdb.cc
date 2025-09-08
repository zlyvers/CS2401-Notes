#include <iostream>
using namespace std;

// g++ -g gdb.cc
// gdb ./a.out
// r - run
// b function_name - set breakpoint
// b linenumber - set breakpoint at line number
// q - quit
// n - next line
// s - step into function
// c - continue until next breakpoint
// p variable_name - print variable value
// where - show current function call stack
// info locals - show local variables in current function

int main(){
    int sum = 0;
    int n;
    int count = 0;

    cout << "Enter a number to be averaged or negative number to quit" << endl;
    cin >> n;

    while (n >= 0){
        sum += n;
        count++;
        cin >> n;
    }  

    cout << "The average is " << (sum/count) << endl;

    return 0;
}