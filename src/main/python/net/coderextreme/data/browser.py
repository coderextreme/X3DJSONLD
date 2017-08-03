from jnius import autoclass
from X3Dautoclass import *
X3D0 =  X3DObject().setProfile("Immersive").setVersion("3.3")
head1 = headObject()
meta2 = metaObject().setName("title").setContent("browser.x3d")
head1.addMeta(meta2)
meta3 = metaObject().setName("creator").setContent("John Carlson")
head1.addMeta(meta3)
meta4 = metaObject().setName("generator").setContent("manual")
head1.addMeta(meta4)
meta5 = metaObject().setName("identifier").setContent("https://coderextreme.net/X3DJSONLD/browser.x3d")
head1.addMeta(meta5)
meta6 = metaObject().setName("description").setContent("a script test with embedded \\n between single quotes, a double backslash \\\\ a backslash \\ and a closing quote \"")
head1.addMeta(meta6)
X3D0.setHead(head1)
Scene7 = SceneObject()
Script8 = ScriptObject().setDEF("Browser")

Script8.setSourceCode("ecmascript:\n"+
"                function initialize() {\n"+
"		    Browser.print('DUDES\\n'+'\"DUDETTES');\n"+
"                }\n"+
"")
Scene7.addChild(Script8)
Script9 = ScriptObject().setDEF("Clouds")

Script9.setSourceCode("ecmascript:\n"+
"\n"+
"\n"+
"function cumulustranslation() // These values designate the boundary location of the cloud\n"+
"{\n"+
"var xxx = ' '+' '+\n"+
"'	Transform		\\n'+\n"+
"'    ' + '               	\\n';\n"+
"\n"+
"}\n"+
"")
Scene7.addChild(Script9)
X3D0.setScene(Scene7)

X3D0.toFileX3D("../data/browser.new.x3d")
