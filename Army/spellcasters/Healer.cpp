#include "Healer.h"
#include "../spellBook/SpellBook.h"

Healer::Healer(const std::string& name)
	: SpellCaster(new WizardState(static_cast<int>(HP::HEALER),
								 static_cast<int>(M_DMG::HEALER),
								 static_cast<int>(MNA_LV::LOW),
								 name), 
				  new WizardAttack(this, 
				  new Heal(static_cast<int>(NUM::TWENTY), 
				               static_cast<int>(NUM::TWENTY), SpellBook::InitiateBook()))),

	Unit(new BaseState(static_cast<int>(HP::HEALER),
					   static_cast<int>(DMG::HEALER),
					   name),
		 new BaseAttack()) {
};

Healer::~Healer() {};

std::ostream& operator<<(std::ostream& out, Healer& healer) {
	out << "Healer [" << wizard.getState() << "]";
	
	return out;
}	

//- Wizard [Волшебник] : атакует боевыми заклинаниями (лечебные заклинания имеют только половину силы)
