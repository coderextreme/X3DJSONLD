from jnius import autoclass
from X3Dautoclass import *
X3D0 =  X3DObject().setProfile("Immersive").setVersion("3.3")
Scene1 = SceneObject()
Group2 = GroupObject()
ProtoInstance3 = ProtoInstanceObject().setName("myProto").setDEF("myProtoDefName")
Group2.addChild(ProtoInstance3)
Scene1.addChild(Group2)
X3D0.setScene(Scene1)

X3D0.toFileX3D("../data/ValidationTestScene.new.x3d")
