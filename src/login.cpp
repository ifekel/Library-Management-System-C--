#include <iostream>
#include "user.cpp"
using namespace std;

void login()
{
    cout << ">>>>>";
    cout << "LOGIN" << endl;
    cout << ">>>>>";

    vector<User *> all_user_list = User::getAllUsers();

    string _email;
    string _password;
}