
./"C:\Program Files\Microsoft Visual Studio\2022\Community\VC\Auxiliary\Build\vcvarsamd64_x86.bat"
for i in *.cpp
do
	g++ -I. -I/c/msys64/mingw64/include/ -LC:/Users/jcarl/www.web3d.org/x3d/languages/cpp/Release -LC:/Windows/WOW64 $i 
done
