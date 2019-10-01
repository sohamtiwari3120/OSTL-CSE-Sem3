gcc -c push.o pop.o
ar crv libstack.a push.o pop.o
ranlib libstack.a
gcc -c stacks stacks.c libstack.a
./stacks