from x3dpsail import *
X3D0 = X3D()
X3D0.setProfile("Full")
X3D0.setVersion("4.0")
head1 = head()
meta2 = meta()
meta2.setName("title")
meta2.setContent("InlineSoundSource.x3d")

head1.addMeta(meta2)
meta3 = meta()
meta3.setName("description")
meta3.setContent("This demo is the same with the Single Audio Demo, with the difference that it uses the Inline grouping node. Namely, the scene is an X3D file and all nodes are loaded by Inline node via the \"url\" of X3D file.")

head1.addMeta(meta3)
meta4 = meta()
meta4.setName("info")
meta4.setContent("This work presents an innovative solution of the spatial sound in X3DOM framework, that based on a combinational methodology. Specifically, we suggested the enrichment of X3DOM with spatial sound features, using both the X3D sound nodes and the structure of Web Audio API.")

head1.addMeta(meta4)
meta5 = meta()
meta5.setName("creator")
meta5.setContent("Efi Lakka, Athanasios Malamos, Dick Puk, Don Brutzman")

head1.addMeta(meta5)
meta6 = meta()
meta6.setName("created")
meta6.setContent("28 October 2020")

head1.addMeta(meta6)
meta7 = meta()
meta7.setName("modified")
meta7.setContent("4 August 2021")

head1.addMeta(meta7)
meta8 = meta()
meta8.setName("reference")
meta8.setContent("CHANGELOG.txt")

head1.addMeta(meta8)
meta9 = meta()
meta9.setName("TODO")
meta9.setContent("credit for audio files")

head1.addMeta(meta9)
meta10 = meta()
meta10.setName("reference")
meta10.setContent("https://medialab.hmu.gr/minipages/x3domAudio")

head1.addMeta(meta10)
meta11 = meta()
meta11.setName("identifier")
meta11.setContent("https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/InlineSoundSource.x3d")

head1.addMeta(meta11)
meta12 = meta()
meta12.setName("generator")
meta12.setContent("X3D-Edit 4.0, https://savage.nps.edu/X3D-Edit")

head1.addMeta(meta12)
meta13 = meta()
meta13.setName("license")
meta13.setContent("../license.html")

head1.addMeta(meta13)

X3D0.setHead(head1)
Scene14 = Scene()
WorldInfo15 = WorldInfo()
WorldInfo15.setTitle("InlineSoundSource.x3d")

Scene14.addChildren(WorldInfo15)
NavigationInfo16 = NavigationInfo()
NavigationInfo16.setDEF("NAV")

Scene14.addChildren(NavigationInfo16)
Background17 = Background()
Background17.setBackUrl(["images/generic/BK1.png","https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/images/generic/BK1.png"])
Background17.setBottomUrl(["images/generic/DN1.png","https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/images/generic/DN1.png"])
Background17.setFrontUrl(["images/generic/FR1.png","https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/images/generic/FR1.png"])
Background17.setLeftUrl(["images/generic/LF1.png","https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/images/generic/LF1.png"])
Background17.setRightUrl(["images/generic/RT1.png","https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/images/generic/RT1.png"])
Background17.setTopUrl(["images/generic/UP1.png","https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/images/generic/UP1.png"])

Scene14.addChildren(Background17)
Viewpoint18 = Viewpoint()
Viewpoint18.setDEF("Camera001")
Viewpoint18.setDescription("Camera001")
Viewpoint18.setFarDistance(0)
Viewpoint18.setNearDistance(1)
Viewpoint18.setOrientation([1,0,0,-0.523599])
Viewpoint18.setPosition([0,2000,3500])

Scene14.addChildren(Viewpoint18)
Transform19 = Transform()
Transform19.setDEF("Floor")
Transform19.setTranslation([1.241,0,0.358])
Shape20 = Shape()
Appearance21 = Appearance()
Appearance21.setDEF("WireColor")
Material22 = Material()
Material22.setDiffuseColor([0.122,0.114,0.125])

Appearance21.setMaterial(Material22)

Shape20.setAppearance(Appearance21)
IndexedFaceSet23 = IndexedFaceSet()
IndexedFaceSet23.setDEF("Box001-GEOMETRY")
IndexedFaceSet23.setCoordIndex([0,1,2,-1,3,4,5,-1,6,7,8,-1,9,10,11,-1,12,13,14,-1,15,16,17,-1,18,19,20,-1,21,22,23,-1,24,25,26,-1,27,28,29,-1,30,31,32,-1,33,34,35,-1])
IndexedFaceSet23.setSolid(False)
Coordinate24 = Coordinate()
Coordinate24.setPoint([-1000,0,1000,-1000,0,-1000,1000,0,-1000,1000,0,-1000,1000,0,1000,-1000,0,1000,-1000,8.031588,1000,1000,8.031588,1000,1000,8.031588,-1000,1000,8.031588,-1000,-1000,8.031588,-1000,-1000,8.031588,1000,-1000,0,1000,1000,0,1000,1000,8.031588,1000,1000,8.031588,1000,-1000,8.031588,1000,-1000,0,1000,1000,0,1000,1000,0,-1000,1000,8.031588,-1000,1000,8.031588,-1000,1000,8.031588,1000,1000,0,1000,1000,0,-1000,-1000,0,-1000,-1000,8.031588,-1000,-1000,8.031588,-1000,1000,8.031588,-1000,1000,0,-1000,-1000,0,-1000,-1000,0,1000,-1000,8.031588,1000,-1000,8.031588,1000,-1000,8.031588,-1000,-1000,0,-1000])

IndexedFaceSet23.setCoord(Coordinate24)
Normal25 = Normal()
Normal25.setVector([0,-1,0,0,-1,0,0,-1,0,0,-1,0,0,-1,0,0,-1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,1,0,0,0,0,-1,0,0,-1,0,0,-1,0,0,-1,0,0,-1,0,0,-1,-1,0,0,-1,0,0,-1,0,0,-1,0,0,-1,0,0,-1,0,0])

IndexedFaceSet23.setNormal(Normal25)

Shape20.setGeometry(IndexedFaceSet23)

Transform19.addChildren(Shape20)

Scene14.addChildren(Transform19)
Transform26 = Transform()
Transform26.setDEF("InlineScene")
Inline27 = Inline()
Inline27.setDEF("inline")
Inline27.setUrl(["x3d/example1.x3d","https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/x3d/example1.x3d","x3d/example1.wrl","https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/x3d/example1.wrl"])

Transform26.addChildren(Inline27)

Scene14.addChildren(Transform26)

X3D0.setScene(Scene14)
X3D0.toFileX3D("../data/InlineSoundSource_RoundTrip.x3d")
