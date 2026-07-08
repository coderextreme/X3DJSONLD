print('<!--')
import x3d
print('-->')
X3D0 = x3d.X3D()
X3D0.profile = "Immersive"
X3D0.version = "4.0"
head1 = x3d.head()
meta2 = x3d.meta()
meta2.name = "title"
meta2.content = "browser.x3d"

head1.children.append(meta2)
meta3 = x3d.meta()
meta3.name = "creator"
meta3.content = "John Carlson"

head1.children.append(meta3)
meta4 = x3d.meta()
meta4.name = "generator"
meta4.content = "manual"

head1.children.append(meta4)
meta5 = x3d.meta()
meta5.name = "identifier"
meta5.content = "https://coderextreme.net/X3DJSONLD/src/main/data/browser.x3d"

head1.children.append(meta5)
meta6 = x3d.meta()
meta6.name = "description"
meta6.content = "a script test with embedded \\n between single quotes, a double backslash \\\\ a backslash \\ and a closing quote \""

head1.children.append(meta6)

X3D0.head = head1
Scene7 = x3d.Scene()
Script8 = x3d.Script(DEF="Browser")

Script8.sourceCode = '''ecmascript:\n"+
"                function initialize() {\n"+
"		    Browser.print('DUDES\\n'+'\"DUDETTES');\n"+
"                }'''

Scene7.children.append(Script8)
Script9 = x3d.Script(DEF="Clouds")

Script9.sourceCode = '''ecmascript:\n"+
"\n"+
"\n"+
"function cumulustranslation() // These values designate the boundary location of the cloud\n"+
"{\n"+
"var xxx = ' '+' '+\n"+
"'	Transform		\\n'+\n"+
"'    ' + '               	\\n';\n"+
"\n"+
"}'''

Scene7.children.append(Script9)

X3D0.Scene = Scene7
f = open("../data/browser.new.python.x3d", mode="w", encoding="utf-8")
f.write(X3D0.XML())
f.close()
f = open("../data/browser.new.python.x3dv", mode="w", encoding="utf-8")
f.write(X3D0.VRML())
f.close()
f = open("../data/browser.new.python.x3dj", mode="w", encoding="utf-8")
f.write(X3D0.JSON())
f.close()
