#include "Header.h"	

int main()
{
	setlocale(LC_ALL, "ukr");

	BIRDS a("�������", "39 �������", "����");
	MAMMALS b("����", "38 �������", "ѳ��");
	UNGULATES c("���", "36 �������", "���������", "����");

	a.add(&a);
	b.add(&b);
	c.add(&c);

	//ANIMAL::Clear();
	ANIMAL::Show();
	ANIMAL::Clear();

	return 0;
}