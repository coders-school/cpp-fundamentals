#pragma once
#include <string>

std::string calculate(const std::string& command, int first, int second) {
    if (command == "add") {
+        auto calc_result = std::to_string(first + second);
+        return calc_result;
+    } else if (command == "subtract") {
+        auto calc_result = std::to_string(first - second);
+        return calc_result;
+    } else if (command == "multiply") {
+        auto calc_result = std::to_string(first * second);
+        return calc_result;
+    } else if (command == "divide") {
+        if (second == 0) {
+            return "Division by 0";
+        }
+        auto calc_result = std::to_string(first / second);
+        return calc_result;
+    }
+    return "Invalid data";
}
