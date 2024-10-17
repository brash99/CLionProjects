cmake_minimum_required(VERSION 3.25)
project(cpsc256)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_C_STANDARD 99)

# Week 1
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR}/Examples/Week1/HelloWorld)
add_executable(HelloWorld Examples/Week1/HelloWorld/main.c)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR}/Examples/Week1/PrimitiveDataTypes)
add_executable(PrimitiveDataTypes Examples/Week1/PrimitiveDataTypes/main.c)

# Week 2
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR}/Examples/Week2/FileReader)
add_executable(FileReader Examples/Week2/FileReader/main.c)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR}/Examples/Week2/CSVFileReader)
add_executable(CSVFileReader Examples/Week2/CSVFileReader/main.c)

# Week 3
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR}/Examples/Week3/Declarations)
add_executable(Declarations Examples/Week3/Declarations/main.c)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR}/Examples/Week3/FormatSpecifiers)
add_executable(FormatSpecifiers Examples/Week3/FormatSpecifiers/main.c)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR}/Examples/Week3/FunctionExample)
add_executable(FunctionExample Examples/Week3/FunctionExample/main.c)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR}/Examples/Week3/FileStatistics)
add_executable(FileStatistics Examples/Week3/FileStatistics/main.c Examples/Week3/FileStatistics/mean.c Examples/Week3/FileStatistics/stdev.c)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR}/Examples/Week3/FileStatistics_Headers)
add_executable(FileStatistics_Headers Examples/Week3/FileStatistics_Headers/main.c Examples/Week3/FileStatistics_Headers/mean.c Examples/Week3/FileStatistics_Headers/stdev.c)

# Week 4
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR}/Examples/Week4/BasicPointers)
add_executable(BasicPointers Examples/Week4/BasicPointers/main.c Examples/Week4/BasicPointers/functions.c)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR}/Examples/Week3/VoidPointers)
add_executable(VoidPointers Examples/Week4/VoidPointers/main.c)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR}/Examples/Week4/PointerQuickSort)
add_executable(QuickSort Examples/Week4/QuickSort/main.c)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR}/Examples/Week4/LockerProblem)
add_executable(LockerProblem Examples/Week4/LockerProblem/main.c)
add_executable(Tristan Examples/Week4/Tristan/main.c)

# Week 5
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR}/Examples/Week5/Restaurant_C_Example)
add_executable(Restaurant_C_Example Examples/Week5/Restaurant_C_Example/main.c)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR}/Examples/Week5/PointerCar)
add_executable(PointerCar Examples/Week5/PointerCar/main.c Examples/Week5/PointerCar/PointerCar.c)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR}/Examples/Week5/SimpleCar)
add_executable(SimpleCar Examples/Week5/SimpleCar/main.c Examples/Week5/SimpleCar/SimpleCar.c)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR}/Examples/Week5/SimpleCarOneFile)
add_executable(SimpleCarOneFile Examples/Week5/SimpleCarOneFile/main.c)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR}/Examples/Week5/CoinFlip)
add_executable(CoinFlip Examples/Week5/CoinFlip/main.c Examples/Week5/CoinFlip/Coin.c)

# Midterm 2 Practice
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR}/Examples/Midterm2_Practice)
add_executable(q1a Examples/Midterm2_Practice/q1a.c)
add_executable(q1b Examples/Midterm2_Practice/q1b.c)
add_executable(q3a Examples/Midterm2_Practice/q3a.c)
add_executable(q3b Examples/Midterm2_Practice/q3b.c)

# Midterm 2 Solutions
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR}/Examples/Midterm2_Solutions)
add_executable(q1a_solution Examples/Midterm2_Solutions/q1a.c)
add_executable(q1b_solution Examples/Midterm2_Solutions/q1b.c)
add_executable(q3a_solution Examples/Midterm2_Solutions/q3a.c)
add_executable(q3b_solution Examples/Midterm2_Solutions/q3b.c)
add_executable(factorial_solution Examples/Midterm2_Solutions/factorial.c)

# Week 6
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR}/Examples/Week6/HelloWorldCPP)
add_executable(HelloWorldCPP Examples/Week6/HelloWorldCPP/main.cpp)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR}/Examples/Week6/BasicVectorCPP)
add_executable(BasicVectorCPP Examples/Week6/BasicVectorCPP/main.cpp)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR}/Examples/Week6/FunctionOverloading)
add_executable(FunctionOverloading Examples/Week6/FunctionOverloading/main.cpp)

# Week 7
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR}/Examples/Week7/PassBy)
add_executable(PassBy Examples/Week7/PassBy/main.cpp)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR}/Examples/Week7/BasicObjects)
add_executable(BasicObjects Examples/Week7/BasicObjects/main.cpp Examples/Week7/BasicObjects/Restaurant.cpp)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR}/Examples/Week7/MultipleClasses)
add_executable(MultipleClasses Examples/Week7/MultipleClasses/main.cpp)

