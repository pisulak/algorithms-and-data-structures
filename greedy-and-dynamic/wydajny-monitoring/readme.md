# Treść zadania

Zarząd firmy OBH postanowił zatrudnić nowych pracowników. Nowi jak na korporację z prawdziwego zdarzenia przystało zostali "zakwaterowani" w kwadratowym pomieszczeniu o długości n metrów, podzielonym na n^2 równych kwadratowych boksów, każdy ze stanowiskiem do pracy (klaustrofobiczne warunki zostały wynagrodzone możliwością pracy w młodym i dynamicznym zespole). Oznacza to, że w pomieszczeniu takim znajdowało się n rzędów i n kolumn z boksami dla n^2 pracowników.

Niestety po pewnym czasie okazało się, że pracownicy nie są zbyt wydajni, a na ekranach ich stacji roboczych najczęściej gości pasjans. Dział Happiness Management zaproponował zamontowanie zestawu kamer, by efektywnie kontrolować poziom motywacji pracowników, na co kierownictwo OBH z radością przystało. Pojawiły się jednak trzy problemy. Po pierwsze zamówione kamery okazały się odrobinę budżetowe i były w stanie monitorować obraz o szerokości jednego metra wzdłuż i wszerz miejsca, w którym zostały zamontowane. To znaczy, że przykładowa kamera umieszczona w 2 rzędzie i 3 kolumnie mogła obserwować tylko pracowników z 2 rzędu i 3 kolumny. Po drugie kamery nie mogły się nawzajem "widzieć", bo wynikowy obraz byłby zaburzony. Po trzecie kamer nie można było ustawić dowolnie. W każdej kolumnie były wyznaczone obszary, gdzie było to możliwe.

Czołowi programiści OBH - Ada i Serweryn dostali nowe zadanie. Mieli napisać program, który dla podanego kwadratowego pomieszczenia odpowie na pytanie, czy możliwe jest rozstawienie n kamer tak, by spełniały wszystkie warunki oraz by każdy pracownik w pomieszczeniu był monitorowany.

### Wejście

W pierwszej linii wejścia podana jest liczba naturalna t, oznaczająca liczbę sprawdzanych pomieszczeń. Następnie podanych jest t zestawów danych. W pierwszej linii każdego testu podana jest liczba naturalna n, oznaczająca wymiar kwadratowego pomieszczenia. Następnie w kolejnych n liniach (odpowiadających kolejnym kolumnom macierzy reprezentującej pomieszczenie) podane są dwie liczby naturalne a i b - numery rzędów, które są początkiem i końcem obszaru, gdzie możliwe jest zainstalowanie kamery w danej kolumnie. Rzędy i kolumny numerowane są od 0.

### Wyjście

Na wyjściu dla każdego testu program ma wypisać słowo TAK jeżeli dla podanego pomieszczenia możliwe jest rozstawienie kamer lub słowo NIE w przeciwnym wypadku.

1 ≤ n ≤ 100000
0 ≤ a ≤ b < n

## Przykład

### Wejście:

1
7
2 4
0 2
2 2
2 6
0 2
2 3
1 5

### Wyjście:

TAK

## Wyjaśnienie: Dla kolejnych kolumn moglibyśmy ustawić kamery w rzędach o tych numerach: 4 0 2 6 1 3 5.
