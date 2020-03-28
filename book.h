#ifndef _BOOK_H_
#define _BOOK_H_
#include <string>
#include <stdlib.h>
///в этом файле перечислаются все поля класса и функции для работы с классом, а так же коснтрукторы и деструктор
using namespace std;


class book {


private:
  char *name;
    char *author;
    int pagesCount;

public:

    book();///конструтор без параметров
    book(char *name ,  char *author , int pagesCount);///конструтор с параметрами
    book(book &);///конструтор копирования
    void print();///функция печати

    void setName( char* );///функция, позволяющая установить определенное значение у параметра
    void setAuthor( char* );
    void setPagesCount(int);

     char *getName();///функция,позволяющая просмотреть значения элементов данных.
     char *getAuthor();
    int getPagesCount();

     ~book();///деструктор
};

#endif // _BOOK_H_
