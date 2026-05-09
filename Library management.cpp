#include <iostream>
using namespace std;

class Book {
    int id;
    string name;

public:
    void input() {
        cout<<"Enter Book ID: ";
        cin>>id;
        cout<<"Enter Book Name: ";
        cin>>name;
    }

    void show() {
        cout<<"Book ID: "<<id<<endl;
        cout<<"Book Name: "<<name<<endl;
    }
};

int main() {
    Book b;
    b.input();
    b.show();
}
