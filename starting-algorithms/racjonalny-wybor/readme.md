# Treść zadania

Janusz spoglądał z zadumą na podjazd domu obok, gdzie właśnie wjeżdżał nowy nabytek jego ulubionego sąsiada Władysława - maksymalnie 5-letnia Toyota.

- Spójrz, Pioter - rzekł do swego pierworodnego. - Takiemu to teraz dobrze. Będzie woził swoją Halinkę i dzieci takim cudeńkiem. Nam też by się zdało już zmienić Passata.
- Tato, co za problem? Jedźmy do komisu i poszukajmy czegoś.
- Synu… coś Ty taki narwany. To trzeba usiąść i na spokojnie.
- Dobrze, więc pozwól, że ja przejrzę ogłoszenia w internecie i wybiorę coś odpowiedniego. Jaki byś chciał samochód? Citroena? Skodę?
- Oj, Pioter, jak Ty życia jeszcze nie znasz. Najlepsze samochody to te, których koła zrobiły najmniej obrotów od czasu wyjechania z salonu.
- Czyli musimy uwzględnić przebieg samochodu i wielkość kół? A co, jeśli licznik był cofany?
- Pioter, nie mędrkuj! To nielegalne!
  Chłopak zabrał się do pracy. Postanowił przewertować najpopularniejszą stronę z ogłoszeniami i przekazać ojcu listę 3 najlepszych dostępnych samochodów wraz z liczbą wykonanych przez nie pełnych obrotów kół.

### Wejście:

Na wejściu program otrzymuje liczbę ogłoszeń n. W kolejnych liniach znajduje się n opisów ogłoszeń. Na każdy opis składa się nazwa samochodu w pierwszej linii opisu oraz dwie liczby p i d w drugiej linii, gdzie p jest liczbą zmiennoprzecinkową i oznacza przebieg samochodu w km, a d jest liczbą całkowitą i oznacza średnicę koła w calach.

### Wyjście:

Na wyjściu program ma wypisać 3 nazwy samochodów o najmniejszej liczbie pełnych obrotów kół wraz z tą liczbą. Dane należy wypisać rosnąco względem liczby obrotów. Dla równej liczby obrotów należy najpierw wypisać dane samochodu, którego nazwa jest wcześniejsza w porządku alfabetycznym.

0 ≤ p ≤ 1000000
1 ≤ d ≤ 1000000
3 ≤ n ≤ 1000000
Należy przyjąć, że π=3.141593

## Przykład:

### Wejście:

5
Opel Antara
1234.65 12
Toyota Auris
3509.57 20
Citroen C5
9990.8 40
Kia Sportage
99999.12 400
Fiat Panda
3525.74 33

### Wyjście:

Opel Antara
1289374
Fiat Panda
1338914
Toyota Auris
2199076
