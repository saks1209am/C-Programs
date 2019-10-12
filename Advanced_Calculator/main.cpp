#include <iostream>

using namespace std;

int main()
{
    char op;
    int num1,num2;


    cout <<"Enter first number:" ;
    cin >> num1;
    cout <<"Enter operator:";
    cin >> op;
    cout <<"Enter second number:" ;
    cin >> num2;
    int result;

    if (op=='+'){
       result=num1+num2;

    }
     else if (op=='-'){
        result = num1-num2;
    }
    else if (op=='*'){
        result=num1*num2;
    }
    else if (op=='/'){
        result=num1/num2;
    }
    else{
        cout <<"Invalid operator";
    }

    cout << result;
    return 0;
}
