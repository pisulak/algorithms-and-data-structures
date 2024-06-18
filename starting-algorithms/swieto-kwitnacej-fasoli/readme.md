# Treść zadania

Student Mateusz, od poniedziałku do piątku szary programista jednej z informatycznych firm Lublina, w sobotę i niedzielę mknie w swoim żółtym Żuku z rowerem Ukraina na pace po drogach i bezdrożach Lubelszczyzny, by krzewić wiedzę o regionie i pomagać jego mieszkańcom.

Tym razem student Mateusz postanowił odwiedzić Tyszowce, w których chciał zobaczyć ogromne świece w kościele pod wezwaniem św. Leonarda oraz przymierzyć tyszowiaki - buty, z których niegdyś słynęły Tyszowce. Mateusz liczył po cichu na to, że uda mu się znaleźć szewca, który zrobiłby dla niego kilka takich butów. Student Mateusz od małego miał problem z rozróżnieniem prawej i lewej strony. Ciągle jeszcze zdarzało mu się w pośpiechu nałożyć but nie na tę nogę co trzeba. Tyszowiaki, w których nie ma rozróżnienia na prawy i lewy but wydawały się wręcz stworzone dla niego.

Okazją do przyjazdu do Tyszowiec było coroczne Święto kwitnącej fasoli. Student Mateusz przeczytał o święcie dzień wcześniej w internecie i nie myśląc długo wyruszył z rana na wschód swoim żółtym Żukiem. W trakcie Święta kwitnącej fasoli student Mateusz, wrażliwy na piękno polszczyzny, z ogromną przyjemnością kontemplował teksty ludowych piosenek wykonywanych przez lokalne zespoły. Jako umysł ścisły, student Mateusz zaczął rozkładać słuchane teksty na czynniki pierwsze. Szczególnie zainteresowały go statystyki występowania poszczególnych liter w tekstach piosenek (bez rozróżnienia na duże i małe litery). Postanowił wieczorem napisać program, który będzie przygotowywał dla niego takie statystyki. Plany te pokrzyżował zbyt późny powrót do Lublina. Napisz za studenta Mateusza program liczący najczęściej i najrzadziej występujące litery w tekstach piosenek.

### Wejście

Na standardowym wejściu program otrzyma tekst piosenki zawierający litery alfabetu łacińskiego. Koniec tekstu zostanie oznaczony symbolem ^. Długość tekstu piosenki nie przekroczy 2000000 znaków.

### Wyjście

Na standardowym wyjściu program ma wypisać najczęściej i najrzadziej występującą literę oddzielone spacją. Przy wyszukiwaniu najrzadziej występującej litery program powinien brać pod uwagę tylko te litery, które występują w piosence co najmniej raz. W przypadku gdy kilka liter występuje tę samą liczbę razy, należy wypisać tę literę, która jest wcześniej w alfabecie. Program nie powinien rozróżniać przy zliczaniu dużych i małych liter. Jako wynik powinny zostać wypisane małe litery.

## Przykład

### Wejście

Jedzie, jedzie Mazureczek,
Wiezie, wiezie moj wianeczek,
rozmarynowy.^

### Wyjście

e u
