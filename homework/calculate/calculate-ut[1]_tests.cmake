add_test([=[calculate.ShouldAdd]=]  C:/Users/palat/OneDrive/Pulpit/codersSchool/podstawy/week1/cpp-fundamentals/homework/calculate/calculate-ut.exe [==[--gtest_filter=calculate.ShouldAdd]==] --gtest_also_run_disabled_tests)
set_tests_properties([=[calculate.ShouldAdd]=]  PROPERTIES WORKING_DIRECTORY C:/Users/palat/OneDrive/Pulpit/codersSchool/podstawy/week1/cpp-fundamentals/homework/calculate SKIP_REGULAR_EXPRESSION [==[\[  SKIPPED \]]==])
add_test([=[calculate.ShouldSubtract]=]  C:/Users/palat/OneDrive/Pulpit/codersSchool/podstawy/week1/cpp-fundamentals/homework/calculate/calculate-ut.exe [==[--gtest_filter=calculate.ShouldSubtract]==] --gtest_also_run_disabled_tests)
set_tests_properties([=[calculate.ShouldSubtract]=]  PROPERTIES WORKING_DIRECTORY C:/Users/palat/OneDrive/Pulpit/codersSchool/podstawy/week1/cpp-fundamentals/homework/calculate SKIP_REGULAR_EXPRESSION [==[\[  SKIPPED \]]==])
add_test([=[calculate.ShouldMultiply]=]  C:/Users/palat/OneDrive/Pulpit/codersSchool/podstawy/week1/cpp-fundamentals/homework/calculate/calculate-ut.exe [==[--gtest_filter=calculate.ShouldMultiply]==] --gtest_also_run_disabled_tests)
set_tests_properties([=[calculate.ShouldMultiply]=]  PROPERTIES WORKING_DIRECTORY C:/Users/palat/OneDrive/Pulpit/codersSchool/podstawy/week1/cpp-fundamentals/homework/calculate SKIP_REGULAR_EXPRESSION [==[\[  SKIPPED \]]==])
add_test([=[calculate.ShouldDivide]=]  C:/Users/palat/OneDrive/Pulpit/codersSchool/podstawy/week1/cpp-fundamentals/homework/calculate/calculate-ut.exe [==[--gtest_filter=calculate.ShouldDivide]==] --gtest_also_run_disabled_tests)
set_tests_properties([=[calculate.ShouldDivide]=]  PROPERTIES WORKING_DIRECTORY C:/Users/palat/OneDrive/Pulpit/codersSchool/podstawy/week1/cpp-fundamentals/homework/calculate SKIP_REGULAR_EXPRESSION [==[\[  SKIPPED \]]==])
add_test([=[calculate.ShouldReturnInvalidData]=]  C:/Users/palat/OneDrive/Pulpit/codersSchool/podstawy/week1/cpp-fundamentals/homework/calculate/calculate-ut.exe [==[--gtest_filter=calculate.ShouldReturnInvalidData]==] --gtest_also_run_disabled_tests)
set_tests_properties([=[calculate.ShouldReturnInvalidData]=]  PROPERTIES WORKING_DIRECTORY C:/Users/palat/OneDrive/Pulpit/codersSchool/podstawy/week1/cpp-fundamentals/homework/calculate SKIP_REGULAR_EXPRESSION [==[\[  SKIPPED \]]==])
set(  calculate-ut_TESTS calculate.ShouldAdd calculate.ShouldSubtract calculate.ShouldMultiply calculate.ShouldDivide calculate.ShouldReturnInvalidData)
