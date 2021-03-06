#pragma once
#include <iostream>
#include <string>

using int32 = int;
using FText = std::string;


enum class WeaponTypes
{
	Rifle,
	Pistol,
	RocketLauncher,
	Sword
};

//Randomly generate a weapon.
class Weapon
{
public:
	//Function Declarations...
	int32 GetNameNum();
	void GetWeapon(WeaponTypes type);
	WeaponTypes DetermineWeaponType();

private:
	//Variable Declarations...
	FText weaponType;
};


//Inheritances...

class Pistol : public Weapon
{
public:
	FText GetPerks(char perks, FText name);
	void PrintPerks(char perks[], Pistol pistol);
};

class Rifle : public Weapon
{
public:
	FText GetPerks(char perks, FText name);
	void PrintPerks(char perks[], Rifle rifle);
};

class RocketLauncher : public Weapon
{
public:
	FText GetPerks(char perks, FText name);
	void PrintPerks(char perks[], RocketLauncher rocketLauncher);
};

class Sword : public Weapon
{
public:
	FText GetPerks(char perks, FText name);
	void PrintPerks(char perks[], Sword sword);
};
