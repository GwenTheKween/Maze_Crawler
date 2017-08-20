COMPILER = g++
CFLAGS = -c -g
LINKFLAGS = -lGL -lGLU -lglut -lSOIL -o
OFILES = main.o graf.o mapa.o entity.o
END_NAME = game

all: game

game: $(OFILES)
	$(COMPILER) $(OFILES) $(LINKFLAGS) $(END_NAME) 

%.o:%.cpp
	$(COMPILER) $(CFLAGS) $(@:.o=.cpp)

clean:
	rm *.o

run:
	./$(END_NAME)
