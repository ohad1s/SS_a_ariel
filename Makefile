CC=gcc
AR=ar
OBJECTS_MAIN=main.o
FLAGS= -Wall -g
BO=basicClassification.o
RO=advancedClassificationRecursion.o
LO=advancedClassificationLoop.o
BC=basicClassification.c
RC=advancedClassificationRecursion.c
LC=advancedClassificationLoop.c
NC=NumClass.h

all:mains maindloop maindrec libclassloops.a libclassloops.so libclassrec.so libclassrec.a

mains:$(OBJECTS_MAIN) libclassrec.a
	$(CC) $(FLAGS) -o mains $(OBJECTS_MAIN) libclassrec.a
maindloop:$(OBJECTS_MAIN) libclassloops.so
	$(CC) $(FLAGS) -o maindloop $(OBJECTS_MAIN) ./libclassloops.so
maindrec:$(OBJECTS_MAIN) libclassrec.so
	$(CC) $(FLAGS) -o maindrec $(OBJECTS_MAIN) ./libclassrec.so

loopd:libclassloops.so
libclassloops.so:$(BO) $(LO)
	$(CC) -shared -o libclassloops.so $(BO) $(LO)
recursived:libclassrec.so
libclassrec.so:$(BO) $(RO)
	$(CC) -shared -o libclassrec.so $(BO) $(RO)
recursives:libclassrec.a
libclassrec.a:$(BO) $(RO)
	$(AR) -rcs -o libclassrec.a $(BO) $(RO)
loops:libclassloops.a
libclassloops.a:$(BO) $(LO)
	$(AR) -rcs -o libclassloops.a $(BO) $(LO)

main.o: main.c NumClass.h
	$(CC) $(FLAGS) -c main.c $(NC)
$(BO): basicClassification.c NumClass.h
	$(CC) $(FLAGS) -c $(BC) $(NC)
$(LO):advancedClassificationLoop.c NumClass.h
	$(CC) $(FLAGS) -c $(LC) $(NC)
$(RO):advancedClassificationRecursion.c NumClass.h
	$(CC) $(FLAGS) -c $(RC) $(NC)

.PHONY: clean all

clean:
	rm -f *.o *.a *.so mains maindloop maindrec



