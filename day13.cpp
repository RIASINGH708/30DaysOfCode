#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
class Book{
    protected:
        string title;
        string author;
    public:
        Book(string t,string a){
            title=t;
            author=a;
        }
        virtual void display()=0;

};

class MyBook : virtual public Book {
    protected:
        int price;
    public:
        MyBook(string t, string a, int price) : Book(t,a) {
            this->price=price;
        };
        virtual void display() {
            cout << "Title: "  << this->title  << "\n";
            cout << "Author: " << this->author << "\n";
            cout << "Price: "  << this->price  << "\n";
        }
};

int main() {
