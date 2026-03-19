#include <iostream>
#include <conio.h>
#include <windows.h>
#include <math.h>


using namespace std;
HANDLE hConsole = GetStdHandle( STD_OUTPUT_HANDLE );

void gotoxy(int x, int y){
	 HANDLE hcon = GetStdHandle(STD_OUTPUT_HANDLE);
    COORD dwPos;
    dwPos.Y = y;
    dwPos.X = x;
    SetConsoleCursorPosition(hcon, dwPos);
}
//Variables No Modificables
int opcion,opcion1, opcion2, opcion3, opcion_semestre_calificacion, opcion_carreras,opcion_horario;
string n_cali_1 = "",n_cali_2 = "",n_cali_3 = "",n_cali_4 = "",n_cali_5 = "",n_cali_6 = "",n_cali_7 = "",n_cali_8 = "";
string c_cali_1 = "",c_cali_2 = "",c_cali_3 = "",c_cali_4 = "",c_cali_5 = "",c_cali_6 = "",c_cali_7 = "",c_cali_8 = "";
string matricula, contrasena;    
string a1_1_nombre = "", a1_1_apellido = "", a1_1_nacimiento = "", a1_1_edad = "", a1_1_nacionalidad = "";
string a1_1_cedula = "", a1_1_telefono = "";
string a1_1_madre = "", a1_1_padre = "", a1_1_telf_emergencias = "";

//Horario por dia	
string lunes_1 = "", lunes_2 = "", lunes_3 = "", lunes_4 = "";
string martes_1 = "", martes_2 = "", martes_3 = "", martes_4 = "";
string miercoles_1 = "", miercoles_2 = "", miercoles_3 = "", miercoles_4 = "";
string jueves_1 = "", jueves_2 = "", jueves_3 = "", jueves_4 = "";
string viernes_1 = "", viernes_2 = "", viernes_3 = "", viernes_4 = "";
string sabado_1 = "", sabado_2 = "", sabado_3 = "", sabado_4 = "";

//Horario por horas inicial
string h_lunes_1 = "", h_lunes_2 = "", h_lunes_3 = "", h_lunes_4 = "";
string h_martes_1 = "", h_martes_2 = "", h_martes_3 = "", h_martes_4 = "";
string h_miercoles_1 = "", h_miercoles_2 = "", h_miercoles_3 = "", h_miercoles_4 = "";
string h_jueves_1 = "", h_jueves_2 = "", h_jueves_3 = "", h_jueves_4 = "";
string h_viernes_1 = "", h_viernes_2 = "", h_viernes_3 = "", h_viernes_4 = "";
string h_sabado_1 = "", h_sabado_2 = "", h_sabado_3 = "", h_sabado_4 = "";

//Horario por horas final
string f_lunes_1 = "", f_lunes_2 = "", f_lunes_3 = "", f_lunes_4 = "";
string f_martes_1 = "", f_martes_2 = "", f_martes_3 = "", f_martes_4 = "";
string f_miercoles_1 = "", f_miercoles_2 = "", f_miercoles_3 = "", f_miercoles_4 = "";
string f_jueves_1 = "", f_jueves_2 = "", f_jueves_3 = "", f_jueves_4 = "";
string f_viernes_1 = "", f_viernes_2 = "", f_viernes_3 = "", f_viernes_4 = "";
string f_sabado_1 = "", f_sabado_2 = "", f_sabado_3 = "", f_sabado_4 = "";
 

  
    //Base de datos (Credenciales)
string matricu1 = "2022-0001", contra1 = "aaron123";  

  

/*

TODAS LAS VARIABLES QUE SE ENCUENTRAN EN LAS FUNCIONES VOID PUEDEN SER MODIFICADAS SEGUN LA INFORMACION DEL USUARIO

  */
//Base de Datos Completa (Variables Modificables)
void datos_info(){
//Base de Datos Informacion
a1_1_nombre = "Aaron Eliezer", a1_1_apellido = "Hernandez Garcia", a1_1_nacimiento = "25/09/2003", a1_1_edad = "18", a1_1_nacionalidad = "Dominicana";
a1_1_cedula = "402-0000000-0", a1_1_telefono = "809-613-5721";
a1_1_madre = "Alisandra Garcia Meran", a1_1_padre = "Bartolo A. Hernandez Hilario", a1_1_telf_emergencias = "809-889-4614";

}

//Base de Datos Acceso a cuenta 
string a1_nombre = "Aaron Hernandez", a1_matricula = "2022-0001";

//Base de Datos Calificaciones
void calificacion_2022_1(){

	gotoxy(28,2); SetConsoleTextAttribute(hConsole,4);	cout<<"> CALIFICACIONES 2022-1 <" ;	gotoxy(30,4); SetConsoleTextAttribute(hConsole,6); cout<<"MATERIAS"; gotoxy(62,4); cout<<"PUNTOS"; 
n_cali_1 = "Lengua Espanola y Tecnica de Expresion I",n_cali_2 = "Precalculo",n_cali_3 = "Fisica I",n_cali_4 = "Laboratorio de Fisica I",n_cali_5 = "Filosofia",n_cali_6 = "Quimica I",n_cali_7 = "Laboratorio de Quimica I",n_cali_8 = "Orientacion Academica";
c_cali_1 = "96",c_cali_2 = "94",c_cali_3 = "96",c_cali_4 = "90",c_cali_5 = "95",c_cali_6 = "96",c_cali_7 = "98",c_cali_8 = "96";
}

void calificacion_2022_2(){

	gotoxy(28,2); SetConsoleTextAttribute(hConsole,4);	cout<<"> CALIFICACIONES 2022-2 <" ;	gotoxy(30,4); SetConsoleTextAttribute(hConsole,6); cout<<"MATERIAS"; gotoxy(62,4); cout<<"PUNTOS"; 
n_cali_1 = "Lengua Espanola y Tecnica de Expresion II",n_cali_2 = "Calculo Diferencial",n_cali_3 = "Fisica II",n_cali_4 = "Laboratorio de Fisica II",n_cali_5 = "Estructuras Discretas",n_cali_6 = "Introduccion Ingenieria en Sistemas",n_cali_7 = "Lab. Introduccion Ingenieria en Sistemas",n_cali_8 = "";
c_cali_1 = "100",c_cali_2 = "95",c_cali_3 = "96",c_cali_4 = "92",c_cali_5 = "96",c_cali_6 = "100",c_cali_7 = "95",c_cali_8 = "";
}

void calificacion_2022_3(){

	gotoxy(28,2); SetConsoleTextAttribute(hConsole,4);	cout<<"> CALIFICACIONES 2022-3 <" ;	gotoxy(30,4); SetConsoleTextAttribute(hConsole,6); cout<<"MATERIAS"; gotoxy(62,4); cout<<"PUNTOS"; 
n_cali_1 = "Tecnica de Programacion",n_cali_2 = "Lab. Tecnica de Programacion",n_cali_3 = "Fisica III",n_cali_4 = "Laboratorio de Fisica III",n_cali_5 = "Educacion en Valores",n_cali_6 = "Introduccion a la Economia",n_cali_7 = "Metodologia de la Investigacion",n_cali_8 = "Doct. Social de la iglesia";
c_cali_1 = "N/C",c_cali_2 = "N/C",c_cali_3 = "N/C",c_cali_4 = "N/C",c_cali_5 = "N/C",c_cali_6 = "N/C",c_cali_7 = "N/C",c_cali_8 = "N/C";
}



