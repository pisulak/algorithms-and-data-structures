# Treść zadania

Student Mateusz po uczcie przy wigilijnym stole, przystąpił do planowania, gdzie będzie kontynuować swoje przygody. Jakie miejsca zobaczyć? Gdzie wyruszyć po tylu doświadczeniach na polskiej wsi? Mając na uwadze swą puszystą naturę, doszedł do wniosku, że powinien wybrać miejsce, które poza wspaniałymi widokami, umożliwia aktywną formę spędzania czasu. Na gwiazdkę nasz bohater dostał od swoich dziadków przewodnik turystyczny. Przewodnik zawiera listę wartych do zobaczenia miejsc. Opis każdego z miejsc uzupełniony jest w nim o poziom intensywności wykonywanej tam aktywności fizycznej. Przed Mateuszem trudna decyzja... Które z miejsc odwiedzić?

Niestety nasz poczciwy programista do atletów nie należy. Oczywiście wie, że wysiłek fizyczny pozytywnie wpłynie na jego kondycję, jednakże jest człowiekiem bardzo rozsądnym. W przeciwieństwie do romantycznych duszyczek i postawy Adama Mickiewicza w utworze “Pieśń Filaretów”, nie zamierza porywać się “z motyką na słońce”. Mateusz określił poziom swojej sprawności fizycznej i postanowił wybrać atrakcje, które nie przekroczą jego możliwości. Co prawda trzeba spalić te wszystkie świąteczne łakocie, ale trzeba także wrócić potem o własnych siłach do pracy.

Ponieważ w pracy czekało na Mateusza kilka projektów z terminem realizacji ,,na przedwczoraj’’ to postanowił on, że wybierze atrakcję, która za jednym razem pozwoli spalić mu jak najwięcej kalorii (ale jednocześnie będzie w jego zasięgu). W przypadku, gdyby okazało się, że po odwiedzeniu pierwszej atrakcji zostanie mu jeszcze trochę sił nasz bohater postanowił ponownie wybrać najbardziej wymagającą fizycznie atrakcję, która nie przekroczy jego ograniczonych i uszczuplonych pierwszą wycieczką sił. Mateusz ma zamiar tak postępować dopóki zupełnie nie opadnie z sił (widać, że Mateusz zaspał na wykład z programowania dynamicznego, ale był na wykładzie o algorytmach zachłannych).

### Wejście

Algorytm przyjmuje na wejściu liczbę naturalną N, będącą ilością miejsc przedstawionych w poradniku. Następnie program powinien wczytać ze standardowego wejścia N par S L, gdzie S to jednowyrazowa nazwa lokalizacji, a L poziom aktywności fizycznej wymaganej w tej lokalizacji. Na koniec program powinien wczytać liczbę K, która reprezentuje sumę aktywności fizycznej którą jest w stanie znieść organizm naszego bohatera.

### Wyjście

Algorytm powinien wyświetlić listę nazw miejsc, które zobaczy Mateusz uporządkowaną malejąco względem poziomu aktywności wymaganej w danej lokalizacji. Dla miejsc o tych samych poziomach aktywności w pierwszej kolejności brane są pod uwagę te, które pojawiły się wcześniej na wejściu.

2<=n,k<=5000000

## Przykład:

### Wejście:

5
Ameryka 5
Cycow 6
Zimno 4
Swinki 2
Zezulin 9
8

### Wyjście:

Cycow Swinki

## UWAGA! Zadanie powinno działać w oparciu o samodzielnie zaimplementowany kopiec. W programie nie można używać STL-a.
