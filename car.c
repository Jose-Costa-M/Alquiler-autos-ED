#include "car.h"

void fillsCarInfoBasicos(Autos basicos[TAM_CARS])
{

    strcpy(basicos[0].placas, "354DBC");
    fflush(stdin);
    strcpy(basicos[0]._tipo_auto, "BASICO");
    fflush(stdin);
    strcpy(basicos[0].kilometraje, "Ilimitado");
    fflush(stdin);
    strcpy(basicos[0].modelo, "NISSAN MARCH");
    fflush(stdin);
    strcpy(basicos[0].color, "AZUL");
    fflush(stdin);
    basicos[0].numero_asientos = 5;
    basicos[0].tarifa = 1644.33;
    basicos[0].disponible = 0;

    strcpy(basicos[1].placas, "666GEI");
    fflush(stdin);
    strcpy(basicos[1]._tipo_auto, "BASICO");
    fflush(stdin);
    strcpy(basicos[1].kilometraje, "Ilimitado");
    fflush(stdin);
    strcpy(basicos[1].modelo, "KIA RIO");
    fflush(stdin);
    strcpy(basicos[1].color, "PLATA");
    fflush(stdin);
    basicos[1].numero_asientos = 5;
    basicos[1].tarifa = 1116;
    basicos[1].disponible = 0;

    strcpy(basicos[2].placas, "124YED");
    fflush(stdin);
    strcpy(basicos[2]._tipo_auto, "BASICO");
    fflush(stdin);
    strcpy(basicos[2].kilometraje, "Ilimitado");
    fflush(stdin);
    strcpy(basicos[2].modelo, "SUZUKI ERTIGA");
    fflush(stdin);
    strcpy(basicos[2].color, "ROJO");
    fflush(stdin);
    basicos[2].numero_asientos = 7;
    basicos[2].tarifa = 1393.33;
    basicos[2].disponible = 0;

    strcpy(basicos[3].placas, "527RED");
    fflush(stdin);
    strcpy(basicos[3]._tipo_auto, "BASICO");
    fflush(stdin);
    strcpy(basicos[3].kilometraje, "Ilimitado");
    fflush(stdin);
    strcpy(basicos[3].modelo, "CHEVY BEAT");
    fflush(stdin);
    strcpy(basicos[3].color, "NEGRO");
    fflush(stdin);
    basicos[3].numero_asientos = 5;
    basicos[3].tarifa = 1523.33;
    basicos[3].disponible = 0;

    strcpy(basicos[4].placas, "182JJO");
    fflush(stdin);
    strcpy(basicos[4]._tipo_auto, "BASICO");
    fflush(stdin);
    strcpy(basicos[4].kilometraje, "Ilimitado");
    fflush(stdin);
    strcpy(basicos[4].modelo, "CHEVROLET MATIZ");
    fflush(stdin);
    strcpy(basicos[4].color, "ROJO");
    fflush(stdin);
    basicos[4].numero_asientos = 5;
    basicos[4].tarifa = 1665.66;
    basicos[4].disponible = 0;

    strcpy(basicos[5].placas, "657BRE");
    fflush(stdin);
    strcpy(basicos[5]._tipo_auto, "BASICO");
    fflush(stdin);
    strcpy(basicos[5].kilometraje, "Ilimitado");
    fflush(stdin);
    strcpy(basicos[5].modelo, "CHEVROLET AVEO");
    fflush(stdin);
    strcpy(basicos[5].color, "BLANCO");
    fflush(stdin);
    basicos[5].numero_asientos = 5;
    basicos[5].tarifa = 1415.66;
    basicos[5].disponible = 0;

    strcpy(basicos[6].placas, "666GEI");
    fflush(stdin);
    strcpy(basicos[6]._tipo_auto, "BASICO");
    fflush(stdin);
    strcpy(basicos[6].kilometraje, "Ilimitado");
    fflush(stdin);
    strcpy(basicos[6].modelo, "CHEVY SPARK");
    fflush(stdin);
    strcpy(basicos[6].color, "NEGRO");
    fflush(stdin);
    basicos[6].numero_asientos = 5;
    basicos[6].tarifa = 1427.66;
    basicos[6].disponible = 0;

    strcpy(basicos[7].placas, "167OGK");
    fflush(stdin);
    strcpy(basicos[7]._tipo_auto, "BASICO");
    fflush(stdin);
    strcpy(basicos[7].kilometraje, "Ilimitado");
    fflush(stdin);
    strcpy(basicos[7].modelo, "RENAULT KWID");
    fflush(stdin);
    strcpy(basicos[7].color, "BLANCO");
    fflush(stdin);
    basicos[7].numero_asientos = 5;
    basicos[7].tarifa = 1355.20;
    basicos[7].disponible = 0;

    strcpy(basicos[8].placas, "131VID");
    fflush(stdin);
    strcpy(basicos[8]._tipo_auto, "BASICO");
    fflush(stdin);
    strcpy(basicos[8].kilometraje, "Ilimitado");
    fflush(stdin);
    strcpy(basicos[8].modelo, "VOLKSWAGEN GOL SEDAN");
    fflush(stdin);
    strcpy(basicos[8].color, "BLANCO");
    fflush(stdin);
    basicos[8].numero_asientos = 5;
    basicos[8].tarifa = 1415.66;
    basicos[8].disponible = 0;

    strcpy(basicos[9].placas, "475KLA");
    fflush(stdin);
    strcpy(basicos[9]._tipo_auto, "BASICO");
    fflush(stdin);
    strcpy(basicos[9].kilometraje, "Ilimitado");
    fflush(stdin);
    strcpy(basicos[9].modelo, "SUZUKI SWIFT");
    fflush(stdin);
    strcpy(basicos[9].color, "CAFE");
    fflush(stdin);
    basicos[9].numero_asientos = 5;
    basicos[9].tarifa = 1482.66;
    basicos[9].disponible = 0;

    strcpy(basicos[10].placas, "563GSM");
    fflush(stdin);
    strcpy(basicos[10]._tipo_auto, "BASICO");
    fflush(stdin);
    strcpy(basicos[10].kilometraje, "Ilimitado");
    fflush(stdin);
    strcpy(basicos[10].modelo, "FIAT MOBI");
    fflush(stdin);
    strcpy(basicos[10].color, "CAFE");
    fflush(stdin);
    basicos[10].numero_asientos = 5;
    basicos[10].tarifa = 1665.66;
    basicos[10].disponible = 0;

    strcpy(basicos[11].placas, "936ASD");
    fflush(stdin);
    strcpy(basicos[11]._tipo_auto, "BASICO");
    fflush(stdin);
    strcpy(basicos[11].kilometraje, "Ilimitado");
    fflush(stdin);
    strcpy(basicos[11].modelo, "RENAULT KWID");
    fflush(stdin);
    strcpy(basicos[11].color, "MORADO");
    fflush(stdin);
    basicos[11].numero_asientos = 5;
    basicos[11].tarifa = 1865.66;
    basicos[11].disponible = 0;

    strcpy(basicos[12].placas, "153OAO");
    fflush(stdin);
    strcpy(basicos[12]._tipo_auto, "BASICO");
    fflush(stdin);
    strcpy(basicos[12].kilometraje, "Ilimitado");
    fflush(stdin);
    strcpy(basicos[12].modelo, "HYUNDAI GRAND I10");
    fflush(stdin);
    strcpy(basicos[12].color, "BLANCO");
    fflush(stdin);
    basicos[12].numero_asientos = 5;
    basicos[12].tarifa = 1065.66;
    basicos[12].disponible = 0;

    strcpy(basicos[13].placas, "262HSA");
    fflush(stdin);
    strcpy(basicos[13]._tipo_auto, "BASICO");
    fflush(stdin);
    strcpy(basicos[13].kilometraje, "Ilimitado");
    fflush(stdin);
    strcpy(basicos[13].modelo, "NISSAN  MARCH");
    fflush(stdin);
    strcpy(basicos[13].color, "ROJO");
    fflush(stdin);
    basicos[13].numero_asientos = 5;
    basicos[13].tarifa = 1115.66;
    basicos[13].disponible = 0;

    strcpy(basicos[14].placas, "428HSM");
    fflush(stdin);
    strcpy(basicos[14]._tipo_auto, "BASICO");
    fflush(stdin);
    strcpy(basicos[14].kilometraje, "Ilimitado");
    fflush(stdin);
    strcpy(basicos[14].modelo, "FIAT UNO");
    fflush(stdin);
    strcpy(basicos[14].color, "NEGRO");
    fflush(stdin);
    basicos[14].numero_asientos = 5;
    basicos[14].tarifa = 1205.66;
    basicos[14].disponible = 0;

    strcpy(basicos[15].placas, "289KAL");
    fflush(stdin);
    strcpy(basicos[15]._tipo_auto, "BASICO");
    fflush(stdin);
    strcpy(basicos[15].kilometraje, "Ilimitado");
    fflush(stdin);
    strcpy(basicos[15].modelo, "NISSAN V DRIV");
    fflush(stdin);
    strcpy(basicos[15].color, "ROJO");
    fflush(stdin);
    basicos[15].numero_asientos = 5;
    basicos[15].tarifa = 1053.66;
    basicos[15].disponible = 0;

    strcpy(basicos[16].placas, "532LSN");
    fflush(stdin);
    strcpy(basicos[16]._tipo_auto, "BASICO");
    fflush(stdin);
    strcpy(basicos[16].kilometraje, "Ilimitado");
    fflush(stdin);
    strcpy(basicos[16].modelo, "DODGE ATTITUDE");
    fflush(stdin);
    strcpy(basicos[16].color, "AMARILLO");
    fflush(stdin);
    basicos[16].numero_asientos = 5;
    basicos[16].tarifa = 1269.66;
    basicos[16].disponible = 0;

    strcpy(basicos[17].placas, "472LKV");
    fflush(stdin);
    strcpy(basicos[17]._tipo_auto, "BASICO");
    fflush(stdin);
    strcpy(basicos[17].kilometraje, "Ilimitado");
    fflush(stdin);
    strcpy(basicos[17].modelo, "SUZUKI IGNIS");
    fflush(stdin);
    strcpy(basicos[17].color, "ROJO");
    fflush(stdin);
    basicos[17].numero_asientos = 5;
    basicos[17].tarifa = 1315.66;
    basicos[17].disponible = 0;

    strcpy(basicos[18].placas, "739UAS");
    fflush(stdin);
    strcpy(basicos[18]._tipo_auto, "BASICO");
    fflush(stdin);
    strcpy(basicos[18].kilometraje, "Ilimitado");
    fflush(stdin);
    strcpy(basicos[18].modelo, "CHEVROLET SPARK");
    fflush(stdin);
    strcpy(basicos[18].color, "ROJO");
    fflush(stdin);
    basicos[18].numero_asientos = 5;
    basicos[18].tarifa = 1345.66;
    basicos[18].disponible = 0;

    strcpy(basicos[19].placas, "732QHS");
    fflush(stdin);
    strcpy(basicos[19]._tipo_auto, "BASICO");
    fflush(stdin);
    strcpy(basicos[19].kilometraje, "Ilimitado");
    fflush(stdin);
    strcpy(basicos[19].modelo, "CHEVROLET HB");
    fflush(stdin);
    strcpy(basicos[19].color, "NEGRO");
    fflush(stdin);
    basicos[19].numero_asientos = 5;
    basicos[19].tarifa = 1342.66;
    basicos[19].disponible = 0;

    strcpy(basicos[20].placas, "936PAQ");
    fflush(stdin);
    strcpy(basicos[20]._tipo_auto, "BASICO");
    fflush(stdin);
    strcpy(basicos[20].kilometraje, "Ilimitado");
    fflush(stdin);
    strcpy(basicos[20].modelo, "CHEVROLET NB");
    fflush(stdin);
    strcpy(basicos[20].color, "ROJO");
    fflush(stdin);
    basicos[20].numero_asientos = 5;
    basicos[20].tarifa = 1695.76;
    basicos[20].disponible = 0;

    strcpy(basicos[21].placas, "632ISS");
    fflush(stdin);
    strcpy(basicos[21]._tipo_auto, "BASICO");
    fflush(stdin);
    strcpy(basicos[21].kilometraje, "Ilimitado");
    fflush(stdin);
    strcpy(basicos[21].modelo, "HYUNDAI HB");
    fflush(stdin);
    strcpy(basicos[21].color, "ROSA");
    fflush(stdin);
    basicos[21].numero_asientos = 5;
    basicos[21].tarifa = 1765.66;
    basicos[21].disponible = 0;

    strcpy(basicos[22].placas, "398QWQ");
    fflush(stdin);
    strcpy(basicos[22]._tipo_auto, "BASICO");
    fflush(stdin);
    strcpy(basicos[22].kilometraje, "Ilimitado");
    fflush(stdin);
    strcpy(basicos[22].modelo, "HYUNDAI SEDAN");
    fflush(stdin);
    strcpy(basicos[22].color, "AMARILLO");
    fflush(stdin);
    basicos[22].numero_asientos = 5;
    basicos[22].tarifa = 1535.66;
    basicos[22].disponible = 0;

    strcpy(basicos[23].placas, "733QHW");
    fflush(stdin);
    strcpy(basicos[23]._tipo_auto, "BASICO");
    fflush(stdin);
    strcpy(basicos[23].kilometraje, "Ilimitado");
    fflush(stdin);
    strcpy(basicos[23].modelo, "CHEVROLET AVEO");
    fflush(stdin);
    strcpy(basicos[23].color, "ROJO");
    fflush(stdin);
    basicos[23].numero_asientos = 5;
    basicos[23].tarifa = 1065.66;
    basicos[23].disponible = 0;

    strcpy(basicos[24].placas, "138FES");
    fflush(stdin);
    strcpy(basicos[24]._tipo_auto, "BASICO");
    fflush(stdin);
    strcpy(basicos[24].kilometraje, "Ilimitado");
    fflush(stdin);
    strcpy(basicos[24].modelo, "FIAT ARGO");
    fflush(stdin);
    strcpy(basicos[24].color, "ROJO");
    fflush(stdin);
    basicos[24].numero_asientos = 5;
    basicos[24].tarifa = 1365.66;
    basicos[24].disponible = 0;

    strcpy(basicos[25].placas, "981NSA");
    fflush(stdin);
    strcpy(basicos[25]._tipo_auto, "BASICO");
    fflush(stdin);
    strcpy(basicos[25].kilometraje, "Ilimitado");
    fflush(stdin);
    strcpy(basicos[25].modelo, "SUZUKI SWIFT");
    fflush(stdin);
    strcpy(basicos[25].color, "NARANJA");
    fflush(stdin);
    basicos[25].numero_asientos = 5;
    basicos[25].tarifa = 1665.66;
    basicos[25].disponible = 0;

    strcpy(basicos[26].placas, "923EDK");
    fflush(stdin);
    strcpy(basicos[26]._tipo_auto, "BASICO");
    fflush(stdin);
    strcpy(basicos[26].kilometraje, "Ilimitado");
    fflush(stdin);
    strcpy(basicos[26].modelo, "SEAT IBIZA");
    fflush(stdin);
    strcpy(basicos[26].color, "MORADO");
    fflush(stdin);
    basicos[26].numero_asientos = 5;
    basicos[26].tarifa = 1665.66;
    basicos[26].disponible = 0;

    strcpy(basicos[27].placas, "381HAS");
    fflush(stdin);
    strcpy(basicos[27]._tipo_auto, "BASICO");
    fflush(stdin);
    strcpy(basicos[27].kilometraje, "Ilimitado");
    fflush(stdin);
    strcpy(basicos[27].modelo, "VOLKSWAGEN POLO");
    fflush(stdin);
    strcpy(basicos[27].color, "AZUL");
    fflush(stdin);
    basicos[27].numero_asientos = 5;
    basicos[27].tarifa = 1765.66;
    basicos[27].disponible = 0;

    strcpy(basicos[28].placas, "727EDB");
    fflush(stdin);
    strcpy(basicos[28]._tipo_auto, "BASICO");
    fflush(stdin);
    strcpy(basicos[28].kilometraje, "Ilimitado");
    fflush(stdin);
    strcpy(basicos[28].modelo, "BAIC M50S");
    fflush(stdin);
    strcpy(basicos[28].color, "AMARILLO");
    fflush(stdin);
    basicos[28].numero_asientos = 5;
    basicos[28].tarifa = 1965.66;
    basicos[28].disponible = 0;

    strcpy(basicos[29].placas, "893FVD");
    fflush(stdin);
    strcpy(basicos[29]._tipo_auto, "BASICO");
    fflush(stdin);
    strcpy(basicos[29].kilometraje, "Ilimitado");
    fflush(stdin);
    strcpy(basicos[29].modelo, "NISSAN VERSA");
    fflush(stdin);
    strcpy(basicos[29].color, "DORADO");
    fflush(stdin);
    basicos[29].numero_asientos = 5;
    basicos[29].tarifa = 1165.66;
    basicos[29].disponible = 0;

    strcpy(basicos[30].placas, "735GHW");
    fflush(stdin);
    strcpy(basicos[30]._tipo_auto, "BASICO");
    fflush(stdin);
    strcpy(basicos[30].kilometraje, "Ilimitado");
    fflush(stdin);
    strcpy(basicos[30].modelo, "NISSAN TSURU");
    fflush(stdin);
    strcpy(basicos[30].color, "BLANCO");
    fflush(stdin);
    basicos[30].numero_asientos = 5;
    basicos[30].tarifa = 1035.66;
    basicos[30].disponible = 0;

    strcpy(basicos[31].placas, "215GSL");
    fflush(stdin);
    strcpy(basicos[31]._tipo_auto, "BASICO");
    fflush(stdin);
    strcpy(basicos[31].kilometraje, "Ilimitado");
    fflush(stdin);
    strcpy(basicos[31].modelo, "MAZDA CX-5");
    fflush(stdin);
    strcpy(basicos[31].color, "BLANCO");
    fflush(stdin);
    basicos[31].numero_asientos = 5;
    basicos[31].tarifa = 1048.66;
    basicos[31].disponible = 0;

    strcpy(basicos[32].placas, "438GFH");
    fflush(stdin);
    strcpy(basicos[32]._tipo_auto, "BASICO");
    fflush(stdin);
    strcpy(basicos[32].kilometraje, "Ilimitado");
    fflush(stdin);
    strcpy(basicos[32].modelo, "VOLKSWAGEN GOL SEDAN");
    fflush(stdin);
    strcpy(basicos[32].color, "GRIS");
    fflush(stdin);
    basicos[32].numero_asientos = 5;
    basicos[32].tarifa = 1467.66;
    basicos[32].disponible = 0;

    strcpy(basicos[33].placas, "573HAK");
    fflush(stdin);
    strcpy(basicos[33]._tipo_auto, "BASICO");
    fflush(stdin);
    strcpy(basicos[33].kilometraje, "Ilimitado");
    fflush(stdin);
    strcpy(basicos[33].modelo, "TOYOT COROLLA");
    fflush(stdin);
    strcpy(basicos[33].color, "CAFE");
    fflush(stdin);
    basicos[33].numero_asientos = 5;
    basicos[33].tarifa = 1898.66;
    basicos[33].disponible = 0;

    strcpy(basicos[34].placas, "162OPR");
    fflush(stdin);
    strcpy(basicos[34]._tipo_auto, "BASICO");
    fflush(stdin);
    strcpy(basicos[34].kilometraje, "Ilimitado");
    fflush(stdin);
    strcpy(basicos[34].modelo, "NISSAN FRONTIER");
    fflush(stdin);
    strcpy(basicos[34].color, "BLANCO");
    fflush(stdin);
    basicos[34].numero_asientos = 5;
    basicos[34].tarifa = 1335.66;
    basicos[34].disponible = 0;

    strcpy(basicos[35].placas, "194RTS");
    fflush(stdin);
    strcpy(basicos[35]._tipo_auto, "BASICO");
    fflush(stdin);
    strcpy(basicos[35].kilometraje, "Ilimitado");
    fflush(stdin);
    strcpy(basicos[35].modelo, "KIA SPORTAGE");
    fflush(stdin);
    strcpy(basicos[35].color, "BLANCO");
    fflush(stdin);
    basicos[35].numero_asientos = 5;
    basicos[35].tarifa = 1037.66;
    basicos[35].disponible = 0;

    strcpy(basicos[36].placas, "735GHW");
    fflush(stdin);
    strcpy(basicos[36]._tipo_auto, "BASICO");
    fflush(stdin);
    strcpy(basicos[36].kilometraje, "Ilimitado");
    fflush(stdin);
    strcpy(basicos[36].modelo, "NISSAN TSURU");
    fflush(stdin);
    strcpy(basicos[36].color, "BLANCO");
    fflush(stdin);
    basicos[36].numero_asientos = 5;
    basicos[36].tarifa = 1345.66;
    basicos[36].disponible = 0;

    strcpy(basicos[37].placas, "935DFT");
    fflush(stdin);
    strcpy(basicos[37]._tipo_auto, "BASICO");
    fflush(stdin);
    strcpy(basicos[37].kilometraje, "Ilimitado");
    fflush(stdin);
    strcpy(basicos[37].modelo, "HONDA CR-V");
    fflush(stdin);
    strcpy(basicos[37].color, "NEGRO");
    fflush(stdin);
    basicos[37].numero_asientos = 5;
    basicos[37].tarifa = 1035.66;
    basicos[37].disponible = 0;

    strcpy(basicos[38].placas, "174ORD");
    fflush(stdin);
    strcpy(basicos[38]._tipo_auto, "BASICO");
    fflush(stdin);
    strcpy(basicos[38].kilometraje, "Ilimitado");
    fflush(stdin);
    strcpy(basicos[38].modelo, "NISSAN X-TRAIL");
    fflush(stdin);
    strcpy(basicos[38].color, "BLANCO");
    fflush(stdin);
    basicos[38].numero_asientos = 5;
    basicos[38].tarifa = 1035.66;
    basicos[38].disponible = 0;

    strcpy(basicos[39].placas, "59LAO");
    fflush(stdin);
    strcpy(basicos[39]._tipo_auto, "BASICO");
    fflush(stdin);
    strcpy(basicos[39].kilometraje, "Ilimitado");
    fflush(stdin);
    strcpy(basicos[39].modelo, "NISSAN SENTRA");
    fflush(stdin);
    strcpy(basicos[39].color, "BLANCO");
    fflush(stdin);
    basicos[39].numero_asientos = 5;
    basicos[39].tarifa = 1683.66;
    basicos[39].disponible = 0;
}

