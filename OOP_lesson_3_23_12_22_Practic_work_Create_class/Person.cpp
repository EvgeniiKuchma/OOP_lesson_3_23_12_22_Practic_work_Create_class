#include "Person.h"
#include <iostream>
#include <string>
Person::Person()
{
	_name = "DefaultName";//for private field
	_id = -1;
}
Person::Person(const std::string& name) : _name(name), _id (-1){}
//������������ ���, �����::������� � �������� �����
const std::string& Person::getName() const
{
	return _name;
}
void Person::setName(const std::string& name) 
{
	_name = name;
}
size_t Person::getId() const 
{
	return _id;
}
void Person::setId(size_t id)
{
_id = id;
}
Person Person::operator+(const Person& other)
{
	std::string resName = _name + other.getName();
	Person resPerson(resName);
	return resPerson;
}
//p1.operator>(p2)
bool Person::operator>(const Person& other)
{
	std::cout << "Using operator > ";
	return _name.size() > other.getName().size();
}