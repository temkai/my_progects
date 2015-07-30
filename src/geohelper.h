#ifndef GEOHELPER
#define GEOHELPER

#include <math.h>

/*
 * методы класса возвращают длину одного градуса для широты и долготы
 * пока не все входные параметры методов используются
 * это сделано потому, что эти формулы далеки от идеала
 * и нужно заменить их более точными, которые возможно будут использовать обе координаты
 * К примеру, расхождение с результатами, полученными используя Qt, десятки метров
 */

class GeoHelper
{
private:
    static const double longitudeFactor = 111300;
    static const double latitudeFactor = 20004276/180.0;
    static const double PI = 3.14159265;

public:

    static double factorForLongitude(double latitude, double longitude)
    {
        return longitudeFactor*cos(PI/180*latitude);
    }

    static double factorForLatitude(double latitude, double longitude)
    {
        return latitudeFactor;
    }

};

#endif // GEOHELPER

