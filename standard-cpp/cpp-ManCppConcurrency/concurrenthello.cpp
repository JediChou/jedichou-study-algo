// File name: concurrenthello.cpp
// Reference: CPP Concurrency in Action.pdf
// Description:
//   List 1.1 A simple Hello, Concurrent World program

#include <iostream>
#include <thread>

void hello() {
	std::cout << "Hello Concurrent World\n";
}

int main() {
	std::thread t(hello);
	t.join();
}
