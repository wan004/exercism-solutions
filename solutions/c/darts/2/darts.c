#include "darts.h"
#include <math.h>
#include <stdint.h>



uint8_t score(coordinate_t position){
    double dist = hypot(position.x, position.y);
    
    if(dist<=1.0){
        return 10;
    } else if (dist<=5.0){
        return 5;
    } else if(dist <= 10.0){
        return 1;
    } else {
        return 0;
    }
}
