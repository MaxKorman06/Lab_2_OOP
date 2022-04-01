#include "Header.h"

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

void ANIMAL::SetName(string value_name)
{
	name = value_name;
}

void ANIMAL::SetMetabolism(string value_metabolism)
{
	metabolism = value_metabolism;
}

void ANIMAL::Set(string value_name, string value_metabolism)
{
	SetName(value_name);
	SetMetabolism(value_metabolism);
}

string ANIMAL::GetName()
{
	return string(name);
}

string ANIMAL::GetMetabolism()
{
	return string(metabolism);
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

void MAMMALS::SetWool(string value_wool)
{
	wool = value_wool;
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

void UNGULATES::SetHooves(string value_hooves)
{
	hooves = value_hooves;
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

void BIRDS::SetWinds(string value_wigs)
{
	winds = value_wigs;
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