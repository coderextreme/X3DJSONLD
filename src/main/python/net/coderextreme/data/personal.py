print('<!--')
import x3d
print('-->')
X3D0 = x3d.X3D()
X3D0.profile = "Full"
X3D0.version = "4.1"
head1 = x3d.head()
meta2 = x3d.meta()
meta2.name = "title"
meta2.content = "personal.x3d"

head1.children.append(meta2)
meta3 = x3d.meta()
meta3.name = "identifier"
meta3.content = "https://someAddress/somePath/personal.x3d"

head1.children.append(meta3)
meta4 = x3d.meta()
meta4.name = "description"
meta4.content = "John's Portfolio"

head1.children.append(meta4)

X3D0.head = head1
Scene5 = x3d.Scene()
Viewpoint6 = x3d.Viewpoint()
Viewpoint6.description = "Tour Views"
Viewpoint6.position = [0,0,12]

Scene5.children.append(Viewpoint6)
Switch7 = x3d.Switch(DEF="SceneSwitcher")
Switch7.whichChoice = 0
Inline8 = x3d.Inline()
Inline8.url = ["../data/force-tidy.x3d","https://coderextreme.net/X3DJSONLD/src/main/data/force-tidy.x3d"]

Switch7.children.append(Inline8)

Scene5.children.append(Switch7)

X3D0.Scene = Scene5
f = open("../data/personal.new.python.x3d", mode="w", encoding="utf-8")
f.write(X3D0.XML())
f.close()
f = open("../data/personal.new.python.x3dv", mode="w", encoding="utf-8")
f.write(X3D0.VRML())
f.close()
f = open("../data/personal.new.python.x3dj", mode="w", encoding="utf-8")
f.write(X3D0.JSON())
f.close()
