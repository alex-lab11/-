#include <iostream>
#include "book.h"
#include <stdlib.h>
#include <string.h>
///в этом файле происходит описание всех действий описанных в book.h
using namespace std;
book::book():book ("none", "none", 0){}//конструктор без параметров(по умолчанию)
book::book(char *name, char *author, int pagesCount) ///конструктор с параметрами
{
 this->name = 0;
    this->author = 0;

  setName(name);
  setAuthor(author);
  setPagesCount(pagesCount);
}

book::book(book&p):book(p.name, p.author, p.pagesCount) {}///конструктор копирования
 void book::print()///вывод информации о книге
 {
     cout << "Name: " << name << "\nAuthor: " << author << "\nPagesCount: " << pagesCount <<endl;
 }
void book::setPagesCount(int pagesCount)///установка числа страниц кнпиги
{
{
    this->pagesCount=pagesCount;
}
void book::setName(char *name)///установка имени книги
{
   delete [] this->name;
   size_t l=strlen(name);
   this-> name = new char [l+1];
   strcpy(this->name, name);
}
void book::setAuthor(char *author)///установка автора книги
{
   delete [] this->author;
   size_t len=strlen(author);
   this-> author = new char[len+1];
   strcpy(this->author, author);
}
 char *book::getAuthor() ///взятие автора книги из объекта класса
    {
       return author;
    }
char *book::getName() ///взятие названия книги из объекта класса
    {
        return name;
    }
int book::getPagesCount() ///взятие числа страниц книги из объекта класса
    {
        return pagesCount;
    }

    book::~book() ///деструктор
    {
        delete [] name;
        delete [] author;
    }

