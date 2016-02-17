/* 
 * File:   main.cpp
 * Author: Benet
 *
 * Created on 17 de febrero de 2016, 16:16
 */

#include <iostream>
using namespace std;

void getMenu(){
    cout << "1. Exercici 1" <<endl;
    cout << "2. Exercici 2" <<endl;
    cout << "3. Exercici 3:" <<endl;
    cout << "4. Exercici 4:" <<endl;
    cout << "5. Exercici 5:" <<endl;
    cout << "6. Exercici 6:" <<endl;
    cout << "7. Exercici 7:" <<endl;
    cout << "8. Exercici 8:" <<endl;
    cout << "9. Exercici 9:" <<endl;
    cout << "10. Exercici 10:" <<endl;
    cout << "11. Sortir." <<endl;
    
}
/*
 Ex1
 */
int getAbsolut(int n){   
    int r;
    r=n;   
    if(r<0){
        r=r*-1;
    }    
    return r;   
}
/*
 Ex2
 */
bool isDivisible(int x, int y){
    bool r=false;
    if(x%y==0){r=true;}
    return r;
}
/*
 Ex4
 */
int getMax(int a, int b, int c){
    int max;   
    if(a>b){
        if(a>c){
            max=a;
        }else{
            max=c;
        }       
    }else{
        if(b>c){
            max=b;
        }else{
            max=c;
        }
    }
    return max;
}
/*
 Ex5
 */
void ordena(int a, int b, int c, int r[]){
    
    r[0]=a;
    r[1]=b;
    r[2]=c;
    
    for(int i=0; i<2; i++){
        for(int j=0; j<2; j++){
            if(r[j]>r[j+1]){
                int aux=r[j];
                r[j]=r[j+1];
                r[j+1]=aux;
            }
        }
    }
    
}
/*
 Ex6 
 */
void getTaula(int t){
    
    for(int i=1; i<=10; i++){
        cout << t << "*" << i << "=" << (t*i) << "#";
    }
    cout <<endl;
}
const int EX1=1;
const int EX2=2;
const int EX3=3;
const int EX4=4;
const int EX5=5;
const int EX6=6;
const int EX7=7;
const int EX8=8;
const int EX9=9;
const int EX10=10;
const int EXIT=11;

