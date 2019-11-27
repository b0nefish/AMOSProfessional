/*
**      $VER: graphics3d.h 10.02 (02.03.98) 
** 
**      main include file for graphics3d.library
**
**      (C) Copyright 1997 Patrizio Biancalani
**      All Rights Reserved.
*/

#ifndef GRAPHICS3D_GRAPHICS3D_H
#define GRAPHICS3D_GRAPHICS3D_H

#define JAM1 0
#define JAM2 1
#define COMPLEMENT 2
#define INVERSVID 4
#define PROSP_P 0	/* tipo proiezione prospettica */
#define PARAL_P 1	/* tipo proiezione parallela */
#define WIREF	0	/* modo visualizzazione in wire frame */
#define SOLID	2	/* modo visualizzazione in solid */
#define FLAT 	1	/* modo visualizzazione in flat shading */
#define GORAUD  3	/* modo visualizzazione in goraud shading */
#define TMAP	0x10	/* modo visualizzazione in texture mapping */
#define ZPLANE  0       /* #1 modo clippaggio oggetti */
#define FRUSTUM 1       /* #2 modo clippaggio oggetti */
#define END_T  0	/* fine array tag3d di dati */
#define TRASP  1000	/* valore registro colore che indica trasparente */

/* 
  tipi dati per tag3d.tipo riconosciuti attualmente per 
  funzione GD_cascene()
*/
#define CS_PROJET 1	/* tipo di proiezione */
#define CS_SBUFF  2     /* attivazione o meno single buffering */
#define CS_GCOLOR 3	/* nuovo colore sfondo box di visualizzazione */
#define CS_VDIST  4	/* nuovo valore distanza da piano di proiezione */
#define CS_NPX0	  5     /* nuova posizione X per box di visualizzazione */
#define CS_NPY0   6     /* nuova posizione Y per box di visualizzazione */
#define CS_ZOOM   7	/* nuovo valore per zoom scena */
#define CS_ZBUF	  8	/* attivazione o meno z-buffering */
#define CS_VIEWP  9	/* ritorna posizione attuale camera */
/*
  tipi dati per tag3d.tipo riconosciuti attualmente per
  funzione GD_genpalette()
*/
#define GP_RCOL   1	/* set n# colori da riservare per altri usi */
#define GP_NCOL   2	/* set n# colori base da usare */
#define GP_NLIV	  3	/* set n# livelli d'intensita' per ogni colore */
#define GP_COL	  4	/* set n# colore a cui associare i prossimi GP_HRBG e GP_LRGB */
#define GP_HRGB   5	/* definisce i valori RGB massimi per un colore (def.15,15,15) */
#define GP_LRGB   6	/* definisce i valori RGB minimi per un colore (def. 0,0,0) */
#define GP_PALET  7	/* assegna uno specifico registro della palette al colore GP_COL */
#define GP_INFO	  8	/* restituisce il n# registro della palette del colore GP_COL */
#define GP_TRASP  9 	/* assegno colore trasparente ad ultimo e lo ignoro per i livelli */
/*
  tipi dati per tag3d.tipo riconosciuti attualmente per
  funzione GD_modobj()
*/
#define MO_STATE  1	/* attiva(1) o disattiva(0) l'oggetto attuale */
#define MO_VMODE  2	/* setta il nuovo viewmode dell'oggetto attuale */
/*
  tipi dati per tag3d.tipo riconosciuti attualmente per
  funzione GD_modpoly()
*/
#define MP_POLY   1	/* set n# poligono su cui far operare le modifiche */
#define MP_COLOR  2	/* modifica il colore del poligono */
#define MP_2SIDE  3	/* setta a 2(1) o 1(0) faccia il poligono */
#define MP_TMAP   4	/* assegna una texture map al poligono */
#define MP_VTMAP  5	/* definisce i vertici della texture map del poligono */
#define MP_VTAUTO 6	/* definisce i vertici automaticamente */
#define MP_ACTIV  7	/* attiva(1) o disattiva(0) il poligono selezionato */

/** STRUTTURE DATI DI USO ESTERNO ED INTERNO **/
/* vertice, usa formato float a virgola fissa ,(val*FIXV) */ 
struct vertex
{
long int x;
long int y;
long int z;
};

/* vertice su texture map (valori in pixel intero corto)*/
struct vtmap
{
short int x1;
short int y1;
short int x2;
short int y2;
short int x3;
short int y3;
short int x4;
short int y4;
};

