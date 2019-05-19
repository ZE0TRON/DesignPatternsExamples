#include "Equipment.h";
#include "../Iterator/Iterator.h";
#include "../Iterator/List.h";
// Base class for Composite Elements
class CompositeEquipment : public Equipment{
    public :
        virtual ~CompositeEquipment();
        virtual Watt Power();
        virtual Currency NetPrice();
        virtual Currency DiscountPrice();
        virtual void Add(Equipment*);
        virtual void Remove(Equipment*);
        virtual Iterator<Equipment>* CreateIterator();
    protected:
        CompositeEquipment(const char*);
    private:
        List<Equipment> _equipments;
};