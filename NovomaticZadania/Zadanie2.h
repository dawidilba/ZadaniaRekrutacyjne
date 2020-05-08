#pragma once
#include <iostream>
#include <array>
#include <vector>
#include <queue>

/*Zadanie 2
Obiekt w grze mo�e posiada� kilka "deformacji", kt�rych mo�na u�y� do odkszta�cenia jego oryginalnej geometrii. Si�a odkszta�cenia kontrolowana jest za pomoc� wagi,
gdzie 0.0 to brak odkszta�cenia, a 1.0 to maksymalne odkszta�cenie. Wagi s� animowane co umo�liwia uzyskanie p�ynnych w czasie odkszta�ce� obiektu.
Obiekt mo�e by� jednocze�nie odkszta�cony wi�cej ni� jedn� "deformacj�", ale silnik renderuj�cy jest w stanie zaaplikowa� tylko 4 jednocze�nie w trakcie klatki.
Dlatego nale�y wybra� te "deformacje", kt�re w danej chwili maj� najwi�kszy wp�yw na kszta�t geometrii. Zaimplementuj funkcj� pickMorphs.

Interfejs funkcji: std::array<int, 4> pickMorphs(const std::vector<float>& weights);
gdzie: weights - tablica kt�rej indeksy to identyfikatory "deformacji", a warto�ci reprezentuj� aktualne w danej klatce wagi.
warto�� zwracana: indeksy czterech "deformacji" z najwi�kszymi warto�ciami wag. Je�li deformacji by�o mniej ni� 4 nale�y zwr�ci� w tablicy -1. Kolejno�� indeks�w dowolna.

Uwagi:
Funkcja b�dzie wywo�ywana wielokrotnie w ka�dej klatce.
Wektor wej�ciowy to w skrajnych przypadkach oko�o 100 wag.
Zabronione jest alokowanie pami�ci na stercie.*/

/*
Prosciej mowiac mamy napisac funkcje ktora przyjmuje vector wag i mamy zwr�cic 4 indeksy vectora dla ktorych wagi sa najwieksze
Do zrobienia zadania wykorzystalem std::pair, aby polaczyc wagi z nr indeksu vectora, oraz liste prioryterowej std::queue
*/

std::array<int, 4> pickMorphs(const std::vector<float>& weights);