# tcm-firmware

A firmware written in (beautiful) C to AVR processors.

It gives life to a board named TCM, developed for a small brazilian technology company named _Lupa Tecnologia e Sistemas_ to test its technological products.

It was an original requirement that it should be as flexible as possible to comply with unforeseen product changes and future versions of their products. So, to honor these requirements, the firmare behaves as an excecutor of unique compiled instructions sets that are given to it. (The compiler is not included in this project).

The solution envised by Lupa needed many IO pins, and for that they chose to put two AVR processors on the board (can you believe it?)(and that's why we have two folders: MCU1 and MCU2). Particularly, what makes this firmware stand out is its approach to solve the problem of the communication between the two processors (that could use only common IO pins, a barrier posed by the hardware design, so no ISP allowed). This particular problem was solved with the devise of a simple (yet ellegant) communication protocol, named **IPSP** (check the ipsp.c and ipsp.h files in both MCU* folders for that).

Another interesting thing is its ellegant abstraction of IO operations (check ioutils.h for that), that can be reused in many other projetcs.



