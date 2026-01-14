import x3dpsail as x3d

x3d.ConfigurationProperties.setXsltEngine(x3d.ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA)
x3d.ConfigurationProperties.setDeleteIntermediateFiles(False)
x3d.ConfigurationProperties.setStripTrailingZeroes(True)
x3d.ConfigurationProperties.setStripDefaultAttributes(True)
X3D0 = x3d.X3D()
X3D0.setProfile("Interactive")
X3D0.setVersion("4.0")
head1 = x3d.head()
component2 = x3d.component()
component2.setName("HAnim")
component2.setLevel(1)

head1.addComponent(component2)
meta3 = x3d.meta()
meta3.setName("title")
meta3.setContent("OrientationInterpolator.x3d")

head1.addMeta(meta3)
meta4 = x3d.meta()
meta4.setName("creator")
meta4.setContent("John Carlson")

head1.addMeta(meta4)
meta5 = x3d.meta()
meta5.setName("created")
meta5.setContent("29 December 2025")

head1.addMeta(meta5)
meta6 = x3d.meta()
meta6.setName("license")
meta6.setContent("license.html")

head1.addMeta(meta6)

X3D0.setHead(head1)
Scene7 = x3d.Scene()
WorldInfo8 = x3d.WorldInfo()
WorldInfo8.setTitle("OrientationInterpolator.x3d")

Scene7.addChild(WorldInfo8)

Scene7.addComments(x3d.CommentsBlock("""<OrientationInterpolator DEF='Stop_l_midtarsal_RotationInterpolator' key='0 0.5 1' keyValue='0 0 1 0 0 0 1 0 0 0 1 0'/>"""))

X3D0.setScene(Scene7)
X3D0.toFileX3D("../data/OrientationInterpolator.new.graalpy.x3d")
X3D0.toFileJSON("../data/OrientationInterpolator.new.graalpy.x3dj")
