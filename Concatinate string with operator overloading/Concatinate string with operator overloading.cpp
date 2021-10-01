#include<iostream>
using namespace std;
class sentence
{
public:
	sentence(void);
	sentence(string st);
	void set_data(string data);
	friend sentence operator+(sentence str_1, sentence str_2);
	void display();
	~sentence();

private:
	string str;
};

sentence::sentence(void)
{
	str = "\0";
}

sentence::sentence(string st)
{
	str = st;
}

void sentence::set_data(string data)
{
	str = data;
}

sentence operator+(sentence str_1, sentence str_2)
{
	sentence s;
	s.str = str_1.str + str_2.str;
	return s;
}

void sentence::display()
{
	cout << "Concatenated string : " << str;
}

sentence::~sentence()
{
}

int main()
{
	sentence object_1;
	sentence object_2;
	sentence object_3;
	string temp_1;
	string temp_2;
	cout << "Enter 1st part of string: ";
	cin >> temp_1;
	object_1.set_data(temp_1);
	cout << "Enter 2nd part of string : ";
	cin >> temp_2;
	object_2.set_data(temp_2);
	object_3 = object_1 + object_2;
	object_3.display();
	return 0;
}