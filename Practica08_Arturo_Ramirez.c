/*

Práctica 08																			                                        			Ramírez Mondragón Arturo Gabriel
28 de noviembre del 2020

*/

// Librería utilizada.
#include <stdio.h>

// Funciones llamadas durante el programa principal para cada problema:
void volumenDeCaja();
void distanciaDosPuntos();
void promedioCalificaciones();
void areaRectangulo();
void areaCircunferencia();
void conversionMetroPulgada();
void cambioMonetario();

//Función principal:
int main(){
	unsigned int sel=0;
	
	printf("\n");
	printf("\t\t\t\tMenu\n\n\n\n");
	
	printf("\tPor favor seleccione el problema que guste resolver\n\n\n");
	printf(" 1) Volumen de una caja.\n\n");
	printf(" 2) Distancia entre dos puntos.\n\n");
	printf(" 3) Promedio de cuatro calificaciones.\n\n");
	printf(" 4) Area de un rectangulo.\n\n");
	printf(" 5) Area de una circunferencia.\n\n");
	printf(" 6) Conversion de metros [m]  a pulgadas [in].\n\n");
	printf(" 7) Cambio monetario de una persona.\n\n");
	
	printf("\n\n\tNumero del problema: ");
	scanf("%u", &sel);
	
//Selección de instrucciones dependiendo cada problema:	
	switch (sel) {
		
		
		default:
			printf("\n\n\t\tNo tengo tantos problemas resueltos :(\n");
			printf("\n\n\nEso es todo. Muchas gracias por su tiempo. Vuelva pronto.");
			printf("\n\n");
		break;
		
		
		case 1:
			printf("\n\n\n\n\t\t\tPrograma para calcular el volumen de una caja\n\n");
			volumenDeCaja();
			printf("\n\n\nEso es todo. Muchas gracias por su tiempo. Vuelva pronto.");
			printf("\n\n");
		break;
		
		
		case 2:
			printf("\n\n\n\n\t\t\tPrograma para medir la distancia entre dos puntos\n\n");
			distanciaDosPuntos();
			printf("\n\n\nEso es todo. Muchas gracias por su tiempo. Vuelva pronto.");
			printf("\n\n");
		break;
		
		
		case 3:
			printf("\n\n\n\n\t\t\tPrograma para calcular el promdedio de cuatro (4) calificaciones\n\n");
			promedioCalificaciones();
			printf("\n\n\nEso es todo. Muchas gracias por su tiempo. Vuelva pronto.");
			printf("\n\n");
		break;
		
		
		case 4:
			printf("\n\n\n\n\t\t\tPrograma para calcular el area de un rectangulo\n\n");
			areaRectangulo();
			printf("\n\n\nEso es todo. Muchas gracias por su tiempo. Vuelva pronto.");
			printf("\n\n");
		break;
		
		
		case 5:
			printf("\n\n\n\n\t\t\tPrograma para calcular el area de una circunferencia\n\n");
			areaCircunferencia();
			printf("\n\n\nEso es todo. Muchas gracias por su tiempo. Vuelva pronto.");
			printf("\n\n");
		break;
		
		
		case 6:
			printf("\n\n\n\n\t\t\tPrograma para la conversion de metros [m] a pulgadas [in]\n\n");
			conversionMetroPulgada();
			printf("\n\n\nEso es todo. Muchas gracias por su tiempo. Vuelva pronto.");
			printf("\n\n");
		break;
		
		
		case 7:
			printf("\n\n\n\n\t\t\tPrograma para calcular el cambio que recibira una persona\n\n");
			cambioMonetario();
			printf("\n\n\nEso es todo. Muchas gracias por su tiempo. Vuelva pronto.");
			printf("\n\n");
		break;
		
				
	}
	
	return 0;
}


//Funciones secundarias en orden y su propia declaración de variables (locales):
void volumenDeCaja(){
	
	float A=0, B=0, C=0, V=0;
	
	printf("Todas las medidas seran en centimetros [cm]\n\n\n");
	
	printf("Registre la primer medida de la caja: ");
	scanf("%f", &A);
	printf("\nRegistre la segunda medida de la caja: ");
	scanf("%f", &B);
	printf("\nRegistre la tercer medida de la caja: ");
	scanf("%f", &C);
	V=A*B*C;
	printf("\n\nEl volumen de la caja es: %5.3f", V);
	
	return;
}

void distanciaDosPuntos(){
	
	
	float A=0, B=0, D=0;
	
	printf("Todas las medidas deberan ser referidas en metros.\n\n");
	printf("Las distancias estaran medidas a partir de un punto de referencia: O.\n\n\n\n");
	printf("Registre la distancia desde O al primer punto de interes: ");
	scanf("%f", &A);
	printf("\nRegistre la distancia desde O al segundo punto de interes: ");
	scanf("%f", &B);
	//Estructura de control selectiva condicional:
	D = A<B ? B-A : A-B;
	printf("\n\nLa distancia entre A y B en metros es: %f", D);
	
	return;
}

void promedioCalificaciones(){
	
	unsigned int Calif1=0, Calif2=0, Calif3=0, Calif4=0;
	float Promedio=0;
	
	printf("El rango de las calificaciones sera de 1-10\n\n");
	printf("Las calificaciones deberan ser enteras y no habrá calificaciones negativas\n\n\n");
	printf("Registre la primer calificacion (1/4): ");
	scanf("%d", &Calif1);
	printf("\nRegistre la segunda calificacion (2/4): ");
	scanf("%d", &Calif2);
	printf("\nRegistre la tercer calificacion (3/4): ");
	scanf("%d", &Calif3);
	printf("\nRegistre la cuarta calificacion (4/4): ");
	scanf("%d", &Calif4);
	Promedio=(Calif1+Calif2+Calif3+Calif4)/4;
	printf("\n\nEl promedio de las calificaciones es: %f", Promedio);
	
	return;
	
}

void areaRectangulo(){
	
	float base=0, altura=0, area=0;
	
	printf("Las medidas deberan ser positivas y en metros\n\n");
	printf("\nEscribe la base del rectangulo: ");
	scanf("%f", &base);
	printf("\nEscribe la altura del rectangulo: ");
	scanf("%f", &altura);
	area=base*altura;
	printf("\n\nEl area del rectangulo de base=%.3f y altura=%.3f es: %lf", base, altura, area);
		
	return;
	
}

void areaCircunferencia(){
	
	float radio=0, areaCir=0;
	const double PI=3.141592653589793;
	
	printf("Unicamente registre el radio de la circunferencia, por favor: ");
	scanf("%f", &radio);
	areaCir=(PI*radio*radio)/2;
	printf("\n\nEl area de la circunferencia con radio=%f es: %f", radio, areaCir);
	
	return;	
	
}

void conversionMetroPulgada(){
	
	float metro=0, res=0;
	
	printf("Registre los metros que desea convertir a pulgadas: ");
	scanf("%f", &metro);
	res = metro*39.3701;
	printf("\n\nLos metros=%lf [m] en pulgadas son: %lf [in]", metro, res);
	
	return;
}

void cambioMonetario(){
	
	float pago=0, coste=0, cambio=0;
	
	printf("\n\nRegistre, por favor, con cuanto va a pagar: "); scanf("%f", &pago);
	printf("\nEl coste del objeto: "); scanf("%f", &coste);
	cambio = pago-coste;
	if (cambio<0){
		
		cambio=cambio*(-1);
		printf("\n\nUsted le debe a la/el propietaria/o esta cantidad: %f", cambio);
	}
	else {
		printf("\n\nEl cambio es: %f", cambio);	
	}
	
	return;
}


