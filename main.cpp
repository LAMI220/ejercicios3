#include <iostream>
using namespace std;
int main() {
    int opciones,edad,num1,num2,ent,fact1,n1,n2,fact2,i,semana;
    float factorial =1;
    cout<<"...............................";
    cout<<"...............................";
    cout<<"...............................";
    cout<<"..............................."<<endl;
    cout <<     "HOLA Soy LAMI " <<endl;
    cout<<"...............................";
    cout<<"...............................";
    cout<<"...............................";
    cout<<"..............................."<<endl;
    cout <<"bienvenido"<< endl ;
    cout << "Seleccione el numero segun el tipo de ejercicio que desea realizar:"<< endl;
    cout << "1: Determinar si la persona es mayor de edad o no. " << endl;
    cout << "2: Determinar numero mayor o menor."<<endl;
    cout << "3: Determine si el numero es par o impar."<<endl;
    cout << "4: Determine ell factorial de un numero."<<endl;
    cout << "5: Determine los numeros impares mayores a 10 y menores a 30."<<endl;
    cout << "6: Determine un dia de la semana"<<endl;
    cout<<endl;
    cin >> opciones;
    switch(opciones){
        case 1: cout<<"Escriba su edad";
            cout<<endl;
        cin>> edad;
        if (edad >=18){
            cout<<"Es mayor de edad, pague sus impuestos";
        }else{
            cout<<"No es mayor de edad, vuelva con mamá.";
        }
            break;
        case 2:
            cout << "Ingrese el primer numero: ";
            cout<<endl;
            cin>> num1;
            cout <<"Ingrese el segundo numero";
            cout<<endl;
            cin >> num2;
            if(num1>num2){
                cout<<"El numero "<< num1 << " es mayor que "<< num2;

            }else{
                cout<<"El numero "<< num2 << " es mayor que "<< num1;
            }
            break;
            case 3:
                cout << "Ingrese un numero";
            cout<<endl;
                cin >> ent;
                if (ent%2 == 0){
                    cout<< "El numero es par";
                }else{
                    cout<<"El numero es impar";
                }
                break;
        case 4:
            cout << "Introduce un numero: ";
            cout<<endl;
            cin >> fact1;
            factorial=1;
            for(fact2=1;fact2<=fact1;fact2++){
                factorial = factorial * fact2;
                cout << endl << "Factorial de " << fact1 << " -> " << factorial << endl;
            }
            break;
        case 5:
            do {
                cout <<"Digite un numero mayor que 10 y menor que 30: ";
                cout<<endl;
                cin >> n1;
            } while (n1 <= 10 || n1 > 30); {
        cout << " Los numeros impares hasta llegar a " << n1 << " son:" << endl;
    }
            for (n2 = 1; n2 <= n1; n2++) {
                if (n2% 2 != 0) {
                    cout <<" " << n2 << endl;
                }
            }
            return 0;
            break;
        //El ejercicio lo pedia del 1 al 5 pero los hice al 7 para que se viera mas chido att//
        case 6:
            cout<<"Ingrese un numero del 1 al 7 para conocer el dia de la semana";
            cout<<endl;
            cin>> semana;
            switch(semana) {
                case 1:
                    cout << "El Numero que selecciono corresponde al dia Lunes";
                    break;
                case 2:
                    cout << "El Numero que selecciono corresponde al dia Martes";
                    break;
                case 3:
                    cout << "El Numero que selecciono corresponde al dia Miercoles";
                    break;
                case 4:
                    cout << "El Numero que selecciono corresponde al dia Jueves";
                    break;
                case 5:
                    cout << "El Numero que selecciono corresponde al dia Viernes";
                    break;
                case 6:
                    cout << "El Numero que selecciono corresponde al dia Sabado";
                    break;
                case 7:
                    cout << "El Numero que selecciono corresponde al dia Domingo";
                    break;
            }
    }

    return 0;
}
