# Treść zadania

Proces tworzenia książki, na której bazuje Gra o Fotel wciąż jest w toku. Jest to spore utrudnienie dla scenarzystów serialu, gdyż nie pozwala im to snuć długoterminowych planów. Największym problem jest to, że E.E.G. Marvin upodobał sobie uśmiercanie postaci w dosyć okrutny i losowy sposób, w ogóle nie zważając na to, jakie pustki czasami czyni w sercach fanów.

Kłopot scenarzystów szczególnie dotyczy dobierania obsady. Nigdy nie wiadomo czy aktor, którego właśnie wybrano dla nowej postaci nie będzie musiał opuścić planu z powodu niespodziewanej śmierci. Co więcej śmierć postaci zawsze odbija się na liczbie fanów serialu. Z drugiej strony bardziej popularni aktorzy są lepszą reklamą dla serialu.

Twórcy postanowili więc zlecić napisanie programu, który przechowywałby dane o dostępnych aktorach i sugerował, którego z nich najlepiej wybrać dla potrzebnej w tej chwili roli.

### Wejście:

Na dane wejściowe składa się liczba naturalna 1<=n<=100000, oznaczająca liczbę operacji, a w kolejnych wierszach numer operacji op={1,2}, dokonującej się na dostępnej bazie aktorów wraz z opisem.

- 1 - dodanie aktora. Opis operacji składa się z 2 wierszy, gdzie pierwszy z nich to imię (imiona) i nazwisko aktora lub jego pseudonim, a drugi liczba naturalna f, gdzie f to liczba fanów aktora, którzy przestaną oglądać serial, po jego ewentualnej śmierci.
- 2 - odszukanie aktora dla roli. Opis operacji składa się z liczby naturalnej p, oznaczającej maksymalną liczbę fanów, na której stratę można sobie pozwolić w przypadku śmierci tej postaci.

### Wyjście:

Na wyjściu program ma wypisać wynik wymienionych operacji, gdzie:

- dla operacji dodania aktora (1) ma być to napis "TAK", jeśli pomyślnie dodano aktora oraz napis "NIE", jeśli ten sam aktor z tą samą liczbą fanów już istnieje w bazie.
- dla operacji odszukania aktora (2) będą to dane osobowe wyszukanego aktora z możliwie największą liczbą fanów, którego śmierć z kolei nie przekroczy dopuszczalnych strat lub napis "NIE", jeśli żaden aktor nie spełnia kryterium.
  Oczywiste jest, że aktor po otrzymaniu roli nie może dostać już żadnej innej w serialu. Jeśli kryterium spełnia więcej niż jeden aktor, należy wypisać aktora o imieniu i nazwisku leksykograficznie najmniejszym.

## Przykład:

### Wejście:

7
1
John Travolta
4000
1
John Cleese
3000
1
John Cusack
400
2
399
2
400
1
John Malkovich
30
2
40

### Wyjście:

TAK
TAK
TAK
NIE
John Cusack
TAK
John Malkovich

## Uwaga! W zadaniu nie można wykorzystywać bibliotek STL. Zadanie ma być samodzielną implementacją listy wskaźnikowej.