//Base de Datos Horario
void horario_2022_1(){
	gotoxy(46,2); SetConsoleTextAttribute(hConsole,4);	 cout<<"> HORARIO 2022-1 <" ;
lunes_1 = "Leng. Esp.", lunes_2 = "Orien. Acad.", lunes_3 = "Lab. Fisia I", lunes_4 = "Precalculo";
martes_1 = "Fisica I", martes_2 = "", martes_3 = "", martes_4 = "";
miercoles_1 = "Leng. Esp.", miercoles_2 = "Quimica I", miercoles_3 = "", miercoles_4 = "";
jueves_1 = "Precalculo", jueves_2 = "Fisica I", jueves_3 = "", jueves_4 = "";
viernes_1 = "Lab. Quimica I", viernes_2 = "Filosofia", viernes_3 = "", viernes_4 = "";
sabado_1 = "", sabado_2 = "", sabado_3 = "", sabado_4 = "";

//Horario por horas inicial
h_lunes_1 = "10:00Am", h_lunes_2 = "12:00Pm", h_lunes_3 = "4:00Pm", h_lunes_4 = "7:00Pm";
h_martes_1 = "8:00Am", h_martes_2 = "", h_martes_3 = "", h_martes_4 = "";
h_miercoles_1 = "8:00Am", h_miercoles_2 = "2:00Pm", h_miercoles_3 = "", h_miercoles_4 = "";
h_jueves_1 = "7:00Am", h_jueves_2 = "2:00Pm", h_jueves_3 = "", h_jueves_4 = "";
h_viernes_1 = "2:00Pm", h_viernes_2 = "6:00Pm", h_viernes_3 = "", h_viernes_4 = "";
h_sabado_1 = "", h_sabado_2 = "", h_sabado_3 = "", h_sabado_4 = "";

//Horario por horas final
f_lunes_1 = "12:00Pm", f_lunes_2 = "2:00Pm", f_lunes_3 = "6:00Pm", f_lunes_4 = "9:00Pm";
f_martes_1 = "11:00Am", f_martes_2 = "", f_martes_3 = "", f_martes_4 = "";
f_miercoles_1 = "10:00Am", f_miercoles_2 = "5:00Pm", f_miercoles_3 = "", f_miercoles_4 = "";
f_jueves_1 = "10:00Am", f_jueves_2 = "4:00Pm", f_jueves_3 = "", f_jueves_4 = "";
f_viernes_1 = "4:00Pm", f_viernes_2 = "9:00Pm", f_viernes_3 = "", f_viernes_4 = "";
f_sabado_1 = "", f_sabado_2 = "", f_sabado_3 = "", f_sabado_4 = "";
	
}

void horario_2022_2(){
	gotoxy(46,2); SetConsoleTextAttribute(hConsole,4);	 cout<<"> HORARIO 2022-2 <" ;
lunes_1 = "Lab. Intr. SIS", lunes_2 = "Est. Discretas", lunes_3 = "", lunes_4 = "";
martes_1 = "Leng. Esp. II", martes_2 = "Fisica II", martes_3 = "", martes_4 = "";
miercoles_1 = "Est. Discretas", miercoles_2 = "C. Diferencial", miercoles_3 = "", miercoles_4 = "";
jueves_1 = "Fisica II", jueves_2 = "Leng. Esp. II", jueves_3 = "Intr. Ing. SI", jueves_4 = "Lab. Fisica II";
viernes_1 = "C. Diferencial", viernes_2 = "", viernes_3 = "", viernes_4 = "";
sabado_1 = "", sabado_2 = "", sabado_3 = "", sabado_4 = "";

//Horario por horas inicial
h_lunes_1 = "12:00Pm", h_lunes_2 = "6:00Pm", h_lunes_3 = "", h_lunes_4 = "";
h_martes_1 = "8:00Am", h_martes_2 = "1:00Pm", h_martes_3 = "", h_martes_4 = "";
h_miercoles_1 = "12:00Am", h_miercoles_2 = "2:00Pm", h_miercoles_3 = "", h_miercoles_4 = "";
h_jueves_1 = "8:00Am", h_jueves_2 = "10:00Am", h_jueves_3 = "4:00Pm", h_jueves_4 = "6:00Pm";
h_viernes_1 = "2:00Pm", h_viernes_2 = "", h_viernes_3 = "", h_viernes_4 = "";
h_sabado_1 = "", h_sabado_2 = "", h_sabado_3 = "", h_sabado_4 = "";

//Horario por horas final
f_lunes_1 = "2:00Pm", f_lunes_2 = "9:00Pm", f_lunes_3 = "", f_lunes_4 = "";
f_martes_1 = "10:00Am", f_martes_2 = "4:00Pm", f_martes_3 = "", f_martes_4 = "";
f_miercoles_1 = "2:00Pm", f_miercoles_2 = "4:00Pm", f_miercoles_3 = "", f_miercoles_4 = "";
f_jueves_1 = "10:00Am", f_jueves_2 = "12:00Pm", f_jueves_3 = "6:00Pm", f_jueves_4 = "8:00Pm";
f_viernes_1 = "4:00Pm", f_viernes_2 = "", f_viernes_3 = "", f_viernes_4 = "";
f_sabado_1 = "", f_sabado_2 = "", f_sabado_3 = "", f_sabado_4 = "";
	
}

void horario_2022_3(){
	gotoxy(46,2); SetConsoleTextAttribute(hConsole,4);	 cout<<"> HORARIO 2022-3 <" ;
lunes_1 = "", lunes_2 = "", lunes_3 = "", lunes_4 = "";
martes_1 = "  Tec. Prog.", martes_2 = "Lab.Tec. Prog.", martes_3 = "", martes_4 = "";
miercoles_1 = "Lab.Fisica III", miercoles_2 = "  Fisica III", miercoles_3 = "Educ. Valores", miercoles_4 = "";
jueves_1 = "Metod. de Inv.", jueves_2 = "  Fisica III", jueves_3 = "", jueves_4 = "";
viernes_1 = "D/ Soc. Igles.", viernes_2 = "", viernes_3 = "", viernes_4 = "";
sabado_1 = "Int. Economia", sabado_2 = "", sabado_3 = "", sabado_4 = "";

//Horario por horas inicial
h_lunes_1 = "", h_lunes_2 = "", h_lunes_3 = "", h_lunes_4 = "";
h_martes_1 = "5:00Pm", h_martes_2 = "8:00Pm", h_martes_3 = "", h_martes_4 = "";
h_miercoles_1 = "8:00Am", h_miercoles_2 = "10:00Am", h_miercoles_3 = "6:00Pm", h_miercoles_4 = "";
h_jueves_1 = "9:00Am", h_jueves_2 = "4:00Pm", h_jueves_3 = "", h_jueves_4 = "";
h_viernes_1 = "10:00Pm", h_viernes_2 = "", h_viernes_3 = "", h_viernes_4 = "";
h_sabado_1 = "9:00Am", h_sabado_2 = "", h_sabado_3 = "", h_sabado_4 = "";

//Horario por horas final
f_lunes_1 = "", f_lunes_2 = "", f_lunes_3 = "", f_lunes_4 = "";
f_martes_1 = " 8:00Pm", f_martes_2 = "10:00Pm", f_martes_3 = "", f_martes_4 = "";
f_miercoles_1 = "10:00Am", f_miercoles_2 = "1:00Pm", f_miercoles_3 = "8:00Pm", f_miercoles_4 = "";
f_jueves_1 = "12:00Pm", f_jueves_2 = "6:00Pm", f_jueves_3 = "", f_jueves_4 = "";
f_viernes_1 = "12:00Pm", f_viernes_2 = "", f_viernes_3 = "", f_viernes_4 = "";
f_sabado_1 = "12:00Pm", f_sabado_2 = "", f_sabado_3 = "", f_sabado_4 = "";
	
	
}