void fillsCarInfoIntermedios(Autos intermedios[TAM_CARS])
{
    strcpy(intermedios[0].placas, "789FTC");
    fflush(stdin);
    strcpy(intermedios[0]._tipo_auto, "INTERMEDIO");
    fflush(stdin);
    strcpy(intermedios[0].kilometraje, "Ilimitado");
    fflush(stdin);
    strcpy(intermedios[0].modelo, "CHEVROLET CAVALIER");
    fflush(stdin);
    strcpy(intermedios[0].color, "ORO");
    intermedios[0].numero_asientos = 5;
    intermedios[0].tarifa = 2135.57;
    intermedios[0].disponible = 0;

    strcpy(intermedios[1].placas, "648EYM");
    fflush(stdin);
    strcpy(intermedios[1]._tipo_auto, "INTERMEDIO");
    fflush(stdin);
    strcpy(intermedios[1].kilometraje, "Ilimitado");
    fflush(stdin);
    strcpy(intermedios[1].modelo, "TOYOTA PRIUS");
    fflush(stdin);
    strcpy(intermedios[1].color, "PLATA");
    intermedios[1].numero_asientos = 5;
    intermedios[1].tarifa = 2797.33;
    intermedios[1].disponible = 0;

    strcpy(intermedios[2].placas, "164EHD");
    fflush(stdin);
    strcpy(intermedios[2]._tipo_auto, "INTERMEDIO");
    fflush(stdin);
    strcpy(intermedios[2].kilometraje, "Ilimitado");
    fflush(stdin);
    strcpy(intermedios[2].modelo, "VW Passat");
    fflush(stdin);
    strcpy(intermedios[2].color, "NEGRO");
    fflush(stdin);
    intermedios[2].numero_asientos = 6;
    intermedios[2].tarifa = 2527.33;
    intermedios[2].disponible = 0;

    strcpy(intermedios[3].placas, "927EJY");
    fflush(stdin);
    strcpy(intermedios[3]._tipo_auto, "INTERMEDIO");
    fflush(stdin);
    strcpy(intermedios[3].kilometraje, "Ilimitado");
    fflush(stdin);
    strcpy(intermedios[3].modelo, "CHRYSLER 200");
    fflush(stdin);
    strcpy(intermedios[3].color, "ROJO");
    fflush(stdin);
    intermedios[3].numero_asientos = 4;
    intermedios[3].tarifa = 2567.34;
    intermedios[3].disponible = 0;

    strcpy(intermedios[4].placas, "396PJO");
    fflush(stdin);
    strcpy(intermedios[4]._tipo_auto, "INTERMEDIO");
    fflush(stdin);
    strcpy(intermedios[4].kilometraje, "Ilimitado");
    fflush(stdin);
    strcpy(intermedios[4].modelo, "VOLKSWAGEN JETTA");
    fflush(stdin);
    strcpy(intermedios[4].color, "CAFE");
    fflush(stdin);
    intermedios[4].numero_asientos = 5;
    intermedios[4].tarifa = 2665.66;
    intermedios[4].disponible = 0;

    strcpy(intermedios[5].placas, "657BRE");
    fflush(stdin);
    strcpy(intermedios[5]._tipo_auto, "INTERMEDIO");
    fflush(stdin);
    strcpy(intermedios[5].kilometraje, "Ilimitado");
    fflush(stdin);
    strcpy(intermedios[5].modelo, "HYUNDAI TUCSON");
    fflush(stdin);
    strcpy(intermedios[5].color, "GRIS");
    fflush(stdin);
    intermedios[5].numero_asientos = 6;
    intermedios[5].tarifa = 2415.66;
    intermedios[5].disponible = 0;

    strcpy(intermedios[6].placas, "176PEL");
    fflush(stdin);
    strcpy(intermedios[6]._tipo_auto, "INTERMEDIO");
    fflush(stdin);
    strcpy(intermedios[6].kilometraje, "Ilimitado");
    fflush(stdin);
    strcpy(intermedios[6].modelo, "JEEP PATRIOT");
    fflush(stdin);
    strcpy(intermedios[6].color, "AMARILLO");
    fflush(stdin);
    intermedios[6].numero_asientos = 5;
    intermedios[6].tarifa = 2427.66;
    intermedios[6].disponible = 0;

    strcpy(intermedios[7].placas, "167OTK");
    fflush(stdin);
    strcpy(intermedios[7]._tipo_auto, "INTERMEDIO");
    fflush(stdin);
    strcpy(intermedios[7].kilometraje, "Ilimitado");
    fflush(stdin);
    strcpy(intermedios[7].modelo, "RENAULT KWID");
    fflush(stdin);
    strcpy(intermedios[7].color, "VERDE");
    fflush(stdin);
    intermedios[7].numero_asientos = 5;
    intermedios[7].tarifa = 2965.70;
    intermedios[7].disponible = 0;

    strcpy(intermedios[8].placas, "310FEC");
    fflush(stdin);
    strcpy(intermedios[8]._tipo_auto, "INTERMEDIO");
    fflush(stdin);
    strcpy(intermedios[8].kilometraje, "Ilimitado");
    fflush(stdin);
    strcpy(intermedios[8].modelo, "KIA SPORTAGE");
    fflush(stdin);
    strcpy(intermedios[8].color, "BLANCO");
    fflush(stdin);
    intermedios[8].numero_asientos = 5;
    intermedios[8].tarifa = 2110.23;
    intermedios[8].disponible = 0;

    strcpy(intermedios[9].placas, "475KLA");
    fflush(stdin);
    strcpy(intermedios[9]._tipo_auto, "INTERMEDIO");
    fflush(stdin);
    strcpy(intermedios[9].kilometraje, "Ilimitado");
    fflush(stdin);
    strcpy(intermedios[9].modelo, "CHVROLET CAPTIVA");
    fflush(stdin);
    strcpy(intermedios[9].color, "AZUL");
    fflush(stdin);
    intermedios[9].numero_asientos = 5;
    intermedios[9].tarifa = 2389.55;
    intermedios[9].disponible = 0;

    strcpy(intermedios[10].placas, "762GAH");
    fflush(stdin);
    strcpy(intermedios[10]._tipo_auto, "INTERMEDIO");
    fflush(stdin);
    strcpy(intermedios[10].kilometraje, "Ilimitado");
    fflush(stdin);
    strcpy(intermedios[10].modelo, "TOYOTA COROLLA");
    fflush(stdin);
    strcpy(intermedios[10].color, "AZUL");
    fflush(stdin);
    intermedios[10].numero_asientos = 5;
    intermedios[10].tarifa = 2789;
    intermedios[10].disponible = 0;

    strcpy(intermedios[11].placas, "928UAS");
    fflush(stdin);
    strcpy(intermedios[11]._tipo_auto, "INTERMEDIO");
    fflush(stdin);
    strcpy(intermedios[11].kilometraje, "Ilimitado");
    fflush(stdin);
    strcpy(intermedios[11].modelo, "FORD F-SERIES");
    fflush(stdin);
    strcpy(intermedios[11].color, "NEGRO");
    fflush(stdin);
    intermedios[11].numero_asientos = 5;
    intermedios[11].tarifa = 2983;
    intermedios[11].disponible = 0;

    strcpy(intermedios[12].placas, "643KLS");
    fflush(stdin);
    strcpy(intermedios[12]._tipo_auto, "INTERMEDIO");
    fflush(stdin);
    strcpy(intermedios[12].kilometraje, "Ilimitado");
    fflush(stdin);
    strcpy(intermedios[12].modelo, "TOYOTA RAV4");
    fflush(stdin);
    strcpy(intermedios[12].color, "AZUL");
    fflush(stdin);
    intermedios[12].numero_asientos = 5;
    intermedios[12].tarifa = 2743;
    intermedios[12].disponible = 0;

    strcpy(intermedios[13].placas, "728USH");
    fflush(stdin);
    strcpy(intermedios[13]._tipo_auto, "INTERMEDIO");
    fflush(stdin);
    strcpy(intermedios[13].kilometraje, "Ilimitado");
    fflush(stdin);
    strcpy(intermedios[13].modelo, "HONDA CIVIC");
    fflush(stdin);
    strcpy(intermedios[13].color, "BLANCO");
    fflush(stdin);
    intermedios[13].numero_asientos = 5;
    intermedios[13].tarifa = 2645;
    intermedios[13].disponible = 0;

    strcpy(intermedios[14].placas, "298HDS");
    fflush(stdin);
    strcpy(intermedios[14]._tipo_auto, "INTERMEDIO");
    fflush(stdin);
    strcpy(intermedios[14].kilometraje, "Ilimitado");
    fflush(stdin);
    strcpy(intermedios[14].modelo, "VOLKSWAGEN TIGUAN");
    fflush(stdin);
    strcpy(intermedios[14].color, "VERDE");
    fflush(stdin);
    intermedios[14].numero_asientos = 5;
    intermedios[14].tarifa = 2987;
    intermedios[14].disponible = 0;

    strcpy(intermedios[15].placas, "726EYD");
    fflush(stdin);
    strcpy(intermedios[15]._tipo_auto, "INTERMEDIO");
    fflush(stdin);
    strcpy(intermedios[15].kilometraje, "Ilimitado");
    fflush(stdin);
    strcpy(intermedios[15].modelo, "VOLKSWAGEN GOLF");
    fflush(stdin);
    strcpy(intermedios[15].color, "PERLA");
    fflush(stdin);
    intermedios[15].numero_asientos = 5;
    intermedios[15].tarifa = 2643;
    intermedios[15].disponible = 0;

    strcpy(intermedios[16].placas, "672KJS");
    fflush(stdin);
    strcpy(intermedios[16]._tipo_auto, "INTERMEDIO");
    fflush(stdin);
    strcpy(intermedios[16].kilometraje, "Ilimitado");
    fflush(stdin);
    strcpy(intermedios[16].modelo, "HOND CR-V");
    fflush(stdin);
    strcpy(intermedios[16].color, "NEGRO");
    fflush(stdin);
    intermedios[16].numero_asientos = 5;
    intermedios[16].tarifa = 2989;
    intermedios[16].disponible = 0;

    strcpy(intermedios[17].placas, "093LKS");
    fflush(stdin);
    strcpy(intermedios[17]._tipo_auto, "INTERMEDIO");
    fflush(stdin);
    strcpy(intermedios[17].kilometraje, "Ilimitado");
    fflush(stdin);
    strcpy(intermedios[17].modelo, "VOLKSWAGEN POLO");
    fflush(stdin);
    strcpy(intermedios[17].color, "CAFE");
    fflush(stdin);
    intermedios[17].numero_asientos = 5;
    intermedios[17].tarifa = 2873;
    intermedios[17].disponible = 0;

    strcpy(intermedios[18].placas, "892JHA");
    fflush(stdin);
    strcpy(intermedios[18]._tipo_auto, "INTERMEDIO");
    fflush(stdin);
    strcpy(intermedios[18].kilometraje, "Ilimitado");
    fflush(stdin);
    strcpy(intermedios[18].modelo, "TOYOTA CAMRY");
    fflush(stdin);
    strcpy(intermedios[18].color, "BLANCO");
    fflush(stdin);
    intermedios[18].numero_asientos = 5;
    intermedios[18].tarifa = 2567;
    intermedios[18].disponible = 0;

    strcpy(intermedios[19].placas, "167PHA");
    fflush(stdin);
    strcpy(intermedios[19]._tipo_auto, "INTERMEDIO");
    fflush(stdin);
    strcpy(intermedios[19].kilometraje, "Ilimitado");
    fflush(stdin);
    strcpy(intermedios[19].modelo, "CHEVROLET SILVERADO");
    fflush(stdin);
    strcpy(intermedios[19].color, "NEGRO");
    fflush(stdin);
    intermedios[19].numero_asientos = 5;
    intermedios[19].tarifa = 2964;
    intermedios[19].disponible = 0;

    strcpy(intermedios[20].placas, "829KSJ");
    fflush(stdin);
    strcpy(intermedios[20]._tipo_auto, "INTERMEDIO");
    fflush(stdin);
    strcpy(intermedios[20].kilometraje, "Ilimitado");
    fflush(stdin);
    strcpy(intermedios[20].modelo, "HYNDAI ELANTRA");
    fflush(stdin);
    strcpy(intermedios[20].color, "ROJO");
    fflush(stdin);
    intermedios[20].numero_asientos = 5;
    intermedios[20].tarifa = 2723;
    intermedios[20].disponible = 0;

    strcpy(intermedios[21].placas, "726TCB");
    fflush(stdin);
    strcpy(intermedios[21]._tipo_auto, "INTERMEDIO");
    fflush(stdin);
    strcpy(intermedios[21].kilometraje, "Ilimitado");
    fflush(stdin);
    strcpy(intermedios[21].modelo, "RAM");
    fflush(stdin);
    strcpy(intermedios[21].color, "AZUL");
    fflush(stdin);
    intermedios[21].numero_asientos = 5;
    intermedios[21].tarifa = 2923;
    intermedios[21].disponible = 0;

    strcpy(intermedios[22].placas, "763KJS");
    fflush(stdin);
    strcpy(intermedios[22]._tipo_auto, "INTERMEDIO");
    fflush(stdin);
    strcpy(intermedios[22].kilometraje, "Ilimitado");
    fflush(stdin);
    strcpy(intermedios[22].modelo, "HYNDAI TUCSON");
    fflush(stdin);
    strcpy(intermedios[22].color, "ROJO");
    fflush(stdin);
    intermedios[22].numero_asientos = 5;
    intermedios[22].tarifa = 2852;
    intermedios[22].disponible = 0;

    strcpy(intermedios[23].placas, "829JSH");
    fflush(stdin);
    strcpy(intermedios[23]._tipo_auto, "INTERMEDIO");
    fflush(stdin);
    strcpy(intermedios[23].kilometraje, "Ilimitado");
    fflush(stdin);
    strcpy(intermedios[23].modelo, "TOYOTA HILUX");
    fflush(stdin);
    strcpy(intermedios[23].color, "VERDE");
    fflush(stdin);
    intermedios[23].numero_asientos = 5;
    intermedios[23].tarifa = 2940;
    intermedios[23].disponible = 0;

    strcpy(intermedios[24].placas, "532CMX");
    fflush(stdin);
    strcpy(intermedios[24]._tipo_auto, "INTERMEDIO");
    fflush(stdin);
    strcpy(intermedios[24].kilometraje, "Ilimitado");
    fflush(stdin);
    strcpy(intermedios[24].modelo, "HONDA ACCORD");
    fflush(stdin);
    strcpy(intermedios[24].color, "PLATA");
    fflush(stdin);
    intermedios[24].numero_asientos = 5;
    intermedios[24].tarifa = 2634;
    intermedios[24].disponible = 0;

    strcpy(intermedios[25].placas, "932MNZ");
    fflush(stdin);
    strcpy(intermedios[25]._tipo_auto, "INTERMEDIO");
    fflush(stdin);
    strcpy(intermedios[25].kilometraje, "Ilimitado");
    fflush(stdin);
    strcpy(intermedios[25].modelo, "VOLKSWAGEN LAVIDA");
    fflush(stdin);
    strcpy(intermedios[25].color, "PLATA");
    fflush(stdin);
    intermedios[25].numero_asientos = 5;
    intermedios[25].tarifa = 2627;
    intermedios[25].disponible = 0;

    strcpy(intermedios[26].placas, "723XMC");
    fflush(stdin);
    strcpy(intermedios[26]._tipo_auto, "INTERMEDIO");
    fflush(stdin);
    strcpy(intermedios[26].kilometraje, "Ilimitado");
    fflush(stdin);
    strcpy(intermedios[26].modelo, "NISSAN QASHQAI");
    fflush(stdin);
    strcpy(intermedios[26].color, "NARANJA");
    fflush(stdin);
    intermedios[26].numero_asientos = 5;
    intermedios[26].tarifa = 2827;
    intermedios[26].disponible = 0;

    strcpy(intermedios[27].placas, "623NSF");
    fflush(stdin);
    strcpy(intermedios[27]._tipo_auto, "INTERMEDIO");
    fflush(stdin);
    strcpy(intermedios[27].kilometraje, "Ilimitado");
    fflush(stdin);
    strcpy(intermedios[27].modelo, "KIA SPORTAGE");
    fflush(stdin);
    strcpy(intermedios[27].color, "NARANJA");
    fflush(stdin);
    intermedios[27].numero_asientos = 5;
    intermedios[27].tarifa = 2782;
    intermedios[27].disponible = 0;

    strcpy(intermedios[28].placas, "497GTW");
    fflush(stdin);
    strcpy(intermedios[28]._tipo_auto, "INTERMEDIO");
    fflush(stdin);
    strcpy(intermedios[28].kilometraje, "Ilimitado");
    fflush(stdin);
    strcpy(intermedios[28].modelo, "VOLKSWAGEN POINTER");
    fflush(stdin);
    strcpy(intermedios[28].color, "VINO");
    fflush(stdin);
    intermedios[28].numero_asientos = 5;
    intermedios[28].tarifa = 2000;
    intermedios[28].disponible = 0;

    strcpy(intermedios[29].placas, "643NSK");
    fflush(stdin);
    strcpy(intermedios[29]._tipo_auto, "INTERMEDIO");
    fflush(stdin);
    strcpy(intermedios[29].kilometraje, "Ilimitado");
    fflush(stdin);
    strcpy(intermedios[29].modelo, "NISSAN SYLPHY");
    fflush(stdin);
    strcpy(intermedios[29].color, "NEGRO");
    fflush(stdin);
    intermedios[29].numero_asientos = 5;
    intermedios[29].tarifa = 2549;
    intermedios[29].disponible = 0;

    strcpy(intermedios[30].placas, "749THD");
    fflush(stdin);
    strcpy(intermedios[30]._tipo_auto, "INTERMEDIO");
    fflush(stdin);
    strcpy(intermedios[30].kilometraje, "Ilimitado");
    fflush(stdin);
    strcpy(intermedios[30].modelo, "NISSAN X-TRAIL");
    fflush(stdin);
    strcpy(intermedios[30].color, "LILA");
    fflush(stdin);
    intermedios[30].numero_asientos = 5;
    intermedios[30].tarifa = 2659;
    intermedios[30].disponible = 0;

    strcpy(intermedios[31].placas, "507FGT");
    fflush(stdin);
    strcpy(intermedios[31]._tipo_auto, "INTERMEDIO");
    fflush(stdin);
    strcpy(intermedios[31].kilometraje, "Ilimitado");
    fflush(stdin);
    strcpy(intermedios[31].modelo, "JEEP COMPASS");
    fflush(stdin);
    strcpy(intermedios[31].color, "BLANCO");
    fflush(stdin);
    intermedios[31].numero_asientos = 5;
    intermedios[31].tarifa = 2656;
    intermedios[31].disponible = 0;

    strcpy(intermedios[32].placas, "289LSF");
    fflush(stdin);
    strcpy(intermedios[32]._tipo_auto, "INTERMEDIO");
    fflush(stdin);
    strcpy(intermedios[32].kilometraje, "Ilimitado");
    fflush(stdin);
    strcpy(intermedios[32].modelo, "TOYOTA YARIS");
    fflush(stdin);
    strcpy(intermedios[32].color, "NEGRO");
    fflush(stdin);
    intermedios[32].numero_asientos = 5;
    intermedios[32].tarifa = 2895;
    intermedios[32].disponible = 0;

    strcpy(intermedios[33].placas, "574LUK");
    fflush(stdin);
    strcpy(intermedios[33]._tipo_auto, "INTERMEDIO");
    fflush(stdin);
    strcpy(intermedios[33].kilometraje, "Ilimitado");
    fflush(stdin);
    strcpy(intermedios[33].modelo, "RENAULT CLIO");
    fflush(stdin);
    strcpy(intermedios[33].color, "AZUL MARINO");
    fflush(stdin);
    intermedios[33].numero_asientos = 5;
    intermedios[33].tarifa = 2785;
    intermedios[33].disponible = 0;

    strcpy(intermedios[34].placas, "353JGD");
    fflush(stdin);
    strcpy(intermedios[34]._tipo_auto, "INTERMEDIO");
    fflush(stdin);
    strcpy(intermedios[34].kilometraje, "Ilimitado");
    fflush(stdin);
    strcpy(intermedios[34].modelo, "BAOJUN 510");
    fflush(stdin);
    strcpy(intermedios[34].color, "ROSA");
    fflush(stdin);
    intermedios[34].numero_asientos = 5;
    intermedios[34].tarifa = 2895;
    intermedios[34].disponible = 0;

    strcpy(intermedios[35].placas, "748UJG");
    fflush(stdin);
    strcpy(intermedios[35]._tipo_auto, "INTERMEDIO");
    fflush(stdin);
    strcpy(intermedios[35].kilometraje, "Ilimitado");
    fflush(stdin);
    strcpy(intermedios[35].modelo, "FORD FIESTA");
    fflush(stdin);
    strcpy(intermedios[35].color, "MORADO");
    fflush(stdin);
    intermedios[35].numero_asientos = 5;
    intermedios[35].tarifa = 2980;
    intermedios[35].disponible = 0;

    strcpy(intermedios[36].placas, "613UOF");
    fflush(stdin);
    strcpy(intermedios[36]._tipo_auto, "INTERMEDIO");
    fflush(stdin);
    strcpy(intermedios[36].kilometraje, "Ilimitado");
    fflush(stdin);
    strcpy(intermedios[36].modelo, "TOYOTA HIGHLANDER");
    fflush(stdin);
    strcpy(intermedios[36].color, "CAFE");
    fflush(stdin);
    intermedios[36].numero_asientos = 5;
    intermedios[36].tarifa = 2769;
    intermedios[36].disponible = 0;

    strcpy(intermedios[37].placas, "111HFY");
    fflush(stdin);
    strcpy(intermedios[37]._tipo_auto, "INTERMEDIO");
    fflush(stdin);
    strcpy(intermedios[37].kilometraje, "Ilimitado");
    fflush(stdin);
    strcpy(intermedios[37].modelo, "MAZDA3");
    fflush(stdin);
    strcpy(intermedios[37].color, "ROJO");
    fflush(stdin);
    intermedios[37].numero_asientos = 5;
    intermedios[37].tarifa = 2999;
    intermedios[37].disponible = 0;

    strcpy(intermedios[38].placas, "230HJK");
    fflush(stdin);
    strcpy(intermedios[38]._tipo_auto, "INTERMEDIO");
    fflush(stdin);
    strcpy(intermedios[38].kilometraje, "Ilimitado");
    fflush(stdin);
    strcpy(intermedios[38].modelo, "FORD ESCAPE");
    fflush(stdin);
    strcpy(intermedios[38].color, "VINO");
    fflush(stdin);
    intermedios[38].numero_asientos = 5;
    intermedios[38].tarifa = 2543;
    intermedios[38].disponible = 0;

    strcpy(intermedios[39].placas, "572GTW");
    fflush(stdin);
    strcpy(intermedios[39]._tipo_auto, "INTERMEDIO");
    fflush(stdin);
    strcpy(intermedios[39].kilometraje, "Ilimitado");
    fflush(stdin);
    strcpy(intermedios[39].modelo, "TOYOTA C-HR");
    fflush(stdin);
    strcpy(intermedios[39].color, "GRIS OSCURO");
    fflush(stdin);
    intermedios[39].numero_asientos = 5;
    intermedios[39].tarifa = 2000;
    intermedios[39].disponible = 0;
}

