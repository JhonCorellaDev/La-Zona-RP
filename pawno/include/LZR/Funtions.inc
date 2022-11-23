//==============================================================================


stock GetObjetArma(weapon_id)
{
	new objeto;
	switch(weapon_id)
	{
		case 1: objeto=331;
		case 2: objeto=333;
		case 3: objeto=334;
		case 4: objeto=335;
		case 5: objeto=336;
		case 6: objeto=337;
		case 7: objeto=338;
		case 8: objeto=339;
		case 9: objeto=341;
		case 10: objeto=321;
		case 11: objeto=322;
		case 12: objeto=323;
		case 13: objeto=324;
		case 14: objeto=325;
		case 15: objeto=326;
		case 16: objeto=342;
		case 17: objeto=343;
		case 18: objeto=344;
		
		case 22: objeto=346;
		case 23: objeto=347;
		case 24: objeto=348;
		case 25: objeto=349;
		case 26: objeto=350;
		case 27: objeto=351;
		case 28: objeto=352;
		case 29: objeto=353;
		case 30: objeto=355;
		case 31: objeto=356;
		case 32: objeto=372;
		case 33: objeto=357;
		case 34: objeto=358;
		case 35: objeto=359;
		case 36: objeto=360;
		case 37: objeto=361;
		case 38: objeto=362;
		case 39: objeto=363;
		case 40: objeto=364;
		case 41: objeto=365;
		case 42: objeto=366;
		case 43: objeto=367;
		case 44: objeto=368;
		case 45: objeto=369;
		case 46: objeto=371;
	}
	return objeto;
}
stock Float:GetRotZ_EstanteriaCasa(item)
{
	new Float:floatin;
	switch(item)
	{
		case 11: floatin=90.0000;
		case 12: floatin=80.0000;
		default: floatin=0.0000;
	}
	return floatin;
}
stock Float:GetRotX_EstanteriaCasa(item)
{
	new Float:floatin;
	switch(item)
	{
		case 11: floatin=90.0000;
		case 12: floatin=0.0000;
		default: floatin=-90.0000;
	}
	return floatin;
}
stock Float:GetRotY_EstanteriaCasa(item)
{
	new Float:floatin;
	switch(item)
	{
		case 11: floatin=10.0000;
		case 12: floatin=-90.0000;
		default: floatin=10.0000;
	}
	return floatin;
}



stock Float:GetRotX_EstanteriaDepa(item)
{
	new Float:floatin;
	switch(item)
	{
		case 11: floatin=-90.0000;
		case 12: floatin=0.0000;
		default: floatin=-90.0000;
	}
	return floatin;
}
stock Float:GetRotY_EstanteriaDepa(item)
{
	new Float:floatin;
	switch(item)
	{
		case 11: floatin=-6.0000;
		case 12: floatin=-6.0000;
		default: floatin=-6.0000;
	}
	return floatin;
}
stock Float:GetRotZ_EstanteriaDepa(item)
{
	new Float:floatin;
	switch(item)
	{
		case 11: floatin=90.0000;
		case 12: floatin=90.0000;
		default: floatin=0.0000;
	}
	return floatin;
}