//Aqui estan todas las plantillas
void plantilla_cuadro(){
	  gotoxy(47,5);
	SetConsoleTextAttribute(hConsole, 3);
		  cout<<"UNIVERSIDAD CATOLICA NORDESTANA"; 
		SetConsoleTextAttribute(hConsole,11);
for(int i=75;i<99;i++){ gotoxy(i,8); cout<<"_"; gotoxy(i,11); cout<<"_"; }	
for(int i=31;i<99;i++){ gotoxy(i,21); cout<<"_"; }
for(int i=31;i<75;i++){ gotoxy(i,6); cout<<"_"; }
for(int i=30;i<75;i++){ gotoxy(i,9); cout<<"_"; }
for(int l=7;l<22;l++){ gotoxy(30,l); cout<<"|"; gotoxy(75,l); cout<<"|"; }
for(int l=9;l<22;l++){ gotoxy(99,l); cout<<"|"; }
}

void plantilla_informacion(){
SetConsoleTextAttribute(hConsole,11);
for(int i=4;i<22;i++){	gotoxy(10,i); cout<<"|"; gotoxy(70,i); cout<<"|"; }
for(int i=4;i<22;i++){	gotoxy(10,i); cout<<"|"; }	
for(int i=11;i<70;i++){	 gotoxy(i,3); cout<<"_"; gotoxy(i,21); cout<<"_"; }
for(int i=3;i<23;i++){	gotoxy(9,i); cout<<"|"; gotoxy(71,i); cout<<"|"; }
for(int i=4;i<22;i++){	gotoxy(10,i);  cout<<"|"; }
for(int i=10;i<25;i++){ gotoxy(i,2); cout<<"_"; }
for(int i=55;i<71;i++){ gotoxy(i,2); cout<<"_"; }
for(int i=10;i<71;i++){	gotoxy(i,22); cout<<"_"; }
for(int i=1;i<4;i++){ gotoxy(25,i); cout<<"|"; gotoxy(54,i);  cout<<"|"; gotoxy(24,i); cout<<"|"; gotoxy(55,i); cout<<"|"; }
for(int i=24;i<56;i++){	gotoxy(i,0); cout<<"_"; }

//Menu de opciones

for(int i=12;i<23;i++){	gotoxy(96,i); SetConsoleTextAttribute(hConsole,11); cout<<"|"; }
for(int i=72;i<96;i++){	gotoxy(i,22); SetConsoleTextAttribute(hConsole,11); cout<<"_"; gotoxy(i,11); cout<<"_"; gotoxy(i,14); cout<<"_"; 	  
//Contenido
gotoxy(28,2); SetConsoleTextAttribute(hConsole,4); cout<<"> INFORMACION PERSONAL <" ; }
}


	void plantilla_calificacion(){
	SetConsoleTextAttribute(hConsole,11);
for(int i=4;i<22;i++){	gotoxy(10,i); cout<<"|"; gotoxy(70,i); cout<<"|"; }
for(int i=4;i<22;i++){	gotoxy(10,i); cout<<"|"; }	
for(int i=11;i<70;i++){	gotoxy(i,3); cout<<"_"; SetConsoleTextAttribute(hConsole, 11);

//Lineas de adentro de las calificaciones
gotoxy(i,5); cout<<"_"; SetConsoleTextAttribute(hConsole, 11); 	gotoxy(i,7); cout<<"_";  }
for(int i=4;i<22;i++){gotoxy(59,i); cout<<"|"; }  
for(int i=3;i<23;i++){	gotoxy(9,i); cout<<"|"; gotoxy(71,i); cout<<"|"; }
for(int i=4;i<22;i++){	gotoxy(10,i); cout<<"|"; }	 
for(int i=10;i<25;i++){gotoxy(i,2); cout<<"_"; }
for(int i=55;i<71;i++){gotoxy(i,2); cout<<"_"; }
for(int i=10;i<71;i++){ gotoxy(i,22); cout<<"_"; }
for(int i=1;i<4;i++){gotoxy(25,i); cout<<"|";  gotoxy(54,i); cout<<"|";  gotoxy(24,i); cout<<"|"; gotoxy(55,i); cout<<"|"; }
for(int i=24;i<56;i++){ gotoxy(i,0);  cout<<"_"; }

//Menu de opciones
for(int i=12;i<23;i++){ gotoxy(96,i); cout<<"|"; } 
for(int i=72;i<96;i++){ gotoxy(i,22); cout<<"_"; gotoxy(i,11); cout<<"_"; gotoxy(i,14);cout<<"_";}		
for(int i=11;i<70;i++){
 	SetConsoleTextAttribute(hConsole, 11); 	gotoxy(i,9); cout<<"_"; SetConsoleTextAttribute(hConsole, 11); 	
 	gotoxy(i,11); cout<<"_"; SetConsoleTextAttribute(hConsole, 11);
 	gotoxy(i,13); cout<<"_"; SetConsoleTextAttribute(hConsole, 11);
 	gotoxy(i,15); cout<<"_"; SetConsoleTextAttribute(hConsole, 11); 
 	gotoxy(i,17); cout<<"_"; SetConsoleTextAttribute(hConsole, 11); 
 	gotoxy(i,19); cout<<"_"; SetConsoleTextAttribute(hConsole, 11);
 	gotoxy(i,21);  cout<<"_"; SetConsoleTextAttribute(hConsole, 11); } 
}


