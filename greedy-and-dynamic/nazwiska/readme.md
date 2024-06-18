# Treść zadania

Arystokraci krainy Ośmiu Królestw od wieków, począwszy od mitycznego pierwszego pokolenia, aranżują małżeństwa wyłącznie we własnym gronie. Aby łatwiej identyfikować poszczególnych członków arystokracji wprowadzono specjalny sposób nadawania nazwiska nowonarodzonemu dziecku. Polega on na tym, że przydziela się dziecku czworo tak zwanych rodziców duchowych, z których każdy daje dziecku trzy znaki ze swojego nazwiska. Rodzice duchowi każdego dziecka są uporządkowani (mają numery od 1 do 4). Pierwszy z rodziców daje pierwsze trzy znaki swojego nazwiska (będą to pierwsze trzy znaki nazwiska dziecka), drugi znaki od czwartego do szóstego (będą one w nazwisku dziecka na tym samym miejscu) itd. Wszystkie nazwiska składają się z 12 znaków. Przykładowo dziecko którego rodzice duchowi to
Alealeffatta
Reefajtttttt
Neineineinei
Iiiiiiiiimie
będzie miało na nazwisko: Alefajneimie.

Arystokraci krainy Ośmiu Królestw dzielą się na pokolenia. Małżeństwa zawierane są tylko wewnątrz jednego pokolenia. Rodzice duchowni nie mogą być z tego samego pokolenia co dziecko. Nie mogą być też ze starszego pokolenia niż pokolenie dziadków dziecka. Liczebność pojedynczego pokolenia nie może być mniejsza niż 2 (za wyjątkiem ostatniego pokolenia) i większa niż 500 osób.

### Wejście:

Na wejściu program otrzyma liczbę n wszystkich arystokratów występujących w serialu Gra o Fotel, m liczebność pierwszego pokolenia arystokratów, a następnie n informacji o kolejnych arystokratach. Arystokraci podawani są pokoleniami począwszy od pierwszego pokolenia. Jako ostatni wymieniony jest ostatnio narodzony potomek, którego nazwisko trzeba ustalić. Informacja o arystokratach z pierwszego pokolenia składa się z ich nazwisk. Informacje o arystokratach kolejnych pokoleń składają się z czterech liczb całkowitych oznaczających indeksy ich ojców duchowych. Indeksy rozpoczynają się od 0 i są zgodne z kolejnością podawania informacji o arystokratach.

### Wyjście:

Na wyjściu program powinien wypisać nazwisko ostatnio narodzonego potomka

## Przykład:

### Wejście:

9 4
Alealeffatta
Reefajtttttt
Neineineinei
Iiiiiiiiimie
0 1 2 3
3 0 1 2
2 3 0 1
1 2 3 0
4 5 6 7

### Wyjście:

Alealeffatta

## Uwaga! Zadanie ma zostać rozwiązane przy pomocy programowania dynamicznego.
