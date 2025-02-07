// File: bvc2010-ex0316.cpp
// Testing key presses in a loop

using namespace System;

int main(array<System::String ^> ^args) {
	Console::WriteLine(L"Press a key combination - press Escape to quit.");
	ConsoleKeyInfo keyPress;

	do {
		keyPress = Console::ReadKey(true);
		Console::Write(L"You pressed");
		if (safe_cast <int> (keyPress.Modifiers) > 0)
			Console::Write(L" {0},", keyPress.Modifiers);
		Console::WriteLine(L" {0} which is the {1} character",
			keyPress.Key, keyPress.KeyChar);
	} while( keyPress.Key != ConsoleKey::Escape);
	
	return 0;
}
