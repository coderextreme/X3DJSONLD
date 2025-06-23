"C:\Program Files\Microsoft Visual Studio\2022\Community\VC\Auxiliary\Build\vcvarsamd64_x86.bat"
FOR %i IN (*.cpp) DO cl.exe -I. /c %i /EHsc
