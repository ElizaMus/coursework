#include "PassangerAirplaneBuilder.h"

PassangerAirplaneBuilder::PassangerAirplaneBuilder()

{

}

void PassangerAirplaneBuilder::setIsMilitary()

{

	aircraft.isMilitary = false;

}

void PassangerAirplaneBuilder::setAircraftType()

{

	aircraft.aircraftType = "������������ �������";

}

void PassangerAirplaneBuilder::setManagementMethod()

{

	aircraft.managementMethod = "������ ����������";

}

Aircraft PassangerAirplaneBuilder::getAndSaveResult()

{

	ofstream out;

	out.open("passangerAirplane.txt", std::ios_base::app);

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

PassangerAirplaneBuilder::~PassangerAirplaneBuilder()

{

}