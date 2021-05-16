#pragma once

int NWD(int lhs, int rhs) {
    // TODO: Implement me :)

	if(lhs<0)
		lhs = -lhs;
	if(rhs<0)
		rhs = -rhs;

	int tmp {};
	while(rhs){
		tmp = lhs % rhs;
		lhs = rhs;
		rhs = tmp;
	}
	return lhs;
}
    
int NWW(int lhs, int rhs) {
    // TODO: Implement me :)

	int nwd = NWD(lhs,rhs);
	if(lhs<0)
		lhs = -lhs;
	if(rhs<0)
		rhs = -rhs;

	if(nwd==0)
		return 0;
	else
    		return lhs*rhs/nwd;
}
