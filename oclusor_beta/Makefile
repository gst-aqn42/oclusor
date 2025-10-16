CXX = g++
CXXFLAGS = -std=c++11 -Wall
SOURCES = main.cpp objeto.cpp segmento.cpp lista_objetos.cpp lista_segmentos.cpp cena.cpp gerenciador.cpp
TARGET = tp1.out

all: $(TARGET)

$(TARGET): $(SOURCES)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(SOURCES)

clean:
	rm -f $(TARGET)

run: $(TARGET)
	./$(TARGET)