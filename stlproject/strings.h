#pragma once
#include <iostream>
#include <string>
#include <random>
#include <algorithm>
using namespace std;
//������ �������� ���ڷ� �޾� �� ���ڸ�ŭ(byte) HEAP���� �޸𸮸� �Ҵ��Ѵ�.
//�޸� ������ 'a'~'z'������ ������ �ҹ��ڷ� ä���
//���� main�� ���� ���� ����ǵ����Ѵ�.


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