void fillsCarInfoLujo(Autos lujo[TAM_CARS])
{
    strcpy(lujo[0].placas, "354DBC");
    fflush(stdin);
    strcpy(lujo[0]._tipo_auto, "LUJO");
    fflush(stdin);
    strcpy(lujo[0].kilometraje, "Ilimitado");
    fflush(stdin);
    strcpy(lujo[0].modelo, "VW PASSAT");
    fflush(stdin);
    strcpy(lujo[0].color, "VERDE");
    fflush(stdin);
    lujo[0].numero_asientos = 5;
    lujo[0].tarifa = 3327.33;
    lujo[0].disponible = 0;

    strcpy(lujo[1].placas, "958CGE");
    fflush(stdin);
    strcpy(lujo[1]._tipo_auto, "LUJO");
    fflush(stdin);
    strcpy(lujo[1].kilometraje, "Ilimitado");
    fflush(stdin);
    strcpy(lujo[1].modelo, "CHEVROLET SUBURBAN");
    fflush(stdin);
    strcpy(lujo[1].color, "PLATA");
    fflush(stdin);
    lujo[1].numero_asientos = 8;
    fflush(stdin);
    lujo[1].tarifa = 3383.66;
    lujo[1].disponible = 0;

    strcpy(lujo[2].placas, "682HFG");
    fflush(stdin);
    strcpy(lujo[2]._tipo_auto, "LUJO");
    fflush(stdin);
    strcpy(lujo[2].kilometraje, "Ilimitado");
    fflush(stdin);
    strcpy(lujo[2].modelo, "CHRYSLER 200");
    fflush(stdin);
    strcpy(lujo[2].color, "GRIS");
    fflush(stdin);
    lujo[2].numero_asientos = 5;
    lujo[2].tarifa = 3527.33;
    lujo[2].disponible = 0;

    strcpy(lujo[3].placas, "999RCD");
    fflush(stdin);
    strcpy(lujo[3]._tipo_auto, "LUJO");
    fflush(stdin);
    strcpy(lujo[3].kilometraje, "Ilimitado");
    fflush(stdin);
    strcpy(lujo[3].modelo, "TOYOTA SIENNA");
    fflush(stdin);
    strcpy(lujo[3].color, "GRIS");
    fflush(stdin);
    lujo[3].numero_asientos = 5;
    lujo[3].tarifa = 3814.33;
    lujo[3].disponible = 0;

    strcpy(lujo[4].placas, "948LED");
    fflush(stdin);
    strcpy(lujo[4]._tipo_auto, "LUJO");
    fflush(stdin);
    strcpy(lujo[4].kilometraje, "Ilimitado");
    fflush(stdin);
    strcpy(lujo[4].modelo, "DODGE GRAND CARAVAN");
    fflush(stdin);
    strcpy(lujo[4].color, "AZUL");
    fflush(stdin);
    lujo[4].numero_asientos = 7;
    lujo[4].tarifa = 5704;
    lujo[4].disponible = 0;

    strcpy(lujo[5].placas, "343JBB");
    fflush(stdin);
    strcpy(lujo[5]._tipo_auto, "LUJO");
    fflush(stdin);
    strcpy(lujo[5].kilometraje, "Ilimitado");
    fflush(stdin);
    strcpy(lujo[5].modelo, "KIA FORTE");
    fflush(stdin);
    strcpy(lujo[5].color, "AZUL");
    fflush(stdin);
    lujo[5].numero_asientos = 5;
    lujo[5].tarifa = 3594.33;
    lujo[5].disponible = 0;

    strcpy(lujo[6].placas, "666GEI");
    fflush(stdin);
    strcpy(lujo[6]._tipo_auto, "LUJO");
    fflush(stdin);
    strcpy(lujo[6].kilometraje, "Ilimitado");
    fflush(stdin);
    strcpy(lujo[6].modelo, "VOLKSWAGEN JETTA");
    fflush(stdin);
    strcpy(lujo[6].color, "PLATA");
    fflush(stdin);
    lujo[6].numero_asientos = 5;
    lujo[6].tarifa = 3490.66;
    lujo[6].disponible = 0;

    strcpy(lujo[7].placas, "400KFK");
    fflush(stdin);
    strcpy(lujo[7]._tipo_auto, "LUJO");
    fflush(stdin);
    strcpy(lujo[7].kilometraje, "Ilimitado");
    fflush(stdin);
    strcpy(lujo[7].modelo, "NISSAN SENTRA");
    fflush(stdin);
    strcpy(lujo[7].color, "NEGRO");
    fflush(stdin);
    lujo[7].numero_asientos = 5;
    lujo[7].tarifa = 3600;
    lujo[7].disponible = 0;

    strcpy(lujo[8].placas, "131VID");
    fflush(stdin);
    strcpy(lujo[8]._tipo_auto, "LUJO");
    fflush(stdin);
    strcpy(lujo[8].kilometraje, "Ilimitado");
    fflush(stdin);
    strcpy(lujo[8].modelo, "CHEVROLET CAVALIER 1.5");
    fflush(stdin);
    strcpy(lujo[8].color, "CAFE");
    lujo[8].numero_asientos = 5;
    lujo[8].tarifa = 3135;
    lujo[8].disponible = 0;

    strcpy(lujo[9].placas, "123TES");
    fflush(stdin);
    strcpy(lujo[9]._tipo_auto, "LUJO");
    fflush(stdin);
    strcpy(lujo[9].kilometraje, "Ilimitado");
    fflush(stdin);
    strcpy(lujo[9].modelo, "TESLA MODEL S");
    fflush(stdin);
    strcpy(lujo[9].color, "BLACO");
    fflush(stdin);
    lujo[9].numero_asientos = 5;
    lujo[9].tarifa = 3000;
    lujo[9].disponible = 0;

    strcpy(lujo[10].placas, "123ETS");
    fflush(stdin);
    strcpy(lujo[10]._tipo_auto, "LUJO");
    fflush(stdin);
    strcpy(lujo[10].kilometraje, "Ilimitado");
    fflush(stdin);
    strcpy(lujo[10].modelo, "GIULIETTA");
    fflush(stdin);
    strcpy(lujo[10].color, "PRISMARINA");
    fflush(stdin);
    lujo[10].numero_asientos = 2;
    lujo[10].tarifa = 3303;
    lujo[10].disponible = 0;

    strcpy(lujo[11].placas, "EX1T24");
    fflush(stdin);
    strcpy(lujo[11]._tipo_auto, "LUJO");
    fflush(stdin);
    strcpy(lujo[11].kilometraje, "Ilimitado");
    fflush(stdin);
    strcpy(lujo[11].modelo, "GIULIA");
    fflush(stdin);
    strcpy(lujo[11].color, "APRICOT");
    fflush(stdin);
    lujo[11].numero_asientos = 3;
    lujo[11].tarifa = 3120;
    lujo[11].disponible = 0;

    strcpy(lujo[12].placas, "M0N3Y1");
    fflush(stdin);
    strcpy(lujo[12]._tipo_auto, "LUJO");
    fflush(stdin);
    strcpy(lujo[12].kilometraje, "Ilimitado");
    fflush(stdin);
    strcpy(lujo[12].modelo, "STELVIO");
    fflush(stdin);
    strcpy(lujo[12].color, "VERDE AZUL");
    fflush(stdin);
    lujo[12].numero_asientos = 4;
    lujo[12].tarifa = 3510;
    lujo[12].disponible = 0;

    strcpy(lujo[13].placas, "B1LL1S");
    fflush(stdin);
    strcpy(lujo[13]._tipo_auto, "LUJO");
    fflush(stdin);
    strcpy(lujo[13].kilometraje, "Ilimitado");
    fflush(stdin);
    strcpy(lujo[13].modelo, "STELVIO QV");
    fflush(stdin);
    strcpy(lujo[13].color, "CASTAÑO");
    fflush(stdin);
    lujo[13].numero_asientos = 4;
    lujo[13].tarifa = 3707;
    lujo[13].disponible = 0;

    strcpy(lujo[14].placas, "Bl1NG1");
    fflush(stdin);
    strcpy(lujo[14]._tipo_auto, "LUJO");
    fflush(stdin);
    strcpy(lujo[14].kilometraje, "Ilimitado");
    fflush(stdin);
    strcpy(lujo[14].modelo, "GIULIA QV");
    fflush(stdin);
    strcpy(lujo[14].color, "COQUELICOT");
    fflush(stdin);
    lujo[14].numero_asientos = 2;
    lujo[14].tarifa = 3750;
    lujo[14].disponible = 0;

    strcpy(lujo[15].placas, "SP1D3R");
    fflush(stdin);
    strcpy(lujo[15]._tipo_auto, "LUJO");
    fflush(stdin);
    strcpy(lujo[15].kilometraje, "Ilimitado");
    fflush(stdin);
    strcpy(lujo[15].modelo, "SPIDER V8");
    fflush(stdin);
    strcpy(lujo[15].color, "CORDOBAN");
    fflush(stdin);
    lujo[15].numero_asientos = 2;
    lujo[15].tarifa = 3287;
    lujo[15].disponible = 0;

    strcpy(lujo[16].placas, "A391V8");
    fflush(stdin);
    strcpy(lujo[16]._tipo_auto, "LUJO");
    fflush(stdin);
    strcpy(lujo[16].kilometraje, "Ilimitado");
    fflush(stdin);
    strcpy(lujo[16].modelo, "AUDI SPORTBACK");
    fflush(stdin);
    strcpy(lujo[16].color, "LINO");
    fflush(stdin);
    lujo[16].numero_asientos = 4;
    lujo[16].tarifa = 4779;
    lujo[16].disponible = 0;

    strcpy(lujo[17].placas, "G1G3AN");
    fflush(stdin);
    strcpy(lujo[17]._tipo_auto, "LUJO");
    fflush(stdin);
    strcpy(lujo[17].kilometraje, "Ilimitado");
    fflush(stdin);
    strcpy(lujo[17].modelo, "RS GT");
    fflush(stdin);
    strcpy(lujo[17].color, "JUNQUILLO");
    fflush(stdin);
    lujo[17].numero_asientos = 4;
    lujo[17].tarifa = 3807;
    lujo[17].disponible = 0;

    strcpy(lujo[18].placas, "C0SM1C");
    fflush(stdin);
    strcpy(lujo[18]._tipo_auto, "LUJO");
    fflush(stdin);
    strcpy(lujo[18].kilometraje, "Ilimitado");
    fflush(stdin);
    strcpy(lujo[18].modelo, "SEDAN A4");
    fflush(stdin);
    strcpy(lujo[18].color, "CAOBA");
    fflush(stdin);
    lujo[18].numero_asientos = 4;
    lujo[18].tarifa = 3100;
    lujo[18].disponible = 0;

    strcpy(lujo[19].placas, "WEB1WA");
    fflush(stdin);
    strcpy(lujo[19]._tipo_auto, "LUJO");
    fflush(stdin);
    strcpy(lujo[19].kilometraje, "Ilimitado");
    fflush(stdin);
    strcpy(lujo[19].modelo, "SEDAN S6");
    fflush(stdin);
    strcpy(lujo[19].color, "MALVA");
    fflush(stdin);
    lujo[19].numero_asientos = 4;
    lujo[19].tarifa = 3980;
    lujo[19].disponible = 0;

    strcpy(lujo[20].placas, "ACME13");
    fflush(stdin);
    strcpy(lujo[20]._tipo_auto, "LUJO");
    fflush(stdin);
    strcpy(lujo[20].kilometraje, "Ilimitado");
    fflush(stdin);
    strcpy(lujo[20].modelo, "COUPE 2022");
    fflush(stdin);
    strcpy(lujo[20].color, "NACAR");
    fflush(stdin);
    lujo[20].numero_asientos = 2;
    lujo[20].tarifa = 3700;
    lujo[20].disponible = 0;

    strcpy(lujo[21].placas, "N4JARL");
    fflush(stdin);
    strcpy(lujo[21]._tipo_auto, "LUJO");
    fflush(stdin);
    strcpy(lujo[21].kilometraje, "Ilimitado");
    fflush(stdin);
    strcpy(lujo[21].modelo, "COUPE V10");
    fflush(stdin);
    strcpy(lujo[21].color, "AZUL PATENTADO");
    fflush(stdin);
    lujo[21].numero_asientos = 2;
    lujo[21].tarifa = 4100;
    lujo[21].disponible = 0;

    strcpy(lujo[22].placas, "H9SHUS");
    fflush(stdin);
    strcpy(lujo[22]._tipo_auto, "LUJO");
    fflush(stdin);
    strcpy(lujo[22].kilometraje, "Ilimitado");
    fflush(stdin);
    strcpy(lujo[22].modelo, "ENCORE");
    fflush(stdin);
    strcpy(lujo[22].color, "BIGARO");
    fflush(stdin);
    lujo[22].numero_asientos = 4;
    lujo[22].tarifa = 3890;
    lujo[22].disponible = 0;

    strcpy(lujo[23].placas, "XD290D");
    fflush(stdin);
    strcpy(lujo[23]._tipo_auto, "LUJO");
    fflush(stdin);
    strcpy(lujo[23].kilometraje, "Ilimitado");
    fflush(stdin);
    strcpy(lujo[23].modelo, "ENVISION");
    fflush(stdin);
    strcpy(lujo[23].color, "SECUOYA");
    fflush(stdin);
    lujo[23].numero_asientos = 4;
    lujo[23].tarifa = 3800;
    lujo[23].disponible = 0;

    strcpy(lujo[24].placas, "SYS0SM");
    fflush(stdin);
    strcpy(lujo[24]._tipo_auto, "LUJO");
    fflush(stdin);
    strcpy(lujo[24].kilometraje, "Ilimitado");
    fflush(stdin);
    strcpy(lujo[24].modelo, "ENCLAVE");
    fflush(stdin);
    strcpy(lujo[24].color, "VERDE OLIVA");
    fflush(stdin);
    lujo[24].numero_asientos = 4;
    lujo[24].tarifa = 3600;
    lujo[24].disponible = 0;

    strcpy(lujo[25].placas, "P33PSA");
    fflush(stdin);
    strcpy(lujo[25]._tipo_auto, "LUJO");
    fflush(stdin);
    strcpy(lujo[25].kilometraje, "Ilimitado");
    fflush(stdin);
    strcpy(lujo[25].modelo, "VOLKSWAGEN JETTA");
    fflush(stdin);
    strcpy(lujo[25].color, "VERDE MENTA");
    fflush(stdin);
    lujo[25].numero_asientos = 4;
    lujo[25].tarifa = 3400;
    lujo[25].disponible = 0;

    strcpy(lujo[26].placas, "C0CK3T");
    fflush(stdin);
    strcpy(lujo[26]._tipo_auto, "LUJO");
    fflush(stdin);
    strcpy(lujo[26].kilometraje, "Ilimitado");
    fflush(stdin);
    strcpy(lujo[26].modelo, "JAGUAR F TYPE");
    fflush(stdin);
    strcpy(lujo[26].color, "BELGE");
    fflush(stdin);
    lujo[26].numero_asientos = 2;
    lujo[26].tarifa = 3746;
    lujo[26].disponible = 0;

    strcpy(lujo[27].placas, "CA6CGD");
    fflush(stdin);
    strcpy(lujo[27]._tipo_auto, "LUJO");
    fflush(stdin);
    strcpy(lujo[27].kilometraje, "Ilimitado");
    fflush(stdin);
    strcpy(lujo[27].modelo, "RANGE ROVER");
    fflush(stdin);
    strcpy(lujo[27].color, "VERDE OSCURO");
    fflush(stdin);
    lujo[27].numero_asientos = 2;
    lujo[27].tarifa = 3017;
    lujo[27].disponible = 0;

    strcpy(lujo[28].placas, "S68SDN");
    fflush(stdin);
    strcpy(lujo[28]._tipo_auto, "LUJO");
    fflush(stdin);
    strcpy(lujo[28].kilometraje, "Ilimitado");
    fflush(stdin);
    strcpy(lujo[28].modelo, "MACERATI");
    fflush(stdin);
    strcpy(lujo[28].color, "LAVANDA");
    fflush(stdin);
    lujo[28].numero_asientos = 2;
    lujo[28].tarifa = 2530;
    lujo[28].disponible = 0;

    strcpy(lujo[29].placas, "ADG238");
    fflush(stdin);
    strcpy(lujo[29]._tipo_auto, "LUJO");
    fflush(stdin);
    strcpy(lujo[29].kilometraje, "Ilimitado");
    fflush(stdin);
    strcpy(lujo[29].modelo, "GRAN TURISMO");
    fflush(stdin);
    strcpy(lujo[29].color, "SALMON");
    fflush(stdin);
    lujo[29].numero_asientos = 2;
    lujo[29].tarifa = 4200;
    lujo[29].disponible = 0;

    strcpy(lujo[30].placas, "G23SJD");
    fflush(stdin);
    strcpy(lujo[30]._tipo_auto, "LUJO");
    fflush(stdin);
    strcpy(lujo[30].kilometraje, "Ilimitado");
    fflush(stdin);
    strcpy(lujo[30].modelo, "MERCEDEZ CLASE S");
    fflush(stdin);
    strcpy(lujo[30].color, "CARBON");
    fflush(stdin);
    lujo[30].numero_asientos = 4;
    lujo[30].tarifa = 3834;
    lujo[30].disponible = 0;

    strcpy(lujo[31].placas, "2GD32D");
    fflush(stdin);
    strcpy(lujo[31]._tipo_auto, "LUJO");
    fflush(stdin);
    strcpy(lujo[31].kilometraje, "Ilimitado");
    fflush(stdin);
    strcpy(lujo[31].modelo, "PORSCHE BOXTER");
    fflush(stdin);
    strcpy(lujo[31].color, "GRIS");
    fflush(stdin);
    lujo[31].numero_asientos = 2;
    lujo[31].tarifa = 3672;
    lujo[31].disponible = 0;

    strcpy(lujo[32].placas, "27BSSH");
    fflush(stdin);
    strcpy(lujo[32]._tipo_auto, "LUJO");
    fflush(stdin);
    strcpy(lujo[32].kilometraje, "Ilimitado");
    fflush(stdin);
    strcpy(lujo[32].modelo, "TESLA MODELO S");
    fflush(stdin);
    strcpy(lujo[32].color, "MARRON");
    fflush(stdin);
    lujo[32].numero_asientos = 2;
    lujo[32].tarifa = 3989;
    lujo[32].disponible = 0;

    strcpy(lujo[33].placas, "DNF332");
    fflush(stdin);
    strcpy(lujo[33]._tipo_auto, "LUJO");
    fflush(stdin);
    strcpy(lujo[33].kilometraje, "Ilimitado");
    fflush(stdin);
    strcpy(lujo[33].modelo, "HONDA CIVIC");
    fflush(stdin);
    strcpy(lujo[33].color, "TURQUESA");
    fflush(stdin);
    lujo[33].numero_asientos = 4;
    lujo[33].tarifa = 4310;
    lujo[33].disponible = 0;

    strcpy(lujo[34].placas, "C0CK2T");
    fflush(stdin);
    strcpy(lujo[34]._tipo_auto, "LUJO");
    fflush(stdin);
    strcpy(lujo[34].kilometraje, "Ilimitado");
    fflush(stdin);
    strcpy(lujo[34].modelo, "MACERATI MC");
    fflush(stdin);
    strcpy(lujo[34].color, "LILA");
    fflush(stdin);
    lujo[34].numero_asientos = 2;
    lujo[34].tarifa = 3356;
    lujo[34].disponible = 0;

    strcpy(lujo[35].placas, "DAD913");
    fflush(stdin);
    strcpy(lujo[35]._tipo_auto, "LUJO");
    fflush(stdin);
    strcpy(lujo[35].kilometraje, "Ilimitado");
    fflush(stdin);
    strcpy(lujo[35].modelo, "GOLF R");
    fflush(stdin);
    strcpy(lujo[35].color, "AMARILLO PALIDO");
    fflush(stdin);
    lujo[35].numero_asientos = 3;
    lujo[35].tarifa = 3124;
    lujo[35].disponible = 0;

    strcpy(lujo[36].placas, "M4L1K2");
    fflush(stdin);
    strcpy(lujo[36]._tipo_auto, "LUJO");
    fflush(stdin);
    strcpy(lujo[36].kilometraje, "Ilimitado");
    fflush(stdin);
    strcpy(lujo[36].modelo, "BENTLEY GT");
    fflush(stdin);
    strcpy(lujo[36].color, "ROJIZO");
    fflush(stdin);
    lujo[36].numero_asientos = 3;
    lujo[36].tarifa = 3634;
    lujo[36].disponible = 0;

    strcpy(lujo[37].placas, "APOL1C");
    fflush(stdin);
    strcpy(lujo[37]._tipo_auto, "LUJO");
    fflush(stdin);
    strcpy(lujo[37].kilometraje, "Ilimitado");
    fflush(stdin);
    strcpy(lujo[37].modelo, "RANGE ROVER");
    fflush(stdin);
    strcpy(lujo[37].color, "CIAN");
    fflush(stdin);
    lujo[37].numero_asientos = 3;
    lujo[37].tarifa = 3237;
    lujo[37].disponible = 0;

    strcpy(lujo[38].placas, "LAP2ZD");
    fflush(stdin);
    strcpy(lujo[38]._tipo_auto, "LUJO");
    fflush(stdin);
    strcpy(lujo[38].kilometraje, "Ilimitado");
    fflush(stdin);
    strcpy(lujo[38].modelo, "ROVER VOGUE");
    fflush(stdin);
    strcpy(lujo[38].color, "CARBON");
    fflush(stdin);
    lujo[38].numero_asientos = 3;
    lujo[38].tarifa = 3803;
    lujo[38].disponible = 0;

    strcpy(lujo[39].placas, "EP1CUR");
    fflush(stdin);
    strcpy(lujo[39]._tipo_auto, "LUJO");
    fflush(stdin);
    strcpy(lujo[39].kilometraje, "Ilimitado");
    fflush(stdin);
    strcpy(lujo[39].modelo, "LAMBORGHINI HURACAN");
    fflush(stdin);
    strcpy(lujo[39].color, "CARBON");
    fflush(stdin);
    lujo[39].numero_asientos = 2;
    lujo[39].tarifa = 30000;
    lujo[39].disponible = 0;
}

