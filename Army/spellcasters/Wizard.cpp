#include "Wizard.h"
#include "../spellBook/SpellBook.h"

Wizard::Wizard(const std::string& name)
	: SpellCaster(new WizardState(static_cast<int>(HP::WIZARD),
								 static_cast<int>(M_DMG::WIZARD),
								 static_cast<int>(MNA_LV::LOW),
								 name), 
				  new WizardAttack(this, 
				  new FireBall(static_cast<int>(NUM::TEN), 
				               static_cast<int>(NUM::TWENTY), SpellBook::InitiateBook()))),

	Unit(new BaseState(static_cast<int>(HP::WIZARD),
					   static_cast<int>(DMG::WIZARD),
					   name),
		 new BaseAttack()) {
};

Wizard::~Wizard() {};

std::ostream& operator<<(std::ostream& out, Wizard& wizard) {
	out << "Wizard [" << wizard.getState() << "]";
	
	return out;
}	

//- Wizard [Волшебник] : атакует боевыми заклинаниями (лечебные заклинания имеют только половину силы)
