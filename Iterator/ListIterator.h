#include "Iterator.h";
#include "List.h";
template <class Item>
class ListIterator : public Iterator<Item>{
    ListIterator(const List<Item>* aList);

    virtual void First();
    virtual void Next();
    virtual bool IsDone() const;
    virtual Item CurrentItem() const;
    private:
        long _current;
        List<Item>* _list;
};