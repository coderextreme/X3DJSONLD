export PATH=${PATH}:xerces-c-3.2.0/src
g++ -I. -Ixerces-c-3.2.0/src -Ixerces-c-3.2.0 src/X3DJSONLD.cpp src/DOMPrint.cpp xerces-c-3.2.0/samples/src/DOMPrint/DOMPrintErrorHandler.cpp xerces-c-3.2.0/samples/src/DOMPrint/DOMPrintFilter.cpp xerces-c-3.2.0/samples/src/DOMPrint/DOMTreeErrorReporter.cpp src/gason.cpp src/pretty-print.cpp -Lxerces-c-3.2.0/src -lxerces-c
./X3DJSONLD.exe ../data/bubs2.json

