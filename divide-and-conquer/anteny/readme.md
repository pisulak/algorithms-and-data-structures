# Treść zadania

"Kapitan Kirk wspina się na górę. Dlaczego wspina się na górę?"
Dlatego, że Wielki Nagus od wielu już lat planował modernizację sieci komunikacyjnej na Ferenginarze. W tym celu chciał ustawić wieże antenowe i o pomoc poprosił kapitana Kirka. Najlepiej by było, gdyby anteny znajdowały się w miejscach na wzniesieniach.

Kapitan Kirk udał się do miejscowego Kartografa i poprosił o prostokątne mapy reprezentujące teren o wymiarach nxm metrów, podzielone na kwadraty 1x1 metr. Każdy taki kwadrat miał posiadać informację o średniej wysokości terenu na tym metrze kwadratowym względem poziomu oceanu (ocean ma poziom 0). Wiadomo, że tak jak to z mapami bywa, wysokości nie mają wartości losowych, lecz stopniowo zmniejszają się gdy teren się obniża i zwiększają, gdy teren się podnosi. Jednak Kartograf był prawdziwym wyznawcą Zasad Zaboru Ferengi i swoją wiedzą nie dzielił się za darmo. Liczył sobie za informacje od każdego kwadratu. Wielki Nagus z drugiej strony również był prawdziwym wyznawcą Zasad Zaboru Ferengi i nie chciał przepłacać. Kartograf zatem zgodził się podać opis poszczególnych map w formie funkcji P(i,j), gdzie i oraz j są współrzędnymi mapy (i-ty oraz j-ty metr). W ten sposób można będzie zminimalizować koszty i odpytać Kartografa jedynie o kwadraty, które akurat są potrzebne, nie przeglądając całej mapy.

Kapitan Kirk musiał więc znaleźć jakiś szybki algorytm, który w efektywny sposób znajdzie na każdej mapie tak zwany szczyt. Jest on definiowany jako komórka na mapie, która sąsiaduje od północy, południa wschodu i zachodu z komórkami niewyższymi od niego. Można przypuszczać, że postawiona w takim miejscu antena umożliwi wyższą jakość sygnału. Może się zdarzyć, że w takiej mapie jest więcej niż jeden szczyt.

### Wejście:

Na wejściu program otrzymuje dwie liczby naturalne n oraz m oznaczające wymiary mapy. Dla każdego testu, zdefiniowana jest funkcja:

double P(int i,int j);
której należy użyć w programie do obliczenia wartości średnich wysokości w poszczególnych kwadratach mapy.
1<=n<=10000000
1<=m<=10000000
P(i,j)<=10000000

### Wyjście:

Na wyjściu dla każdego testu program powinien wypisać podłogę z wysokości odnalezionego szczytu (jeśli na mapie znajduje się więcej niż jeden szczyt, którakolwiek odpowiedź będzie poprawna).

## Przykład

### Wejście

10 10

### Przykładowe wyjście

dla funkcji określonej jako P(i,j)=30-sqrt((i-5)^2+(j-5)^2):
30

## Uwaga! Program należy napisać wykorzystując metodę dziel i zwyciężaj.
