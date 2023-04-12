#include<iostream>
#include<cstring>
using namespace std;
int main (){
//char nama[15]="Zhafir";
//char prodi[]="Ilkom";
//
//cout<<nama<<endl;
//cout<<sizeof(nama)<<endl;
//
//cout<<prodi<<endl;
//cout<<sizeof(prodi)<<endl;
//
////for (int i=0;i<sizeof(prodi);i++){
////	cout<<prodi[i]<<" "<<(prodi[i]=='\0'?"Null":"Not Null")<<endl;
//	
//}
//cout<<"cin.get"<<endl;

char nama[15];
char npm[10];

cin.get(nama,15);
cin.ignore();
cin.get(npm,10);

cout<<"Nama : "<< nama <<endl;
cout<<"NPM : " << npm <<endl;

char karakter;
while (cin.get(karakter)){
	if (karakter == 'a')
		cin.putback('x');
	else 
		cout<<karakter;	
}	
//strlen
cout<<"str len"<<endl;
char str[] = {'I','L','K','O','M','\0'};
cout<<str<<endl;
cout<<strlen(str)<<endl;

//strcat
cout<<"strcat"<<endl;
char fristname[50] = "Muhammad Zhafir ";
char lastname[50] = "Al Kamil";
char *fullname = strcat(fristname,lastname);
cout<<fullname;

//strtol
cout<<"strtol"<<endl;
char* endptr;
char str1[] = "ooo11o1oZhafir";
long valeu1 = strtol(str1, &endptr,2);
cout<< "The convert Valeu is : " << valeu1 <<endl;
cout<< "Unconverted part : " << endptr <<endl;

char str2[] = "IcZidane";
long valeu2 = strtol(str2, &endptr,16);
cout<< "The convert Valeu is : " << valeu2 <<endl;
cout<< "Unconverted part : " << endptr <<endl;


char str3[] = "40Raziq";
long valeu3 = strtol(str3, &endptr,10);
cout<< "The convert Valeu is : " << valeu3 <<endl;
cout<< "Unconverted part : " << endptr <<endl;
cout<<"strtoul"<<endl;
char* endptr;

//strtoul
char str1[] = "ooo11o1oZhafir";
unsigned long valeu1 = strtoul(str1, &endptr,2);
cout<< "The convert Valeu is : " << valeu1 <<endl;
cout<< "Unconverted part : " << endptr <<endl;

char str2[] = "IcZidane";
unsigned long valeu2 = strtoul(str2, &endptr,16);
cout<< "The convert Valeu is : " << valeu2 <<endl;
cout<< "Unconverted part  : " << endptr <<endl;


char str3[] = "40Raziq";
unsigned long valeu3 = strtoul(str3, &endptr,10);
cout<< "The convert Valeu is : " << valeu3 <<endl;
cout<< "Unconverted part : " << endptr <<endl;
cout<<"strtod"<<endl;
char* endptr;

//strtod
char str1[] = "ooo11o1oZhafir";
double valeu1 = strtod(str1, &endptr);
cout<< "The convert Valeu is : " << valeu1 <<endl;
cout<< "Unconverted part : " << endptr <<endl;

char str2[] = "IcZidane";
double valeu2 = strtod(str2, &endptr);
cout<< "The convert Valeu is  :" << valeu2 <<endl;
cout<< "Unconverted part  :" << endptr <<endl;


char str3[] = "40Raziq";
double valeu3 = strtod(str3, &endptr);
cout<< "The convert Valeu is : " << valeu3 <<endl;
cout<< "Unconverted part  :" << endptr <<endl;

char data[8][100] = {"2117051024Jhon Wilken ",
						"2117051009Nathania santa",
						"2117051008Dhiaruhman Raziq",
						"2117051007stefanus abbiyi",
						"2117051006Ihan Haya"};
char* endptr;
for (int i = 0; i < 5; i++){
	long valeu = strtod(data[i], &endptr);
	cout << "Nama : " << endptr <<endl;
	cout << "NPM : " << valeu <<endl;
	cout << endl;
	
}						
}
