#pragma once

int NWD(int Num_1, int Num_2){
	Num_1 = abs(Num_1); //Changing to always + value
	Num_2 = abs(Num_2); //Both of them  
	int result = Num_2; //initialisation of
	if ((Num_1 < Num_2) and (Num_1 != 0)){//Setting always in proper position for algorithm
			Num_2 = Num_1;
			Num_1 = result;
			result = Num_2;
	}
	if ((Num_2 == 0) and (Num_1 !=0)){
		result = 0;
		Num_2 = 1;
	} else {
		while(result !=0 ){
			result = Num_1 % Num_2;
			if (result != 0){//Only when is not done
				Num_1 = Num_2;
				Num_2 = result;
			}
		}
	}

	return Num_2;	
}


int NWW(int Num_1, int Num_2){
	
	if (Num_1 != 0) {
		return ((abs(Num_1) * abs(Num_2))/NWD(Num_1, Num_2));
	} else {
		return 0;
	}
}


