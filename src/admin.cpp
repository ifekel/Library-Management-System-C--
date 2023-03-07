#include <iostream>
#include <vector>
#include "book.cpp"
#include "user.cpp"
using namespace std;

vector<User *> User::all_users;
vector<Book *> Book::all_books;

class Admin
{
public:
    static vector<Admin *> all_admins;

private:
    string firstName, lastName, email, password;

public:
    Admin(string _firstName, string _lastName, string _email, string _password)
    {
        this->firstName = _firstName;
        this->lastName = _lastName;
        this->email = _email;
        this->password = _password;
        this->all_admins.push_back(this);
    }

    string getFirstName()
    {
        return this->firstName;
    }

    string getEmail()
    {
        return this->email;
    }

    string getPassword()
    {
        return this->password;
    }
    string getLastName()
    {
        return this->lastName;
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

    void getAllBooks()
    {
        vector<Book *> all_books_list = Book::getAllBooks();

        for (Book *book1 : all_books_list)
        {
            cout << book1->getBookName() << endl;
        }
    }

    void getAllUsers()
    {
        vector<User *> all_user_list = User::getAllUsers();

        for (User *user1 : all_user_list)
        {
            cout << ">>>>>>>>>>>>>>>>>>>";
            cout << "List Of Registered Users";
            cout << ">>>>>>>>>>>>>>>>>>>";
            cout
                << "First name: " << user1->getFirstName()
                << "  || Last name: " << user1->getLastName()
                << "  || Email Address: " << user1->getEmail()
                << "  || Password: " << user1->getPassword() << endl;
        }
    }

    void deleteBook(string bookName)
    {
        vector<Book *> all_books_list = Book::getAllBooks();

        for (Book *book : all_books_list)
        {
            if (bookName == book->getBookName())
            {
                delete book;
                cout << ">>>>>>>>>>>>>>>>>>>>>>>>>>>>" << endl;
                cout << "book has been deleted successfully" << endl;
                cout << ">>>>>>>>>>>>>>>>>>>>>>>>>>>>" << endl;
            }
        }
    }

    void deleteUser(string firstName, string lastName)
    {
        vector<User *> all_books_list = User::getAllUsers();

        for (User *user : all_books_list)
        {
            if (firstName == user->getFirstName())
            {
                if (lastName == user->getLastName())
                {
                    delete user;
                    cout << ">>>>>>>>>>>>>>>>>>>>>>>>>>>>" << endl;
                    cout << "User has been deleted successfully" << endl;
                    cout << ">>>>>>>>>>>>>>>>>>>>>>>>>>>>" << endl;
                }
            }
        }
    }
};
