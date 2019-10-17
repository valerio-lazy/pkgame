SrcFiles=$(wildcard *.cpp)
AppFile=a.out

all:$(AppFile)


$(AppFile):$(SrcFiles)
	g++ -o $@ $^ -std=c++11

clean:
	rm -f $(AppFiles)