/* struttura per definizione colore */
struct rgbtype
{
short int r;
short int g;
short int b;
};

/* struttura tag3d per definire un array di valori estendibile */
/* analogo alla struttura TagItem dell' Amiga O.S.             */
struct tag3d
{
short unsigned int tipo;	/* flag che identifica valore 
						(se=0 fine array) */
long int val;			/* valore effettivo */
};		 

/* !!! STRUTTURE E DEFINIZIONI GLOBALI DI USO ESCLUSIVAMENTE INTERNO !!! */

/** COSTANTI DI USO SOLO INTERNO **/
#define SFIXV   8       /* n# di shift per cal. num. virgola fissa */
#define FIXV    256	/* fattore moltipl. per num. virgola fissa */
#define FIXVM   128	/* meta' di FIXV , per effettuare appros.  */
#define MFRAC   FIXV    /* maschera per estrarre parte frazionaria */
#define MINT 0xFFFFFFFF /* maschera per estrarre parte intera */
#define MAXPOINT  4	/* massimo numero di punti per poligono */
#define MAXOBJECT 200	/* massimo numero oggetti per mondo 3D (max. 65535)*/
#define MAXVERT   6300	/* massimo numero vertici in un poligono */
#define MAXDX	  3000  /* massima larghezza box di visualizzazione */
#define MAXDY	  3000	/* massima altezza box di visualizzazione */
#define TTMAP	  200	/* n# massimo di texture map definibili per una scena */
#define LEN_TABC 300*4	/* dimensioni tabella colori */
#define FOV_M	  15	/* margine in piu' per box vis. nel calcolo del fov */

/************ macro solo locali *******/
#define SMARG  16 
#define SMARGM 8
#define LTMP 1000
#define ATMP 1000

/* matrice di trasformazione (4x4) */
/* usa formato float a virgola fissa ,(val*FIXV) */ 
struct matrix4x4
{
long int r0c0;
long int r0c1;
long int r0c2;
long int r0c3;
long int r1c0;
long int r1c1;
long int r1c2;
long int r1c3;
long int r2c0;
long int r2c1;
long int r2c2;
long int r2c3;
long int r3c0;
long int r3c1;
long int r3c2;
long int r3c3;
};

/* matrice di trasformazione (1x4) */
/* usa formato float a virgola fissa ,(val*FIXV) */ 
struct matrix1x4
{
long int r0c0;
long int r0c1;
long int r0c2;
long int r0c3;
};

/* vettore */
/* usa formato float a virgola fissa ,(val*FIXV) */ 
struct vector
{
long int x;
long int y;
long int z;
long int w;
};

/* vertice + colore, usa formato float a virgola fissa ,(val*FIXV) */ 
struct vert1
{
long int x;
long int y;
long int z;
short int color;	/* colore vertice in flat shading */
short int npol;		/* n# di volte vertice usato */
};

/* pixel */
/* usa formato intero a 2 bytes */
struct pixel
{
short int x;
short int y;
};

/* struttura per definire una linea */
/* usa due riferimenti a strutture vertice */
struct line
{
struct vertex *a;		/* puntatore a st. vertex di partenza */
struct vertex *b;		/* puntatore a st. vertex d'arrivo */
};

/* struttura per definire direzione in spazio 3d */
struct dir3d
{
long int angx;
long int angy;
long int angz;
};

/* struttura pixel usata nella versione _CPU per disegnare i poligoni */
struct pixl {
	long int x;
	long int y;
	long int z;
	long int u;	/* (x) */
	long int v;	/* (y) */
	long int color;
	};

/* elementi tabelle scan line nel goraud shading */
struct edge {
	short int x;
	short int color;
	long int z;
	long int u;	/* (x) */
	long int v;	/* (y) */
	};

/* struttura per definire un'area per buffer di una texture map */
struct buftmap 
{
unsigned char *chunky;	/* area di memoria per buffer chunky se=0 allora vuota */
long int lung;		/* lunghezza buffer di memoria */
short int larg;		/* larghezza texture map (in pixel) */
short int alt;		/* altezza texture map (in pixel) */
};

/* struttura per definizione texture in un poligono */
struct poltmap
{
short int u1;		/* coord u #1 vertice su texture (in pixel) */
short int v1;		/* coord v #1 vertice su texture (in pixel) */
short int u2;		/* coord u #2 vertice su texture (in pixel) */
short int v2;		/* coord v #2 vertice su texture (in pixel) */
short int u3;		/* coord u #3 vertice su texture (in pixel) */
short int v3;		/* coord v #3 vertice su texture (in pixel) */
short int u4;		/* coord u #4 vertice su texture (in pixel) */
short int v4;		/* coord v #4 vertice su texture (in pixel) */
struct buftmap *dtmap;	/* puntatore a struttura con dati texture */
}; 

