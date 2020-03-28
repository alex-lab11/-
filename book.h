#ifndef _BOOK_H_
#define _BOOK_H_
#include <string>
#include <stdlib.h>
///в этом файле перечислаютс€ все пол€ класса и функции дл€ работы с классом, а так же коснтрукторы и деструктор
using namespace std;


class book {


private:
  char *name;
    char *author;
    int pagesCount;

public:

    book();///конструтор без параметров
    book( char *name ,  char *author , int pagesCount);///конструтор с параметрами
    book(book &);///конструтор копировани€
    void print();///функци€ печати

    void setName( char* );///функци€, позвол€юща€ установить определенное значение у параметра
    void setAuthor( char* );
    void setPagesCount(int);

     char *getName();///функци€,позвол€юща€ просмотреть значени€ элементов данных.
     char *getAuthor();
    int getPagesCount();

     ~book();///деуструтор
};

#endif // _BOOK_H_