# Week 8
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR}/Examples/Week8/PointersCPP)
add_executable(PointersCPP Examples/Week8/PointersCPP/main.cpp)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR}/Examples/Week8/BasicObjectsPointers)
add_executable(BasicObjectsPointers Examples/Week8/BasicObjectsPointers/main.cpp Examples/Week8/BasicObjectsPointers/Restaurant.cpp)

# Week 9
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR}/Examples/Week9/ArtistAndArtwork)
add_executable(ArtistAndArtwork Examples/Week9/ArtistAndArtwork/main.cpp Examples/Week9/ArtistAndArtwork/Artist.cpp Examples/Week9/ArtistAndArtwork/Artwork.cpp)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR}/Examples/Week9/CopyConstructorExample)
add_executable(CopyConstructorExample Examples/Week9/CopyConstructorExample/main.cpp)

# Week 10
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR}/Examples/Week10/FunctionTemplates)
add_executable(FunctionTemplates Examples/Week10/FunctionTemplates/main.cpp)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR}/Examples/Week10/OperatorOverloading)
add_executable(OperatorOverloading Examples/Week10/OperatorOverloading/main.cpp Examples/Week10/OperatorOverloading/TimeHrMn.cpp)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR}/Examples/Week10/InheritancePolymorphism)
add_executable(InheritancePolymorphism Examples/Week10/InheritancePolymorphism/main.cpp)

# Week 11
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR}/Examples/Week11/BasicLinkedList)
add_executable(BasicLinkedList Examples/Week11/BasicLinkedList/main.cpp Examples/Week11/BasicLinkedList/IntNode.cpp)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR}/Examples/Week11/LinkListDestructor)
add_executable(LinkListDestructor Examples/Week11/LinkListDestructor/main.cpp Examples/Week11/LinkListDestructor/IntNode.cpp Examples/Week11/LinkListDestructor/LinkedList.cpp)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR}/Examples/Week11/BookLibrary)
add_executable(BookLibrary Examples/Week11/BookLibrary/main.cpp Examples/Week11/BookLibrary/BookLibary.cpp)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR}/Examples/Week11/BookLibraryZybooks)
add_executable(BookLibraryZybooks Examples/Week11/BookLibraryZybooks/main.cpp Examples/Week11/BookLibraryZybooks/BookLibary.cpp)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR}/Examples/Week11/MileageTracker)
add_executable(MileageTracker Examples/Week11/MileageTracker/main.cpp Examples/Week11/MileageTracker/main.cpp Examples/Week11/MileageTracker/MileageTrackerNode.cpp)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR}/Examples/Week11/VectorOfInts)
add_executable(VectorOfInts Examples/Week11/VectorOfInts/main.cpp Examples/Week11/VectorOfInts/LinkedList.cpp Examples/Week11/VectorOfInts/IntNode.cpp)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR}/Examples/Week11/TemplatedVector)
add_executable(TemplatedVector Examples/Week11/TemplatedVector/main.cpp)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR}/Examples/Week11/TemplatedVector2)
add_executable(TemplatedVector2 Examples/Week11/TemplatedVector2/main.cpp)

# Week 12
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR}/Examples/Week12/BinarySearchTree)
add_executable(BinarySearchTree Examples/Week12/BinarySearchTree/main.cpp)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR}/Examples/Week12/BinarySearchTree2)
add_executable(BinarySearchTree2 Examples/Week12/BinarySearchTree2/main.cpp Examples/Week12/BinarySearchTree2/BinarySearchTree.cpp)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR}/Examples/Week12/BinarySearchTreePerformance)
add_executable(BinarySearchTreePerformance Examples/Week12/BinarySearchTreePerformance/main.cpp)

# Week 13
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR}/Examples/Week13/StackHeap)
add_executable(StackHeap Examples/Week13/StackHeap/main.cpp)

# Projects
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR}/Examples/Projects/Project1Part1)
add_executable(Project1Part1 Examples/Projects/Project1Part1/main.cpp Examples/Projects/Project1Part1/ItemToPurchase.cpp)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR}/Examples/Projects/ProjectPart2)
add_executable(ProjectPart2 Examples/Projects/ProjectPart2/main.cpp Examples/Projects/ProjectPart2/ItemToPurchase.cpp Examples/Projects/ProjectPart2/ShoppingCart.cpp)

# Compile gplot library for use in other examples

add_library(gplot SHARED Examples/Other_Examples/gplot/gplot_basic.c Examples/Other_Examples/gplot/gplot.h Examples/Other_Examples/gplot/gplot_errors.c Examples/Other_Examples/gplot/gplot_errorstheory.c Examples/Other_Examples/gplot/gplot_errors.c Examples/Other_Examples/gplot/gplot_theory.c Examples/Other_Examples/gplot/gplot_theory.c)

