# C++ Template Project
[![Build Status](https://travis-ci.org/oneEdoubleD/cpp_template.svg?branch=master)](https://travis-ci.org/oneEdoubleD/cpp_template)

A template C++ project with Google Test and CMake. Travis CI can provide free coverage to open source projects and a basic configuration file is also included. You can find instructions on their website to set this up for your own project (less than 5 minutes to do).

The CMake files will recursively identify files to include in both `src` and `tests` directories so the template should work without any configuration for small projects. 

## How to use

#### Clone the repo:
```
git clone https://github.com/oneEdoubleD/cpp_template
```

#### Create a build directory:
```
cd cpp_template
mkdir build
cd build
```

#### CMake
```
cmake ../
```

#### Make
```
make
```
 
#### Run Project
```
src/ExampleProject_run
```

#### Test Project
```
tests/ExampleProject_tst
```

## Build with Docker
#### Build
```
docker build . -t example-project:1.0.0
```

#### Run
```
docker run --rm example-project:1.0.0
```
