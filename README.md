**Algorithm Visualizer**  
A simple C++ project that shows how sorting algorithms work step by step.

Overview  
This project visualizes how sorting algorithms transform an array over time.  
Instead of only showing the final sorted result, the program prints the state of the array after each pass, helping to understand how the algorithm works internally.

It currently includes:
- Bubble Sort
- Selection Sort
- Random number generation  
- Step‑by‑step output  
More algorithms will be added soon.

Features  
- Generates a random array of any size  
- Shows each pass of the sorting algorithm  
- Helps visualize how values move during sorting
- Clean project structure with separate files for each algorithm  
- Beginner‑friendly and easy to extend  

Technologies  
- **Language:** C++  
- **Compiler:** Any C++17+ compatible compiler
- **Build System:** CMake
- **IDE:** CLion
- **Version Control:** Git and GitHub

 Project Structure
 - algorithm-visualizer/
│
├── src/
│   ├── main.cpp
│   ├── bubble_sort.cpp
│   ├── selection_sort.cpp
│
├── include/
│   ├── bubble_sort.h
│   ├── selection_sort.h
│
├── CMakeLists.txt
└── README.md
Each algorithm is implemented in its own .cpp and .h file for clarity and scalability.

How to Run  
1. Clone the repository: **git clone https://github.com/YOUR_USERNAME/algorithm-visualizer.git**
2. Open the project in CLion or any C++ IDE  
3. Build and run the program  
4. Enter the number of random values you want to generate
5. Uncomment the algorithm you want to test in main.cpp 

Example Output  
Enter a number to generate random numbers for sorting: 5

Before Sorting
8 56 61 60 29
Pass 1: 8 56 60 29 61
Pass 2: 8 56 29 60 61
Pass 3: 8 29 56 60 61
Pass 4: 8 29 56 60 61

After Sorting
8 29 56 60 61

Future Improvements  
- Add Insertion Sort  
- Add Merge Sort and Quick Sort  
- Add ASCII bar visualization  
- Add a menu to choose algorithms  
- Add best‑case / worst‑case array generation  

Contributions  
This project is open for improvements. Feel free to copy the project and improve it, open issues, or submit pull requests.
