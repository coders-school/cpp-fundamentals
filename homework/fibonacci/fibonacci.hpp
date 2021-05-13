#pragma once

int fibonacci_iterative(int sequence) {
    int Fn_2{0};
    int Fn_1{1};

    if(sequence==0){
        return 0;
    }else if(sequence==1){
        return 1;
    }else{
        
        for(int i=0;i<sequence;i++)
        {
            Fn_1+=Fn_2;
            Fn_2=Fn_1-Fn_2;           
        }
        return Fn_2;
    }
}

int fibonacci_recursive(int sequence) {
    if(sequence==0){
        return 0;
    }else if(sequence==1){
        return 1;
    }else{
        return fibonacci_recursive(sequence-2)+fibonacci_recursive(sequence-1);
    }
	
   
}
