#pragma once
#include <iostream>
#include <string>
#include <random>
#include <algorithm>
using namespace std;
//정수를 생성자의 인자로 받아 그 숫자만큼(byte) HEAP에서 메모리를 할당한다.
//메모리 내용은 'a'~'z'사이의 임의의 소문자로 채운다
//다음 main이 문제 없이 실행되도록한다.


class String {
	int num{ 0 };
	char * p{ nullptr };
	
public:

	String() = default;

	String(int n);
	
	String(const String& other);
	String& operator=(const String& other);
	~String();

	void set(int n);

	int getNum()const;

	friend ostream& operator<<(ostream&, const String&);
};