void plantilla_opcion_carreras(){
SetConsoleTextAttribute(hConsole, 11);
for (int i = 20; i < 80; i++){ gotoxy(i,3); cout<<"_";	gotoxy(i,20);cout<<"_"; }
for (int i = 35; i < 65; i++){ gotoxy(i,0); cout<<"_"; }
for (int i = 1; i < 4; i++){ gotoxy(35,i); cout<<"|"; gotoxy(64,i); cout<<"|"; }	
for (int i = 20; i < 40; i++){ gotoxy(i,22); cout<<"_"; }
for (int i = 21; i < 23; i++){ gotoxy(20,i); cout<<"|"; gotoxy(40,i); cout<<"|"; }
for (int i = 4; i < 21; i++){ gotoxy(20,i); cout<<"|"; gotoxy(79,i); cout<<"|";	}
}


	void plantilla_calculadora_creditos(){
SetConsoleTextAttribute(hConsole, 11);
for (int i = 25; i < 75; i++){ gotoxy(i,3); cout<<"_"; gotoxy(i,14); cout<<"_"; }
for (int i = 35; i < 65; i++){ gotoxy(i,0); cout<<"_"; }
for (int i = 1; i < 4; i++){ gotoxy(35,i); cout<<"|"; gotoxy(64,i); cout<<"|"; }	
for (int i = 75; i < 105; i++){ gotoxy(i,14); cout<<"_"; }
for (int i = 75; i < 105; i++){ gotoxy(i,3); cout<<"_"; }
for (int i = 75; i < 104; i++){ gotoxy(i,6); cout<<"_";	}
for (int i = 4; i < 15; i++){ gotoxy(104,i); cout<<"|"; }
for (int i = 4; i < 15; i++){ gotoxy(25,i); cout<<"|"; gotoxy(74,i); cout<<"|";	}
}


void plantilla_horario(){
for(int i=101;i<119;i++){  gotoxy(i,9); cout<<"_"; gotoxy(i,11); cout<<"_";	gotoxy(i,18); cout<<"_";  }
for(int i=10;i<19;i++){	gotoxy(119,i); cout<<"|"; } SetConsoleTextAttribute(hConsole,11);
for(int i=4;i<22;i++){ gotoxy(10,i); cout<<"|"; gotoxy(100,i); cout<<"|"; }
for(int i=4;i<22;i++){ gotoxy(10,i); cout<<"|";  }
for(int i=11;i<100;i++){ gotoxy(i,3); cout<<"_"; gotoxy(i,21); cout<<"_"; }
for(int i=3;i<23;i++){ gotoxy(9,i); cout<<"|"; gotoxy(101,i); cout<<"|"; }
for(int i=4;i<22;i++){	gotoxy(10,i); cout<<"|"; }
for(int i=10;i<40;i++){ gotoxy(i,2); cout<<"_"; }
for(int i=70;i<101;i++){ gotoxy(i,2); cout<<"_"; }
for(int i=10;i<101;i++){ gotoxy(i,45); cout<<"_"; }
for(int i=1;i<4;i++){ gotoxy(40,i); cout<<"|"; gotoxy(69,i); cout<<"|"; gotoxy(39,i); cout<<"|"; gotoxy(70,i); cout<<"|"; }
for(int i=39;i<71;i++){	gotoxy(i,0); cout<<"_"; }
for(int  i=10;i<101;i++){ gotoxy(i,22); cout<<"_"; }
for(int  i=4;i<22;i++){	gotoxy(25,i); cout<<"|"; gotoxy(40,i); cout<<"|";  gotoxy(55,i); cout<<"|";  gotoxy(70,i); cout<<"|";  gotoxy(85,i); cout<<"|"; }
for(int  i=11;i<100;i++){ gotoxy(i,5); cout<<"_"; }


gotoxy(15,4); SetConsoleTextAttribute(hConsole,6);	 cout<<"Lunes" ;
gotoxy(30,4); SetConsoleTextAttribute(hConsole,6);	 cout<<"Martes" ;
gotoxy(43,4); SetConsoleTextAttribute(hConsole,6);	 cout<<"Miercoles" ;
gotoxy(60,4); SetConsoleTextAttribute(hConsole,6);	 cout<<"Jueves" ;
gotoxy(75,4); SetConsoleTextAttribute(hConsole,6);	 cout<<"Viernes" ;
gotoxy(90,4); SetConsoleTextAttribute(hConsole,6);	 cout<<"Sabado" ;
for(int  i=11;i<100;i++){ gotoxy(i,9); SetConsoleTextAttribute(hConsole,11);
cout<<"_";  gotoxy(i,13); cout<<"_"; gotoxy(i,17); cout<<"_"; }
}

void plantilla_estado_cuenta(){
			 //ESTADO DE LA CUENTA
gotoxy(76,10); SetConsoleTextAttribute(hConsole, 4); cout<<"> ESTADO DE LA CUENTA <"; SetConsoleTextAttribute(hConsole, 6);	   		 
gotoxy(81,14); cout<<"ACCESO ACTIVO";
gotoxy(80,16); SetConsoleTextAttribute(hConsole, 3); cout<<a1_nombre; 
gotoxy(83,17);	SetConsoleTextAttribute(hConsole, 3); cout<<a1_matricula; 
}








//Aqui todas las funciones o ejecucion de los comandos
void procesando(){
for(int i = 0; i <= 100; i++){ gotoxy(42,15); SetConsoleTextAttribute(hConsole, 2); cout<<"Procesando... "; SetConsoleTextAttribute(hConsole, 3); 
system("cls>i");  cout <<"(" <<i <<" %)"; }
}

void cerrando(){
	system("cls");
for(int i = 0; i <= 100; i++){ gotoxy(42,15); SetConsoleTextAttribute(hConsole, 2); cout<<"Cerrando... "; SetConsoleTextAttribute(hConsole, 3); 
system("cls>i");  cout <<"(" <<i <<" %)"; }
exit(0);
}

	void iniciar_session(){
do{
	plantilla_cuadro();
SetConsoleTextAttribute(hConsole, 6);
	 //Login
gotoxy(43,8); SetConsoleTextAttribute(hConsole, 4); cout<<"> INICIAR SESSION <";
gotoxy(76,10); SetConsoleTextAttribute(hConsole, 4); cout<<"> ESTADO DE LA CUENTA <"; SetConsoleTextAttribute(hConsole, 6);	 gotoxy(83,16);	cout<<"SIN ACCESO";		 	 
 
 	      //Matricula
gotoxy(38,11);	cout<<"Matricula: ";
gotoxy(33,11);	cout<<"--> "; SetConsoleTextAttribute(hConsole, 15);	gotoxy(49,11); 	cin>>matricula; SetConsoleTextAttribute(hConsole, 6);
		//Contraseña
gotoxy(38,13);	cout<<"Contrasena: ";
gotoxy(33,13);	cout<<"--> "; SetConsoleTextAttribute(hConsole, 15);	gotoxy(50,13); cin>>contrasena;
		//Procesando
procesando();
	
if (matricula != matricu1 || contrasena != contra1){
gotoxy(35,17); SetConsoleTextAttribute(hConsole, 4); cout<<"Usuario o Contrasena Incorrecto"; getch(); system("cls");}
}while (matricula != matricu1 || contrasena != contra1);
}


