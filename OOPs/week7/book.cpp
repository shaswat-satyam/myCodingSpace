#include <iostream>
using namespace std;

class first{
    public:
        int num;
        string name;
        void setdata(){
            cout << "Enter the book number : ";
            cin >> num;
            cout << "Enter the Book Name :";
            cin >> name;
        }
        void getdata(){
            cout << "The Book(id = "<< num << "has a name" << name;
        }
};

class second{
    public:
        string author;
        string publisher;
        void setdata(){
            cout << "Enter the author name : ";
            cin >> author;
            cout << "Enter the Publisher Name :";
            cin >> publisher;
        }
        void getdata(){
            cout << "The author " << author << " has a publisher "<< publisher ;
        }
};

class third : public first, public second{
    public:
        int pages;
        int year;
        void setdata(){
            cout << "Enter the book number : ";
            cin >> num;
            cout << "Enter the Book Name : ";
            cin >> name;
            
            cout << "Enter the author name : ";
            cin >> author;
            cout << "Enter the Publisher Name : ";
            cin >> publisher;
            
            cout << "Enter the number of pages : ";
            cin >> pages;
            cout << "Enter the year of publishing : ";
            cin >> year;
            cout << endl << endl;
        }
        void getdata(){
            cout << "The Book(id = "<< num << ") has a name " << name << endl;
            cout << "The author " << author << " has a publisher "<< publisher << endl ;
            cout << "The number of pages are " << pages << " and the year of publishing is " << year << endl;
        }
};



int main(){
    int num;
    cout << "Enter the number of books :";
    cin >> num;
    third library[num];
    for(int i = 0; i < num ; i++){
        library[i].setdata();
    }
    for(int i = 0; i < num ; i++){
        library[i].getdata();
    }
    return 0;
}