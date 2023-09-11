#include <stdio.h>
#include <iostream
using namespace std;


int main(){
    float netsalary, salary, allowanceP, deductionP;
    cout << "Enter the basic salary, allowance Percentage and Deduction Percentage";
    cin >> salary>> allowanceP >> deductionP;
    netsalary = (float) (salary + (allowanceP * salary) - (deductionP * salary));
    cout << "The Net salary is :" << netsalary << endl;
    return 0;
}