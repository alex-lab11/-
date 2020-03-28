#include <iostream>
#include<cstring>
using namespace std;
#include "book.h"
int main() {

book p;

    int i = 0,n=0,x;
    cout<<" input number of books"<<endl;///вывод запроса на ввод числа книг
cin>>x;
while(n!=x){
    cout << "input 1(information by default)" << endl << "input 2(information about book)" << endl << "input 3 for copy" << endl;///вывод меню
    cin >> i;

    if (i == 1) {
        book p1;
        p1.print();
    }

    if (i == 2) {
        int pagesCount;
        char name[100];
        char author[100];

        cout << "Enter the pagesCount: ";
        cin >> pagesCount;
        cout << "\n";

        cout << "Enter name: ";
        cin >> name;
        cout << "\n";

        cout << "Enter  author: ";
        cin >> author;
        cout << "\n";

        book p2(name, author, pagesCount);
        cout << p2.getName() << " " << p2.getAuthor() << " " << p2.getPagesCount() << endl;
    }

    if(i == 3) {
        book p3("Harry Potter", "Joanne Rowling", 230);
        p3.print();
        cout << endl;
        book p4(p3);
        p4.print();
    }
    n++;
}
    return 0;

}