void imprimirCochesBasicos(Autos basicos[TAM_CARS])
{

    for (int i = 0; i < TAM_CARS; i++)
    {

        if (basicos[i].disponible == 0)
        {
            printf("%i.- Modelo:      %s\n", i + 1, basicos[i].modelo);
            printf("    Color:       %s\n", basicos[i].color);
            printf("    Placas:      %s\n", basicos[i].placas);
            printf("    Kilometraje: %s\n", basicos[i].kilometraje);
            printf("    Tipo:        %s\n", basicos[i]._tipo_auto);
            printf("    Asientos:    %d\n", basicos[i].numero_asientos);
            printf("    Tarifa:      %.2f\n", basicos[i].tarifa);
            printf("\n\n");
        }
    }
}

void imprimirCochesIntermedios(Autos intermedios[TAM_CARS])
{

    for (int i = 0; i < TAM_CARS; i++)
    {
        if (intermedios[i].disponible == 0)
        {
            printf("%i.- Modelo:      %s\n", i + 1, intermedios[i].modelo);
            printf("    Color:       %s\n", intermedios[i].color);
            printf("    Placas:      %s\n", intermedios[i].placas);
            fflush(stdin);
            printf("    Kilometraje: %s\n", intermedios[i].kilometraje);
            printf("    Tipo:        %s\n", intermedios[i]._tipo_auto);
            fflush(stdin);
            printf("    Asientos:    %d\n", intermedios[i].numero_asientos);
            printf("    Tarifa:      %.2f\n", intermedios[i].tarifa);
            printf("\n\n");
        }
    }
}

