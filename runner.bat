g++ .\triangle.cpp -c
g++ .\triangle_test.cpp -c
g++ .\triangle.o .\triangle_test.o -lgtest -lgtest_main -lpthread