GetIdItemInventario(item)
{
	new itema;
	switch(item)
	{
		case 1: itema= 130;
		case 2: itema= 131;
		case 3: itema= 132;
		case 4: itema= 133;
		case 5: itema= 134;
		case 6: itema= 135;
		case 7: itema= 136;
		case 8: itema= 137;
		case 9: itema= 138;
		case 10: itema= 139;
		case 11: itema= 140;
		case 12: itema= 141;
		case 13: itema= 142;
		case 14: itema= 143;
		case 15: itema= 144;
		case 16: itema= 145;
		case 17: itema= 146;
		case 18: itema= 147;
		case 22: itema= 148;
		case 23: itema= 149;
		case 24: itema= 150;
		case 25: itema= 151;
		case 26: itema= 152;
		case 27: itema= 153;
		case 28: itema= 154;
		case 29: itema= 155;
		case 30: itema= 156;
		case 31: itema= 157;
		case 32: itema= 158;
		case 33: itema= 159;
		case 34: itema= 160;
		case 35: itema= 161;
		case 36: itema= 162;
		case 37: itema= 163;
		case 38: itema= 164;
		case 39: itema= 165;
		case 40: itema= 166;
		case 41: itema= 167;
		case 42: itema= 168;
		case 43: itema= 169;
	}
	return itema;
}
#define RR  				"{B42020}"
#define WW  				"{FFFFFF}"
/*
	//
	CreateDynamicPickup(1239, 1, pos , .worldid = -1, .interiorid = -1, .streamdistance = 300);
	format(stringa,sizeof(stringa),""RR" Text\n"WW" Text\n Text");
	CreateDynamic3DTextLabel(stringa,-1, pos, 5.0, .testlos = true, .worldid = -1);
*/
CrearInformacionInicio()
{
	new stringa[900];
	//
	CreateDynamicPickup(1273, 1, 1591.7698,-1329.4159,16.4736, .worldid = -1, .interiorid = -1, .streamdistance = 300);
	format(stringa,sizeof(stringa),""RR" Sistema casas/Apartamentos\n\n\n\n\n"WW" El sistema de casas es una funcion unica del servidor donde puedes alojarte tu o tus amigos\n puedes guardar toda tu comida, prendas u otros objetos que tengas en tu inventario\n tambien puedes cambiarle el color/textura a las paredes y otros objetos dentro de la casa\n puedes mapear la casa/departamento a tu gusto, cada mapeos o textura tiene un precio diferente de dinero o RP PUNTOS\
		\n algunas casas cuentan con garaje pero estas son solo adquiribles con RP PUNTOS");
	CreateDynamic3DTextLabel(stringa,-1,1591.7698,-1329.4159,16.4736, 5.0, .testlos = true, .worldid = -1);
	//
	CreateDynamicPickup(1239, 1, 1586.1360,-1320.6692,17.5675, .worldid = -1, .interiorid = -1, .streamdistance = 300);
	format(stringa,sizeof(stringa),"Bienvenido/a a la comunidad de "RR"La Zona RP"WW" estas en un sitio que fue diseñado para informar a los jugadores nuevos\nEn los alrededores podras encontrar informacion acerca del servidor, solo acercate lo mas que puedas y ve la informacion.\nRecuerda unirte a nuestro discord "RR"https://discord.gg/puYMbBM");
	CreateDynamic3DTextLabel(stringa,-1,1586.1360,-1320.6692,17.5675, 5.0, .testlos = true, .worldid = -1);
	//
	CreateDynamicPickup(1314, 1, 1587.7783,-1329.2411,16.4723 , .worldid = -1, .interiorid = -1, .streamdistance = 300);
	format(stringa,sizeof(stringa),""RR" Sistema de amigos\n"WW" El sistema de amigos funciona de esta forma puedes agregar hasta maximo 5 amigos y 20 siendo vip\n Puedes ver su posicion, enviar un mensaje este donde este, dejarle un mensaje asi este desconectado, ver estado de conexion\n para ver la lista de amigos se usa "RR"/Amigos");
	CreateDynamic3DTextLabel(stringa,-1, 1587.7783,-1329.2411,16.4723, 5.0, .testlos = true, .worldid = -1);
	//
	CreateDynamicPickup(1274, 1, 1583.6194,-1329.0585,16.4844 , .worldid = -1, .interiorid = -1, .streamdistance = 300);
	format(stringa,sizeof(stringa),""RR" Sistema de negocios\n"WW" Hay gran variedad de tipos de negocios por todo el mapa (24/7's,Burguer shots,Pizzerias etc)..\n Puedes comprar diferentes tipos de objetos los cuales son agregados al inventario\n puedes robar el negocio apuntandole al NPC con una arma de fuego pero ten cuidado porque sera alertado a la policia\n cada vez que robes se te añadira una extrella de busqueda");
	CreateDynamic3DTextLabel(stringa,-1, 1583.6194,-1329.0585,16.4844, 5.0, .testlos = true, .worldid = -1);
	//
	CreateDynamicPickup(1254, 1, 1579.2847,-1328.8682,16.4844 , .worldid = -1, .interiorid = -1, .streamdistance = 300);
	format(stringa,sizeof(stringa),""RR" Sistema de Reputacion\n"WW" En tu cabeza se vera reflejado una barra de color, segun la cantidad de asesinatos que cometas cambiara el color\n si tu figura llega al color negro o rojo seras visto como un jugador de mala reputacion y nunca mas podras comprar armas en ammunation's\n\
		Color {00C400}verde"WW": Reputacion normal (Asesinatos 0-2).\nColor {FFFF00}Amarillo"WW": Reputacion media (Asesinatos 3-4).\
		\nColor {CF5700}Naranja"WW": Reputacion mala (Asesinatos 5-6).\nColor {FF0000}Rojo"WW": Reputacion asesino (Asesinatos 7-9).\
		\nColor {000000}Negro"WW": Reputacion serial (Asesinatos 10+).");
	CreateDynamic3DTextLabel(stringa,-1, 1579.2847,-1328.8682,16.4844, 5.0, .testlos = true, .worldid = -1);
	//
	CreateDynamicPickup(1239, 1, 1575.0842,-1328.6841,16.4844 , .worldid = -1, .interiorid = -1, .streamdistance = 300);
	format(stringa,sizeof(stringa),""RR" Sistema de niveles en los trabajos\n"WW" Algunos trabajos tienen vinculado un sistema de niveles los cuales iras subiendo\n mientras vas realizando el trabajo, entre mas nivel sea tu trabajo mayor sera la paga.");
	CreateDynamic3DTextLabel(stringa,-1, 1575.0842,-1328.6841,16.4844, 5.0, .testlos = true, .worldid = -1);
	//
	CreateDynamicPickup(1210, 1, 1570.5093,-1328.4833,16.4844 , .worldid = -1, .interiorid = -1, .streamdistance = 300);
	format(stringa,sizeof(stringa),""RR" Sistema de inventario\n"WW" La mayoria de items/objetos que compres seran almacenados en tu inventario\n puedes guardar desde alimentos hasta objetos para reparar el vehiculo, vendas, botiquines\n para abrir el inventario oprime "RR"N"WW" parar tirar un item del inventario usa /tirarinv\n para intercambar inventario con otro jugador usa /intercambiar.");
	CreateDynamic3DTextLabel(stringa,-1, 1570.5093,-1328.4833,16.4844, 5.0, .testlos = true, .worldid = -1);
	//
	CreateDynamicPickup(1274, 1, 1570.4099,-1324.8368,16.4828 , .worldid = -1, .interiorid = -1, .streamdistance = 300);
	format(stringa,sizeof(stringa),""RR" Puntos RP\n"WW" Los Puntos RP es la moneda segundaria del servidor con la cual podras adquirir cosas unicas\n puedes comprar vip 1 o 2, comprar magnificas casas con garaje, accesorios unicos, vehiculos unicos, objetos especiales "RR"/Tiendarp\n\
		"WW" los "RR"Puntos RP"WW" son adquiribles unicamente mediante compra con dinero real (/Ayuda) - Puntos rp");
	CreateDynamic3DTextLabel(stringa,-1, 1570.4099,-1324.8368,16.4828, 5.0, .testlos = true, .worldid = -1);
	//
	CreateDynamicPickup(1314, 1, 1570.4955,-1321.7352,16.4808 , .worldid = -1, .interiorid = -1, .streamdistance = 300);
	format(stringa,sizeof(stringa),""RR" Sistema de bandas\n"WW" Puedes crear u/o unirte a una banda, domina todos los mercados y grafitis del juego con tu banda y domina todo el servidor\n Puedes ver el estado de tu banda con el comando /Banda puedes ver la demas informacion de otras bandas mediante el inventario\n\
		 miembros y rango, grafitis capturados, mercados dominados, territorios dominados etc..\nCada Zona,Mercado,Grafiti te dara un porcentaje de dinero en tu payday entre mas conquistas mas dinero podras ganar.");
	CreateDynamic3DTextLabel(stringa,-1, 1570.4955,-1321.7352,16.4808, 5.0, .testlos = true, .worldid = -1);
	return 1;
}


IsPlayerInArea(playerid, Float:MinX, Float:MinY, Float:MaxX, Float:MaxY)
{
	new Float:X, Float:Y, Float:Z;

	GetPlayerPos(playerid, X, Y, Z);
	if(X >= MinX && X <= MaxX && Y >= MinY && Y <= MaxY) {
		return 1;
	}
	return 0;
}
stock HexToInt( string[ ] ) 
{ 
    if( string[ 0 ] == 0 ) return ( 0 ); 

    new i; 
    new cur = 1; 
    new res = 0; 
    for( i = strlen( string ); i > 0; i -- ) 
    { 
        if( string[ i - 1 ] < 58 ) 
        { 
            res = res + cur * ( string[ i - 1 ] - 48 ); 
        } 
        else 
        { 
            res = res + cur * ( string[ i - 1 ] - 65 + 10 ); 
            cur = cur * 16; 
        } 
    } 
    return ( res ); 
} 
stock GetGZoneID(playerid)
{
    return GetPVarInt(playerid, "GZoneID");
}