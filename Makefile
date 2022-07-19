TARGET=add-nbo

all: $(TARGET)

$(TARGET): addnbo.o
	g++ addnbo.o -o $(TARGET)

clean:
	rm -f $(TARGET)
	rm -f *.o