#pragma once
#include <iostream>
#include <string>
#include <sstream>

using namespace std;

class Man
{
private:
	const char* name;
	int Age,
		Weight;
public:

	void SetName(const char*);
	void SetAge(int);
	void SetWeight(int);

	const char* GetName() const;
	int GetAge() const;
	int GetWeight() const;

	Man();
	Man(const char*, int, int);
	Man(const Man&);

	~Man();

	operator string() const;
	friend ostream& operator << (ostream&, const Man&);
	friend istream& operator >> (istream&, Man&);
};