void info(){
	plantilla_informacion();
		datos_info();
gotoxy(15,5); SetConsoleTextAttribute(hConsole,6); cout<<"--> Nombres: "; 	SetConsoleTextAttribute(hConsole,15); cout<<a1_1_nombre;		SetConsoleTextAttribute(hConsole,6);
gotoxy(15,6); cout<<"--> Apellidos: "; 	SetConsoleTextAttribute(hConsole,15); cout<<a1_1_apellido;		SetConsoleTextAttribute(hConsole,6);
gotoxy(15,7); cout<<"--> Fecha de Nacimiento: "; 	SetConsoleTextAttribute(hConsole,15); cout<<a1_1_nacimiento;		SetConsoleTextAttribute(hConsole,6);
gotoxy(15,8); cout<<"-->Edad Actual: "; 	SetConsoleTextAttribute(hConsole,15); cout<<a1_1_edad;		SetConsoleTextAttribute(hConsole,6);
gotoxy(15,9); cout<<"--> Nacionalidad: "; 	SetConsoleTextAttribute(hConsole,15); cout<<a1_1_nacionalidad;		SetConsoleTextAttribute(hConsole,6);	
gotoxy(15,10); cout<<"--> Cedula / DNI: "; 	SetConsoleTextAttribute(hConsole,15); cout<<a1_1_cedula;		SetConsoleTextAttribute(hConsole,6);
gotoxy(15,11); cout<<"--> Telefono: "; 	SetConsoleTextAttribute(hConsole,15); cout<<a1_1_telefono;		SetConsoleTextAttribute(hConsole,6);
gotoxy(25,14); cout<<" > Informacion de Padres < ";	
gotoxy(15,16); cout<<"--> Madre: "; 	SetConsoleTextAttribute(hConsole,15); cout<<a1_1_madre;		SetConsoleTextAttribute(hConsole,6);
gotoxy(15,17); cout<<"--> Padre: "; 	SetConsoleTextAttribute(hConsole,15); cout<<a1_1_padre;		SetConsoleTextAttribute(hConsole,6);
gotoxy(25,19); cout<<"> Telefono de Emergencias < "; gotoxy(32,20); SetConsoleTextAttribute(hConsole,15);cout<<a1_1_telf_emergencias;	SetConsoleTextAttribute(hConsole,6);
}



	void calificacion(){
			  		  		//Contenido
			SetConsoleTextAttribute(hConsole, 15);
gotoxy(15,6); cout<<n_cali_1; gotoxy(64,6); cout<<c_cali_1;  SetConsoleTextAttribute(hConsole, 15);
gotoxy(15,8);  cout<<n_cali_2; gotoxy(64,8); cout<<c_cali_2; SetConsoleTextAttribute(hConsole, 15);
gotoxy(15,10); cout<<n_cali_3; gotoxy(64,10); cout<<c_cali_3;	SetConsoleTextAttribute(hConsole, 15); 
gotoxy(15,12); cout<<n_cali_4; gotoxy(64,12); cout<<c_cali_4; 	  SetConsoleTextAttribute(hConsole, 15);
gotoxy(15,14); cout<<n_cali_5;  gotoxy(64,14);cout<<c_cali_5; SetConsoleTextAttribute(hConsole, 15);
gotoxy(15,16); cout<<n_cali_6; 	gotoxy(64,16); cout<<c_cali_6; SetConsoleTextAttribute(hConsole, 15);
gotoxy(15,18); cout<<n_cali_7; gotoxy(64,18); cout<<c_cali_7;  SetConsoleTextAttribute(hConsole, 15);
gotoxy(15,20); cout<<n_cali_8; gotoxy(64,20); cout<<c_cali_8; SetConsoleTextAttribute(hConsole, 15); 

}
	
	

//Variables usadas en este espacio void	
	string carrera = "", inscripcion = "", credi = "", lab = "";
	float creditos = 0,laboratorios = 0, total, credi_1, inscripcion_1 , lab_1;
	float resul_creditos,resul_laboratorios;
	
	void variables_calculadora(){
		if (opcion_carreras == 1){carrera = "INGENIERIA EN SISTEMAS Y COMPUTOS", credi = "670", lab = "2,760", inscripcion = "5,180", credi_1 = 670,inscripcion_1=5180, lab_1= 2760;  plantilla_calculadora_creditos(); }
		if (opcion_carreras == 2){carrera = "INGENIERIA CIVIL",  credi = "795", lab = "2,760", inscripcion = "5,180", credi_1 = 795,inscripcion_1=5180, lab_1= 2760;	plantilla_calculadora_creditos(); }
		if (opcion_carreras == 3){carrera = "ARQUITECTURA", credi = "825", lab = "2,760", inscripcion = "5,180", credi_1 = 825,inscripcion_1=5180, lab_1= 2760;  plantilla_calculadora_creditos(); }
		if (opcion_carreras == 4){carrera = "MEDICINA", credi = "1,110", lab = "3,000", inscripcion = "5,180", credi_1 = 1110,inscripcion_1=5180, lab_1= 3000;  plantilla_calculadora_creditos(); }
		if (opcion_carreras == 5){carrera = "ODONTOLOGIA", credi = "1,200", lab = "3,000", inscripcion = "5,180", credi_1 = 1200,inscripcion_1=5180, lab_1= 3000;	plantilla_calculadora_creditos(); }
		if (opcion_carreras == 6){carrera = "DERECHO", credi = "670", lab = "2,760", inscripcion = "5,180", credi_1 = 670,inscripcion_1=5180, lab_1= 2760;	plantilla_calculadora_creditos(); }
		if (opcion_carreras == 7){carrera = "EDUCACION INICIAL", credi = "515", lab = "2,520", inscripcion = "5,180", credi_1 = 515,inscripcion_1=5180, lab_1= 2520;	plantilla_calculadora_creditos(); }
		if (opcion_carreras == 8){carrera = "EDUCACION BASICA", credi = "515", lab = "2,520", inscripcion = "5,180", credi_1 = 515,inscripcion_1=5180, lab_1= 2520;	plantilla_calculadora_creditos(); }
		if (opcion_carreras == 9){carrera = "MERCADEO", credi = "670", lab = "2,760", inscripcion = "5,180", credi_1 = 670,inscripcion_1=5180, lab_1= 2760;	plantilla_calculadora_creditos(); }
		if (opcion_carreras == 10){carrera = "ADMINISTRACION DE EMPRESAS", credi = "670", lab = "2,760", inscripcion = "5,180", credi_1 = 670,inscripcion_1=5180, lab_1= 2760;	plantilla_calculadora_creditos(); }

}




	void menu_principal1(){
	gotoxy(43,8);
 	SetConsoleTextAttribute(hConsole, 4);
	      cout<<"> MENU PRINCIPAL <"; 
	SetConsoleTextAttribute(hConsole, 6);      
gotoxy(40,11); cout<<"(1) Informacion Personal";
gotoxy(40,12); cout<<"(2) Calificaciones";
gotoxy(40,13); cout<<"(3) Horario";		 
gotoxy(40,14); cout<<"(4) Calculadora de creditos";	
gotoxy(40,15); cout<<"(5) Salir";
		 
			 //ESTADO DE LA CUENTA
gotoxy(76,10); SetConsoleTextAttribute(hConsole, 4); cout<<"> ESTADO DE LA CUENTA <"; SetConsoleTextAttribute(hConsole, 6);	   		 
gotoxy(81,14); cout<<"ACCESO ACTIVO";
gotoxy(80,16); SetConsoleTextAttribute(hConsole, 3); cout<<a1_nombre; 
gotoxy(83,17);	SetConsoleTextAttribute(hConsole, 3); cout<<a1_matricula; 	 	 

		 //Opcion de seleccion
gotoxy(38,17); SetConsoleTextAttribute(hConsole, 4);  cout<<"Opcion: ";  SetConsoleTextAttribute(hConsole, 15); cin>>opcion; system("cls"); plantilla_cuadro();	
}


	void ejecucion_calculadora_creditos(){	
gotoxy(37,2); SetConsoleTextAttribute(hConsole, 4); cout<<"> CALCULADORA DE CREDITO <";
gotoxy(27,4); SetConsoleTextAttribute(hConsole, 2); cout<<"Carrera -->"; gotoxy(39,4); SetConsoleTextAttribute(hConsole, 6); cout<<carrera;
gotoxy(82,5); SetConsoleTextAttribute(hConsole, 4);	cout<<"> INFORMACION <"; 
gotoxy(76,8); SetConsoleTextAttribute(hConsole, 6); cout<<"--> Inscripcion RD$: "; 	gotoxy(97,8); SetConsoleTextAttribute(hConsole, 15);	cout<<inscripcion; 
gotoxy(76,9); SetConsoleTextAttribute(hConsole, 6);	cout<<"--> Credito RD$: ";	gotoxy(93,9);	SetConsoleTextAttribute(hConsole, 15);	cout<<credi; 
gotoxy(76,10); SetConsoleTextAttribute(hConsole, 6); cout<<"--> Laboratorios RD$: "; gotoxy(98,10);	SetConsoleTextAttribute(hConsole, 15);	cout<<lab; 
gotoxy(86,12); SetConsoleTextAttribute(hConsole, 4); cout<<"> NOTA < ";	 gotoxy(76,13); SetConsoleTextAttribute(hConsole, 15); cout<<"Lab. virtuales no se cobran ";

//Pedir los datos al usuario	
gotoxy(27,6); SetConsoleTextAttribute(hConsole, 3); cout<<"Cantidad de creditos: ";	gotoxy(49,6); SetConsoleTextAttribute(hConsole, 15); cin>>creditos; 
gotoxy(27,7); SetConsoleTextAttribute(hConsole, 3); cout<<"Cantidad de Laboratorios: ";	gotoxy(53,7); SetConsoleTextAttribute(hConsole, 15); cin>>laboratorios;
	
//Haciendo el calculo para el resultado
resul_creditos = creditos * credi_1;
resul_laboratorios = laboratorios * lab_1;
total = resul_creditos + resul_laboratorios + inscripcion_1;
	
			
gotoxy(45,9); SetConsoleTextAttribute(hConsole, 4); cout<<"TOTAL A PAGAR";	gotoxy(47,10);  SetConsoleTextAttribute(hConsole, 15); cout<<"RD$ "<<total;
	
for (int i = 26; i < 74; i++){ gotoxy(i,12); SetConsoleTextAttribute(hConsole, 11); cout<<"_"; }
gotoxy(26,13);
SetConsoleTextAttribute(hConsole, 6);
cout<<"(1)Inicio (2) Regresar (3) Salir"; gotoxy(60,13); SetConsoleTextAttribute(hConsole, 4); cout<<"Opcion: "; SetConsoleTextAttribute(hConsole, 15); cin>>opcion3;

	switch(opcion3){
case 1: system("cls"); plantilla_cuadro(); menu_principal1(); break;
case 3: cerrando(); break;
}
}	

