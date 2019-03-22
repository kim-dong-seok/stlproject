//----------------------------------------------------
//2019 STL 3.21 ��
//���� �а� ����
//���α׷��� �ð��� ��� �ڵ�
//callable type�� ǥ���ϱ� ���� funtional class
//smart pointer
//�ڿ��� Ȯ���ϴ� Ŭ���� �����
//
//����- class String�� ���� �и�����
//		1�� �о��
//----------------------------------------------------

#include <iostream>
#include <string>
#include <random>
#include <algorithm>
#include "save.h"
#include "strings.h"

using namespace std;



//String�� �ڿ��� �Ҵ��ϴ� Ŭ�����̴�.
//1.������ new�� �ڿ��� �Ҵ�
//2.�Ҹ�� delete�� ����
//3.��������ڿ��� ���� ���縦 �Ѵ�.
//4.�Ҵ翬���ڿ��� ���� ���縦 �Ѵ�.


int main()
{
	default_random_engine dre;
	uniform_int_distribution<> uidNum(10, 70);
	//string�� ������ ���̷� �����϶�
	String strings[100];
	
	for (String& d : strings)
		d.set(uidNum(dre));
	for (String d : strings)
		cout << d << endl;
	//���� ������������ �����϶�
	sort(begin(strings), end(strings), [](const String& A, const String& B) {
		return A.getNum() < B.getNum();
	});
	//����϶�
	for (String d : strings)
		cout << d << endl;
	save("�ҽ�.cpp");
}