# Compile gplot_test
include_directories(${CMAKE_SOURCE_DIR}/inc)
link_directories(${CMAKE_SOURCE_DIR}/lib)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR}/Examples/Other_Examples/gplot_test)
add_executable(gplot_test Examples/Other_Examples/gplot_test/main.c)
target_link_libraries(gplot_test gplot) # libgplot.so is found in ${CMAKE_SOURCE_DIR}/lib

# Compile SumOrdering
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR}/Examples/Other_Examples/SumOrdering)
add_executable(SumOrdering Examples/Other_Examples/SumOrdering/main.c)
target_link_libraries(SumOrdering gplot) # libgplot.so is found in ${CMAKE_SOURCE_DIR}/lib

# Compile AverageDistance
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR}/Examples/Other_Examples/AverageDistance)
add_executable(AverageDistance Examples/Other_Examples/AverageDistance/main.c Examples/Other_Examples/AverageDistance/mtwister.c)
target_link_libraries(AverageDistance gplot) # libgplot.so is found in ${CMAKE_SOURCE_DIR}/lib

# Compile Solitaire
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR}/Examples/Other_Examples/Solitaire)
add_executable(Solitaire Examples/Other_Examples/Solitaire/main.c Examples/Other_Examples/Solitaire/mtwister.c)
target_link_libraries(Solitaire gplot) # libgplot.so is found in ${CMAKE_SOURCE_DIR}/lib

# Compile NumericalPrecision
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR}/Examples/Other_Examples/NumericalPrecision)
add_executable(NumericalPrecision Examples/Other_Examples/NumericalPrecision/main.c)
target_link_libraries(NumericalPrecision gplot) # libgplot.so is found in ${CMAKE_SOURCE_DIR}/lib

# Compile ArchimedianSpiral
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR}/Examples/Other_Examples/ArchimedianSpiral)
add_executable(ArchimedianSpiral Examples/Other_Examples/ArchimedianSpiral/main.c)
target_link_libraries(ArchimedianSpiral gplot) # libgplot.so is found in ${CMAKE_SOURCE_DIR}/lib

# Compile TriangleArea
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR}/Examples/Other_Examples/TriangleArea)
add_executable(TriangleArea Examples/Other_Examples/TriangleArea/main.c)
target_link_libraries(TriangleArea gplot) # libgplot.so is found in ${CMAKE_SOURCE_DIR}/lib

# Compile NewtonsAlgorithmVisualization
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR}/Examples/Other_Examples/NewtonsAlgorithmVisualization)
add_executable(NewtonsAlgorithmVisualization Examples/Other_Examples/NewtonsAlgorithmVisualization/main.c)
target_link_libraries(NewtonsAlgorithmVisualization gplot) # libgplot.so is found in ${CMAKE_SOURCE_DIR}/lib

# Compile ECalcPlot
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR}/Examples/Other_Examples/ECalcPlot)
add_executable(ECalcPlot Examples/Other_Examples/ECalcPlot/main.c)

# Compile SockPulling
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR}/Examples/Other_Examples/SockPulling)
add_executable(SockPulling Examples/Other_Examples/SockPulling/main.c Examples/Other_Examples/SockPulling/mtwister.c)
target_link_libraries(SockPulling gplot) # libgplot.so is found in ${CMAKE_SOURCE_DIR}/lib

# Regular Other_Examples (not using gplot or mtwister)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR}/Examples/Other_Examples/ECalc)
add_executable(ECalc Examples/Other_Examples/ECalc/main.c)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR}/Examples/Other_Examples/FloatingPoint64)
add_executable(FloatingPoint64 Examples/Other_Examples/FloatingPoint64/main.c)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR}/Examples/Other_Examples/FloattingPointBinaryRepresentation)
add_executable(FloattingPointBinaryRepresentation Examples/Other_Examples/FloattingPointBinaryRepresentation/main.c)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR}/Examples/Other_Examples/GitHubCoPilot)
add_executable(GitHubCoPilot Examples/Other_Examples/GitHubCoPilot/main.cpp)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR}/Examples/Other_Examples/Midterm_Solutions)
add_executable(Midterm_Solutions Examples/Other_Examples/Midterm_Solutions/main.c Examples/Other_Examples/Midterm_Solutions/GVCoin.c)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR}/Examples/Other_Examples/NewtonsAlgorithm)
add_executable(NewtonsAlgorithm Examples/Other_Examples/NewtonsAlgorithm/main.c)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR}/Examples/Other_Examples/NewtonsAlgorithmComplete)
add_executable(NewtonsAlgorithmComplete Examples/Other_Examples/NewtonsAlgorithmComplete/main.c)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR}/Examples/Other_Examples/RandomNumberGenerator)
add_executable(RandomNumberGenerator Examples/Other_Examples/RandomNumberGenerator/main.c)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR}/Examples/Other_Examples/UnitTesting)
add_executable(UnitTesting Examples/Other_Examples/UnitTesting/main.cpp)