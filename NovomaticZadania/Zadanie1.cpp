#include "Zadanie1.h"

template <typename T>
SelfOrganizingList<T>::SelfOrganizingList() {
	myList = NULL;
	listSize = 0;
}
template <typename T>
void SelfOrganizingList<T>::addElement(T val) {
	List <T>* tmp = new List<T>;
	tmp->elementValue = val;
	tmp->next = myList;
	myList = tmp;
	listSize++;
}
template <typename T>
void SelfOrganizingList<T>::eraseFront() {
	List <T>* tmp = myList;
	myList = tmp->next;
	listSize--;
	delete tmp;
}
template <typename T>
void SelfOrganizingList<T>::searchElement(T val) {
	List <T>* tmp = new List<T>;
	List <T>* prev = new List<T>;
	bool found = false;
	prev->next = NULL; // gdyby szukany element bylby na 1 pozycji
	for (List<T>* i = myList; i != NULL; i = i->next) {
		if (val == i->elementValue) {
			prev->next = i->next; // odlaczamy strukture i
			i->next = myList; // przylaczamy strukture i na poczatek listy
			myList = i;
			found = true;
		}
		else
			prev = i; //zeby miec adres do struktury zawierajaca szukana wartosc
	}
	if (!found) {
		std::cout << "Not found, creating it\n";
		addElement(val);
	}
}
template <typename T>
void SelfOrganizingList<T>::printList(std::string separator) {
	for (List <T>* i = myList; i != NULL; i = i->next) {
		std::cout << i->elementValue << separator;
	}
	std::cout << "\n";
}
template <typename T>
List <T>* SelfOrganizingList<T>::getList() {
	return myList;
}
template <typename T>
size_t SelfOrganizingList<T>::size() {
	return listSize;
}

