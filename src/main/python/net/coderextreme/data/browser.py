# -*- coding: UTF-8 -*-
from x3dpsail import *
X3D0 = X3D()
X3D0.setProfile("Immersive")
X3D0.setVersion("3.3")
head1 = head()
meta2 = meta()
meta2.setName("title")
meta2.setContent("browser.x3d")

head1.addMeta(meta2)
meta3 = meta()
meta3.setName("creator")
meta3.setContent("John Carlson")

head1.addMeta(meta3)
meta4 = meta()
meta4.setName("generator")
meta4.setContent("manual")

head1.addMeta(meta4)
meta5 = meta()
meta5.setName("identifier")
meta5.setContent("https://coderextreme.net/X3DJSONLD/browser.x3d")

head1.addMeta(meta5)
meta6 = meta()
meta6.setName("description")
meta6.setContent("a script test with embedded \\n between single quotes, a double backslash \\\\ a backslash \\ and a closing quote \"")

head1.addMeta(meta6)

X3D0.setHead(head1)
Scene7 = Scene()
Script8 = Script()
Script8.setDEF("Browser")

Script8.setSourceCode('''ecmascript:\n"+
"                function initialize() {\n"+
"		    Browser.print('DUDES\\n'+'\"DUDETTES');\n"+
"                }''')

Scene7.addChildren(Script8)
Script9 = Script()
Script9.setDEF("Clouds")

Script9.setSourceCode('''ecmascript:\n"+
"\n"+
"\n"+
"function cumulustranslation() // These values designate the boundary location of the cloud\n"+
"{\n"+
"var xxx = ' '+' '+\n"+
"'	Transform		\\n'+\n"+
"'    ' + '               	\\n';\n"+
"\n"+
"}''')

Scene7.addChildren(Script9)

X3D0.setScene(Scene7)
X3D0.toFileX3D("../data/browser.new.x3d")
