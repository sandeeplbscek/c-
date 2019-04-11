#ifndef COUNTER
#define COUNTER
class counter
{
protected:
	int count;
public:
	counter();
	counter(int );
	void display();
	void operator++();
};
#endif