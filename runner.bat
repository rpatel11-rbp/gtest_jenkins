g++ .\triangle.cpp -c
g++ .\triangle_test.cpp -c
g++ .\triangle.o .\triangle_test.o -lgtest -lgtest_main -lpthread
.\a.exe --gtest_output="xml:output/report.xml"
