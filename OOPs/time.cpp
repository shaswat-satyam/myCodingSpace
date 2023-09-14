        #include <iostream>
        using namespace std;

        class Time{
        int hours;
        int minutes;
        int seconds;
        public:
        Time(int secs){
            seconds = secs;
            minutes = seconds / 60;
            seconds %= 60;
            hours = minutes / 60;
            minutes %= 60;
        }
        void display(){
            cout << "Time is " << hours << " Hours " << minutes << " Minutes and " << seconds << " seconds" << endl;
        }
        void add(Time t1){
            hours += t1.hours;
            minutes += t1.minutes;
            seconds += t1.seconds;
            if(seconds > 60){
            minutes += seconds / 60;
            seconds %= 60;
            }
            if(minutes > 60){
            hours += minutes / 60;
            minutes %= 60;
            }
        }
        };


        int main(){
        Time t1(167);
        cout << "First ";
        t1.display();
        Time t2(54);
        cout << "Second ";
        t2.display();
        t1.add(t2);
        cout << "Addition of two times i.e Third ";
        t1.display();
        return 0;
        }