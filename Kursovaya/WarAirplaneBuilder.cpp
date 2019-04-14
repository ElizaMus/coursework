#include "WarAirplaneBuilder.h"
WarAirplaneBuilder::WarAirplaneBuilder()

{

}

void WarAirplaneBuilder::setIsMilitary()

{

	aircraft.isMilitary = true;

}

void WarAirplaneBuilder::setAircraftType()

{

	aircraft.aircraftType = "Боевой самолет";

}

void WarAirplaneBuilder::setManagementMethod()

{

	aircraft.managementMethod = "Ручное управление";

}

Aircraft WarAirplaneBuilder::getAndSaveResult()

{

	ofstream out;

	out.open("warAirplane.txt", std::ios_base::app);

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

WarAirplaneBuilder::~WarAirplaneBuilder()

{

}