void imprimirCochesLujos(Autos lujo[TAM_CARS])
{

    for (int i = 0; i < TAM_CARS; i++)
    {
        if (lujo[i].disponible == 0)
        {
            printf("%i.- Modelo:      %s\n", i + 1, lujo[i].modelo);
            printf("    Color:       %s\n", lujo[i].color);
            printf("    Placas:      %s\n", lujo[i].placas);
            printf("    Kilometraje: %s\n", lujo[i].kilometraje);
            printf("    Tipo:        %s\n", lujo[i]._tipo_auto);
            printf("    Asientos:    %d\n", lujo[i].numero_asientos);
            fflush(stdin);
            printf("    Tarifa:      %.2f\n", lujo[i].tarifa);
            printf("\n\n");
        }
    }
}

void Insertar(Lista *lista, int v /*Días*/, int e /*Posicion*/, Autos car[] /*Arreglo de autos*/, char nom[] /*Nombre*/, int *rentas, int *renta_ticket)
{

    pNodo nuevo, actual;

    (*rentas) = (*rentas) + 1;
    (*renta_ticket) = (*renta_ticket) + 1;
    nuevo = (pNodo)malloc(sizeof(tipoNodo));
    nuevo->valor = v;
    strcpy(nuevo->modelo, car[e - 1].modelo);
    strcpy(nuevo->placas, car[e - 1].placas);
    strcpy(nuevo->nombre, nom);
    nuevo->costo_final = (v * car[e - 1].tarifa);
    strcpy(nuevo->tipo, car[e - 1]._tipo_auto);
    fflush(stdin);
    car[e - 1].disponible = 1;

    /* Colocamos actual en la primera posición de la lista */
    actual = *lista;
    if (actual)
        while (actual->anterior)
            actual = actual->anterior;
    /* Si la lista está vacía o el primer miembro es mayor que el nuevo */
    if (!actual)
    {
        /* Añadimos la lista a continuación del nuevo nodo */
        nuevo->ticket = (*renta_ticket);
        nuevo->siguiente = actual;
        nuevo->anterior = NULL;
        if (actual)
            actual->anterior = nuevo;
        if (!*lista)
            *lista = nuevo;
    }
    else
    {
        /* Avanzamos hasta el último elemento o hasta que el siguiente tenga
           un valor mayor que v */
        while (actual->siguiente)
            actual = actual->siguiente;
        /* Insertamos el nuevo nodo después del nodo anterior */
        nuevo->ticket = (*renta_ticket);
        nuevo->siguiente = actual->siguiente;
        actual->siguiente = nuevo;
        nuevo->anterior = actual;
        if (nuevo->siguiente)
            nuevo->siguiente->anterior = nuevo;
    }
    // Solo imprime los datos de quien alquila
    puts("\tSe ha realizado la renta correctamente.\n");
    printf("TICKET: %d\n", nuevo->ticket);
    printf("NOMBRE: %s\n", nuevo->nombre);
    printf("DIAS DE RENTA: %d\n", nuevo->valor);
    printf("TARIFA: %.2f\n", nuevo->costo_final);
    printf("MODELO: %s\n", nuevo->modelo);
    printf("PLACAS: %s\n", nuevo->placas);
}

