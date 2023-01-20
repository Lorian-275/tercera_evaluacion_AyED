#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_CADENA 100

struct nodoCad
{
    char cadena[MAX_CADENA];
    struct nodoCad *izquierda;
    struct nodoCad *derecha;
};

struct nodoCad *newNodo(char cadena[MAX_CADENA])
{
    size_t tamNodo = sizeof(struct nodoCad);
    struct nodoCad *nodo = (struct nodoCad *)malloc(tamNodo);
    strcpy(nodo->cadena, cadena);
    nodo->izquierda = nodo->derecha = NULL;
    return nodo;
}

void agregar(struct nodoCad *nodo, char *cadena)
{
    if (strcmp(cadena, nodo->cadena) > 0)
    {
        if (nodo->derecha == NULL)
        {
            nodo->derecha = newNodo(cadena);
        }
        else
        {
            agregar(nodo->derecha, cadena);
        }
    }
    else
    {
        if (nodo->izquierda == NULL)
        {
            nodo->izquierda = newNodo(cadena);
        }
        else
        {
            agregar(nodo->izquierda, cadena);
        }
    }
}

struct nodoCad *buscar(struct nodoCad *nodo, char *cadena)
{
    if (nodo == NULL)
    {
        return NULL;
    }
    if (strcmp(cadena, nodo->cadena) == 0)
    {
        return nodo;
    }
    else if (strcmp(cadena, nodo->cadena) > 0)
    {
        return buscar(nodo->derecha, cadena);
    }
    else
    {
        return buscar(nodo->izquierda, cadena);
    }
}


void inorden(struct nodoCad *nodo)
{
    if (nodo != NULL)
    {
        inorden(nodo->izquierda);
        printf("%s,", nodo->cadena);
        inorden(nodo->derecha);
    }
    
}



