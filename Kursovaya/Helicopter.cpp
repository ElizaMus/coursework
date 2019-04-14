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

	aircraft.aircraftType = "Вертолет";

}

void Helicopter::setManagementMethod()

{

	aircraft.managementMethod = "Ручное управление";

}

Aircraft Helicopter::getAndSaveResult()

{

	ofstream out;

	out.open("helicopters.txt", std::ios_base::app);

	out << "----------------\n";

	out << "Тип аппарата: " << aircraft.aircraftType << endl;

	out << "Военный?: " << (aircraft.isMilitary ? "Да" : "Нет") << endl;

	out << "Взлетная масса: " << aircraft.takeoffWeight << endl;

	out << "Тип двигателей: " << aircraft.enginesType << endl;

	out << "Количество двигателей: " << aircraft.enginesNum << endl;

	out << "Расположение крыльев: " << aircraft.wingsArrangement << endl;

	out << "Тип шасси: " << aircraft.chassisType << endl;

	out << "Скорость полета: " << aircraft.flightSpeed << endl;

	out << "Тип взлета: " << aircraft.takeoffType << endl;

	out << "Тип посадки: " << aircraft.landingType << endl;

	out << "Способ управления: " << aircraft.managementMethod << endl;

	out << "Экипаж: " << aircraft.crew << endl;

	out << "Год производства: " << aircraft.productionYear << endl;

	out << "Тип вооружения: " << aircraft.weaponType << endl;

	out << "----------------\n";

	out.close();

	return aircraft;

}