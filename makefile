.RECIPEPREFIX = >
objects = IntDLLNode.o IntDLList.o main.o

DLL : $(objects)
> g++ -o DLL $(objects)
   
clean :
> rm $(objects)
