#pragma once

int fibonacci_iterative(int sequence) {
    int last_value = 1, second_last_value = 0, output = 1;
    if (sequence > 1){
        for (int i = 0; i <= sequence-2; i++){
            output = last_value + second_last_value;
            second_last_value = last_value;
            last_value = output;
        }
        return output;
    } else if (sequence == 0){
        return 0;
    } else if (sequence == 1){
        return 1;
    } else {
        return -1;
      }
}

int fibonacci_recursive(int sequence) {
    // TODO: Your implementation goes here
    return 0;
}