void ejecucion_calculadora(){
	variables_calculadora();	
	ejecucion_calculadora_creditos();
	
	
}




void horario(){

//Lunes
gotoxy(11,6);	 
SetConsoleTextAttribute(hConsole,2); cout<<lunes_1; SetConsoleTextAttribute(hConsole,8); gotoxy(14,7);cout<<h_lunes_1;gotoxy(14,8);cout<<f_lunes_1;
gotoxy(11,10);	 
SetConsoleTextAttribute(hConsole,2); cout<<lunes_2; SetConsoleTextAttribute(hConsole,8); gotoxy(14,11);cout<<h_lunes_2;gotoxy(14,12);cout<<f_lunes_2;
gotoxy(11,14);	 
SetConsoleTextAttribute(hConsole,2); cout<<lunes_3; SetConsoleTextAttribute(hConsole,8); gotoxy(14,15);cout<<h_lunes_3;gotoxy(14,16);cout<<f_lunes_3;
gotoxy(11,18);	 
SetConsoleTextAttribute(hConsole,2); cout<<lunes_4; SetConsoleTextAttribute(hConsole,8); gotoxy(14,19);cout<<h_lunes_4;gotoxy(14,20);cout<<f_lunes_4;


//Martes
gotoxy(26,6);	 
SetConsoleTextAttribute(hConsole,2); cout<<martes_1; SetConsoleTextAttribute(hConsole,8); gotoxy(30,7);cout<<h_martes_1;gotoxy(29,8);cout<<f_martes_1;
gotoxy(26,10);	 
SetConsoleTextAttribute(hConsole,2); cout<<martes_2; SetConsoleTextAttribute(hConsole,8); gotoxy(30,11);cout<<h_martes_2;gotoxy(29,12);cout<<f_martes_2;
gotoxy(26,14);	 
SetConsoleTextAttribute(hConsole,2); cout<<martes_3; SetConsoleTextAttribute(hConsole,8); gotoxy(30,15);cout<<h_martes_3;gotoxy(29,16);cout<<f_martes_3;
gotoxy(26,18);	 
SetConsoleTextAttribute(hConsole,2); cout<<martes_4; SetConsoleTextAttribute(hConsole,8); gotoxy(30,19);cout<<h_martes_4;gotoxy(29,20);cout<<f_martes_4;

//Miercoles
gotoxy(41,6);	 
SetConsoleTextAttribute(hConsole,2); cout<<miercoles_1; SetConsoleTextAttribute(hConsole,8); gotoxy(44,7);cout<<h_miercoles_1;gotoxy(43,8);cout<<f_miercoles_1;
gotoxy(41,10);	 
SetConsoleTextAttribute(hConsole,2); cout<<miercoles_2; SetConsoleTextAttribute(hConsole,8); gotoxy(44,11);cout<<h_miercoles_2;gotoxy(44,12);cout<<f_miercoles_2;
gotoxy(41,14);	 
SetConsoleTextAttribute(hConsole,2); cout<<miercoles_3; SetConsoleTextAttribute(hConsole,8); gotoxy(44,15);cout<<h_miercoles_3;gotoxy(44,16);cout<<f_miercoles_3;
gotoxy(41,18);	 
SetConsoleTextAttribute(hConsole,2); cout<<miercoles_4; SetConsoleTextAttribute(hConsole,8); gotoxy(44,19);cout<<h_miercoles_4;gotoxy(44,20);cout<<f_miercoles_4;

//Jueves
gotoxy(56,6);	 
SetConsoleTextAttribute(hConsole,2); cout<<jueves_1; SetConsoleTextAttribute(hConsole,8); gotoxy(59,7);cout<<h_jueves_1;gotoxy(59,8);cout<<f_jueves_1;
gotoxy(56,10);	 
SetConsoleTextAttribute(hConsole,2); cout<<jueves_2; SetConsoleTextAttribute(hConsole,8); gotoxy(59,11);cout<<h_jueves_2;gotoxy(59,12);cout<<f_jueves_2;
gotoxy(56,14);	 
SetConsoleTextAttribute(hConsole,2); cout<<jueves_3; SetConsoleTextAttribute(hConsole,8); gotoxy(59,15);cout<<h_jueves_3;gotoxy(59,16);cout<<f_jueves_3;
gotoxy(56,18);	 
SetConsoleTextAttribute(hConsole,2); cout<<jueves_4; SetConsoleTextAttribute(hConsole,8); gotoxy(59,19);cout<<h_jueves_4;gotoxy(59,20);cout<<f_jueves_4;

//Viernes
gotoxy(71,6);	 
SetConsoleTextAttribute(hConsole,2); cout<<viernes_1; SetConsoleTextAttribute(hConsole,8); gotoxy(74,7);cout<<h_viernes_1;gotoxy(74,8);cout<<f_viernes_1;
gotoxy(71,10);	 
SetConsoleTextAttribute(hConsole,2); cout<<viernes_2; SetConsoleTextAttribute(hConsole,8); gotoxy(74,11);cout<<h_viernes_2;gotoxy(74,12);cout<<f_viernes_2;
gotoxy(71,14);	
SetConsoleTextAttribute(hConsole,2); cout<<viernes_3; SetConsoleTextAttribute(hConsole,8); gotoxy(74,15);cout<<h_viernes_3;gotoxy(74,16);cout<<f_viernes_3;
gotoxy(71,18);	 
SetConsoleTextAttribute(hConsole,2); cout<<viernes_4; SetConsoleTextAttribute(hConsole,8); gotoxy(74,19);cout<<h_viernes_4;gotoxy(74,20);cout<<f_viernes_4;

//Sabado
gotoxy(86,6);	 
SetConsoleTextAttribute(hConsole,2); cout<<sabado_1; SetConsoleTextAttribute(hConsole,8); gotoxy(89,7);cout<<h_sabado_1;gotoxy(89,8);cout<<f_sabado_1;
gotoxy(86,10);	 
SetConsoleTextAttribute(hConsole,2); cout<<sabado_2; SetConsoleTextAttribute(hConsole,8); gotoxy(89,11);cout<<h_sabado_2;gotoxy(89,12);cout<<f_sabado_2;
gotoxy(86,14);	
SetConsoleTextAttribute(hConsole,2); cout<<sabado_3; SetConsoleTextAttribute(hConsole,8); gotoxy(89,15);cout<<h_sabado_3;gotoxy(89,16);cout<<f_sabado_3;
gotoxy(86,18);	 
SetConsoleTextAttribute(hConsole,2); cout<<sabado_4; SetConsoleTextAttribute(hConsole,8); gotoxy(89,19);cout<<h_sabado_4;gotoxy(89,20);cout<<f_sabado_4;

}








