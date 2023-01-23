#include <stdio.h>
#include <iostream>
#include <string>

using namespace std;

class employee{
    private:
        string name;
        int eid;
    public:
        employee(int e, string n)
        {
            eid = e;
            name = n;
        };
        string getName(){
            return name;
            };
        int getEmployeeid(){
            return eid;
            };
};

class fulltimeEmployee: public employee{
    int salary;
    public:
        fulltimeEmployee(int e, string n, int s):employee(e,n)
        {
            salary = s;
        };
        int getSalary()
        {
            return salary;
        };
};

class partTimeEmployee: public employee{
    int dailyWage;
    public:
        partTimeEmployee(int e, string n, int w):employee(e,n)
        {
            dailyWage = w;
        };
        int getWage()
        {
            return dailyWage;
        };
};


int main(){
    employee n1(1,"Rando");
    cout << n1.getEmployeeid()<< "\t" << n1.getName() << endl;

    fulltimeEmployee n2(2,"SpiderMan",3500);
    cout << n2.getEmployeeid() << "\t"<<  n2.getName() << "\t" << n2.getSalary() << endl;

    partTimeEmployee n3(3,"AntMan",200);
    cout << n3.getEmployeeid() << "\t"<< n3.getName() << "\t" << n3.getWage() << endl;
}