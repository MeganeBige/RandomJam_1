#include "Character/Wizard.hpp"

Wizard::Wizard(std::string name, unsigned int life, int x, int y):
    Character(name, life, x, y, WIZARD_DAMAGE, WIZARD_RANGE, WIZARD_PRECISION)
{
    // Empty
}

Wizard::~Wizard()
{
    // Empty
}
