# CMake generated Testfile for 
# Source directory: /home/adam/Documents/CodersSchool/3_CppFundamentals/cpp-fundamentals/homework/fibonacci
# Build directory: /home/adam/Documents/CodersSchool/3_CppFundamentals/cpp-fundamentals/homework/fibonacci/build
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(calculate_test "/home/adam/Documents/CodersSchool/3_CppFundamentals/cpp-fundamentals/homework/fibonacci/build/fibonacci-ut")
set_tests_properties(calculate_test PROPERTIES  _BACKTRACE_TRIPLES "/home/adam/Documents/CodersSchool/3_CppFundamentals/cpp-fundamentals/homework/fibonacci/CMakeLists.txt;46;add_test;/home/adam/Documents/CodersSchool/3_CppFundamentals/cpp-fundamentals/homework/fibonacci/CMakeLists.txt;0;")
subdirs("googletest-build")
