#include <iostream>
using namespace std;

int main() {
    string password;

    cout<<"Enter Password: ";
    cin>>password;

    if(password=="admin123")
        cout<<"Login Successful";
    else
        cout<<"Wrong Password";
}