void borrar(Lista *lista, pNodo buscado, int *rentas)
{
    if (buscado != NULL)
    {
        (*rentas) = (*rentas) - 1;
        if (buscado == *lista)
        {
            if (buscado->anterior)
            {
                *lista = buscado->anterior;
            }
            else
            {
                *lista = buscado->siguiente;
            }
        }
        if (buscado->anterior) /* no es el primer elemento */
            buscado->anterior->siguiente = buscado->siguiente;
        if (buscado->siguiente) /* no es el último nodo */
            buscado->siguiente->anterior = buscado->anterior;
        free(buscado);
        return;
    }
    else
    {
        printf("\nEl valor no pudo ser borrado\n");
        return;
    }
}

void MostrarLista(Lista lista, int orden)
{
    pNodo nodo = lista;

    if (!lista)
    {
        printf("Lista vacia\n");
        return;
    }
    nodo = lista;
    if (orden == ANTIGUO)
    {
        while (nodo->anterior)
            nodo = nodo->anterior;
        printf("\nOrden del primero al ultimo: \n");
        while (nodo)
        {
            printf("\n\nTicket: %d\nNombre: %s\nModelo: %s\nTipo:   %s\nPlacas: %s\nCosto:  %.2f", nodo->ticket, nodo->nombre, nodo->modelo, nodo->tipo, nodo->placas, nodo->costo_final);
            nodo = nodo->siguiente;
        }
    }
    else
    {
        while (nodo->siguiente)
            nodo = nodo->siguiente;
        printf("Orden del primero al ultimo: \n");
        while (nodo)
        {
            printf("\n\nTicket: %d\nNombre: %s\nModelo: %s\nTipo:   %s\nPlacas: %s\nCosto:  %.2f", nodo->ticket, nodo->nombre, nodo->modelo, nodo->tipo, nodo->placas, nodo->costo_final);
            nodo = nodo->siguiente;
        }
    }

    printf("\n");
}

