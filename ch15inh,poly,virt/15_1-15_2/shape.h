#ifndef SHAPE_H
#define SHAPE_H
class shape
{
	protected:
	int length;
	int width;

	public:
	shape();
	~shape();
	void setWidth(int);
	void setLength(int);
	int getWidth() const;
	int getLength() const;
	int getArea() const;
};
#endif
