#include <iostream>
#include <ctime>
#include <conio.h>
#include <windows.h>

using namespace std;

int main(int argc, char *argv[]) {
	
	int seleccion = 0;
	int monedas = 0;
	int primernumero = 0;
	int segundonumero = 0;
	int tercernumero = 0;
	int jackpot = 0;
	
	cout << endl;
	cout <<"    *<---------------------------------------------------------->*" << endl << endl;
	cout <<"      ¡Bienvenido al Tragaperras Virtual! ¿Que desea hacer?  " << endl << endl;	
	cout <<"    *<---------------------------------------------------------->*" << endl << endl;
	
	while(seleccion<6||seleccion>1){
		
		cout <<"      *¡Presione la tecla -1- para ingresar una (1) moneda!" << endl;
		cout <<"      *¡Presione la tecla -2- para ingresar diez (10) monedas!" << endl;
		cout <<"      *¡Presione la tecla -3- para tirar de la palanca!" << endl;
		cout <<"      *¡Presione la tecla -4- para saber cuántas monedas tiene!" << endl;
		cout <<"      *¡Presione la tecla -5- para saber las reglas del juego!" << endl;
		cout <<"      *¡Presione la tecla -6- para salir!" << endl << endl;
		cout <<"    *<--------------------------------------------------------->*" << endl;
		cout << endl ;
		
		cin >> seleccion;
		
		if((seleccion<7)&&(seleccion>0)){
			
			switch(seleccion){
			case 1:
				cout <<"      ¡Ha ingresado una moneda!" << endl << endl;
				monedas++;
				cout <<"      Usted posee "<< monedas <<" monedas." << endl << endl;
				break;
				
			case 2:
				cout <<"      ¡Ha ingresado diez monedas!" << endl << endl;
				for(int i=0;i<10;i++){
				monedas++;
				}
				cout <<"      Usted posee "<< monedas <<" monedas." << endl << endl;
				break;				
				
			case 3:
				if(monedas>0){
					monedas--;
					cout << "      ¡Ha tirado de la palanca! Ha gastado una moneda." << endl << endl;
					cout << "      Usted posee "<< monedas <<" monedas." << endl << endl;
					
					srand(time(NULL));
					primernumero += (rand()%7 + 1);
					cout <<"      *Su primer numero es:         | " << primernumero <<" |" << endl;
					segundonumero += (rand()%7 + 1);
					cout <<"      *Su segundo numero es:        | " << segundonumero <<" |" << endl;
					tercernumero += (rand()%7 + 1);
					cout <<"      *Su tercer numero es:         | " << tercernumero <<" |" << endl << endl;
					
					
					if((primernumero==segundonumero)&&(segundonumero==tercernumero)){
						cout <<	"      ¡¡¡Ha ganado el Jackpot!!!" << endl << endl;
						cout <<"    *<--------------------------------------------------------->*" << endl << endl;
						jackpot += (primernumero+segundonumero+tercernumero);
						cout << "      ¡¡¡Ha ganado " << jackpot << " Monedas!!!" << endl << endl ;
						monedas += jackpot;
						cout << "      ¡Usted ahora posee " << monedas << " monedas! ¡¡Felicitaciones!!" << endl << endl;
						cout <<"    *<--------------------------------------------------------->*" << endl << endl;
						//Vuelvo a poner los valores en 0, así no se acarrean en la proxima jugada.
						primernumero= 0;
						segundonumero= 0;
						tercernumero= 0;
						jackpot= 0;
						
						break;
					}
					
					else{
						cout << "      ¡No ha ganado el Jackpot! ¡Vuelva a intentarlo!" << endl << endl;;
						cout <<"    *<--------------------------------------------------------->*" << endl << endl;
						//Vuelvo a poner los valores en 0, así no se acarrean en la proxima jugada.
						primernumero= 0;
						segundonumero= 0;
						tercernumero= 0;
						break;
					}
					
					break;
				}
				else{
					cout << "      ¡Usted no tiene monedas!" << endl << "      ¡Debe ingresar como mínimo una (1) moneda para iniciar el juego!" << endl << endl;
					cout <<"    *<--------------------------------------------------------->*" << endl << endl;
					break;
				}
				
			case 4:
				   if(monedas>0){
					   cout <<"      ¡Usted posee "<< monedas <<" monedas!" << endl << endl;
					   cout <<"    *<--------------------------------------------------------->*" << endl << endl;
					   break;
				   }
				   
				   else{
					   cout <<"      ¡Usted no tiene monedas!" << endl << "      ¡Asegurese de ingresar como mínimo una (1) moneda para iniciar el juego!" << endl << endl;
					   cout <<"    *<--------------------------------------------------------->*" << endl << endl;
					   break;
				   }
				   break;
				   
			case 5:
				cout <<"      ¡¡Muchas gracias por jugar al Tragaperras Virtual!!" << endl <<endl;
				cout <<"      Las reglas son muy sencillas: primero debe ingresar como mínimo una (1)" << endl <<"      moneda. En caso de no hacerlo, no podrá tirar de la palanca, es decir, no" << endl << "      se iniciará el juego." << endl;
				cout <<"      Puede presionar la tecla -1- para ingresar una (1) moneda, o bien puede" << endl <<"      presionar la tecla -2- para ingresar diez (10) monedas." << endl; 
				cout <<"      Una vez ingresadas la/s moneda/s, presione la tecla -3- para tirar de la" << endl <<"      palanca. Acto seguido, usted recibirá tres números al azar entre "<< endl;
				cout <<"      1 y 7. En caso de que aparezcan 3 números iguales, ganará una cierta " << endl << "      cantidad de monedas correspondientes a la suma de esos tres números. " << endl;
				cout <<"      tres números. Recuerde que siempre puede presionar la tecla -4- para " <<endl << "      consultar cuántas monedas posee." <<endl <<"      Finalmente, la tecla -6- termina el programa." << endl << endl << endl;			
				cout <<"    *<--------------------------------------------------------->*" << endl << endl;				
				break;
				
			case 6:
				cout <<"    *********************************************************" << endl;
				cout <<"    *            ¡¡Muchas gracias por jugar!!               *"<< endl;
				cout <<"    *********************************************************" << endl;
				return 0;
			}			
		}	
		
		else{
			cout <<"      ¡¡Ha ingresado una opción incorrecta!! Intentelo de nuevo!" << endl << endl;
			cout <<"    *<--------------------------------------------------------->*" << endl << endl;
			
		}
	}	
	return 0;
}

