#ifndef _BOOK_H_
#define _BOOK_H_
#include <string>
#include <stdlib.h>
///� ���� ����� ������������� ��� ���� ������ � ������� ��� ������ � �������, � ��� �� ������������ � ����������
using namespace std;


class book {


private:
  char *name;
    char *author;
    int pagesCount;

public:

    book();///���������� ��� ����������
    book( char *name ,  char *author , int pagesCount);///���������� � �����������
    book(book &);///���������� �����������
    void print();///������� ������

    void setName( char* );///�������, ����������� ���������� ������������ �������� � ���������
    void setAuthor( char* );
    void setPagesCount(int);

     char *getName();///�������,����������� ����������� �������� ��������� ������.
     char *getAuthor();
    int getPagesCount();

     ~book();///����������
};

#endif // _BOOK_H_
