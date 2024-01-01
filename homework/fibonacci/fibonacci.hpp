#pragma once

int fibonacci_iterative(int sequence) {
    if (sequence == 0) {
        return 0;
    } else if (sequence == 1) {
        return 1;
    } else {
        int two_numbers_earlier = 0;
        int one_number_earlier = 1;
        int result = 0;
        
        for (int i = 2; i <= sequence; i++) {
            result = one_number_earlier + two_numbers_earlier;
            two_numbers_earlier = one_number_earlier;
            one_number_earlier = result;
        }
        return result;
    }

    return 0;
}

int fibonacci_recursive(int sequence) {
    if (sequence == 0) {
        return 0;
    } else if (sequence == 1) {
        return 1;
    } else {
        return fibonacci_recursive(sequence - 1) + fibonacci_recursive(sequence - 2);
    }
    return 0;
}
