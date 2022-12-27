#pragma once

int NWD(int lhs, int rhs) {
    // TODO: Implement me :)
	
	if(lhs == 0){
		return rhs;}
	if(rhs == 0){
		return lhs;}

	if(lhs < 0){
		lhs = lhs * -1;}
	if(rhs < 0){
		rhs = rhs * -1;}

    while(lhs!=rhs)
       if(lhs>rhs)
           lhs = lhs - rhs;
       else
           rhs = rhs - lhs;
    return lhs;
}

int NWW(int lhs, int rhs) {
    // TODO: Implement me :)
  
{

	int a;
	int b;
	

	if(lhs == 0 && rhs !=0){
                return 0;}
        if(rhs == 0 && lhs !=0){
                return 0;}

     	if(lhs == 0){
                return rhs;}
        if(rhs == 0){
                return lhs;}

        if(lhs < 0){
                lhs = lhs * -1;}
        if(rhs < 0){
                rhs = rhs * -1;}

	a = lhs;
	b = rhs;

    while(lhs!=rhs)
       if(lhs>rhs)
           lhs = lhs - rhs;
       else
           rhs = rhs - lhs;

    return a/lhs*b;
}

}