int main(int argc, char** argv) {

    int op=-1;
    
    do{
        getMenu();
        cout << "OP => ";
        cin >> op;
        
        switch (op){
 /* Exercici 1
 *Escriure un programa que calculi el valor absolut de la diferència de dos números donats. 
 *Crear primer la funció "absolut", la qual rep un número enter i retorna el seu valor absolut. 
 *El programa principal ha de llegir els dos números, calcular el valor absolut de la diferència 
 *cridant a la funció "absolut" i mostrar el resultat per pantalla.    
 */      
            case EX1:
                int a;
                cout << "Valor de A => ";
                cin >> a;
                int b;
                cout << "Valor de B => ";
                cin >> b;
                int ab;
                ab=getAbsolut(a-b);               
                cout << "|A - B| = " << ab <<endl;                
                break;
 /*
 *Exercici 2
 *Donats dos números naturals diferents de 0, escriure una funció que ens digui si 
 * el primer número és divisible pel segon. La funció rep els dos números com a 
 * paràmetres i retorna un booleà. Escriure també el programa principal que llegeix 
 * els dos números per teclat i crida a la funció anterior per saber si el primer 
 * número és divisible pel segon. La sortida del programa ha de ser S o N.
 */                       
            case EX2:
                int x;
                cout << "Valor de A => ";
                cin >> x;
                while(x<1){//S'espera només valors naturals {1,2,3,4,....} 
                    cout << "Error, s'espera un valor natural diferent de 0." <<endl;
                    cout << "Valor de A => ";
                    cin >> x;
                }
                int y;
                cout << "Valor de B => ";
                cin >> y;   
                while(y<1){
                    cout << "Error, s'espera un valor natural diferent de 0." <<endl;
                    cout << "Valor de B => ";
                    cin >> y;
                }
                if(isDivisible(x,y)){
                    cout << "S" <<endl;
                }else{
                    cout << "N" <<endl;
                }
                break;
/*
Exercici 3
Donada una quantitat de segons llegida per teclat, escriure un programa que ens 
 * digui el número d'hores, minuts i segons equivalent. 
 * El format de sortida ha de ser: H:M:S.
 */                
            case EX3:
                int s;
                cout << "Nº Segons => ";
                cin >> s;
                while(s<0){
                    cout << "Error. S'espera un valor positiu 0 inclós." <<endl;
                    cout << "Nº Segons => ";
                    cin >> s;
                }              
                int hh, mm , ss;                
                hh = s/3600;
                if(hh>0)s-=3600*hh;
                mm = s/60;
                if(mm>0) s-=60*mm;
                ss = s;
                
                if(hh<10){
                    cout << "0";
                }
                cout << hh << ":";
                if(mm<10){
                    cout << "0";
                }
                cout << mm << ":";
                if(ss<10){
                    cout << "0";
                }
                cout << ss<<endl;               
                break;
/*
Exercici 4
Escriure una funció que ens retorni el més gran de tres números que rep com a paràmetres. 
Escriure després el programa principal que llegeix tres números per teclat, 
crida a la funció anterior i escriu per pantalla quin és el més gran.
*/
            case EX4:
                int v1, v2, v3, vg;
                cout << "Valor 1 => ";
                cin >> v1;
                cout << "Valor 2 => ";
                cin >> v2;
                cout << "Valor 3 => ";
                cin >> v3;               
                vg=getMax(v1, v2, v3);                
                cout << "Valor més gran: " << vg <<endl;                
                break;
/*                
Exercici 5
Escriure una funció que donats tres números com a paràmetres, els ordeni de forma creixent. 
La funció ha de retornar els valors dels paràmetres modificats en ordre creixent. 
Escriure després el programa que llegeixi tres números, cridi a la funció anterior
per ordenar-los i els escrigui per pantalla ordenats amb aquest format: 1#2#3#
*/
            case EX5:
                int n1, n2, n3;
                cout << "Valor 1 => ";
                cin >> n1;
                cout << "Valor 2 => ";
                cin >> n2;
                cout << "Valor 3 => ";
                cin >> n3;   
                
                int ordenats [3];
                ordena(n1,n2,n3, ordenats);
                
                for(int i=0; i<3; i++){
                    cout << ordenats[i] << "#";
                }
                cout <<endl;
                
                break;
/*           
Exercici 6
Escriure una funció que ens escrigui la taula de multiplicar d'un número donat 
que es passa com a paràmetre. La funció no ha de retornar res. 
El format de sortida ha de ser:
3*1=3#3*2=6#...#3*10=30#
Escriure el programa principal que llegeixi per teclat un número i cridi a la 
funció anterior per mostrar la taula de multiplicar d'aquest número.
 */            
            case EX6:
                int t;
                cout << "Nº => ";
                cin >> t;                
                getTaula(t);                
                break;
/*
Exercici 7
Escriure un programa que, donat el número d'operacions N que volem calcular, 
ens mostri la sèrie de totes les possibles sumes des de 1 fins a i, 
i<=N en el següent format (suposem N = 3):
1=1#1+2=3#1+2+3=6#
 */                
            case EX7:
                
                int nn;
                cout << "N => ";
                cin >> nn;
                
                int suma;
                
                for(int i=1; i<=nn; i++){
                    suma=0;
                    for(int j=1; j<i; j++){
                        cout << j << "+";
                        suma+=j;
                    }
                    cout << i << "=" << suma+i << "#";
                }
                
                cout <<endl;
                
                break;
/*
Exercici 8
Escriure un programa que, donat un número N més gran que 2, ens mostri per 
pantalla els N primers números de la sèrie de Fibonacci. 
Recordeu que la sèrie de Fibonacci es defineix de la següent forma:
a(1)=1 
a(2)=1
a(n)=a(n-2)+a(n-1)
El format de sortida ha de ser el següent (suposem N=7):
1#1#2#3#5#8#13#
 */                
            case EX8:
                
                break;
/*
Exercici 9
Escriure un programa que obtingui tots els números perfectes entre 1 i un número donat N. 
Un número perfecte es aquell que sumant tots els seus divisors ens dóna ell mateix, 
per exemple, el 6 = 3 + 2 + 1. El programa ha de cridar a la funció "esPerfecte", 
que rep un número com a paràmetre i retorna un booleà. La sortida del programa ha de ser (suposem N=500):
6#28#496#
 */                
            case EX9:
                
                break;
/*
Exercici 10
Donat un número enter, fer un programa que escrigui la seva representació binària 
de forma inversa, és a dir, del bit menys significatiu al bit més significatiu. 
Per exemple, per N=10, la sortida ha de ser: 0101
 */               
            case EX10:
                
                break;
            case EXIT:
                cout << "Bye." <<endl;
                break;
            default:
                cout << "Valor no esperat. [1-11]" <<endl;
                break;
        }
        
    }while(op!=EXIT);
    
    
    
    return 0;
}

