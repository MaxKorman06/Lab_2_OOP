#include "Header.h"	

int main()
{
	setlocale(LC_ALL, "ukr");

	BIRDS a("Соловей", "39 градусів", "Чорні");
	MAMMALS b("Вовк", "38 градусів", "Сіра");
	UNGULATES c("Бик", "36 градусів", "Коричнева", "Парні");

	a.add(&a);
	b.add(&b);
	c.add(&c);

	//ANIMAL::Clear();
	ANIMAL::Show();
	ANIMAL::Clear();

	return 0;
}