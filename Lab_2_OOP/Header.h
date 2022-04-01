#pragma once

#include <iostream>

using namespace std;

const int L_name = 30;


class ANIMAL
{
protected:

	string name;
	string metabolism;

public:
	ANIMAL();

	ANIMAL(string, string);

	ANIMAL(const ANIMAL&);

	~ANIMAL();

	// Присвоїти назву
	void SetName(string);

	// Присвіхти метаболізм
	void SetMetabolism(string);

	// Присвоїти назву, метаболізм
	void Set(string, string);

	// Отримати назву
	string GetName();

	// Отримати метоболізм
	string GetMetabolism();
};


class MAMMALS : public ANIMAL
{
protected:
	string wool;

public:
	MAMMALS();

	MAMMALS(string, string, string);

	MAMMALS(const MAMMALS&);

	~MAMMALS();

	// Присвоїти шерсть
	void SetWool(string);

	// Присвoїти імя метаболізм шерсть
	void Set(string, string, string);

	// Отримати шерсть
	string GetWool();
};

class UNGULATES : public MAMMALS
{
protected:
	string hooves;

public:
	UNGULATES();

	UNGULATES(string, string, string, string);

	~UNGULATES();
	
	// Присвоїти копита 
	void SetHooves(string);

	// Присвoїти імя метаболізм шерсть копита
	void Set(string, string, string, string);

	// Отримати копита
	string GetHooves();
};

class BIRDS : public ANIMAL
{
protected:
	string winds;

public:
	BIRDS();

	BIRDS(string, string, string);

	~BIRDS();

	// Присвоїти крила
	void SetWinds(string);

	// Присвoїти імя метаболізм крила
	void Set(string, string, string);
	 
	// Отримати крила
	string GetWings();
};