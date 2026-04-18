#include "leap.h"

bool leap_year(int year){
    return (year%400==0)?true:(year%100==0)?false:(year%4==0)?true:false;
}