/* struttura per definizione di un poligono */
struct polygon
{
char numpoints;
short int color;
short int shade;
char twosided;
char visible;
char clipped;
char active;
struct poltmap ptmap;	/* struttura descritrice texture poligono */
long int vertexlist0;	/* puntatore a #1 indice vertici */ 
long int vertexlist1; 	/* puntatore a #2 indice vertici */
long int vertexlist2; 	/* puntatore a #3 indice vertici */ 
long int vertexlist3;	/* puntatore a #4 indice vertici */
char dummy;		/* per far si che la lunghezza sia pari */
};

/* struttura di descrizione di un oggetto */
struct objectnode
{
long int id;		/* identificativo univoco per oggetto */
long int dummy;		/* pad per poter usare name con StringF */ 
char name[22];
long int numverts;
struct vertex *vorig;	/* puntatore a elenco vertici loc. orig. */
struct vertex *vlocal;	/* puntatore a elenco vertici locali */
struct vert1  *vcamera;	/* puntatore a elenco vertici camera */
long int numpolys;
struct polygon *polys;	/* puntatore a elenco poligoni */
char shade;		/* metodo di visualiz. (WIRE,SOLID,FLAT,GORAUD) */
char state;		/* segnala se oggetto da visualizzare */
char clipped;		/* segnala se oggetto clippato interamente*/
char trasf;		/* flag per segnalare eventuale trasf. avv.*/
long int worldposx;	/* coord. x punto d'inserzione oggetto */
long int worldposy;	/* coord. y  "        "          "     */
long int worldposz;	/* coord. z  "        "          "     */
long int xmax;		/* vertici bounding box oggetto */
long int ymax;		/*              "               */
long int zmax;		/*		"		*/
long int xmin;		/*		"		*/
long int ymin;		/*		"		*/
long int zmin;		/*		"		*/	
};

/* struttura per definizione di un poligono proiettato da visualizzare */
struct polytemp
{
short int	x1;
short int	y1;
short int	x2;
short int	y2;
short int	x3;
short int	y3;
short int	x4;
short int	y4;
short int	x5;
short int	y5;
short int numpoints;
struct poltmap *tmap;	/* puntatore a struttura descritrice texture map poligono */
short int     color;
short int     shade;
short int       obj;
long  int      npol;
long  int    svalue;
char          vmode;
char	      clp1;
char	      clp2;
char 	      clp3;
char	      clp4;
long   int	z1;
long   int	z2;
long   int	z3;
long   int	z4;
char 	     dummy;
};

/** 
	struttura di descrizione generale ambiente, il puntatore ad essa 
	va dato come primo parametro al richiamo di ogni funzione 
	dall'esterno
**/
struct ambient3d
{
struct grafica *graf;		/* valore ritornato da PE_ini_g */
struct Window *win;		/* punt. a finestra usata */
long int half_screen_width;
long int half_screen_height;
long int viewing_distance;
short int gl_triangle_color;
short int minx;
short int miny;
short int maxx;
short int maxy;
short int maxintensity;
long int near_z;
long int far_z;
long int fov_w;
long int fov_h;
long int zoom;			/* num. reale a virgola fissa (val*FIXV) */
long int aspect_ratio;		/* num. reale a virgola fissa (val*FIXV) */
long int ambient_light;		/* num. reale a virgola fissa (val*FIXV) */
long int inv_aspect_ratio;	/* num. reale a virgola fissa (val*FIXV) */
long int bord_col;		/* colore bordo poligoni (se <0 no bordo)*/
long int gcolor;		/* colore sfondo scena */
char projection_type;		/* tipo di proiezione (0=pros. 1=paral.) */
char view_mode;			/* modo vis. (1=flat 0=wire 2=solid 3=goraud) */
char fzbuf;			/* flag attivazione zbuffer (1=si 0=no) */
char clip_mode;
char agg_all;			/* flag per forzare aggiornamento scena */
long int dummy;
struct vector light_source;	/* puntatore a struttura vector */
long int dummy1;
struct vector view_point;	/* puntatore a struttura vector */ 
struct dir3d view_angle;	/* puntatore a struttura dir3d */
struct matrix4x4 global_view;	/* puntatore a struttura matrix4x4 */
char *temp;			/* puntatore ad area per uso temporaneo */
long int ltemp;			/* lunghezza area temp */
long int *iobjects;		/* punt. ad array con indici su objects */
struct objectnode *objects;	/* punt. ad array di strutture objectnode */
long int *iwpolys;		/* punt. ad array puntatori su worldpolys */
struct polytemp *worldpolys;	/* punt. ad array di strutture polytemp */
long int *sintable;		/* punt. ad array di reali a virg. fissa */
long int *costable;		/* punt. ad array di reali a virg. fissa */
long int total_polys;		/* n# totale poligoni da tracciare */
short int total_objects;	/* n# totale oggetti presenti */
long int max_polys;		/* n# massimo poligoni presenti */
long int old_mpoly;		/* vecchio valore per n# massimo poligoni presenti */
long int attuale;		/* oggetto attualmente selezionato */
long int numero;		/* numero inc. alla creazione di un oggetto*/
long int iterazioni;		/* n# iterazioni per sorting */
char dummyy;
};