int _verificar_dispo(Autos basicos[TAM_CARS])
{
    int cantidad = 0;

    for (int i = 0; i < TAM_CARS; i++)
    {
        if (basicos[i].disponible == 1) // no disponible
            cantidad++;
    }

    return cantidad;
}

void _menu_autos(Autos x[TAM_CARS], int carro, Lista *lista, int *rentas, int *renta_ticket)
{
    char nombre[TAM_NOMBRE];
    int dias;

    if (carro <= TAM_CARS && carro > 0)
    {
        if (x[carro - 1].disponible == 0)
        {
            printf("Digita los dias de uso: ");
            printf("-> ");
            do
            {
                scanf("%d", &dias);
                fflush(stdin);

                if (dias <= 0)
                {
                    printf("\nDIGITA UN DIA VALIDO");
                }
            } while (dias <= 0);

            printf("Escribe tu nombre: ");
            printf("-> ");
            scanf("%s", nombre);
            fflush(stdin);
            SYSCLEAR
            Insertar(&*lista, dias, carro, x, nombre, rentas, renta_ticket);
            // MostrarLista(*lista,ANTIGUO);
        }
        else
        {
            SYSCLEAR
            puts("\nEl carro elegido no se muestra en la lista porque no esta  disponible.\n");
        }
    }
    else
    {
        printf("\nEl numero de carro no existe\n");
    }
}

