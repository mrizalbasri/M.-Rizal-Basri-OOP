#include <iostream>
#include <string>
using namespace std;

class Book {
public:
    string title;
    string author;
    double price;


    void displayDetails() {
        cout << "Book Details:" << endl;
        cout << "Title: " << title << endl;
        cout << "Author: " << author << endl;
        cout << "Price: " << price << endl;
    }
};

int main() {

    Book book1;
    book1.title = "Laskar Pelangi";
    book1.author = "Andrea Hirata";
    book1.price = 99.000;


    Book book2;
    book2.title = "Sang Pemimpi";
    book2.author = "Andrea Hirata";
    book2.price = 75.000;

    book1.displayDetails();
    cout << endl;
    book2.displayDetails();

    return 0;
}
