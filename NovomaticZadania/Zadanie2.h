#pragma once
#include <iostream>
#include <array>
#include <vector>
#include <queue>

/*Zadanie 2
Obiekt w grze mo¿e posiadaæ kilka "deformacji", których mo¿na u¿yæ do odkszta³cenia jego oryginalnej geometrii. Si³a odkszta³cenia kontrolowana jest za pomoc¹ wagi,
gdzie 0.0 to brak odkszta³cenia, a 1.0 to maksymalne odkszta³cenie. Wagi s¹ animowane co umo¿liwia uzyskanie p³ynnych w czasie odkszta³ceñ obiektu.
Obiekt mo¿e byæ jednoczeœnie odkszta³cony wiêcej ni¿ jedn¹ "deformacj¹", ale silnik renderuj¹cy jest w stanie zaaplikowaæ tylko 4 jednoczeœnie w trakcie klatki.
Dlatego nale¿y wybraæ te "deformacje", które w danej chwili maj¹ najwiêkszy wp³yw na kszta³t geometrii. Zaimplementuj funkcjê pickMorphs.

Interfejs funkcji: std::array<int, 4> pickMorphs(const std::vector<float>& weights);
gdzie: weights - tablica której indeksy to identyfikatory "deformacji", a wartoœci reprezentuj¹ aktualne w danej klatce wagi.
wartoœæ zwracana: indeksy czterech "deformacji" z najwiêkszymi wartoœciami wag. Jeœli deformacji by³o mniej ni¿ 4 nale¿y zwróciæ w tablicy -1. Kolejnoœæ indeksów dowolna.

Uwagi:
Funkcja bêdzie wywo³ywana wielokrotnie w ka¿dej klatce.
Wektor wejœciowy to w skrajnych przypadkach oko³o 100 wag.
Zabronione jest alokowanie pamiêci na stercie.*/

/*
Prosciej mowiac mamy napisac funkcje ktora przyjmuje vector wag i mamy zwrócic 4 indeksy vectora dla ktorych wagi sa najwieksze
Do zrobienia zadania wykorzystalem std::pair, aby polaczyc wagi z nr indeksu vectora, oraz liste prioryterowej std::queue
*/

std::array<int, 4> pickMorphs(const std::vector<float>& weights);