// BUSCAR NODO PARA EL TICKET
void buscarNodo(Lista lista)
{
    SYSCLEAR
    pNodo nodo = lista;
    int nodoBuscado = 0, encontrado = 0;
    printf(" INGRESE SU TICKET: ");
    scanf("%d", &nodoBuscado);

    if (lista != NULL)
    {
        while (nodo->anterior)
            nodo = nodo->anterior;
        while (nodo && encontrado != 1)
        {
            if (nodo->ticket == nodoBuscado)
            {
                printf("\t\nVERIFICACION:");
                printf("\n\nTicket: %d\nNombre: %s\nModelo: %s\nTipo: %s\nPlacas: %s\nDias Rentados: %d\nCosto:  %.2f\n", nodo->ticket, nodo->nombre, nodo->modelo, nodo->tipo, nodo->placas, nodo->valor, nodo->costo_final);
                encontrado = 1;
            }

            nodo = nodo->siguiente;
        }
        if (encontrado == 0)
        {
            printf("\n Ticket no Encontrado\n\n");
        }
    }
    else
    {
        printf("\n No se ha rentado ningun carro\n\n");
    }
}

pNodo binarysearch(Lista lista, int ticket_buscado, pNodo ini, pNodo fin)
{
    pNodo med = ini, aux = ini;
    int indice_medio, rep = 0, valores = 1;

    // CASOS BASES
    if (ini->ticket == ticket_buscado)
        return ini;
    if (fin->ticket == ticket_buscado)
        return fin;

    while (aux != fin)
    {
        valores++;
        aux = aux->siguiente;
    }

    // hasta aquí los apuntadores estan en los extremos
    // if (ini->ticket == fin->ticket) return ini;

    indice_medio = floor(valores / 2);

    while (rep < indice_medio)
    {
        rep++;
        med = med->siguiente;
        if (med->ticket == fin->ticket)
        {
            printf("\nEl numero de ticket no existe\n");
            return NULL;
        }
    }

    if (ticket_buscado == med->ticket)
    {
        return med;
    }

    if (ticket_buscado < med->ticket)
    {
        fin = med;
        // Entonces está hacia la izquierda
    }
    else
    {
        // Está hacia la derecha
        ini = med;
    }

    return binarysearch(lista, ticket_buscado, ini, fin);
}

void modificar_ticket(pNodo buscado)
{
    int dias;
    if (buscado != NULL)
    {
        printf("\tTICKET SIN MODIFICAR:\n");
        printf("\n\nTicket: %d\nNombre: %s\nModelo: %s\nTipo: %s\nPlacas: %s\nDias Rentados: %d\nCosto:  %.2f\n", buscado->ticket, buscado->nombre, buscado->modelo, buscado->tipo, buscado->placas, buscado->valor, buscado->costo_final);

        puts("\nDigita los dias a modificar: \n");
        printf("-> ");
        scanf("%d", &dias);

        buscado->costo_final = ((buscado->costo_final / buscado->valor)) * dias;
        buscado->valor = dias;

        printf("\tTICKET MODIFICADO:\n");
        printf("\n\nTicket: %d\nNombre: %s\nModelo: %s\nTipo: %s\nPlacas: %s\nDias Rentados: %d\nCosto:  %.2f\n", buscado->ticket, buscado->nombre, buscado->modelo, buscado->tipo, buscado->placas, buscado->valor, buscado->costo_final);
    }
}

void ganancia_total(Lista lista, long double *total)
{
    (*total) = 0;
    pNodo check = lista;
    if (check != NULL)
    {
        while (check != NULL)
        {
            *total += check->costo_final;
            check = check->siguiente;
        }
    }
}

void verificar(Lista lista, int rentas, int renta_ticket)
{
    pNodo ini, fin, buscado;
    int nodoBuscado;

    printf("INGRESA EL TICKET QUE DESEAS ENCONTRAR");
    printf("\n->");
    scanf("%d", &nodoBuscado);

    if (rentas > 0 && renta_ticket >= nodoBuscado)
    {
        if (rentas == 1)
        {
            buscado = lista;
            if (buscado->ticket != nodoBuscado)
            {
                printf("TICKET NO ENCONTRADO\n");
            }
            else
            {
                printf("\tVERIFICAR:\n");
                printf("\n\nTicket: %d\nNombre: %s\nModelo: %s\nTipo: %s\nPlacas: %s\nDias Rentados: %d\nCosto:  %.2f\n", buscado->ticket, buscado->nombre, buscado->modelo, buscado->tipo, buscado->placas, buscado->valor, buscado->costo_final);
            }
        }
        else
        {
            ini = lista, fin = lista;
            while (fin->siguiente)
                fin = fin->siguiente;
            buscado = binarysearch(lista, nodoBuscado, ini, fin);

            if (buscado != NULL)
            {
                printf("\tVERIFICACION DE RENTA:\n");
                printf("\n\nTicket: %d\nNombre: %s\nModelo: %s\nTipo: %s\nPlacas: %s\nDias Rentados: %d\nCosto:  %.2f\n", buscado->ticket, buscado->nombre, buscado->modelo, buscado->tipo, buscado->placas, buscado->valor, buscado->costo_final);
            }
        }
    }
    else
    {
        printf("\n EL TICKET QUE BUSCAS NO EXISTE\n");
    }
}