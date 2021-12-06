#pragma once

 using namespace std;


int my_abs(int a){
    if (a >= 0) return a;
     else return a*(-1);
}



int NWD(int lhs, int rhs) {
        int myNWD;
        lhs = my_abs(lhs);
        rhs = my_abs(rhs);


if (lhs == 0 && rhs == 0) {myNWD = lhs; };

 if (lhs == 0){myNWD= rhs;}
    else if (rhs == 0) {myNWD= lhs;};

 if (lhs != 0 && rhs != 0)
    {
        while (lhs != rhs)
        {
            if (rhs > lhs){rhs -= lhs;}
            else
            {lhs -= rhs;}
        }
        myNWD=lhs;
    };
    return myNWD;
}


int NWW(int lhs, int rhs) {
int num;
lhs = my_abs(lhs);
rhs = my_abs(rhs);
   if (NWD(lhs,rhs)!=0){

    num = (lhs*rhs)/NWD(lhs,rhs);
       } else 
       num=0;
       
       return num; 
}
