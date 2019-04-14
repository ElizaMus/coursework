#include "Helicopter.h"
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

Helicopter::Helicopter()

{

}

Helicopter::~Helicopter()

{

}

void Helicopter::setIsMilitary()

{

	aircraft.isMilitary = false;

}

void Helicopter::setAircraftType()

{

	aircraft.aircraftType = "��������";

}

void Helicopter::setManagementMethod()

{

	aircraft.managementMethod = "������ ����������";

}

Aircraft Helicopter::getAndSaveResult()

{

	ofstream out;

	out.open("helicopters.txt", std::ios_base::app);

	out << "----------------\n";

	out << "��� ��������: " << aircraft.aircraftType << endl;

	out << "�������?: " << (aircraft.isMilitary ? "��" : "���") << endl;

	out << "�������� �����: " << aircraft.takeoffWeight << endl;

	out << "��� ����������: " << aircraft.enginesType << endl;

	out << "���������� ����������: " << aircraft.enginesNum << endl;

	out << "������������ �������: " << aircraft.wingsArrangement << endl;

	out << "��� �����: " << aircraft.chassisType << endl;

	out << "�������� ������: " << aircraft.flightSpeed << endl;

	out << "��� ������: " << aircraft.takeoffType << endl;

	out << "��� �������: " << aircraft.landingType << endl;

	out << "������ ����������: " << aircraft.managementMethod << endl;

	out << "������: " << aircraft.crew << endl;

	out << "��� ������������: " << aircraft.productionYear << endl;

	out << "��� ����������: " << aircraft.weaponType << endl;

	out << "----------------\n";

	out.close();

	return aircraft;

}