int main()
{
    char texto[MAX_CADENA];
    char pais[MAX_CADENA];
    int total=0;
    int o=10;
    int p=5;
    int b=2;
	struct nodoCad *oro = NULL;
	struct nodoCad *plata = NULL;
	struct nodoCad *bronce = NULL;
	struct nodoCad *mex = NULL;
	struct nodoCad *itali = NULL;
	struct nodoCad *usa = NULL;
	struct nodoCad *port = NULL;
	struct nodoCad *fran = NULL;
	struct nodoCad *esp = NULL;
	struct nodoCad *ing = NULL;
	mex = newNodo("Luis");
	agregar(mex,"Dennis");
	agregar(mex,"Taylor");
	agregar(mex,"Guido");
	agregar(mex,"Andrew");
	agregar(mex,"Leon");
	agregar(mex,"Jack");
	itali = newNodo("Aloy");
	agregar(itali,"Ezequiel");
	agregar(itali,"Gracia");
	agregar(itali,"Delia");
	agregar(itali,"Samu");
	agregar(itali,"Hipolito");
	agregar(itali,"Adora");
	usa = newNodo("Gertrudis");
	agregar(usa,"Joseph");
	agregar(usa,"Victor");
	agregar(usa,"Jennifer");
	agregar(usa,"Amanda");
	agregar(usa,"Dylan");
	agregar(usa,"Bianca");
	port = newNodo("Lauren");
	agregar(port,"Milenia");
	agregar(port,"Pietro");
	agregar(port,"Lavinia");
	agregar(port,"Julia");
	agregar(port,"Maria");
	agregar(port,"Erick");
	fran = newNodo("Dott");
	agregar(fran,"Riccardo");
	agregar(fran,"Melania");
	agregar(fran,"Sig");
	agregar(fran,"Claudio");
	agregar(fran,"Edzio");
	agregar(fran,"Raffaella");
	esp = newNodo("Anouk");
	agregar(esp,"Eugene");
	agregar(esp,"Georges");
	agregar(esp,"Paul");
	agregar(esp,"Henri");
	agregar(esp,"Robert");
	agregar(esp,"Emilie");
	ing = newNodo("Svenja");
	agregar(ing,"Herr");
	agregar(ing,"Beate");
	agregar(ing,"Prof");
	agregar(ing,"Ilka");
	agregar(ing,"Nick");
	agregar(ing,"Sergej");
	agregar(ing,"Gabriel");
	oro = newNodo("Luis");
    agregar(oro, "Guido");
    agregar(oro, "Jack");
    agregar(oro, "Gracia");
    agregar(oro, "Hipolito");
    agregar(oro, "Joseph");
    agregar(oro, "Amanda");
    agregar(oro, "Lauren");
    agregar(oro, "Lavinia");
    agregar(oro, "Erick");
    agregar(oro, "Melania");
    agregar(oro, "Edzio");
    agregar(oro, "Eugene");
    agregar(oro, "Henri");
    agregar(oro, "Svenja");
    agregar(oro, "Prof");
    agregar(oro, "Sergej");
    plata = newNodo("Dennis");
	agregar(plata,"Andrew");
	agregar(plata,"Aloy");
	agregar(plata,"Delia");
	agregar(plata,"Adora");
	agregar(plata,"Victor");
	agregar(plata,"Dylan");
	agregar(plata,"Milenia");
	agregar(plata,"Julia");
	agregar(plata,"Dott");
	agregar(plata,"Sig");
	agregar(plata,"Raffaella");
	agregar(plata,"Georges");
	agregar(plata,"Robert");
	agregar(plata,"Herr");
	agregar(plata,"Ilka");
	agregar(plata,"Gabriel");
	bronce = newNodo("Nick");
	agregar(bronce,"Beate");
	agregar(bronce,"Emilie");
	agregar(bronce,"Paul");
	agregar(bronce,"Anouk");
	agregar(bronce,"Claudio");
	agregar(bronce,"Riccardo");
	agregar(bronce,"Maria");
	agregar(bronce,"Pietro");
	agregar(bronce,"Bianca");
	agregar(bronce,"Jennifer");
	agregar(bronce,"Gertrudis");
	agregar(bronce,"Samu");
	agregar(bronce,"Ezequiel");
	agregar(bronce,"Leon");
	agregar(bronce,"Taylor");
	printf("Nombre del atleta: ");
	scanf("%s", texto);
	printf("Nacionalidad: ");
	scanf("%s", pais);
	struct nodocad *atletaOro = buscar(oro,texto);
	struct nodocad *atletaPlata = buscar(plata,texto);
	struct nodocad *atletaBronce = buscar(bronce,texto);
	struct nodocad *mx = buscar(mex,texto);
	struct nodocad *it = buscar(itali,texto);
	struct nodocad *eu = buscar(usa,texto);
	struct nodocad *pt = buscar(port,texto);
	struct nodocad *fr = buscar(fran,texto);
	struct nodocad *ep = buscar(esp,texto);
	struct nodocad *in = buscar(ing,texto);
	if(atletaOro != NULL && strcmp(pais, "Mexicana")==0 && mx!=NULL){
		printf("El gano una medalla de oro con valor de 10 puntos");
	}
	else if(atletaPlata != NULL && strcmp(pais, "Mexicana")==0 && mx!=NULL){
		printf("El gano una medalla de plata con valor de 5 puntos");
	}
	else if(atletaBronce != NULL&& strcmp(pais, "Mexicana")==0 && mx!=NULL){
		
		printf("El gano una medalla de bronce con valor de 2 puntos");
		
	}
	else if(atletaOro != NULL&&strcmp(pais, "Italiana")==0 && it!=NULL){
		printf("El gano una medalla de oro con valor de 10 puntos");
	}
	else if(atletaPlata != NULL&&strcmp(pais, "Italiana")==0 && it!=NULL){
		printf("El gano una medalla de plata con valor de 5 puntos");
	}
	else if(atletaBronce != NULL&&strcmp(pais, "Italiana")==0 && it!=NULL){
		printf("El gano una medalla de bronce con valor de 2 puntos");
	}
	else if(atletaOro != NULL&&strcmp(pais, "Estadounidense")==0 && eu!=NULL){
		printf("El gano una medalla de oro con valor de 10 puntos");
	}
	else if(atletaPlata != NULL&&strcmp(pais, "Estadounidense")==0 && eu!=NULL){
		printf("El gano una medalla de plata con valor de 5 puntos");
	}
	else if(atletaBronce != NULL&&strcmp(pais, "Estadounidense")==0 && eu!=NULL){
		printf("El gano una medalla de bronce con valor de 2 puntos");
	}
	else if(atletaOro != NULL&&strcmp(pais, "Portuguesa")==0 && pt!=NULL){
		printf("El gano una medalla de oro con valor de 10 puntos");
	}
	else if(atletaPlata != NULL&&strcmp(pais, "Portuguesa")==0 && pt!=NULL){
		printf("El gano una medalla de plata con valor de 5 puntos");
	}
	else if(atletaBronce != NULL&&strcmp(pais, "Portuguesa")==0 && pt!=NULL){
		printf("El gano una medalla de bronce con valor de 2 puntos");
	}
	else if(atletaOro != NULL&&strcmp(pais, "Francesa")==0 && fr!=NULL){
		
		printf("El gano una medalla de oro con valor de 10 puntos");
		
	}
	else if(atletaPlata != NULL&&strcmp(pais, "Francesa")==0 && fr!=NULL){
		printf("El gano una medalla de plata con valor de 5 puntos");
	}
	else if(atletaBronce != NULL&&strcmp(pais, "Francesa")==0 && fr!=NULL){
		printf("El gano una medalla de bronce con valor de 2 puntos");
	}
	else if(atletaOro != NULL&&strcmp(pais, "Espaniola")==0 && ep!=NULL){
		printf("El gano una medalla de oro con valor de 10 puntos");
	}
	else if(atletaPlata != NULL&&strcmp(pais, "Espaniola")==0 && ep!=NULL){
		printf("El gano una medalla de plata con valor de 5 puntos");
	}
	else if(atletaBronce != NULL&&strcmp(pais, "Espaniola")==0 && ep!=NULL){
		printf("El gano una medalla de bronce con valor de 2 puntos");
	}
	else if(atletaOro != NULL&&strcmp(pais, "Inglesa")==0 && in!=NULL){
		printf("El gano una medalla de oro con valor de 10 puntos");
	}
	else if(atletaPlata != NULL&&strcmp(pais, "Inglesa")==0 && in!=NULL){
		printf("El gano una medalla de plata con valor de 5 puntos");
	}
	else if(atletaBronce != NULL&&strcmp(pais, "Inglesa")==0 && in!=NULL){
		printf("El gano una medalla de bronce con valor de 2 puntos");
	}
	else{
		printf("\nNo se encontro al atleta\n");
	}
	if(strcmp(pais, "Mexicana")==0 && mx!=NULL){
		printf("\nEl equipo Mexicano es\n");
		inorden(mex);
		total=o+p+b+o+p+b+o;
		printf("\nEl total de puntos por medallas es: %d\n",total);
		
	}
	else if(strcmp(pais, "Italiana")==0 && it!=NULL){
		printf("\nEl equipo Italiano es\n");
		total=p+b+o+p+b+o+p;
		printf("\nEl total de puntos por medallas es: %d\n",total);
		
	}
	else if(strcmp(pais, "Estadounidense")==0 && eu!=NULL){
		printf("\nEl equipo Estadounidense es\n");
		inorden(usa);
		total=b+o+p+b+o+p+b;
		printf("\nEl total de puntos por medallas es: %d\n",total);
	}
	else if(strcmp(pais, "Portuguesa")==0 && pt!=NULL){
		printf("\nEl equipo Portugues es\n");
		inorden(port);
		total=o+p+b+o+p+b+o;
		printf("\nEl total de puntos por medallas es: %d\n",total);
	}
	else if(strcmp(pais, "Franceas")==0 && fr!=NULL){
		printf("\nEl equipo Frances es\n");
		inorden(fran);
		total=p+b+o+p+b+o+p;
		printf("\nEl total de puntos por medallas es: %d\n",total);
	}
	else if(strcmp(pais, "Espaniola")==0 && ep!=NULL){
		printf("\nEl equipo Espaniol es\n");
		inorden(esp);
		total= b+o+p+b+o+p+b;
		printf("\nEl total de puntos por medallas es: %d\n",total);
		
	}
	else if(strcmp(pais, "Inglesa")==0 && in!=NULL){
		printf("\nEl equipo Ingles es\n");
		inorden(ing);
		total= o+p+b+o+p+b+o+b;
		printf("\nEl total de puntos por medallas es: %d\n",total);
	}
	
	else{
		printf("\nLa nacionalidad capturada es incorrecta\n");
	}
  
}
