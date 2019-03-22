//
//
//파일 save되도록 하기
//큰데이터다루기
//파일을 읽고 쓰기
#include<string>
#include<algorithm>
#include<fstream>
#include<iterator>
#include<chrono>
#include<iostream>
#include"save.h"

void save(std::string fname)
{
	//fname을 읽기모드로 연다
	std::ifstream in(fname);
	//if (!in) 체크

	//기록할 파일을 덧붙여 쓰기 모드로 연다
	std::ofstream out("2019 STL 목금56 강의.txt", std::ios::app);
	//실행된 시간을 기록한다.
	//시간기원에서 몇 tic이 흘렀나?
	auto tic = std::chrono::system_clock::now();

	//이 값을 time_t로 변환
	auto time = std::chrono::system_clock::to_time_t(tic);
	//이 값을 글자로 변환
	std::string date = ctime(&time);





	out << "===============================" << std::endl;
	out << date;
	out << "===============================" << std::endl;
	out << std::endl << std::endl;



	//fname에 모든 내용을 덧붙여 쓴다
	//std::copy(어디부터,어디까지,어디로)
	std::copy(std::istreambuf_iterator<char>(in),
		std::istreambuf_iterator<char>(),
		std::ostreambuf_iterator<char>(out)
	);



}