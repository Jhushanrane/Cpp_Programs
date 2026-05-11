#include <iostream>
using namespace std;

class Product{
    int id,q; string name; float price;
public:
    void input(){ cin>>id>>name>>price>>q; }
    void update(int x){ q+=x; }
    void show(){ cout<<id<<" "<<name<<" "<<price<<" "<<q<<endl; }
    float value(){ return price*q; }
};

int main(){
    Product p[3];
    float total=0;

    for(int i=0;i<3;i++) p[i].input();

    p[0].update(5);     // update stock

    for(int i=0;i<3;i++){
        p[i].show();
        total+=p[i].value();
    }

    cout<<"Total="<<total;
}
