#include "../Iterator/Iterator.h";

typedef double Watt ;
typedef double Currency;
//Component
class Equipment{
	public:
	  //Destructor
		virtual ~Equipment();
		const char* Name() {return _name};

		virtual Watt Power();
		virtual Currency NetPrice();
		virtual Currency DiscountPrice();
		virtual void Add(Equipment*);
		virtual void Remove(Equipment*);
		virtual Iterator<Equipment>* CreateIterator();
	protected:
		Equipment(const char*);
	private:
		const char * _name;
};