#pragma once

int toNonNegative(int number){
	if(number < 0) number = -number;
	return number;
}

int NWD(int lhs, int rhs) {
	int NWD = 1;
	lhs = toNonNegative(lhs);
	rhs = toNonNegative(rhs);

    	int lesser{};
    	int greater{};
    	
    	if(lhs > rhs){
    		greater = lhs;
    		lesser = rhs;
    	}
    	else{
    		greater = rhs;
    		lesser = lhs;
    	}
    	
    	if (lesser == 0 && greater == 0) return 0;
    	if (lesser == 0 && greater > 0) return greater;
    	
    	int rest{};
    	int division = lesser; //initialize with a value of lesser value
    	while(division > 0){
    		rest = lesser%division;
    		if (rest == 0){
    			rest = greater%division;
    			if (rest == 0){
    				NWD = division;
    				break;
    			}	
    		}
    		--division;
    	}	
    
    	return NWD;
}

int NWW(int lhs, int rhs) {
	if (lhs == 0 || rhs == 0) return 0;

	int NWW = 0;
	lhs = toNonNegative(lhs);
	rhs = toNonNegative(rhs);
	
    	int lesser{};
    	int greater{};
    	
    	if(lhs > rhs){
    		greater = lhs;
    		lesser = rhs;
    	}
    	else{
    		greater = rhs;
    		lesser = lhs;
    	}
    	
    	int rest{-1};
    	int multiplier = 1;
    	int tested_value {0};
    	while (rest != 0){
    		tested_value = multiplier * lesser;
    		rest = tested_value % greater;
    		++multiplier;
    	}
    	
    return tested_value;
}
