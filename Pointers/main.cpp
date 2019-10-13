#include <iostream>

using namespace std;

int main()
{
    // Pointers are used to tell the memory address of a variable
    int age=19;
    int *pAge= &age;
    double result=2.5;
    double *pResult= &result;
    string name="Mahesh";
    string *pName= &name;

    cout << pAge;

    return 0;
}
