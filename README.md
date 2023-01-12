# Proiect
Proiect MAP

Acest codeste folosit pentru Proiectul la Metode avansate de Programare.
Programul realizeaza conversia din numere in numere romane.


Cum se execută codul:
1.Găsim cel mai mare număr zecimal r din tabelul de mai sus, care este mai mic sau egal cu numărul zecimal num.
2.Scriem cifra romană corespunzătoare numărului zecimal r.
3.Scădem r din num și îl atribuim înapoi la num, adică num = num - r.
Repetăm pașii 1, 2 și 3, până când numărul ajunge  la 0.

Scrierea se face de la stânga la dreapta.
Simbolurile I, X, C pot fi consecutive de maximum trei ori, iar V, L, D doar o dată.
Orice semn pus la dreapta altuia de valoare mai mare sau egală cu el, se adună.
Exemplu: XX = 10 + 10, XII = 10 + 1 + 1
Dacă un simbol mic se află în fața unui simbol mare, atunci cel mic se scade din cel mare. În acest caz, în fața unui simbol mare se poate află doar un singur simbol cu valoare mai mică.
Exemplu: IX = 10 – 1 = 9, XCII = 100 – 10 + 2 = 92
Cel mai simplu mod de a scrie cifre romane se poate face prin divizarea numărului în mii, sute, zeci și unități:

Exemplu: numărul 1.988
1.000 = M, 900 = CM, 80 = LXXX, 8 = VIII
Punându-le împreună: MCMLXXXVIII.

Link proiect docker: https://hub.docker.com/r/rafaelrcv/proiect

Link documentatie: https://en.wikipedia.org/wiki/Roman_numerals
