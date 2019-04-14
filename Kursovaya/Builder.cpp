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

		cout << "Сегодня в программе создание летательного аппарата. Что бы вы хотели создать?\n";

		cout << "|1| - Пассажирский самолёт;\n";

		cout << "|2| - Военный самолёт;\n";

		cout << "|3| - Вертолёт;\n";

		cout << "|4| - Квадрокоптер;\n";

		cout << "|0| - Ничего не хочу.\n";

		cin >> button;

		switch (button) {

		case 1:

			//Пассажирский самолет

			builder = new PassangerAirplaneBuilder();

			cout << "Создание пассажирского самолёта" << endl;

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

			//Боевой самолёт

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

			//Вертолёт

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

			//Квадрокоптер

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