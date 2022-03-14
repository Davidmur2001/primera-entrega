#include <stdio.h>
#include<mysql.h>
#include<string.h>
#include<stdlib.h>


int main(int argc, char *argv[]) {
	
	
}
void Numero_de_victorias()
{
	  char consulta[300];
	  int err;
	  MYSQL_ROW row;
	  MYSQL_RES *resultado;
	  char nombre[20];
	  printf("escribe el nombre del jugador que quieras saber su numero de victorias\n");
	  scanf("%s",nombre);
	  sprintf(consulta,"SELECT COUNT PARTIDA.ID_G FROM (RESUTADOS,PARTIDA,JUGADOR) WHERE PERONA.NOMBRE =nombre AND PERSONA.ID=RESULTADOS.ID_J AND RESULTADOS.ID_P=PARTIDA.ID_P");
	  }
