#pragma once

#include <iostream>
#include <string>

using namespace std;

const int L_name = 30;

class ANIMAL
{
public:
	ANIMAL();

	// �������� �����, ���������
	ANIMAL(string, string);

	ANIMAL(const ANIMAL&);

	~ANIMAL();

	// �������� �����
	string GetName();

	// �������� ���������
	string GetMetabolism();

	// �������� �����
	virtual string GetWings();

	// �������� ������
	virtual string GetHooves();

	// �������� ������
	virtual string GetWool();

	// �������� �����
	void SetName(string);

	// �������� ���������
	void SetMetabolism(string);

	// �������� �����, ���������
	void Set(string, string);

	// ������ � ������ (�������� ���)
	static void add_h(ANIMAL* data);

	// ������ � ������
	virtual void add(ANIMAL* data) = 0;

	// �������� ������
	static void Show();

	// ������� ������
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

	// �����o��� ��� ��������� ������
	MAMMALS(string, string, string);

	MAMMALS(const MAMMALS&);

	~MAMMALS();

	// �������� ������
	void SetWool(string);

	// �����o��� ��� ��������� ������
	void Set(string, string, string);

	// �������� ������
	string GetWool();

	void add(ANIMAL* data) override;
};

class UNGULATES : public MAMMALS
{
protected:
	string hooves;

public:
	UNGULATES();

	// �����o��� ��� ��������� ������ ������
	UNGULATES(string, string, string, string);

	~UNGULATES();
	
	// �������� ������ 
	void SetHooves(string);

	// �����o��� ��� ��������� ������ ������
	void Set(string, string, string, string);

	// �������� ������
	string GetHooves();

	void add(ANIMAL* data) override;
};

class BIRDS : public ANIMAL
{
protected:
	string winds;

public:
	BIRDS();

	// �����o��� ��� ��������� �����
	BIRDS(string, string, string);

	~BIRDS();

	// �������� �����
	void SetWinds(string);

	// �����o��� ��� ��������� �����
	void Set(string, string, string);
	 
	// �������� �����
	string GetWings();

	void add(ANIMAL* data) override;
};