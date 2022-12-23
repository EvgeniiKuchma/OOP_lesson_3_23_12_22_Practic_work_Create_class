#include <iostream>
#include "Person.h"
#include <string>
#include "Class.h"

int main ()
{
	setlocale(LC_ALL, "russian");
	Person p1("Alex");
	Person p2("Djon");

	std::cout << p1.getName() << std::endl;
	std::cout << p2.getName() << std::endl;
	//Person p3 = p1/operator+(p2);	
	Person p3 = p1 + p2;
	std::cout << "--------" <<std::endl;
	std::cout << p3.getName() << std::endl;

	std::cout << "Больше ли p1, чем p2?----> " << (p1 > p2) << std::endl;

	std::cout << "--------" << std::endl;
	Class cl1("world",2);
	Class cl2;
	std::cout << cl1.getName() << std::endl;
	std::cout << cl2.getName() << std::endl;
	std::cout << cl1.getX() << std::endl;
	std::cout << cl2.getX() << std::endl;
	std::cout << "--------" << std::endl;
	bool cl3 = (cl1.getName() == cl2.getName());
	std::cout << cl3 << std::endl;
	std::cout << "--------" << std::endl;
	bool str1 = (cl1.getX() == cl2.getX());
	std::cout << str1 << std::endl;
	return 0;
}