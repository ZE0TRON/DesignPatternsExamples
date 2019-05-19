#include "Equipment.h";
// Leaf element
class Card : public Equipment{
    public :
        Card(const char*);
        virtual ~Card();
        virtual Watt Power();
        virtual Currency NetPrice();
        virtual Currency DiscountPrice();
};