## Getting Started

### Prerequisites
- CMake >= 3.27
- GCC/Clang

### Installation
1. In the project root directory, run 
```
cmake -fresh -S ./src -B /build
```
or use the CMake GUI and set the source and build paths accordingly, then click on 'Configure' and 'Generate'. 

2. Navigate to `/build` and run `make`
``` 
cd build && make 
```

3. Run the generated executable `./main`. It is the entry point of the application. 