//Aqui estan todos los menu utilizados
	void menu_principal(){
	gotoxy(43,8);
 	SetConsoleTextAttribute(hConsole, 4);
	      cout<<"> MENU PRINCIPAL <"; 
	SetConsoleTextAttribute(hConsole, 6);      
gotoxy(40,11); cout<<"(1) Informacion Personal";
gotoxy(40,12); cout<<"(2) Calificaciones";
gotoxy(40,13); cout<<"(3) Horario";		 
gotoxy(40,14); cout<<"(4) Calculadora de creditos";	
gotoxy(40,15); cout<<"(5) Salir";
		 
			 //ESTADO DE LA CUENTA
gotoxy(76,10); SetConsoleTextAttribute(hConsole, 4); cout<<"> ESTADO DE LA CUENTA <"; SetConsoleTextAttribute(hConsole, 6);	   		 
gotoxy(81,14); cout<<"ACCESO ACTIVO";
gotoxy(80,16); SetConsoleTextAttribute(hConsole, 3); cout<<a1_nombre; 
gotoxy(83,17);	SetConsoleTextAttribute(hConsole, 3); cout<<a1_matricula; 	 	 

		 //Opcion de seleccion
gotoxy(38,17); SetConsoleTextAttribute(hConsole, 4);  cout<<"Opcion: ";  SetConsoleTextAttribute(hConsole, 15); cin>>opcion; system("cls"); plantilla_cuadro();	
}


void menu(){
SetConsoleTextAttribute(hConsole, 4);
gotoxy(80,13); cout<<"> MENU <";  SetConsoleTextAttribute(hConsole, 6);
gotoxy(73,16); cout<<"(1) Ir al Inicio"; 		  
gotoxy(73,17); cout<<"(2) Salir";  
gotoxy(72,19); SetConsoleTextAttribute(hConsole, 4);  cout<<"Opcion: "; SetConsoleTextAttribute(hConsole,15); cin>>opcion2; 

	switch(opcion2){
case 1: system("cls"); plantilla_cuadro(); menu_principal(); break;
case 3: cerrando(); break;
}
}

void menu1(){
SetConsoleTextAttribute(hConsole, 4);
gotoxy(80,13); cout<<"> MENU <";  SetConsoleTextAttribute(hConsole, 6);
gotoxy(73,16); cout<<"(1) Ir al Inicio"; 		  
gotoxy(73,17); cout<<"(2) Salir";  
gotoxy(72,19); SetConsoleTextAttribute(hConsole, 4);  cout<<"Opcion: "; SetConsoleTextAttribute(hConsole,15); cin>>opcion1; 

	switch(opcion1){
case 1: system("cls"); plantilla_cuadro(); menu_principal(); break;
case 2: cerrando(); break;
}
}


void menu2(){
SetConsoleTextAttribute(hConsole, 4);
gotoxy(107,10); cout<<"> MENU <"; SetConsoleTextAttribute(hConsole, 6);
gotoxy(102,13); cout<<"(1) Ir al Inicio"; 
gotoxy(102,14); cout<<"(2) Regresar"; 		  
gotoxy(102,15); cout<<"(3) Salir";  
gotoxy(102,17); SetConsoleTextAttribute(hConsole, 4);  cout<<"Opcion: "; SetConsoleTextAttribute(hConsole,15); cin>>opcion2;

	switch(opcion2){
case 1: system("cls"); plantilla_cuadro(); menu_principal(); break;
case 3: cerrando(); break;
}
}


void menu3(){
SetConsoleTextAttribute(hConsole, 4);
gotoxy(80,13); cout<<"> MENU <";  SetConsoleTextAttribute(hConsole, 6);
gotoxy(73,16); cout<<"(1) Ir al Inicio"; 
gotoxy(73,17); cout<<"(2) Regresar"; 		  
gotoxy(73,18); cout<<"(3) Salir";  
gotoxy(72,20); SetConsoleTextAttribute(hConsole, 4);  cout<<"Opcion: "; SetConsoleTextAttribute(hConsole,15); cin>>opcion2; 

	switch(opcion2){
case 1: system("cls"); plantilla_cuadro(); menu_principal(); break;
case 3: cerrando(); break;
}
}


