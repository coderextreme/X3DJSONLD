import x3dpsail as x3d
X3D0 = x3d.X3D()
X3D0.setProfile("Immersive")
X3D0.setVersion("3.3")
head1 = x3d.head()
meta2 = x3d.meta()
meta2.setName("title")
meta2.setContent("browser.x3d")

head1.addMeta(meta2)
meta3 = x3d.meta()
meta3.setName("creator")
meta3.setContent("John Carlson")

head1.addMeta(meta3)
meta4 = x3d.meta()
meta4.setName("generator")
meta4.setContent("manual")

head1.addMeta(meta4)
meta5 = x3d.meta()
meta5.setName("identifier")
meta5.setContent("https://coderextreme.net/X3DJSONLD/browser.x3d")

head1.addMeta(meta5)
meta6 = x3d.meta()
meta6.setName("description")
meta6.setContent("a script test with embedded \\n between single quotes, a double backslash \\\\ a backslash \\ and a closing quote \"")

head1.addMeta(meta6)

X3D0.setHead(head1)
Scene7 = x3d.Scene()
X3DScript8 = x3d.X3DScript()
X3DScript8.setDEF("Clouds")

Scene7.setX3DScript(X3DScript8)

X3D0.setScene(Scene7)
X3D0.toFileX3D("../data/browser_RoundTrip.x3d")
