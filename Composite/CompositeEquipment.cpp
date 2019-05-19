#include "CompositeEquipment.h";
Currency CompositeEquipment::NetPrice(){
    Iterator<Equipment>* i = CreateIterator();
    Currency total = 0;
    for(i->First(); !i->IsDone(); i->Next()) {
        total += i->CurrentItem()->NetPrice();
    }
    delete i;
    return total;
};