#include "Header.h"

ANIMAL::Node* ANIMAL::head = nullptr;

ANIMAL::Node::Node(ANIMAL* data = nullptr, Node* pNext = nullptr)
{
	this->pNext = pNext;
	this->data = data;
}

ANIMAL::ANIMAL()
{
	name = "NONE";
	metabolism = "NONE";
}

ANIMAL::ANIMAL(string value_name, string value_metabolism)
{
	Set(value_name, value_metabolism);
}

ANIMAL::ANIMAL(const ANIMAL& other)
{
	this->name = other.name;

	this->metabolism = other.metabolism;
}

ANIMAL::~ANIMAL()
{
}

void ANIMAL::SetName(string name)
{
	this->name = name;
}

void ANIMAL::SetMetabolism(string metabolism)
{
	this->metabolism = metabolism;
}

void ANIMAL::Set(string value_name, string value_metabolism)
{
	SetName(value_name);
	SetMetabolism(value_metabolism);
}

void ANIMAL::add_h(ANIMAL* data)
{
	if (head == nullptr)
	{
		head = new Node(data);
	}
	else
	{
		Node* current = head;
		while (current->pNext!=nullptr)
		{
			current = current->pNext;
		}
		current->pNext = new Node(data);
	}
}

void ANIMAL::add(ANIMAL* data)
{
	add_h(data);
}

void ANIMAL::Show()
{
	if (head == nullptr)
	{
		cout << "В списку відсутні елементи!!!" << '\n';
	}
	else
	{
		Node* temp = head;

		while (head != nullptr)
		{
			cout << "Імя: " << head->data->GetName() << '\n';
			cout << "Обмін речовин: " << head->data->GetMetabolism() << '\n';
			cout << "Шерсть: " << head->data->GetWool() << '\n';
			cout << "Копта: " << head->data->GetHooves() << '\n';
			cout << "Крила: " << head->data->GetWings() << '\n' << '\n';

			head = head->pNext;
		}
		head = temp;
	}
}

void ANIMAL::Clear()
{
	Node* temp = head;
	
	while (head != nullptr)
	{
		Node* temp = head;
		head = head->pNext;
		delete temp;
	}
}

string ANIMAL::GetName()
{
	return string(name);
}

string ANIMAL::GetMetabolism()
{
	return string(metabolism);
}

string ANIMAL::GetWings()
{
	return string("NONE");
}

string ANIMAL::GetHooves()
{
	return string("NONE");
}

string ANIMAL::GetWool()
{
	return string("NONE");
}

MAMMALS::MAMMALS()
{
	wool = "NONE";
}

MAMMALS::MAMMALS(string value_name , string value_metabolism, string value_wool)
{
	Set(value_name, value_metabolism, value_wool);
}

MAMMALS::MAMMALS(const MAMMALS& other)
{
	this->wool = other.wool;
}

MAMMALS::~MAMMALS()
{
}

void MAMMALS::SetWool(string wool)
{
	this->wool = wool;
}

void MAMMALS::Set(string value_name, string value_metabolism, string value_wool)
{
	SetName(value_name);
	SetMetabolism(value_metabolism);
	SetWool(value_wool);
}

string MAMMALS::GetWool()
{
	return string(wool);
}

void MAMMALS::add(ANIMAL* data)
{
	add_h(data);

}

UNGULATES::UNGULATES()
{
	hooves = "NONE";
}

UNGULATES::UNGULATES(string value_name, string value_metabolism, string value_wool, string value_hooves)
{
	Set(value_name, value_metabolism, value_wool, value_hooves);
}

UNGULATES::~UNGULATES()
{
}

void UNGULATES::SetHooves(string hooves)
{
	this->hooves = hooves;
}

void UNGULATES::Set(string value_name, string value_metabolism, string value_wool, string value_hooves)
{
	SetName(value_name);
	SetMetabolism(value_metabolism);
	SetWool(value_wool);
	SetHooves(value_hooves);
}

string UNGULATES::GetHooves()
{
	return string(hooves);
}

void UNGULATES::add(ANIMAL* data)
{
	add_h(data);
}

BIRDS::BIRDS()
{
	winds = "NONE";
}

BIRDS::BIRDS(string value_name, string value_metabolism, string value_winds)
{
	Set(value_name, value_metabolism, value_winds);
}

BIRDS::~BIRDS()
{
}

void BIRDS::SetWinds(string winds)
{
	this->winds = winds;
}

void BIRDS::Set(string value_name, string value_metabolism, string value_winds)
{
	SetName(value_name);
	SetMetabolism(value_metabolism);
	SetWinds(value_winds);
}

string BIRDS::GetWings()
{
	return string(winds);
}

void BIRDS::add(ANIMAL* data)
{
	add_h(data);
}