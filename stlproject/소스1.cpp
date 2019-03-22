//----------------------------------------------------
//2019 STL 3.21 목
//파일 읽고 쓰기
//프로그램의 시간을 재는 코드
//callable type을 표현하기 위한 funtional class
//smart pointer
//자원을 확보하는 클래스 만들기
//
//과제- class String을 파일 분리하자
//		1장 읽어보기
//----------------------------------------------------

#include <iostream>
#include <string>
#include <random>
#include <algorithm>
#include "save.h"
#include "strings.h"

using namespace std;



//String은 자원을 할당하는 클래스이다.
//1.생성시 new로 자원을 할당
//2.소멸시 delete로 해제
//3.복사생성자에서 깊은 복사를 한다.
//4.할당연산자에서 깊은 복사를 한다.


int main()
{
	default_random_engine dre;
	uniform_int_distribution<> uidNum(10, 70);
	//string을 임의의 길이로 설정하라
	String strings[100];
	
	for (String& d : strings)
		d.set(uidNum(dre));
	for (String d : strings)
		cout << d << endl;
	//길이 오름차순으로 정렬하라
	sort(begin(strings), end(strings), [](const String& A, const String& B) {
		return A.getNum() < B.getNum();
	});
	//출력하라
	for (String d : strings)
		cout << d << endl;
	save("소스.cpp");
}