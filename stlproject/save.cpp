//
//
//���� save�ǵ��� �ϱ�
//ū�����ʹٷ��
//������ �а� ����
#include<string>
#include<algorithm>
#include<fstream>
#include<iterator>
#include<chrono>
#include<iostream>
#include"save.h"

void save(std::string fname)
{
	//fname�� �б���� ����
	std::ifstream in(fname);
	//if (!in) üũ

	//����� ������ ���ٿ� ���� ���� ����
	std::ofstream out("2019 STL ���56 ����.txt", std::ios::app);
	//����� �ð��� ����Ѵ�.
	//�ð�������� �� tic�� �귶��?
	auto tic = std::chrono::system_clock::now();

	//�� ���� time_t�� ��ȯ
	auto time = std::chrono::system_clock::to_time_t(tic);
	//�� ���� ���ڷ� ��ȯ
	std::string date = ctime(&time);





	out << "===============================" << std::endl;
	out << date;
	out << "===============================" << std::endl;
	out << std::endl << std::endl;



	//fname�� ��� ������ ���ٿ� ����
	//std::copy(������,������,����)
	std::copy(std::istreambuf_iterator<char>(in),
		std::istreambuf_iterator<char>(),
		std::ostreambuf_iterator<char>(out)
	);



}