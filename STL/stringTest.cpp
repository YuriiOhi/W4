#include <iostream>
#include <fstream>

int main() {

	FILE * in = fopen("task.in", "r");

	char name[50];

	fscanf(in, "%s", name);

	std:: cout << name << std::endl;

	return 0;
}