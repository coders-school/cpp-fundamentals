#pragma once

int fibonacci_iterative(int sequence) {
    int wyn = 0;
    int mem_org = 0;
    int mem_add = 1;

    for(int i = sequence; i > 0; i--)
    {
        mem_org = wyn;
        wyn = mem_org + mem_add;
        mem_add = mem_org;
    }

    return wyn;
}

int fibonacci_recursive(int sequence) {

    if(sequence == 1 || sequence == 2)
    {
        return 1;
    }
    else
        return fibonacci_recursive(sequence-1)+ fibonacci_recursive(sequence-2);
}
