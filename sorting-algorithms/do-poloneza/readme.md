# Treść zadania

Piotr, gdy tylko przekroczył próg domu usłyszał głos rodzica.

- Pioter! Podejdź, no. Będziesz miał bojowe zadanie.
  Chłopak posłusznie podreptał za głosem do kuchni, gdzie zastał ojca ślęczącego nad stosem tabel.
- Twoja siostra Andżela będzie miała w tym roku w szkole bal na zakończenie ósmej klasy. Jak wiesz jestem w trójce klasowej. Zgadnij kogo dyrektorka poprosiła o podobieranie dziewczynek i chłopców w pary do odtańczenia poloneza?
- Ciebie, tato?
- Synek, ja Ci wróżę z tą Twoją dedukcją świetlaną przyszłość. Pani dyrektor chciała uporządkować ich malejąco pod względem średniej ocen, odległości miejsca zamieszkania od szkoły i miesiąca urodzin. Tylko jeszcze nie zdecydowała o kolejności kryteriów. To się okaże tuż przed balem. Dlatego mi, Pioter, pomożesz. Ja tu już trochę poparowałem. W każdym wierszu masz po kolei: dziewczynka i trzy wartości (średnia, odległość, miesiąc urodzenia), a dalej chłopiec i znowu trzy wartości. Napiszesz mi program, który ustawi mi oddzielnie dziewczynki i chłopców w dobrej kolejności i podobiera ich po kolei w pary.
- X23ae7k? - przeczytał Piotr. - Jest takie imię?
- Pioter, nie wygłupiaj się, to kody przypisane uczniom. Przecież pani dyrektor nie mogła mi przekazać prawdziwych imion i nazwisk. RODO, mówi Ci to coś?

Piotr przez krótką chwilę zastanawiał się czy dobrze zrobił przyznając się ojcu do swoich umiejętności programistycznych, ale po krótkiej refleksji zabrał się do pracy.

### Wejście:

W pierwszej linii wejścia znajduje się liczba całkowita n. W drugiej linii wejścia znajdują się trzy litery oddzielone spacjami: 's', 'd' i 'm', a ich kolejność decyduje o kolejności uporządkowania dzieci. W kolejnych n liniach są wiersze opisujące kolejne pary uczniów szkoły. Każda linia składa się z opisu dwóch uczniów: dziewczynki i chłopca. Na opis ucznia składa się kolejno jednowyrazowy napis kod oznaczający kod ucznia, jednej liczby zmiennoprzecinkowej s oznaczającej średnią, dwóch liczb całkowitych d i m, oznaczajacych kolejno odległość od miejsca zamieszkania w metrach oraz numer miesiąca urodzenia ucznia. Miesiące numerowane są od 1.

1 ≤ n ≤ 1000000

### Wyjście:

Na wyjściu program powinien wypisać uporządkowane listy dziewczynek i chłopców w parach według podanej kolejności kryteriów. Para powinna być wyświetlona w postaci: kod1 kod2. Całą listę należy wyświetlić w jednej linii. W przypadku dwóch uczniów, których wszystkie odpowiadające wartości są równe, należy zachować kolejność wystąpienia na liście.

## Przykład:

### Wejście:

5
m s d
XXX1 3.5 345 12 YYY1 3.5 400 1
XXX2 4.5 23 2 YYY2 2.3 400 1
XXX3 3.5 120 12 YYY3 2.3 500 1
XXX4 5.1 323 3 YYY4 2.3 600 1
XXX5 5.1 4000 5 YYY5 3.5 400 1

### Wyjście:

XXX1 YYY1 XXX3 YYY5 XXX5 YYY4 XXX4 YYY3 XXX2 YYY2

## Uwaga! Nie można używać bibliotek STL.
