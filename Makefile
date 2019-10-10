OBJ = main.o Control.o View.o Vanilla.o Chocolate.o Strawberry.o Neapolitan.o VanillaCone.o ChocolateCone.o StrawberryCone.o NeapolitanCone.o

shoppe:	$(OBJ)
	g++ -o shoppe $(OBJ)

main.o:	main.cpp 
	g++ -c main.cpp

Control.o: Control.cpp Control.h
	g++ -c Control.cpp

View.o: View.cpp View.h
	g++ -c View.cpp

Vanilla.o: Vanilla.cpp Vanilla.h 
	g++ -c Vanilla.cpp

Chocolate.o: Chocolate.cpp Chocolate.h
	g++ -c Chocolate.cpp

Strawberry.o: Strawberry.cpp Strawberry.h
	g++ -c Strawberry.cpp

Neapolitan.o: Neapolitan.cpp Neapolitan.h
	g++ -c Neapolitan.cpp

VanillaCone.o: VanillaCone.cpp VanillaCone.h 
	g++ -c VanillaCone.cpp

ChocolateCone.o: ChocolateCone.cpp ChocolateCone.h
	g++ -c ChocolateCone.cpp

StrawberryCone.o: StrawberryCone.cpp StrawberryCone.h
	g++ -c StrawberryCone.cpp

NeapolitanCone.o: NeapolitanCone.cpp NeapolitanCone.h
	g++ -c NeapolitanCone.cpp

clean:
	rm -f $(OBJ) shoppe