#include "strings.h"

uniform_int_distribution<> uid('a', 'z');
default_random_engine dre;

String::String(int n) :num{ n } {
		p = new char[num];
		for (int i = 0; i < num; ++i)
		{
			p[i] = uid(dre);
		}
}
String::String(const String& other) : num{ other.num } {
		p = new char[num];
		memcpy(p, other.p, num);
}
String& String ::operator=(const String& other) {
		if (this == &other) //자기자신을 복사하는것 제외
			return *this;
		delete[] p;
		num = other.num;
		p = new char[num];
		memcpy(p, other.p, num);
		return *this;
}
String::~String() {
		delete[] p;
}

void String::set(int n) {
	num = n;
	if (!p)
		delete[] p;
	p = new char[num];
	for (int i = 0; i < num; ++i)
		p[i] = uid(dre);
}

int String::getNum() const {
	return num;
}



ostream& operator<<(ostream& os, const String& str)
{
	for (int i = 0; i < str.num; ++i)
		os << str.p[i];
	return os;
}