#include "BaseBuilder.h"

void BaseBuilder::setLandingType(string landingType)

{

	aircraft.landingType = landingType;

}

void BaseBuilder::setManagementMethod()

{

	aircraft.managementMethod = "��� ����������";

}

void BaseBuilder::setCrew(int crew)

{

	aircraft.crew = crew;

}

void BaseBuilder::setProductionYear(int productionYear)

{

	aircraft.productionYear = productionYear;

}

void BaseBuilder::setWeaponType(string weaponType)

{

	aircraft.weaponType = weaponType;

}

Aircraft BaseBuilder::getAndSaveResult()

{

	return Aircraft();

}

BaseBuilder::BaseBuilder()

{

	aircraft = Aircraft();

}

BaseBuilder::~BaseBuilder()

{

}

void BaseBuilder::setIsMilitary()

{

	aircraft.isMilitary = false;

}

void BaseBuilder::setAircraftType()

{

	aircraft.aircraftType = "������� ������";

}

void BaseBuilder::setTakeoffWeight(double takeoffWeight)

{

	aircraft.takeoffWeight = takeoffWeight;

}

void BaseBuilder::setEnginesType(string enginesType)

{

	aircraft.enginesType = enginesType;

}

void BaseBuilder::setEnginesNum(int enginesNum)

{

	aircraft.enginesNum = enginesNum;

}

void BaseBuilder::setWingsArrangement(string wingsArrangement)

{

	aircraft.wingsArrangement = wingsArrangement;

}

void BaseBuilder::setChassisType(string chassisType)

{

	aircraft.chassisType = chassisType;

}

void BaseBuilder::setFlightSpeed(double flightSpeed)

{

	aircraft.flightSpeed = flightSpeed;

}

void BaseBuilder::setTakeoffType(string takeoffType)

{

	aircraft.takeoffType = takeoffType;

}

void BaseBuilder::getLandingType()

{

	cout << "������� ��� �������\n";

	cin >> aircraft.landingType;

	cout << "��� �������: " << aircraft.landingType << endl;

}

void BaseBuilder::getManagementMethod()

{

	cout << "����� ����������: " << aircraft.managementMethod << endl;

}

void BaseBuilder::getCrew()

{

	cout << "������� ���������� �������\n";

	cin >> aircraft.crew;

	cout << "���������� �������: " << aircraft.crew << endl;

}

void BaseBuilder::getProductionYear()

{

	cout << "������� ��� ������������\n";

	cin >> aircraft.productionYear;

	cout << "��� ������������: " << aircraft.productionYear << endl;

}

void BaseBuilder::getWeaponType()

{

	cout << "������� ��� ������\n";

	cin >> aircraft.weaponType;

	cout << "��� ������: " << aircraft.weaponType << endl;

}

void BaseBuilder::getIsMilitary()

{

	cout << "������� �������?: " << aircraft.isMilitary << endl;

}

void BaseBuilder::getAircraftType()

{

	cout << "��� ������������ ��������: " << aircraft.aircraftType << endl;

}

void BaseBuilder::getTakeoffWeight()

{

	cout << "������� ������� �����\n";

	cin >> aircraft.takeoffWeight;

	cout << "������� ����� �����: " << aircraft.takeoffWeight << endl;

}

void BaseBuilder::getEnginesType()

{

	cout << "������� ��� ����������\n";

	cin >> aircraft.enginesType;

	cout << "��� ����������: " << aircraft.enginesType << endl;

}

void BaseBuilder::getEnginesNum()

{

	cout << "������� ���������� ����������\n";

	cin >> aircraft.enginesNum;

	cout << "���������� ����������: " << aircraft.enginesNum << endl;

}

void BaseBuilder::getWingsArrangement()

{

	cout << "������� ������������ �������\n";

	cin >> aircraft.wingsArrangement;

	cout << "������������ �������: " << aircraft.wingsArrangement << endl;

}

void BaseBuilder::getChassisType()

{

	cout << "������� ��� �����\n";

	cin >> aircraft.chassisType;

	cout << "��� �����: " << aircraft.chassisType << endl;

}

void BaseBuilder::getFlightSpeed()

{

	cout << "������� �������� �����\n";

	cin >> aircraft.flightSpeed;

	cout << "�������� �����: " << aircraft.flightSpeed << endl;

}

void BaseBuilder::getTakeoffType()

{

	cout << "������� ��� �����\n";

	cin >> aircraft.takeoffType;

	cout << "��� �����: " << aircraft.takeoffType << endl;
}