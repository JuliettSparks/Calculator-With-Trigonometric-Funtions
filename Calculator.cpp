#include <iostream>
#include <math.h>
using namespace std;
int main(){
	int op;
	float n1,n2,opera=0;
	double f;
	float convertidor=3.1416/180;
	do{
		system("cls");
		cout<<"Seleccione una opci"<<char(162)<<"n\n";
		cout<<"1.. Suma\n";
		cout<<"2.. Resta\n";
		cout<<"3.. Multiplicaci"<<char(162)<<"n\n";
		cout<<"4.. Divisi"<<char(162)<<"n"<<endl;
		cout<<"5.. Funci"<<char(162)<<"n Seno"<<endl;
		cout<<"6.. Funci"<<char(162)<<"n Coseno"<<endl;
		cout<<"7.. Funci"<<char(162)<<"n Tangente"<<endl;
		cout<<"8.. Salir"<<endl;
		cin>>op;
		switch(op){
			case 1: cout<<"Dame el Primer N"<<char(163)<<"mero"<<endl;
					cin>>n1;
					cout<<"Dame el Segundo N"<<char(163)<<"mero"<<endl;
					cin>>n2;
					opera=n1+n2;
					cout<<"El Resultado es de "<<opera<<endl;
					system("pause");
					break;
			case 2: cout<<"Dame el Primer N"<<char(163)<<"mero"<<endl;
					cin>>n1;
					cout<<"Dame el Segundo N"<<char(163)<<"mero"<<endl;
					cin>>n2;
					opera=n1-n2;
					cout<<"El Resultado es de "<<opera<<endl;
					system("pause");
					break;
			case 3: cout<<"Dame el Primer N"<<char(163)<<"mero"<<endl;
					cin>>n1;
					cout<<"Dame el Segundo N"<<char(163)<<"mero"<<endl;
					cin>>n2;
					opera=n1*n2;
					cout<<"El Resultado es de "<<opera<<endl;
					system("pause");
					break;
			case 4: cout<<"Dame el Primer N"<<char(163)<<"mero"<<endl;
					cin>>n1;
					cout<<"Dame el Segundo N"<<char(163)<<"mero"<<endl;
					cin>>n2;
					opera=n1/n2;
					cout<<"El Resultado es de "<<opera<<endl;
					system("pause");
					break;
			case 5: cout<<"Dame el N"<<char(163)<<"mero"<<endl;
					cin>>f;
					opera=sin(f*convertidor);
					cout<<"El Resultado es de "<<opera<<endl;
					system("pause");
					break;
			case 6: cout<<"Dame el N"<<char(163)<<"mero"<<endl;
					fflush(stdin);
					cin>>f;
					if(f==90){
						opera=0;
					}else{
					opera=cos(f*convertidor);
				}
					cout<<"El Resultado es de "<<opera<<endl;
					system("pause");
					break;
			case 7: cout<<"Dame el N"<<char(163)<<"mero"<<endl;
					cin>>f;
					opera=tan(f*convertidor);
					cout<<"El Resultado es de "<<opera<<endl;
					system("pause");
					break; 
		}
	}while(op!=8);
}
