#include <string>
#include "Dot.h"
using namespace std;
class Triangle
{
public:
	Triangle(Dot& dot1, Dot& dot2, Dot& dot3) : d1(dot1), d2(dot2), d3(dot3) 
	{}
	
private:
	
	Dot& d1;
	Dot& d2;
	Dot& d3;
	
}; 

class TriangleAg
{
public:
	
	TriangleAg(Dot* dot1, Dot* dot2, Dot* dot3) : d1(dot1), d2(dot2), d3(dot3)
	{}
	
	TriangleAg(Dot& dot1, Dot& dot2, Dot& dot3)
	{
		d1 = new Dot(dot1);
		d2 = new Dot(dot2);
		d3 = new Dot(dot3);

	}
	
	~TriangleAg()
	{
		delete d1;
		delete d2;
		delete d3;
	}
private:
	
	Dot* d1;
	Dot* d2;
	Dot* d3;
};