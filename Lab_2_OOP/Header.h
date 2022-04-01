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

	// �������� �����
	void SetName(string);

	// �������� ���������
	void SetMetabolism(string);

	// �������� �����, ���������
	void Set(string, string);

	// �������� �����
	string GetName();

	// �������� ���������
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

	// �������� ������
	void SetWool(string);

	// �����o��� ��� ��������� ������
	void Set(string, string, string);

	// �������� ������
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
	
	// �������� ������ 
	void SetHooves(string);

	// �����o��� ��� ��������� ������ ������
	void Set(string, string, string, string);

	// �������� ������
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

	// �������� �����
	void SetWinds(string);

	// �����o��� ��� ��������� �����
	void Set(string, string, string);
	 
	// �������� �����
	string GetWings();
};