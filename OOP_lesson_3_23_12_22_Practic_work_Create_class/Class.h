#pragma once
#include <iostream>
#include <string>
class Class
{
public:
	Class();
	Class(const std::string& name, int x);

	const std::string& getName() const;
	void setName(const std::string& name);

	int getX() const;
	void setX(int x);

	bool operator==(Class& x) const; // p1 == 5 { p1.getX() == 5}
	bool operator==(const Class& str) const;
private:
	int _x = 1;
	std::string _name1;
};

