#include "Man.h"

void Man::SetName(const char* name) { this->name = name; }
void Man::SetAge(int Age) { this->Age = Age; }
void Man::SetWeight(int Weight) { this->Weight = Weight; }

const char* Man::GetName() const { return name; }
int Man::GetAge() const { return Age; }
int Man::GetWeight() const { return Weight; }

Man::Man()
{
	SetName("One");
	SetAge(1);
	SetWeight(0);
}
Man::Man(const char* name = "", int Age = 0, int Weight = 0)
{
	SetName(name);
	SetAge(Age);
	SetWeight(Weight);
}
Man::Man(const Man& A)
{
	SetName(A.GetName());
	SetAge(A.GetAge());
	SetWeight(A.GetWeight());
}

Man::~Man() {}

Man::operator string() const
{
	stringstream ss;
	ss << " Name: " << GetName() << endl;
	ss << " Age: " << GetAge() << endl;
	ss << " Weight: " << GetWeight() << endl;
	return ss.str();
}
ostream& operator << (ostream& out, const Man& A)
{
	out << string(A);
	return out;
}
istream& operator >> (istream& in, Man& A)
{
	const char* name_tmp;
	string tmp;
	cout << "Enter  name:"; getline(in, tmp); name_tmp = tmp.c_str();
	cout << "Enter  age:"; in >> A.Age;
	cout << "Enter  weight:"; in >> A.Weight;
	Man(tmp.c_str(), A.Age, A.Weight);
	return in;
}