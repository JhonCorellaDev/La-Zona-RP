
new bool:TieneMask[MAX_PLAYERS];

new bool:PlayerAFK[MAX_PLAYERS]; 
new AFKDetect[MAX_PLAYERS]; 
new bool: FunctionCall[2][MAX_PLAYERS]; 
new AFKTime[MAX_PLAYERS];

forward OnPlayerPause(playerid);
forward OnPlayerUnpause(playerid);
//==============================================================
//Corre que te atropellan
enum infocorrequeteatropellan
{
    bool:ENCORRE,
    bool:ESCORREDOR,
    bool:ESATROPELLAR
};
new InfoCorredor[MAX_PLAYERS][infocorrequeteatropellan];
enum infoscorrequetearopellan
{
    STATUS,
    TIMER,
    TIEMPO,
    PUNTOSTUMADORES,
    PUNTOSCORREDORES

};
new INFOCORREDOR[infoscorrequetearopellan],Debugcorredor;
new Text:TextdrawCorredores,PickcupCorredores;
#define TEAM_CTFBLUE 1 
#define TEAM_CTFRED  2
#define amarillo 0xE8FF2BFF
//==============================================================

enum Jugador_Textdraws_Enum
{
	Text:textdraw_invSH[22],
	Text:textdraw_comprar_accesorio[12],
	Text:textdraw_vendaje[3],
	Text:textdraw_nevera_casa[29],
	Text:textdraw_baul_vehiculo[29],
	Text:textdraw_armario[29],
	Text:textdraw_menu_textura[8],
	Text:textdraw_menu_casa[10],
	Text:textdraw_select_interior[12],
	Text:textdraw_armeria[29],
	Text:textdraw_tirar_inventario[15],
	Text:textdraw_tiendarp[3],
	Text:textdraw_comprarmuebles[8],
	Text:textdraw_editarmueblescasa[36],
	Text:textdraw_banda_inv[21],
	Text:textdraw_capturar_zona[7],
	//
	Text:textdraw_menu_apartamento[10],
	Text:textdraw_interior_apartamento[12],
	Text:textdraw_editarmueblesdepart[36],
	Text:textdraw_editarobjetoscasa[21]
};
new Jugador_Textdraws[MAX_PLAYERS][Jugador_Textdraws_Enum];
new Edit_Prenda[MAX_PLAYERS],bool:Editando_prenda[MAX_PLAYERS],OBJETO_EDITAR[MAX_PLAYERS],OBJETO_BONE_ID[MAX_PLAYERS];
new PUNTOS_BOTIQUIN[MAX_PLAYERS],Timer_Vendaje[MAX_PLAYERS],PlayerColor1[MAX_PLAYERS],
	bool:TIRAR_INVENTARIO[MAX_PLAYERS],
	bool:EDITAR_OBJETO[MAX_PLAYERS],
	bool:ESTAEDITANDO_Objeto[MAX_PLAYERS],
	SAVEID_EDITANDO[MAX_PLAYERS],
	OBJETO_DE_EDITAR_CASA[MAX_PLAYERS],
	EDITAR_OBJETO_DEPA[MAX_PLAYERS],
	bool:ESTAEDITANDO_Objeto_Depa[MAX_PLAYERS],
	VARIABLE_MULTI_USO[MAX_PLAYERS];
enum editar_objeto_casa
{
	ID
}
new EDITAR_OBJETO_CASA[MAX_PLAYERS][36][editar_objeto_casa];
enum info_nevera_Casa_vip
{
	ID,
	TIPO,
	STATUS,
	bool:VALID
}
new TO_X_VENTARIO[MAX_PLAYERS][ info_nevera_Casa_vip ][50];
new TO_INVENTARIO_X[MAX_PLAYERS][ info_nevera_Casa_vip ][50],bool:ABRIO_NEVERA[MAX_PLAYERS];

#define espina 1
#define espina_otro 1
#define Cabeza 2
#define Ojos 2
#define Cara 2
#define Cabeza_Otro 2
#define Orejas 2
#define brazo_superior_izquierdo 3
#define brazo_superior_derecho 4
#define mano_izquierda 5
#define mano_derecha 6
#define muslo_izquierdo 7
#define muslo_derecho 8
#define pie_izquierdo 9
#define pie_derecho 10
#define becerro_derecho 11
#define pantorrilla_izquierda 12
#define antebrazo_izquierdo 13
#define antebrazo_derecho 14
#define clavicula_izquierda_hombro 15
#define clavicula_derecha_hombro 16
#define cuello 17
#define mandibula 18