void menu_carreras(){	
	//Menu de CARRERAS
	plantilla_opcion_carreras();
gotoxy(22,5);	SetConsoleTextAttribute(hConsole, 3); cout<<"(1)"; SetConsoleTextAttribute(hConsole, 6); cout<<" Ingenieria en Sistemas y Computos";
gotoxy(22,6); 	SetConsoleTextAttribute(hConsole, 3); cout<<"(2)"; SetConsoleTextAttribute(hConsole, 6); cout<<" Ingenieria Civil";
gotoxy(22,7); 	SetConsoleTextAttribute(hConsole, 3); cout<<"(3)"; SetConsoleTextAttribute(hConsole, 6); cout<<" Arquitectura";
gotoxy(22,8); 	SetConsoleTextAttribute(hConsole, 3); cout<<"(4)"; SetConsoleTextAttribute(hConsole, 6); cout<<" Medicina";		
gotoxy(22,9); 	SetConsoleTextAttribute(hConsole, 3); cout<<"(5)"; SetConsoleTextAttribute(hConsole, 6); cout<<" Odontologia";		
gotoxy(22,10); 	SetConsoleTextAttribute(hConsole, 3); cout<<"(6)"; SetConsoleTextAttribute(hConsole, 6); cout<<" Derecho";		
gotoxy(22,11); 	SetConsoleTextAttribute(hConsole, 3); cout<<"(7)"; SetConsoleTextAttribute(hConsole, 6); cout<<" Educacion Inicial";		
gotoxy(22,12); 	SetConsoleTextAttribute(hConsole, 3); cout<<"(8)"; SetConsoleTextAttribute(hConsole, 6); cout<<" Educacion Basica";	
gotoxy(22,13); 	SetConsoleTextAttribute(hConsole, 3); cout<<"(9)"; SetConsoleTextAttribute(hConsole, 6); cout<<" Mercadeo";		
gotoxy(22,14); 	SetConsoleTextAttribute(hConsole, 3); cout<<"(10)"; SetConsoleTextAttribute(hConsole, 6); cout<<" Administracion De Empresas";	
gotoxy(36,19); 	SetConsoleTextAttribute(hConsole, 3);	cout<<"(99)"; SetConsoleTextAttribute(hConsole, 6); cout<<"Ir a Inicio     "; SetConsoleTextAttribute(hConsole, 3); cout<<"(00)"; SetConsoleTextAttribute(hConsole, 6); cout<<"Salir";		

gotoxy(44,2); SetConsoleTextAttribute(hConsole, 4); cout<<"> CARRERAS <";
gotoxy(22,21); SetConsoleTextAttribute(hConsole, 4); cout<<"Opcion: "; SetConsoleTextAttribute(hConsole, 15); cin>>opcion_carreras;

	
	//Todas las carreras a sacar presupuesto total
		switch (opcion_carreras){	
case 1: system("cls"); ejecucion_calculadora(); break;	
case 2: system("cls"); ejecucion_calculadora(); break;			
case 3: system("cls"); ejecucion_calculadora(); break;	
case 4: system("cls"); ejecucion_calculadora(); break;
case 5: system("cls"); ejecucion_calculadora(); break;			
case 6: system("cls"); ejecucion_calculadora(); break;			
case 7: system("cls"); ejecucion_calculadora(); break;			
case 8: system("cls"); ejecucion_calculadora(); break;			
case 9: system("cls"); ejecucion_calculadora(); break;			
case 10: system("cls"); ejecucion_calculadora(); break;	
case 99: system("cls"); plantilla_cuadro(); menu_principal(); break;						
case 00: cerrando(); break;	
}
}



	void menu_calificacion(){
		plantilla_cuadro();
gotoxy(47,8); SetConsoleTextAttribute(hConsole, 4); cout<<"> SEMESTRE <"; SetConsoleTextAttribute(hConsole, 6);      
gotoxy(35,11); cout<<"(1) 2022-1"; gotoxy(35,12); cout<<"(2) 2022-2"; gotoxy(35,13); cout<<"(3) 2022-3";	
gotoxy(49,20);	cout<<"(99) Regresar (00) Salir";
plantilla_estado_cuenta();

for (int i = 31; i < 75; i++){
	gotoxy(i,19);
	SetConsoleTextAttribute(hConsole, 11);
	cout<<"_";
}
for (int i = 20; i < 22; i++){
	gotoxy(48,i);
	SetConsoleTextAttribute(hConsole, 11);
	cout<<"|";
}

		//Opcion de seleccion
gotoxy(32,20);SetConsoleTextAttribute(hConsole, 4);  cout<<"Opcion: "; SetConsoleTextAttribute(hConsole, 15); cin>>opcion_semestre_calificacion;
		
		//Todas las calificaciones segun el periodo
switch (opcion_semestre_calificacion){	
	
case 1: system("cls"); plantilla_calificacion(); calificacion_2022_1(); calificacion(); menu3(); break;		
case 2: system("cls"); plantilla_calificacion(); calificacion_2022_2(); calificacion(); menu3(); break;	
case 3: system("cls"); plantilla_calificacion(); calificacion_2022_3(); calificacion(); menu3(); break;	
case 99: system("cls"); plantilla_cuadro(); menu_principal(); break;	
case 00: cerrando(); break;	
}
}

	void menu_horario(){
		plantilla_cuadro();
gotoxy(47,8); SetConsoleTextAttribute(hConsole, 4); cout<<"> SEMESTRE <"; SetConsoleTextAttribute(hConsole, 6);      
gotoxy(35,11); cout<<"(1) 2022-1"; gotoxy(35,12); cout<<"(2) 2022-2"; gotoxy(35,13); cout<<"(3) 2022-3";
gotoxy(49,20);	cout<<"(99) Regresar (00) Salir";
plantilla_estado_cuenta(); 

for (int i = 31; i < 75; i++){
	gotoxy(i,19);
	SetConsoleTextAttribute(hConsole, 11);
	cout<<"_";
}
for (int i = 20; i < 22; i++){
	gotoxy(48,i);
	SetConsoleTextAttribute(hConsole, 11);
	cout<<"|";
}
gotoxy(32,20); SetConsoleTextAttribute(hConsole, 4); cout<<"Opcion: ";  SetConsoleTextAttribute(hConsole, 15); cin>>opcion_horario;		


switch (opcion_horario){	
case 1:
system("cls");
plantilla_horario();
horario_2022_1();
horario();
menu2();
		break;
			
case 2:
system("cls");
plantilla_horario();
horario_2022_2();
horario();
menu2();
		break;

case 3:
system("cls");
plantilla_horario();
horario_2022_3();
horario();
menu2();
		break;						
	
case 99:
system("cls");
plantilla_cuadro();
menu_principal();
break;	
		
case 00:
cerrando();
		break;	
}


}














//Funcion Principal	
int main(){
plantilla_cuadro();
iniciar_session();
system("cls");


do{
	
plantilla_cuadro();
menu_principal();
}while (opcion < 1 || opcion > 5 );


	while (opcion2 >= 1 || opcion2 <= 2 ){			



switch(opcion){
case 1: system("cls"); info(); menu1(); break;
case 2: system("cls"); menu_calificacion(); break;
	
case 3: system("cls"); menu_horario();	break;
	
case 4:	system("cls"); plantilla_opcion_carreras(); menu_carreras(); break;

case 5:
cerrando(); break;		
}
}

	return 0;
}
 
 
	
	
	

