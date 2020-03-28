#include <iostream>
#include "book.h"
#include <stdlib.h>
#include <string.h>
///� ���� ����� ���������� �������� ���� �������� �������� � bookh
using namespace std;
book::book():book ("none", "none", 0){}///����������� � ���������� �� ���������
book::book(char *name, char *author, int pagesCount) ///����������� � �����������
{
 this->name = 0;
    this->author = 0;

  setName(name);
  setAuthor(author);
  setPagesCount(pagesCount);
}

book::book(book&p):book(p.name, p.author, p.pagesCount) {}///����������� �����������
 void book::print()///����� ���������� � �����
 {
     cout << "Name: " << name << "\nAuthor: " << author << "\nPagesCount: " << pagesCount <<endl;
 }
void book::setPagesCount(int pagesCount)///��������� ����� ������� ������
{
    this->pagesCount=pagesCount;
}
void book::setName(char *name)///��������� ��� �����
{
   delete [] this->name;
   size_t l=strlen(name);
   this-> name = new char [l+1];
   strcpy(this->name, name);
}
void book::setAuthor(char *author)///��������� ������ �����
{
   delete [] this->author;
   size_t len=strlen(author);
   this-> author = new char[len+1];
   strcpy(this->author, author);
}
 char *book::getAuthor() ///������ ������ ����� �� ������� ������
    {
       return author;
    }

char *book::getName() ///������ ����� ����� �� ������� ������
    {
        return name;
    }
int book::getPagesCount() ///������ ����� ������� ����� �� ������� ������
    {
        return pagesCount;
    }

    book::~book() ///����������
    {
        delete [] name;
        delete [] author;
    }

