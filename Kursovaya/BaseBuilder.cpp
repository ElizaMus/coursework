#include "BaseBuilder.h"

void BaseBuilder::setLandingType(string landingType)

{

	aircraft.landingType = landingType;

}

void BaseBuilder::setManagementMethod()

{

	aircraft.managementMethod = "Без управления";

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

	aircraft.aircraftType = "Базовая модель";

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

	cout << "Введите тип посадки\n";

	cin >> aircraft.landingType;

	cout << "Тип посадки: " << aircraft.landingType << endl;

}

void BaseBuilder::getManagementMethod()

{

	cout << "Метод управления: " << aircraft.managementMethod << endl;

}

void BaseBuilder::getCrew()

{

	cout << "Введите количество экипажа\n";

	cin >> aircraft.crew;

	cout << "Количество экипажа: " << aircraft.crew << endl;

}

void BaseBuilder::getProductionYear()

{

	cout << "Введите год производства\n";

	cin >> aircraft.productionYear;

	cout << "Год производства: " << aircraft.productionYear << endl;

}

void BaseBuilder::getWeaponType()

{

	cout << "Введите тип оружия\n";

	cin >> aircraft.weaponType;

	cout << "Тип оружия: " << aircraft.weaponType << endl;

}

void BaseBuilder::getIsMilitary()

{

	cout << "Аппарат ВОЕННЫЙ?: " << aircraft.isMilitary << endl;

}

void BaseBuilder::getAircraftType()

{

	cout << "Тип летательного аппарата: " << aircraft.aircraftType << endl;

}

void BaseBuilder::getTakeoffWeight()

{

	cout << "Введите взлётную массу\n";

	cin >> aircraft.takeoffWeight;

	cout << "Взлётная масса равна: " << aircraft.takeoffWeight << endl;

}

void BaseBuilder::getEnginesType()

{

	cout << "Введите тип двигателей\n";

	cin >> aircraft.enginesType;

	cout << "Тип двигателей: " << aircraft.enginesType << endl;

}

void BaseBuilder::getEnginesNum()

{

	cout << "Введите количество двигателей\n";

	cin >> aircraft.enginesNum;

	cout << "Количество двигателей: " << aircraft.enginesNum << endl;

}

void BaseBuilder::getWingsArrangement()

{

	cout << "Введите расположение крыльев\n";

	cin >> aircraft.wingsArrangement;

	cout << "Расположение крыльев: " << aircraft.wingsArrangement << endl;

}

void BaseBuilder::getChassisType()

{

	cout << "Введите тип шасси\n";

	cin >> aircraft.chassisType;

	cout << "Тип шасси: " << aircraft.chassisType << endl;

}

void BaseBuilder::getFlightSpeed()

{

	cout << "Введите скорость полёта\n";

	cin >> aircraft.flightSpeed;

	cout << "Скорость полёта: " << aircraft.flightSpeed << endl;

}

void BaseBuilder::getTakeoffType()

{

	cout << "Введите тип взлёта\n";

	cin >> aircraft.takeoffType;

	cout << "Тип взлёта: " << aircraft.takeoffType << endl;
}