mkdir -p build.out
g++ -Wall -fexceptions -std=c++11 -g  -c Address.cpp -o build.out/Address.o
g++ -Wall -fexceptions -std=c++11 -g  -c Company.cpp -o build.out/Company.o
g++ -Wall -fexceptions -std=c++11 -g  -c Designation.cpp -o build.out/Designation.o
g++ -Wall -fexceptions -std=c++11 -g  -c Employee.cpp -o build.out/Employee.o
g++ -Wall -fexceptions -std=c++11 -g  -c EmployeeBase.cpp -o build.out/EmployeeBase.o
g++ -Wall -fexceptions -std=c++11 -g  -c main.cpp -o build.out/main.o
g++ -Wall -fexceptions -std=c++11 -g  -c Manager.cpp -o build.out/Manager.o
g++  -o Assignment2 build.out/Address.o build.out/Company.o build.out/Designation.o build.out/Employee.o build.out/EmployeeBase.o build.out/main.o build.out/Manager.o   
 

