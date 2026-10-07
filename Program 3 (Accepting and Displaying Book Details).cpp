//Program 3 : Program to accept and display book details 
#include <iostream>
using namespace std;

class Book
{
private:
    int bookID;
    string title;
    string author;
    float price;

public:
    // Function to accept book details
    void accept()
    {
        cout << "Enter Book ID: ";
        cin >> bookID;

        cout << "Enter Book Title: ";
        cin >> title;

        cout << "Enter Author Name: ";
        cin >> author;

        cout << "Enter Price: ";
        cin >> price;
    }

    // Function to display book details
    void display()
    {
        cout << "\n--- Book Details ---" << endl;
        cout << "Book ID: " << bookID << endl;
        cout << "Title: " << title << endl;
        cout << "Author: " << author << endl;
        cout << "Price: " << price << endl;
    }
};

int main()
{
    Book b;

    b.accept();
    b.display();

    return 0;
}