#define SELEC_TEXTDRAW 0xD32920FF

#define MAX_ITEMS_PER_PLAYER 6
#define MAX_ITEMS_PLAYER_VIP 12

#define VIENDO_PAREDES 1
#define VIENDO_TECHO 2
#define VIENDO_PISO 3
#define VIENDO_PUERTAS 4
#define VIENDO_CAMAS 5
#define VIENDO_ARMARIO 6
#define VIENDO_ESTANTERIA 7
#define VIENDO_COCINA 8
#define VIENDO_EQUIPO 9
enum info_prendas
{
	NAME[30],
	ID_PRENDA,
	OBJETO,
	TIPO_MONEDA,
	PRECIO
}
new Prendas_Info[][info_prendas] =
{
	{"Casco obrero",32,18638,1,380},
	{"Sarten",33,11718,1,380},
	{"Sombrero Hallowen",34,19528,2,5},
	{"Sombrero Raindow",35,19113,2,20},
	{"Parche Ojo",36,19085,1,2380},
	{"Sombrero blow",37,19136,2,15},
	{"Chaleco antibalas",38,19142,1,1380},
	{"Cachos",39,19314,2,10},
	{"Chaleco Obrero",40,19904,1,1000},

	{"Mascara gato",41,19557,1,300},
	{"Espada",42,19590,2,15},
	{"Gorra pizzero",43,19558,1,350},
	{"Gorra policia",44,18636,2,10},
	{"Sombrero",45,18639,1,400},
	{"Sombrero azul",46,18945,2,10},
	{"Sombrero verde",47,18949,2,10},
	{"Sombrero Raindow",48,18971,2,10},
	{"Sombrero Raindow",49,18972,2,10},
	{"Cabeza CJ",50,18963,2,20},
	{"Regalo navidad",51,19056,2,10},
	{"Gorro navidad",52,19066,2,10},
	{"Casco de bombero",53,19330,1,1000},
	{"Casco de bombero negro",54,19331,1,1000},
	{"Audifonos",55,19421,1,1000},
	{"Gafas",56,19018,1,1500},
	{"Gafas",57,19020,1,1500},
	{"Gafas",58,19033,1,1500},
	{"Gafas",59,19139,1,1500},
	{"Black Mask",60,19139,1,3500},
	{"Calabera",61,3524,2,30},
	{"Calabera vaca",62,6865,2,40},
	{"Cabeza dragon",63,3528,2,40},
	{"Avion",64,1681,2,50},
	{"Mascara",65,19036,1,3000},
	{"Arbol navidad",66,19076,2,5},
	{"Mascara antigas",67,19472,1,1000},
	{"Sirena policia",68,19797,2,10},
	{"Casco motocicleta",69,18645,1,1340}
};
#define MAX_GZONES 100
new Iterator:Zones<MAX_GZONES>;
#define ZONE_COLOR   		0x26262196
#define ZONE_LOCK_TIME  	180                 //NOTE:The time should be given in seconds
#define ZONE_CAPTURE_TIME   60                //Same as above note
new bool:Capturing[MAX_PLAYERS];
new CapturarZona[MAX_PLAYERS];
new PlayerText:TimerTD[MAX_PLAYERS][1];
new CapturoZona[MAX_PLAYERS],ZONITAS;
enum Zone_Data
{
	ID,
	_Color,
	bool:Owned,
	bool:locked,
	bool:U_Attack,
	timer,
	timer_main,
	timercap_main,
	timercap,
	BANDA,
	Float:ZminX,
	Float:ZminY,
	Float:ZmaxX,
	Float:ZmaxY,
	Region,
	_Zone,
    ZoneRectangleZone,
    ZonaTimer
}
new ZInfo[MAX_GZONES][Zone_Data];

new bool:creatingzone[MAX_PLAYERS],tempzone[MAX_PLAYERS];

new Float:minX[MAX_PLAYERS],Float:minY[MAX_PLAYERS],Float:maxX[MAX_PLAYERS],Float:maxY[MAX_PLAYERS];
