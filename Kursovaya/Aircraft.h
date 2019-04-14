#pragma once
#include <string>

#include <iostream>

using namespace std;

class Aircraft

{

public:

	bool isMilitary = false; //������� ��� �����������

	string aircraftType = ""; //��� ��������

	double takeoffWeight = 0; //�������� �����

	string enginesType = ""; //��� ����������

	int enginesNum = 0; //���������� ����������

	string wingsArrangement = ""; //������������ �������

	string chassisType = ""; //��� �����

	double flightSpeed = 0; //�������� ������

	string takeoffType = ""; //��� ������

	string landingType = ""; //��� �������

	string managementMethod = ""; //������ ����������

	int crew = 0; //������

	int productionYear = 0; //��� ������������

	string weaponType = ""; //��� ����������

	Aircraft();

	~Aircraft();

};