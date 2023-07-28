#ifndef CPP04_CHARACTER_HPP
#define CPP04_CHARACTER_HPP


// The Character possesses an inventory of 4 slots, which means 4 Materias at most. 
// The inventory is empty at construction. They equip the Materias in the first empty slot they find. 
// This means, in this order: from slot 0 to slot 3. In case they try to add a Materia to a full inventory, or use/unequip an unexisting Materia, don’t do anything (but still, bugs are forbidden). 
// The unequip() member function must NOT delete the Materia!

#include "ICharacter.hpp"
class Character : public ICharacter {
private:
    AMateria*   _inven[4];
    std::string _name;
public:
    Character( void );
    Character( std::string const & name );
    Character( Character const & src );
    Character & operator=( Character const & src );
    virtual ~Character( void );

    std::string const &getName() const;
    void equip( AMateria* m );
    void unequip( int idx );
    void use( int idx, ICharacter& target );
};
#endif