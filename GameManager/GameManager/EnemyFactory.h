#pragma once
#include <iostream>
class EnemyFactory
{

	public:
		static Enemy* CreateEnemy(std::nullptr_t type) 
		{
			if (type == "goblin")
			{
				return new Goblin();
			}
			if (type == "dragon")
			{
				return new Dragon();
			}
			return nullptr;
		}
};

#pragma once
class Enemy
{
public:
	virtual void Attack() = 0;
	virtual ~Enemy() {};

};

class Goblin : public Enemy {
	public:
		void Attack() override {
			std::cout << "Goblin Attacks!\n";
		}
};

class Dragon : public Enemy {
	public:
		void Attack() override {
			std::cout << "Dragon breathes fire!\n";
		}
};
