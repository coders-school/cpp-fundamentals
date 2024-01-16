#include <iostream>
#include <vector>

std::vector<int> concatenateVector(std::vector<int> a, std::vector<int> b) {
    std::vector<int> vecret;
    int acount, bcount, i;
    acount = a.size();
    bcount = b.size();
    if (acount == bcount) {
        for (i=0; i<acount; i++) {
            vecret.push_back(a[i]);
            vecret.push_back(b[i]);
        }
    }
    else if (acount > bcount) {
        for (i=0; i<bcount; i++) {
            vecret.push_back(a[i]);
            vecret.push_back(b[i]);
        }
        for (i; i<acount; i++)
            vecret.push_back(a[i]);
    }
    else {
        for (i=0; i<acount; i++) {
            vecret.push_back(a[i]);
            vecret.push_back(b[i]);
        }
        for (i; i<bcount; i++)
            vecret.push_back(b[i]);
    } 
    return vecret;
    }

int main() {
    std::vector<int> vec1 {1, 2, 3, 4, 5};
    std::vector<int> vec2 {11, 12, 13, 14, 15};

    auto vec = concatenateVector(vec1, vec2);
    for (const auto& el : vec) {
        std::cout << el << " ";
    }
    return 0;
}
