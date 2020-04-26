FROM ubuntu:bionic

WORKDIR src

RUN apt-get update && \
    apt-get install -y build-essential git cmake

RUN git clone https://github.com/oneEdoubleD/cpp_template

WORKDIR /src/cpp_template/build

RUN cmake ../

RUN make

CMD ["./src/ExampleProject_run"]
