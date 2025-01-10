#include <cmath>
#include <iostream>
#include <time.h>
#include <cstdlib>
using namespace std;

int main() {
    char asc, A1 = ' ', A2 = ' ', A3 = ' ', B1 = ' ', B2 = ' ', B3 = ' ', C1 = ' ', C2 = ' ', C3 = ' ';
    char cerchio = 'O', croce = 'X';
    int ord, conta = 0;
    string errore = "\nNON PUOI SOVRASCRIVERE LA TABELLA!!\n";
    string errore1 = "\nHAI INSERITO IN MODO ERRATO I DATI!!";
    string vitt_O = "\nHA VINTO IL GIOCATORE O!!";
    string vitt_X = "\nHA VINTO IL GIOCATORE X!!";

    cout << "  1  2  3\n";
    cout << "A" << " " << A1 <<"| "<< A2 <<" |" << A3 <<"\n";
    cout << " ---------\n";
    cout << "B" << " " << B1 <<"| "<< B2 <<" |" << B3 <<"\n";
    cout << " ---------\n";
    cout << "C" << " " << C1 <<"| "<< C2 <<" |" << C3 <<"\n";

for (int i = 0; i<5; i++){

    etichetta:
    etichetta3:

    cout << "\nil giocatore " << croce << " inserisca la posizione\n";
    cout << "inserire l'ascissa: ";
    cin >> asc;
    cout << "inserire le ordinate: ";
    cin >> ord;

if ((asc == 'A' || asc == 'B' || asc == 'C') && (ord == 1 || ord == 2 || ord == 3)){
        conta++;
    if (asc == 'A' && ord == 1)
        if(A1 == ' ')
            A1 = croce;
        else{
            cout << errore;
            goto etichetta;}

    if (asc == 'A' && ord == 2)
        if(A2 == ' ')
            A2 = croce;
        else{
            cout << errore;
            goto etichetta;}
    if (asc == 'A' && ord == 3)
        if(A3 == ' ')
            A3 = croce;
        else{
            cout << errore;
            goto etichetta;}
    if (asc == 'B' && ord == 1)
        if(B1 == ' ')
            B1 = croce;
        else{
            cout << errore;
            goto etichetta;}
    if (asc == 'B' && ord == 2)
        if(B2 == ' ')
            B2 = croce;
        else{
            cout << errore;
            goto etichetta;}
    if (asc == 'B' && ord == 3)
        if(B3 == ' ')
            B3 = croce;
        else{
            cout << errore;
            goto etichetta;}
    if (asc == 'C' && ord == 1)
        if(C1 == ' ')
            C1 = croce;
        else{
            cout << errore;
            goto etichetta;}
    if (asc == 'C' && ord == 2)
        if(C2 == ' ')
            C2 = croce;
        else{
            cout << errore;
            goto etichetta;}
    if (asc == 'C' && ord == 3)
        if(C3 == ' ')
            C3 = croce;
        else{
            cout << errore;
            goto etichetta;}


    cout << "  1  2  3\n";
    cout << "A" << " " << A1 <<"| "<< A2 <<" |" << A3 <<"\n";
    cout << " ---------\n";
    cout << "B" << " " << B1 <<"| "<< B2 <<" |" << B3 <<"\n";
    cout << " ---------\n";
    cout << "C" << " " << C1 <<"| "<< C2 <<" |" << C3 <<"\n";


        if (A1 == cerchio && A2 == cerchio && A3 == cerchio){
            cout << vitt_O << endl;
            i += 9;
        }
        if (B1 == cerchio && B2 == cerchio && B3 == cerchio){
            cout << vitt_O << endl;
            i += 9;
        }
        if (C1 == cerchio && C2 == cerchio && C3 == cerchio){
            cout << vitt_O << endl;
            i += 9;
        }
        if (A1 == cerchio && B1 == cerchio && C1 == cerchio){
            cout << vitt_O << endl;
            i += 9;
        }
        if (A2 == cerchio && B2 == cerchio && C2 == cerchio){
            cout << vitt_O << endl;
            i += 9;
        }
        if (A3 == cerchio && B3== cerchio && C3 == cerchio){
            cout << vitt_O << endl;
            i += 9;
        }
        if (A1 == cerchio && B2== cerchio && C3 == cerchio){
            cout << vitt_O << endl;
            i += 9;
        }
        if (A3 == cerchio && B2== cerchio && C1 == cerchio){
            cout << vitt_O << endl;
            i += 9;
        }

        if (A1 == croce && A2 == croce && A3 == croce){
            cout << vitt_X << endl;
            i += 9;
        }
        if (B1 == croce && B2 == croce && B3 == croce){
            cout << vitt_X << endl;
            i += 9;
        }
        if (C1 == croce && C2 == croce && C3 == croce){
            cout << vitt_X << endl;
            i += 9;
        }
        if (A1 == croce && B1 == croce && C1 == croce){
            cout << vitt_X << endl;
            i += 9;
        }
        if (A2 == croce && B2 == croce && C2 == croce){
            cout << vitt_X << endl;
            i += 9;
        }
        if (A3 == croce && B3== croce && C3 == croce){
            cout << vitt_X << endl;
            i += 9;
        }
        if (A1 == croce && B2== croce && C3 == croce){
            cout << vitt_X << endl;
            i += 9;
        }
        if (A3 == croce && B2== croce && C1 == croce){
            cout << vitt_X << endl;
            i += 9;
        }
}
else{
    cout << errore1 << endl;
    goto etichetta3;
}


    if(i<4){

    etichetta1:
    etichetta4:

    cout << "\nil giocatore " << cerchio << " inserisca la posizione\n";
    cout << "inserire l'ascissa: ";
    cin >> asc;
    cout << "inserire le ordinate: ";
    cin >> ord;

if ((asc == 'A' || asc == 'B' || asc == 'C') && (ord == 1 || ord == 2 || ord == 3)){
        conta++;
    if (asc == 'A' && ord == 1)
        if(A1 == ' ')
            A1 = cerchio;
        else{
            cout << errore;
            goto etichetta1;}

    if (asc == 'A' && ord == 2)
        if(A2 == ' ')
            A2 = cerchio;
        else{
            cout << errore;
            goto etichetta1;}
    if (asc == 'A' && ord == 3)
        if(A3 == ' ')
            A3 = cerchio;
        else{
            cout << errore;
            goto etichetta1;}
    if (asc == 'B' && ord == 1)
        if(B1 == ' ')
            B1 = cerchio;
        else{
            cout << errore;
            goto etichetta1;}
    if (asc == 'B' && ord == 2)
        if(B2 == ' ')
            B2 = cerchio;
        else{
            cout << errore;
            goto etichetta1;}
    if (asc == 'B' && ord == 3)
        if(B3 == ' ')
            B3 = cerchio;
        else{
            cout << errore;
            goto etichetta1;}
    if (asc == 'C' && ord == 1)
        if(C1 == ' ')
            C1 = cerchio;
        else{
            cout << errore;
            goto etichetta1;}
    if (asc == 'C' && ord == 2)
        if(C2 == ' ')
            C2 = cerchio;
        else{
            cout << errore;
            goto etichetta1;}
    if (asc == 'C' && ord == 3)
        if(C3 == ' ')
            C3 = cerchio;
        else{
            cout << errore;
            goto etichetta1;}


    cout << "  1  2  3\n";
    cout << "A" << " " << A1 <<"| "<< A2 <<" |" << A3 <<"\n";
    cout << " ---------\n";
    cout << "B" << " " << B1 <<"| "<< B2 <<" |" << B3 <<"\n";
    cout << " ---------\n";
    cout << "C" << " " << C1 <<"| "<< C2 <<" |" << C3 <<"\n";



            if (A1 == cerchio && A2 == cerchio && A3 == cerchio){
                cout << vitt_O << endl;
                i += 9;
            }
            if (B1 == cerchio && B2 == cerchio && B3 == cerchio){
                cout << vitt_O << endl;
                i += 9;
            }
            if (C1 == cerchio && C2 == cerchio && C3 == cerchio){
                cout << vitt_O << endl;
                i += 9;
            }
            if (A1 == cerchio && B1 == cerchio && C1 == cerchio){
                cout << vitt_O << endl;
                i += 9;
            }
            if (A2 == cerchio && B2 == cerchio && C2 == cerchio){
                cout << vitt_O << endl;
                i += 9;
            }
            if (A3 == cerchio && B3== cerchio && C3 == cerchio){
                cout << vitt_O << endl;
                i += 9;
            }
            if (A1 == cerchio && B2== cerchio && C3 == cerchio){
                cout << vitt_O << endl;
                i += 9;
            }
            if (A3 == cerchio && B2== cerchio && C1 == cerchio){
                cout << vitt_O << endl;
                i += 9;
            }

            if (A1 == croce && A2 == croce && A3 == croce){
                cout << vitt_X << endl;
                i += 9;
            }
            if (B1 == croce && B2 == croce && B3 == croce){
                cout << vitt_X << endl;
                i += 9;
            }
            if (C1 == croce && C2 == croce && C3 == croce){
                cout << vitt_X << endl;
                i += 9;
            }
            if (A1 == croce && B1 == croce && C1 == croce){
                cout << vitt_X << endl;
                i += 9;
            }
            if (A2 == croce && B2 == croce && C2 == croce){
                cout << vitt_X << endl;
                i += 9;
            }
            if (A3 == croce && B3== croce && C3 == croce){
                cout << vitt_X << endl;
                i += 9;
            }
            if (A1 == croce && B2== croce && C3 == croce){
                cout << vitt_X << endl;
                i += 9;
            }
            if (A3 == croce && B2== croce && C1 == croce){
                cout << vitt_X << endl;
                i += 9;
            }
}
else{
    cout << errore1 << endl;
    goto etichetta4;
    }
    }
}

if(conta>=9)
    cout << "\nPAREGGIO!!\n";


    system("PAUSE");
    return 0;
}
