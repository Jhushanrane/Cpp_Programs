#include <iostream>
using namespace std;

class Product{
    int id, qty;
    string name;
    float price;

public:
    void input(){
        cin >> id >> name >> price >> qty;
    }
    void update(int q){    
        qty += q;
    }
    void display(){
        cout<<id<<" "<<name<<" "<<price<<" "<<qty<<endl;
    }
    float stockValue(){
        return price * qty;
    }
};
int main(){
    Product p[3];
    float total = 0;

    cout<<"Enter ID Name Price Quantity:\n";
    for(int i=0;i<3;i++)
        p[i].input();
    p[0].update(5); 
    cout<<"\nProducts:\n";
    for(int i=0;i<3;i++){
        p[i].display();
        total += p[i].stockValue();
    }
    cout<<"Total Stock Value = "<<total;
}
