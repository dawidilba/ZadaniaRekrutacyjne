#pragma once
#include <iostream>

/*Zadanie 1
Zaproponowaæ implementacjê samoorganizuj¹cej siê listy, dla której
dostêp do najczêœciej wyszukiwanych elementów jest najkrótszy.
*/

/*
Do rozwiazania problemu wykorzystalem liste jednokierunkowa. Wystarczy zmieniac wskaznik elementow. Na poczatku chcialem
skorzystac z std::forward_list, ale nie ma w niej gotowej funckji zeby przesunac element na poczatek(swap nie mozemy wykorzystac,
bo zalezy nam na kolejnosci) a nie bêdziemy przeciez usuwaæ elementu i znow dodawac go na poczatek. Dlatego stworzylem wlasna
liste ze strutur. Po wykonaniu zadania postanowilem rozbudowac program o dodanie template ktory umozliwia na zmiane typu listy bez
zmiany w kodzie (w tresci zadania nie bylo okreslone jakiego typu lista ma byc)
*/

template <typename T>
struct List {
	T elementValue;
	List* next;
};

template <typename T>
class SelfOrganizingList {
	List <T>* myList;
	size_t listSize;
public:
	SelfOrganizingList();
	void addElement(T val);
	void eraseFront();
	void searchElement(T val);
	void printList(std::string separator);
	List <T>* getList();
	size_t size();
};