#ifndef ANIMAL_H
#define ANIMAL_H

class animal 
{
	private:
	int weight;
	static int animalCount;
	static int animalWeight;
	static int randomVal;
	int z=22;
	public:

	animal();
	~animal();
	void changeWeight(int);
	int getWeight() const;
	int getrandomVal() const;
	int getanimalCount() const
	{
		return animalCount;
	}
	int getanimalWeight() const
	{
		return animalWeight;
	}
	static void changerandomVal(int);

	friend void printZ(animal);
};

#endif
