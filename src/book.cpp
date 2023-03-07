#include <iostream>
#include <vector>
using namespace std;

class Book
{
public:
    static vector<Book *> all_books;

private:
    string name, author;
    int num_of_pages, isbn, amount;

public:
    Book(string _name, string _author, int _num_of_pages, int _isbn, int _amount)
    {
        this->name = _name;
        this->author = _author;
        this->num_of_pages = _num_of_pages;
        this->isbn = _isbn;
        this->amount = _amount;
        all_books.push_back(this);
    }

    string getBookName()
    {
        return this->name;
    }

    string changeBookName(string newBookName)
    {
        this->name = newBookName;
        cout << "Book name has been changed successfully" << endl;
        cout << ">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>" << endl;
        return this->name;
    }

    void displayBookInfo()
    {
        cout << "Name [ " << this->name << " ]" << endl;
        cout << "Author [ " << this->author << " ]" << endl;
        cout << "Number of pages [ " << this->num_of_pages << " ]" << endl;
        cout << "ISBN [ " << this->isbn << " ]" << endl;
        cout << "Amount In Library [ " << this->amount << " ]" << endl;
    }

    int addMoreBook(int newAmount)
    {
        this->amount += newAmount;
        return this->amount;
    }

    static vector<Book *> getAllBooks()
    {
        return all_books;
    }
};