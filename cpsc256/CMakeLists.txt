cmake_minimum_required(VERSION 3.25)
project(cpsc256)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_C_STANDARD 99)

# Week 1
add_executable(HelloWorld Examples/Week1/HelloWorld/main.c)
add_executable(PrimitiveDataTypes Examples/Week1/PrimitiveDataTypes/main.c)

# Week 2
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR}/Examples/Week2/FileReader)
add_executable(FileReader Examples/Week2/FileReader/main.c)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR}/Examples/Week2/CSVFileReader)
add_executable(CSVFileReader Examples/Week2/CSVFileReader/main.c)

# Week 3
add_executable(Declarations Examples/Week3/Declarations/main.c)
add_executable(FormatSpecifiers Examples/Week3/FormatSpecifiers/main.c)
add_executable(FunctionExample Examples/Week3/FunctionExample/main.c)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR}/Examples/Week3/FileStatistics)
add_executable(FileStatistics Examples/Week3/FileStatistics/main.c Examples/Week3/FileStatistics/mean.c Examples/Week3/FileStatistics/stdev.c)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR}/Examples/Week3/FileStatistics_Headers)
add_executable(FileStatistics_Headers Examples/Week3/FileStatistics_Headers/main.c Examples/Week3/FileStatistics_Headers/mean.c Examples/Week3/FileStatistics_Headers/stdev.c)

# Week 4
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR}/Examples/Week4/BasicPointers)
add_executable(BasicPointers Examples/Week4/BasicPointers/main.c Examples/Week4/BasicPointers/functions.c)
add_executable(VoidPointers Examples/Week4/VoidPointers/main.c)
add_executable(QuickSort Examples/Week4/QuickSort/main.c)
add_executable(LockerProblem Examples/Week4/LockerProblem/main.c)
add_executable(Tristan Examples/Week4/Tristan/main.c)

# Week 5
add_executable(Restaurant_C_Example Examples/Week5/Restaurant_C_Example/main.c)
add_executable(PointerCar Examples/Week5/PointerCar/main.c Examples/Week5/PointerCar/PointerCar.c)
add_executable(SimpleCar Examples/Week5/SimpleCar/main.c Examples/Week5/SimpleCar/SimpleCar.c)
add_executable(SimpleCarOneFile Examples/Week5/SimpleCarOneFile/main.c)
add_executable(CoinFlip Examples/Week5/CoinFlip/main.c Examples/Week5/CoinFlip/Coin.c)

# Midterm 2 Practice
add_executable(q1a Examples/Midterm2_Practice/q1a.c)
add_executable(q1b Examples/Midterm2_Practice/q1b.c)
add_executable(q3a Examples/Midterm2_Practice/q3a.c)
add_executable(q3b Examples/Midterm2_Practice/q3b.c)

# Midterm 2 Solutions
add_executable(q1a_solution Examples/Midterm2_Solutions/q1a.c)
add_executable(q1b_solution Examples/Midterm2_Solutions/q1b.c)
add_executable(q3a_solution Examples/Midterm2_Solutions/q3a.c)
add_executable(q3b_solution Examples/Midterm2_Solutions/q3b.c)
add_executable(factorial_solution Examples/Midterm2_Solutions/factorial.c)

# Week 6
add_executable(HelloWorldCPP Examples/Week6/HelloWorldCPP/main.cpp)
add_executable(BasicVectorCPP Examples/Week6/BasicVectorCPP/main.cpp)
add_executable(FunctionOverloading Examples/Week6/FunctionOverloading/main.cpp)

# Week 7
add_executable(PassBy Examples/Week7/PassBy/main.cpp)
add_executable(BasicObjects Examples/Week7/BasicObjects/main.cpp Examples/Week7/BasicObjects/Restaurant.cpp)
add_executable(MultipleClasses Examples/Week7/MultipleClasses/main.cpp)

# Week 8
add_executable(PointersCPP Examples/Week8/PointersCPP/main.cpp)
add_executable(BasicObjectsPointers Examples/Week8/BasicObjectsPointers/main.cpp Examples/Week8/BasicObjectsPointers/Restaurant.cpp)

# Week 9
add_executable(ArtistAndArtwork Examples/Week9/ArtistAndArtwork/main.cpp Examples/Week9/ArtistAndArtwork/Artist.cpp Examples/Week9/ArtistAndArtwork/Artwork.cpp)
add_executable(CopyConstructorExample Examples/Week9/CopyConstructorExample/main.cpp)

# Week 10
add_executable(FunctionTemplates Examples/Week10/FunctionTemplates/main.cpp)
add_executable(OperatorOverloading Examples/Week10/OperatorOverloading/main.cpp Examples/Week10/OperatorOverloading/TimeHrMn.cpp)
add_executable(InheritancePolymorphism Examples/Week10/InheritancePolymorphism/main.cpp)

# Week 11
add_executable(BasicLinkedList Examples/Week11/BasicLinkedList/main.cpp Examples/Week11/BasicLinkedList/IntNode.cpp)
add_executable(LinkListDestructor Examples/Week11/LinkListDestructor/main.cpp Examples/Week11/LinkListDestructor/IntNode.cpp Examples/Week11/LinkListDestructor/LinkedList.cpp)
add_executable(BookLibrary Examples/Week11/BookLibrary/main.cpp Examples/Week11/BookLibrary/BookLibary.cpp)
add_executable(BookLibraryZybooks Examples/Week11/BookLibraryZybooks/main.cpp Examples/Week11/BookLibraryZybooks/BookLibary.cpp)
add_executable(MileageTracker Examples/Week11/MileageTracker/main.cpp Examples/Week11/MileageTracker/main.cpp Examples/Week11/MileageTracker/MileageTrackerNode.cpp)
add_executable(VectorOfInts Examples/Week11/VectorOfInts/main.cpp Examples/Week11/VectorOfInts/LinkedList.cpp Examples/Week11/VectorOfInts/IntNode.cpp)
add_executable(TemplatedVector Examples/Week11/TemplatedVector/main.cpp)
add_executable(TemplatedVector2 Examples/Week11/TemplatedVector2/main.cpp)

# Week 12
add_executable(BinarySearchTree Examples/Week12/BinarySearchTree/main.cpp)
add_executable(BinarySearchTree2 Examples/Week12/BinarySearchTree2/main.cpp Examples/Week12/BinarySearchTree2/BinarySearchTree.cpp)
add_executable(BinarySearchTreePerformance Examples/Week12/BinarySearchTreePerformance/main.cpp)

# Week 13
add_executable(StackHeap Examples/Week13/StackHeap/main.cpp)

# Projects
add_executable(Project1Part1 Examples/Projects/Project1Part1/main.cpp Examples/Projects/Project1Part1/ItemToPurchase.cpp)
add_executable(ProjectPart2 Examples/Projects/ProjectPart2/main.cpp Examples/Projects/ProjectPart2/ItemToPurchase.cpp Examples/Projects/ProjectPart2/ShoppingCart.cpp)

