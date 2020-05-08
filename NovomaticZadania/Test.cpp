#include "Test.h"

void Zad1Test() {
	std::cout << "Zadanie1\nTesting <int>list..\n";
	SelfOrganizingList <int> intList;
	for (int i = 0; i < 10; i++) {
		intList.addElement(i + 1);
	}
	intList.printList(" ");
	intList.eraseFront();
	assert(intList.getList()->elementValue == 9);
	std::cout << "Deleting front element..\n";
	intList.printList(" ");
	intList.eraseFront();
	assert(intList.getList()->elementValue == 8);
	std::cout << "Deleting another front element..\n";
	intList.printList(" ");
	intList.searchElement(4);
	assert(intList.getList()->elementValue == 4);
	std::cout << "Searching '4'..\n";
	intList.printList(" ");
	intList.searchElement(1);
	assert(intList.getList()->elementValue == 1);
	std::cout << "Searching '1'..\n";
	intList.printList(" ");
	intList.searchElement(2);
	assert(intList.getList()->elementValue == 2);
	std::cout << "Searching '2'..\n";
	intList.printList(" ");
	intList.searchElement(1);
	assert(intList.getList()->elementValue == 1);
	std::cout << "Searching '1'..\n";
	intList.printList(" ");
	intList.searchElement(12);
	assert(intList.getList()->elementValue == 12);
	std::cout << "Searching '12'..\n";
	assert(9 == intList.size());
	intList.printList(" ");
	std::cout << "Int List size is : " << intList.size() << "\n";

	std::cout << "\nTesting <string>list..\n";
	SelfOrganizingList <std::string> stringList;
	stringList.addElement("First Element");
	stringList.addElement("Second Element");
	stringList.addElement("Third Element");
	stringList.searchElement("First Element");
	assert(stringList.getList()->elementValue == "First Element");
	std::cout << "Searching 'First Element'..\n";
	stringList.printList(", ");
	stringList.searchElement("Third Element");
	assert(stringList.getList()->elementValue == "Third Element");
	std::cout << "Searching 'Third Element'..\n";
	stringList.printList(", ");
	assert(3 == stringList.size());
	std::cout << "String List size is : "<<stringList.size()<<"\n";
	std::cout << "Test passed!\n\n";
}
void Zad2Test() {
	std::cout << "Zadanie2\nTesting...\nComparing values...\n";
	std::array<int, 4> array;
	std::array<int, 4> arraySolution = { -1 };
	std::array<int, 4> array2;
	std::array<int, 4> array2Solution = { 3, 6, 0, 2 };
	std::array<int, 4> array3;
	std::array<int, 4> array3Solution = { 99, 98, 97, 96 };
	std::array<int, 4> array4;
	std::array<int, 4> array4Solution = { 0, 1, 2, 3 };
	std::vector<float> v = { 0.1f, 0.2f, 0.1f };
	std::vector<float> v2 = { 0.21f, 0.11f, 0.2f, 0.33f, 0.01f, 0.03f, 0.3f };
	std::vector<float> v3;
	std::vector<float> v4;
	for (int i = 1; i <= 100; i++) {
		v3.push_back(i / 100.0f);
		v4.push_back((-i + 101 / 100.0f));
	}
	array = pickMorphs(v);
	array2 = pickMorphs(v2);
	array3 = pickMorphs(v3);
	array4 = pickMorphs(v4);
	assert(array == arraySolution);
	assert(array2 == array2Solution);
	assert(array3 == array3Solution);
	assert(array4 == array4Solution);
	std::cout << "Test passed!\n";
}