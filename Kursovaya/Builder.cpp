#include "BaseBuilder.h"
#include "Helicopter.h"

#include "Quadrupter.h"

#include "WarAirplaneBuilder.h"

#include "PassangerAirplaneBuilder.h"

#include <iostream>

//#include <conio.h>

using namespace std;

int main()

{

	setlocale(LC_ALL, "Russian");

	BaseBuilder* builder;

	Aircraft aircraft;

	double takeoffWeight = 0, fs = 0;

	string tow, wa, ct, tot, lt, wt;

	int en = 0, c = 0, py = 0;

	int button = 1;

	while (button) {

		cout << "������� � ��������� �������� ������������ ��������. ��� �� �� ������ �������?\n";

		cout << "|1| - ������������ ������;\n";

		cout << "|2| - ������� ������;\n";

		cout << "|3| - �������;\n";

		cout << "|4| - ������������;\n";

		cout << "|0| - ������ �� ����.\n";

		cin >> button;

		switch (button) {

		case 1:

			//������������ �������

			builder = new PassangerAirplaneBuilder();

			cout << "�������� ������������� �������" << endl;

			builder->setAircraftType();

			builder->setIsMilitary();

			builder->setManagementMethod();

			builder->setTakeoffWeight(takeoffWeight);

			builder->setEnginesType(tow);

			builder->setEnginesNum(en);

			builder->setWingsArrangement(wa);

			builder->setChassisType(ct);

			builder->setFlightSpeed(fs);

			builder->setTakeoffType(tot);

			builder->setLandingType(lt);

			builder->setCrew(c);

			builder->setProductionYear(py);

			builder->setWeaponType(wt);

			builder->getAircraftType();

			builder->getIsMilitary();

			builder->getManagementMethod();

			builder->getTakeoffWeight();

			builder->getEnginesType();

			builder->getEnginesNum();

			builder->getWingsArrangement();

			builder->getChassisType();

			builder->getFlightSpeed();

			builder->getTakeoffType();

			builder->getLandingType();

			builder->getCrew();

			builder->getProductionYear();

			builder->getWeaponType();

			aircraft = builder->getAndSaveResult();

			delete builder;

			break;

		case 2:

			//������ ������

			builder = new WarAirplaneBuilder();

			builder->setAircraftType();

			builder->setIsMilitary();

			builder->setManagementMethod();

			builder->setTakeoffWeight(takeoffWeight);

			builder->setEnginesType(tow);

			builder->setEnginesNum(en);

			builder->setWingsArrangement(wa);

			builder->setChassisType(ct);

			builder->setFlightSpeed(fs);

			builder->setTakeoffType(tot);

			builder->setLandingType(lt);

			builder->setCrew(c);

			builder->setProductionYear(py);

			builder->setWeaponType(wt);

			builder->getAircraftType();

			builder->getIsMilitary();

			builder->getManagementMethod();

			builder->getTakeoffWeight();

			builder->getEnginesType();

			builder->getEnginesNum();

			builder->getWingsArrangement();

			builder->getChassisType();

			builder->getFlightSpeed();

			builder->getTakeoffType();

			builder->getLandingType();

			builder->getCrew();

			builder->getProductionYear();

			builder->getWeaponType();

			aircraft = builder->getAndSaveResult();

			delete builder;

			break;

		case 3:

			//�������

			builder = new Helicopter();

			builder->setAircraftType();

			builder->setIsMilitary();

			builder->setManagementMethod();

			builder->setTakeoffWeight(takeoffWeight);

			builder->setEnginesType(tow);

			builder->setEnginesNum(en);

			builder->setWingsArrangement(wa);

			builder->setChassisType(ct);

			builder->setFlightSpeed(fs);

			builder->setTakeoffType(tot);

			builder->setLandingType(lt);

			builder->setCrew(c);

			builder->setProductionYear(py);

			builder->setWeaponType(wt);

			builder->getAircraftType();

			builder->getIsMilitary();

			builder->getManagementMethod();

			builder->getTakeoffWeight();

			builder->getEnginesType();

			builder->getEnginesNum();

			builder->getWingsArrangement();

			builder->getChassisType();

			builder->getFlightSpeed();

			builder->getTakeoffType();

			builder->getLandingType();

			builder->getCrew();

			builder->getProductionYear();

			builder->getWeaponType();

			aircraft = builder->getAndSaveResult();

			delete builder;

			break;

		case 4:

			//������������

			builder = new Quadrupter();

			builder->setAircraftType();

			builder->setIsMilitary();

			builder->setManagementMethod();

			builder->setTakeoffWeight(takeoffWeight);

			builder->setEnginesType(tow);

			builder->setEnginesNum(en);

			builder->setWingsArrangement(wa);

			builder->setChassisType(ct);

			builder->setFlightSpeed(fs);

			builder->setTakeoffType(tot);

			builder->setLandingType(lt);

			builder->setCrew(c);

			builder->setProductionYear(py);

			builder->setWeaponType(wt);

			builder->getAircraftType();

			builder->getIsMilitary();

			builder->getManagementMethod();

			builder->getTakeoffWeight();

			builder->getEnginesType();

			builder->getEnginesNum();

			builder->getWingsArrangement();

			builder->getChassisType();

			builder->getFlightSpeed();

			builder->getTakeoffType();

			builder->getLandingType();

			builder->getCrew();

			builder->getProductionYear();

			builder->getWeaponType();

			aircraft = builder->getAndSaveResult();

			delete builder;

			break;

		case 0: break;

		}

	}

	return 0;

}