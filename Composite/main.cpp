#include <iostream>;
#include "Chasis.h";
#include "Cabinet.h";
#include "Bus.h";
#include "FloppyDisk.h";
using namespace std;
Cabinet* cabinet = new Cabinet("PC Cabinet");
Chasis* chasis = new Chasis("PC Chasis");
Bus* bus = new Bus("MCA Bus");
cabinet->Add(chasis);
bus->Add(new Card("16Mbs Token Ring"));
chasis->Add(bus);
chasis->Add(new FloppyDisk("3.5in Floppy"));
cout<< "The net price is "<<chasis-> NetPrice() <<endl;
