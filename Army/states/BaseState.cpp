#include "BaseState.h"

BaseState::BaseState(int hp, int dmg, const std::string& name) {
	this->hp = hp;
	this->maxHp = hp;
	this->damage = dmg;
	this->name = new std::string(name);
	this->isUndead = false;
	this->isWereWolf = false;
	this->isVampire = false;
};

BaseState::~BaseState() {
	delete (this->name);
};

int BaseState::getHp() const {
	return this->hp;
};

int BaseState::getMaxHp() const {
	return this->maxHp;
};

int BaseState::getDmg() const {
	return this->damage;
};

std::string& BaseState::getName() const {
	return *(this->name);
};

bool BaseState::getIsUnDead() const {
	return this->isUndead;
};

bool BaseState::getIsWereWolf() const {
	return this->isWereWolf;
};

bool BaseState::getIsVampire() const {
	return this->isVampire;
};

bool BaseState::BaseState::isDead() {
	return this->hp == 0;
};

void BaseState::becomeUnDead() {
	this->isUndead = true;
};

void BaseState::becomeWerewolf() {
	this->isWereWolf = true;
};

void BaseState::becomeVampire() {
	this->isVampire = true;
};

void BaseState::checkState() {
	if ( this->hp < 0 ) { this->hp = 0; }
	if ( this->hp > this->maxHp ) { this->hp = this-> maxHp; }
};

void BaseState::addHealthPoints(int hp) {
	this->hp += hp;
	this->checkState();
}

void BaseState::takePDamage(int dmg) {
	this->hp -= dmg;
	this->checkState();
};

void BaseState::takeMDamage(int dmg) {
	this->hp -= dmg;
	this->checkState();
};

std::ostream& operator<<(std::ostream& out, BaseState& state) {
	out << state.getName();
	out << ", hp: " << state.getHp() << "/" << state.getMaxHp();
	out << ", dmg: " << state.getDmg();
	out << ", isUnDead: " << state.getIsUnDead(); 
 
	return out;
};
