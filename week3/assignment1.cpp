#include <iostream>

int code() {
	return 0;
}


int bss;

int main() {
	static int data=10;
	const char * rodata="ABC";
	int *heap=new int[2];
	int stack=30;

	std::cout << "code\t" << (void*) code << std::endl;
	std::cout << "Rodata\t" << (void*) rodata << std::endl;
	std::cout << "data\t" << &data << std::endl;
	std::cout << "BSS\t" << &bss << std::endl;
	std::cout << "HEAP\t" << heap << std::endl;
	std::cout << "Stack\t" << &stack << std::endl;

	return 0;
}
