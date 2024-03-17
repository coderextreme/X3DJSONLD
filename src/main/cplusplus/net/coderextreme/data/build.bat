"C:\Program Files\Microsoft Visual Studio\2022\Community\VC\Auxiliary\Build\vcvarsamd64_x86.bat"
FOR %i IN (*.cpp) DO cl.exe %i C:\x3d-code\www.web3d.org\x3d\languages\cpp\Release\glut32.dll /EHsc
