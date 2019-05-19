#include "CompositeEquipment.h";
class Bus : public CompositeEquipment{
    public:
        Bus(const char*);
        virtual ~Bus();
        virtual Watt Power();
        virtual Currency NetPrice();
        virtual Currency DiscountPrice();
};