#pragma once

#include <iostream>
#include <string>

using namespace std;

const int L_name = 30;

class ANIMAL
{
public:
	ANIMAL();

	// Присвоїти назву, метаболізм
	ANIMAL(string, string);

	ANIMAL(const ANIMAL&);

	~ANIMAL();

	// Отримати назву
	string GetName();

	// Отримати метоболізм
	string GetMetabolism();

	// Отримати крила
	virtual string GetWings();

	// Отримати копита
	virtual string GetHooves();

	// Отримати шерсть
	virtual string GetWool();

	// Присвоїти назву
	void SetName(string);

	// Присвіхти метаболізм
	void SetMetabolism(string);

	// Присвоїти назву, метаболізм
	void Set(string, string);

	// Додати в список (головний код)
	static void add_h(ANIMAL* data);

	// Додати в список
	virtual void add(ANIMAL* data) = 0;

	// Показати список
	static void Show();

	// Очстити список
	static void Clear();

	class Node
	{
	public:
		ANIMAL* data;
		Node* pNext;

		Node(ANIMAL* data, Node* pNext);
	};

protected:
	string name;
	string metabolism;
	static Node* head;
};


class MAMMALS : public ANIMAL
{
protected:
	string wool;

public:
	MAMMALS();

	// Присвoїти імя метаболізм шерсть
	MAMMALS(string, string, string);

	MAMMALS(const MAMMALS&);

	~MAMMALS();

	// Присвоїти шерсть
	void SetWool(string);

	// Присвoїти імя метаболізм шерсть
	void Set(string, string, string);

	// Отримати шерсть
	string GetWool();

	void add(ANIMAL* data) override;
};

class UNGULATES : public MAMMALS
{
protected:
	string hooves;

public:
	UNGULATES();

	// Присвoїти імя метаболізм шерсть копита
	UNGULATES(string, string, string, string);

	~UNGULATES();
	
	// Присвоїти копита 
	void SetHooves(string);

	// Присвoїти імя метаболізм шерсть копита
	void Set(string, string, string, string);

	// Отримати копита
	string GetHooves();

	void add(ANIMAL* data) override;
};

class BIRDS : public ANIMAL
{
protected:
	string winds;

public:
	BIRDS();

	// Присвoїти імя метаболізм крила
	BIRDS(string, string, string);

	~BIRDS();

	// Присвоїти крила
	void SetWinds(string);

	// Присвoїти імя метаболізм крила
	void Set(string, string, string);
	 
	// Отримати крила
	string GetWings();

	void add(ANIMAL* data) override;
};