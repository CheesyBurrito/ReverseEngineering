# Just run make in the repo of this file
# Compile the exe and then open the IDA file to start RE the binaries
all: binaryPatchIf.exe

binaryPatchIf.exe: binaryPatchIf.cpp
	      gcc -g -Wall -o binaryPatchIf binaryPatchIf.cpp

clean:
	rm binaryPatchIf.o binaryPatchIf.exe
