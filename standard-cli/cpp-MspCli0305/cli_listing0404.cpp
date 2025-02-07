// From Apress Pro Visual C++/CLI and the .NET 3.5 Platform, Page 185
// Listing 4-4. Card.cpp: Traditional Method

using namespace System;

#include "cli_listing0403.h"
using namespace Cards;

Card::Card(int type, Suits suit)
{
	Type = type;
	Suit = suit;
}

int Card::Type::get()
{
	return type;
}

void Card::Type::set(int value)
{
	type = value;
}

Suits Card::Suit::get()
{
	return suit;
}

void Card::Suit::set(Suits value)
{
	suit = value;
}

String^ Card::ToString()
{
	String ^t;

	if(Type > 1 && Type < 11)
		t = Type.ToString();
	else if (Type == 1)
		t = "A";
	else if (Type == 11)
		t = "J";
	else if (Type == 12)
		t = "Q";
	else
		t = "K";

	switch (Suit)
	{
		case Suits::Heart:
			return String::Concat(t, gcnew String((Char)3, 1));
		case Suits::Diamond:
			return String::Concat(t, gcnew String((Char)4, 1));
		case Suits::Club:
			return String::Concat(t, gcnew String((Char)5, 1));
		default:  // Spade
			return String::Concat(t, gcnew String((Char)6, 1));
	}
}
