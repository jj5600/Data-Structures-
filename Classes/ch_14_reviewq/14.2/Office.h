#ifndef OFFICE_H
#define OFFICE_H

class Budget;


class Office {

private:
int officeNum;
static int officeCount;

public:
Office();
~Office();
void addBud(double,Budget &);
double rBud(Budget &);
int oCount() const
{
	return officeCount;
}

};

#endif
