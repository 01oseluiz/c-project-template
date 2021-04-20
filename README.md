## Template C Project for VSCode (CMake)
From: https://github.com/DevInCube/c-project-template

* Install __CMake__ package with: `sudo apt-get install cmake`
* Install __CMake__ and __CMake Tools__ VSCode extensions
* Place all header files in `./include` directory
* Place all code files in `./src` directory
* Let VS Code configure cmake at folder 'build'
    - Equivalent to:
    ```
        mkdir build
        cd build
        cmake ../
    ```
* F7 to compile Project with __CMake__
    - Equivalent to:
        ```
            cmake --build .
        ```
* Run main
    ```
        ./build/a.out
    ```
* Run tests
    ```
        ./build/test.out
    ```
