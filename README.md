# Tris

Un programma C++ che simula il gioco del Tris (o Tic Tac Toe). Due giocatori si sfidano inserendo le loro mosse in una griglia 3x3, cercando di allineare tre simboli uguali in riga, colonna o diagonale.

## Caratteristiche

- **Gioco a due giocatori:** Ognuno può scegliere una posizione sulla griglia.
- **Verifica automatica della vittoria:** Il programma rileva vittorie in righe, colonne e diagonali.
- **Segnalazione errori:** Notifica se un giocatore tenta di sovrascrivere una posizione già occupata.
- **Gestione del pareggio:** Il programma segnala un pareggio se tutte le celle sono occupate senza una vittoria.

## Requisiti

- Compilatore C++ (ad esempio, g++ per Linux o MinGW per Windows).

## Installazione ed Esecuzione

1. Clona il repository:
   ```bash
   git clone <URL-del-tuo-repository>
   ```
2. Naviga nella directory del progetto:
   ```bash
   cd tris
   ```
3. Compila il programma:
   ```bash
   g++ tris.cpp -o tris
   ```
4. Esegui il programma:
   ```bash
   ./tris
   ```

## Come giocare

1. Il gioco mostra una griglia vuota iniziale:

   ```
     1  2  3
   A   |   |  
    ---------
   B   |   |  
    ---------
   C   |   |  
   ```

2. I giocatori inseriscono la loro mossa specificando le coordinate (ad esempio, `A1`, `B3`).

3. Il programma aggiorna la griglia e verifica se ci sono vincitori o errori:
   - Se la posizione è già occupata, il giocatore dovrà inserirne una nuova.
   - Se un giocatore allinea tre simboli uguali (X o O), il programma annuncia la vittoria.
   - Se tutte le celle sono occupate e non c'è un vincitore, il programma segnala un pareggio.

## Struttura del codice

- **Variabili principali:**
  - Griglia della partita rappresentata da variabili `A1`, `A2`, ..., `C3`.
  - Simboli `croce` (X) e `cerchio` (O) per i due giocatori.

- **Logica del gioco:**
  - Cicli `for` per alternare i turni.
  - Controlli `if` per verificare condizioni di vittoria o errori.
  - Gestione del pareggio se nessuno vince entro 9 mosse.

## Personalizzazione

Puoi modificare i messaggi di errore, vittoria e pareggio direttamente nel codice:

```cpp
string errore = "\nNON PUOI SOVRASCRIVERE LA TABELLA!!\n";
string vitt_O = "\nHA VINTO IL GIOCATORE O!!";
string vitt_X = "\nHA VINTO IL GIOCATORE X!!";
```
