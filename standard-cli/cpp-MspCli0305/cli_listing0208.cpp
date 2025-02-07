// From Apress Pro Visual C++ and the .NET 3.5 Platform, Page 77
// Listing 2-8. A Value Class in Action

using namespace System;

// Value class in Action
value class Coord3D
{
public:
	double x;
	double y;
	double z;

	Coord3D(double x, double y, double z)
	{
		this->x = x;
		this->y = y;
		this->z = z;
	}

	String^ Write()
	{
		return String::Format("{0},{1},{2}", x, y, z);
	}
};

void main()
{
	Coord3D coordA;
	Coord3D coordB(1, 2, 3);

	coordA = coordB;

	coordA.x += 5.5;	// Operations work just as usual
	coordA.y *= 2.7;
	coordA.z /= 1.3;

	Console::WriteLine(coordB.Write());
	Console::WriteLine(coordA.x);
	Console::WriteLine(coordA.y);
	Console::WriteLine(coordA.z);
}
