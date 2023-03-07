#include <iostream>
#include <vector>
using namespace std;

class User
{
public:
    static vector<User *> all_users;

private:
    string firstName, lastName, email, password;

public:
    User(string _firstName, string _lastName, string _email, string _password)
    {
        this->firstName = _firstName;
        this->lastName = _lastName;
        this->email = _email;
        this->password = _password;
        this->all_users.push_back(this);
    }

    string getFirstName()
    {
        return this->firstName;
    }
    string getLastName()
    {
        return this->lastName;
    }

    string getEmail()
    {
        return this->email;
    }

    string getPassword()
    {
        return this->password;
    }

    string changePassword(string newPassword)
    {
        this->password = newPassword;
        cout << "\nPassword has been changed successfully" << endl;
        cout << ">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>" << endl;
        return this->password;
    }

    void displayUserInfo()
    {
        cout << "First name [ " << this->firstName << " ]" << endl;
        cout << "Last name [ " << this->lastName << " ]" << endl;
        cout << "Email Address [ " << this->email << " ]" << endl;
        cout << "Password [ " << this->password << " ]" << endl;
    }

    static vector<User *> getAllUsers()
    {
        return all_users;
    }
};
