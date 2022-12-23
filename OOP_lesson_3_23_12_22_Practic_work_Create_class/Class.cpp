#include "Class.h"


Class::Class()// : _x(1), _name1("black"){};
{
	_x = 1;
	_name1 = "black";
}
Class::Class(const std::string& name, int x) : _name1(name), _x(x){};

const std::string& Class::getName() const
{
	return _name1;
};
void Class::setName(const std::string& name)
{
	_name1 = name;
}
int Class::getX()const
{
	return _x;
}
void Class::setX(int x)
{
	_x = x;
}
bool Class::operator==(Class& x) const
{
	return (_x == x.getX());
};
bool Class::operator==(const Class& str) const
{
	return _name1.size() == str.getName().size();
}