# -*- coding: UTF-8 -*-
from jnius import autoclass
from X3Dautoclass import *
X3D0 =  X3DObject()
X3D0.setProfile("Immersive")
X3D0.setVersion("3.0")

head1 = headObject()

meta2 = metaObject()
meta2.setName("title")
meta2.setContent("ExtrusionHeart.x3d")

head1.addMeta(meta2)
meta3 = metaObject()
meta3.setName("description")
meta3.setContent("Simple extrusion of a Valentine heart.")

head1.addMeta(meta3)
meta4 = metaObject()
meta4.setName("creator")
meta4.setContent("Class participants in course Introduction to VRML/X3D.")

head1.addMeta(meta4)
meta5 = metaObject()
meta5.setName("created")
meta5.setContent("14 February 2001")

head1.addMeta(meta5)
meta6 = metaObject()
meta6.setName("modified")
meta6.setContent("27 November 2015")

head1.addMeta(meta6)
meta7 = metaObject()
meta7.setName("identifier")
meta7.setContent("http://www.web3d.org/x3d/content/examples/Basic/course/ExtrusionHeart.x3d")

head1.addMeta(meta7)
meta8 = metaObject()
meta8.setName("generator")
meta8.setContent("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit")

head1.addMeta(meta8)
meta9 = metaObject()
meta9.setName("license")
meta9.setContent("../license.html")

head1.addMeta(meta9)
X3D0.setHead(head1)
Scene10 = SceneObject()

Viewpoint11 = ViewpointObject()
Viewpoint11.setDescription("Extrusion Heart")
Viewpoint11.setOrientation([1,0,0,1.57])
Viewpoint11.setPosition([0,-4,0])

Scene10.addChild(Viewpoint11)
Transform12 = TransformObject()
Transform12.setTranslation([0,-0.5,0])

Shape13 = ShapeObject()

Extrusion14 = ExtrusionObject()
Extrusion14.setCreaseAngle(3.14159)
Extrusion14.setCrossSection([0,0.8,0.2,1,0.7,0.95,1,0.5,0.8,0,0.5,-0.3,0,-0.7,-0.5,-0.3,-0.8,0,-1,0.5,-0.7,0.95,-0.2,1,0,0.8])
Extrusion14.setScale([0.01,0.01,0.8,0.8,1,1,0.8,0.8,0.01,0.01])
Extrusion14.setSolid(False)
Extrusion14.setSpine([0,0,0,0,0.1,0,0,0.5,0,0,0.9,0,0,1,0])

Shape13.setGeometry(Extrusion14)
Appearance15 = AppearanceObject()

Material16 = MaterialObject()
Material16.setDiffuseColor([0.8,0.3,0.3])

Appearance15.setMaterial(Material16)
Shape13.setAppearance(Appearance15)
Transform12.addChild(Shape13)
Scene10.addChild(Transform12)
X3D0.setScene(Scene10)

X3D0.toFileX3D("../data/ExtrusionHeart.new.x3d")
