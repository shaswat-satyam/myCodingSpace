    #include <iostream>
    using namespace std;

    class fib{

        public:
        int idx;
        int val;
            
        fib(int n){
            idx = n;
            val = value(n);
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
            idx = n;
            val = value(n);
        }
        
        void operator++(int){
            idx += 1;
            val = value(idx);
        }
    };

    int main(){
        int idx;
        cout << "Enter the index in fibonacci sequence : ";
        cin >> idx;
        fib f1(idx);
        cout << "The value of the number at "<< f1.idx << " is " << f1.val << endl;
        f1++;
        cout << "The value of the number after unary addition at index "<< f1.idx << " is " << f1.val << endl;

    }