#pragma once

int NWD(int lhs, int rhs) {
    // TODO: Implement me :)
    int tmp;
    lhs = abs(lhs);
    rhs = abs(rhs);
    while (rhs != 0){
    	tmp = rhs;
    	rhs = lhs % rhs;
    	lhs = tmp;
    }
    return lhs;
}

int NWW(int lhs, int rhs) {
    // TODO: Implement me :)
    if (lhs ==  0 || rhs == 0) {
    	return 0;
    	}
    lhs = abs(lhs);
    rhs = abs(rhs);
    return (lhs * rhs)/ NWD(lhs,rhs);
}
