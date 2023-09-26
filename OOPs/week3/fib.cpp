#include <iostream>
using namespace std;

class fib{
    public:
        int val;
        
    fib(){
        val = 0;
    }
    
    fib(fib &obj){
        cout << "Calling a copy constructor" << endl;
        val = obj.val;
    }
    
    int value(int n){
        if(n == 0){
            return 0;
        }
        else if(n == 1){
            return 1;
        }
        return value(n-1) + value(n-2);
    }
    
    void setValue(int n){
        val = value(n);
    }
    
};

int main()
{   
    int idx;
    cout << "Enter the fibonnaci value:";
    cin >> idx;
    fib f1;
    f1.setValue(idx);
    cout << f1.val << endl;
    
    
    fib f2 = f1;
    cout << "The value in the second object is " << f2.val << endl;
    return 0;
}

