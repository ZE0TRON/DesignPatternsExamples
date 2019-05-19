#include "CompositeEquipment.h";
class Chasis : public CompositeEquipment{
    public:
        Chasis(const char*);
        virtual ~Chasis();
        virtual Watt Power();
        virtual Currency NetPrice();
        virtual Currency DiscountPrice();
};