/* !!! STRUTTURE E DEFINIZIONI GLOBALI DI USO ESCLUSIVAMENTE INTERNO !!! */

#define MAXVER(vert) (vert*5+30)

/**** dichiarazioni per poter usare sizeof con queste strutture  ****/
/**** probabilmente utile solo se si usa VBCC v0.5 ****/

typedef struct grafica Sgrafica;
typedef struct AreaInfo SAreaInfo;
typedef struct TmpRas STmpRas;
typedef struct RastPort SRastPort;
typedef struct objectnode Sobjectnode;
typedef struct vertex Svertex;
typedef struct vert1 Svert1;
typedef struct polygon Spolygon;
typedef struct vector Svector;
typedef struct polytemp Spolytemp;
typedef struct dir3d Sdir3d;
typedef struct matrix4x4 Smatrix4x4;
typedef struct ambient3d Sambient3d;
typedef struct edge Sedge;
typedef struct buftmap Sbuftmap; 

/********************************************************************/

struct grafica
{
 struct AreaInfo *o_ai;	/* valore originale puntatore ad areainfo */
 struct TmpRas *o_tr;	/* valore originale puntatore ad tmprast */	
 struct AreaInfo n_ai;	/* nuova areainfo */
 struct TmpRas n_tr;	/* nuova tmpras */
 long int *t_color;	/* puntatore a tabella colori virtuali base */
 struct buftmap *a_tmap;/* puntatore ad array di strutture per definizione texture map */
 char *pras;		/* puntatore a area di memoria grafica */
 char *b_af;		/* puntatore a buffer vettori per areafill */
 short int r_color;	/* n# colori da non usare nella gen. palette */
 short int n_level;	/* n# livelli intensita' per ogni colore */
 short int n_color;	/* n# colori base nella palette */
 long int depth;	/* n# colori disponibili nella palette dello schermo usato */
 long int lb_af;	/* dimensioni area precedente */
 struct ViewPort *vpor;	/* puntatore a viewport dello schermo della fin.*/
 struct RastPort *rast;	/* puntatore a rastport usato dalle routin */
 struct Window *wind;	/* puntatore a finestra su cui agire */
 long int larg;		/* larghezza box in cui lavorera' areafill */
 long int alte;		/* altezza box in cui lavorera' areafill */
 short int clipx;	/* origine x clip box */
 short int clipy; 	/* origine y clip box */
 short int clipdx;	/* larghezza clip box */
 short int clipdy;	/* altezza clip box */
 long int *zbuf;	/* puntatore ad area per z-buffering */
 long int lzbuf;	/* lunghezza area precedente */
/** estensioni per double buffering **/
 char	fdouble;	/* flag per attivare double buffer (0=off 1=on)*/
/** campi usati da libreria ottimizzata **/
 char *dbuf;		/* puntatore ad display buffer chunky*/
 long int ldbuf;	/* lunghezza in bytes di area dbuf */
 struct RastPort tmp_rp;/* rastport temporanea */
/******************************************/
 struct RastPort *rast1;/* puntatore a rastport della finestra*/
 struct RastPort *rast2;/* puntatore a rastport nascosto */
/** campi usati da libreria normale **/
 struct RasInfo    *NB_rinfo;       
 struct BitMap     *NB_bmap;        
 struct Layer_Info *NB_layerinfo;   
 struct Layer      *NB_layer;       
/*************************************/
};


#endif /* GRAPHICS3D_GRAPHICS3D_H */