#include "CompositeEquipment.h";
class Cabinet : public CompositeEquipment{
    public:
        Cabinet(const char*);
        virtual ~Cabinet();
        virtual Watt Power();
        virtual Currency NetPrice();
        virtual Currency DiscountPrice();
};