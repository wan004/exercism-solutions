#include "queen_attack.h"
#include <stdlib.h>

attack_status_t can_attack(position_t q1, position_t q2) {
    if (q1.row > 7 || q1.column > 7 ||
        q2.row > 7 || q2.column > 7 ||
        (q1.row == q2.row && q1.column == q2.column)) {
        return INVALID_POSITION;
    }

    if (q1.row == q2.row ||
        q1.column == q2.column ||
        abs(q1.row - q2.row) == abs(q1.column - q2.column)) {
        return CAN_ATTACK;
    }

    return CAN_NOT_ATTACK;
}

