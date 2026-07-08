import x3dpsail as x3d

x3d.ConfigurationProperties.setXsltEngine(x3d.ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA)
x3d.ConfigurationProperties.setDeleteIntermediateFiles(False)
x3d.ConfigurationProperties.setStripTrailingZeroes(True)
x3d.ConfigurationProperties.setStripDefaultAttributes(True)
X3D0 = x3d.X3D()
X3D0.setProfile("Immersive")
X3D0.setVersion("4.0")
head1 = x3d.head()
component2 = x3d.component()
component2.setName("HAnim")
component2.setLevel(2)

head1.addComponent(component2)
meta3 = x3d.meta()
meta3.setName("title")
meta3.setContent("JoeSkeletonSkinSiteSaluteWalk.x3d")

head1.addMeta(meta3)
meta4 = x3d.meta()
meta4.setName("description")
meta4.setContent("Comprehensive LOA4 example showing skeleton, skin, sites and interpolator animation together. All name, DEF, USE, fromNode, toNode values upgraded from legacy HAnim v1 to HAnim v2.")

head1.addMeta(meta4)
meta5 = x3d.meta()
meta5.setName("creator")
meta5.setContent("Joe D. Williams")

head1.addMeta(meta5)
meta6 = x3d.meta()
meta6.setName("translator")
meta6.setContent("Michalis Kamburelis")

head1.addMeta(meta6)
meta7 = x3d.meta()
meta7.setName("translator")
meta7.setContent("Don Brutzman")

head1.addMeta(meta7)
meta8 = x3d.meta()
meta8.setName("translator")
meta8.setContent("Joe D. Williams")

head1.addMeta(meta8)
meta9 = x3d.meta()
meta9.setName("created")
meta9.setContent("9 January 2004")

head1.addMeta(meta9)
meta10 = x3d.meta()
meta10.setName("translated")
meta10.setContent("4 December 2022")

head1.addMeta(meta10)
meta11 = x3d.meta()
meta11.setName("modified")
meta11.setContent("16 March 2026")

head1.addMeta(meta11)
meta12 = x3d.meta()
meta12.setName("TODO")
meta12.setContent("X3dTidy warning: look for missing underscore and digit number as suffix of improperly named HAnimJoint name=l_metatarsal")

head1.addMeta(meta12)
meta13 = x3d.meta()
meta13.setName("reference")
meta13.setContent("JoeSkeletonSkinSiteSaluteWalk.original.x3dv")

head1.addMeta(meta13)
meta14 = x3d.meta()
meta14.setName("reference")
meta14.setContent("JoeSkeletonSkinSiteSaluteWalk.modified1.x3dv")

head1.addMeta(meta14)
meta15 = x3d.meta()
meta15.setName("reference")
meta15.setContent("JoeSkeletonSkinSiteSaluteWalk.modified2.x3dv")

head1.addMeta(meta15)
meta16 = x3d.meta()
meta16.setName("Image")
meta16.setContent("JoeSkeletonSkinSiteSaluteWalk_X3D-Edit.png")

head1.addMeta(meta16)
meta17 = x3d.meta()
meta17.setName("drawing")
meta17.setContent("JoeSkeletonSkinSiteSaluteWalk_composite.vsdx")

head1.addMeta(meta17)
meta18 = x3d.meta()
meta18.setName("Image")
meta18.setContent("JoeSkeletonSkinSiteSaluteWalk_composite.2023JAN2.png")

head1.addMeta(meta18)
meta19 = x3d.meta()
meta19.setName("Image")
meta19.setContent("JoeSkeletonSkinSiteSaluteWalk_view3dscene.png")

head1.addMeta(meta19)
meta20 = x3d.meta()
meta20.setName("Image")
meta20.setContent("JoeSkeletonSkinSiteSaluteWalk_X_ITE.png")

head1.addMeta(meta20)
meta21 = x3d.meta()
meta21.setName("Image")
meta21.setContent("JoeSkeletonSkinSiteSaluteWalk_X3DOM.png")

head1.addMeta(meta21)
meta22 = x3d.meta()
meta22.setName("Image")
meta22.setContent("JoeSkeletonSkinSiteSaluteWalk_H3DViewer.png")

head1.addMeta(meta22)
meta23 = x3d.meta()
meta23.setName("Image")
meta23.setContent("JoeSkeletonSkinSiteSaluteWalk_freeWrl.png")

head1.addMeta(meta23)
meta24 = x3d.meta()
meta24.setName("Image")
meta24.setContent("JoeSkeletonSkinSiteSaluteWalk_Octaga.png")

head1.addMeta(meta24)
meta25 = x3d.meta()
meta25.setName("Image")
meta25.setContent("JoeSkeletonSkinSiteSaluteWalk_vivaty.png")

head1.addMeta(meta25)
meta26 = x3d.meta()
meta26.setName("generator")
meta26.setContent("tovrmlx3d, https://castle-engine.io/convert.php")

head1.addMeta(meta26)
meta27 = x3d.meta()
meta27.setName("reference")
meta27.setContent("https://castle-engine.io/view3dscene.php#section_converting")

head1.addMeta(meta27)
meta28 = x3d.meta()
meta28.setName("generator")
meta28.setContent("X3D-Edit 4.0, https://www.web3d.org/x3d/tools/X3D-Edit")

head1.addMeta(meta28)
meta29 = x3d.meta()
meta29.setName("generator")
meta29.setContent("X3D Tidy, https://www.web3d.org/x3d/stylesheets/X3dTidy.html")

head1.addMeta(meta29)
meta30 = x3d.meta()
meta30.setName("identifier")
meta30.setContent("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Skin/JoeSkeletonSkinSiteSaluteWalk.x3d")

head1.addMeta(meta30)
meta31 = x3d.meta()
meta31.setName("license")
meta31.setContent("../license.html")

head1.addMeta(meta31)
meta32 = x3d.meta()
meta32.setName("generator")
meta32.setContent("X3DJSAIL https://www.web3d.org/specifications/java/X3DJSAIL.html")

head1.addMeta(meta32)

X3D0.setHead(head1)
Scene33 = x3d.Scene()
WorldInfo34 = x3d.WorldInfo()
WorldInfo34.setInfo(["By Joe for Joe","HAnim V1 LOA3 Skeleton Joint centers and Site translations Adapted for approximatrion of ManGLoss Site Location Example and HANIM 200x Default Joint Centers, LOA3"])
WorldInfo34.setTitle("JoeSkeletonSkinSiteSaluteWalk.x3d")

Scene33.addChild(WorldInfo34)
NavigationInfo35 = x3d.NavigationInfo()
NavigationInfo35.setDEF("HeadlightOnRevealsSkinTextureAndColors")

Scene33.addChild(NavigationInfo35)
Background36 = x3d.Background()
Background36.setGroundAngle(x3d.doubleToFloat([1.57]))
Background36.setGroundColor(x3d.doubleToFloat([0,0.1,0,0,0.1,0]))
Background36.setSkyColor(x3d.doubleToFloat([0,0,0.1]))

Scene33.addChild(Background36)
Transform37 = x3d.Transform()
Transform37.setDEF("cordsysfloor")
Transform37.setScale(x3d.doubleToFloat([0.175,0.175,0.175]))
Inline38 = x3d.Inline()
Inline38.setDEF("CoordinateAxes")
Inline38.setUrl(["../../X3dForWebAuthors/Chapter03Grouping/CoordinateAxes.x3d","../../../Savage/Tools/Authoring/CoordinateAxes.x3d","https://www.web3d.org/x3d/content/examples/X3dForWebAuthors/Chapter03Grouping/CoordinateAxes.x3d","https://savage.nps.edu/Savage/Tools/Authoring/CoordinateAxes.x3d","../../X3dForWebAuthors/Chapter03Grouping/CoordinateAxes.wrl","../../../Savage/Tools/Authoring/CoordinateAxes.wrl","https://www.web3d.org/x3d/content/examples/X3dForWebAuthors/Chapter03Grouping/CoordinateAxes.wrl","https://savage.nps.edu/Savage/Tools/Authoring/CoordinateAxes.wrl"])

Transform37.addChild(Inline38)

Scene33.addChild(Transform37)

Scene33.addComments(x3d.CommentsBlock("""Authoring hint: these axes are aligned within local coordinate system"""))
Group39 = x3d.Group()
Group39.setDEF("ViewpointGroup")
Viewpoint40 = x3d.Viewpoint()
Viewpoint40.setDescription("Front Up View")
Viewpoint40.setOrientation(x3d.doubleToFloat([-1,-1,0,0.55]))
Viewpoint40.setPosition(x3d.doubleToFloat([-1,2,2.5]))

Group39.addChild(Viewpoint40)
Viewpoint41 = x3d.Viewpoint()
Viewpoint41.setDescription("From Left View")
Viewpoint41.setOrientation(x3d.doubleToFloat([0.3,1,0,-1.57]))
Viewpoint41.setPosition(x3d.doubleToFloat([-2.5,1.5,0]))

Group39.addChild(Viewpoint41)
Viewpoint42 = x3d.Viewpoint()
Viewpoint42.setDescription("Front Mid View")
Viewpoint42.setPosition(x3d.doubleToFloat([0,0.5,1.25]))

Group39.addChild(Viewpoint42)
Viewpoint43 = x3d.Viewpoint()
Viewpoint43.setDescription("Front Feet View")
Viewpoint43.setPosition(x3d.doubleToFloat([0,0,0.75]))

Group39.addChild(Viewpoint43)
Viewpoint44 = x3d.Viewpoint()
Viewpoint44.setDescription("From Right View")
Viewpoint44.setOrientation(x3d.doubleToFloat([0,1,0,1.57]))
Viewpoint44.setPosition(x3d.doubleToFloat([1,1,0]))

Group39.addChild(Viewpoint44)
Viewpoint45 = x3d.Viewpoint()
Viewpoint45.setCenterOfRotation(x3d.doubleToFloat([0,1.65,0]))
Viewpoint45.setDescription("Front Head View")
Viewpoint45.setPosition(x3d.doubleToFloat([0,1.65,0.75]))

Group39.addChild(Viewpoint45)
Viewpoint46 = x3d.Viewpoint()
Viewpoint46.setDescription("Front Mid View")
Viewpoint46.setPosition(x3d.doubleToFloat([0,1,1.75]))

Group39.addChild(Viewpoint46)
Viewpoint47 = x3d.Viewpoint()
Viewpoint47.setDescription("Rear View")
Viewpoint47.setOrientation(x3d.doubleToFloat([0,1,0,3.14]))
Viewpoint47.setPosition(x3d.doubleToFloat([0,1.5,-4]))

Group39.addChild(Viewpoint47)
Viewpoint48 = x3d.Viewpoint()
Viewpoint48.setDescription("Top View")
Viewpoint48.setOrientation(x3d.doubleToFloat([1,0,0,-1.57]))
Viewpoint48.setPosition(x3d.doubleToFloat([0,4,0]))

Group39.addChild(Viewpoint48)
Viewpoint49 = x3d.Viewpoint()
Viewpoint49.setDescription("Bottom View")
Viewpoint49.setOrientation(x3d.doubleToFloat([1,0,0,1.57]))
Viewpoint49.setPosition(x3d.doubleToFloat([0,-4,0]))

Group39.addChild(Viewpoint49)
Viewpoint50 = x3d.Viewpoint()
Viewpoint50.setDescription("Right View")
Viewpoint50.setOrientation(x3d.doubleToFloat([0,1,0,1.57]))
Viewpoint50.setPosition(x3d.doubleToFloat([4,1.5,0]))

Group39.addChild(Viewpoint50)

Scene33.addChild(Group39)
Group51 = x3d.Group()
Group51.setDEF("VisualizationShapes")
Group51.setVisible(False)
Transform52 = x3d.Transform()
Transform52.setScale(x3d.doubleToFloat([5,5,5]))
Transform52.setTranslation(x3d.doubleToFloat([0,2.1,0]))
Shape53 = x3d.Shape()
Shape53.setDEF("jointbox")
Appearance54 = x3d.Appearance()
Material55 = x3d.Material()
Material55.setAmbientIntensity(0.5)
Material55.setDiffuseColor(x3d.doubleToFloat([0,0,0]))
Material55.setShininess(1)

Appearance54.setMaterial(Material55)

Shape53.setAppearance(Appearance54)
IndexedFaceSet56 = x3d.IndexedFaceSet()
IndexedFaceSet56.setCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1])
IndexedFaceSet56.setCreaseAngle(0.1)
Color57 = x3d.Color()
Color57.setColor(x3d.doubleToFloat([1,0,0,0,0,1,0,1,0,1,1,1,0,1,1,1,1,0]))

IndexedFaceSet56.setColor(Color57)
Coordinate58 = x3d.Coordinate()
Coordinate58.setDEF("boxCoords")
Coordinate58.setPoint(x3d.doubleToFloat([0,0.01,0,-0.01,0,0,0,0,0.0157,0.01,0,0,0,0,-0.01,0,-0.01,0]))

IndexedFaceSet56.setCoord(Coordinate58)

Shape53.setGeometry(IndexedFaceSet56)

Transform52.addChild(Shape53)

Group51.addChild(Transform52)
Transform59 = x3d.Transform()
Transform59.setScale(x3d.doubleToFloat([0.1,0.1,0.1]))
Transform59.setTranslation(x3d.doubleToFloat([-0.2,0.773,-0.016]))
Shape60 = x3d.Shape()
Shape60.setDEF("sitebox")
Appearance61 = x3d.Appearance()
Material62 = x3d.Material()
Material62.setAmbientIntensity(1)
Material62.setDiffuseColor(x3d.doubleToFloat([1,0,0]))
Material62.setEmissiveColor(x3d.doubleToFloat([1,0,0]))
Material62.setShininess(0.7)
Material62.setSpecularColor(x3d.doubleToFloat([1,0,0]))

Appearance61.setMaterial(Material62)

Shape60.setAppearance(Appearance61)
IndexedFaceSet63 = x3d.IndexedFaceSet()
IndexedFaceSet63.setCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1])
IndexedFaceSet63.setCreaseAngle(0.1)
Coordinate64 = x3d.Coordinate()
Coordinate64.setUSE("boxCoords")

IndexedFaceSet63.setCoord(Coordinate64)

Shape60.setGeometry(IndexedFaceSet63)

Transform59.addChild(Shape60)

Group51.addChild(Transform59)
Transform65 = x3d.Transform()
Transform65.setScale(x3d.doubleToFloat([0.1,0.1,0.1]))
Transform65.setTranslation(x3d.doubleToFloat([0,0.2,0]))
Shape66 = x3d.Shape()
Appearance67 = x3d.Appearance()
Appearance67.setDEF("SegmentLine")
Material68 = x3d.Material()
Material68.setDiffuseColor(x3d.doubleToFloat([0,1,0]))
Material68.setEmissiveColor(x3d.doubleToFloat([0,1,0]))
Material68.setSpecularColor(x3d.doubleToFloat([0,1,0]))

Appearance67.setMaterial(Material68)

Shape66.setAppearance(Appearance67)
IndexedLineSet69 = x3d.IndexedLineSet()
IndexedLineSet69.setCoordIndex([0,1,-1])
Coordinate70 = x3d.Coordinate()
Coordinate70.setPoint(x3d.doubleToFloat([0,0,0,0,0.0001,0]))

IndexedLineSet69.setCoord(Coordinate70)

Shape66.setGeometry(IndexedLineSet69)

Transform65.addChild(Shape66)

Group51.addChild(Transform65)
Transform71 = x3d.Transform()
Transform71.setScale(x3d.doubleToFloat([0.1,0.1,0.1]))
Transform71.setTranslation(x3d.doubleToFloat([-0.2,0.773,-0.016]))
Shape72 = x3d.Shape()
Shape72.setDEF("skinsphere")
Appearance73 = x3d.Appearance()
Material74 = x3d.Material()
Material74.setAmbientIntensity(0.5)
Material74.setDiffuseColor(x3d.doubleToFloat([0,1,0]))
Material74.setEmissiveColor(x3d.doubleToFloat([0,1,0]))
Material74.setShininess(1)
Material74.setSpecularColor(x3d.doubleToFloat([0,1,0]))

Appearance73.setMaterial(Material74)

Shape72.setAppearance(Appearance73)
Sphere75 = x3d.Sphere()
Sphere75.setRadius(0.005)

Shape72.setGeometry(Sphere75)

Transform71.addChild(Shape72)

Group51.addChild(Transform71)

Scene33.addChild(Group51)
Group76 = x3d.Group()
Group76.setDEF("SpecHumanoid")
Group77 = x3d.Group()
Group77.setDEF("JoeISOHumanoid")
HAnimHumanoid78 = x3d.HAnimHumanoid()
HAnimHumanoid78.setName("Human")
HAnimHumanoid78.setDEF("Joe_Human")
HAnimHumanoid78.setLoa(4)
HAnimHumanoid78.setVersion("2.0")

HAnimHumanoid78.addComments(x3d.CommentsBlock("""original HAnimHumanoid info='\"humanoidVersion=2.0\"'"""))

HAnimHumanoid78.addComments(x3d.CommentsBlock("""<LOD containerField='skin'> (Switch whichChoice='0' and LOD parents each already work in view3dscene)"""))

HAnimHumanoid78.addComments(x3d.CommentsBlock("""</LOD>"""))
MetadataSet79 = x3d.MetadataSet()
MetadataSet79.setName("HAnimHumanoid.info")
MetadataSet79.setReference("https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/ObjectInterfaces.html#Humanoid")
MetadataString80 = x3d.MetadataString()
MetadataString80.setName("humanoidVersion")
MetadataString80.setValue(["2.0"])

MetadataSet79.setMetadata(MetadataString80)

HAnimHumanoid78.setMetadata(MetadataSet79)
HAnimJoint81 = x3d.HAnimJoint()
HAnimJoint81.setName("humanoid_root")
HAnimJoint81.setDEF("Joe_humanoid_root")
HAnimJoint81.setCenter(x3d.doubleToFloat([0,0.875,0]))
HAnimJoint81.setContainerFieldOverride("skeleton")
HAnimSegment82 = x3d.HAnimSegment()
HAnimSegment82.setName("sacrum")
HAnimSegment82.setDEF("Joe_sacrum")
Transform83 = x3d.Transform()
Transform83.setTranslation(x3d.doubleToFloat([0,0.875,0]))
Shape84 = x3d.Shape()
Shape84.setUSE("jointbox")

Transform83.addChild(Shape84)

HAnimSegment82.addChild(Transform83)
Shape85 = x3d.Shape()
Appearance86 = x3d.Appearance()
Appearance86.setUSE("SegmentLine")

Shape85.setAppearance(Appearance86)
IndexedLineSet87 = x3d.IndexedLineSet()
IndexedLineSet87.setCoordIndex([0,1,-1])
Coordinate88 = x3d.Coordinate()
Coordinate88.setPoint(x3d.doubleToFloat([0,0.875,0,0,0.92,0]))

IndexedLineSet87.setCoord(Coordinate88)

Shape85.setGeometry(IndexedLineSet87)

HAnimSegment82.addChild(Shape85)
Transform89 = x3d.Transform()
Transform89.setTranslation(x3d.doubleToFloat([0,0.92,0.08]))
Shape90 = x3d.Shape()
Shape90.setUSE("skinsphere")

Transform89.addChild(Shape90)

HAnimSegment82.addChild(Transform89)
Transform91 = x3d.Transform()
Transform91.setTranslation(x3d.doubleToFloat([0,0.87,-0.022]))
Shape92 = x3d.Shape()
Shape92.setUSE("skinsphere")

Transform91.addChild(Shape92)

HAnimSegment82.addChild(Transform91)

HAnimJoint81.addChild(HAnimSegment82)
HAnimJoint93 = x3d.HAnimJoint()
HAnimJoint93.setName("sacroiliac")
HAnimJoint93.setDEF("Joe_sacroiliac")
HAnimJoint93.setCenter(x3d.doubleToFloat([0,0.92,0]))
HAnimJoint93.setSkinCoordIndex([17,19,20,21,22,23,26,27,73,82,89,91,93])
HAnimJoint93.setSkinCoordWeight(x3d.doubleToFloat([1,1,1,1,1,1,1,1,1,1,0.35,0.35,1]))
HAnimSegment94 = x3d.HAnimSegment()
HAnimSegment94.setName("pelvis")
HAnimSegment94.setDEF("Joe_pelvis")
Transform95 = x3d.Transform()
Transform95.setTranslation(x3d.doubleToFloat([0,0.9149,0.0016]))
Transform96 = x3d.Transform()
Shape97 = x3d.Shape()
Shape97.setUSE("jointbox")

Transform96.addChild(Shape97)

Transform95.addChild(Transform96)

HAnimSegment94.addChild(Transform95)
Shape98 = x3d.Shape()
Appearance99 = x3d.Appearance()
Appearance99.setUSE("SegmentLine")

Shape98.setAppearance(Appearance99)
IndexedLineSet100 = x3d.IndexedLineSet()
IndexedLineSet100.setCoordIndex([0,1,-1,0,2,-1,0,3,-1])
Coordinate101 = x3d.Coordinate()
Coordinate101.setPoint(x3d.doubleToFloat([0,0.92,0,0.0961,0.9124,0,-0.095,0.9171,0.0029,0,1.045,-0.095]))

IndexedLineSet100.setCoord(Coordinate101)

Shape98.setGeometry(IndexedLineSet100)

HAnimSegment94.addChild(Shape98)
HAnimSite102 = x3d.HAnimSite()
HAnimSite102.setName("l_iliocristale_pt")
HAnimSite102.setDEF("Joe_l_iliocristale_pt")
HAnimSite102.setTranslation(x3d.doubleToFloat([0.1425,1.065,0.0033]))
Shape103 = x3d.Shape()
Shape103.setUSE("sitebox")

HAnimSite102.addChild(Shape103)

HAnimSegment94.addChild(HAnimSite102)
HAnimSite104 = x3d.HAnimSite()
HAnimSite104.setName("l_trochanterion_pt")
HAnimSite104.setDEF("Joe_l_trochanterion_pt")
HAnimSite104.setTranslation(x3d.doubleToFloat([0.15,0.9,-0.01]))
Shape105 = x3d.Shape()
Shape105.setUSE("sitebox")

HAnimSite104.addChild(Shape105)

HAnimSegment94.addChild(HAnimSite104)
HAnimSite106 = x3d.HAnimSite()
HAnimSite106.setName("r_iliocristale_pt")
HAnimSite106.setDEF("Joe_r_iliocristale_pt")
HAnimSite106.setTranslation(x3d.doubleToFloat([-0.1425,1.065,0.0033]))
Shape107 = x3d.Shape()
Shape107.setUSE("sitebox")

HAnimSite106.addChild(Shape107)

HAnimSegment94.addChild(HAnimSite106)
HAnimSite108 = x3d.HAnimSite()
HAnimSite108.setName("r_trochanterion_pt")
HAnimSite108.setDEF("Joe_r_trochanterion_pt")
HAnimSite108.setTranslation(x3d.doubleToFloat([-0.15,0.9,-0.01]))
Shape109 = x3d.Shape()
Shape109.setUSE("sitebox")

HAnimSite108.addChild(Shape109)

HAnimSegment94.addChild(HAnimSite108)
HAnimSite110 = x3d.HAnimSite()
HAnimSite110.setName("l_asis_pt")
HAnimSite110.setDEF("Joe_l_asis_pt")
HAnimSite110.setTranslation(x3d.doubleToFloat([0.0935,1.03,0.075]))
Shape111 = x3d.Shape()
Shape111.setUSE("sitebox")

HAnimSite110.addChild(Shape111)

HAnimSegment94.addChild(HAnimSite110)
HAnimSite112 = x3d.HAnimSite()
HAnimSite112.setName("r_asis_pt")
HAnimSite112.setDEF("Joe_r_asis_pt")
HAnimSite112.setTranslation(x3d.doubleToFloat([-0.0935,1.03,0.075]))
Shape113 = x3d.Shape()
Shape113.setUSE("sitebox")

HAnimSite112.addChild(Shape113)

HAnimSegment94.addChild(HAnimSite112)
HAnimSite114 = x3d.HAnimSite()
HAnimSite114.setName("l_psis_pt")
HAnimSite114.setDEF("Joe_l_psis_pt")
HAnimSite114.setTranslation(x3d.doubleToFloat([0.0773,1.019,-0.12]))
Shape115 = x3d.Shape()
Shape115.setUSE("sitebox")

HAnimSite114.addChild(Shape115)

HAnimSegment94.addChild(HAnimSite114)
HAnimSite116 = x3d.HAnimSite()
HAnimSite116.setName("r_psis_pt")
HAnimSite116.setDEF("Joe_r_psis_pt")
HAnimSite116.setTranslation(x3d.doubleToFloat([-0.0773,1.019,-0.12]))
Shape117 = x3d.Shape()
Shape117.setUSE("sitebox")

HAnimSite116.addChild(Shape117)

HAnimSegment94.addChild(HAnimSite116)
HAnimSite118 = x3d.HAnimSite()
HAnimSite118.setName("floormarker_pt")
HAnimSite118.setDEF("Joe_floormarker_pt")
Transform119 = x3d.Transform()
Transform119.setScale(x3d.doubleToFloat([3,3,3]))
Shape120 = x3d.Shape()
Shape120.setUSE("sitebox")

Transform119.addChild(Shape120)

HAnimSite118.addChild(Transform119)

HAnimSegment94.addChild(HAnimSite118)
HAnimSite121 = x3d.HAnimSite()
HAnimSite121.setName("crotch_pt")
HAnimSite121.setDEF("Joe_crotch_pt")
HAnimSite121.setTranslation(x3d.doubleToFloat([0,0.87,-0.022]))
Shape122 = x3d.Shape()
Shape122.setUSE("sitebox")

HAnimSite121.addChild(Shape122)

HAnimSegment94.addChild(HAnimSite121)

HAnimJoint93.addChild(HAnimSegment94)
HAnimJoint123 = x3d.HAnimJoint()
HAnimJoint123.setName("l_hip")
HAnimJoint123.setDEF("Joe_l_hip")
HAnimJoint123.setCenter(x3d.doubleToFloat([0.1,0.92,0]))
HAnimJoint123.setSkinCoordIndex([89,90,94,95,96,97])
HAnimJoint123.setSkinCoordWeight(x3d.doubleToFloat([0.65,1,1,1,1,1]))
HAnimSegment124 = x3d.HAnimSegment()
HAnimSegment124.setName("l_thigh")
HAnimSegment124.setDEF("Joe_l_thigh")
Transform125 = x3d.Transform()
Transform125.setTranslation(x3d.doubleToFloat([0.1,0.92,0]))
Shape126 = x3d.Shape()
Shape126.setUSE("jointbox")

Transform125.addChild(Shape126)

HAnimSegment124.addChild(Transform125)
Shape127 = x3d.Shape()
Appearance128 = x3d.Appearance()
Appearance128.setUSE("SegmentLine")

Shape127.setAppearance(Appearance128)
IndexedLineSet129 = x3d.IndexedLineSet()
IndexedLineSet129.setCoordIndex([0,1,-1])
Coordinate130 = x3d.Coordinate()
Coordinate130.setPoint(x3d.doubleToFloat([0.1,0.92,0,0.115,0.466,0]))

IndexedLineSet129.setCoord(Coordinate130)

Shape127.setGeometry(IndexedLineSet129)

HAnimSegment124.addChild(Shape127)
Transform131 = x3d.Transform()
Transform131.setTranslation(x3d.doubleToFloat([0.1,0.9,0.0775]))
Shape132 = x3d.Shape()
Shape132.setUSE("skinsphere")

Transform131.addChild(Shape132)

HAnimSegment124.addChild(Transform131)
Transform133 = x3d.Transform()
Transform133.setTranslation(x3d.doubleToFloat([0.079,0.92,-0.14]))
Shape134 = x3d.Shape()
Shape134.setUSE("skinsphere")

Transform133.addChild(Shape134)

HAnimSegment124.addChild(Transform133)
Transform135 = x3d.Transform()
Transform135.setTranslation(x3d.doubleToFloat([0.171,0.65,0]))
Shape136 = x3d.Shape()
Shape136.setUSE("skinsphere")

Transform135.addChild(Shape136)

HAnimSegment124.addChild(Transform135)
Transform137 = x3d.Transform()
Transform137.setTranslation(x3d.doubleToFloat([0.02,0.65,0]))
Shape138 = x3d.Shape()
Shape138.setUSE("skinsphere")

Transform137.addChild(Shape138)

HAnimSegment124.addChild(Transform137)
Transform139 = x3d.Transform()
Transform139.setTranslation(x3d.doubleToFloat([0.1,0.65,-0.08]))
Shape140 = x3d.Shape()
Shape140.setUSE("skinsphere")

Transform139.addChild(Shape140)

HAnimSegment124.addChild(Transform139)
Transform141 = x3d.Transform()
Transform141.setTranslation(x3d.doubleToFloat([0.1,0.65,0.07]))
Shape142 = x3d.Shape()
Shape142.setUSE("skinsphere")

Transform141.addChild(Shape142)

HAnimSegment124.addChild(Transform141)
HAnimSite143 = x3d.HAnimSite()
HAnimSite143.setName("l_knee_crease_pt")
HAnimSite143.setDEF("Joe_l_knee_crease_pt")
HAnimSite143.setTranslation(x3d.doubleToFloat([0.115,0.466,-0.055]))
Shape144 = x3d.Shape()
Shape144.setUSE("sitebox")

HAnimSite143.addChild(Shape144)

HAnimSegment124.addChild(HAnimSite143)
HAnimSite145 = x3d.HAnimSite()
HAnimSite145.setName("l_femoral_lateral_epicondyle_pt")
HAnimSite145.setDEF("Joe_l_femoral_lateral_epicondyle_pt")
HAnimSite145.setTranslation(x3d.doubleToFloat([0.17,0.466,0]))
Shape146 = x3d.Shape()
Shape146.setUSE("sitebox")

HAnimSite145.addChild(Shape146)

HAnimSegment124.addChild(HAnimSite145)
HAnimSite147 = x3d.HAnimSite()
HAnimSite147.setName("l_femoral_medial_epicondyle_pt")
HAnimSite147.setDEF("Joe_l_femoral_medial_epicondyle_pt")
HAnimSite147.setTranslation(x3d.doubleToFloat([0.05,0.466,0]))
Shape148 = x3d.Shape()
Shape148.setUSE("sitebox")

HAnimSite147.addChild(Shape148)

HAnimSegment124.addChild(HAnimSite147)

HAnimJoint123.addChild(HAnimSegment124)
HAnimJoint149 = x3d.HAnimJoint()
HAnimJoint149.setName("l_knee")
HAnimJoint149.setDEF("Joe_l_knee")
HAnimJoint149.setCenter(x3d.doubleToFloat([0.115,0.466,0]))
HAnimJoint149.setSkinCoordIndex([334,335,336,337,338,339,340,341])
HAnimJoint149.setSkinCoordWeight(x3d.doubleToFloat([1,1,1,1,1,1,1,1]))
HAnimSegment150 = x3d.HAnimSegment()
HAnimSegment150.setName("l_calf")
HAnimSegment150.setDEF("Joe_l_calf")
Transform151 = x3d.Transform()
Transform151.setTranslation(x3d.doubleToFloat([0.115,0.466,0]))
Shape152 = x3d.Shape()
Shape152.setUSE("jointbox")

Transform151.addChild(Shape152)

HAnimSegment150.addChild(Transform151)
Shape153 = x3d.Shape()
Appearance154 = x3d.Appearance()
Appearance154.setUSE("SegmentLine")

Shape153.setAppearance(Appearance154)
IndexedLineSet155 = x3d.IndexedLineSet()
IndexedLineSet155.setCoordIndex([0,1,-1])
Coordinate156 = x3d.Coordinate()
Coordinate156.setPoint(x3d.doubleToFloat([0.115,0.466,0,0.1,0.069,0]))

IndexedLineSet155.setCoord(Coordinate156)

Shape153.setGeometry(IndexedLineSet155)

HAnimSegment150.addChild(Shape153)
Transform157 = x3d.Transform()
Transform157.setTranslation(x3d.doubleToFloat([0.115,0.466,0.06]))
Shape158 = x3d.Shape()
Shape158.setUSE("skinsphere")

Transform157.addChild(Shape158)

HAnimSegment150.addChild(Transform157)
Transform159 = x3d.Transform()
Transform159.setTranslation(x3d.doubleToFloat([0.115,0.466,-0.055]))
Shape160 = x3d.Shape()
Shape160.setUSE("skinsphere")

Transform159.addChild(Shape160)

HAnimSegment150.addChild(Transform159)
Transform161 = x3d.Transform()
Transform161.setTranslation(x3d.doubleToFloat([0.17,0.466,0]))
Shape162 = x3d.Shape()
Shape162.setUSE("skinsphere")

Transform161.addChild(Shape162)

HAnimSegment150.addChild(Transform161)
Transform163 = x3d.Transform()
Transform163.setTranslation(x3d.doubleToFloat([0.05,0.466,0]))
Shape164 = x3d.Shape()
Shape164.setUSE("skinsphere")

Transform163.addChild(Shape164)

HAnimSegment150.addChild(Transform163)
Transform165 = x3d.Transform()
Transform165.setTranslation(x3d.doubleToFloat([0.17,0.3,0]))
Shape166 = x3d.Shape()
Shape166.setUSE("skinsphere")

Transform165.addChild(Shape166)

HAnimSegment150.addChild(Transform165)
Transform167 = x3d.Transform()
Transform167.setTranslation(x3d.doubleToFloat([0.06,0.3,0]))
Shape168 = x3d.Shape()
Shape168.setUSE("skinsphere")

Transform167.addChild(Shape168)

HAnimSegment150.addChild(Transform167)
Transform169 = x3d.Transform()
Transform169.setTranslation(x3d.doubleToFloat([0.1,0.3,-0.05]))
Shape170 = x3d.Shape()
Shape170.setUSE("skinsphere")

Transform169.addChild(Shape170)

HAnimSegment150.addChild(Transform169)
Transform171 = x3d.Transform()
Transform171.setTranslation(x3d.doubleToFloat([0.1,0.3,0.05]))
Shape172 = x3d.Shape()
Shape172.setUSE("skinsphere")

Transform171.addChild(Shape172)

HAnimSegment150.addChild(Transform171)
HAnimSite173 = x3d.HAnimSite()
HAnimSite173.setName("l_lateral_malleolus_pt")
HAnimSite173.setDEF("Joe_l_lateral_malleolus_pt")
HAnimSite173.setTranslation(x3d.doubleToFloat([0.15,0.07,0]))
Shape174 = x3d.Shape()
Shape174.setUSE("sitebox")

HAnimSite173.addChild(Shape174)

HAnimSegment150.addChild(HAnimSite173)
HAnimSite175 = x3d.HAnimSite()
HAnimSite175.setName("l_medial_malleolus_pt")
HAnimSite175.setDEF("Joe_l_medial_malleolus_pt")
HAnimSite175.setTranslation(x3d.doubleToFloat([0.085,0.086,0.0125]))
Shape176 = x3d.Shape()
Shape176.setUSE("sitebox")

HAnimSite175.addChild(Shape176)

HAnimSegment150.addChild(HAnimSite175)

HAnimJoint149.addChild(HAnimSegment150)
HAnimJoint177 = x3d.HAnimJoint()
HAnimJoint177.setName("l_talocrural")
HAnimJoint177.setDEF("Joe_l_talocrural")
HAnimJoint177.setCenter(x3d.doubleToFloat([0.115,0.069,0]))
HAnimJoint177.setSkinCoordIndex([342,343,344,345])
HAnimJoint177.setSkinCoordWeight(x3d.doubleToFloat([1,1,1,1]))
HAnimSegment178 = x3d.HAnimSegment()
HAnimSegment178.setName("l_talus")
HAnimSegment178.setDEF("Joe_l_talus")
Transform179 = x3d.Transform()
Transform179.setTranslation(x3d.doubleToFloat([0.115,0.069,0]))
Shape180 = x3d.Shape()
Shape180.setUSE("jointbox")

Transform179.addChild(Shape180)

HAnimSegment178.addChild(Transform179)
Shape181 = x3d.Shape()
Appearance182 = x3d.Appearance()
Appearance182.setUSE("SegmentLine")

Shape181.setAppearance(Appearance182)
IndexedLineSet183 = x3d.IndexedLineSet()
IndexedLineSet183.setCoordIndex([0,1,-1])
Coordinate184 = x3d.Coordinate()
Coordinate184.setPoint(x3d.doubleToFloat([0.1,0.069,0,0.115,0.031,0.03]))

IndexedLineSet183.setCoord(Coordinate184)

Shape181.setGeometry(IndexedLineSet183)

HAnimSegment178.addChild(Shape181)
Transform185 = x3d.Transform()
Transform185.setTranslation(x3d.doubleToFloat([0.15,0.07,0]))
Shape186 = x3d.Shape()
Shape186.setUSE("skinsphere")

Transform185.addChild(Shape186)

HAnimSegment178.addChild(Transform185)
Transform187 = x3d.Transform()
Transform187.setTranslation(x3d.doubleToFloat([0.085,0.086,0.0125]))
Shape188 = x3d.Shape()
Shape188.setUSE("skinsphere")

Transform187.addChild(Shape188)

HAnimSegment178.addChild(Transform187)
Transform189 = x3d.Transform()
Transform189.setTranslation(x3d.doubleToFloat([0.115,0.069,-0.045]))
Shape190 = x3d.Shape()
Shape190.setUSE("skinsphere")

Transform189.addChild(Shape190)

HAnimSegment178.addChild(Transform189)
Transform191 = x3d.Transform()
Transform191.setTranslation(x3d.doubleToFloat([0.117,0.0975,0.0615]))
Shape192 = x3d.Shape()
Shape192.setUSE("skinsphere")

Transform191.addChild(Shape192)

HAnimSegment178.addChild(Transform191)
HAnimSite193 = x3d.HAnimSite()
HAnimSite193.setName("l_sphyrion_pt")
HAnimSite193.setDEF("Joe_l_sphyrion_pt")
HAnimSite193.setTranslation(x3d.doubleToFloat([0.09,0.056,0.0125]))
Shape194 = x3d.Shape()
Shape194.setUSE("sitebox")

HAnimSite193.addChild(Shape194)

HAnimSegment178.addChild(HAnimSite193)
HAnimSite195 = x3d.HAnimSite()
HAnimSite195.setName("l_calcaneus_posterior_pt")
HAnimSite195.setDEF("Joe_l_calcaneus_posterior_pt")
HAnimSite195.setTranslation(x3d.doubleToFloat([0.115,0.04,-0.055]))
Shape196 = x3d.Shape()
Shape196.setUSE("sitebox")

HAnimSite195.addChild(Shape196)

HAnimSegment178.addChild(HAnimSite195)

HAnimJoint177.addChild(HAnimSegment178)
HAnimJoint197 = x3d.HAnimJoint()
HAnimJoint197.setName("l_tarsometatarsal_2")
HAnimJoint197.setDEF("Joe_l_tarsometatarsal_2")
HAnimJoint197.setCenter(x3d.doubleToFloat([0.115,0.031,0.03]))
HAnimJoint197.setSkinCoordIndex([346,347,348,71])
HAnimJoint197.setSkinCoordWeight(x3d.doubleToFloat([1,1,1,1]))
HAnimSegment198 = x3d.HAnimSegment()
HAnimSegment198.setName("l_metatarsal_2")
HAnimSegment198.setDEF("Joe_l_metatarsal_2")
Transform199 = x3d.Transform()
Transform199.setTranslation(x3d.doubleToFloat([0.115,0.031,0.03]))
Shape200 = x3d.Shape()
Shape200.setUSE("jointbox")

Transform199.addChild(Shape200)

HAnimSegment198.addChild(Transform199)
Shape201 = x3d.Shape()
Appearance202 = x3d.Appearance()
Appearance202.setUSE("SegmentLine")

Shape201.setAppearance(Appearance202)
IndexedLineSet203 = x3d.IndexedLineSet()
IndexedLineSet203.setCoordIndex([0,1,-1])
Coordinate204 = x3d.Coordinate()
Coordinate204.setPoint(x3d.doubleToFloat([0.115,0.031,0.03,0.115,0.037,0.09]))

IndexedLineSet203.setCoord(Coordinate204)

Shape201.setGeometry(IndexedLineSet203)

HAnimSegment198.addChild(Shape201)
Transform205 = x3d.Transform()
Transform205.setTranslation(x3d.doubleToFloat([0.1375,0.006,-0.03]))
Shape206 = x3d.Shape()
Shape206.setUSE("skinsphere")

Transform205.addChild(Shape206)

HAnimSegment198.addChild(Transform205)
Transform207 = x3d.Transform()
Transform207.setTranslation(x3d.doubleToFloat([0.095,0.006,-0.03]))
Shape208 = x3d.Shape()
Shape208.setUSE("skinsphere")

Transform207.addChild(Shape208)

HAnimSegment198.addChild(Transform207)
Transform209 = x3d.Transform()
Transform209.setTranslation(x3d.doubleToFloat([0.115,0.015,-0.045]))
Shape210 = x3d.Shape()
Shape210.setUSE("skinsphere")

Transform209.addChild(Shape210)

HAnimSegment198.addChild(Transform209)

HAnimJoint197.addChild(HAnimSegment198)
HAnimJoint211 = x3d.HAnimJoint()
HAnimJoint211.setName("l_metatarsophalangeal_2")
HAnimJoint211.setDEF("Joe_l_metatarsophalangeal_2")
HAnimJoint211.setCenter(x3d.doubleToFloat([0.115,0.037,0.09]))
HAnimJoint211.setSkinCoordIndex([349,350,351,352])
HAnimJoint211.setSkinCoordWeight(x3d.doubleToFloat([1,1,1,1]))
HAnimSegment212 = x3d.HAnimSegment()
HAnimSegment212.setName("l_tarsal_proximal_phalanx_2")
HAnimSegment212.setDEF("Joe_l_tarsal_proximal_phalanx_2")
Transform213 = x3d.Transform()
Transform213.setTranslation(x3d.doubleToFloat([0.115,0.037,0.09]))
Shape214 = x3d.Shape()
Shape214.setUSE("jointbox")

Transform213.addChild(Shape214)

HAnimSegment212.addChild(Transform213)
Shape215 = x3d.Shape()
Appearance216 = x3d.Appearance()
Appearance216.setUSE("SegmentLine")

Shape215.setAppearance(Appearance216)
IndexedLineSet217 = x3d.IndexedLineSet()
IndexedLineSet217.setCoordIndex([0,1,-1])
Coordinate218 = x3d.Coordinate()
Coordinate218.setPoint(x3d.doubleToFloat([0.115,0.037,0.09,0.115,0.02,0.122]))

IndexedLineSet217.setCoord(Coordinate218)

Shape215.setGeometry(IndexedLineSet217)

HAnimSegment212.addChild(Shape215)
Transform219 = x3d.Transform()
Transform219.setTranslation(x3d.doubleToFloat([0.115,0.06,0.1]))
Shape220 = x3d.Shape()
Shape220.setUSE("skinsphere")

Transform219.addChild(Shape220)

HAnimSegment212.addChild(Transform219)
Transform221 = x3d.Transform()
Transform221.setTranslation(x3d.doubleToFloat([0.115,0,0.07]))
Shape222 = x3d.Shape()
Shape222.setUSE("skinsphere")

Transform221.addChild(Shape222)

HAnimSegment212.addChild(Transform221)
Transform223 = x3d.Transform()
Transform223.setTranslation(x3d.doubleToFloat([0.165,0,0.07]))
Shape224 = x3d.Shape()
Shape224.setUSE("skinsphere")

Transform223.addChild(Shape224)

HAnimSegment212.addChild(Transform223)
Transform225 = x3d.Transform()
Transform225.setTranslation(x3d.doubleToFloat([0.095,0,0.07]))
Shape226 = x3d.Shape()
Shape226.setUSE("skinsphere")

Transform225.addChild(Shape226)

HAnimSegment212.addChild(Transform225)
HAnimSite227 = x3d.HAnimSite()
HAnimSite227.setName("l_metatarsal_phalanx_1_pt")
HAnimSite227.setDEF("Joe_l_metatarsal_phalanx_1_pt")
HAnimSite227.setTranslation(x3d.doubleToFloat([0.087,0.01,0.122]))
Shape228 = x3d.Shape()
Shape228.setUSE("sitebox")

HAnimSite227.addChild(Shape228)

HAnimSegment212.addChild(HAnimSite227)

HAnimJoint211.addChild(HAnimSegment212)
HAnimJoint229 = x3d.HAnimJoint()
HAnimJoint229.setName("l_metatarsal")
HAnimJoint229.setDEF("Joe_l_metatarsal")
HAnimJoint229.setCenter(x3d.doubleToFloat([0.115,0.02,0.122]))
HAnimJoint229.setSkinCoordIndex([353,354,355,356,357,358,359,360,361])
HAnimJoint229.setSkinCoordWeight(x3d.doubleToFloat([1,1,1,1,1,1,1,1,1]))
HAnimSegment230 = x3d.HAnimSegment()
HAnimSegment230.setName("l_tarsal_distal_phalanx_2")
HAnimSegment230.setDEF("Joe_l_tarsal_distal_phalanx_2")
Transform231 = x3d.Transform()
Transform231.setTranslation(x3d.doubleToFloat([0.115,0.02,0.13]))
Shape232 = x3d.Shape()
Shape232.setUSE("jointbox")

Transform231.addChild(Shape232)

HAnimSegment230.addChild(Transform231)
Shape233 = x3d.Shape()
Appearance234 = x3d.Appearance()
Appearance234.setUSE("SegmentLine")

Shape233.setAppearance(Appearance234)
IndexedLineSet235 = x3d.IndexedLineSet()
IndexedLineSet235.setCoordIndex([0,1,-1])
Coordinate236 = x3d.Coordinate()
Coordinate236.setPoint(x3d.doubleToFloat([0.115,0.02,0.122,0.132,0.013,0.19]))

IndexedLineSet235.setCoord(Coordinate236)

Shape233.setGeometry(IndexedLineSet235)

HAnimSegment230.addChild(Shape233)
Transform237 = x3d.Transform()
Transform237.setTranslation(x3d.doubleToFloat([0.115,0.04,0.13]))
Shape238 = x3d.Shape()
Shape238.setUSE("skinsphere")

Transform237.addChild(Shape238)

HAnimSegment230.addChild(Transform237)
Transform239 = x3d.Transform()
Transform239.setTranslation(x3d.doubleToFloat([0.125,0,0.12]))
Shape240 = x3d.Shape()
Shape240.setUSE("skinsphere")

Transform239.addChild(Shape240)

HAnimSegment230.addChild(Transform239)
Transform241 = x3d.Transform()
Transform241.setTranslation(x3d.doubleToFloat([0.165,0,0.12]))
Shape242 = x3d.Shape()
Shape242.setUSE("skinsphere")

Transform241.addChild(Shape242)

HAnimSegment230.addChild(Transform241)
Transform243 = x3d.Transform()
Transform243.setTranslation(x3d.doubleToFloat([0.087,0,0.122]))
Shape244 = x3d.Shape()
Shape244.setUSE("skinsphere")

Transform243.addChild(Shape244)

HAnimSegment230.addChild(Transform243)
Transform245 = x3d.Transform()
Transform245.setTranslation(x3d.doubleToFloat([0.09,0.012,0.188]))
Shape246 = x3d.Shape()
Shape246.setUSE("skinsphere")

Transform245.addChild(Shape246)

HAnimSegment230.addChild(Transform245)
Transform247 = x3d.Transform()
Transform247.setTranslation(x3d.doubleToFloat([0.11,0.011,0.19]))
Shape248 = x3d.Shape()
Shape248.setUSE("skinsphere")

Transform247.addChild(Shape248)

HAnimSegment230.addChild(Transform247)
Transform249 = x3d.Transform()
Transform249.setTranslation(x3d.doubleToFloat([0.128,0.011,0.185]))
Shape250 = x3d.Shape()
Shape250.setUSE("skinsphere")

Transform249.addChild(Shape250)

HAnimSegment230.addChild(Transform249)
Transform251 = x3d.Transform()
Transform251.setTranslation(x3d.doubleToFloat([0.142,0.011,0.178]))
Shape252 = x3d.Shape()
Shape252.setUSE("skinsphere")

Transform251.addChild(Shape252)

HAnimSegment230.addChild(Transform251)
Transform253 = x3d.Transform()
Transform253.setTranslation(x3d.doubleToFloat([0.154,0.01,0.168]))
Shape254 = x3d.Shape()
Shape254.setUSE("skinsphere")

Transform253.addChild(Shape254)

HAnimSegment230.addChild(Transform253)
HAnimSite255 = x3d.HAnimSite()
HAnimSite255.setName("l_metatarsal_phalanx_5_pt")
HAnimSite255.setDEF("Joe_l_metatarsal_phalanx_5_pt")
HAnimSite255.setTranslation(x3d.doubleToFloat([0.165,0.01,0.12]))
Shape256 = x3d.Shape()
Shape256.setUSE("sitebox")

HAnimSite255.addChild(Shape256)

HAnimSegment230.addChild(HAnimSite255)
HAnimSite257 = x3d.HAnimSite()
HAnimSite257.setName("l_tarsal_distal_phalanx_2_pt")
HAnimSite257.setDEF("Joe_l_tarsal_distal_phalanx_2_pt")
HAnimSite257.setTranslation(x3d.doubleToFloat([0.11,0.011,0.19]))
Shape258 = x3d.Shape()
Shape258.setUSE("sitebox")

HAnimSite257.addChild(Shape258)

HAnimSegment230.addChild(HAnimSite257)

HAnimJoint229.addChild(HAnimSegment230)

HAnimJoint211.addChild(HAnimJoint229)

HAnimJoint197.addChild(HAnimJoint211)

HAnimJoint177.addChild(HAnimJoint197)

HAnimJoint149.addChild(HAnimJoint177)

HAnimJoint123.addChild(HAnimJoint149)

HAnimJoint93.addChild(HAnimJoint123)
HAnimJoint259 = x3d.HAnimJoint()
HAnimJoint259.setName("r_hip")
HAnimJoint259.setDEF("Joe_r_hip")
HAnimJoint259.setCenter(x3d.doubleToFloat([-0.1,0.92,0]))
HAnimJoint259.setSkinCoordIndex([91,92,98,99,100,101])
HAnimJoint259.setSkinCoordWeight(x3d.doubleToFloat([0.65,1,1,1,1,1]))
HAnimSegment260 = x3d.HAnimSegment()
HAnimSegment260.setName("r_thigh")
HAnimSegment260.setDEF("Joe_r_thigh")
Transform261 = x3d.Transform()
Transform261.setTranslation(x3d.doubleToFloat([-0.1,0.92,0]))
Shape262 = x3d.Shape()
Shape262.setUSE("jointbox")

Transform261.addChild(Shape262)

HAnimSegment260.addChild(Transform261)
Shape263 = x3d.Shape()
Appearance264 = x3d.Appearance()
Appearance264.setUSE("SegmentLine")

Shape263.setAppearance(Appearance264)
IndexedLineSet265 = x3d.IndexedLineSet()
IndexedLineSet265.setCoordIndex([0,1,-1])
Coordinate266 = x3d.Coordinate()
Coordinate266.setPoint(x3d.doubleToFloat([-0.1,0.92,0,-0.1,0.4913,0]))

IndexedLineSet265.setCoord(Coordinate266)

Shape263.setGeometry(IndexedLineSet265)

HAnimSegment260.addChild(Shape263)
Transform267 = x3d.Transform()
Transform267.setTranslation(x3d.doubleToFloat([-0.079,0.92,-0.14]))
Shape268 = x3d.Shape()
Shape268.setUSE("skinsphere")

Transform267.addChild(Shape268)

HAnimSegment260.addChild(Transform267)
Transform269 = x3d.Transform()
Transform269.setTranslation(x3d.doubleToFloat([-0.1,0.9,0.075]))
Shape270 = x3d.Shape()
Shape270.setUSE("skinsphere")

Transform269.addChild(Shape270)

HAnimSegment260.addChild(Transform269)
Transform271 = x3d.Transform()
Transform271.setTranslation(x3d.doubleToFloat([-0.171,0.65,0]))
Shape272 = x3d.Shape()
Shape272.setUSE("skinsphere")

Transform271.addChild(Shape272)

HAnimSegment260.addChild(Transform271)
Transform273 = x3d.Transform()
Transform273.setTranslation(x3d.doubleToFloat([-0.02,0.65,0]))
Shape274 = x3d.Shape()
Shape274.setUSE("skinsphere")

Transform273.addChild(Shape274)

HAnimSegment260.addChild(Transform273)
Transform275 = x3d.Transform()
Transform275.setTranslation(x3d.doubleToFloat([-0.1,0.65,-0.08]))
Shape276 = x3d.Shape()
Shape276.setUSE("skinsphere")

Transform275.addChild(Shape276)

HAnimSegment260.addChild(Transform275)
Transform277 = x3d.Transform()
Transform277.setTranslation(x3d.doubleToFloat([-0.1,0.65,0.07]))
Shape278 = x3d.Shape()
Shape278.setUSE("skinsphere")

Transform277.addChild(Shape278)

HAnimSegment260.addChild(Transform277)
HAnimSite279 = x3d.HAnimSite()
HAnimSite279.setName("r_knee_crease_pt")
HAnimSite279.setDEF("Joe_r_knee_crease_pt")
HAnimSite279.setTranslation(x3d.doubleToFloat([-0.115,0.466,-0.055]))
Shape280 = x3d.Shape()
Shape280.setUSE("sitebox")

HAnimSite279.addChild(Shape280)

HAnimSegment260.addChild(HAnimSite279)
HAnimSite281 = x3d.HAnimSite()
HAnimSite281.setName("r_femoral_lateral_epicondyle_pt")
HAnimSite281.setDEF("Joe_r_femoral_lateral_epicondyle_pt")
HAnimSite281.setTranslation(x3d.doubleToFloat([-0.17,0.466,0]))
Shape282 = x3d.Shape()
Shape282.setUSE("sitebox")

HAnimSite281.addChild(Shape282)

HAnimSegment260.addChild(HAnimSite281)
HAnimSite283 = x3d.HAnimSite()
HAnimSite283.setName("r_femoral_medial_epicondyle_pt")
HAnimSite283.setDEF("Joe_r_femoral_medial_epicondyle_pt")
HAnimSite283.setTranslation(x3d.doubleToFloat([-0.05,0.466,0]))
Shape284 = x3d.Shape()
Shape284.setUSE("sitebox")

HAnimSite283.addChild(Shape284)

HAnimSegment260.addChild(HAnimSite283)

HAnimJoint259.addChild(HAnimSegment260)
HAnimJoint285 = x3d.HAnimJoint()
HAnimJoint285.setName("r_knee")
HAnimJoint285.setDEF("Joe_r_knee")
HAnimJoint285.setCenter(x3d.doubleToFloat([-0.05,0.466,0]))
HAnimJoint285.setSkinCoordIndex([362,363,364,365,366,367,368,369])
HAnimJoint285.setSkinCoordWeight(x3d.doubleToFloat([1,1,1,1,1,1,1,1]))
HAnimSegment286 = x3d.HAnimSegment()
HAnimSegment286.setName("r_calf")
HAnimSegment286.setDEF("Joe_r_calf")
Transform287 = x3d.Transform()
Transform287.setTranslation(x3d.doubleToFloat([-0.1,0.4913,0]))
Shape288 = x3d.Shape()
Shape288.setUSE("jointbox")

Transform287.addChild(Shape288)

HAnimSegment286.addChild(Transform287)
Shape289 = x3d.Shape()
Appearance290 = x3d.Appearance()
Appearance290.setUSE("SegmentLine")

Shape289.setAppearance(Appearance290)
IndexedLineSet291 = x3d.IndexedLineSet()
IndexedLineSet291.setCoordIndex([0,1,-1])
Coordinate292 = x3d.Coordinate()
Coordinate292.setPoint(x3d.doubleToFloat([-0.1,0.4913,0,-0.1,0.0712,0]))

IndexedLineSet291.setCoord(Coordinate292)

Shape289.setGeometry(IndexedLineSet291)

HAnimSegment286.addChild(Shape289)
Transform293 = x3d.Transform()
Transform293.setTranslation(x3d.doubleToFloat([-0.115,0.466,0.06]))
Shape294 = x3d.Shape()
Shape294.setUSE("skinsphere")

Transform293.addChild(Shape294)

HAnimSegment286.addChild(Transform293)
Transform295 = x3d.Transform()
Transform295.setTranslation(x3d.doubleToFloat([-0.115,0.466,-0.055]))
Shape296 = x3d.Shape()
Shape296.setUSE("skinsphere")

Transform295.addChild(Shape296)

HAnimSegment286.addChild(Transform295)
Transform297 = x3d.Transform()
Transform297.setTranslation(x3d.doubleToFloat([-0.17,0.466,0]))
Shape298 = x3d.Shape()
Shape298.setUSE("skinsphere")

Transform297.addChild(Shape298)

HAnimSegment286.addChild(Transform297)
Transform299 = x3d.Transform()
Transform299.setTranslation(x3d.doubleToFloat([-0.05,0.466,0]))
Shape300 = x3d.Shape()
Shape300.setUSE("skinsphere")

Transform299.addChild(Shape300)

HAnimSegment286.addChild(Transform299)
Transform301 = x3d.Transform()
Transform301.setTranslation(x3d.doubleToFloat([-0.17,0.3,0]))
Shape302 = x3d.Shape()
Shape302.setUSE("skinsphere")

Transform301.addChild(Shape302)

HAnimSegment286.addChild(Transform301)
Transform303 = x3d.Transform()
Transform303.setTranslation(x3d.doubleToFloat([-0.06,0.3,0]))
Shape304 = x3d.Shape()
Shape304.setUSE("skinsphere")

Transform303.addChild(Shape304)

HAnimSegment286.addChild(Transform303)
Transform305 = x3d.Transform()
Transform305.setTranslation(x3d.doubleToFloat([-0.1,0.3,-0.05]))
Shape306 = x3d.Shape()
Shape306.setUSE("skinsphere")

Transform305.addChild(Shape306)

HAnimSegment286.addChild(Transform305)
Transform307 = x3d.Transform()
Transform307.setTranslation(x3d.doubleToFloat([-0.1,0.3,0.05]))
Shape308 = x3d.Shape()
Shape308.setUSE("skinsphere")

Transform307.addChild(Shape308)

HAnimSegment286.addChild(Transform307)
HAnimSite309 = x3d.HAnimSite()
HAnimSite309.setName("r_lateral_malleolus_pt")
HAnimSite309.setDEF("Joe_r_lateral_malleolus_pt")
HAnimSite309.setTranslation(x3d.doubleToFloat([-0.15,0.07,0]))
Shape310 = x3d.Shape()
Shape310.setUSE("sitebox")

HAnimSite309.addChild(Shape310)

HAnimSegment286.addChild(HAnimSite309)
HAnimSite311 = x3d.HAnimSite()
HAnimSite311.setName("r_medial_malleolus_pt")
HAnimSite311.setDEF("Joe_r_medial_malleolus_pt")
HAnimSite311.setTranslation(x3d.doubleToFloat([-0.085,0.086,0.0125]))
Shape312 = x3d.Shape()
Shape312.setUSE("sitebox")

HAnimSite311.addChild(Shape312)

HAnimSegment286.addChild(HAnimSite311)

HAnimJoint285.addChild(HAnimSegment286)
HAnimJoint313 = x3d.HAnimJoint()
HAnimJoint313.setName("r_talocrural")
HAnimJoint313.setDEF("Joe_r_talocrural")
HAnimJoint313.setCenter(x3d.doubleToFloat([-0.115,0.069,0]))
HAnimJoint313.setSkinCoordIndex([370,371,372,373])
HAnimJoint313.setSkinCoordWeight(x3d.doubleToFloat([1,1,1,1]))
HAnimSegment314 = x3d.HAnimSegment()
HAnimSegment314.setName("r_talus")
HAnimSegment314.setDEF("Joe_r_talus")
Transform315 = x3d.Transform()
Transform315.setTranslation(x3d.doubleToFloat([-0.1,0.0712,0]))
Shape316 = x3d.Shape()
Shape316.setUSE("jointbox")

Transform315.addChild(Shape316)

HAnimSegment314.addChild(Transform315)
Shape317 = x3d.Shape()
Appearance318 = x3d.Appearance()
Appearance318.setUSE("SegmentLine")

Shape317.setAppearance(Appearance318)
IndexedLineSet319 = x3d.IndexedLineSet()
IndexedLineSet319.setCoordIndex([0,1,-1])
Coordinate320 = x3d.Coordinate()
Coordinate320.setPoint(x3d.doubleToFloat([-0.1,0.0712,0,-0.1,0.015,-0.01]))

IndexedLineSet319.setCoord(Coordinate320)

Shape317.setGeometry(IndexedLineSet319)

HAnimSegment314.addChild(Shape317)
Transform321 = x3d.Transform()
Transform321.setTranslation(x3d.doubleToFloat([-0.15,0.07,0]))
Shape322 = x3d.Shape()
Shape322.setUSE("skinsphere")

Transform321.addChild(Shape322)

HAnimSegment314.addChild(Transform321)
Transform323 = x3d.Transform()
Transform323.setTranslation(x3d.doubleToFloat([-0.085,0.086,0.0125]))
Shape324 = x3d.Shape()
Shape324.setUSE("skinsphere")

Transform323.addChild(Shape324)

HAnimSegment314.addChild(Transform323)
Transform325 = x3d.Transform()
Transform325.setTranslation(x3d.doubleToFloat([-0.115,0.069,-0.045]))
Shape326 = x3d.Shape()
Shape326.setUSE("skinsphere")

Transform325.addChild(Shape326)

HAnimSegment314.addChild(Transform325)
Transform327 = x3d.Transform()
Transform327.setTranslation(x3d.doubleToFloat([-0.117,0.0975,0.0615]))
Shape328 = x3d.Shape()
Shape328.setUSE("skinsphere")

Transform327.addChild(Shape328)

HAnimSegment314.addChild(Transform327)
HAnimSite329 = x3d.HAnimSite()
HAnimSite329.setName("r_sphyrion_pt")
HAnimSite329.setDEF("Joe_r_sphyrion_pt")
HAnimSite329.setTranslation(x3d.doubleToFloat([-0.09,0.056,0.0125]))
Shape330 = x3d.Shape()
Shape330.setUSE("sitebox")

HAnimSite329.addChild(Shape330)

HAnimSegment314.addChild(HAnimSite329)
HAnimSite331 = x3d.HAnimSite()
HAnimSite331.setName("r_calcaneus_posterior_pt")
HAnimSite331.setDEF("Joe_r_calcaneus_posterior_pt")
HAnimSite331.setTranslation(x3d.doubleToFloat([-0.115,0.04,-0.055]))
Shape332 = x3d.Shape()
Shape332.setUSE("sitebox")

HAnimSite331.addChild(Shape332)

HAnimSegment314.addChild(HAnimSite331)

HAnimJoint313.addChild(HAnimSegment314)
HAnimJoint333 = x3d.HAnimJoint()
HAnimJoint333.setName("r_tarsometatarsal_2")
HAnimJoint333.setDEF("Joe_r_tarsometatarsal_2")
HAnimJoint333.setCenter(x3d.doubleToFloat([-0.1,0.015,-0.01]))
HAnimJoint333.setSkinCoordIndex([374,375,376])
HAnimJoint333.setSkinCoordWeight(x3d.doubleToFloat([1,1,1]))
HAnimSegment334 = x3d.HAnimSegment()
HAnimSegment334.setName("r_metatarsal_2")
HAnimSegment334.setDEF("Joe_r_metatarsal_2")
Transform335 = x3d.Transform()
Transform335.setTranslation(x3d.doubleToFloat([-0.1,0.015,-0.01]))
Shape336 = x3d.Shape()
Shape336.setUSE("jointbox")

Transform335.addChild(Shape336)

HAnimSegment334.addChild(Transform335)
Shape337 = x3d.Shape()
Appearance338 = x3d.Appearance()
Appearance338.setUSE("SegmentLine")

Shape337.setAppearance(Appearance338)
IndexedLineSet339 = x3d.IndexedLineSet()
IndexedLineSet339.setCoordIndex([0,1,-1])
Coordinate340 = x3d.Coordinate()
Coordinate340.setPoint(x3d.doubleToFloat([-0.1,0.015,-0.01,-0.1,0.02,0.07]))

IndexedLineSet339.setCoord(Coordinate340)

Shape337.setGeometry(IndexedLineSet339)

HAnimSegment334.addChild(Shape337)
Transform341 = x3d.Transform()
Transform341.setTranslation(x3d.doubleToFloat([-0.1375,0.006,-0.03]))
Shape342 = x3d.Shape()
Shape342.setUSE("skinsphere")

Transform341.addChild(Shape342)

HAnimSegment334.addChild(Transform341)
Transform343 = x3d.Transform()
Transform343.setTranslation(x3d.doubleToFloat([-0.095,0.006,-0.03]))
Shape344 = x3d.Shape()
Shape344.setUSE("skinsphere")

Transform343.addChild(Shape344)

HAnimSegment334.addChild(Transform343)
Transform345 = x3d.Transform()
Transform345.setTranslation(x3d.doubleToFloat([-0.095,0.006,-0.03]))
Shape346 = x3d.Shape()
Shape346.setUSE("skinsphere")

Transform345.addChild(Shape346)

HAnimSegment334.addChild(Transform345)

HAnimJoint333.addChild(HAnimSegment334)
HAnimJoint347 = x3d.HAnimJoint()
HAnimJoint347.setName("r_metatarsophalangeal_2")
HAnimJoint347.setDEF("Joe_r_metatarsophalangeal_2")
HAnimJoint347.setCenter(x3d.doubleToFloat([-0.115,0.037,0.09]))
HAnimJoint347.setSkinCoordIndex([377,378,379,380])
HAnimJoint347.setSkinCoordWeight(x3d.doubleToFloat([1,1,1,1]))
HAnimSegment348 = x3d.HAnimSegment()
HAnimSegment348.setName("r_tarsal_proximal_phalanx_2")
HAnimSegment348.setDEF("Joe_r_tarsal_proximal_phalanx_2")
Transform349 = x3d.Transform()
Transform349.setTranslation(x3d.doubleToFloat([-0.1,0.02,0.07]))
Shape350 = x3d.Shape()
Shape350.setUSE("jointbox")

Transform349.addChild(Shape350)

HAnimSegment348.addChild(Transform349)
Shape351 = x3d.Shape()
Appearance352 = x3d.Appearance()
Appearance352.setUSE("SegmentLine")

Shape351.setAppearance(Appearance352)
IndexedLineSet353 = x3d.IndexedLineSet()
IndexedLineSet353.setCoordIndex([0,1,-1])
Coordinate354 = x3d.Coordinate()
Coordinate354.setPoint(x3d.doubleToFloat([-0.1,0.02,0.07,-0.1,0.01,0.14]))

IndexedLineSet353.setCoord(Coordinate354)

Shape351.setGeometry(IndexedLineSet353)

HAnimSegment348.addChild(Shape351)
Transform355 = x3d.Transform()
Transform355.setTranslation(x3d.doubleToFloat([-0.115,0.06,0.1]))
Shape356 = x3d.Shape()
Shape356.setUSE("skinsphere")

Transform355.addChild(Shape356)

HAnimSegment348.addChild(Transform355)
Transform357 = x3d.Transform()
Transform357.setTranslation(x3d.doubleToFloat([-0.115,0,0.07]))
Shape358 = x3d.Shape()
Shape358.setUSE("skinsphere")

Transform357.addChild(Shape358)

HAnimSegment348.addChild(Transform357)
Transform359 = x3d.Transform()
Transform359.setTranslation(x3d.doubleToFloat([-0.165,0,0.07]))
Shape360 = x3d.Shape()
Shape360.setUSE("skinsphere")

Transform359.addChild(Shape360)

HAnimSegment348.addChild(Transform359)
Transform361 = x3d.Transform()
Transform361.setTranslation(x3d.doubleToFloat([-0.165,0,0.07]))
Shape362 = x3d.Shape()
Shape362.setUSE("skinsphere")

Transform361.addChild(Shape362)

HAnimSegment348.addChild(Transform361)
HAnimSite363 = x3d.HAnimSite()
HAnimSite363.setName("r_metatarsal_phalanx_1_pt")
HAnimSite363.setDEF("Joe_r_metatarsal_phalanx_1_pt")
HAnimSite363.setTranslation(x3d.doubleToFloat([-0.115,0.02,0.122]))
Shape364 = x3d.Shape()
Shape364.setUSE("sitebox")

HAnimSite363.addChild(Shape364)

HAnimSegment348.addChild(HAnimSite363)

HAnimJoint347.addChild(HAnimSegment348)
HAnimJoint365 = x3d.HAnimJoint()
HAnimJoint365.setName("r_tarsal_distal_interphalangeal_2")
HAnimJoint365.setDEF("Joe_r_tarsal_distal_interphalangeal_2")
HAnimJoint365.setCenter(x3d.doubleToFloat([-0.1,0.01,0.14]))
HAnimJoint365.setSkinCoordIndex([381,382,383,384,385,386,387,388,389])
HAnimJoint365.setSkinCoordWeight(x3d.doubleToFloat([1,1,1,1,1,1,1,1,1]))
HAnimSegment366 = x3d.HAnimSegment()
HAnimSegment366.setName("r_tarsal_distal_phalanx_2")
HAnimSegment366.setDEF("Joe_r_tarsal_distal_phalanx_2")
Transform367 = x3d.Transform()
Transform367.setTranslation(x3d.doubleToFloat([-0.1086,0.01,0.14]))
Shape368 = x3d.Shape()
Shape368.setUSE("jointbox")

Transform367.addChild(Shape368)

HAnimSegment366.addChild(Transform367)
Shape369 = x3d.Shape()
Appearance370 = x3d.Appearance()
Appearance370.setUSE("SegmentLine")

Shape369.setAppearance(Appearance370)
IndexedLineSet371 = x3d.IndexedLineSet()
IndexedLineSet371.setCoordIndex([0,1,-1])
Coordinate372 = x3d.Coordinate()
Coordinate372.setPoint(x3d.doubleToFloat([-0.1,0.01,0.14,-0.1043,0.0016,0.2]))

IndexedLineSet371.setCoord(Coordinate372)

Shape369.setGeometry(IndexedLineSet371)

HAnimSegment366.addChild(Shape369)
Transform373 = x3d.Transform()
Transform373.setTranslation(x3d.doubleToFloat([-0.115,0.04,0.13]))
Shape374 = x3d.Shape()
Shape374.setUSE("skinsphere")

Transform373.addChild(Shape374)

HAnimSegment366.addChild(Transform373)
Transform375 = x3d.Transform()
Transform375.setTranslation(x3d.doubleToFloat([-0.125,0,0.12]))
Shape376 = x3d.Shape()
Shape376.setUSE("skinsphere")

Transform375.addChild(Shape376)

HAnimSegment366.addChild(Transform375)
Transform377 = x3d.Transform()
Transform377.setTranslation(x3d.doubleToFloat([-0.165,0,0.12]))
Shape378 = x3d.Shape()
Shape378.setUSE("skinsphere")

Transform377.addChild(Shape378)

HAnimSegment366.addChild(Transform377)
Transform379 = x3d.Transform()
Transform379.setTranslation(x3d.doubleToFloat([-0.087,0,0.122]))
Shape380 = x3d.Shape()
Shape380.setUSE("skinsphere")

Transform379.addChild(Shape380)

HAnimSegment366.addChild(Transform379)
Transform381 = x3d.Transform()
Transform381.setTranslation(x3d.doubleToFloat([-0.09,0.012,0.188]))
Shape382 = x3d.Shape()
Shape382.setUSE("skinsphere")

Transform381.addChild(Shape382)

HAnimSegment366.addChild(Transform381)
Transform383 = x3d.Transform()
Transform383.setTranslation(x3d.doubleToFloat([-0.11,0.011,0.19]))
Shape384 = x3d.Shape()
Shape384.setUSE("skinsphere")

Transform383.addChild(Shape384)

HAnimSegment366.addChild(Transform383)
Transform385 = x3d.Transform()
Transform385.setTranslation(x3d.doubleToFloat([-0.128,0.011,0.185]))
Shape386 = x3d.Shape()
Shape386.setUSE("skinsphere")

Transform385.addChild(Shape386)

HAnimSegment366.addChild(Transform385)
Transform387 = x3d.Transform()
Transform387.setTranslation(x3d.doubleToFloat([-0.142,0.011,0.178]))
Shape388 = x3d.Shape()
Shape388.setUSE("skinsphere")

Transform387.addChild(Shape388)

HAnimSegment366.addChild(Transform387)
Transform389 = x3d.Transform()
Transform389.setTranslation(x3d.doubleToFloat([-0.154,0.01,0.168]))
Shape390 = x3d.Shape()
Shape390.setUSE("skinsphere")

Transform389.addChild(Shape390)

HAnimSegment366.addChild(Transform389)
HAnimSite391 = x3d.HAnimSite()
HAnimSite391.setName("r_metatarsal_phalanx_5_pt")
HAnimSite391.setDEF("Joe_r_metatarsal_phalanx_5_pt")
HAnimSite391.setTranslation(x3d.doubleToFloat([-0.165,0.01,0.12]))
Shape392 = x3d.Shape()
Shape392.setUSE("sitebox")

HAnimSite391.addChild(Shape392)

HAnimSegment366.addChild(HAnimSite391)
HAnimSite393 = x3d.HAnimSite()
HAnimSite393.setName("r_tarsal_distal_phalanx_2_pt")
HAnimSite393.setDEF("Joe_r_tarsal_distal_phalanx_2_pt")
HAnimSite393.setTranslation(x3d.doubleToFloat([-0.11,0.011,0.19]))
Shape394 = x3d.Shape()
Shape394.setUSE("sitebox")

HAnimSite393.addChild(Shape394)

HAnimSegment366.addChild(HAnimSite393)

HAnimJoint365.addChild(HAnimSegment366)

HAnimJoint347.addChild(HAnimJoint365)

HAnimJoint333.addChild(HAnimJoint347)

HAnimJoint313.addChild(HAnimJoint333)

HAnimJoint285.addChild(HAnimJoint313)

HAnimJoint259.addChild(HAnimJoint285)

HAnimJoint93.addChild(HAnimJoint259)

HAnimJoint81.addChild(HAnimJoint93)
HAnimJoint395 = x3d.HAnimJoint()
HAnimJoint395.setName("vl5")
HAnimJoint395.setDEF("Joe_vl5")
HAnimJoint395.setCenter(x3d.doubleToFloat([0,1.045,-0.095]))
HAnimJoint395.setSkinCoordIndex([28,76])
HAnimJoint395.setSkinCoordWeight(x3d.doubleToFloat([1,1]))
HAnimSegment396 = x3d.HAnimSegment()
HAnimSegment396.setName("toPelvis")
HAnimSegment396.setDEF("Joe_toPelvis")
Shape397 = x3d.Shape()
Appearance398 = x3d.Appearance()
Appearance398.setUSE("SegmentLine")

Shape397.setAppearance(Appearance398)
IndexedLineSet399 = x3d.IndexedLineSet()
IndexedLineSet399.setCoordIndex([0,1,-1])
Coordinate400 = x3d.Coordinate()
Coordinate400.setPoint(x3d.doubleToFloat([0,1.045,-0.095,0,0.9149,0.0016]))

IndexedLineSet399.setCoord(Coordinate400)

Shape397.setGeometry(IndexedLineSet399)

HAnimSegment396.addChild(Shape397)

HAnimJoint395.addChild(HAnimSegment396)
HAnimSegment401 = x3d.HAnimSegment()
HAnimSegment401.setName("l5")
HAnimSegment401.setDEF("Joe_l5")
Shape402 = x3d.Shape()
Appearance403 = x3d.Appearance()
Appearance403.setUSE("SegmentLine")

Shape402.setAppearance(Appearance403)
IndexedLineSet404 = x3d.IndexedLineSet()
IndexedLineSet404.setCoordIndex([0,1,-1])
Coordinate405 = x3d.Coordinate()
Coordinate405.setPoint(x3d.doubleToFloat([0,1.045,-0.095,0,1.068,-0.085]))

IndexedLineSet404.setCoord(Coordinate405)

Shape402.setGeometry(IndexedLineSet404)

HAnimSegment401.addChild(Shape402)
HAnimSite406 = x3d.HAnimSite()
HAnimSite406.setName("waist_preferred_posterior_pt")
HAnimSite406.setDEF("Joe_waist_preferred_posterior_pt")
HAnimSite406.setTranslation(x3d.doubleToFloat([0,1.0915,-0.1091]))
Shape407 = x3d.Shape()
Shape407.setUSE("sitebox")

HAnimSite406.addChild(Shape407)

HAnimSegment401.addChild(HAnimSite406)
HAnimSite408 = x3d.HAnimSite()
HAnimSite408.setName("navel_pt")
HAnimSite408.setDEF("Joe_navel_pt")
HAnimSite408.setTranslation(x3d.doubleToFloat([0,1.0723,0.09]))
Shape409 = x3d.Shape()
Shape409.setUSE("sitebox")

HAnimSite408.addChild(Shape409)

HAnimSegment401.addChild(HAnimSite408)

HAnimJoint395.addChild(HAnimSegment401)
HAnimJoint410 = x3d.HAnimJoint()
HAnimJoint410.setName("vl4")
HAnimJoint410.setDEF("Joe_vl4")
HAnimJoint410.setCenter(x3d.doubleToFloat([0,1.068,-0.085]))
HAnimSegment411 = x3d.HAnimSegment()
HAnimSegment411.setName("l4")
HAnimSegment411.setDEF("Joe_l4")
Shape412 = x3d.Shape()
Appearance413 = x3d.Appearance()
Appearance413.setUSE("SegmentLine")

Shape412.setAppearance(Appearance413)
IndexedLineSet414 = x3d.IndexedLineSet()
IndexedLineSet414.setCoordIndex([0,1,-1])
Coordinate415 = x3d.Coordinate()
Coordinate415.setPoint(x3d.doubleToFloat([0,1.068,-0.085,0,1.092,-0.0725]))

IndexedLineSet414.setCoord(Coordinate415)

Shape412.setGeometry(IndexedLineSet414)

HAnimSegment411.addChild(Shape412)
Transform416 = x3d.Transform()
Transform416.setTranslation(x3d.doubleToFloat([0,1.068,-0.085]))
Shape417 = x3d.Shape()
Shape417.setUSE("jointbox")

Transform416.addChild(Shape417)

HAnimSegment411.addChild(Transform416)

HAnimJoint410.addChild(HAnimSegment411)
HAnimJoint418 = x3d.HAnimJoint()
HAnimJoint418.setName("vl3")
HAnimJoint418.setDEF("Joe_vl3")
HAnimJoint418.setCenter(x3d.doubleToFloat([0,1.092,-0.0725]))
HAnimSegment419 = x3d.HAnimSegment()
HAnimSegment419.setName("l3")
HAnimSegment419.setDEF("Joe_l3")
Shape420 = x3d.Shape()
Appearance421 = x3d.Appearance()
Appearance421.setUSE("SegmentLine")

Shape420.setAppearance(Appearance421)
IndexedLineSet422 = x3d.IndexedLineSet()
IndexedLineSet422.setCoordIndex([0,1,-1])
Coordinate423 = x3d.Coordinate()
Coordinate423.setPoint(x3d.doubleToFloat([0,1.092,-0.0725,0,1.12,-0.065]))

IndexedLineSet422.setCoord(Coordinate423)

Shape420.setGeometry(IndexedLineSet422)

HAnimSegment419.addChild(Shape420)
Transform424 = x3d.Transform()
Transform424.setTranslation(x3d.doubleToFloat([0,1.092,-0.0725]))
Shape425 = x3d.Shape()
Shape425.setUSE("jointbox")

Transform424.addChild(Shape425)

HAnimSegment419.addChild(Transform424)

HAnimJoint418.addChild(HAnimSegment419)
HAnimJoint426 = x3d.HAnimJoint()
HAnimJoint426.setName("vl2")
HAnimJoint426.setDEF("Joe_vl2")
HAnimJoint426.setCenter(x3d.doubleToFloat([0,1.12,-0.065]))
HAnimJoint426.setSkinCoordIndex([16,18,25,83,84,85,86,87,88])
HAnimJoint426.setSkinCoordWeight(x3d.doubleToFloat([1,1,1,1,1,1,0.7,1,0.8]))
HAnimSegment427 = x3d.HAnimSegment()
HAnimSegment427.setName("l2")
HAnimSegment427.setDEF("Joe_l2")
Shape428 = x3d.Shape()
Appearance429 = x3d.Appearance()
Appearance429.setUSE("SegmentLine")

Shape428.setAppearance(Appearance429)
IndexedLineSet430 = x3d.IndexedLineSet()
IndexedLineSet430.setCoordIndex([0,1,-1])
Coordinate431 = x3d.Coordinate()
Coordinate431.setPoint(x3d.doubleToFloat([0,1.12,-0.065,0,1.1459,-0.0625]))

IndexedLineSet430.setCoord(Coordinate431)

Shape428.setGeometry(IndexedLineSet430)

HAnimSegment427.addChild(Shape428)
Transform432 = x3d.Transform()
Transform432.setTranslation(x3d.doubleToFloat([0,1.12,-0.065]))
Shape433 = x3d.Shape()
Shape433.setUSE("jointbox")

Transform432.addChild(Shape433)

HAnimSegment427.addChild(Transform432)
Transform434 = x3d.Transform()
Transform434.setTranslation(x3d.doubleToFloat([-0.087,1.19,-0.09]))
Shape435 = x3d.Shape()
Shape435.setUSE("skinsphere")

Transform434.addChild(Shape435)

HAnimSegment427.addChild(Transform434)
Transform436 = x3d.Transform()
Transform436.setTranslation(x3d.doubleToFloat([0.087,1.19,-0.09]))
Shape437 = x3d.Shape()
Shape437.setUSE("skinsphere")

Transform436.addChild(Shape437)

HAnimSegment427.addChild(Transform436)
Transform438 = x3d.Transform()
Transform438.setTranslation(x3d.doubleToFloat([0.172,1.32,-0.03]))
Shape439 = x3d.Shape()
Shape439.setUSE("skinsphere")

Transform438.addChild(Shape439)

HAnimSegment427.addChild(Transform438)
Transform440 = x3d.Transform()
Transform440.setTranslation(x3d.doubleToFloat([-0.172,1.32,-0.03]))
Shape441 = x3d.Shape()
Shape441.setUSE("skinsphere")

Transform440.addChild(Shape441)

HAnimSegment427.addChild(Transform440)
Transform442 = x3d.Transform()
Transform442.setTranslation(x3d.doubleToFloat([0.15,1.23,-0.015]))
Shape443 = x3d.Shape()
Shape443.setUSE("skinsphere")

Transform442.addChild(Shape443)

HAnimSegment427.addChild(Transform442)
Transform444 = x3d.Transform()
Transform444.setTranslation(x3d.doubleToFloat([-0.15,1.23,-0.015]))
Shape445 = x3d.Shape()
Shape445.setUSE("skinsphere")

Transform444.addChild(Shape445)

HAnimSegment427.addChild(Transform444)
HAnimSite446 = x3d.HAnimSite()
HAnimSite446.setName("r_rib10_pt")
HAnimSite446.setDEF("Joe_r_rib10_pt")
HAnimSite446.setTranslation(x3d.doubleToFloat([-0.087,1.19,0.09]))
Shape447 = x3d.Shape()
Shape447.setUSE("sitebox")

HAnimSite446.addChild(Shape447)

HAnimSegment427.addChild(HAnimSite446)
HAnimSite448 = x3d.HAnimSite()
HAnimSite448.setName("l_rib10_pt")
HAnimSite448.setDEF("Joe_l_rib10_pt")
HAnimSite448.setTranslation(x3d.doubleToFloat([0.087,1.19,0.09]))
Shape449 = x3d.Shape()
Shape449.setUSE("sitebox")

HAnimSite448.addChild(Shape449)

HAnimSegment427.addChild(HAnimSite448)
HAnimSite450 = x3d.HAnimSite()
HAnimSite450.setName("rib10_midspine_pt")
HAnimSite450.setDEF("Joe_rib10_midspine_pt")
HAnimSite450.setTranslation(x3d.doubleToFloat([0,1.1908,-0.1113]))
Shape451 = x3d.Shape()
Shape451.setUSE("sitebox")

HAnimSite450.addChild(Shape451)

HAnimSegment427.addChild(HAnimSite450)

HAnimJoint426.addChild(HAnimSegment427)
HAnimJoint452 = x3d.HAnimJoint()
HAnimJoint452.setName("vl1")
HAnimJoint452.setDEF("Joe_vl1")
HAnimJoint452.setCenter(x3d.doubleToFloat([0,1.1459,-0.0625]))
HAnimSegment453 = x3d.HAnimSegment()
HAnimSegment453.setName("l1")
HAnimSegment453.setDEF("Joe_l1")
Shape454 = x3d.Shape()
Appearance455 = x3d.Appearance()
Appearance455.setUSE("SegmentLine")

Shape454.setAppearance(Appearance455)
IndexedLineSet456 = x3d.IndexedLineSet()
IndexedLineSet456.setCoordIndex([0,1,-1])
Coordinate457 = x3d.Coordinate()
Coordinate457.setPoint(x3d.doubleToFloat([0,1.1459,-0.0625,0,1.179,-0.068]))

IndexedLineSet456.setCoord(Coordinate457)

Shape454.setGeometry(IndexedLineSet456)

HAnimSegment453.addChild(Shape454)
Transform458 = x3d.Transform()
Transform458.setTranslation(x3d.doubleToFloat([0,1.1459,-0.0625]))
Shape459 = x3d.Shape()
Shape459.setUSE("jointbox")

Transform458.addChild(Shape459)

HAnimSegment453.addChild(Transform458)

HAnimJoint452.addChild(HAnimSegment453)
HAnimJoint460 = x3d.HAnimJoint()
HAnimJoint460.setName("vt12")
HAnimJoint460.setDEF("Joe_vt12")
HAnimJoint460.setCenter(x3d.doubleToFloat([0,1.179,-0.068]))
HAnimSegment461 = x3d.HAnimSegment()
HAnimSegment461.setName("t12")
HAnimSegment461.setDEF("Joe_t12")
Shape462 = x3d.Shape()
Appearance463 = x3d.Appearance()
Appearance463.setUSE("SegmentLine")

Shape462.setAppearance(Appearance463)
IndexedLineSet464 = x3d.IndexedLineSet()
IndexedLineSet464.setCoordIndex([0,1,-1])
Coordinate465 = x3d.Coordinate()
Coordinate465.setPoint(x3d.doubleToFloat([0,1.179,-0.068,0,1.242,-0.09]))

IndexedLineSet464.setCoord(Coordinate465)

Shape462.setGeometry(IndexedLineSet464)

HAnimSegment461.addChild(Shape462)
Transform466 = x3d.Transform()
Transform466.setTranslation(x3d.doubleToFloat([0,1.179,-0.068]))
Shape467 = x3d.Shape()
Shape467.setUSE("jointbox")

Transform466.addChild(Shape467)

HAnimSegment461.addChild(Transform466)

HAnimJoint460.addChild(HAnimSegment461)
HAnimJoint468 = x3d.HAnimJoint()
HAnimJoint468.setName("vt11")
HAnimJoint468.setDEF("Joe_vt11")
HAnimJoint468.setCenter(x3d.doubleToFloat([0,1.2679,-0.081]))
HAnimSegment469 = x3d.HAnimSegment()
HAnimSegment469.setName("t11")
HAnimSegment469.setDEF("Joe_t11")
Shape470 = x3d.Shape()
Appearance471 = x3d.Appearance()
Appearance471.setUSE("SegmentLine")

Shape470.setAppearance(Appearance471)
IndexedLineSet472 = x3d.IndexedLineSet()
IndexedLineSet472.setCoordIndex([0,1,-1])
Coordinate473 = x3d.Coordinate()
Coordinate473.setPoint(x3d.doubleToFloat([0,1.2145,-0.0755,0,1.242,-0.09]))

IndexedLineSet472.setCoord(Coordinate473)

Shape470.setGeometry(IndexedLineSet472)

HAnimSegment469.addChild(Shape470)
Transform474 = x3d.Transform()
Transform474.setTranslation(x3d.doubleToFloat([0,1.2145,-0.0755]))
Shape475 = x3d.Shape()
Shape475.setUSE("jointbox")

Transform474.addChild(Shape475)

HAnimSegment469.addChild(Transform474)

HAnimJoint468.addChild(HAnimSegment469)
HAnimJoint476 = x3d.HAnimJoint()
HAnimJoint476.setName("vt10")
HAnimJoint476.setDEF("Joe_vt10")
HAnimJoint476.setCenter(x3d.doubleToFloat([0,1.242,-0.09]))
HAnimJoint476.setSkinCoordIndex([15])
HAnimJoint476.setSkinCoordWeight(x3d.doubleToFloat([1]))
HAnimSegment477 = x3d.HAnimSegment()
HAnimSegment477.setName("t10")
HAnimSegment477.setDEF("Joe_t10")
Shape478 = x3d.Shape()
Appearance479 = x3d.Appearance()
Appearance479.setUSE("SegmentLine")

Shape478.setAppearance(Appearance479)
IndexedLineSet480 = x3d.IndexedLineSet()
IndexedLineSet480.setCoordIndex([0,1,-1])
Coordinate481 = x3d.Coordinate()
Coordinate481.setPoint(x3d.doubleToFloat([0,1.242,-0.09,0,1.268,-0.1]))

IndexedLineSet480.setCoord(Coordinate481)

Shape478.setGeometry(IndexedLineSet480)

HAnimSegment477.addChild(Shape478)
Transform482 = x3d.Transform()
Transform482.setTranslation(x3d.doubleToFloat([0,1.242,-0.09]))
Shape483 = x3d.Shape()
Shape483.setUSE("jointbox")

Transform482.addChild(Shape483)

HAnimSegment477.addChild(Transform482)
HAnimSite484 = x3d.HAnimSite()
HAnimSite484.setName("substernale_pt")
HAnimSite484.setDEF("Joe_substernale_pt")
HAnimSite484.setTranslation(x3d.doubleToFloat([0,1.25,0.113]))
Shape485 = x3d.Shape()
Shape485.setUSE("sitebox")

HAnimSite484.addChild(Shape485)

HAnimSegment477.addChild(HAnimSite484)

HAnimJoint476.addChild(HAnimSegment477)
HAnimJoint486 = x3d.HAnimJoint()
HAnimJoint486.setName("vt9")
HAnimJoint486.setDEF("Joe_vt9")
HAnimJoint486.setCenter(x3d.doubleToFloat([0,1.268,-0.1]))
HAnimJoint486.setSkinCoordIndex([13,14])
HAnimJoint486.setSkinCoordWeight(x3d.doubleToFloat([1,1]))
HAnimSegment487 = x3d.HAnimSegment()
HAnimSegment487.setName("t9")
HAnimSegment487.setDEF("Joe_t9")
Shape488 = x3d.Shape()
Appearance489 = x3d.Appearance()
Appearance489.setUSE("SegmentLine")

Shape488.setAppearance(Appearance489)
IndexedLineSet490 = x3d.IndexedLineSet()
IndexedLineSet490.setCoordIndex([0,1,-1])
Coordinate491 = x3d.Coordinate()
Coordinate491.setPoint(x3d.doubleToFloat([0,1.268,-0.1,0,1.294,-0.11]))

IndexedLineSet490.setCoord(Coordinate491)

Shape488.setGeometry(IndexedLineSet490)

HAnimSegment487.addChild(Shape488)
Transform492 = x3d.Transform()
Transform492.setTranslation(x3d.doubleToFloat([0,1.268,-0.1]))
Shape493 = x3d.Shape()
Shape493.setUSE("jointbox")

Transform492.addChild(Shape493)

HAnimSegment487.addChild(Transform492)
HAnimSite494 = x3d.HAnimSite()
HAnimSite494.setName("r_thelion_pt")
HAnimSite494.setDEF("Joe_r_thelion_pt")
HAnimSite494.setTranslation(x3d.doubleToFloat([-0.1135,1.318,0.095]))
Shape495 = x3d.Shape()
Shape495.setUSE("sitebox")

HAnimSite494.addChild(Shape495)

HAnimSegment487.addChild(HAnimSite494)
HAnimSite496 = x3d.HAnimSite()
HAnimSite496.setName("l_thelion_pt")
HAnimSite496.setDEF("Joe_l_thelion_pt")
HAnimSite496.setTranslation(x3d.doubleToFloat([0.1135,1.318,0.095]))
Shape497 = x3d.Shape()
Shape497.setUSE("sitebox")

HAnimSite496.addChild(Shape497)

HAnimSegment487.addChild(HAnimSite496)

HAnimJoint486.addChild(HAnimSegment487)
HAnimJoint498 = x3d.HAnimJoint()
HAnimJoint498.setName("vt8")
HAnimJoint498.setDEF("Joe_vt8")
HAnimJoint498.setCenter(x3d.doubleToFloat([0,1.294,-0.11]))
HAnimSegment499 = x3d.HAnimSegment()
HAnimSegment499.setName("t8")
HAnimSegment499.setDEF("Joe_t8")
Shape500 = x3d.Shape()
Appearance501 = x3d.Appearance()
Appearance501.setUSE("SegmentLine")

Shape500.setAppearance(Appearance501)
IndexedLineSet502 = x3d.IndexedLineSet()
IndexedLineSet502.setCoordIndex([0,1,-1])
Coordinate503 = x3d.Coordinate()
Coordinate503.setPoint(x3d.doubleToFloat([0,1.294,-0.11,0,1.352,-0.12]))

IndexedLineSet502.setCoord(Coordinate503)

Shape500.setGeometry(IndexedLineSet502)

HAnimSegment499.addChild(Shape500)
Transform504 = x3d.Transform()
Transform504.setTranslation(x3d.doubleToFloat([0,1.294,-0.11]))
Shape505 = x3d.Shape()
Shape505.setUSE("jointbox")

Transform504.addChild(Shape505)

HAnimSegment499.addChild(Transform504)

HAnimJoint498.addChild(HAnimSegment499)
HAnimJoint506 = x3d.HAnimJoint()
HAnimJoint506.setName("vt7")
HAnimJoint506.setDEF("Joe_vt7")
HAnimJoint506.setCenter(x3d.doubleToFloat([0,1.323,-0.1155]))
HAnimSegment507 = x3d.HAnimSegment()
HAnimSegment507.setName("t7")
HAnimSegment507.setDEF("Joe_t7")
Shape508 = x3d.Shape()
Appearance509 = x3d.Appearance()
Appearance509.setUSE("SegmentLine")

Shape508.setAppearance(Appearance509)
IndexedLineSet510 = x3d.IndexedLineSet()
IndexedLineSet510.setCoordIndex([0,1,-1])
Coordinate511 = x3d.Coordinate()
Coordinate511.setPoint(x3d.doubleToFloat([0,1.352,-0.12,0,1.381,-0.1235]))

IndexedLineSet510.setCoord(Coordinate511)

Shape508.setGeometry(IndexedLineSet510)

HAnimSegment507.addChild(Shape508)
Transform512 = x3d.Transform()
Transform512.setTranslation(x3d.doubleToFloat([0,1.323,-0.1155]))
Shape513 = x3d.Shape()
Shape513.setUSE("jointbox")

Transform512.addChild(Shape513)

HAnimSegment507.addChild(Transform512)

HAnimJoint506.addChild(HAnimSegment507)
HAnimJoint514 = x3d.HAnimJoint()
HAnimJoint514.setName("vt6")
HAnimJoint514.setDEF("Joe_vt6")
HAnimJoint514.setCenter(x3d.doubleToFloat([0,1.352,-0.12]))
HAnimSegment515 = x3d.HAnimSegment()
HAnimSegment515.setName("t6")
HAnimSegment515.setDEF("Joe_t6")
Shape516 = x3d.Shape()
Appearance517 = x3d.Appearance()
Appearance517.setUSE("SegmentLine")

Shape516.setAppearance(Appearance517)
IndexedLineSet518 = x3d.IndexedLineSet()
IndexedLineSet518.setCoordIndex([0,1,-1])
Coordinate519 = x3d.Coordinate()
Coordinate519.setPoint(x3d.doubleToFloat([0,1.381,-0.1235,0,1.41,-0.1235]))

IndexedLineSet518.setCoord(Coordinate519)

Shape516.setGeometry(IndexedLineSet518)

HAnimSegment515.addChild(Shape516)
Transform520 = x3d.Transform()
Transform520.setTranslation(x3d.doubleToFloat([0,1.352,-0.12]))
Shape521 = x3d.Shape()
Shape521.setUSE("jointbox")

Transform520.addChild(Shape521)

HAnimSegment515.addChild(Transform520)

HAnimJoint514.addChild(HAnimSegment515)
HAnimJoint522 = x3d.HAnimJoint()
HAnimJoint522.setName("vt5")
HAnimJoint522.setDEF("Joe_vt5")
HAnimJoint522.setCenter(x3d.doubleToFloat([0,1.381,-0.1235]))
HAnimSegment523 = x3d.HAnimSegment()
HAnimSegment523.setName("t5")
HAnimSegment523.setDEF("Joe_t5")
Shape524 = x3d.Shape()
Appearance525 = x3d.Appearance()
Appearance525.setUSE("SegmentLine")

Shape524.setAppearance(Appearance525)
IndexedLineSet526 = x3d.IndexedLineSet()
IndexedLineSet526.setCoordIndex([0,1,-1])
Coordinate527 = x3d.Coordinate()
Coordinate527.setPoint(x3d.doubleToFloat([0,1.41,-0.1235,0,1.438,-0.12]))

IndexedLineSet526.setCoord(Coordinate527)

Shape524.setGeometry(IndexedLineSet526)

HAnimSegment523.addChild(Shape524)
Transform528 = x3d.Transform()
Transform528.setTranslation(x3d.doubleToFloat([0,1.381,-0.1235]))
Shape529 = x3d.Shape()
Shape529.setUSE("jointbox")

Transform528.addChild(Shape529)

HAnimSegment523.addChild(Transform528)

HAnimJoint522.addChild(HAnimSegment523)
HAnimJoint530 = x3d.HAnimJoint()
HAnimJoint530.setName("vt4")
HAnimJoint530.setDEF("Joe_vt4")
HAnimJoint530.setCenter(x3d.doubleToFloat([0,1.41,-0.1235]))
HAnimJoint530.setSkinCoordIndex([81])
HAnimJoint530.setSkinCoordWeight(x3d.doubleToFloat([1]))
HAnimSegment531 = x3d.HAnimSegment()
HAnimSegment531.setName("t4")
HAnimSegment531.setDEF("Joe_t4")
Shape532 = x3d.Shape()
Appearance533 = x3d.Appearance()
Appearance533.setUSE("SegmentLine")

Shape532.setAppearance(Appearance533)
IndexedLineSet534 = x3d.IndexedLineSet()
IndexedLineSet534.setCoordIndex([0,1,-1])
Coordinate535 = x3d.Coordinate()
Coordinate535.setPoint(x3d.doubleToFloat([0,1.41,-0.1235,0,1.438,-0.12]))

IndexedLineSet534.setCoord(Coordinate535)

Shape532.setGeometry(IndexedLineSet534)

HAnimSegment531.addChild(Shape532)
Transform536 = x3d.Transform()
Transform536.setTranslation(x3d.doubleToFloat([0,1.41,-0.1235]))
Shape537 = x3d.Shape()
Shape537.setUSE("jointbox")

Transform536.addChild(Shape537)

HAnimSegment531.addChild(Transform536)
Transform538 = x3d.Transform()
Transform538.setTranslation(x3d.doubleToFloat([0,1.41,-0.145]))
Shape539 = x3d.Shape()
Shape539.setUSE("skinsphere")

Transform538.addChild(Shape539)

HAnimSegment531.addChild(Transform538)

HAnimJoint530.addChild(HAnimSegment531)
HAnimJoint540 = x3d.HAnimJoint()
HAnimJoint540.setName("vt3")
HAnimJoint540.setDEF("Joe_vt3")
HAnimJoint540.setCenter(x3d.doubleToFloat([0,1.438,-0.12]))
HAnimSegment541 = x3d.HAnimSegment()
HAnimSegment541.setName("t3")
HAnimSegment541.setDEF("Joe_t3")
Shape542 = x3d.Shape()
Appearance543 = x3d.Appearance()
Appearance543.setUSE("SegmentLine")

Shape542.setAppearance(Appearance543)
IndexedLineSet544 = x3d.IndexedLineSet()
IndexedLineSet544.setCoordIndex([0,1,-1])
Coordinate545 = x3d.Coordinate()
Coordinate545.setPoint(x3d.doubleToFloat([0,1.438,-0.12,0,1.468,-0.105]))

IndexedLineSet544.setCoord(Coordinate545)

Shape542.setGeometry(IndexedLineSet544)

HAnimSegment541.addChild(Shape542)
Transform546 = x3d.Transform()
Transform546.setTranslation(x3d.doubleToFloat([0,1.438,-0.12]))
Shape547 = x3d.Shape()
Shape547.setUSE("jointbox")

Transform546.addChild(Shape547)

HAnimSegment541.addChild(Transform546)

HAnimJoint540.addChild(HAnimSegment541)
HAnimJoint548 = x3d.HAnimJoint()
HAnimJoint548.setName("vt2")
HAnimJoint548.setDEF("Joe_vt2")
HAnimJoint548.setCenter(x3d.doubleToFloat([0,1.468,-0.105]))
HAnimSegment549 = x3d.HAnimSegment()
HAnimSegment549.setName("t2")
HAnimSegment549.setDEF("Joe_t2")
Shape550 = x3d.Shape()
Appearance551 = x3d.Appearance()
Appearance551.setUSE("SegmentLine")

Shape550.setAppearance(Appearance551)
IndexedLineSet552 = x3d.IndexedLineSet()
IndexedLineSet552.setCoordIndex([0,1,-1])
Coordinate553 = x3d.Coordinate()
Coordinate553.setPoint(x3d.doubleToFloat([0,1.468,-0.105,0,1.497,-0.09]))

IndexedLineSet552.setCoord(Coordinate553)

Shape550.setGeometry(IndexedLineSet552)

HAnimSegment549.addChild(Shape550)
Transform554 = x3d.Transform()
Transform554.setTranslation(x3d.doubleToFloat([0,1.468,-0.105]))
Shape555 = x3d.Shape()
Shape555.setUSE("jointbox")

Transform554.addChild(Shape555)

HAnimSegment549.addChild(Transform554)

HAnimJoint548.addChild(HAnimSegment549)
HAnimJoint556 = x3d.HAnimJoint()
HAnimJoint556.setName("vt1")
HAnimJoint556.setDEF("Joe_vt1")
HAnimJoint556.setCenter(x3d.doubleToFloat([0,1.497,-0.09]))
HAnimJoint556.setSkinCoordIndex([11,24])
HAnimJoint556.setSkinCoordWeight(x3d.doubleToFloat([1,1]))
HAnimSegment557 = x3d.HAnimSegment()
HAnimSegment557.setName("t1")
HAnimSegment557.setDEF("Joe_t1")
Shape558 = x3d.Shape()
Appearance559 = x3d.Appearance()
Appearance559.setUSE("SegmentLine")

Shape558.setAppearance(Appearance559)
IndexedLineSet560 = x3d.IndexedLineSet()
IndexedLineSet560.setCoordIndex([0,1,-1])
Coordinate561 = x3d.Coordinate()
Coordinate561.setPoint(x3d.doubleToFloat([0,1.497,-0.09,0,1.525,-0.072]))

IndexedLineSet560.setCoord(Coordinate561)

Shape558.setGeometry(IndexedLineSet560)

HAnimSegment557.addChild(Shape558)
Transform562 = x3d.Transform()
Transform562.setTranslation(x3d.doubleToFloat([0,1.497,-0.09]))
Shape563 = x3d.Shape()
Shape563.setUSE("jointbox")

Transform562.addChild(Shape563)

HAnimSegment557.addChild(Transform562)
HAnimSite564 = x3d.HAnimSite()
HAnimSite564.setName("suprasternale_pt")
HAnimSite564.setDEF("Joe_suprasternale_pt")
HAnimSite564.setTranslation(x3d.doubleToFloat([0,1.44,0.03]))
Shape565 = x3d.Shape()
Shape565.setUSE("sitebox")

HAnimSite564.addChild(Shape565)

HAnimSegment557.addChild(HAnimSite564)
HAnimSite566 = x3d.HAnimSite()
HAnimSite566.setName("cervicale_pt")
HAnimSite566.setDEF("Joe_cervicale_pt")
HAnimSite566.setTranslation(x3d.doubleToFloat([0,1.53,-0.084]))
Shape567 = x3d.Shape()
Shape567.setUSE("sitebox")

HAnimSite566.addChild(Shape567)

HAnimSegment557.addChild(HAnimSite566)

HAnimJoint556.addChild(HAnimSegment557)
HAnimJoint568 = x3d.HAnimJoint()
HAnimJoint568.setName("vc7")
HAnimJoint568.setDEF("Joe_vc7")
HAnimJoint568.setCenter(x3d.doubleToFloat([0,1.525,-0.072]))
HAnimJoint568.setSkinCoordIndex([74,75])
HAnimJoint568.setSkinCoordWeight(x3d.doubleToFloat([1,1]))
HAnimSegment569 = x3d.HAnimSegment()
HAnimSegment569.setName("c7")
HAnimSegment569.setDEF("Joe_c7")
Shape570 = x3d.Shape()
Appearance571 = x3d.Appearance()
Appearance571.setUSE("SegmentLine")

Shape570.setAppearance(Appearance571)
IndexedLineSet572 = x3d.IndexedLineSet()
IndexedLineSet572.setCoordIndex([0,1,-1,0,2,-1,0,3,-1])
Coordinate573 = x3d.Coordinate()
Coordinate573.setPoint(x3d.doubleToFloat([0,1.525,-0.072,0.082,1.4488,-0.0353,-0.03,1.46,0.02,0,1.54,-0.05]))

IndexedLineSet572.setCoord(Coordinate573)

Shape570.setGeometry(IndexedLineSet572)

HAnimSegment569.addChild(Shape570)
Transform574 = x3d.Transform()
Transform574.setTranslation(x3d.doubleToFloat([0,1.525,-0.072]))
Shape575 = x3d.Shape()
Shape575.setUSE("jointbox")

Transform574.addChild(Shape575)

HAnimSegment569.addChild(Transform574)
HAnimSite576 = x3d.HAnimSite()
HAnimSite576.setName("r_neck_base_pt")
HAnimSite576.setDEF("Joe_r_neck_base_pt")
HAnimSite576.setTranslation(x3d.doubleToFloat([-0.0646,1.5149,-0.0385]))
Shape577 = x3d.Shape()
Shape577.setUSE("sitebox")

HAnimSite576.addChild(Shape577)

HAnimSegment569.addChild(HAnimSite576)
HAnimSite578 = x3d.HAnimSite()
HAnimSite578.setName("l_neck_base_pt")
HAnimSite578.setDEF("Joe_l_neck_base_pt")
HAnimSite578.setTranslation(x3d.doubleToFloat([0.0646,1.5149,-0.0385]))
Shape579 = x3d.Shape()
Shape579.setUSE("sitebox")

HAnimSite578.addChild(Shape579)

HAnimSegment569.addChild(HAnimSite578)

HAnimJoint568.addChild(HAnimSegment569)
HAnimJoint580 = x3d.HAnimJoint()
HAnimJoint580.setName("vc6")
HAnimJoint580.setDEF("Joe_vc6")
HAnimJoint580.setCenter(x3d.doubleToFloat([0,1.54,-0.05]))
HAnimSegment581 = x3d.HAnimSegment()
HAnimSegment581.setName("c6")
HAnimSegment581.setDEF("Joe_c6")
Shape582 = x3d.Shape()
Appearance583 = x3d.Appearance()
Appearance583.setUSE("SegmentLine")

Shape582.setAppearance(Appearance583)
IndexedLineSet584 = x3d.IndexedLineSet()
IndexedLineSet584.setCoordIndex([0,1,-1])
Coordinate585 = x3d.Coordinate()
Coordinate585.setPoint(x3d.doubleToFloat([0,1.54,-0.05,0,1.5675,-0.0256]))

IndexedLineSet584.setCoord(Coordinate585)

Shape582.setGeometry(IndexedLineSet584)

HAnimSegment581.addChild(Shape582)
Transform586 = x3d.Transform()
Transform586.setTranslation(x3d.doubleToFloat([0,1.54,-0.05]))
Shape587 = x3d.Shape()
Shape587.setUSE("jointbox")

Transform586.addChild(Shape587)

HAnimSegment581.addChild(Transform586)

HAnimJoint580.addChild(HAnimSegment581)
HAnimJoint588 = x3d.HAnimJoint()
HAnimJoint588.setName("vc5")
HAnimJoint588.setDEF("Joe_vc5")
HAnimJoint588.setCenter(x3d.doubleToFloat([0,1.552,-0.035]))
HAnimSegment589 = x3d.HAnimSegment()
HAnimSegment589.setName("c5")
HAnimSegment589.setDEF("Joe_c5")
Transform590 = x3d.Transform()
Transform590.setTranslation(x3d.doubleToFloat([0,1.552,-0.035]))
Shape591 = x3d.Shape()
Shape591.setUSE("jointbox")

Transform590.addChild(Shape591)

HAnimSegment589.addChild(Transform590)
Shape592 = x3d.Shape()
Appearance593 = x3d.Appearance()
Appearance593.setUSE("SegmentLine")

Shape592.setAppearance(Appearance593)
IndexedLineSet594 = x3d.IndexedLineSet()
IndexedLineSet594.setCoordIndex([0,1,-1])
Coordinate595 = x3d.Coordinate()
Coordinate595.setPoint(x3d.doubleToFloat([0,1.5675,-0.0256,0,1.5823,-0.0185]))

IndexedLineSet594.setCoord(Coordinate595)

Shape592.setGeometry(IndexedLineSet594)

HAnimSegment589.addChild(Shape592)

HAnimJoint588.addChild(HAnimSegment589)
HAnimJoint596 = x3d.HAnimJoint()
HAnimJoint596.setName("vc4")
HAnimJoint596.setDEF("Joe_vc4")
HAnimJoint596.setCenter(x3d.doubleToFloat([0,1.5675,-0.0256]))
HAnimSegment597 = x3d.HAnimSegment()
HAnimSegment597.setName("c4")
HAnimSegment597.setDEF("Joe_c4")
Shape598 = x3d.Shape()
Appearance599 = x3d.Appearance()
Appearance599.setUSE("SegmentLine")

Shape598.setAppearance(Appearance599)
IndexedLineSet600 = x3d.IndexedLineSet()
IndexedLineSet600.setCoordIndex([0,1,-1])
Coordinate601 = x3d.Coordinate()
Coordinate601.setPoint(x3d.doubleToFloat([0,1.5823,-0.0185,0,1.595,-0.0175]))

IndexedLineSet600.setCoord(Coordinate601)

Shape598.setGeometry(IndexedLineSet600)

HAnimSegment597.addChild(Shape598)
Transform602 = x3d.Transform()
Transform602.setTranslation(x3d.doubleToFloat([0,1.5675,-0.0256]))
Shape603 = x3d.Shape()
Shape603.setUSE("jointbox")

Transform602.addChild(Shape603)

HAnimSegment597.addChild(Transform602)

HAnimJoint596.addChild(HAnimSegment597)
HAnimJoint604 = x3d.HAnimJoint()
HAnimJoint604.setName("vc3")
HAnimJoint604.setDEF("Joe_vc3")
HAnimJoint604.setCenter(x3d.doubleToFloat([0,1.5823,-0.0185]))
HAnimSegment605 = x3d.HAnimSegment()
HAnimSegment605.setName("c3")
HAnimSegment605.setDEF("Joe_c3")
Shape606 = x3d.Shape()
Appearance607 = x3d.Appearance()
Appearance607.setUSE("SegmentLine")

Shape606.setAppearance(Appearance607)
IndexedLineSet608 = x3d.IndexedLineSet()
IndexedLineSet608.setCoordIndex([0,1,-1])
Coordinate609 = x3d.Coordinate()
Coordinate609.setPoint(x3d.doubleToFloat([0,1.595,-0.0175,0,1.61,-0.015]))

IndexedLineSet608.setCoord(Coordinate609)

Shape606.setGeometry(IndexedLineSet608)

HAnimSegment605.addChild(Shape606)
Transform610 = x3d.Transform()
Transform610.setTranslation(x3d.doubleToFloat([0,1.5823,-0.0185]))
Shape611 = x3d.Shape()
Shape611.setUSE("jointbox")

Transform610.addChild(Shape611)

HAnimSegment605.addChild(Transform610)

HAnimJoint604.addChild(HAnimSegment605)
HAnimJoint612 = x3d.HAnimJoint()
HAnimJoint612.setName("vc2")
HAnimJoint612.setDEF("Joe_vc2")
HAnimJoint612.setCenter(x3d.doubleToFloat([0,1.595,-0.0175]))
HAnimSegment613 = x3d.HAnimSegment()
HAnimSegment613.setName("c2")
HAnimSegment613.setDEF("Joe_c2")
Shape614 = x3d.Shape()
Appearance615 = x3d.Appearance()
Appearance615.setUSE("SegmentLine")

Shape614.setAppearance(Appearance615)
IndexedLineSet616 = x3d.IndexedLineSet()
IndexedLineSet616.setCoordIndex([0,1,-1])
Coordinate617 = x3d.Coordinate()
Coordinate617.setPoint(x3d.doubleToFloat([0,1.61,-0.015,0,1.6144,-0.0034]))

IndexedLineSet616.setCoord(Coordinate617)

Shape614.setGeometry(IndexedLineSet616)

HAnimSegment613.addChild(Shape614)
Transform618 = x3d.Transform()
Transform618.setTranslation(x3d.doubleToFloat([0,1.595,-0.0175]))
Shape619 = x3d.Shape()
Shape619.setUSE("jointbox")

Transform618.addChild(Shape619)

HAnimSegment613.addChild(Transform618)

HAnimJoint612.addChild(HAnimSegment613)
HAnimJoint620 = x3d.HAnimJoint()
HAnimJoint620.setName("vc1")
HAnimJoint620.setDEF("Joe_vc1")
HAnimJoint620.setCenter(x3d.doubleToFloat([0,1.61,-0.015]))
HAnimSegment621 = x3d.HAnimSegment()
HAnimSegment621.setName("c1")
HAnimSegment621.setDEF("Joe_c1")
Shape622 = x3d.Shape()
Appearance623 = x3d.Appearance()
Appearance623.setUSE("SegmentLine")

Shape622.setAppearance(Appearance623)
IndexedLineSet624 = x3d.IndexedLineSet()
IndexedLineSet624.setCoordIndex([0,1,-1])
Coordinate625 = x3d.Coordinate()
Coordinate625.setPoint(x3d.doubleToFloat([0,1.6144,-0.0034,0,1.63,-0.01]))

IndexedLineSet624.setCoord(Coordinate625)

Shape622.setGeometry(IndexedLineSet624)

HAnimSegment621.addChild(Shape622)
Transform626 = x3d.Transform()
Transform626.setTranslation(x3d.doubleToFloat([0,1.61,-0.015]))
Shape627 = x3d.Shape()
Shape627.setUSE("jointbox")

Transform626.addChild(Shape627)

HAnimSegment621.addChild(Transform626)

HAnimJoint620.addChild(HAnimSegment621)
HAnimJoint628 = x3d.HAnimJoint()
HAnimJoint628.setName("skullbase")
HAnimJoint628.setDEF("Joe_skullbase")
HAnimJoint628.setCenter(x3d.doubleToFloat([0,1.63,-0.01]))
HAnimJoint628.setSkinCoordIndex([0,1,2,3,4,5,6,7,8,9])
HAnimJoint628.setSkinCoordWeight(x3d.doubleToFloat([1,1,1,1,1,1,1,1,1,1]))
HAnimSegment629 = x3d.HAnimSegment()
HAnimSegment629.setName("skull")
HAnimSegment629.setDEF("Joe_skull")
Shape630 = x3d.Shape()
Appearance631 = x3d.Appearance()
Appearance631.setUSE("SegmentLine")

Shape630.setAppearance(Appearance631)
IndexedLineSet632 = x3d.IndexedLineSet()
IndexedLineSet632.setCoordIndex([0,1,-1,0,2,-1])
Coordinate633 = x3d.Coordinate()
Coordinate633.setPoint(x3d.doubleToFloat([0,1.63,-0.01,0.034,1.659,0.06,-0.034,1.655,0.065]))

IndexedLineSet632.setCoord(Coordinate633)

Shape630.setGeometry(IndexedLineSet632)

HAnimSegment629.addChild(Shape630)
Transform634 = x3d.Transform()
Transform634.setTranslation(x3d.doubleToFloat([0,1.63,-0.01]))
Shape635 = x3d.Shape()
Shape635.setUSE("jointbox")

Transform634.addChild(Shape635)

HAnimSegment629.addChild(Transform634)
HAnimSite636 = x3d.HAnimSite()
HAnimSite636.setName("skull_vertex_tip")
HAnimSite636.setDEF("Joe_skull_vertex_tip")
HAnimSite636.setTranslation(x3d.doubleToFloat([0,1.77,0]))
Shape637 = x3d.Shape()
Shape637.setUSE("sitebox")

HAnimSite636.addChild(Shape637)

HAnimSegment629.addChild(HAnimSite636)
HAnimSite638 = x3d.HAnimSite()
HAnimSite638.setName("sellion_pt")
HAnimSite638.setDEF("Joe_sellion_pt")
HAnimSite638.setTranslation(x3d.doubleToFloat([0,1.665,0.09]))
Shape639 = x3d.Shape()
Shape639.setUSE("sitebox")

HAnimSite638.addChild(Shape639)

HAnimSegment629.addChild(HAnimSite638)
HAnimSite640 = x3d.HAnimSite()
HAnimSite640.setName("r_infraorbitale_pt")
HAnimSite640.setDEF("Joe_r_infraorbitale_pt")
HAnimSite640.setTranslation(x3d.doubleToFloat([-0.033,1.62,0.087]))
Shape641 = x3d.Shape()
Shape641.setUSE("sitebox")

HAnimSite640.addChild(Shape641)

HAnimSegment629.addChild(HAnimSite640)
HAnimSite642 = x3d.HAnimSite()
HAnimSite642.setName("l_infraorbitale_pt")
HAnimSite642.setDEF("Joe_l_infraorbitale_pt")
HAnimSite642.setTranslation(x3d.doubleToFloat([0.033,1.62,0.087]))
Shape643 = x3d.Shape()
Shape643.setUSE("sitebox")

HAnimSite642.addChild(Shape643)

HAnimSegment629.addChild(HAnimSite642)
HAnimSite644 = x3d.HAnimSite()
HAnimSite644.setName("supramenton_pt")
HAnimSite644.setDEF("Joe_supramenton_pt")
HAnimSite644.setTranslation(x3d.doubleToFloat([0,1.55,0.097]))
Shape645 = x3d.Shape()
Shape645.setUSE("sitebox")

HAnimSite644.addChild(Shape645)

HAnimSegment629.addChild(HAnimSite644)
HAnimSite646 = x3d.HAnimSite()
HAnimSite646.setName("r_tragion_pt")
HAnimSite646.setDEF("Joe_r_tragion_pt")
HAnimSite646.setTranslation(x3d.doubleToFloat([-0.077,1.64,-0.01]))
Shape647 = x3d.Shape()
Shape647.setUSE("sitebox")

HAnimSite646.addChild(Shape647)

HAnimSegment629.addChild(HAnimSite646)
HAnimSite648 = x3d.HAnimSite()
HAnimSite648.setName("r_gonion_pt")
HAnimSite648.setDEF("Joe_r_gonion_pt")
HAnimSite648.setTranslation(x3d.doubleToFloat([-0.052,1.58,0.015]))
Shape649 = x3d.Shape()
Shape649.setUSE("sitebox")

HAnimSite648.addChild(Shape649)

HAnimSegment629.addChild(HAnimSite648)
HAnimSite650 = x3d.HAnimSite()
HAnimSite650.setName("l_tragion_pt")
HAnimSite650.setDEF("Joe_l_tragion_pt")
HAnimSite650.setTranslation(x3d.doubleToFloat([0.077,1.64,-0.01]))
Shape651 = x3d.Shape()
Shape651.setUSE("sitebox")

HAnimSite650.addChild(Shape651)

HAnimSegment629.addChild(HAnimSite650)
HAnimSite652 = x3d.HAnimSite()
HAnimSite652.setName("l_gonion_pt")
HAnimSite652.setDEF("Joe_l_gonion_pt")
HAnimSite652.setTranslation(x3d.doubleToFloat([0.0631,1.58,0.015]))
Shape653 = x3d.Shape()
Shape653.setUSE("sitebox")

HAnimSite652.addChild(Shape653)

HAnimSegment629.addChild(HAnimSite652)
HAnimSite654 = x3d.HAnimSite()
HAnimSite654.setName("nuchale_pt")
HAnimSite654.setDEF("Joe_nuchale_pt")
HAnimSite654.setTranslation(x3d.doubleToFloat([0,1.625,-0.0925]))
Shape655 = x3d.Shape()
Shape655.setUSE("sitebox")

HAnimSite654.addChild(Shape655)

HAnimSegment629.addChild(HAnimSite654)

HAnimJoint628.addChild(HAnimSegment629)
HAnimJoint656 = x3d.HAnimJoint()
HAnimJoint656.setName("l_eyeball_joint")
HAnimJoint656.setDEF("Joe_l_eyeball_joint")
HAnimJoint656.setCenter(x3d.doubleToFloat([0.034,1.659,0.06]))
HAnimSegment657 = x3d.HAnimSegment()
HAnimSegment657.setName("l_eyeball")
HAnimSegment657.setDEF("Joe_l_eyeball")
Shape658 = x3d.Shape()
Appearance659 = x3d.Appearance()
Appearance659.setUSE("SegmentLine")

Shape658.setAppearance(Appearance659)
IndexedLineSet660 = x3d.IndexedLineSet()
IndexedLineSet660.setCoordIndex([0,1,-1])
Coordinate661 = x3d.Coordinate()
Coordinate661.setPoint(x3d.doubleToFloat([0.034,1.655,0.065,-0.034,1.655,0.065]))

IndexedLineSet660.setCoord(Coordinate661)

Shape658.setGeometry(IndexedLineSet660)

HAnimSegment657.addChild(Shape658)
Transform662 = x3d.Transform()
Transform662.setScale(x3d.doubleToFloat([1,1,1.4]))
Transform662.setTranslation(x3d.doubleToFloat([0.034,1.655,0.065]))
Shape663 = x3d.Shape()
Shape663.setUSE("jointbox")

Transform662.addChild(Shape663)

HAnimSegment657.addChild(Transform662)

HAnimJoint656.addChild(HAnimSegment657)

HAnimJoint628.addChild(HAnimJoint656)
HAnimJoint664 = x3d.HAnimJoint()
HAnimJoint664.setName("r_eyeball_joint")
HAnimJoint664.setDEF("Joe_r_eyeball_joint")
HAnimJoint664.setCenter(x3d.doubleToFloat([-0.034,1.659,0.06]))
HAnimSegment665 = x3d.HAnimSegment()
HAnimSegment665.setName("r_eyeball")
HAnimSegment665.setDEF("Joe_r_eyeball")
Shape666 = x3d.Shape()
Appearance667 = x3d.Appearance()
Appearance667.setUSE("SegmentLine")

Shape666.setAppearance(Appearance667)
IndexedLineSet668 = x3d.IndexedLineSet()
IndexedLineSet668.setCoordIndex([0,1,-1])
Coordinate669 = x3d.Coordinate()
Coordinate669.setPoint(x3d.doubleToFloat([0.034,1.655,0.065,-0.034,1.655,0.065]))

IndexedLineSet668.setCoord(Coordinate669)

Shape666.setGeometry(IndexedLineSet668)

HAnimSegment665.addChild(Shape666)
Transform670 = x3d.Transform()
Transform670.setScale(x3d.doubleToFloat([1,1,1.4]))
Transform670.setTranslation(x3d.doubleToFloat([-0.034,1.655,0.065]))
Shape671 = x3d.Shape()
Shape671.setUSE("jointbox")

Transform670.addChild(Shape671)

HAnimSegment665.addChild(Transform670)

HAnimJoint664.addChild(HAnimSegment665)

HAnimJoint628.addChild(HAnimJoint664)

HAnimJoint620.addChild(HAnimJoint628)

HAnimJoint612.addChild(HAnimJoint620)

HAnimJoint604.addChild(HAnimJoint612)

HAnimJoint596.addChild(HAnimJoint604)

HAnimJoint588.addChild(HAnimJoint596)

HAnimJoint580.addChild(HAnimJoint588)

HAnimJoint568.addChild(HAnimJoint580)

HAnimJoint556.addChild(HAnimJoint568)
HAnimJoint672 = x3d.HAnimJoint()
HAnimJoint672.setName("l_sternoclavicular")
HAnimJoint672.setDEF("Joe_l_sternoclavicular")
HAnimJoint672.setCenter(x3d.doubleToFloat([0.082,1.4488,-0.0353]))
HAnimJoint672.setSkinCoordIndex([12])
HAnimJoint672.setSkinCoordWeight(x3d.doubleToFloat([1]))
HAnimSegment673 = x3d.HAnimSegment()
HAnimSegment673.setName("l_clavicle")
HAnimSegment673.setDEF("Joe_l_clavicle")
Shape674 = x3d.Shape()
Appearance675 = x3d.Appearance()
Appearance675.setUSE("SegmentLine")

Shape674.setAppearance(Appearance675)
IndexedLineSet676 = x3d.IndexedLineSet()
IndexedLineSet676.setCoordIndex([0,1,-1])
Coordinate677 = x3d.Coordinate()
Coordinate677.setPoint(x3d.doubleToFloat([0.082,1.4488,-0.0353,0.0962,1.4269,-0.0424]))

IndexedLineSet676.setCoord(Coordinate677)

Shape674.setGeometry(IndexedLineSet676)

HAnimSegment673.addChild(Shape674)
Transform678 = x3d.Transform()
Transform678.setTranslation(x3d.doubleToFloat([0.082,1.4488,-0.0353]))
Shape679 = x3d.Shape()
Shape679.setUSE("jointbox")

Transform678.addChild(Shape679)

HAnimSegment673.addChild(Transform678)
HAnimSite680 = x3d.HAnimSite()
HAnimSite680.setName("l_clavicle_pt")
HAnimSite680.setDEF("Joe_l_clavicle_pt")
HAnimSite680.setTranslation(x3d.doubleToFloat([0.03,1.46,0.035]))
Shape681 = x3d.Shape()
Shape681.setUSE("sitebox")

HAnimSite680.addChild(Shape681)

HAnimSegment673.addChild(HAnimSite680)

HAnimJoint672.addChild(HAnimSegment673)
HAnimJoint682 = x3d.HAnimJoint()
HAnimJoint682.setName("l_acromioclavicular")
HAnimJoint682.setDEF("Joe_l_acromioclavicular")
HAnimJoint682.setCenter(x3d.doubleToFloat([0.0962,1.4269,-0.0424]))
HAnimJoint682.setSkinCoordIndex([79])
HAnimJoint682.setSkinCoordWeight(x3d.doubleToFloat([1]))
HAnimSegment683 = x3d.HAnimSegment()
HAnimSegment683.setName("l_scapula")
HAnimSegment683.setDEF("Joe_l_scapula")
Shape684 = x3d.Shape()
Appearance685 = x3d.Appearance()
Appearance685.setUSE("SegmentLine")

Shape684.setAppearance(Appearance685)
IndexedLineSet686 = x3d.IndexedLineSet()
IndexedLineSet686.setCoordIndex([0,1,-1])
Coordinate687 = x3d.Coordinate()
Coordinate687.setPoint(x3d.doubleToFloat([0.0962,1.4269,-0.0424,0.2,1.44,-0.04]))

IndexedLineSet686.setCoord(Coordinate687)

Shape684.setGeometry(IndexedLineSet686)

HAnimSegment683.addChild(Shape684)
Transform688 = x3d.Transform()
Transform688.setTranslation(x3d.doubleToFloat([0.0962,1.4269,-0.0424]))
Shape689 = x3d.Shape()
Shape689.setUSE("jointbox")

Transform688.addChild(Shape689)

HAnimSegment683.addChild(Transform688)
Transform690 = x3d.Transform()
Transform690.setTranslation(x3d.doubleToFloat([0.11,1.427,-0.1375]))
Shape691 = x3d.Shape()
Shape691.setUSE("skinsphere")

Transform690.addChild(Shape691)

HAnimSegment683.addChild(Transform690)
HAnimSite692 = x3d.HAnimSite()
HAnimSite692.setName("l_acromion_pt")
HAnimSite692.setDEF("Joe_l_acromion_pt")
HAnimSite692.setTranslation(x3d.doubleToFloat([0.175,1.4825,-0.06]))
Shape693 = x3d.Shape()
Shape693.setUSE("sitebox")

HAnimSite692.addChild(Shape693)

HAnimSegment683.addChild(HAnimSite692)
HAnimSite694 = x3d.HAnimSite()
HAnimSite694.setName("l_axilla_proximal_pt")
HAnimSite694.setDEF("Joe_l_axilla_proximal_pt")
HAnimSite694.setTranslation(x3d.doubleToFloat([0.17,1.38,0.007]))
Shape695 = x3d.Shape()
Shape695.setUSE("sitebox")

HAnimSite694.addChild(Shape695)

HAnimSegment683.addChild(HAnimSite694)
HAnimSite696 = x3d.HAnimSite()
HAnimSite696.setName("l_axilla_distal_pt")
HAnimSite696.setDEF("Joe_l_axilla_distal_pt")
HAnimSite696.setTranslation(x3d.doubleToFloat([0.16,1.38,-0.125]))
Shape697 = x3d.Shape()
Shape697.setUSE("sitebox")

HAnimSite696.addChild(Shape697)

HAnimSegment683.addChild(HAnimSite696)

HAnimJoint682.addChild(HAnimSegment683)
HAnimJoint698 = x3d.HAnimJoint()
HAnimJoint698.setName("l_shoulder")
HAnimJoint698.setDEF("Joe_l_shoulder")
HAnimJoint698.setCenter(x3d.doubleToFloat([0.2,1.44,-0.04]))
HAnimJoint698.setSkinCoordIndex([41,42,44,80,102,103,104,105])
HAnimJoint698.setSkinCoordWeight(x3d.doubleToFloat([1,1,1,1,1,1,1,1]))
HAnimSegment699 = x3d.HAnimSegment()
HAnimSegment699.setName("l_upperarm")
HAnimSegment699.setDEF("Joe_l_upperarm")
Shape700 = x3d.Shape()
Appearance701 = x3d.Appearance()
Appearance701.setUSE("SegmentLine")

Shape700.setAppearance(Appearance701)
IndexedLineSet702 = x3d.IndexedLineSet()
IndexedLineSet702.setCoordIndex([0,1,-1])
Coordinate703 = x3d.Coordinate()
Coordinate703.setPoint(x3d.doubleToFloat([0.2029,1.44,-0.0387,0.2,1.1388,-0.04]))

IndexedLineSet702.setCoord(Coordinate703)

Shape700.setGeometry(IndexedLineSet702)

HAnimSegment699.addChild(Shape700)
Transform704 = x3d.Transform()
Transform704.setTranslation(x3d.doubleToFloat([0.2,1.44,-0.04]))
Shape705 = x3d.Shape()
Shape705.setUSE("jointbox")

Transform704.addChild(Shape705)

HAnimSegment699.addChild(Transform704)
Transform706 = x3d.Transform()
Transform706.setTranslation(x3d.doubleToFloat([0.235,1.42,-0.0625]))
Shape707 = x3d.Shape()
Shape707.setUSE("skinsphere")

Transform706.addChild(Shape707)

HAnimSegment699.addChild(Transform706)
Transform708 = x3d.Transform()
Transform708.setTranslation(x3d.doubleToFloat([0.25,1.27,-0.04]))
Shape709 = x3d.Shape()
Shape709.setUSE("skinsphere")

Transform708.addChild(Shape709)

HAnimSegment699.addChild(Transform708)
Transform710 = x3d.Transform()
Transform710.setTranslation(x3d.doubleToFloat([0.17,1.27,-0.04]))
Shape711 = x3d.Shape()
Shape711.setUSE("skinsphere")

Transform710.addChild(Shape711)

HAnimSegment699.addChild(Transform710)
Transform712 = x3d.Transform()
Transform712.setTranslation(x3d.doubleToFloat([0.2,1.27,-0.09]))
Shape713 = x3d.Shape()
Shape713.setUSE("skinsphere")

Transform712.addChild(Shape713)

HAnimSegment699.addChild(Transform712)
Transform714 = x3d.Transform()
Transform714.setTranslation(x3d.doubleToFloat([0.2,1.27,0.02]))
Shape715 = x3d.Shape()
Shape715.setUSE("skinsphere")

Transform714.addChild(Shape715)

HAnimSegment699.addChild(Transform714)
HAnimSite716 = x3d.HAnimSite()
HAnimSite716.setName("l_humeral_medial_epicondyle_pt")
HAnimSite716.setDEF("Joe_l_humeral_medial_epicondyle_pt")
HAnimSite716.setTranslation(x3d.doubleToFloat([0.165,1.1388,-0.04]))
Shape717 = x3d.Shape()
Shape717.setUSE("sitebox")

HAnimSite716.addChild(Shape717)

HAnimSegment699.addChild(HAnimSite716)
HAnimSite718 = x3d.HAnimSite()
HAnimSite718.setName("l_radiale_pt")
HAnimSite718.setDEF("Joe_l_radiale_pt")
HAnimSite718.setTranslation(x3d.doubleToFloat([0.23,1.133,-0.055]))
Shape719 = x3d.Shape()
Shape719.setUSE("sitebox")

HAnimSite718.addChild(Shape719)

HAnimSegment699.addChild(HAnimSite718)
HAnimSite720 = x3d.HAnimSite()
HAnimSite720.setName("l_humeral_lateral_epicondyle_pt")
HAnimSite720.setDEF("Joe_l_humeral_lateral_epicondyle_pt")
HAnimSite720.setTranslation(x3d.doubleToFloat([0.244,1.1388,-0.04]))
Shape721 = x3d.Shape()
Shape721.setUSE("sitebox")

HAnimSite720.addChild(Shape721)

HAnimSegment699.addChild(HAnimSite720)

HAnimJoint698.addChild(HAnimSegment699)
HAnimJoint722 = x3d.HAnimJoint()
HAnimJoint722.setName("l_elbow")
HAnimJoint722.setDEF("Joe_l_elbow")
HAnimJoint722.setCenter(x3d.doubleToFloat([0.2,1.1388,-0.04]))
HAnimJoint722.setSkinCoordIndex([45,46,47,109,110,111,112,113,115,116,117,118])
HAnimJoint722.setSkinCoordWeight(x3d.doubleToFloat([1,1,1,1,1,1,1,1,1,1,1,1,1,1,1]))
HAnimSegment723 = x3d.HAnimSegment()
HAnimSegment723.setName("l_forearm")
HAnimSegment723.setDEF("Joe_l_forearm")
Shape724 = x3d.Shape()
Appearance725 = x3d.Appearance()
Appearance725.setUSE("SegmentLine")

Shape724.setAppearance(Appearance725)
IndexedLineSet726 = x3d.IndexedLineSet()
IndexedLineSet726.setCoordIndex([0,1,-1])
Coordinate727 = x3d.Coordinate()
Coordinate727.setPoint(x3d.doubleToFloat([0.2,1.1388,-0.04,0.2,0.87,-0.04]))

IndexedLineSet726.setCoord(Coordinate727)

Shape724.setGeometry(IndexedLineSet726)

HAnimSegment723.addChild(Shape724)
Transform728 = x3d.Transform()
Transform728.setTranslation(x3d.doubleToFloat([0.2,1.1388,-0.04]))
Shape729 = x3d.Shape()
Shape729.setUSE("jointbox")

Transform728.addChild(Shape729)

HAnimSegment723.addChild(Transform728)
Transform730 = x3d.Transform()
Transform730.setTranslation(x3d.doubleToFloat([0.2,1.1388,-0.013]))
Shape731 = x3d.Shape()
Shape731.setUSE("skinsphere")

Transform730.addChild(Shape731)

HAnimSegment723.addChild(Transform730)
Transform732 = x3d.Transform()
Transform732.setTranslation(x3d.doubleToFloat([0.225,1,-0.01]))
Shape733 = x3d.Shape()
Shape733.setUSE("skinsphere")

Transform732.addChild(Shape733)

HAnimSegment723.addChild(Transform732)
Transform734 = x3d.Transform()
Transform734.setTranslation(x3d.doubleToFloat([0.225,1,-0.07]))
Shape735 = x3d.Shape()
Shape735.setUSE("skinsphere")

Transform734.addChild(Shape735)

HAnimSegment723.addChild(Transform734)
Transform736 = x3d.Transform()
Transform736.setTranslation(x3d.doubleToFloat([0.185,1,-0.01]))
Shape737 = x3d.Shape()
Shape737.setUSE("skinsphere")

Transform736.addChild(Shape737)

HAnimSegment723.addChild(Transform736)
Transform738 = x3d.Transform()
Transform738.setTranslation(x3d.doubleToFloat([0.185,1,-0.07]))
Shape739 = x3d.Shape()
Shape739.setUSE("skinsphere")

Transform738.addChild(Shape739)

HAnimSegment723.addChild(Transform738)
HAnimSite740 = x3d.HAnimSite()
HAnimSite740.setName("l_radial_styloid_pt")
HAnimSite740.setDEF("Joe_l_radial_styloid_pt")
HAnimSite740.setTranslation(x3d.doubleToFloat([0.1901,0.8645,-0.0415]))
Shape741 = x3d.Shape()
Shape741.setUSE("sitebox")

HAnimSite740.addChild(Shape741)

HAnimSegment723.addChild(HAnimSite740)
HAnimSite742 = x3d.HAnimSite()
HAnimSite742.setName("l_olecranon_pt")
HAnimSite742.setDEF("Joe_l_olecranon_pt")
HAnimSite742.setTranslation(x3d.doubleToFloat([0.2,1.1388,-0.08]))
Shape743 = x3d.Shape()
Shape743.setUSE("sitebox")

HAnimSite742.addChild(Shape743)

HAnimSegment723.addChild(HAnimSite742)

HAnimJoint722.addChild(HAnimSegment723)
HAnimJoint744 = x3d.HAnimJoint()
HAnimJoint744.setName("l_radiocarpal")
HAnimJoint744.setDEF("Joe_l_radiocarpal")
HAnimJoint744.setCenter(x3d.doubleToFloat([0.2,0.87,-0.04]))
HAnimJoint744.setSkinCoordIndex([119,120,121,122,123,124,125,126])
HAnimJoint744.setSkinCoordWeight(x3d.doubleToFloat([1,1,1,1,1,1,1,1]))
HAnimSegment745 = x3d.HAnimSegment()
HAnimSegment745.setName("l_carpal")
HAnimSegment745.setDEF("Joe_l_carpal")
Shape746 = x3d.Shape()
Appearance747 = x3d.Appearance()
Appearance747.setUSE("SegmentLine")

Shape746.setAppearance(Appearance747)
IndexedLineSet748 = x3d.IndexedLineSet()
IndexedLineSet748.setCoordIndex([0,1,-1,0,2,-1,0,3,-1,0,4,-1,0,5,-1])
Coordinate749 = x3d.Coordinate()
Coordinate749.setPoint(x3d.doubleToFloat([0.2,0.87,-0.04,0.1924,0.8472,-0.0534,0.1983,0.8024,-0.028,0.1987,0.8029,-0.053,0.1956,0.8019,-0.0794,0.1925,0.8066,-0.1036]))

IndexedLineSet748.setCoord(Coordinate749)

Shape746.setGeometry(IndexedLineSet748)

HAnimSegment745.addChild(Shape746)
Transform750 = x3d.Transform()
Transform750.setTranslation(x3d.doubleToFloat([0.2,0.87,-0.04]))
Shape751 = x3d.Shape()
Shape751.setUSE("jointbox")

Transform750.addChild(Shape751)

HAnimSegment745.addChild(Transform750)
HAnimSite752 = x3d.HAnimSite()
HAnimSite752.setName("l_metacarpal_phalanx_2_pt")
HAnimSite752.setDEF("Joe_l_metacarpal_phalanx_2_pt")
HAnimSite752.setTranslation(x3d.doubleToFloat([0.2009,0.8139,-0.0237]))
Shape753 = x3d.Shape()
Shape753.setUSE("sitebox")

HAnimSite752.addChild(Shape753)

HAnimSegment745.addChild(HAnimSite752)
HAnimSite754 = x3d.HAnimSite()
HAnimSite754.setName("l_ulnar_styloid_pt")
HAnimSite754.setDEF("Joe_l_ulnar_styloid_pt")
HAnimSite754.setTranslation(x3d.doubleToFloat([0.2142,0.8529,-0.0648]))
Shape755 = x3d.Shape()
Shape755.setUSE("sitebox")

HAnimSite754.addChild(Shape755)

HAnimSegment745.addChild(HAnimSite754)
HAnimSite756 = x3d.HAnimSite()
HAnimSite756.setName("l_metacarpal_phalanx_5_pt")
HAnimSite756.setDEF("Joe_l_metacarpal_phalanx_5_pt")
HAnimSite756.setTranslation(x3d.doubleToFloat([0.1929,0.786,-0.1122]))
Shape757 = x3d.Shape()
Shape757.setUSE("sitebox")

HAnimSite756.addChild(Shape757)

HAnimSegment745.addChild(HAnimSite756)

HAnimJoint744.addChild(HAnimSegment745)
HAnimJoint758 = x3d.HAnimJoint()
HAnimJoint758.setName("l_carpometacarpal_1")
HAnimJoint758.setDEF("Joe_l_carpometacarpal_1")
HAnimJoint758.setCenter(x3d.doubleToFloat([0.1924,0.8472,-0.0534]))
HAnimJoint758.setSkinCoordIndex([127,128])
HAnimJoint758.setSkinCoordWeight(x3d.doubleToFloat([1,1]))
HAnimSegment759 = x3d.HAnimSegment()
HAnimSegment759.setName("l_metacarpal_1")
HAnimSegment759.setDEF("Joe_l_metacarpal_1")
Shape760 = x3d.Shape()
Appearance761 = x3d.Appearance()
Appearance761.setUSE("SegmentLine")

Shape760.setAppearance(Appearance761)
IndexedLineSet762 = x3d.IndexedLineSet()
IndexedLineSet762.setCoordIndex([0,1,-1])
Coordinate763 = x3d.Coordinate()
Coordinate763.setPoint(x3d.doubleToFloat([0.1924,0.8472,-0.0534,0.1951,0.8226,0.0246]))

IndexedLineSet762.setCoord(Coordinate763)

Shape760.setGeometry(IndexedLineSet762)

HAnimSegment759.addChild(Shape760)
Transform764 = x3d.Transform()
Transform764.setTranslation(x3d.doubleToFloat([0.1924,0.8472,-0.0534]))
Shape765 = x3d.Shape()
Shape765.setUSE("jointbox")

Transform764.addChild(Shape765)

HAnimSegment759.addChild(Transform764)

HAnimJoint758.addChild(HAnimSegment759)
HAnimJoint766 = x3d.HAnimJoint()
HAnimJoint766.setName("l_metacarpophalangeal_1")
HAnimJoint766.setDEF("Joe_l_metacarpophalangeal_1")
HAnimJoint766.setCenter(x3d.doubleToFloat([0.1951,0.8226,0.0246]))
HAnimJoint766.setSkinCoordIndex([138,139,140,141,142,143])
HAnimJoint766.setSkinCoordWeight(x3d.doubleToFloat([0.5,0.5,0.5,1,1,1]))
HAnimSegment767 = x3d.HAnimSegment()
HAnimSegment767.setName("l_carpal_proximal_phalanx_1")
HAnimSegment767.setDEF("Joe_l_carpal_proximal_phalanx_1")
Shape768 = x3d.Shape()
Appearance769 = x3d.Appearance()
Appearance769.setUSE("SegmentLine")

Shape768.setAppearance(Appearance769)
IndexedLineSet770 = x3d.IndexedLineSet()
IndexedLineSet770.setCoordIndex([0,1,-1])
Coordinate771 = x3d.Coordinate()
Coordinate771.setPoint(x3d.doubleToFloat([0.1951,0.8226,0.0246,0.1955,0.8159,0.0464]))

IndexedLineSet770.setCoord(Coordinate771)

Shape768.setGeometry(IndexedLineSet770)

HAnimSegment767.addChild(Shape768)
Transform772 = x3d.Transform()
Transform772.setTranslation(x3d.doubleToFloat([0.1951,0.8226,0.0246]))
Shape773 = x3d.Shape()
Shape773.setUSE("jointbox")

Transform772.addChild(Shape773)

HAnimSegment767.addChild(Transform772)

HAnimJoint766.addChild(HAnimSegment767)
HAnimJoint774 = x3d.HAnimJoint()
HAnimJoint774.setName("l_carpal_interphalangeal_1")
HAnimJoint774.setDEF("Joe_l_carpal_interphalangeal_1")
HAnimJoint774.setCenter(x3d.doubleToFloat([0.1955,0.8159,0.0464]))
HAnimJoint774.setSkinCoordIndex([144,145,146,147,148,149,150,151,152])
HAnimJoint774.setSkinCoordWeight(x3d.doubleToFloat([1,1,1,1,1,1,1,1,1]))
HAnimSegment775 = x3d.HAnimSegment()
HAnimSegment775.setName("l_carpal_distal_phalanx_1")
HAnimSegment775.setDEF("Joe_l_carpal_distal_phalanx_1")
Shape776 = x3d.Shape()
Appearance777 = x3d.Appearance()
Appearance777.setUSE("SegmentLine")

Shape776.setAppearance(Appearance777)
IndexedLineSet778 = x3d.IndexedLineSet()
IndexedLineSet778.setCoordIndex([0,1,-1])
Coordinate779 = x3d.Coordinate()
Coordinate779.setPoint(x3d.doubleToFloat([0.1955,0.8159,0.0464,0.1982,0.8061,0.0759]))

IndexedLineSet778.setCoord(Coordinate779)

Shape776.setGeometry(IndexedLineSet778)

HAnimSegment775.addChild(Shape776)
Transform780 = x3d.Transform()
Transform780.setTranslation(x3d.doubleToFloat([0.1955,0.8159,0.0464]))
Shape781 = x3d.Shape()
Shape781.setUSE("jointbox")

Transform780.addChild(Shape781)

HAnimSegment775.addChild(Transform780)
HAnimSite782 = x3d.HAnimSite()
HAnimSite782.setName("l_carpal_distal_phalanx_1_tip")
HAnimSite782.setDEF("Joe_l_carpal_distal_phalanx_1_tip")
HAnimSite782.setTranslation(x3d.doubleToFloat([0.1982,0.8061,0.0759]))
Shape783 = x3d.Shape()
Shape783.setUSE("sitebox")

HAnimSite782.addChild(Shape783)

HAnimSegment775.addChild(HAnimSite782)

HAnimJoint774.addChild(HAnimSegment775)

HAnimJoint766.addChild(HAnimJoint774)

HAnimJoint758.addChild(HAnimJoint766)

HAnimJoint744.addChild(HAnimJoint758)
HAnimJoint784 = x3d.HAnimJoint()
HAnimJoint784.setName("l_carpometacarpal_2")
HAnimJoint784.setDEF("Joe_l_carpometacarpal_2")
HAnimJoint784.setCenter(x3d.doubleToFloat([0.1983,0.8024,-0.028]))
HAnimJoint784.setSkinCoordIndex([129,130])
HAnimJoint784.setSkinCoordWeight(x3d.doubleToFloat([1,1]))
HAnimSegment785 = x3d.HAnimSegment()
HAnimSegment785.setName("l_metacarpal_2")
HAnimSegment785.setDEF("Joe_l_metacarpal_2")
Shape786 = x3d.Shape()
Appearance787 = x3d.Appearance()
Appearance787.setUSE("SegmentLine")

Shape786.setAppearance(Appearance787)
IndexedLineSet788 = x3d.IndexedLineSet()
IndexedLineSet788.setCoordIndex([0,1,-1])
Coordinate789 = x3d.Coordinate()
Coordinate789.setPoint(x3d.doubleToFloat([0.1983,0.8024,-0.028,0.1983,0.7815,-0.028]))

IndexedLineSet788.setCoord(Coordinate789)

Shape786.setGeometry(IndexedLineSet788)

HAnimSegment785.addChild(Shape786)
Transform790 = x3d.Transform()
Transform790.setTranslation(x3d.doubleToFloat([0.1983,0.8024,-0.028]))
Shape791 = x3d.Shape()
Shape791.setUSE("jointbox")

Transform790.addChild(Shape791)

HAnimSegment785.addChild(Transform790)

HAnimJoint784.addChild(HAnimSegment785)
HAnimJoint792 = x3d.HAnimJoint()
HAnimJoint792.setName("l_metacarpophalangeal_2")
HAnimJoint792.setDEF("Joe_l_metacarpophalangeal_2")
HAnimJoint792.setCenter(x3d.doubleToFloat([0.1983,0.7815,-0.028]))
HAnimJoint792.setSkinCoordIndex([138,139,140,153,154,155,163])
HAnimJoint792.setSkinCoordWeight(x3d.doubleToFloat([0.5,0.5,0.5,1,1,1,0.5]))
HAnimSegment793 = x3d.HAnimSegment()
HAnimSegment793.setName("l_carpal_proximal_phalanx_2")
HAnimSegment793.setDEF("Joe_l_carpal_proximal_phalanx_2")
Shape794 = x3d.Shape()
Appearance795 = x3d.Appearance()
Appearance795.setUSE("SegmentLine")

Shape794.setAppearance(Appearance795)
IndexedLineSet796 = x3d.IndexedLineSet()
IndexedLineSet796.setCoordIndex([0,1,-1])
Coordinate797 = x3d.Coordinate()
Coordinate797.setPoint(x3d.doubleToFloat([0.1983,0.7815,-0.028,0.2017,0.7363,-0.0248]))

IndexedLineSet796.setCoord(Coordinate797)

Shape794.setGeometry(IndexedLineSet796)

HAnimSegment793.addChild(Shape794)
Transform798 = x3d.Transform()
Transform798.setTranslation(x3d.doubleToFloat([0.1983,0.7815,-0.028]))
Shape799 = x3d.Shape()
Shape799.setUSE("jointbox")

Transform798.addChild(Shape799)

HAnimSegment793.addChild(Transform798)

HAnimJoint792.addChild(HAnimSegment793)
HAnimJoint800 = x3d.HAnimJoint()
HAnimJoint800.setName("l_carpal_proximal_interphalangeal_2")
HAnimJoint800.setDEF("Joe_l_carpal_proximal_interphalangeal_2")
HAnimJoint800.setCenter(x3d.doubleToFloat([0.2017,0.7363,-0.0248]))
HAnimJoint800.setSkinCoordIndex([166,167,168,169])
HAnimJoint800.setSkinCoordWeight(x3d.doubleToFloat([1,1,1,1]))
HAnimSegment801 = x3d.HAnimSegment()
HAnimSegment801.setName("l_carpal_middle_phalanx_2")
HAnimSegment801.setDEF("Joe_l_carpal_middle_phalanx_2")
Shape802 = x3d.Shape()
Appearance803 = x3d.Appearance()
Appearance803.setUSE("SegmentLine")

Shape802.setAppearance(Appearance803)
IndexedLineSet804 = x3d.IndexedLineSet()
IndexedLineSet804.setCoordIndex([0,1,-1])
Coordinate805 = x3d.Coordinate()
Coordinate805.setPoint(x3d.doubleToFloat([0.2017,0.7363,-0.0248,0.2028,0.7139,-0.0236]))

IndexedLineSet804.setCoord(Coordinate805)

Shape802.setGeometry(IndexedLineSet804)

HAnimSegment801.addChild(Shape802)
Transform806 = x3d.Transform()
Transform806.setTranslation(x3d.doubleToFloat([0.2017,0.7363,-0.0248]))
Shape807 = x3d.Shape()
Shape807.setUSE("jointbox")

Transform806.addChild(Shape807)

HAnimSegment801.addChild(Transform806)

HAnimJoint800.addChild(HAnimSegment801)
HAnimJoint808 = x3d.HAnimJoint()
HAnimJoint808.setName("l_carpal_distal_interphalangeal_2")
HAnimJoint808.setDEF("Joe_l_carpal_distal_interphalangeal_2")
HAnimJoint808.setCenter(x3d.doubleToFloat([0.2028,0.7139,-0.0236]))
HAnimJoint808.setSkinCoordIndex([170,171,172,173,174,175,176,177,178])
HAnimJoint808.setSkinCoordWeight(x3d.doubleToFloat([1,1,1,1,1,1,1,1,1]))
HAnimSegment809 = x3d.HAnimSegment()
HAnimSegment809.setName("l_carpal_distal_phalanx_2")
HAnimSegment809.setDEF("Joe_l_carpal_distal_phalanx_2")
Shape810 = x3d.Shape()
Appearance811 = x3d.Appearance()
Appearance811.setUSE("SegmentLine")

Shape810.setAppearance(Appearance811)
IndexedLineSet812 = x3d.IndexedLineSet()
IndexedLineSet812.setCoordIndex([0,1,-1])
Coordinate813 = x3d.Coordinate()
Coordinate813.setPoint(x3d.doubleToFloat([0.2028,0.7139,-0.0236,0.2089,0.6858,-0.0245]))

IndexedLineSet812.setCoord(Coordinate813)

Shape810.setGeometry(IndexedLineSet812)

HAnimSegment809.addChild(Shape810)
Transform814 = x3d.Transform()
Transform814.setTranslation(x3d.doubleToFloat([0.2028,0.7139,-0.0236]))
Shape815 = x3d.Shape()
Shape815.setUSE("jointbox")

Transform814.addChild(Shape815)

HAnimSegment809.addChild(Transform814)
HAnimSite816 = x3d.HAnimSite()
HAnimSite816.setName("l_carpal_distal_phalanx_2_tip")
HAnimSite816.setDEF("Joe_l_carpal_distal_phalanx_2_tip")
HAnimSite816.setTranslation(x3d.doubleToFloat([0.2089,0.6858,-0.0245]))
Shape817 = x3d.Shape()
Shape817.setUSE("sitebox")

HAnimSite816.addChild(Shape817)

HAnimSegment809.addChild(HAnimSite816)
HAnimSite818 = x3d.HAnimSite()
HAnimSite818.setName("l_dactylion_pt")
HAnimSite818.setDEF("Joe_l_dactylion_pt")
HAnimSite818.setTranslation(x3d.doubleToFloat([0.2056,0.6743,-0.0482]))
Shape819 = x3d.Shape()
Shape819.setUSE("sitebox")

HAnimSite818.addChild(Shape819)

HAnimSegment809.addChild(HAnimSite818)

HAnimJoint808.addChild(HAnimSegment809)

HAnimJoint800.addChild(HAnimJoint808)

HAnimJoint792.addChild(HAnimJoint800)

HAnimJoint784.addChild(HAnimJoint792)

HAnimJoint744.addChild(HAnimJoint784)
HAnimJoint820 = x3d.HAnimJoint()
HAnimJoint820.setName("l_carpometacarpal_3")
HAnimJoint820.setDEF("Joe_l_carpometacarpal_3")
HAnimJoint820.setCenter(x3d.doubleToFloat([0.1987,0.8029,-0.053]))
HAnimJoint820.setSkinCoordIndex([131,132])
HAnimJoint820.setSkinCoordWeight(x3d.doubleToFloat([1,1]))
HAnimSegment821 = x3d.HAnimSegment()
HAnimSegment821.setName("l_metacarpal_3")
HAnimSegment821.setDEF("Joe_l_metacarpal_3")
Shape822 = x3d.Shape()
Appearance823 = x3d.Appearance()
Appearance823.setUSE("SegmentLine")

Shape822.setAppearance(Appearance823)
IndexedLineSet824 = x3d.IndexedLineSet()
IndexedLineSet824.setCoordIndex([0,1,-1])
Coordinate825 = x3d.Coordinate()
Coordinate825.setPoint(x3d.doubleToFloat([0.1987,0.8029,-0.053,0.1987,0.7818,-0.053]))

IndexedLineSet824.setCoord(Coordinate825)

Shape822.setGeometry(IndexedLineSet824)

HAnimSegment821.addChild(Shape822)
Transform826 = x3d.Transform()
Transform826.setTranslation(x3d.doubleToFloat([0.1987,0.8029,-0.053]))
Shape827 = x3d.Shape()
Shape827.setUSE("jointbox")

Transform826.addChild(Shape827)

HAnimSegment821.addChild(Transform826)

HAnimJoint820.addChild(HAnimSegment821)
HAnimJoint828 = x3d.HAnimJoint()
HAnimJoint828.setName("l_metacarpophalangeal_3")
HAnimJoint828.setDEF("Joe_l_metacarpophalangeal_3")
HAnimJoint828.setCenter(x3d.doubleToFloat([0.1987,0.7818,-0.053]))
HAnimJoint828.setSkinCoordIndex([156,157,163,164])
HAnimJoint828.setSkinCoordWeight(x3d.doubleToFloat([1,1,0.5,0.5]))
HAnimSegment829 = x3d.HAnimSegment()
HAnimSegment829.setName("l_carpal_proximal_phalanx_3")
HAnimSegment829.setDEF("Joe_l_carpal_proximal_phalanx_3")
Shape830 = x3d.Shape()
Appearance831 = x3d.Appearance()
Appearance831.setUSE("SegmentLine")

Shape830.setAppearance(Appearance831)
IndexedLineSet832 = x3d.IndexedLineSet()
IndexedLineSet832.setCoordIndex([0,1,-1])
Coordinate833 = x3d.Coordinate()
Coordinate833.setPoint(x3d.doubleToFloat([0.1987,0.7818,-0.053,0.2013,0.7273,-0.0503]))

IndexedLineSet832.setCoord(Coordinate833)

Shape830.setGeometry(IndexedLineSet832)

HAnimSegment829.addChild(Shape830)
Transform834 = x3d.Transform()
Transform834.setTranslation(x3d.doubleToFloat([0.1987,0.7818,-0.053]))
Shape835 = x3d.Shape()
Shape835.setUSE("jointbox")

Transform834.addChild(Shape835)

HAnimSegment829.addChild(Transform834)

HAnimJoint828.addChild(HAnimSegment829)
HAnimJoint836 = x3d.HAnimJoint()
HAnimJoint836.setName("l_carpal_proximal_interphalangeal_3")
HAnimJoint836.setDEF("Joe_l_carpal_proximal_interphalangeal_3")
HAnimJoint836.setCenter(x3d.doubleToFloat([0.2013,0.7273,-0.0503]))
HAnimJoint836.setSkinCoordIndex([179,180,181,182])
HAnimJoint836.setSkinCoordWeight(x3d.doubleToFloat([1,1,1,1]))
HAnimSegment837 = x3d.HAnimSegment()
HAnimSegment837.setName("l_carpal_middle_phalanx_3")
HAnimSegment837.setDEF("Joe_l_carpal_middle_phalanx_3")
Shape838 = x3d.Shape()
Appearance839 = x3d.Appearance()
Appearance839.setUSE("SegmentLine")

Shape838.setAppearance(Appearance839)
IndexedLineSet840 = x3d.IndexedLineSet()
IndexedLineSet840.setCoordIndex([0,1,-1])
Coordinate841 = x3d.Coordinate()
Coordinate841.setPoint(x3d.doubleToFloat([0.2013,0.7273,-0.0503,0.2026,0.7011,-0.0494]))

IndexedLineSet840.setCoord(Coordinate841)

Shape838.setGeometry(IndexedLineSet840)

HAnimSegment837.addChild(Shape838)
Transform842 = x3d.Transform()
Transform842.setTranslation(x3d.doubleToFloat([0.2013,0.7273,-0.0503]))
Shape843 = x3d.Shape()
Shape843.setUSE("jointbox")

Transform842.addChild(Shape843)

HAnimSegment837.addChild(Transform842)

HAnimJoint836.addChild(HAnimSegment837)
HAnimJoint844 = x3d.HAnimJoint()
HAnimJoint844.setName("l_carpal_distal_interphalangeal_3")
HAnimJoint844.setDEF("Joe_l_carpal_distal_interphalangeal_3")
HAnimJoint844.setCenter(x3d.doubleToFloat([0.2026,0.7011,-0.0494]))
HAnimJoint844.setSkinCoordIndex([183,184,185,186,187,188,189,190,191])
HAnimJoint844.setSkinCoordWeight(x3d.doubleToFloat([1,1,1,1,1,1,1,1,1]))
HAnimSegment845 = x3d.HAnimSegment()
HAnimSegment845.setName("l_carpal_distal_phalanx_3")
HAnimSegment845.setDEF("Joe_l_carpal_distal_phalanx_3")
Shape846 = x3d.Shape()
Appearance847 = x3d.Appearance()
Appearance847.setUSE("SegmentLine")

Shape846.setAppearance(Appearance847)
IndexedLineSet848 = x3d.IndexedLineSet()
IndexedLineSet848.setCoordIndex([0,1,-1])
Coordinate849 = x3d.Coordinate()
Coordinate849.setPoint(x3d.doubleToFloat([0.2026,0.7011,-0.0494,0.208,0.6731,-0.0491]))

IndexedLineSet848.setCoord(Coordinate849)

Shape846.setGeometry(IndexedLineSet848)

HAnimSegment845.addChild(Shape846)
HAnimSite850 = x3d.HAnimSite()
HAnimSite850.setName("l_carpal_distal_phalanx_3_tip")
HAnimSite850.setDEF("Joe_l_carpal_distal_phalanx_3_tip")
HAnimSite850.setTranslation(x3d.doubleToFloat([0.208,0.6731,-0.0491]))
Shape851 = x3d.Shape()
Shape851.setUSE("sitebox")

HAnimSite850.addChild(Shape851)

HAnimSegment845.addChild(HAnimSite850)
Transform852 = x3d.Transform()
Transform852.setTranslation(x3d.doubleToFloat([0.2026,0.7011,-0.0494]))
Shape853 = x3d.Shape()
Shape853.setUSE("jointbox")

Transform852.addChild(Shape853)

HAnimSegment845.addChild(Transform852)

HAnimJoint844.addChild(HAnimSegment845)

HAnimJoint836.addChild(HAnimJoint844)

HAnimJoint828.addChild(HAnimJoint836)

HAnimJoint820.addChild(HAnimJoint828)

HAnimJoint744.addChild(HAnimJoint820)
HAnimJoint854 = x3d.HAnimJoint()
HAnimJoint854.setName("l_carpometacarpal_4")
HAnimJoint854.setDEF("Joe_l_carpometacarpal_4")
HAnimJoint854.setCenter(x3d.doubleToFloat([0.1956,0.8019,-0.0794]))
HAnimJoint854.setSkinCoordIndex([133,134])
HAnimJoint854.setSkinCoordWeight(x3d.doubleToFloat([1,1]))
HAnimSegment855 = x3d.HAnimSegment()
HAnimSegment855.setName("l_metacarpal_4")
HAnimSegment855.setDEF("Joe_l_metacarpal_4")
Shape856 = x3d.Shape()
Appearance857 = x3d.Appearance()
Appearance857.setUSE("SegmentLine")

Shape856.setAppearance(Appearance857)
IndexedLineSet858 = x3d.IndexedLineSet()
IndexedLineSet858.setCoordIndex([0,1,-1])
Coordinate859 = x3d.Coordinate()
Coordinate859.setPoint(x3d.doubleToFloat([0.1956,0.8019,-0.0794,0.1956,0.7815,-0.0794]))

IndexedLineSet858.setCoord(Coordinate859)

Shape856.setGeometry(IndexedLineSet858)

HAnimSegment855.addChild(Shape856)
Transform860 = x3d.Transform()
Transform860.setTranslation(x3d.doubleToFloat([0.1956,0.8019,-0.0794]))
Shape861 = x3d.Shape()
Shape861.setUSE("jointbox")

Transform860.addChild(Shape861)

HAnimSegment855.addChild(Transform860)

HAnimJoint854.addChild(HAnimSegment855)
HAnimJoint862 = x3d.HAnimJoint()
HAnimJoint862.setName("l_metacarpophalangeal_4")
HAnimJoint862.setDEF("Joe_l_metacarpophalangeal_4")
HAnimJoint862.setCenter(x3d.doubleToFloat([0.1956,0.7815,-0.0794]))
HAnimJoint862.setSkinCoordIndex([158,159,164,165])
HAnimJoint862.setSkinCoordWeight(x3d.doubleToFloat([1,1,0.5,0.5]))
HAnimSegment863 = x3d.HAnimSegment()
HAnimSegment863.setName("l_carpal_proximal_phalanx_4")
HAnimSegment863.setDEF("Joe_l_carpal_proximal_phalanx_4")
Shape864 = x3d.Shape()
Appearance865 = x3d.Appearance()
Appearance865.setUSE("SegmentLine")

Shape864.setAppearance(Appearance865)
IndexedLineSet866 = x3d.IndexedLineSet()
IndexedLineSet866.setCoordIndex([0,1,-1])
Coordinate867 = x3d.Coordinate()
Coordinate867.setPoint(x3d.doubleToFloat([0.1956,0.7815,-0.0794,0.1973,0.7287,-0.0777]))

IndexedLineSet866.setCoord(Coordinate867)

Shape864.setGeometry(IndexedLineSet866)

HAnimSegment863.addChild(Shape864)
Transform868 = x3d.Transform()
Transform868.setTranslation(x3d.doubleToFloat([0.1956,0.7815,-0.0794]))
Shape869 = x3d.Shape()
Shape869.setUSE("jointbox")

Transform868.addChild(Shape869)

HAnimSegment863.addChild(Transform868)

HAnimJoint862.addChild(HAnimSegment863)
HAnimJoint870 = x3d.HAnimJoint()
HAnimJoint870.setName("l_carpal_proximal_interphalangeal_4")
HAnimJoint870.setDEF("Joe_l_carpal_proximal_interphalangeal_4")
HAnimJoint870.setCenter(x3d.doubleToFloat([0.1973,0.7287,-0.0777]))
HAnimJoint870.setSkinCoordIndex([192,193,194,195])
HAnimJoint870.setSkinCoordWeight(x3d.doubleToFloat([1,1,1,1]))
HAnimSegment871 = x3d.HAnimSegment()
HAnimSegment871.setName("l_carpal_middle_phalanx_4")
HAnimSegment871.setDEF("Joe_l_carpal_middle_phalanx_4")
Shape872 = x3d.Shape()
Appearance873 = x3d.Appearance()
Appearance873.setUSE("SegmentLine")

Shape872.setAppearance(Appearance873)
IndexedLineSet874 = x3d.IndexedLineSet()
IndexedLineSet874.setCoordIndex([0,1,-1])
Coordinate875 = x3d.Coordinate()
Coordinate875.setPoint(x3d.doubleToFloat([0.1973,0.7287,-0.0777,0.1983,0.7045,-0.0767]))

IndexedLineSet874.setCoord(Coordinate875)

Shape872.setGeometry(IndexedLineSet874)

HAnimSegment871.addChild(Shape872)
Transform876 = x3d.Transform()
Transform876.setTranslation(x3d.doubleToFloat([0.1973,0.7287,-0.0777]))
Shape877 = x3d.Shape()
Shape877.setUSE("jointbox")

Transform876.addChild(Shape877)

HAnimSegment871.addChild(Transform876)

HAnimJoint870.addChild(HAnimSegment871)
HAnimJoint878 = x3d.HAnimJoint()
HAnimJoint878.setName("l_carpal_distal_interphalangeal_4")
HAnimJoint878.setDEF("Joe_l_carpal_distal_interphalangeal_4")
HAnimJoint878.setCenter(x3d.doubleToFloat([0.1983,0.7045,-0.0767]))
HAnimJoint878.setSkinCoordIndex([196,197,198,199,200,201,202,203,204])
HAnimJoint878.setSkinCoordWeight(x3d.doubleToFloat([1,1,1,1,1,1,1,1,1]))
HAnimSegment879 = x3d.HAnimSegment()
HAnimSegment879.setName("l_carpal_distal_phalanx_4")
HAnimSegment879.setDEF("Joe_l_carpal_distal_phalanx_4")
Shape880 = x3d.Shape()
Appearance881 = x3d.Appearance()
Appearance881.setUSE("SegmentLine")

Shape880.setAppearance(Appearance881)
IndexedLineSet882 = x3d.IndexedLineSet()
IndexedLineSet882.setCoordIndex([0,1,-1])
Coordinate883 = x3d.Coordinate()
Coordinate883.setPoint(x3d.doubleToFloat([0.1983,0.7045,-0.0767,0.2035,0.675,-0.0756]))

IndexedLineSet882.setCoord(Coordinate883)

Shape880.setGeometry(IndexedLineSet882)

HAnimSegment879.addChild(Shape880)
Transform884 = x3d.Transform()
Transform884.setTranslation(x3d.doubleToFloat([0.1983,0.7045,-0.0767]))
Shape885 = x3d.Shape()
Shape885.setUSE("jointbox")

Transform884.addChild(Shape885)

HAnimSegment879.addChild(Transform884)
HAnimSite886 = x3d.HAnimSite()
HAnimSite886.setName("l_carpal_distal_phalanx_4_tip")
HAnimSite886.setDEF("Joe_l_carpal_distal_phalanx_4_tip")
HAnimSite886.setTranslation(x3d.doubleToFloat([0.2035,0.675,-0.0756]))
Shape887 = x3d.Shape()
Shape887.setUSE("sitebox")

HAnimSite886.addChild(Shape887)

HAnimSegment879.addChild(HAnimSite886)

HAnimJoint878.addChild(HAnimSegment879)

HAnimJoint870.addChild(HAnimJoint878)

HAnimJoint862.addChild(HAnimJoint870)

HAnimJoint854.addChild(HAnimJoint862)

HAnimJoint744.addChild(HAnimJoint854)
HAnimJoint888 = x3d.HAnimJoint()
HAnimJoint888.setName("l_carpometacarpal_5")
HAnimJoint888.setDEF("Joe_l_carpometacarpal_5")
HAnimJoint888.setCenter(x3d.doubleToFloat([0.1925,0.8066,-0.1036]))
HAnimJoint888.setSkinCoordIndex([135,136,137,165])
HAnimJoint888.setSkinCoordWeight(x3d.doubleToFloat([1,1,1,0.5]))
HAnimSegment889 = x3d.HAnimSegment()
HAnimSegment889.setName("l_metacarpal_5")
HAnimSegment889.setDEF("Joe_l_metacarpal_5")
Shape890 = x3d.Shape()
Appearance891 = x3d.Appearance()
Appearance891.setUSE("SegmentLine")

Shape890.setAppearance(Appearance891)
IndexedLineSet892 = x3d.IndexedLineSet()
IndexedLineSet892.setCoordIndex([0,1,-1])
Coordinate893 = x3d.Coordinate()
Coordinate893.setPoint(x3d.doubleToFloat([0.1925,0.8066,-0.1036,0.1925,0.7866,-0.1036]))

IndexedLineSet892.setCoord(Coordinate893)

Shape890.setGeometry(IndexedLineSet892)

HAnimSegment889.addChild(Shape890)
Transform894 = x3d.Transform()
Transform894.setTranslation(x3d.doubleToFloat([0.1925,0.8066,-0.1036]))
Shape895 = x3d.Shape()
Shape895.setUSE("jointbox")

Transform894.addChild(Shape895)

HAnimSegment889.addChild(Transform894)

HAnimJoint888.addChild(HAnimSegment889)
HAnimJoint896 = x3d.HAnimJoint()
HAnimJoint896.setName("l_metacarpophalangeal_5")
HAnimJoint896.setDEF("Joe_l_metacarpophalangeal_5")
HAnimJoint896.setCenter(x3d.doubleToFloat([0.1925,0.7866,-0.1036]))
HAnimJoint896.setSkinCoordIndex([160,161,162])
HAnimJoint896.setSkinCoordWeight(x3d.doubleToFloat([1,1,1]))
HAnimSegment897 = x3d.HAnimSegment()
HAnimSegment897.setName("l_carpal_proximal_phalanx_5")
HAnimSegment897.setDEF("Joe_l_carpal_proximal_phalanx_5")
Shape898 = x3d.Shape()
Appearance899 = x3d.Appearance()
Appearance899.setUSE("SegmentLine")

Shape898.setAppearance(Appearance899)
IndexedLineSet900 = x3d.IndexedLineSet()
IndexedLineSet900.setCoordIndex([0,1,-1])
Coordinate901 = x3d.Coordinate()
Coordinate901.setPoint(x3d.doubleToFloat([0.1925,0.7866,-0.1036,0.1938,0.7452,-0.1024]))

IndexedLineSet900.setCoord(Coordinate901)

Shape898.setGeometry(IndexedLineSet900)

HAnimSegment897.addChild(Shape898)
Transform902 = x3d.Transform()
Transform902.setTranslation(x3d.doubleToFloat([0.1925,0.7866,-0.1036]))
Shape903 = x3d.Shape()
Shape903.setUSE("jointbox")

Transform902.addChild(Shape903)

HAnimSegment897.addChild(Transform902)

HAnimJoint896.addChild(HAnimSegment897)
HAnimJoint904 = x3d.HAnimJoint()
HAnimJoint904.setName("l_carpal_proximal_interphalangeal_5")
HAnimJoint904.setDEF("Joe_l_carpal_proximal_interphalangeal_5")
HAnimJoint904.setCenter(x3d.doubleToFloat([0.1938,0.7452,-0.1024]))
HAnimJoint904.setSkinCoordIndex([205,206,207,208])
HAnimJoint904.setSkinCoordWeight(x3d.doubleToFloat([1,1,1,1]))
HAnimSegment905 = x3d.HAnimSegment()
HAnimSegment905.setName("l_carpal_middle_phalanx_5")
HAnimSegment905.setDEF("Joe_l_carpal_middle_phalanx_5")
Transform906 = x3d.Transform()
Transform906.setTranslation(x3d.doubleToFloat([0.1938,0.7452,-0.1024]))
Shape907 = x3d.Shape()
Shape907.setUSE("jointbox")

Transform906.addChild(Shape907)

HAnimSegment905.addChild(Transform906)
Shape908 = x3d.Shape()
Appearance909 = x3d.Appearance()
Appearance909.setUSE("SegmentLine")

Shape908.setAppearance(Appearance909)
IndexedLineSet910 = x3d.IndexedLineSet()
IndexedLineSet910.setCoordIndex([0,1,-1])
Coordinate911 = x3d.Coordinate()
Coordinate911.setPoint(x3d.doubleToFloat([0.1938,0.7452,-0.1024,0.1948,0.7277,-0.1017]))

IndexedLineSet910.setCoord(Coordinate911)

Shape908.setGeometry(IndexedLineSet910)

HAnimSegment905.addChild(Shape908)

HAnimJoint904.addChild(HAnimSegment905)
HAnimJoint912 = x3d.HAnimJoint()
HAnimJoint912.setName("l_carpal_distal_interphalangeal_5")
HAnimJoint912.setDEF("Joe_l_carpal_distal_interphalangeal_5")
HAnimJoint912.setCenter(x3d.doubleToFloat([0.1948,0.7277,-0.1017]))
HAnimJoint912.setSkinCoordIndex([209,210,211,212,213,214,215,216,217])
HAnimJoint912.setSkinCoordWeight(x3d.doubleToFloat([1,1,1,1,1,1,1,1,1]))
HAnimSegment913 = x3d.HAnimSegment()
HAnimSegment913.setName("l_carpal_distal_phalanx_5")
HAnimSegment913.setDEF("Joe_l_carpal_distal_phalanx_5")
Shape914 = x3d.Shape()
Appearance915 = x3d.Appearance()
Appearance915.setUSE("SegmentLine")

Shape914.setAppearance(Appearance915)
IndexedLineSet916 = x3d.IndexedLineSet()
IndexedLineSet916.setCoordIndex([0,1,-1])
Coordinate917 = x3d.Coordinate()
Coordinate917.setPoint(x3d.doubleToFloat([0.1948,0.7277,-0.1017,0.2014,0.7009,-0.1012]))

IndexedLineSet916.setCoord(Coordinate917)

Shape914.setGeometry(IndexedLineSet916)

HAnimSegment913.addChild(Shape914)
Transform918 = x3d.Transform()
Transform918.setTranslation(x3d.doubleToFloat([0.1948,0.7277,-0.1017]))
Shape919 = x3d.Shape()
Shape919.setUSE("jointbox")

Transform918.addChild(Shape919)

HAnimSegment913.addChild(Transform918)
HAnimSite920 = x3d.HAnimSite()
HAnimSite920.setName("l_carpal_distal_phalanx_5_tip")
HAnimSite920.setDEF("Joe_l_carpal_distal_phalanx_5_tip")
HAnimSite920.setTranslation(x3d.doubleToFloat([0.2014,0.7009,-0.1012]))
Shape921 = x3d.Shape()
Shape921.setUSE("sitebox")

HAnimSite920.addChild(Shape921)

HAnimSegment913.addChild(HAnimSite920)

HAnimJoint912.addChild(HAnimSegment913)

HAnimJoint904.addChild(HAnimJoint912)

HAnimJoint896.addChild(HAnimJoint904)

HAnimJoint888.addChild(HAnimJoint896)

HAnimJoint744.addChild(HAnimJoint888)

HAnimJoint722.addChild(HAnimJoint744)

HAnimJoint698.addChild(HAnimJoint722)

HAnimJoint682.addChild(HAnimJoint698)

HAnimJoint672.addChild(HAnimJoint682)

HAnimJoint556.addChild(HAnimJoint672)
HAnimJoint922 = x3d.HAnimJoint()
HAnimJoint922.setName("r_sternoclavicular")
HAnimJoint922.setDEF("Joe_r_sternoclavicular")
HAnimJoint922.setCenter(x3d.doubleToFloat([-0.03,1.46,0]))
HAnimJoint922.setSkinCoordIndex([10])
HAnimJoint922.setSkinCoordWeight(x3d.doubleToFloat([1]))
HAnimSegment923 = x3d.HAnimSegment()
HAnimSegment923.setName("r_clavicle")
HAnimSegment923.setDEF("Joe_r_clavicle")
Shape924 = x3d.Shape()
Appearance925 = x3d.Appearance()
Appearance925.setUSE("SegmentLine")

Shape924.setAppearance(Appearance925)
IndexedLineSet926 = x3d.IndexedLineSet()
IndexedLineSet926.setCoordIndex([0,1,-1])
Coordinate927 = x3d.Coordinate()
Coordinate927.setPoint(x3d.doubleToFloat([-0.03,1.46,0.02,-0.09,1.41,-0.09]))

IndexedLineSet926.setCoord(Coordinate927)

Shape924.setGeometry(IndexedLineSet926)

HAnimSegment923.addChild(Shape924)
Transform928 = x3d.Transform()
Transform928.setTranslation(x3d.doubleToFloat([-0.03,1.46,0.02]))
Shape929 = x3d.Shape()
Shape929.setUSE("jointbox")

Transform928.addChild(Shape929)

HAnimSegment923.addChild(Transform928)
HAnimSite930 = x3d.HAnimSite()
HAnimSite930.setName("r_clavicle_pt")
HAnimSite930.setDEF("Joe_r_clavicle_pt")
HAnimSite930.setTranslation(x3d.doubleToFloat([-0.03,1.46,0.035]))
Shape931 = x3d.Shape()
Shape931.setUSE("sitebox")

HAnimSite930.addChild(Shape931)

HAnimSegment923.addChild(HAnimSite930)

HAnimJoint922.addChild(HAnimSegment923)
HAnimJoint932 = x3d.HAnimJoint()
HAnimJoint932.setName("r_acromioclavicular")
HAnimJoint932.setDEF("Joe_r_acromioclavicular")
HAnimJoint932.setCenter(x3d.doubleToFloat([-0.09,1.41,-0.11]))
HAnimJoint932.setSkinCoordIndex([77,29])
HAnimJoint932.setSkinCoordWeight(x3d.doubleToFloat([1,0.9]))
HAnimSegment933 = x3d.HAnimSegment()
HAnimSegment933.setName("r_scapula")
HAnimSegment933.setDEF("Joe_r_scapula")
Shape934 = x3d.Shape()
Appearance935 = x3d.Appearance()
Appearance935.setUSE("SegmentLine")

Shape934.setAppearance(Appearance935)
IndexedLineSet936 = x3d.IndexedLineSet()
IndexedLineSet936.setCoordIndex([0,1,-1])
Coordinate937 = x3d.Coordinate()
Coordinate937.setPoint(x3d.doubleToFloat([-0.09,1.41,-0.09,-0.2,1.44,-0.04]))

IndexedLineSet936.setCoord(Coordinate937)

Shape934.setGeometry(IndexedLineSet936)

HAnimSegment933.addChild(Shape934)
Transform938 = x3d.Transform()
Transform938.setTranslation(x3d.doubleToFloat([-0.09,1.41,-0.09]))
Shape939 = x3d.Shape()
Shape939.setUSE("jointbox")

Transform938.addChild(Shape939)

HAnimSegment933.addChild(Transform938)
Transform940 = x3d.Transform()
Transform940.setTranslation(x3d.doubleToFloat([-0.11,1.427,-0.1375]))
Shape941 = x3d.Shape()
Shape941.setUSE("skinsphere")

Transform940.addChild(Shape941)

HAnimSegment933.addChild(Transform940)
HAnimSite942 = x3d.HAnimSite()
HAnimSite942.setName("r_acromion_pt")
HAnimSite942.setDEF("Joe_r_acromion_pt")
HAnimSite942.setTranslation(x3d.doubleToFloat([-0.178,1.4825,-0.0625]))
Shape943 = x3d.Shape()
Shape943.setUSE("sitebox")

HAnimSite942.addChild(Shape943)

HAnimSegment933.addChild(HAnimSite942)
HAnimSite944 = x3d.HAnimSite()
HAnimSite944.setName("r_axilla_proximal_pt")
HAnimSite944.setDEF("Joe_r_axilla_proximal_pt")
HAnimSite944.setTranslation(x3d.doubleToFloat([-0.17,1.38,0.007]))
Shape945 = x3d.Shape()
Shape945.setUSE("sitebox")

HAnimSite944.addChild(Shape945)

HAnimSegment933.addChild(HAnimSite944)
HAnimSite946 = x3d.HAnimSite()
HAnimSite946.setName("r_axilla_distal_pt")
HAnimSite946.setDEF("Joe_r_axilla_distal_pt")
HAnimSite946.setTranslation(x3d.doubleToFloat([-0.16,1.38,-0.127]))
Shape947 = x3d.Shape()
Shape947.setUSE("sitebox")

HAnimSite946.addChild(Shape947)

HAnimSegment933.addChild(HAnimSite946)

HAnimJoint932.addChild(HAnimSegment933)
HAnimJoint948 = x3d.HAnimJoint()
HAnimJoint948.setName("r_shoulder")
HAnimJoint948.setDEF("Joe_r_shoulder")
HAnimJoint948.setCenter(x3d.doubleToFloat([-0.2,1.44,-0.04]))
HAnimJoint948.setSkinCoordIndex([29,30,32,78,218,219,220,221,86,88])
HAnimJoint948.setSkinCoordWeight(x3d.doubleToFloat([0.1,1,1,1,1,1,1,1,0.3,0.2]))
HAnimSegment949 = x3d.HAnimSegment()
HAnimSegment949.setName("r_upperarm")
HAnimSegment949.setDEF("Joe_r_upperarm")
Transform950 = x3d.Transform()
Transform950.setTranslation(x3d.doubleToFloat([-0.2,1.44,-0.04]))
Shape951 = x3d.Shape()
Shape951.setUSE("jointbox")

Transform950.addChild(Shape951)

HAnimSegment949.addChild(Transform950)
Shape952 = x3d.Shape()
Appearance953 = x3d.Appearance()
Appearance953.setUSE("SegmentLine")

Shape952.setAppearance(Appearance953)
IndexedLineSet954 = x3d.IndexedLineSet()
IndexedLineSet954.setCoordIndex([0,1,-1])
Coordinate955 = x3d.Coordinate()
Coordinate955.setPoint(x3d.doubleToFloat([-0.2,1.44,-0.04,-0.2,1.1388,-0.04]))

IndexedLineSet954.setCoord(Coordinate955)

Shape952.setGeometry(IndexedLineSet954)

HAnimSegment949.addChild(Shape952)
Transform956 = x3d.Transform()
Transform956.setTranslation(x3d.doubleToFloat([-0.178,1.4825,-0.0625]))
Shape957 = x3d.Shape()
Shape957.setUSE("skinsphere")

Transform956.addChild(Shape957)

HAnimSegment949.addChild(Transform956)
Transform958 = x3d.Transform()
Transform958.setTranslation(x3d.doubleToFloat([-0.17,1.38,0.007]))
Shape959 = x3d.Shape()
Shape959.setUSE("skinsphere")

Transform958.addChild(Shape959)

HAnimSegment949.addChild(Transform958)
Transform960 = x3d.Transform()
Transform960.setTranslation(x3d.doubleToFloat([-0.16,1.38,-0.127]))
Shape961 = x3d.Shape()
Shape961.setUSE("skinsphere")

Transform960.addChild(Shape961)

HAnimSegment949.addChild(Transform960)
Transform962 = x3d.Transform()
Transform962.setTranslation(x3d.doubleToFloat([-0.235,1.42,-0.0625]))
Shape963 = x3d.Shape()
Shape963.setUSE("skinsphere")

Transform962.addChild(Shape963)

HAnimSegment949.addChild(Transform962)
Transform964 = x3d.Transform()
Transform964.setTranslation(x3d.doubleToFloat([-0.23,1.235,-0.04]))
Shape965 = x3d.Shape()
Shape965.setUSE("skinsphere")

Transform964.addChild(Shape965)

HAnimSegment949.addChild(Transform964)
Transform966 = x3d.Transform()
Transform966.setTranslation(x3d.doubleToFloat([-0.16,1.23,-0.04]))
Shape967 = x3d.Shape()
Shape967.setUSE("skinsphere")

Transform966.addChild(Shape967)

HAnimSegment949.addChild(Transform966)
Transform968 = x3d.Transform()
Transform968.setTranslation(x3d.doubleToFloat([-0.2,1.23,-0.105]))
Shape969 = x3d.Shape()
Shape969.setUSE("skinsphere")

Transform968.addChild(Shape969)

HAnimSegment949.addChild(Transform968)
Transform970 = x3d.Transform()
Transform970.setTranslation(x3d.doubleToFloat([-0.2,1.235,0.02]))
Shape971 = x3d.Shape()
Shape971.setUSE("skinsphere")

Transform970.addChild(Shape971)

HAnimSegment949.addChild(Transform970)
HAnimSite972 = x3d.HAnimSite()
HAnimSite972.setName("r_humeral_medial_epicondyle_pt")
HAnimSite972.setDEF("Joe_r_humeral_medial_epicondyle_pt")
HAnimSite972.setTranslation(x3d.doubleToFloat([-0.165,1.1388,-0.04]))
Shape973 = x3d.Shape()
Shape973.setUSE("sitebox")

HAnimSite972.addChild(Shape973)

HAnimSegment949.addChild(HAnimSite972)
HAnimSite974 = x3d.HAnimSite()
HAnimSite974.setName("r_radiale_pt")
HAnimSite974.setDEF("Joe_r_radiale_pt")
HAnimSite974.setTranslation(x3d.doubleToFloat([-0.23,1.133,-0.055]))
Shape975 = x3d.Shape()
Shape975.setUSE("sitebox")

HAnimSite974.addChild(Shape975)

HAnimSegment949.addChild(HAnimSite974)
HAnimSite976 = x3d.HAnimSite()
HAnimSite976.setName("r_humeral_lateral_epicondyle_pt")
HAnimSite976.setDEF("Joe_r_humeral_lateral_epicondyle_pt")
HAnimSite976.setTranslation(x3d.doubleToFloat([-0.244,1.1388,-0.04]))
Shape977 = x3d.Shape()
Shape977.setUSE("sitebox")

HAnimSite976.addChild(Shape977)

HAnimSegment949.addChild(HAnimSite976)

HAnimJoint948.addChild(HAnimSegment949)
HAnimJoint978 = x3d.HAnimJoint()
HAnimJoint978.setName("r_elbow")
HAnimJoint978.setDEF("Joe_r_elbow")
HAnimJoint978.setCenter(x3d.doubleToFloat([-0.2,1.1388,-0.04]))
HAnimJoint978.setSkinCoordIndex([33,34,35,225,226,227,228,229,231,232,233,234])
HAnimJoint978.setSkinCoordWeight(x3d.doubleToFloat([1,1,1,1,1,1,1,1,1,1,1,1]))
HAnimSegment979 = x3d.HAnimSegment()
HAnimSegment979.setName("r_forearm")
HAnimSegment979.setDEF("Joe_r_forearm")
Shape980 = x3d.Shape()
Appearance981 = x3d.Appearance()
Appearance981.setUSE("SegmentLine")

Shape980.setAppearance(Appearance981)
IndexedLineSet982 = x3d.IndexedLineSet()
IndexedLineSet982.setCoordIndex([0,1,-1])
Coordinate983 = x3d.Coordinate()
Coordinate983.setPoint(x3d.doubleToFloat([-0.2,1.1388,-0.04,-0.2,0.89,-0.04]))

IndexedLineSet982.setCoord(Coordinate983)

Shape980.setGeometry(IndexedLineSet982)

HAnimSegment979.addChild(Shape980)
Transform984 = x3d.Transform()
Transform984.setTranslation(x3d.doubleToFloat([-0.2,1.1388,-0.04]))
Shape985 = x3d.Shape()
Shape985.setUSE("jointbox")

Transform984.addChild(Shape985)

HAnimSegment979.addChild(Transform984)
Transform986 = x3d.Transform()
Transform986.setTranslation(x3d.doubleToFloat([-0.2,1.1388,0.013]))
Shape987 = x3d.Shape()
Shape987.setUSE("skinsphere")

Transform986.addChild(Shape987)

HAnimSegment979.addChild(Transform986)
Transform988 = x3d.Transform()
Transform988.setTranslation(x3d.doubleToFloat([-0.225,1,-0.01]))
Shape989 = x3d.Shape()
Shape989.setUSE("skinsphere")

Transform988.addChild(Shape989)

HAnimSegment979.addChild(Transform988)
Transform990 = x3d.Transform()
Transform990.setTranslation(x3d.doubleToFloat([-0.225,1,-0.07]))
Shape991 = x3d.Shape()
Shape991.setUSE("skinsphere")

Transform990.addChild(Shape991)

HAnimSegment979.addChild(Transform990)
Transform992 = x3d.Transform()
Transform992.setTranslation(x3d.doubleToFloat([-0.185,1,-0.01]))
Shape993 = x3d.Shape()
Shape993.setUSE("skinsphere")

Transform992.addChild(Shape993)

HAnimSegment979.addChild(Transform992)
Transform994 = x3d.Transform()
Transform994.setTranslation(x3d.doubleToFloat([-0.185,1,-0.07]))
Shape995 = x3d.Shape()
Shape995.setUSE("skinsphere")

Transform994.addChild(Shape995)

HAnimSegment979.addChild(Transform994)
HAnimSite996 = x3d.HAnimSite()
HAnimSite996.setName("r_radial_styloid_pt")
HAnimSite996.setDEF("Joe_r_radial_styloid_pt")
HAnimSite996.setTranslation(x3d.doubleToFloat([-0.2,0.9,-0.015]))
Shape997 = x3d.Shape()
Shape997.setUSE("sitebox")

HAnimSite996.addChild(Shape997)

HAnimSegment979.addChild(HAnimSite996)
HAnimSite998 = x3d.HAnimSite()
HAnimSite998.setName("r_olecranon_pt")
HAnimSite998.setDEF("Joe_r_olecranon_pt")
HAnimSite998.setTranslation(x3d.doubleToFloat([-0.2,1.1388,-0.08]))
Shape999 = x3d.Shape()
Shape999.setUSE("sitebox")

HAnimSite998.addChild(Shape999)

HAnimSegment979.addChild(HAnimSite998)

HAnimJoint978.addChild(HAnimSegment979)
HAnimJoint1000 = x3d.HAnimJoint()
HAnimJoint1000.setName("r_radiocarpal")
HAnimJoint1000.setDEF("Joe_r_radiocarpal")
HAnimJoint1000.setCenter(x3d.doubleToFloat([-0.2,0.89,-0.04]))
HAnimJoint1000.setSkinCoordIndex([235,236,237,238,239,240,241,242])
HAnimJoint1000.setSkinCoordWeight(x3d.doubleToFloat([1,1,1,1,1,1,1,1]))
HAnimSegment1001 = x3d.HAnimSegment()
HAnimSegment1001.setName("r_carpal")
HAnimSegment1001.setDEF("Joe_r_carpal")
Shape1002 = x3d.Shape()
Appearance1003 = x3d.Appearance()
Appearance1003.setUSE("SegmentLine")

Shape1002.setAppearance(Appearance1003)
IndexedLineSet1004 = x3d.IndexedLineSet()
IndexedLineSet1004.setCoordIndex([0,1,-1,0,2,-1,0,3,-1,0,4,-1,0,5,-1])
Coordinate1005 = x3d.Coordinate()
Coordinate1005.setPoint(x3d.doubleToFloat([-0.2,0.89,-0.04,-0.2,0.85,0,-0.2,0.84,-0.015,-0.2,0.835,-0.04,-0.2,0.835,-0.065,-0.2,0.84,-0.085]))

IndexedLineSet1004.setCoord(Coordinate1005)

Shape1002.setGeometry(IndexedLineSet1004)

HAnimSegment1001.addChild(Shape1002)
Transform1006 = x3d.Transform()
Transform1006.setTranslation(x3d.doubleToFloat([-0.2,0.89,-0.04]))
Shape1007 = x3d.Shape()
Shape1007.setUSE("jointbox")

Transform1006.addChild(Shape1007)

HAnimSegment1001.addChild(Transform1006)
HAnimSite1008 = x3d.HAnimSite()
HAnimSite1008.setName("r_ulnar_styloid_pt")
HAnimSite1008.setDEF("Joe_r_ulnar_styloid_pt")
HAnimSite1008.setTranslation(x3d.doubleToFloat([-0.2,0.9,-0.085]))
Shape1009 = x3d.Shape()
Shape1009.setUSE("sitebox")

HAnimSite1008.addChild(Shape1009)

HAnimSegment1001.addChild(HAnimSite1008)

HAnimJoint1000.addChild(HAnimSegment1001)
HAnimJoint1010 = x3d.HAnimJoint()
HAnimJoint1010.setName("r_carpometacarpal_1")
HAnimJoint1010.setDEF("Joe_r_carpometacarpal_1")
HAnimJoint1010.setCenter(x3d.doubleToFloat([-0.2,0.85,0]))
HAnimJoint1010.setSkinCoordIndex([243,244])
HAnimJoint1010.setSkinCoordWeight(x3d.doubleToFloat([1,1]))
HAnimSegment1011 = x3d.HAnimSegment()
HAnimSegment1011.setName("r_metacarpal_1")
HAnimSegment1011.setDEF("Joe_r_metacarpal_1")
Shape1012 = x3d.Shape()
Appearance1013 = x3d.Appearance()
Appearance1013.setUSE("SegmentLine")

Shape1012.setAppearance(Appearance1013)
IndexedLineSet1014 = x3d.IndexedLineSet()
IndexedLineSet1014.setCoordIndex([0,1,-1])
Coordinate1015 = x3d.Coordinate()
Coordinate1015.setPoint(x3d.doubleToFloat([-0.2,0.85,0,-0.2,0.82,0.03]))

IndexedLineSet1014.setCoord(Coordinate1015)

Shape1012.setGeometry(IndexedLineSet1014)

HAnimSegment1011.addChild(Shape1012)
Transform1016 = x3d.Transform()
Transform1016.setTranslation(x3d.doubleToFloat([-0.2,0.85,0]))
Shape1017 = x3d.Shape()
Shape1017.setUSE("jointbox")

Transform1016.addChild(Shape1017)

HAnimSegment1011.addChild(Transform1016)

HAnimJoint1010.addChild(HAnimSegment1011)
HAnimJoint1018 = x3d.HAnimJoint()
HAnimJoint1018.setName("r_metacarpophalangeal_1")
HAnimJoint1018.setDEF("Joe_r_metacarpophalangeal_1")
HAnimJoint1018.setCenter(x3d.doubleToFloat([-0.2,0.82,0.03]))
HAnimJoint1018.setSkinCoordIndex([254,255,256,257,258,259])
HAnimJoint1018.setSkinCoordWeight(x3d.doubleToFloat([0.5,0.5,0.5,1,1,1]))
HAnimSegment1019 = x3d.HAnimSegment()
HAnimSegment1019.setName("r_carpal_proximal_phalanx_1")
HAnimSegment1019.setDEF("Joe_r_carpal_proximal_phalanx_1")
Shape1020 = x3d.Shape()
Appearance1021 = x3d.Appearance()
Appearance1021.setUSE("SegmentLine")

Shape1020.setAppearance(Appearance1021)
IndexedLineSet1022 = x3d.IndexedLineSet()
IndexedLineSet1022.setCoordIndex([0,1,-1])
Coordinate1023 = x3d.Coordinate()
Coordinate1023.setPoint(x3d.doubleToFloat([-0.2,0.82,0.03,-0.2,0.8,0.05]))

IndexedLineSet1022.setCoord(Coordinate1023)

Shape1020.setGeometry(IndexedLineSet1022)

HAnimSegment1019.addChild(Shape1020)
Transform1024 = x3d.Transform()
Transform1024.setTranslation(x3d.doubleToFloat([-0.2,0.82,0.03]))
Shape1025 = x3d.Shape()
Shape1025.setUSE("jointbox")

Transform1024.addChild(Shape1025)

HAnimSegment1019.addChild(Transform1024)

HAnimJoint1018.addChild(HAnimSegment1019)
HAnimJoint1026 = x3d.HAnimJoint()
HAnimJoint1026.setName("r_carpal_interphalangeal_1")
HAnimJoint1026.setDEF("Joe_r_carpal_interphalangeal_1")
HAnimJoint1026.setCenter(x3d.doubleToFloat([-0.2,0.8,0.05]))
HAnimJoint1026.setSkinCoordIndex([260,261,262,263,264,265,266,267,268])
HAnimJoint1026.setSkinCoordWeight(x3d.doubleToFloat([1,1,1,1,1,1,1,1,1]))
HAnimSegment1027 = x3d.HAnimSegment()
HAnimSegment1027.setName("r_carpal_distal_phalanx_1")
HAnimSegment1027.setDEF("Joe_r_carpal_distal_phalanx_1")
Shape1028 = x3d.Shape()
Appearance1029 = x3d.Appearance()
Appearance1029.setUSE("SegmentLine")

Shape1028.setAppearance(Appearance1029)
IndexedLineSet1030 = x3d.IndexedLineSet()
IndexedLineSet1030.setCoordIndex([0,1,-1])
Coordinate1031 = x3d.Coordinate()
Coordinate1031.setPoint(x3d.doubleToFloat([-0.2,0.8,0.05,-0.2,0.78,0.07]))

IndexedLineSet1030.setCoord(Coordinate1031)

Shape1028.setGeometry(IndexedLineSet1030)

HAnimSegment1027.addChild(Shape1028)
Transform1032 = x3d.Transform()
Transform1032.setDEF("Thumbnail")
Transform1032.setTranslation(x3d.doubleToFloat([-0.2,0.785,0.075]))
Shape1033 = x3d.Shape()
Shape1033.setUSE("skinsphere")

Transform1032.addChild(Shape1033)

HAnimSegment1027.addChild(Transform1032)
Transform1034 = x3d.Transform()
Transform1034.setTranslation(x3d.doubleToFloat([-0.2,0.8,0.05]))
Shape1035 = x3d.Shape()
Shape1035.setUSE("jointbox")

Transform1034.addChild(Shape1035)

HAnimSegment1027.addChild(Transform1034)
HAnimSite1036 = x3d.HAnimSite()
HAnimSite1036.setName("r_carpal_distal_phalanx_1_tip")
HAnimSite1036.setDEF("Joe_r_carpal_distal_phalanx_1_tip")
HAnimSite1036.setTranslation(x3d.doubleToFloat([-0.2,0.78,0.07]))
Shape1037 = x3d.Shape()
Shape1037.setUSE("sitebox")

HAnimSite1036.addChild(Shape1037)

HAnimSegment1027.addChild(HAnimSite1036)

HAnimJoint1026.addChild(HAnimSegment1027)

HAnimJoint1018.addChild(HAnimJoint1026)

HAnimJoint1010.addChild(HAnimJoint1018)

HAnimJoint1000.addChild(HAnimJoint1010)
HAnimJoint1038 = x3d.HAnimJoint()
HAnimJoint1038.setName("r_carpometacarpal_2")
HAnimJoint1038.setDEF("Joe_r_carpometacarpal_2")
HAnimJoint1038.setCenter(x3d.doubleToFloat([-0.2,0.84,-0.015]))
HAnimJoint1038.setSkinCoordIndex([245,246])
HAnimJoint1038.setSkinCoordWeight(x3d.doubleToFloat([1,1]))
HAnimSegment1039 = x3d.HAnimSegment()
HAnimSegment1039.setName("r_metacarpal_2")
HAnimSegment1039.setDEF("Joe_r_metacarpal_2")
Shape1040 = x3d.Shape()
Appearance1041 = x3d.Appearance()
Appearance1041.setUSE("SegmentLine")

Shape1040.setAppearance(Appearance1041)
IndexedLineSet1042 = x3d.IndexedLineSet()
IndexedLineSet1042.setCoordIndex([0,1,-1])
Coordinate1043 = x3d.Coordinate()
Coordinate1043.setPoint(x3d.doubleToFloat([-0.2,0.84,-0.015,-0.2,0.793,-0.015]))

IndexedLineSet1042.setCoord(Coordinate1043)

Shape1040.setGeometry(IndexedLineSet1042)

HAnimSegment1039.addChild(Shape1040)
Transform1044 = x3d.Transform()
Transform1044.setTranslation(x3d.doubleToFloat([-0.2,0.84,-0.015]))
Shape1045 = x3d.Shape()
Shape1045.setUSE("jointbox")

Transform1044.addChild(Shape1045)

HAnimSegment1039.addChild(Transform1044)
HAnimSite1046 = x3d.HAnimSite()
HAnimSite1046.setName("r_metacarpal_phalanx_2_pt")
HAnimSite1046.setDEF("Joe_r_metacarpal_phalanx_2_pt")
HAnimSite1046.setTranslation(x3d.doubleToFloat([-0.2,0.793,-0.005]))
Shape1047 = x3d.Shape()
Shape1047.setUSE("sitebox")

HAnimSite1046.addChild(Shape1047)

HAnimSegment1039.addChild(HAnimSite1046)

HAnimJoint1038.addChild(HAnimSegment1039)
HAnimJoint1048 = x3d.HAnimJoint()
HAnimJoint1048.setName("r_metacarpophalangeal_2")
HAnimJoint1048.setDEF("Joe_r_metacarpophalangeal_2")
HAnimJoint1048.setCenter(x3d.doubleToFloat([-0.2,0.793,-0.015]))
HAnimJoint1048.setSkinCoordIndex([254,255,256,269,270,271,279])
HAnimJoint1048.setSkinCoordWeight(x3d.doubleToFloat([0.5,0.5,0.5,1,1,1,0.5]))
HAnimSegment1049 = x3d.HAnimSegment()
HAnimSegment1049.setName("r_carpal_proximal_phalanx_2")
HAnimSegment1049.setDEF("Joe_r_carpal_proximal_phalanx_2")
Shape1050 = x3d.Shape()
Appearance1051 = x3d.Appearance()
Appearance1051.setUSE("SegmentLine")

Shape1050.setAppearance(Appearance1051)
IndexedLineSet1052 = x3d.IndexedLineSet()
IndexedLineSet1052.setCoordIndex([0,1,-1])
Coordinate1053 = x3d.Coordinate()
Coordinate1053.setPoint(x3d.doubleToFloat([-0.2,0.793,-0.015,-0.2,0.745,-0.015]))

IndexedLineSet1052.setCoord(Coordinate1053)

Shape1050.setGeometry(IndexedLineSet1052)

HAnimSegment1049.addChild(Shape1050)
Transform1054 = x3d.Transform()
Transform1054.setTranslation(x3d.doubleToFloat([-0.2,0.793,-0.015]))
Shape1055 = x3d.Shape()
Shape1055.setUSE("jointbox")

Transform1054.addChild(Shape1055)

HAnimSegment1049.addChild(Transform1054)

HAnimJoint1048.addChild(HAnimSegment1049)
HAnimJoint1056 = x3d.HAnimJoint()
HAnimJoint1056.setName("r_carpal_proximal_interphalangeal_2")
HAnimJoint1056.setDEF("Joe_r_carpal_proximal_interphalangeal_2")
HAnimJoint1056.setCenter(x3d.doubleToFloat([-0.2,0.745,-0.015]))
HAnimJoint1056.setSkinCoordIndex([282,283,284,285])
HAnimJoint1056.setSkinCoordWeight(x3d.doubleToFloat([1,1,1,1]))
HAnimSegment1057 = x3d.HAnimSegment()
HAnimSegment1057.setName("r_carpal_middle_phalanx_2")
HAnimSegment1057.setDEF("Joe_r_carpal_middle_phalanx_2")
Shape1058 = x3d.Shape()
Appearance1059 = x3d.Appearance()
Appearance1059.setUSE("SegmentLine")

Shape1058.setAppearance(Appearance1059)
IndexedLineSet1060 = x3d.IndexedLineSet()
IndexedLineSet1060.setCoordIndex([0,1,-1])
Coordinate1061 = x3d.Coordinate()
Coordinate1061.setPoint(x3d.doubleToFloat([-0.2,0.745,-0.015,-0.2,0.72,-0.015]))

IndexedLineSet1060.setCoord(Coordinate1061)

Shape1058.setGeometry(IndexedLineSet1060)

HAnimSegment1057.addChild(Shape1058)
Transform1062 = x3d.Transform()
Transform1062.setTranslation(x3d.doubleToFloat([-0.2,0.745,-0.015]))
Shape1063 = x3d.Shape()
Shape1063.setUSE("jointbox")

Transform1062.addChild(Shape1063)

HAnimSegment1057.addChild(Transform1062)

HAnimJoint1056.addChild(HAnimSegment1057)
HAnimJoint1064 = x3d.HAnimJoint()
HAnimJoint1064.setName("r_carpal_distal_interphalangeal_2")
HAnimJoint1064.setDEF("Joe_r_carpal_distal_interphalangeal_2")
HAnimJoint1064.setCenter(x3d.doubleToFloat([-0.2,0.72,-0.015]))
HAnimJoint1064.setSkinCoordIndex([286,287,288,289,290,291,292,293,294])
HAnimJoint1064.setSkinCoordWeight(x3d.doubleToFloat([1,1,1,1,1,1,1,1,1]))
HAnimSegment1065 = x3d.HAnimSegment()
HAnimSegment1065.setName("r_carpal_distal_phalanx_2")
HAnimSegment1065.setDEF("Joe_r_carpal_distal_phalanx_2")
Shape1066 = x3d.Shape()
Appearance1067 = x3d.Appearance()
Appearance1067.setUSE("SegmentLine")

Shape1066.setAppearance(Appearance1067)
IndexedLineSet1068 = x3d.IndexedLineSet()
IndexedLineSet1068.setCoordIndex([0,1,-1])
Coordinate1069 = x3d.Coordinate()
Coordinate1069.setPoint(x3d.doubleToFloat([-0.2,0.72,-0.015,-0.2,0.695,-0.015]))

IndexedLineSet1068.setCoord(Coordinate1069)

Shape1066.setGeometry(IndexedLineSet1068)

HAnimSegment1065.addChild(Shape1066)
Transform1070 = x3d.Transform()
Transform1070.setTranslation(x3d.doubleToFloat([-0.2,0.72,-0.015]))
Shape1071 = x3d.Shape()
Shape1071.setUSE("jointbox")

Transform1070.addChild(Shape1071)

HAnimSegment1065.addChild(Transform1070)
HAnimSite1072 = x3d.HAnimSite()
HAnimSite1072.setName("r_carpal_distal_phalanx_2_tip")
HAnimSite1072.setDEF("Joe_r_carpal_distal_phalanx_2_tip")
HAnimSite1072.setTranslation(x3d.doubleToFloat([-0.2,0.695,-0.015]))
Shape1073 = x3d.Shape()
Shape1073.setUSE("sitebox")

HAnimSite1072.addChild(Shape1073)

HAnimSegment1065.addChild(HAnimSite1072)

HAnimJoint1064.addChild(HAnimSegment1065)

HAnimJoint1056.addChild(HAnimJoint1064)

HAnimJoint1048.addChild(HAnimJoint1056)

HAnimJoint1038.addChild(HAnimJoint1048)

HAnimJoint1000.addChild(HAnimJoint1038)
HAnimJoint1074 = x3d.HAnimJoint()
HAnimJoint1074.setName("r_carpometacarpal_3")
HAnimJoint1074.setDEF("Joe_r_carpometacarpal_3")
HAnimJoint1074.setCenter(x3d.doubleToFloat([-0.2,0.835,-0.04]))
HAnimJoint1074.setSkinCoordIndex([247,248])
HAnimJoint1074.setSkinCoordWeight(x3d.doubleToFloat([1,1]))
HAnimSegment1075 = x3d.HAnimSegment()
HAnimSegment1075.setName("r_metacarpal_3")
HAnimSegment1075.setDEF("Joe_r_metacarpal_3")
Shape1076 = x3d.Shape()
Appearance1077 = x3d.Appearance()
Appearance1077.setUSE("SegmentLine")

Shape1076.setAppearance(Appearance1077)
IndexedLineSet1078 = x3d.IndexedLineSet()
IndexedLineSet1078.setCoordIndex([0,1,-1])
Coordinate1079 = x3d.Coordinate()
Coordinate1079.setPoint(x3d.doubleToFloat([-0.2,0.835,-0.04,-0.2,0.788,-0.04]))

IndexedLineSet1078.setCoord(Coordinate1079)

Shape1076.setGeometry(IndexedLineSet1078)

HAnimSegment1075.addChild(Shape1076)
Transform1080 = x3d.Transform()
Transform1080.setTranslation(x3d.doubleToFloat([-0.2,0.835,-0.04]))
Shape1081 = x3d.Shape()
Shape1081.setUSE("jointbox")

Transform1080.addChild(Shape1081)

HAnimSegment1075.addChild(Transform1080)

HAnimJoint1074.addChild(HAnimSegment1075)
HAnimJoint1082 = x3d.HAnimJoint()
HAnimJoint1082.setName("r_metacarpophalangeal_3")
HAnimJoint1082.setDEF("Joe_r_metacarpophalangeal_3")
HAnimJoint1082.setCenter(x3d.doubleToFloat([-0.2,0.788,-0.04]))
HAnimJoint1082.setSkinCoordIndex([272,273,279,280])
HAnimJoint1082.setSkinCoordWeight(x3d.doubleToFloat([1,1,0.5,0.5]))
HAnimSegment1083 = x3d.HAnimSegment()
HAnimSegment1083.setName("r_carpal_proximal_phalanx_3")
HAnimSegment1083.setDEF("Joe_r_carpal_proximal_phalanx_3")
Shape1084 = x3d.Shape()
Appearance1085 = x3d.Appearance()
Appearance1085.setUSE("SegmentLine")

Shape1084.setAppearance(Appearance1085)
IndexedLineSet1086 = x3d.IndexedLineSet()
IndexedLineSet1086.setCoordIndex([0,1,-1])
Coordinate1087 = x3d.Coordinate()
Coordinate1087.setPoint(x3d.doubleToFloat([-0.2,0.788,-0.04,-0.2,0.74,-0.04]))

IndexedLineSet1086.setCoord(Coordinate1087)

Shape1084.setGeometry(IndexedLineSet1086)

HAnimSegment1083.addChild(Shape1084)
Transform1088 = x3d.Transform()
Transform1088.setTranslation(x3d.doubleToFloat([-0.2,0.788,-0.04]))
Shape1089 = x3d.Shape()
Shape1089.setUSE("jointbox")

Transform1088.addChild(Shape1089)

HAnimSegment1083.addChild(Transform1088)

HAnimJoint1082.addChild(HAnimSegment1083)
HAnimJoint1090 = x3d.HAnimJoint()
HAnimJoint1090.setName("r_carpal_proximal_interphalangeal_3")
HAnimJoint1090.setDEF("Joe_r_carpal_proximal_interphalangeal_3")
HAnimJoint1090.setCenter(x3d.doubleToFloat([-0.2,0.74,-0.04]))
HAnimJoint1090.setSkinCoordIndex([295,296,297,298])
HAnimJoint1090.setSkinCoordWeight(x3d.doubleToFloat([1,1,1,1]))
HAnimSegment1091 = x3d.HAnimSegment()
HAnimSegment1091.setName("r_carpal_middle_phalanx_3")
HAnimSegment1091.setDEF("Joe_r_carpal_middle_phalanx_3")
Shape1092 = x3d.Shape()
Appearance1093 = x3d.Appearance()
Appearance1093.setUSE("SegmentLine")

Shape1092.setAppearance(Appearance1093)
IndexedLineSet1094 = x3d.IndexedLineSet()
IndexedLineSet1094.setCoordIndex([0,1,-1])
Coordinate1095 = x3d.Coordinate()
Coordinate1095.setPoint(x3d.doubleToFloat([-0.2,0.74,-0.04,-0.2,0.7142,-0.04]))

IndexedLineSet1094.setCoord(Coordinate1095)

Shape1092.setGeometry(IndexedLineSet1094)

HAnimSegment1091.addChild(Shape1092)
Transform1096 = x3d.Transform()
Transform1096.setTranslation(x3d.doubleToFloat([-0.2,0.74,-0.04]))
Shape1097 = x3d.Shape()
Shape1097.setUSE("jointbox")

Transform1096.addChild(Shape1097)

HAnimSegment1091.addChild(Transform1096)

HAnimJoint1090.addChild(HAnimSegment1091)
HAnimJoint1098 = x3d.HAnimJoint()
HAnimJoint1098.setName("r_carpal_distal_interphalangeal_3")
HAnimJoint1098.setDEF("Joe_r_carpal_distal_interphalangeal_3")
HAnimJoint1098.setCenter(x3d.doubleToFloat([-0.2,0.7142,-0.04]))
HAnimJoint1098.setSkinCoordIndex([299,300,301,302,303,304,305,306,307])
HAnimJoint1098.setSkinCoordWeight(x3d.doubleToFloat([1,1,1,1,1,1,1,1,1]))
HAnimSegment1099 = x3d.HAnimSegment()
HAnimSegment1099.setName("r_carpal_distal_phalanx_3")
HAnimSegment1099.setDEF("Joe_r_carpal_distal_phalanx_3")
Shape1100 = x3d.Shape()
Appearance1101 = x3d.Appearance()
Appearance1101.setUSE("SegmentLine")

Shape1100.setAppearance(Appearance1101)
IndexedLineSet1102 = x3d.IndexedLineSet()
IndexedLineSet1102.setCoordIndex([0,1,-1])
Coordinate1103 = x3d.Coordinate()
Coordinate1103.setPoint(x3d.doubleToFloat([-0.2,0.7142,-0.04,-0.2,0.6758,-0.04]))

IndexedLineSet1102.setCoord(Coordinate1103)

Shape1100.setGeometry(IndexedLineSet1102)

HAnimSegment1099.addChild(Shape1100)
Transform1104 = x3d.Transform()
Transform1104.setTranslation(x3d.doubleToFloat([-0.2,0.7142,-0.04]))
Shape1105 = x3d.Shape()
Shape1105.setUSE("jointbox")

Transform1104.addChild(Shape1105)

HAnimSegment1099.addChild(Transform1104)
HAnimSite1106 = x3d.HAnimSite()
HAnimSite1106.setName("r_dactylion_pt")
HAnimSite1106.setDEF("Joe_r_dactylion_pt")
HAnimSite1106.setTranslation(x3d.doubleToFloat([-0.2,0.68,-0.04]))
Shape1107 = x3d.Shape()
Shape1107.setUSE("sitebox")

HAnimSite1106.addChild(Shape1107)

HAnimSegment1099.addChild(HAnimSite1106)
HAnimSite1108 = x3d.HAnimSite()
HAnimSite1108.setName("r_carpal_distal_phalanx_3_tip")
HAnimSite1108.setDEF("Joe_r_carpal_distal_phalanx_3_tip")
HAnimSite1108.setTranslation(x3d.doubleToFloat([-0.2,0.68,-0.04]))
Shape1109 = x3d.Shape()
Shape1109.setUSE("sitebox")

HAnimSite1108.addChild(Shape1109)

HAnimSegment1099.addChild(HAnimSite1108)

HAnimJoint1098.addChild(HAnimSegment1099)

HAnimJoint1090.addChild(HAnimJoint1098)

HAnimJoint1082.addChild(HAnimJoint1090)

HAnimJoint1074.addChild(HAnimJoint1082)

HAnimJoint1000.addChild(HAnimJoint1074)
HAnimJoint1110 = x3d.HAnimJoint()
HAnimJoint1110.setName("r_carpometacarpal_4")
HAnimJoint1110.setDEF("Joe_r_carpometacarpal_4")
HAnimJoint1110.setCenter(x3d.doubleToFloat([-0.2,0.835,-0.065]))
HAnimJoint1110.setSkinCoordIndex([249,250])
HAnimJoint1110.setSkinCoordWeight(x3d.doubleToFloat([1,1]))
HAnimSegment1111 = x3d.HAnimSegment()
HAnimSegment1111.setName("r_metacarpal_4")
HAnimSegment1111.setDEF("Joe_r_metacarpal_4")
Shape1112 = x3d.Shape()
Appearance1113 = x3d.Appearance()
Appearance1113.setUSE("SegmentLine")

Shape1112.setAppearance(Appearance1113)
IndexedLineSet1114 = x3d.IndexedLineSet()
IndexedLineSet1114.setCoordIndex([0,1,-1])
Coordinate1115 = x3d.Coordinate()
Coordinate1115.setPoint(x3d.doubleToFloat([-0.2,0.835,-0.065,-0.2,0.793,-0.065]))

IndexedLineSet1114.setCoord(Coordinate1115)

Shape1112.setGeometry(IndexedLineSet1114)

HAnimSegment1111.addChild(Shape1112)
Transform1116 = x3d.Transform()
Transform1116.setTranslation(x3d.doubleToFloat([-0.2,0.835,-0.065]))
Shape1117 = x3d.Shape()
Shape1117.setUSE("jointbox")

Transform1116.addChild(Shape1117)

HAnimSegment1111.addChild(Transform1116)

HAnimJoint1110.addChild(HAnimSegment1111)
HAnimJoint1118 = x3d.HAnimJoint()
HAnimJoint1118.setName("r_metacarpophalangeal_4")
HAnimJoint1118.setDEF("Joe_r_metacarpophalangeal_4")
HAnimJoint1118.setCenter(x3d.doubleToFloat([-0.2,0.793,-0.065]))
HAnimJoint1118.setSkinCoordIndex([274,275,280,281])
HAnimJoint1118.setSkinCoordWeight(x3d.doubleToFloat([1,1,0.5,0.5]))
HAnimSegment1119 = x3d.HAnimSegment()
HAnimSegment1119.setName("r_carpal_proximal_phalanx_4")
HAnimSegment1119.setDEF("Joe_r_carpal_proximal_phalanx_4")
Shape1120 = x3d.Shape()
Appearance1121 = x3d.Appearance()
Appearance1121.setUSE("SegmentLine")

Shape1120.setAppearance(Appearance1121)
IndexedLineSet1122 = x3d.IndexedLineSet()
IndexedLineSet1122.setCoordIndex([0,1,-1])
Coordinate1123 = x3d.Coordinate()
Coordinate1123.setPoint(x3d.doubleToFloat([-0.2,0.793,-0.065,-0.2,0.74,-0.065]))

IndexedLineSet1122.setCoord(Coordinate1123)

Shape1120.setGeometry(IndexedLineSet1122)

HAnimSegment1119.addChild(Shape1120)
Transform1124 = x3d.Transform()
Transform1124.setTranslation(x3d.doubleToFloat([-0.2,0.793,-0.065]))
Shape1125 = x3d.Shape()
Shape1125.setUSE("jointbox")

Transform1124.addChild(Shape1125)

HAnimSegment1119.addChild(Transform1124)

HAnimJoint1118.addChild(HAnimSegment1119)
HAnimJoint1126 = x3d.HAnimJoint()
HAnimJoint1126.setName("r_carpal_proximal_interphalangeal_4")
HAnimJoint1126.setDEF("Joe_r_carpal_proximal_interphalangeal_4")
HAnimJoint1126.setCenter(x3d.doubleToFloat([-0.2,0.74,-0.065]))
HAnimJoint1126.setSkinCoordIndex([308,309,310,311])
HAnimJoint1126.setSkinCoordWeight(x3d.doubleToFloat([1,1,1,1]))
HAnimSegment1127 = x3d.HAnimSegment()
HAnimSegment1127.setName("r_carpal_middle_phalanx_4")
HAnimSegment1127.setDEF("Joe_r_carpal_middle_phalanx_4")
Shape1128 = x3d.Shape()
Appearance1129 = x3d.Appearance()
Appearance1129.setUSE("SegmentLine")

Shape1128.setAppearance(Appearance1129)
IndexedLineSet1130 = x3d.IndexedLineSet()
IndexedLineSet1130.setCoordIndex([0,1,-1])
Coordinate1131 = x3d.Coordinate()
Coordinate1131.setPoint(x3d.doubleToFloat([-0.2,0.74,-0.065,-0.2,0.7177,-0.065]))

IndexedLineSet1130.setCoord(Coordinate1131)

Shape1128.setGeometry(IndexedLineSet1130)

HAnimSegment1127.addChild(Shape1128)
Transform1132 = x3d.Transform()
Transform1132.setTranslation(x3d.doubleToFloat([-0.2,0.74,-0.065]))
Shape1133 = x3d.Shape()
Shape1133.setUSE("jointbox")

Transform1132.addChild(Shape1133)

HAnimSegment1127.addChild(Transform1132)

HAnimJoint1126.addChild(HAnimSegment1127)
HAnimJoint1134 = x3d.HAnimJoint()
HAnimJoint1134.setName("r_carpal_distal_interphalangeal_4")
HAnimJoint1134.setDEF("Joe_r_carpal_distal_interphalangeal_4")
HAnimJoint1134.setCenter(x3d.doubleToFloat([-0.2,0.7177,-0.065]))
HAnimJoint1134.setSkinCoordIndex([312,313,314,315,316,317,318,319,320])
HAnimJoint1134.setSkinCoordWeight(x3d.doubleToFloat([1,1,1,1,1,1,1,1,1]))
HAnimSegment1135 = x3d.HAnimSegment()
HAnimSegment1135.setName("r_carpal_distal_phalanx_4")
HAnimSegment1135.setDEF("Joe_r_carpal_distal_phalanx_4")
Shape1136 = x3d.Shape()
Appearance1137 = x3d.Appearance()
Appearance1137.setUSE("SegmentLine")

Shape1136.setAppearance(Appearance1137)
IndexedLineSet1138 = x3d.IndexedLineSet()
IndexedLineSet1138.setCoordIndex([0,1,-1])
Coordinate1139 = x3d.Coordinate()
Coordinate1139.setPoint(x3d.doubleToFloat([-0.2,0.7177,-0.065,-0.2,0.695,-0.065]))

IndexedLineSet1138.setCoord(Coordinate1139)

Shape1136.setGeometry(IndexedLineSet1138)

HAnimSegment1135.addChild(Shape1136)
Transform1140 = x3d.Transform()
Transform1140.setTranslation(x3d.doubleToFloat([-0.2,0.7177,-0.065]))
Shape1141 = x3d.Shape()
Shape1141.setUSE("jointbox")

Transform1140.addChild(Shape1141)

HAnimSegment1135.addChild(Transform1140)
HAnimSite1142 = x3d.HAnimSite()
HAnimSite1142.setName("r_carpal_distal_phalanx_4_tip")
HAnimSite1142.setDEF("Joe_r_carpal_distal_phalanx_4_tip")
HAnimSite1142.setTranslation(x3d.doubleToFloat([-0.2,0.695,-0.065]))
Shape1143 = x3d.Shape()
Shape1143.setUSE("sitebox")

HAnimSite1142.addChild(Shape1143)

HAnimSegment1135.addChild(HAnimSite1142)

HAnimJoint1134.addChild(HAnimSegment1135)

HAnimJoint1126.addChild(HAnimJoint1134)

HAnimJoint1118.addChild(HAnimJoint1126)

HAnimJoint1110.addChild(HAnimJoint1118)

HAnimJoint1000.addChild(HAnimJoint1110)
HAnimJoint1144 = x3d.HAnimJoint()
HAnimJoint1144.setName("r_carpometacarpal_5")
HAnimJoint1144.setDEF("Joe_r_carpometacarpal_5")
HAnimJoint1144.setCenter(x3d.doubleToFloat([-0.2,0.84,-0.085]))
HAnimJoint1144.setSkinCoordIndex([251,252,253,281])
HAnimJoint1144.setSkinCoordWeight(x3d.doubleToFloat([1,1,1,0.5]))
HAnimSegment1145 = x3d.HAnimSegment()
HAnimSegment1145.setName("r_metacarpal_5")
HAnimSegment1145.setDEF("Joe_r_metacarpal_5")
Shape1146 = x3d.Shape()
Appearance1147 = x3d.Appearance()
Appearance1147.setUSE("SegmentLine")

Shape1146.setAppearance(Appearance1147)
IndexedLineSet1148 = x3d.IndexedLineSet()
IndexedLineSet1148.setCoordIndex([0,1,-1])
Coordinate1149 = x3d.Coordinate()
Coordinate1149.setPoint(x3d.doubleToFloat([-0.2,0.84,-0.085,-0.2,0.79,-0.085]))

IndexedLineSet1148.setCoord(Coordinate1149)

Shape1146.setGeometry(IndexedLineSet1148)

HAnimSegment1145.addChild(Shape1146)
Transform1150 = x3d.Transform()
Transform1150.setTranslation(x3d.doubleToFloat([-0.2,0.84,-0.085]))
Shape1151 = x3d.Shape()
Shape1151.setUSE("jointbox")

Transform1150.addChild(Shape1151)

HAnimSegment1145.addChild(Transform1150)
HAnimSite1152 = x3d.HAnimSite()
HAnimSite1152.setName("r_metacarpal_phalanx_5_pt")
HAnimSite1152.setDEF("Joe_r_metacarpal_phalanx_5_pt")
HAnimSite1152.setTranslation(x3d.doubleToFloat([-0.2,0.79,-0.095]))
Shape1153 = x3d.Shape()
Shape1153.setUSE("sitebox")

HAnimSite1152.addChild(Shape1153)

HAnimSegment1145.addChild(HAnimSite1152)

HAnimJoint1144.addChild(HAnimSegment1145)
HAnimJoint1154 = x3d.HAnimJoint()
HAnimJoint1154.setName("r_metacarpophalangeal_5")
HAnimJoint1154.setDEF("Joe_r_metacarpophalangeal_5")
HAnimJoint1154.setCenter(x3d.doubleToFloat([-0.2,0.79,-0.085]))
HAnimJoint1154.setSkinCoordIndex([276,277,278])
HAnimJoint1154.setSkinCoordWeight(x3d.doubleToFloat([1,1,1]))
HAnimSegment1155 = x3d.HAnimSegment()
HAnimSegment1155.setName("r_carpal_proximal_phalanx_5")
HAnimSegment1155.setDEF("Joe_r_carpal_proximal_phalanx_5")
Shape1156 = x3d.Shape()
Appearance1157 = x3d.Appearance()
Appearance1157.setUSE("SegmentLine")

Shape1156.setAppearance(Appearance1157)
IndexedLineSet1158 = x3d.IndexedLineSet()
IndexedLineSet1158.setCoordIndex([0,1,-1])
Coordinate1159 = x3d.Coordinate()
Coordinate1159.setPoint(x3d.doubleToFloat([-0.2,0.79,-0.085,-0.2,0.755,-0.085]))

IndexedLineSet1158.setCoord(Coordinate1159)

Shape1156.setGeometry(IndexedLineSet1158)

HAnimSegment1155.addChild(Shape1156)
Transform1160 = x3d.Transform()
Transform1160.setTranslation(x3d.doubleToFloat([-0.2,0.79,-0.085]))
Shape1161 = x3d.Shape()
Shape1161.setUSE("jointbox")

Transform1160.addChild(Shape1161)

HAnimSegment1155.addChild(Transform1160)

HAnimJoint1154.addChild(HAnimSegment1155)
HAnimJoint1162 = x3d.HAnimJoint()
HAnimJoint1162.setName("r_carpal_proximal_interphalangeal_5")
HAnimJoint1162.setDEF("Joe_r_carpal_proximal_interphalangeal_5")
HAnimJoint1162.setCenter(x3d.doubleToFloat([-0.2,0.755,-0.085]))
HAnimJoint1162.setSkinCoordIndex([321,322,323,324])
HAnimJoint1162.setSkinCoordWeight(x3d.doubleToFloat([1,1,1,1]))
HAnimSegment1163 = x3d.HAnimSegment()
HAnimSegment1163.setName("r_carpal_middle_phalanx_5")
HAnimSegment1163.setDEF("Joe_r_carpal_middle_phalanx_5")
Shape1164 = x3d.Shape()
Appearance1165 = x3d.Appearance()
Appearance1165.setUSE("SegmentLine")

Shape1164.setAppearance(Appearance1165)
IndexedLineSet1166 = x3d.IndexedLineSet()
IndexedLineSet1166.setCoordIndex([0,1,-1])
Coordinate1167 = x3d.Coordinate()
Coordinate1167.setPoint(x3d.doubleToFloat([-0.2,0.755,-0.085,-0.2,0.735,-0.085]))

IndexedLineSet1166.setCoord(Coordinate1167)

Shape1164.setGeometry(IndexedLineSet1166)

HAnimSegment1163.addChild(Shape1164)
Transform1168 = x3d.Transform()
Transform1168.setTranslation(x3d.doubleToFloat([-0.2,0.755,-0.085]))
Shape1169 = x3d.Shape()
Shape1169.setUSE("jointbox")

Transform1168.addChild(Shape1169)

HAnimSegment1163.addChild(Transform1168)

HAnimJoint1162.addChild(HAnimSegment1163)
HAnimJoint1170 = x3d.HAnimJoint()
HAnimJoint1170.setName("r_carpal_distal_interphalangeal_5")
HAnimJoint1170.setDEF("Joe_r_carpal_distal_interphalangeal_5")
HAnimJoint1170.setCenter(x3d.doubleToFloat([-0.2,0.735,-0.09]))
HAnimJoint1170.setSkinCoordIndex([325,326,327,328,329,330,331,332,333])
HAnimJoint1170.setSkinCoordWeight(x3d.doubleToFloat([1,1,1,1,1,1,1,1,1]))
HAnimSegment1171 = x3d.HAnimSegment()
HAnimSegment1171.setName("r_carpal_distal_phalanx_5")
HAnimSegment1171.setDEF("Joe_r_carpal_distal_phalanx_5")
Shape1172 = x3d.Shape()
Appearance1173 = x3d.Appearance()
Appearance1173.setUSE("SegmentLine")

Shape1172.setAppearance(Appearance1173)
IndexedLineSet1174 = x3d.IndexedLineSet()
IndexedLineSet1174.setCoordIndex([0,1,-1])
Coordinate1175 = x3d.Coordinate()
Coordinate1175.setPoint(x3d.doubleToFloat([-0.2,0.735,-0.085,-0.2,0.72,-0.085]))

IndexedLineSet1174.setCoord(Coordinate1175)

Shape1172.setGeometry(IndexedLineSet1174)

HAnimSegment1171.addChild(Shape1172)
Transform1176 = x3d.Transform()
Transform1176.setTranslation(x3d.doubleToFloat([-0.2,0.735,-0.085]))
Shape1177 = x3d.Shape()
Shape1177.setUSE("jointbox")

Transform1176.addChild(Shape1177)

HAnimSegment1171.addChild(Transform1176)
HAnimSite1178 = x3d.HAnimSite()
HAnimSite1178.setName("r_carpal_distal_phalanx_5_tip")
HAnimSite1178.setDEF("Joe_r_carpal_distal_phalanx_5_tip")
HAnimSite1178.setTranslation(x3d.doubleToFloat([-0.2,0.72,-0.085]))
Shape1179 = x3d.Shape()
Shape1179.setUSE("sitebox")

HAnimSite1178.addChild(Shape1179)

HAnimSegment1171.addChild(HAnimSite1178)

HAnimJoint1170.addChild(HAnimSegment1171)

HAnimJoint1162.addChild(HAnimJoint1170)

HAnimJoint1154.addChild(HAnimJoint1162)

HAnimJoint1144.addChild(HAnimJoint1154)

HAnimJoint1000.addChild(HAnimJoint1144)

HAnimJoint978.addChild(HAnimJoint1000)

HAnimJoint948.addChild(HAnimJoint978)

HAnimJoint932.addChild(HAnimJoint948)

HAnimJoint922.addChild(HAnimJoint932)

HAnimJoint556.addChild(HAnimJoint922)

HAnimJoint548.addChild(HAnimJoint556)

HAnimJoint540.addChild(HAnimJoint548)

HAnimJoint530.addChild(HAnimJoint540)

HAnimJoint522.addChild(HAnimJoint530)

HAnimJoint514.addChild(HAnimJoint522)

HAnimJoint506.addChild(HAnimJoint514)

HAnimJoint498.addChild(HAnimJoint506)

HAnimJoint486.addChild(HAnimJoint498)

HAnimJoint476.addChild(HAnimJoint486)

HAnimJoint468.addChild(HAnimJoint476)

HAnimJoint460.addChild(HAnimJoint468)

HAnimJoint452.addChild(HAnimJoint460)

HAnimJoint426.addChild(HAnimJoint452)

HAnimJoint418.addChild(HAnimJoint426)

HAnimJoint410.addChild(HAnimJoint418)

HAnimJoint395.addChild(HAnimJoint410)

HAnimJoint81.addChild(HAnimJoint395)

HAnimHumanoid78.addSkeleton(HAnimJoint81)
Shape1180 = x3d.Shape()
Shape1180.setDEF("SkinShape")
Shape1180.setContainerFieldOverride("skin")
Appearance1181 = x3d.Appearance()
Appearance1181.setDEF("SkinAppearance")
Material1182 = x3d.Material()
Material1182.setDEF("SkinMaterial")
Material1182.setAmbientIntensity(0.6)
Material1182.setDiffuseColor(x3d.doubleToFloat([1,1,1]))
Material1182.setShininess(0.6)
Material1182.setTransparency(0.2)

Appearance1181.setMaterial(Material1182)
ImageTexture1183 = x3d.ImageTexture()
ImageTexture1183.setDEF("zBlueSpiralBkg2")
ImageTexture1183.setDescription("Blue Spiral Pattern")
ImageTexture1183.setUrl(["zBlueSpiralBkg2.gif","https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Skin/zBlueSpiralBkg2.gif"])

Appearance1181.setTexture(ImageTexture1183)

Shape1180.setAppearance(Appearance1181)
IndexedFaceSet1184 = x3d.IndexedFaceSet()
IndexedFaceSet1184.setCoordIndex([0,9,5,-1,0,7,9,-1,0,5,1,-1,1,5,2,-1,1,3,7,-1,2,4,3,-1,0,1,7,-1,1,2,3,-1,5,6,2,-1,7,3,8,-1,6,4,2,-1,3,4,8,-1,9,6,5,-1,9,7,8,-1,4,6,10,-1,4,10,12,-1,4,12,8,-1,10,11,12,-1,9,75,24,-1,9,24,74,-1,9,8,75,-1,9,74,6,-1,10,6,74,-1,12,75,8,-1,74,24,29,-1,24,77,29,-1,10,74,29,-1,77,32,29,-1,32,78,29,-1,78,30,29,-1,30,10,29,-1,41,24,75,-1,41,75,12,-1,41,12,42,-1,41,42,80,-1,41,80,44,-1,41,44,79,-1,41,79,24,-1,81,24,79,-1,81,77,24,-1,81,25,77,-1,81,79,25,-1,25,79,44,-1,25,32,77,-1,25,83,32,-1,25,26,83,-1,25,27,26,-1,25,84,27,-1,25,44,84,-1,11,10,30,-1,11,30,13,-1,11,13,15,-1,11,15,14,-1,11,14,42,-1,11,42,12,-1,15,13,16,-1,15,18,14,-1,15,16,76,-1,15,76,18,-1,76,16,17,-1,76,17,82,-1,76,82,19,-1,76,19,18,-1,22,18,19,-1,22,87,18,-1,22,27,84,-1,22,84,87,-1,87,84,85,-1,85,84,44,-1,85,42,14,-1,87,14,18,-1,87,85,14,-1,20,83,26,-1,20,17,16,-1,20,16,88,-1,20,88,83,-1,88,16,13,-1,88,13,86,-1,88,86,83,-1,86,13,30,-1,86,32,83,-1,23,89,22,-1,89,27,22,-1,89,91,27,-1,91,26,27,-1,91,20,26,-1,21,20,91,-1,21,17,20,-1,21,92,17,-1,82,17,92,-1,82,90,19,-1,23,22,19,-1,23,19,90,-1,82,92,101,-1,82,101,99,-1,82,99,93,-1,82,93,95,-1,82,95,97,-1,82,97,90,-1,23,90,97,-1,23,97,94,-1,23,94,89,-1,89,94,96,-1,89,96,95,-1,89,95,93,-1,89,93,91,-1,91,93,99,-1,91,99,100,-1,91,100,98,-1,21,91,98,-1,21,98,101,-1,21,101,92,-1,85,105,42,-1,85,103,105,-1,85,44,103,-1,103,44,104,-1,80,42,105,-1,80,105,102,-1,80,102,104,-1,80,104,44,-1,105,109,102,-1,102,109,47,-1,47,104,102,-1,104,47,45,-1,104,45,103,-1,103,45,46,-1,103,46,109,-1,103,109,105,-1,109,112,110,-1,109,110,47,-1,47,110,111,-1,47,111,45,-1,45,111,113,-1,113,46,45,-1,46,113,112,-1,112,109,46,-1,112,118,110,-1,110,118,115,-1,110,115,111,-1,111,115,117,-1,111,117,113,-1,113,117,116,-1,113,116,112,-1,112,116,118,-1,115,118,119,-1,119,118,122,-1,118,116,122,-1,122,116,120,-1,116,117,120,-1,120,117,121,-1,117,115,121,-1,115,119,121,-1,119,127,123,-1,119,122,127,-1,122,126,127,-1,122,128,126,-1,122,120,128,-1,120,124,128,-1,120,121,124,-1,121,125,124,-1,121,119,125,-1,119,123,125,-1,127,129,123,-1,127,126,129,-1,129,126,141,-1,141,126,143,-1,126,142,143,-1,126,128,142,-1,128,124,130,-1,142,128,130,-1,124,132,130,-1,124,134,132,-1,125,134,124,-1,125,136,134,-1,125,137,136,-1,125,135,137,-1,125,133,135,-1,125,123,133,-1,123,131,133,-1,123,129,131,-1,131,129,138,-1,129,141,138,-1,138,141,144,-1,141,143,144,-1,143,146,144,-1,142,146,143,-1,142,145,146,-1,139,145,142,-1,130,139,142,-1,139,130,132,-1,139,132,154,-1,132,157,154,-1,132,159,157,-1,132,134,159,-1,134,136,159,-1,136,161,159,-1,136,137,161,-1,137,162,161,-1,160,162,137,-1,135,160,137,-1,133,160,135,-1,133,158,160,-1,131,158,133,-1,156,158,131,-1,153,156,131,-1,131,138,153,-1,138,155,153,-1,140,155,138,-1,138,144,140,-1,144,147,140,-1,140,147,145,-1,140,145,139,-1,139,155,140,-1,154,155,139,-1,146,149,144,-1,146,151,149,-1,145,151,146,-1,150,151,145,-1,145,152,150,-1,147,152,145,-1,147,149,152,-1,147,144,149,-1,148,149,151,-1,148,152,149,-1,148,150,152,-1,148,151,150,-1,160,207,162,-1,160,205,207,-1,165,208,205,-1,160,165,205,-1,158,165,160,-1,161,162,207,-1,161,207,206,-1,165,206,208,-1,206,165,161,-1,161,165,159,-1,207,209,211,-1,205,209,207,-1,205,212,209,-1,205,208,212,-1,206,212,208,-1,206,210,212,-1,206,207,210,-1,207,211,210,-1,209,212,213,-1,212,216,213,-1,212,214,216,-1,210,214,212,-1,210,215,214,-1,210,211,215,-1,209,215,211,-1,209,213,215,-1,217,213,216,-1,217,215,213,-1,217,214,215,-1,217,216,214,-1,158,194,165,-1,192,194,158,-1,164,195,192,-1,158,164,192,-1,156,164,158,-1,159,194,165,-1,159,194,193,-1,159,193,195,-1,159,195,164,-1,159,164,157,-1,157,164,180,-1,192,198,194,-1,192,196,198,-1,192,195,196,-1,195,199,196,-1,196,199,200,-1,199,203,200,-1,193,199,195,-1,193,197,199,-1,193,198,197,-1,193,194,198,-1,199,201,203,-1,197,201,199,-1,197,198,201,-1,198,202,201,-1,196,202,198,-1,200,202,196,-1,204,202,200,-1,204,201,202,-1,204,203,201,-1,204,200,203,-1,156,181,164,-1,156,179,181,-1,156,182,179,-1,156,163,182,-1,163,180,182,-1,157,180,163,-1,164,181,180,-1,179,182,183,-1,182,186,183,-1,182,184,186,-1,180,184,182,-1,180,181,184,-1,181,185,184,-1,179,185,181,-1,183,185,179,-1,183,186,187,-1,186,190,187,-1,184,190,186,-1,184,188,190,-1,184,185,188,-1,185,189,188,-1,185,183,189,-1,183,187,189,-1,191,189,187,-1,191,188,189,-1,191,190,188,-1,191,187,190,-1,153,163,156,-1,153,168,163,-1,153,166,168,-1,153,169,166,-1,155,169,153,-1,155,167,169,-1,154,167,155,-1,154,163,167,-1,154,157,163,-1,163,168,167,-1,166,169,170,-1,169,173,170,-1,169,171,173,-1,169,167,171,-1,167,168,171,-1,168,172,171,-1,168,170,172,-1,170,168,166,-1,170,173,174,-1,173,177,174,-1,173,175,177,-1,173,171,175,-1,171,172,175,-1,172,176,175,-1,172,174,176,-1,170,174,172,-1,178,176,174,-1,178,175,176,-1,178,177,175,-1,178,174,177,-1,86,30,221,-1,86,221,219,-1,86,219,32,-1,32,219,220,-1,78,32,220,-1,78,220,218,-1,78,218,221,-1,78,221,30,-1,221,225,219,-1,219,225,35,-1,35,33,219,-1,33,220,219,-1,33,34,220,-1,220,34,218,-1,221,218,34,-1,34,225,221,-1,225,226,228,-1,225,228,35,-1,35,228,229,-1,35,229,33,-1,33,229,227,-1,33,227,34,-1,34,227,226,-1,34,226,225,-1,226,234,228,-1,228,234,232,-1,232,229,228,-1,232,233,229,-1,229,233,227,-1,227,233,231,-1,227,231,226,-1,226,231,234,-1,231,235,234,-1,235,238,234,-1,234,238,232,-1,238,236,232,-1,232,236,233,-1,236,237,233,-1,233,237,231,-1,231,237,235,-1,235,239,243,-1,235,243,238,-1,238,243,242,-1,238,242,244,-1,238,244,236,-1,236,244,240,-1,236,240,237,-1,237,240,241,-1,237,241,235,-1,235,241,239,-1,243,239,245,-1,243,245,242,-1,245,257,242,-1,257,259,242,-1,242,259,258,-1,242,258,244,-1,244,246,240,-1,258,246,244,-1,240,246,248,-1,240,248,250,-1,241,240,250,-1,241,250,252,-1,241,252,253,-1,241,253,251,-1,241,251,249,-1,241,249,239,-1,239,249,247,-1,239,247,245,-1,247,254,245,-1,245,254,257,-1,254,260,257,-1,257,260,259,-1,259,260,262,-1,258,259,262,-1,258,262,261,-1,255,258,261,-1,246,258,255,-1,255,248,246,-1,255,270,248,-1,248,270,273,-1,248,273,275,-1,248,275,250,-1,250,275,252,-1,252,275,277,-1,252,277,253,-1,253,277,278,-1,276,253,278,-1,251,253,276,-1,249,251,276,-1,249,276,274,-1,247,249,274,-1,272,247,274,-1,269,247,272,-1,247,269,254,-1,254,269,271,-1,256,254,271,-1,254,256,260,-1,260,256,263,-1,256,261,263,-1,256,255,261,-1,255,256,271,-1,270,255,271,-1,262,260,265,-1,262,265,267,-1,261,262,267,-1,266,261,267,-1,261,266,268,-1,263,261,268,-1,263,268,265,-1,263,265,260,-1,264,267,265,-1,264,265,268,-1,264,268,266,-1,264,266,267,-1,276,278,323,-1,276,323,321,-1,281,321,324,-1,276,321,281,-1,274,276,281,-1,277,323,278,-1,277,322,323,-1,281,324,322,-1,322,277,281,-1,277,275,281,-1,323,327,325,-1,321,323,325,-1,321,325,328,-1,321,328,324,-1,322,324,328,-1,322,328,326,-1,322,326,323,-1,323,326,327,-1,325,329,328,-1,328,329,332,-1,328,332,330,-1,326,328,330,-1,326,330,331,-1,326,331,327,-1,325,327,331,-1,325,331,329,-1,333,332,329,-1,333,329,331,-1,333,331,330,-1,333,330,332,-1,274,281,310,-1,308,274,310,-1,280,308,311,-1,274,308,280,-1,272,274,280,-1,275,310,281,-1,275,309,310,-1,275,311,309,-1,275,280,311,-1,275,273,280,-1,273,296,280,-1,308,310,314,-1,308,314,312,-1,308,312,311,-1,311,312,315,-1,312,316,315,-1,315,316,319,-1,309,311,315,-1,309,315,313,-1,309,313,314,-1,309,314,310,-1,315,319,317,-1,313,315,317,-1,313,317,314,-1,314,317,318,-1,312,314,318,-1,316,312,318,-1,320,316,318,-1,320,318,317,-1,320,317,319,-1,320,319,316,-1,272,280,297,-1,272,297,295,-1,272,295,298,-1,272,298,279,-1,279,298,296,-1,273,279,296,-1,280,296,297,-1,295,299,298,-1,298,299,302,-1,298,302,300,-1,296,298,300,-1,296,300,297,-1,297,300,301,-1,295,297,301,-1,299,295,301,-1,299,303,302,-1,302,303,306,-1,300,302,306,-1,300,306,304,-1,300,304,301,-1,301,304,305,-1,301,305,299,-1,299,305,303,-1,307,303,305,-1,307,305,304,-1,307,304,306,-1,307,306,303,-1,269,272,279,-1,269,279,284,-1,269,284,282,-1,269,282,285,-1,271,269,285,-1,271,285,283,-1,270,271,283,-1,270,283,279,-1,270,279,273,-1,279,283,284,-1,282,286,285,-1,285,286,289,-1,285,289,287,-1,285,287,283,-1,283,287,284,-1,284,287,288,-1,284,288,286,-1,286,282,284,-1,286,290,289,-1,289,290,293,-1,289,293,291,-1,289,291,287,-1,287,291,288,-1,288,291,292,-1,288,292,290,-1,286,288,290,-1,294,290,292,-1,294,292,291,-1,294,291,293,-1,294,293,290,-1,97,334,336,-1,97,336,94,-1,94,336,96,-1,336,335,96,-1,96,335,95,-1,95,335,337,-1,95,337,334,-1,95,334,97,-1,334,341,336,-1,336,341,338,-1,336,338,335,-1,335,338,340,-1,335,340,337,-1,337,340,339,-1,337,339,334,-1,334,339,341,-1,341,345,342,-1,341,342,338,-1,338,342,340,-1,340,342,344,-1,340,344,339,-1,339,344,343,-1,339,343,345,-1,339,345,341,-1,345,349,342,-1,342,349,351,-1,342,351,346,-1,342,346,344,-1,71,346,348,-1,71,344,346,-1,71,348,347,-1,71,347,344,-1,344,347,343,-1,343,347,352,-1,343,352,349,-1,343,349,345,-1,349,352,356,-1,349,356,353,-1,349,353,355,-1,349,355,351,-1,354,356,352,-1,354,352,350,-1,354,350,351,-1,354,351,355,-1,353,356,357,-1,353,357,358,-1,353,358,359,-1,353,359,360,-1,353,360,361,-1,353,361,355,-1,354,357,356,-1,350,346,351,-1,348,346,347,-1,350,347,346,-1,350,352,347,-1,354,358,357,-1,354,359,358,-1,354,360,359,-1,354,361,360,-1,354,355,361,-1,101,362,365,-1,101,365,99,-1,99,365,100,-1,100,365,363,-1,100,363,98,-1,98,363,364,-1,98,364,101,-1,101,364,362,-1,362,369,367,-1,362,367,365,-1,365,367,363,-1,363,367,368,-1,363,367,368,-1,363,368,366,-1,363,366,364,-1,364,366,362,-1,362,366,369,-1,369,373,371,-1,369,371,367,-1,367,371,368,-1,368,371,372,-1,368,372,366,-1,366,372,370,-1,366,370,369,-1,369,370,373,-1,373,377,380,-1,373,380,375,-1,373,375,371,-1,371,375,372,-1,372,375,376,-1,372,376,374,-1,372,374,370,-1,370,374,379,-1,373,370,379,-1,373,379,377,-1,377,379,383,-1,377,383,381,-1,377,381,384,-1,377,384,380,-1,381,383,389,-1,381,389,388,-1,381,388,387,-1,381,387,386,-1,381,386,385,-1,381,385,384,-1,376,375,374,-1,378,379,374,-1,378,374,375,-1,378,375,380,-1,382,386,387,-1,382,387,388,-1,382,388,389,-1,382,389,383,-1,382,383,379,-1,382,379,378,-1,382,378,380,-1,382,380,384,-1,382,384,385,-1,382,385,386,-1])
IndexedFaceSet1184.setCreaseAngle(3.1)
Color1185 = x3d.Color()
Color1185.setColor(x3d.doubleToFloat([1,0,0,0,1,1,0,1,0,1,1,0,1,1,0,1,0,0,0,1,0,0,0,1,0,1,1,0,1,1,1,1,0,1,1,0,1,1,0,1,1,0,0,1,0,0,0,1,0,1,0,1,0,0,0,1,0,1,0,1,1,0,0,1,0,0,1,1,0,1,1,0,1,1,1,1,0,0,0,1,0,0,1,0,1,1,0,0,1,0,1,1,0,1,1,1,0,1,0,1,1,0,0,1,0,1,1,0,0,1,0,1,0,0,0,1,0,1,1,0,0,1,0,1,1,0,0,0,1,0,0,1,0,1,0,1,1,0,0,0,1,1,1,0,0,1,0,0,0,1,1,1,0,0,1,0,1,1,0,0,1,0,0,0,1,1,1,0,0,1,0,0,1,0,1,1,0,0,0,1,0,1,0,1,1,0,0,0,1,0,1,0,1,1,0,0,0,1,0,1,0,1,1,0,0,0,1,0,0,1,0,0,1,0,1,0,0,0,1,0,1,0,1,1,0,0,0,1,0,1,0,1,1,0,0,0,1,0,0,1,0,1,0,1,1,0,0,1,0,1,1,0,1,1,0,0,1,0,1,1,0,0,0,1,1,1,0,0,0,1,0,0,1,0,0,1,1,1,0,0,1,0,0,0,1,1,1,0,1,1,0,0,0,1,0,1,0,0,0,1,1,1,0,0,1,0,1,1,0,0,1,0,1,1,0,0,0,1,1,1,0,0,1,0,1,1,0,0,1,0,1,1,0,0,0,1,0,1,0,1,1,0,0,1,0,1,1,0,1,1,0,0,1,0,1,1,0,1,0,1,1,1,0,0,1,0,0,1,0,1,1,0,0,0,1,1,1,0,0,1,0,0,0,1,0,1,0,1,1,0,0,0,1,0,1,0,1,1,0,0,1,0,1,1,0,0,0,1,1,0,1,1,0,1,1,0,1,1,0,1,0,1,0,1,0,0,0,1,0,1,0,0,0,1,0,1,0,0,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,1,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,1,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,1,0,0,1,0,1,0,1,0,0,0,0,1,1,0,0,0,1,0,0,0,1,0,1,1,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,1,1,0,1,0,0,0,0,1,0,1,1,1,0,0,1,0,1,0,1,0,1,0,0,1,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,1,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,0,1,0,0,0,1,0,1,0,1,1,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,1,1,0,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,1,0,1,0,1,0,1,0,0,0,1,0,1,0,1,0,1,0,1,0,0,0,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,1,1,0,0,1,0,1,1,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,0,1,0,1,1,0,0,1,0,1,1,0,1,0,1,1,1,0,0,1,0,1,1,0,0,0,1,0,1,0,1,1,0,0,0,1,1,1,0,0,1,0,1,1,0,0,1,0,0,1,0,0,0,1,1,1,0,0,1,0,1,1,0,0,1,0,0,0,1,1,1,0,1,0,1,1,0,1,1,0,1,1,0,1,0,1,0,1,0,0,0,1,0,1,0,0,0,1,0,1,0,0,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,1,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,1,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,1,0,0,1,0,1,0,1,0,0,0,0,1,1,0,0,0,1,0,0,0,1,0,1,1,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,1,1,0,1,0,0,0,0,1,0,1,1,1,0,0,1,0,1,0,1,0,1,0,0,1,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,1,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,0,1,0,0,0,1,0,1,0,1,1,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,1,1,0,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,1,0,1,0,1,0,1,0,0,0,1,0,1,0,1,0,1,0,1,0,0,0,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,1,1,0,0,1,0,1,1,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,1,0,1,0,1,1,1,0,0,0,1,0,1,0,0,0,1,1,1,0,0,1,0,1,1,0,0,1,0,1,1,0,0,1,0,1,1,0,0,1,0,0,1,0,1,1,0,1,0,1,0,1,0,1,1,0,0,1,0,1,1,0,0,0,1,1,1,0,0,1,0,1,1,0,0,0,1,0,1,0,1,1,0,0,0,1,1,1,0,0,1,0,0,0,1,1,0,1,0,1,0,1,1,0,0,1,0,1,1,0,0,0,1,0,1,0,1,1,0,0,1,0,1,1,0,1,0,1,0,1,0,0,1,0,1,1,0,0,1,0,1,1,0,0,1,0,1,1,0,1,1,0,0,1,0,1,1,0,0,1,0,1,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,1,1,0,0,0,1,0,1,0,0,0,1,1,1,0,0,1,0,1,1,0,0,1,0,1,1,0,0,1,0,1,1,0,0,1,0,0,1,0,1,1,0,1,0,1,0,1,0,1,1,0,0,1,0,1,1,0,0,0,1,1,1,0,0,1,0,1,1,0,0,0,1,0,1,0,1,1,0,0,0,1,1,1,0,0,1,0,0,0,1,1,0,1,0,1,0,1,1,0,0,1,0,1,1,0,0,0,1,0,1,0,1,1,0,0,1,0,1,1,0,1,0,1,0,1,0,0,1,0,1,1,0,0,1,0,1,1,0,0,1,0,1,1,0,1,1,0,0,1,0,1,1,0,0,1,0,1,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,1,1,1]))

IndexedFaceSet1184.setColor(Color1185)
Coordinate1186 = x3d.Coordinate()
Coordinate1186.setDEF("TheSkinCoord")
Coordinate1186.setPoint(x3d.doubleToFloat([0,1.77,0,0,1.665,0.09,-0.033,1.62,0.087,0.033,1.62,0.087,0,1.55,0.097,-0.077,1.64,-0.01,-0.0527,1.58,0.015,0.077,1.64,-0.01,0.0527,1.58,0.015,0,1.625,-0.0925,-0.03,1.46,0.035,0,1.44,0.03,0.03,1.46,0.035,-0.1135,1.318,0.095,0.1135,1.318,0.095,0,1.25,0.113,-0.087,1.19,0.09,-0.0935,1.03,0.075,0.087,1.19,0.09,0.0935,1.03,0.075,-0.1425,1.065,0.0033,-0.15,0.9,-0.01,0.1425,1.065,0.0033,0.15,0.9,-0.01,0,1.53,-0.084,0.0049,1.1908,-0.1113,-0.0773,1.019,-0.12,0.0773,1.019,-0.12,0.005,1.0915,-0.1091,-0.178,1.4825,-0.0625,-0.17,1.38,0.007,-0.1884,0.8676,-0.036,-0.16,1.38,-0.127,-0.2,1.1388,-0.08,-0.244,1.1388,-0.04,-0.165,1.1388,-0.04,-0.23,1.133,-0.055,-0.1977,0.8169,-0.0177,-0.1941,0.6772,-0.0423,-0.2117,0.8562,-0.0584,-0.1929,0.789,-0.1064,0.175,1.4825,-0.06,0.17,1.38,0.007,0.1901,0.8645,-0.0415,0.16,1.38,-0.125,0.2,1.1388,-0.08,0.165,1.1388,-0.04,0.244,1.1388,-0.04,0.23,1.133,-0.055,0.2009,0.8139,-0.0237,0.2056,0.6743,-0.0482,0.2142,0.8529,-0.0648,0.1929,0.786,-0.1122,-0.1,0.4913,-0.03,-0.17,0.466,0,-0.05,0.466,0,-0.165,0.01,0.12,-0.15,0.07,0,-0.085,0.086,0.0125,-0.09,0.056,0.0125,-0.115,0.02,0.122,-0.115,0.04,-0.055,-0.11,0.011,0.19,0.0993,0.4881,-0.0309,0.17,0.466,0,0.05,0.4867,0,0.165,0.01,0.12,0.15,0.07,0,0.085,0.086,0.0125,0.09,0.056,0.0125,0.115,0.02,0.122,0.115,0.04,-0.055,0.11,0.011,0.19,0,0.875,0,-0.0646,1.5149,-0.038,0.0646,1.5149,-0.038,0,1.0723,0.09,-0.11,1.427,-0.1375,-0.235,1.42,-0.0625,0.11,1.427,-0.1375,0.235,1.42,-0.0625,0,1.41,-0.145,0,0.925,0.08,-0.087,1.19,-0.09,0.087,1.19,-0.09,0.172,1.32,-0.03,-0.172,1.32,-0.03,0.15,1.23,-0.015,-0.15,1.23,-0.015,0.079,0.92,-0.14,0.1,0.9,0.077,-0.079,0.92,-0.14,-0.1,0.9,0.075,0,0.87,0,0.171,0.65,0,0.02,0.65,0,0.1,0.65,-0.08,0.1,0.65,0.07,-0.171,0.65,0,-0.02,0.65,0,-0.1,0.65,-0.08,-0.1,0.65,0.07,0.25,1.27,-0.04,0.17,1.27,-0.04,0.2,1.27,-0.09,0.2,1.27,0.02,0.244,1.1388,-0.04,0.165,1.1388,-0.04,0.2,1.1388,-0.08,0.2,1.1388,-0.013,0.225,1,-0.01,0.225,1,-0.07,0.185,1,-0.01,0.185,1,-0.07,0.2,1.1388,-0.04,0.225,0.92,-0.04,0.175,0.92,-0.04,0.2,0.92,-0.065,0.2,0.92,-0.015,0.225,0.89,-0.04,0.175,0.89,-0.04,0.2,0.89,-0.065,0.2,0.89,-0.015,0.218,0.86,-0.04,0.184,0.86,-0.04,0.2,0.87,-0.07,0.2,0.87,0,0.21,0.85,0,0.1854,0.85,0,0.212,0.84,-0.015,0.183,0.84,-0.015,0.213,0.835,-0.04,0.19,0.835,-0.04,0.211,0.835,-0.065,0.192,0.835,-0.065,0.208,0.84,-0.085,0.19,0.84,-0.085,0.2,0.84,-0.095,0.215,0.82,0,0.193,0.815,0.005,0.198,0.8,0.012,0.21,0.82,0.03,0.19,0.82,0.03,0.2,0.835,0.039,0.212,0.8,0.05,0.188,0.8,0.05,0.2,0.807,0.057,0.2,0.793,0.035,0.2,0.774,0.076,0.212,0.78,0.07,0.188,0.78,0.07,0.2,0.785,0.075,0.2,0.77,0.062,0.215,0.793,-0.015,0.187,0.793,-0.015,0.2,0.793,-0.005,0.215,0.788,-0.04,0.187,0.788,-0.04,0.215,0.793,-0.065,0.187,0.793,-0.065,0.21,0.79,-0.085,0.19,0.79,-0.085,0.2,0.79,-0.095,0.19,0.77,-0.0275,0.19,0.77,-0.0525,0.19,0.78,-0.0775,0.212,0.745,-0.015,0.188,0.745,-0.02,0.2,0.745,-0.0255,0.2,0.745,-0.0045,0.211,0.72,-0.015,0.189,0.72,-0.015,0.2,0.72,-0.0252,0.2,0.72,-0.0048,0.21,0.695,-0.015,0.19,0.695,-0.015,0.2,0.695,-0.025,0.2,0.695,-0.005,0.2,0.685,-0.015,0.215,0.74,-0.04,0.185,0.74,-0.04,0.2,0.74,-0.055,0.2,0.74,-0.025,0.21,0.7142,-0.04,0.19,0.7142,-0.04,0.2,0.7142,-0.053,0.2,0.7142,-0.027,0.21,0.68,-0.04,0.19,0.68,-0.04,0.2,0.68,-0.05,0.2,0.68,-0.03,0.2,0.67,-0.04,0.212,0.74,-0.065,0.188,0.74,-0.065,0.2,0.74,-0.0756,0.2,0.74,-0.0542,0.21,0.7177,-0.065,0.19,0.7177,-0.065,0.2,0.7177,-0.0751,0.2,0.7177,-0.0549,0.21,0.695,-0.065,0.19,0.695,-0.065,0.2,0.695,-0.075,0.2,0.695,-0.055,0.2,0.685,-0.065,0.211,0.755,-0.085,0.189,0.755,-0.085,0.2,0.755,-0.0952,0.2,0.755,-0.0748,0.21,0.735,-0.085,0.19,0.735,-0.085,0.2,0.735,-0.0951,0.2,0.735,-0.0749,0.21,0.72,-0.085,0.19,0.72,-0.085,0.2,0.72,-0.095,0.2,0.72,-0.075,0.2,0.71,-0.085,-0.23,1.23,-0.04,-0.16,1.23,-0.04,-0.2,1.235,-0.105,-0.2,1.235,0.02,-0.244,1.1388,-0.04,-0.165,1.1388,-0.04,-0.2,1.1388,-0.08,-0.2,1.1388,0.013,-0.225,1,-0.01,-0.225,1,-0.07,-0.185,1,-0.01,-0.185,1,-0.07,-0.2,1.1388,-0.04,-0.225,0.92,-0.04,-0.175,0.92,-0.04,-0.2,0.92,-0.065,-0.2,0.92,-0.015,-0.225,0.89,-0.04,-0.175,0.89,-0.04,-0.2,0.89,-0.065,-0.2,0.89,-0.015,-0.218,0.86,-0.04,-0.184,0.86,-0.04,-0.2,0.87,-0.07,-0.2,0.87,0,-0.21,0.85,0,-0.1854,0.85,0,-0.212,0.84,-0.015,-0.183,0.84,-0.015,-0.213,0.835,-0.04,-0.19,0.835,-0.04,-0.211,0.835,-0.065,-0.192,0.835,-0.065,-0.208,0.84,-0.085,-0.19,0.84,-0.085,-0.2,0.84,-0.095,-0.215,0.82,0,-0.193,0.815,0.005,-0.198,0.8,0.012,-0.21,0.82,0.03,-0.19,0.82,0.03,-0.2,0.835,0.039,-0.212,0.8,0.05,-0.188,0.8,0.05,-0.2,0.807,0.057,-0.2,0.793,0.035,-0.2,0.774,0.076,-0.212,0.78,0.07,-0.188,0.78,0.07,-0.2,0.785,0.075,-0.2,0.77,0.062,-0.215,0.793,-0.015,-0.187,0.793,-0.015,-0.2,0.793,-0.005,-0.215,0.788,-0.04,-0.187,0.788,-0.04,-0.215,0.793,-0.065,-0.187,0.793,-0.065,-0.21,0.79,-0.085,-0.19,0.79,-0.085,-0.2,0.79,-0.095,-0.19,0.77,-0.0275,-0.19,0.77,-0.0525,-0.19,0.78,-0.0775,-0.212,0.745,-0.015,-0.188,0.745,-0.02,-0.2,0.745,-0.0255,-0.2,0.745,-0.0045,-0.211,0.72,-0.015,-0.189,0.72,-0.015,-0.2,0.72,-0.0252,-0.2,0.72,-0.0048,-0.21,0.695,-0.015,-0.19,0.695,-0.015,-0.2,0.695,-0.025,-0.2,0.695,-0.005,-0.2,0.685,-0.015,-0.215,0.74,-0.04,-0.185,0.74,-0.04,-0.2,0.74,-0.055,-0.2,0.74,-0.025,-0.21,0.7142,-0.04,-0.19,0.7142,-0.04,-0.2,0.7142,-0.053,-0.2,0.7142,-0.027,-0.21,0.68,-0.04,-0.19,0.68,-0.04,-0.2,0.68,-0.05,-0.2,0.68,-0.03,-0.2,0.67,-0.04,-0.212,0.74,-0.065,-0.188,0.74,-0.065,-0.2,0.74,-0.0756,-0.2,0.74,-0.0542,-0.21,0.7177,-0.065,-0.19,0.7177,-0.065,-0.2,0.7177,-0.0751,-0.2,0.7177,-0.0549,-0.21,0.695,-0.065,-0.19,0.695,-0.065,-0.2,0.695,-0.075,-0.2,0.695,-0.055,-0.2,0.685,-0.065,-0.211,0.755,-0.085,-0.189,0.755,-0.085,-0.2,0.755,-0.0952,-0.2,0.755,-0.0748,-0.21,0.735,-0.085,-0.19,0.735,-0.085,-0.2,0.735,-0.0951,-0.2,0.735,-0.0749,-0.21,0.72,-0.085,-0.19,0.72,-0.085,-0.2,0.72,-0.095,-0.2,0.72,-0.075,-0.2,0.71,-0.085,0.115,0.466,0.06,0.115,0.466,-0.055,0.15,0.466,0,0.05,0.466,0,0.17,0.3,0,0.06,0.3,0,0.1,0.3,-0.05,0.1,0.3,0.05,0.15,0.07,0,0.085,0.086,0.0125,0.115,0.069,-0.045,0.117,0.0975,0.0615,0.1375,0.006,-0.03,0.095,0.006,-0.03,0.115,0.015,-0.045,0.115,0.06,0.1,0.115,0,0.07,0.165,0,0.07,0.095,0,0.07,0.115,0.04,0.13,0.125,0,0.12,0.165,0,0.12,0.087,0,0.122,0.09,0.012,0.188,0.11,0.011,0.19,0.128,0.011,0.185,0.142,0.011,0.178,0.154,0.01,0.168,-0.115,0.466,0.06,-0.115,0.466,-0.055,-0.17,0.466,0,-0.05,0.466,0,-0.17,0.3,0,-0.06,0.3,0,-0.1,0.3,-0.05,-0.1,0.3,0.05,-0.15,0.07,0,-0.085,0.086,0.0125,-0.115,0.069,-0.045,-0.117,0.0975,0.0615,-0.1375,0.006,-0.03,-0.095,0.006,-0.03,-0.095,0.006,-0.03,-0.115,0.06,0.1,-0.115,0,0.07,-0.165,0,0.07,-0.095,0,0.07,-0.115,0.04,0.13,-0.125,0,0.12,-0.165,0,0.12,-0.087,0,0.122,-0.09,0.012,0.188,-0.11,0.011,0.19,-0.128,0.011,0.185,-0.142,0.011,0.178,-0.154,0.01,0.168]))

IndexedFaceSet1184.setCoord(Coordinate1186)

Shape1180.setGeometry(IndexedFaceSet1184)

HAnimHumanoid78.addSkin(Shape1180)
Coordinate1187 = x3d.Coordinate()
Coordinate1187.setContainerFieldOverride("skinCoord")
Coordinate1187.setUSE("TheSkinCoord")

HAnimHumanoid78.setSkinCoord(Coordinate1187)
HAnimJoint1188 = x3d.HAnimJoint()
HAnimJoint1188.setContainerFieldOverride("joints")
HAnimJoint1188.setUSE("Joe_humanoid_root")

HAnimHumanoid78.addJoints(HAnimJoint1188)
HAnimJoint1189 = x3d.HAnimJoint()
HAnimJoint1189.setContainerFieldOverride("joints")
HAnimJoint1189.setUSE("Joe_sacroiliac")

HAnimHumanoid78.addJoints(HAnimJoint1189)
HAnimJoint1190 = x3d.HAnimJoint()
HAnimJoint1190.setContainerFieldOverride("joints")
HAnimJoint1190.setUSE("Joe_vl5")

HAnimHumanoid78.addJoints(HAnimJoint1190)
HAnimJoint1191 = x3d.HAnimJoint()
HAnimJoint1191.setContainerFieldOverride("joints")
HAnimJoint1191.setUSE("Joe_vl4")

HAnimHumanoid78.addJoints(HAnimJoint1191)
HAnimJoint1192 = x3d.HAnimJoint()
HAnimJoint1192.setContainerFieldOverride("joints")
HAnimJoint1192.setUSE("Joe_vl3")

HAnimHumanoid78.addJoints(HAnimJoint1192)
HAnimJoint1193 = x3d.HAnimJoint()
HAnimJoint1193.setContainerFieldOverride("joints")
HAnimJoint1193.setUSE("Joe_vl2")

HAnimHumanoid78.addJoints(HAnimJoint1193)
HAnimJoint1194 = x3d.HAnimJoint()
HAnimJoint1194.setContainerFieldOverride("joints")
HAnimJoint1194.setUSE("Joe_vl1")

HAnimHumanoid78.addJoints(HAnimJoint1194)
HAnimJoint1195 = x3d.HAnimJoint()
HAnimJoint1195.setContainerFieldOverride("joints")
HAnimJoint1195.setUSE("Joe_vt12")

HAnimHumanoid78.addJoints(HAnimJoint1195)
HAnimJoint1196 = x3d.HAnimJoint()
HAnimJoint1196.setContainerFieldOverride("joints")
HAnimJoint1196.setUSE("Joe_vt11")

HAnimHumanoid78.addJoints(HAnimJoint1196)
HAnimJoint1197 = x3d.HAnimJoint()
HAnimJoint1197.setContainerFieldOverride("joints")
HAnimJoint1197.setUSE("Joe_vt10")

HAnimHumanoid78.addJoints(HAnimJoint1197)
HAnimJoint1198 = x3d.HAnimJoint()
HAnimJoint1198.setContainerFieldOverride("joints")
HAnimJoint1198.setUSE("Joe_vt9")

HAnimHumanoid78.addJoints(HAnimJoint1198)
HAnimJoint1199 = x3d.HAnimJoint()
HAnimJoint1199.setContainerFieldOverride("joints")
HAnimJoint1199.setUSE("Joe_vt8")

HAnimHumanoid78.addJoints(HAnimJoint1199)
HAnimJoint1200 = x3d.HAnimJoint()
HAnimJoint1200.setContainerFieldOverride("joints")
HAnimJoint1200.setUSE("Joe_vt7")

HAnimHumanoid78.addJoints(HAnimJoint1200)
HAnimJoint1201 = x3d.HAnimJoint()
HAnimJoint1201.setContainerFieldOverride("joints")
HAnimJoint1201.setUSE("Joe_vt6")

HAnimHumanoid78.addJoints(HAnimJoint1201)
HAnimJoint1202 = x3d.HAnimJoint()
HAnimJoint1202.setContainerFieldOverride("joints")
HAnimJoint1202.setUSE("Joe_vt5")

HAnimHumanoid78.addJoints(HAnimJoint1202)
HAnimJoint1203 = x3d.HAnimJoint()
HAnimJoint1203.setContainerFieldOverride("joints")
HAnimJoint1203.setUSE("Joe_vt4")

HAnimHumanoid78.addJoints(HAnimJoint1203)
HAnimJoint1204 = x3d.HAnimJoint()
HAnimJoint1204.setContainerFieldOverride("joints")
HAnimJoint1204.setUSE("Joe_vt3")

HAnimHumanoid78.addJoints(HAnimJoint1204)
HAnimJoint1205 = x3d.HAnimJoint()
HAnimJoint1205.setContainerFieldOverride("joints")
HAnimJoint1205.setUSE("Joe_vt2")

HAnimHumanoid78.addJoints(HAnimJoint1205)
HAnimJoint1206 = x3d.HAnimJoint()
HAnimJoint1206.setContainerFieldOverride("joints")
HAnimJoint1206.setUSE("Joe_vt1")

HAnimHumanoid78.addJoints(HAnimJoint1206)
HAnimJoint1207 = x3d.HAnimJoint()
HAnimJoint1207.setContainerFieldOverride("joints")
HAnimJoint1207.setUSE("Joe_vc7")

HAnimHumanoid78.addJoints(HAnimJoint1207)
HAnimJoint1208 = x3d.HAnimJoint()
HAnimJoint1208.setContainerFieldOverride("joints")
HAnimJoint1208.setUSE("Joe_vc6")

HAnimHumanoid78.addJoints(HAnimJoint1208)
HAnimJoint1209 = x3d.HAnimJoint()
HAnimJoint1209.setContainerFieldOverride("joints")
HAnimJoint1209.setUSE("Joe_vc5")

HAnimHumanoid78.addJoints(HAnimJoint1209)
HAnimJoint1210 = x3d.HAnimJoint()
HAnimJoint1210.setContainerFieldOverride("joints")
HAnimJoint1210.setUSE("Joe_vc4")

HAnimHumanoid78.addJoints(HAnimJoint1210)
HAnimJoint1211 = x3d.HAnimJoint()
HAnimJoint1211.setContainerFieldOverride("joints")
HAnimJoint1211.setUSE("Joe_vc3")

HAnimHumanoid78.addJoints(HAnimJoint1211)
HAnimJoint1212 = x3d.HAnimJoint()
HAnimJoint1212.setContainerFieldOverride("joints")
HAnimJoint1212.setUSE("Joe_vc2")

HAnimHumanoid78.addJoints(HAnimJoint1212)
HAnimJoint1213 = x3d.HAnimJoint()
HAnimJoint1213.setContainerFieldOverride("joints")
HAnimJoint1213.setUSE("Joe_vc1")

HAnimHumanoid78.addJoints(HAnimJoint1213)
HAnimJoint1214 = x3d.HAnimJoint()
HAnimJoint1214.setContainerFieldOverride("joints")
HAnimJoint1214.setUSE("Joe_skullbase")

HAnimHumanoid78.addJoints(HAnimJoint1214)
HAnimJoint1215 = x3d.HAnimJoint()
HAnimJoint1215.setContainerFieldOverride("joints")
HAnimJoint1215.setUSE("Joe_l_acromioclavicular")

HAnimHumanoid78.addJoints(HAnimJoint1215)
HAnimJoint1216 = x3d.HAnimJoint()
HAnimJoint1216.setContainerFieldOverride("joints")
HAnimJoint1216.setUSE("Joe_r_acromioclavicular")

HAnimHumanoid78.addJoints(HAnimJoint1216)
HAnimJoint1217 = x3d.HAnimJoint()
HAnimJoint1217.setContainerFieldOverride("joints")
HAnimJoint1217.setUSE("Joe_l_carpal_distal_interphalangeal_2")

HAnimHumanoid78.addJoints(HAnimJoint1217)
HAnimJoint1218 = x3d.HAnimJoint()
HAnimJoint1218.setContainerFieldOverride("joints")
HAnimJoint1218.setUSE("Joe_r_carpal_distal_interphalangeal_2")

HAnimHumanoid78.addJoints(HAnimJoint1218)
HAnimJoint1219 = x3d.HAnimJoint()
HAnimJoint1219.setContainerFieldOverride("joints")
HAnimJoint1219.setUSE("Joe_l_carpal_distal_interphalangeal_3")

HAnimHumanoid78.addJoints(HAnimJoint1219)
HAnimJoint1220 = x3d.HAnimJoint()
HAnimJoint1220.setContainerFieldOverride("joints")
HAnimJoint1220.setUSE("Joe_r_carpal_distal_interphalangeal_3")

HAnimHumanoid78.addJoints(HAnimJoint1220)
HAnimJoint1221 = x3d.HAnimJoint()
HAnimJoint1221.setContainerFieldOverride("joints")
HAnimJoint1221.setUSE("Joe_l_carpal_distal_interphalangeal_4")

HAnimHumanoid78.addJoints(HAnimJoint1221)
HAnimJoint1222 = x3d.HAnimJoint()
HAnimJoint1222.setContainerFieldOverride("joints")
HAnimJoint1222.setUSE("Joe_r_carpal_distal_interphalangeal_4")

HAnimHumanoid78.addJoints(HAnimJoint1222)
HAnimJoint1223 = x3d.HAnimJoint()
HAnimJoint1223.setContainerFieldOverride("joints")
HAnimJoint1223.setUSE("Joe_l_carpal_distal_interphalangeal_5")

HAnimHumanoid78.addJoints(HAnimJoint1223)
HAnimJoint1224 = x3d.HAnimJoint()
HAnimJoint1224.setContainerFieldOverride("joints")
HAnimJoint1224.setUSE("Joe_r_carpal_distal_interphalangeal_5")

HAnimHumanoid78.addJoints(HAnimJoint1224)
HAnimJoint1225 = x3d.HAnimJoint()
HAnimJoint1225.setContainerFieldOverride("joints")
HAnimJoint1225.setUSE("Joe_l_carpal_interphalangeal_1")

HAnimHumanoid78.addJoints(HAnimJoint1225)
HAnimJoint1226 = x3d.HAnimJoint()
HAnimJoint1226.setContainerFieldOverride("joints")
HAnimJoint1226.setUSE("Joe_r_carpal_interphalangeal_1")

HAnimHumanoid78.addJoints(HAnimJoint1226)
HAnimJoint1227 = x3d.HAnimJoint()
HAnimJoint1227.setContainerFieldOverride("joints")
HAnimJoint1227.setUSE("Joe_l_carpal_proximal_interphalangeal_2")

HAnimHumanoid78.addJoints(HAnimJoint1227)
HAnimJoint1228 = x3d.HAnimJoint()
HAnimJoint1228.setContainerFieldOverride("joints")
HAnimJoint1228.setUSE("Joe_r_carpal_proximal_interphalangeal_2")

HAnimHumanoid78.addJoints(HAnimJoint1228)
HAnimJoint1229 = x3d.HAnimJoint()
HAnimJoint1229.setContainerFieldOverride("joints")
HAnimJoint1229.setUSE("Joe_l_carpal_proximal_interphalangeal_3")

HAnimHumanoid78.addJoints(HAnimJoint1229)
HAnimJoint1230 = x3d.HAnimJoint()
HAnimJoint1230.setContainerFieldOverride("joints")
HAnimJoint1230.setUSE("Joe_r_carpal_proximal_interphalangeal_3")

HAnimHumanoid78.addJoints(HAnimJoint1230)
HAnimJoint1231 = x3d.HAnimJoint()
HAnimJoint1231.setContainerFieldOverride("joints")
HAnimJoint1231.setUSE("Joe_l_carpal_proximal_interphalangeal_4")

HAnimHumanoid78.addJoints(HAnimJoint1231)
HAnimJoint1232 = x3d.HAnimJoint()
HAnimJoint1232.setContainerFieldOverride("joints")
HAnimJoint1232.setUSE("Joe_r_carpal_proximal_interphalangeal_4")

HAnimHumanoid78.addJoints(HAnimJoint1232)
HAnimJoint1233 = x3d.HAnimJoint()
HAnimJoint1233.setContainerFieldOverride("joints")
HAnimJoint1233.setUSE("Joe_l_carpal_proximal_interphalangeal_5")

HAnimHumanoid78.addJoints(HAnimJoint1233)
HAnimJoint1234 = x3d.HAnimJoint()
HAnimJoint1234.setContainerFieldOverride("joints")
HAnimJoint1234.setUSE("Joe_r_carpal_proximal_interphalangeal_5")

HAnimHumanoid78.addJoints(HAnimJoint1234)
HAnimJoint1235 = x3d.HAnimJoint()
HAnimJoint1235.setContainerFieldOverride("joints")
HAnimJoint1235.setUSE("Joe_l_carpometacarpal_1")

HAnimHumanoid78.addJoints(HAnimJoint1235)
HAnimJoint1236 = x3d.HAnimJoint()
HAnimJoint1236.setContainerFieldOverride("joints")
HAnimJoint1236.setUSE("Joe_r_carpometacarpal_1")

HAnimHumanoid78.addJoints(HAnimJoint1236)
HAnimJoint1237 = x3d.HAnimJoint()
HAnimJoint1237.setContainerFieldOverride("joints")
HAnimJoint1237.setUSE("Joe_l_carpometacarpal_2")

HAnimHumanoid78.addJoints(HAnimJoint1237)
HAnimJoint1238 = x3d.HAnimJoint()
HAnimJoint1238.setContainerFieldOverride("joints")
HAnimJoint1238.setUSE("Joe_r_carpometacarpal_2")

HAnimHumanoid78.addJoints(HAnimJoint1238)
HAnimJoint1239 = x3d.HAnimJoint()
HAnimJoint1239.setContainerFieldOverride("joints")
HAnimJoint1239.setUSE("Joe_l_carpometacarpal_3")

HAnimHumanoid78.addJoints(HAnimJoint1239)
HAnimJoint1240 = x3d.HAnimJoint()
HAnimJoint1240.setContainerFieldOverride("joints")
HAnimJoint1240.setUSE("Joe_r_carpometacarpal_3")

HAnimHumanoid78.addJoints(HAnimJoint1240)
HAnimJoint1241 = x3d.HAnimJoint()
HAnimJoint1241.setContainerFieldOverride("joints")
HAnimJoint1241.setUSE("Joe_l_carpometacarpal_4")

HAnimHumanoid78.addJoints(HAnimJoint1241)
HAnimJoint1242 = x3d.HAnimJoint()
HAnimJoint1242.setContainerFieldOverride("joints")
HAnimJoint1242.setUSE("Joe_r_carpometacarpal_4")

HAnimHumanoid78.addJoints(HAnimJoint1242)
HAnimJoint1243 = x3d.HAnimJoint()
HAnimJoint1243.setContainerFieldOverride("joints")
HAnimJoint1243.setUSE("Joe_l_carpometacarpal_5")

HAnimHumanoid78.addJoints(HAnimJoint1243)
HAnimJoint1244 = x3d.HAnimJoint()
HAnimJoint1244.setContainerFieldOverride("joints")
HAnimJoint1244.setUSE("Joe_r_carpometacarpal_5")

HAnimHumanoid78.addJoints(HAnimJoint1244)
HAnimJoint1245 = x3d.HAnimJoint()
HAnimJoint1245.setContainerFieldOverride("joints")
HAnimJoint1245.setUSE("Joe_l_elbow")

HAnimHumanoid78.addJoints(HAnimJoint1245)
HAnimJoint1246 = x3d.HAnimJoint()
HAnimJoint1246.setContainerFieldOverride("joints")
HAnimJoint1246.setUSE("Joe_r_elbow")

HAnimHumanoid78.addJoints(HAnimJoint1246)
HAnimJoint1247 = x3d.HAnimJoint()
HAnimJoint1247.setContainerFieldOverride("joints")
HAnimJoint1247.setUSE("Joe_l_eyeball_joint")

HAnimHumanoid78.addJoints(HAnimJoint1247)
HAnimJoint1248 = x3d.HAnimJoint()
HAnimJoint1248.setContainerFieldOverride("joints")
HAnimJoint1248.setUSE("Joe_r_eyeball_joint")

HAnimHumanoid78.addJoints(HAnimJoint1248)
HAnimJoint1249 = x3d.HAnimJoint()
HAnimJoint1249.setContainerFieldOverride("joints")
HAnimJoint1249.setUSE("Joe_l_hip")

HAnimHumanoid78.addJoints(HAnimJoint1249)
HAnimJoint1250 = x3d.HAnimJoint()
HAnimJoint1250.setContainerFieldOverride("joints")
HAnimJoint1250.setUSE("Joe_r_hip")

HAnimHumanoid78.addJoints(HAnimJoint1250)
HAnimJoint1251 = x3d.HAnimJoint()
HAnimJoint1251.setContainerFieldOverride("joints")
HAnimJoint1251.setUSE("Joe_l_knee")

HAnimHumanoid78.addJoints(HAnimJoint1251)
HAnimJoint1252 = x3d.HAnimJoint()
HAnimJoint1252.setContainerFieldOverride("joints")
HAnimJoint1252.setUSE("Joe_r_knee")

HAnimHumanoid78.addJoints(HAnimJoint1252)
HAnimJoint1253 = x3d.HAnimJoint()
HAnimJoint1253.setContainerFieldOverride("joints")
HAnimJoint1253.setUSE("Joe_l_metacarpophalangeal_1")

HAnimHumanoid78.addJoints(HAnimJoint1253)
HAnimJoint1254 = x3d.HAnimJoint()
HAnimJoint1254.setContainerFieldOverride("joints")
HAnimJoint1254.setUSE("Joe_r_metacarpophalangeal_1")

HAnimHumanoid78.addJoints(HAnimJoint1254)
HAnimJoint1255 = x3d.HAnimJoint()
HAnimJoint1255.setContainerFieldOverride("joints")
HAnimJoint1255.setUSE("Joe_l_metacarpophalangeal_2")

HAnimHumanoid78.addJoints(HAnimJoint1255)
HAnimJoint1256 = x3d.HAnimJoint()
HAnimJoint1256.setContainerFieldOverride("joints")
HAnimJoint1256.setUSE("Joe_r_metacarpophalangeal_2")

HAnimHumanoid78.addJoints(HAnimJoint1256)
HAnimJoint1257 = x3d.HAnimJoint()
HAnimJoint1257.setContainerFieldOverride("joints")
HAnimJoint1257.setUSE("Joe_l_metacarpophalangeal_3")

HAnimHumanoid78.addJoints(HAnimJoint1257)
HAnimJoint1258 = x3d.HAnimJoint()
HAnimJoint1258.setContainerFieldOverride("joints")
HAnimJoint1258.setUSE("Joe_r_metacarpophalangeal_3")

HAnimHumanoid78.addJoints(HAnimJoint1258)
HAnimJoint1259 = x3d.HAnimJoint()
HAnimJoint1259.setContainerFieldOverride("joints")
HAnimJoint1259.setUSE("Joe_l_metacarpophalangeal_4")

HAnimHumanoid78.addJoints(HAnimJoint1259)
HAnimJoint1260 = x3d.HAnimJoint()
HAnimJoint1260.setContainerFieldOverride("joints")
HAnimJoint1260.setUSE("Joe_r_metacarpophalangeal_4")

HAnimHumanoid78.addJoints(HAnimJoint1260)
HAnimJoint1261 = x3d.HAnimJoint()
HAnimJoint1261.setContainerFieldOverride("joints")
HAnimJoint1261.setUSE("Joe_l_metacarpophalangeal_5")

HAnimHumanoid78.addJoints(HAnimJoint1261)
HAnimJoint1262 = x3d.HAnimJoint()
HAnimJoint1262.setContainerFieldOverride("joints")
HAnimJoint1262.setUSE("Joe_r_metacarpophalangeal_5")

HAnimHumanoid78.addJoints(HAnimJoint1262)
HAnimJoint1263 = x3d.HAnimJoint()
HAnimJoint1263.setContainerFieldOverride("joints")
HAnimJoint1263.setUSE("Joe_l_metatarsal")

HAnimHumanoid78.addJoints(HAnimJoint1263)
HAnimJoint1264 = x3d.HAnimJoint()
HAnimJoint1264.setContainerFieldOverride("joints")
HAnimJoint1264.setUSE("Joe_l_metatarsophalangeal_2")

HAnimHumanoid78.addJoints(HAnimJoint1264)
HAnimJoint1265 = x3d.HAnimJoint()
HAnimJoint1265.setContainerFieldOverride("joints")
HAnimJoint1265.setUSE("Joe_r_metatarsophalangeal_2")

HAnimHumanoid78.addJoints(HAnimJoint1265)
HAnimJoint1266 = x3d.HAnimJoint()
HAnimJoint1266.setContainerFieldOverride("joints")
HAnimJoint1266.setUSE("Joe_l_radiocarpal")

HAnimHumanoid78.addJoints(HAnimJoint1266)
HAnimJoint1267 = x3d.HAnimJoint()
HAnimJoint1267.setContainerFieldOverride("joints")
HAnimJoint1267.setUSE("Joe_r_radiocarpal")

HAnimHumanoid78.addJoints(HAnimJoint1267)
HAnimJoint1268 = x3d.HAnimJoint()
HAnimJoint1268.setContainerFieldOverride("joints")
HAnimJoint1268.setUSE("Joe_l_shoulder")

HAnimHumanoid78.addJoints(HAnimJoint1268)
HAnimJoint1269 = x3d.HAnimJoint()
HAnimJoint1269.setContainerFieldOverride("joints")
HAnimJoint1269.setUSE("Joe_r_shoulder")

HAnimHumanoid78.addJoints(HAnimJoint1269)
HAnimJoint1270 = x3d.HAnimJoint()
HAnimJoint1270.setContainerFieldOverride("joints")
HAnimJoint1270.setUSE("Joe_l_sternoclavicular")

HAnimHumanoid78.addJoints(HAnimJoint1270)
HAnimJoint1271 = x3d.HAnimJoint()
HAnimJoint1271.setContainerFieldOverride("joints")
HAnimJoint1271.setUSE("Joe_r_sternoclavicular")

HAnimHumanoid78.addJoints(HAnimJoint1271)
HAnimJoint1272 = x3d.HAnimJoint()
HAnimJoint1272.setContainerFieldOverride("joints")
HAnimJoint1272.setUSE("Joe_l_talocrural")

HAnimHumanoid78.addJoints(HAnimJoint1272)
HAnimJoint1273 = x3d.HAnimJoint()
HAnimJoint1273.setContainerFieldOverride("joints")
HAnimJoint1273.setUSE("Joe_r_talocrural")

HAnimHumanoid78.addJoints(HAnimJoint1273)
HAnimJoint1274 = x3d.HAnimJoint()
HAnimJoint1274.setContainerFieldOverride("joints")
HAnimJoint1274.setUSE("Joe_r_tarsal_distal_interphalangeal_2")

HAnimHumanoid78.addJoints(HAnimJoint1274)
HAnimJoint1275 = x3d.HAnimJoint()
HAnimJoint1275.setContainerFieldOverride("joints")
HAnimJoint1275.setUSE("Joe_l_tarsometatarsal_2")

HAnimHumanoid78.addJoints(HAnimJoint1275)
HAnimJoint1276 = x3d.HAnimJoint()
HAnimJoint1276.setContainerFieldOverride("joints")
HAnimJoint1276.setUSE("Joe_r_tarsometatarsal_2")

HAnimHumanoid78.addJoints(HAnimJoint1276)
HAnimSegment1277 = x3d.HAnimSegment()
HAnimSegment1277.setContainerFieldOverride("segments")
HAnimSegment1277.setUSE("Joe_c1")

HAnimHumanoid78.addSegments(HAnimSegment1277)
HAnimSegment1278 = x3d.HAnimSegment()
HAnimSegment1278.setContainerFieldOverride("segments")
HAnimSegment1278.setUSE("Joe_c2")

HAnimHumanoid78.addSegments(HAnimSegment1278)
HAnimSegment1279 = x3d.HAnimSegment()
HAnimSegment1279.setContainerFieldOverride("segments")
HAnimSegment1279.setUSE("Joe_c3")

HAnimHumanoid78.addSegments(HAnimSegment1279)
HAnimSegment1280 = x3d.HAnimSegment()
HAnimSegment1280.setContainerFieldOverride("segments")
HAnimSegment1280.setUSE("Joe_c4")

HAnimHumanoid78.addSegments(HAnimSegment1280)
HAnimSegment1281 = x3d.HAnimSegment()
HAnimSegment1281.setContainerFieldOverride("segments")
HAnimSegment1281.setUSE("Joe_c5")

HAnimHumanoid78.addSegments(HAnimSegment1281)
HAnimSegment1282 = x3d.HAnimSegment()
HAnimSegment1282.setContainerFieldOverride("segments")
HAnimSegment1282.setUSE("Joe_c6")

HAnimHumanoid78.addSegments(HAnimSegment1282)
HAnimSegment1283 = x3d.HAnimSegment()
HAnimSegment1283.setContainerFieldOverride("segments")
HAnimSegment1283.setUSE("Joe_c7")

HAnimHumanoid78.addSegments(HAnimSegment1283)
HAnimSegment1284 = x3d.HAnimSegment()
HAnimSegment1284.setContainerFieldOverride("segments")
HAnimSegment1284.setUSE("Joe_l1")

HAnimHumanoid78.addSegments(HAnimSegment1284)
HAnimSegment1285 = x3d.HAnimSegment()
HAnimSegment1285.setContainerFieldOverride("segments")
HAnimSegment1285.setUSE("Joe_l2")

HAnimHumanoid78.addSegments(HAnimSegment1285)
HAnimSegment1286 = x3d.HAnimSegment()
HAnimSegment1286.setContainerFieldOverride("segments")
HAnimSegment1286.setUSE("Joe_l3")

HAnimHumanoid78.addSegments(HAnimSegment1286)
HAnimSegment1287 = x3d.HAnimSegment()
HAnimSegment1287.setContainerFieldOverride("segments")
HAnimSegment1287.setUSE("Joe_l4")

HAnimHumanoid78.addSegments(HAnimSegment1287)
HAnimSegment1288 = x3d.HAnimSegment()
HAnimSegment1288.setContainerFieldOverride("segments")
HAnimSegment1288.setUSE("Joe_l5")

HAnimHumanoid78.addSegments(HAnimSegment1288)
HAnimSegment1289 = x3d.HAnimSegment()
HAnimSegment1289.setContainerFieldOverride("segments")
HAnimSegment1289.setUSE("Joe_pelvis")

HAnimHumanoid78.addSegments(HAnimSegment1289)
HAnimSegment1290 = x3d.HAnimSegment()
HAnimSegment1290.setContainerFieldOverride("segments")
HAnimSegment1290.setUSE("Joe_sacrum")

HAnimHumanoid78.addSegments(HAnimSegment1290)
HAnimSegment1291 = x3d.HAnimSegment()
HAnimSegment1291.setContainerFieldOverride("segments")
HAnimSegment1291.setUSE("Joe_skull")

HAnimHumanoid78.addSegments(HAnimSegment1291)
HAnimSegment1292 = x3d.HAnimSegment()
HAnimSegment1292.setContainerFieldOverride("segments")
HAnimSegment1292.setUSE("Joe_t1")

HAnimHumanoid78.addSegments(HAnimSegment1292)
HAnimSegment1293 = x3d.HAnimSegment()
HAnimSegment1293.setContainerFieldOverride("segments")
HAnimSegment1293.setUSE("Joe_t10")

HAnimHumanoid78.addSegments(HAnimSegment1293)
HAnimSegment1294 = x3d.HAnimSegment()
HAnimSegment1294.setContainerFieldOverride("segments")
HAnimSegment1294.setUSE("Joe_t11")

HAnimHumanoid78.addSegments(HAnimSegment1294)
HAnimSegment1295 = x3d.HAnimSegment()
HAnimSegment1295.setContainerFieldOverride("segments")
HAnimSegment1295.setUSE("Joe_t12")

HAnimHumanoid78.addSegments(HAnimSegment1295)
HAnimSegment1296 = x3d.HAnimSegment()
HAnimSegment1296.setContainerFieldOverride("segments")
HAnimSegment1296.setUSE("Joe_t2")

HAnimHumanoid78.addSegments(HAnimSegment1296)
HAnimSegment1297 = x3d.HAnimSegment()
HAnimSegment1297.setContainerFieldOverride("segments")
HAnimSegment1297.setUSE("Joe_t3")

HAnimHumanoid78.addSegments(HAnimSegment1297)
HAnimSegment1298 = x3d.HAnimSegment()
HAnimSegment1298.setContainerFieldOverride("segments")
HAnimSegment1298.setUSE("Joe_t4")

HAnimHumanoid78.addSegments(HAnimSegment1298)
HAnimSegment1299 = x3d.HAnimSegment()
HAnimSegment1299.setContainerFieldOverride("segments")
HAnimSegment1299.setUSE("Joe_t5")

HAnimHumanoid78.addSegments(HAnimSegment1299)
HAnimSegment1300 = x3d.HAnimSegment()
HAnimSegment1300.setContainerFieldOverride("segments")
HAnimSegment1300.setUSE("Joe_t6")

HAnimHumanoid78.addSegments(HAnimSegment1300)
HAnimSegment1301 = x3d.HAnimSegment()
HAnimSegment1301.setContainerFieldOverride("segments")
HAnimSegment1301.setUSE("Joe_t7")

HAnimHumanoid78.addSegments(HAnimSegment1301)
HAnimSegment1302 = x3d.HAnimSegment()
HAnimSegment1302.setContainerFieldOverride("segments")
HAnimSegment1302.setUSE("Joe_t8")

HAnimHumanoid78.addSegments(HAnimSegment1302)
HAnimSegment1303 = x3d.HAnimSegment()
HAnimSegment1303.setContainerFieldOverride("segments")
HAnimSegment1303.setUSE("Joe_t9")

HAnimHumanoid78.addSegments(HAnimSegment1303)
HAnimSegment1304 = x3d.HAnimSegment()
HAnimSegment1304.setContainerFieldOverride("segments")
HAnimSegment1304.setUSE("Joe_toPelvis")

HAnimHumanoid78.addSegments(HAnimSegment1304)
HAnimSegment1305 = x3d.HAnimSegment()
HAnimSegment1305.setContainerFieldOverride("segments")
HAnimSegment1305.setUSE("Joe_l_calf")

HAnimHumanoid78.addSegments(HAnimSegment1305)
HAnimSegment1306 = x3d.HAnimSegment()
HAnimSegment1306.setContainerFieldOverride("segments")
HAnimSegment1306.setUSE("Joe_r_calf")

HAnimHumanoid78.addSegments(HAnimSegment1306)
HAnimSegment1307 = x3d.HAnimSegment()
HAnimSegment1307.setContainerFieldOverride("segments")
HAnimSegment1307.setUSE("Joe_l_carpal")

HAnimHumanoid78.addSegments(HAnimSegment1307)
HAnimSegment1308 = x3d.HAnimSegment()
HAnimSegment1308.setContainerFieldOverride("segments")
HAnimSegment1308.setUSE("Joe_r_carpal")

HAnimHumanoid78.addSegments(HAnimSegment1308)
HAnimSegment1309 = x3d.HAnimSegment()
HAnimSegment1309.setContainerFieldOverride("segments")
HAnimSegment1309.setUSE("Joe_l_carpal_distal_phalanx_1")

HAnimHumanoid78.addSegments(HAnimSegment1309)
HAnimSegment1310 = x3d.HAnimSegment()
HAnimSegment1310.setContainerFieldOverride("segments")
HAnimSegment1310.setUSE("Joe_r_carpal_distal_phalanx_1")

HAnimHumanoid78.addSegments(HAnimSegment1310)
HAnimSegment1311 = x3d.HAnimSegment()
HAnimSegment1311.setContainerFieldOverride("segments")
HAnimSegment1311.setUSE("Joe_l_carpal_distal_phalanx_2")

HAnimHumanoid78.addSegments(HAnimSegment1311)
HAnimSegment1312 = x3d.HAnimSegment()
HAnimSegment1312.setContainerFieldOverride("segments")
HAnimSegment1312.setUSE("Joe_r_carpal_distal_phalanx_2")

HAnimHumanoid78.addSegments(HAnimSegment1312)
HAnimSegment1313 = x3d.HAnimSegment()
HAnimSegment1313.setContainerFieldOverride("segments")
HAnimSegment1313.setUSE("Joe_l_carpal_distal_phalanx_3")

HAnimHumanoid78.addSegments(HAnimSegment1313)
HAnimSegment1314 = x3d.HAnimSegment()
HAnimSegment1314.setContainerFieldOverride("segments")
HAnimSegment1314.setUSE("Joe_r_carpal_distal_phalanx_3")

HAnimHumanoid78.addSegments(HAnimSegment1314)
HAnimSegment1315 = x3d.HAnimSegment()
HAnimSegment1315.setContainerFieldOverride("segments")
HAnimSegment1315.setUSE("Joe_l_carpal_distal_phalanx_4")

HAnimHumanoid78.addSegments(HAnimSegment1315)
HAnimSegment1316 = x3d.HAnimSegment()
HAnimSegment1316.setContainerFieldOverride("segments")
HAnimSegment1316.setUSE("Joe_r_carpal_distal_phalanx_4")

HAnimHumanoid78.addSegments(HAnimSegment1316)
HAnimSegment1317 = x3d.HAnimSegment()
HAnimSegment1317.setContainerFieldOverride("segments")
HAnimSegment1317.setUSE("Joe_l_carpal_distal_phalanx_5")

HAnimHumanoid78.addSegments(HAnimSegment1317)
HAnimSegment1318 = x3d.HAnimSegment()
HAnimSegment1318.setContainerFieldOverride("segments")
HAnimSegment1318.setUSE("Joe_r_carpal_distal_phalanx_5")

HAnimHumanoid78.addSegments(HAnimSegment1318)
HAnimSegment1319 = x3d.HAnimSegment()
HAnimSegment1319.setContainerFieldOverride("segments")
HAnimSegment1319.setUSE("Joe_l_carpal_middle_phalanx_2")

HAnimHumanoid78.addSegments(HAnimSegment1319)
HAnimSegment1320 = x3d.HAnimSegment()
HAnimSegment1320.setContainerFieldOverride("segments")
HAnimSegment1320.setUSE("Joe_r_carpal_middle_phalanx_2")

HAnimHumanoid78.addSegments(HAnimSegment1320)
HAnimSegment1321 = x3d.HAnimSegment()
HAnimSegment1321.setContainerFieldOverride("segments")
HAnimSegment1321.setUSE("Joe_l_carpal_middle_phalanx_3")

HAnimHumanoid78.addSegments(HAnimSegment1321)
HAnimSegment1322 = x3d.HAnimSegment()
HAnimSegment1322.setContainerFieldOverride("segments")
HAnimSegment1322.setUSE("Joe_r_carpal_middle_phalanx_3")

HAnimHumanoid78.addSegments(HAnimSegment1322)
HAnimSegment1323 = x3d.HAnimSegment()
HAnimSegment1323.setContainerFieldOverride("segments")
HAnimSegment1323.setUSE("Joe_l_carpal_middle_phalanx_4")

HAnimHumanoid78.addSegments(HAnimSegment1323)
HAnimSegment1324 = x3d.HAnimSegment()
HAnimSegment1324.setContainerFieldOverride("segments")
HAnimSegment1324.setUSE("Joe_r_carpal_middle_phalanx_4")

HAnimHumanoid78.addSegments(HAnimSegment1324)
HAnimSegment1325 = x3d.HAnimSegment()
HAnimSegment1325.setContainerFieldOverride("segments")
HAnimSegment1325.setUSE("Joe_l_carpal_middle_phalanx_5")

HAnimHumanoid78.addSegments(HAnimSegment1325)
HAnimSegment1326 = x3d.HAnimSegment()
HAnimSegment1326.setContainerFieldOverride("segments")
HAnimSegment1326.setUSE("Joe_r_carpal_middle_phalanx_5")

HAnimHumanoid78.addSegments(HAnimSegment1326)
HAnimSegment1327 = x3d.HAnimSegment()
HAnimSegment1327.setContainerFieldOverride("segments")
HAnimSegment1327.setUSE("Joe_l_carpal_proximal_phalanx_1")

HAnimHumanoid78.addSegments(HAnimSegment1327)
HAnimSegment1328 = x3d.HAnimSegment()
HAnimSegment1328.setContainerFieldOverride("segments")
HAnimSegment1328.setUSE("Joe_r_carpal_proximal_phalanx_1")

HAnimHumanoid78.addSegments(HAnimSegment1328)
HAnimSegment1329 = x3d.HAnimSegment()
HAnimSegment1329.setContainerFieldOverride("segments")
HAnimSegment1329.setUSE("Joe_l_carpal_proximal_phalanx_2")

HAnimHumanoid78.addSegments(HAnimSegment1329)
HAnimSegment1330 = x3d.HAnimSegment()
HAnimSegment1330.setContainerFieldOverride("segments")
HAnimSegment1330.setUSE("Joe_r_carpal_proximal_phalanx_2")

HAnimHumanoid78.addSegments(HAnimSegment1330)
HAnimSegment1331 = x3d.HAnimSegment()
HAnimSegment1331.setContainerFieldOverride("segments")
HAnimSegment1331.setUSE("Joe_l_carpal_proximal_phalanx_3")

HAnimHumanoid78.addSegments(HAnimSegment1331)
HAnimSegment1332 = x3d.HAnimSegment()
HAnimSegment1332.setContainerFieldOverride("segments")
HAnimSegment1332.setUSE("Joe_r_carpal_proximal_phalanx_3")

HAnimHumanoid78.addSegments(HAnimSegment1332)
HAnimSegment1333 = x3d.HAnimSegment()
HAnimSegment1333.setContainerFieldOverride("segments")
HAnimSegment1333.setUSE("Joe_l_carpal_proximal_phalanx_4")

HAnimHumanoid78.addSegments(HAnimSegment1333)
HAnimSegment1334 = x3d.HAnimSegment()
HAnimSegment1334.setContainerFieldOverride("segments")
HAnimSegment1334.setUSE("Joe_r_carpal_proximal_phalanx_4")

HAnimHumanoid78.addSegments(HAnimSegment1334)
HAnimSegment1335 = x3d.HAnimSegment()
HAnimSegment1335.setContainerFieldOverride("segments")
HAnimSegment1335.setUSE("Joe_l_carpal_proximal_phalanx_5")

HAnimHumanoid78.addSegments(HAnimSegment1335)
HAnimSegment1336 = x3d.HAnimSegment()
HAnimSegment1336.setContainerFieldOverride("segments")
HAnimSegment1336.setUSE("Joe_r_carpal_proximal_phalanx_5")

HAnimHumanoid78.addSegments(HAnimSegment1336)
HAnimSegment1337 = x3d.HAnimSegment()
HAnimSegment1337.setContainerFieldOverride("segments")
HAnimSegment1337.setUSE("Joe_l_clavicle")

HAnimHumanoid78.addSegments(HAnimSegment1337)
HAnimSegment1338 = x3d.HAnimSegment()
HAnimSegment1338.setContainerFieldOverride("segments")
HAnimSegment1338.setUSE("Joe_r_clavicle")

HAnimHumanoid78.addSegments(HAnimSegment1338)
HAnimSegment1339 = x3d.HAnimSegment()
HAnimSegment1339.setContainerFieldOverride("segments")
HAnimSegment1339.setUSE("Joe_l_eyeball")

HAnimHumanoid78.addSegments(HAnimSegment1339)
HAnimSegment1340 = x3d.HAnimSegment()
HAnimSegment1340.setContainerFieldOverride("segments")
HAnimSegment1340.setUSE("Joe_r_eyeball")

HAnimHumanoid78.addSegments(HAnimSegment1340)
HAnimSegment1341 = x3d.HAnimSegment()
HAnimSegment1341.setContainerFieldOverride("segments")
HAnimSegment1341.setUSE("Joe_l_forearm")

HAnimHumanoid78.addSegments(HAnimSegment1341)
HAnimSegment1342 = x3d.HAnimSegment()
HAnimSegment1342.setContainerFieldOverride("segments")
HAnimSegment1342.setUSE("Joe_r_forearm")

HAnimHumanoid78.addSegments(HAnimSegment1342)
HAnimSegment1343 = x3d.HAnimSegment()
HAnimSegment1343.setContainerFieldOverride("segments")
HAnimSegment1343.setUSE("Joe_l_metacarpal_1")

HAnimHumanoid78.addSegments(HAnimSegment1343)
HAnimSegment1344 = x3d.HAnimSegment()
HAnimSegment1344.setContainerFieldOverride("segments")
HAnimSegment1344.setUSE("Joe_r_metacarpal_1")

HAnimHumanoid78.addSegments(HAnimSegment1344)
HAnimSegment1345 = x3d.HAnimSegment()
HAnimSegment1345.setContainerFieldOverride("segments")
HAnimSegment1345.setUSE("Joe_l_metacarpal_2")

HAnimHumanoid78.addSegments(HAnimSegment1345)
HAnimSegment1346 = x3d.HAnimSegment()
HAnimSegment1346.setContainerFieldOverride("segments")
HAnimSegment1346.setUSE("Joe_r_metacarpal_2")

HAnimHumanoid78.addSegments(HAnimSegment1346)
HAnimSegment1347 = x3d.HAnimSegment()
HAnimSegment1347.setContainerFieldOverride("segments")
HAnimSegment1347.setUSE("Joe_l_metacarpal_3")

HAnimHumanoid78.addSegments(HAnimSegment1347)
HAnimSegment1348 = x3d.HAnimSegment()
HAnimSegment1348.setContainerFieldOverride("segments")
HAnimSegment1348.setUSE("Joe_r_metacarpal_3")

HAnimHumanoid78.addSegments(HAnimSegment1348)
HAnimSegment1349 = x3d.HAnimSegment()
HAnimSegment1349.setContainerFieldOverride("segments")
HAnimSegment1349.setUSE("Joe_l_metacarpal_4")

HAnimHumanoid78.addSegments(HAnimSegment1349)
HAnimSegment1350 = x3d.HAnimSegment()
HAnimSegment1350.setContainerFieldOverride("segments")
HAnimSegment1350.setUSE("Joe_r_metacarpal_4")

HAnimHumanoid78.addSegments(HAnimSegment1350)
HAnimSegment1351 = x3d.HAnimSegment()
HAnimSegment1351.setContainerFieldOverride("segments")
HAnimSegment1351.setUSE("Joe_l_metacarpal_5")

HAnimHumanoid78.addSegments(HAnimSegment1351)
HAnimSegment1352 = x3d.HAnimSegment()
HAnimSegment1352.setContainerFieldOverride("segments")
HAnimSegment1352.setUSE("Joe_r_metacarpal_5")

HAnimHumanoid78.addSegments(HAnimSegment1352)
HAnimSegment1353 = x3d.HAnimSegment()
HAnimSegment1353.setContainerFieldOverride("segments")
HAnimSegment1353.setUSE("Joe_l_metatarsal_2")

HAnimHumanoid78.addSegments(HAnimSegment1353)
HAnimSegment1354 = x3d.HAnimSegment()
HAnimSegment1354.setContainerFieldOverride("segments")
HAnimSegment1354.setUSE("Joe_r_metatarsal_2")

HAnimHumanoid78.addSegments(HAnimSegment1354)
HAnimSegment1355 = x3d.HAnimSegment()
HAnimSegment1355.setContainerFieldOverride("segments")
HAnimSegment1355.setUSE("Joe_l_scapula")

HAnimHumanoid78.addSegments(HAnimSegment1355)
HAnimSegment1356 = x3d.HAnimSegment()
HAnimSegment1356.setContainerFieldOverride("segments")
HAnimSegment1356.setUSE("Joe_r_scapula")

HAnimHumanoid78.addSegments(HAnimSegment1356)
HAnimSegment1357 = x3d.HAnimSegment()
HAnimSegment1357.setContainerFieldOverride("segments")
HAnimSegment1357.setUSE("Joe_l_talus")

HAnimHumanoid78.addSegments(HAnimSegment1357)
HAnimSegment1358 = x3d.HAnimSegment()
HAnimSegment1358.setContainerFieldOverride("segments")
HAnimSegment1358.setUSE("Joe_r_talus")

HAnimHumanoid78.addSegments(HAnimSegment1358)
HAnimSegment1359 = x3d.HAnimSegment()
HAnimSegment1359.setContainerFieldOverride("segments")
HAnimSegment1359.setUSE("Joe_l_tarsal_distal_phalanx_2")

HAnimHumanoid78.addSegments(HAnimSegment1359)
HAnimSegment1360 = x3d.HAnimSegment()
HAnimSegment1360.setContainerFieldOverride("segments")
HAnimSegment1360.setUSE("Joe_r_tarsal_distal_phalanx_2")

HAnimHumanoid78.addSegments(HAnimSegment1360)
HAnimSegment1361 = x3d.HAnimSegment()
HAnimSegment1361.setContainerFieldOverride("segments")
HAnimSegment1361.setUSE("Joe_l_tarsal_proximal_phalanx_2")

HAnimHumanoid78.addSegments(HAnimSegment1361)
HAnimSegment1362 = x3d.HAnimSegment()
HAnimSegment1362.setContainerFieldOverride("segments")
HAnimSegment1362.setUSE("Joe_r_tarsal_proximal_phalanx_2")

HAnimHumanoid78.addSegments(HAnimSegment1362)
HAnimSegment1363 = x3d.HAnimSegment()
HAnimSegment1363.setContainerFieldOverride("segments")
HAnimSegment1363.setUSE("Joe_l_thigh")

HAnimHumanoid78.addSegments(HAnimSegment1363)
HAnimSegment1364 = x3d.HAnimSegment()
HAnimSegment1364.setContainerFieldOverride("segments")
HAnimSegment1364.setUSE("Joe_r_thigh")

HAnimHumanoid78.addSegments(HAnimSegment1364)
HAnimSegment1365 = x3d.HAnimSegment()
HAnimSegment1365.setContainerFieldOverride("segments")
HAnimSegment1365.setUSE("Joe_l_upperarm")

HAnimHumanoid78.addSegments(HAnimSegment1365)
HAnimSegment1366 = x3d.HAnimSegment()
HAnimSegment1366.setContainerFieldOverride("segments")
HAnimSegment1366.setUSE("Joe_r_upperarm")

HAnimHumanoid78.addSegments(HAnimSegment1366)
HAnimSite1367 = x3d.HAnimSite()
HAnimSite1367.setContainerFieldOverride("sites")
HAnimSite1367.setUSE("Joe_cervicale_pt")

HAnimHumanoid78.addSites(HAnimSite1367)
HAnimSite1368 = x3d.HAnimSite()
HAnimSite1368.setContainerFieldOverride("sites")
HAnimSite1368.setUSE("Joe_crotch_pt")

HAnimHumanoid78.addSites(HAnimSite1368)
HAnimSite1369 = x3d.HAnimSite()
HAnimSite1369.setContainerFieldOverride("sites")
HAnimSite1369.setUSE("Joe_floormarker_pt")

HAnimHumanoid78.addSites(HAnimSite1369)
HAnimSite1370 = x3d.HAnimSite()
HAnimSite1370.setContainerFieldOverride("sites")
HAnimSite1370.setUSE("Joe_navel_pt")

HAnimHumanoid78.addSites(HAnimSite1370)
HAnimSite1371 = x3d.HAnimSite()
HAnimSite1371.setContainerFieldOverride("sites")
HAnimSite1371.setUSE("Joe_nuchale_pt")

HAnimHumanoid78.addSites(HAnimSite1371)
HAnimSite1372 = x3d.HAnimSite()
HAnimSite1372.setContainerFieldOverride("sites")
HAnimSite1372.setUSE("Joe_rib10_midspine_pt")

HAnimHumanoid78.addSites(HAnimSite1372)
HAnimSite1373 = x3d.HAnimSite()
HAnimSite1373.setContainerFieldOverride("sites")
HAnimSite1373.setUSE("Joe_sellion_pt")

HAnimHumanoid78.addSites(HAnimSite1373)
HAnimSite1374 = x3d.HAnimSite()
HAnimSite1374.setContainerFieldOverride("sites")
HAnimSite1374.setUSE("Joe_skull_vertex_tip")

HAnimHumanoid78.addSites(HAnimSite1374)
HAnimSite1375 = x3d.HAnimSite()
HAnimSite1375.setContainerFieldOverride("sites")
HAnimSite1375.setUSE("Joe_substernale_pt")

HAnimHumanoid78.addSites(HAnimSite1375)
HAnimSite1376 = x3d.HAnimSite()
HAnimSite1376.setContainerFieldOverride("sites")
HAnimSite1376.setUSE("Joe_supramenton_pt")

HAnimHumanoid78.addSites(HAnimSite1376)
HAnimSite1377 = x3d.HAnimSite()
HAnimSite1377.setContainerFieldOverride("sites")
HAnimSite1377.setUSE("Joe_suprasternale_pt")

HAnimHumanoid78.addSites(HAnimSite1377)
HAnimSite1378 = x3d.HAnimSite()
HAnimSite1378.setContainerFieldOverride("sites")
HAnimSite1378.setUSE("Joe_waist_preferred_posterior_pt")

HAnimHumanoid78.addSites(HAnimSite1378)
HAnimSite1379 = x3d.HAnimSite()
HAnimSite1379.setContainerFieldOverride("sites")
HAnimSite1379.setUSE("Joe_l_acromion_pt")

HAnimHumanoid78.addSites(HAnimSite1379)
HAnimSite1380 = x3d.HAnimSite()
HAnimSite1380.setContainerFieldOverride("sites")
HAnimSite1380.setUSE("Joe_r_acromion_pt")

HAnimHumanoid78.addSites(HAnimSite1380)
HAnimSite1381 = x3d.HAnimSite()
HAnimSite1381.setContainerFieldOverride("sites")
HAnimSite1381.setUSE("Joe_l_asis_pt")

HAnimHumanoid78.addSites(HAnimSite1381)
HAnimSite1382 = x3d.HAnimSite()
HAnimSite1382.setContainerFieldOverride("sites")
HAnimSite1382.setUSE("Joe_r_asis_pt")

HAnimHumanoid78.addSites(HAnimSite1382)
HAnimSite1383 = x3d.HAnimSite()
HAnimSite1383.setContainerFieldOverride("sites")
HAnimSite1383.setUSE("Joe_l_axilla_distal_pt")

HAnimHumanoid78.addSites(HAnimSite1383)
HAnimSite1384 = x3d.HAnimSite()
HAnimSite1384.setContainerFieldOverride("sites")
HAnimSite1384.setUSE("Joe_r_axilla_distal_pt")

HAnimHumanoid78.addSites(HAnimSite1384)
HAnimSite1385 = x3d.HAnimSite()
HAnimSite1385.setContainerFieldOverride("sites")
HAnimSite1385.setUSE("Joe_l_axilla_proximal_pt")

HAnimHumanoid78.addSites(HAnimSite1385)
HAnimSite1386 = x3d.HAnimSite()
HAnimSite1386.setContainerFieldOverride("sites")
HAnimSite1386.setUSE("Joe_r_axilla_proximal_pt")

HAnimHumanoid78.addSites(HAnimSite1386)
HAnimSite1387 = x3d.HAnimSite()
HAnimSite1387.setContainerFieldOverride("sites")
HAnimSite1387.setUSE("Joe_l_calcaneus_posterior_pt")

HAnimHumanoid78.addSites(HAnimSite1387)
HAnimSite1388 = x3d.HAnimSite()
HAnimSite1388.setContainerFieldOverride("sites")
HAnimSite1388.setUSE("Joe_r_calcaneus_posterior_pt")

HAnimHumanoid78.addSites(HAnimSite1388)
HAnimSite1389 = x3d.HAnimSite()
HAnimSite1389.setContainerFieldOverride("sites")
HAnimSite1389.setUSE("Joe_l_carpal_distal_phalanx_1_tip")

HAnimHumanoid78.addSites(HAnimSite1389)
HAnimSite1390 = x3d.HAnimSite()
HAnimSite1390.setContainerFieldOverride("sites")
HAnimSite1390.setUSE("Joe_r_carpal_distal_phalanx_1_tip")

HAnimHumanoid78.addSites(HAnimSite1390)
HAnimSite1391 = x3d.HAnimSite()
HAnimSite1391.setContainerFieldOverride("sites")
HAnimSite1391.setUSE("Joe_l_carpal_distal_phalanx_2_tip")

HAnimHumanoid78.addSites(HAnimSite1391)
HAnimSite1392 = x3d.HAnimSite()
HAnimSite1392.setContainerFieldOverride("sites")
HAnimSite1392.setUSE("Joe_r_carpal_distal_phalanx_2_tip")

HAnimHumanoid78.addSites(HAnimSite1392)
HAnimSite1393 = x3d.HAnimSite()
HAnimSite1393.setContainerFieldOverride("sites")
HAnimSite1393.setUSE("Joe_l_carpal_distal_phalanx_3_tip")

HAnimHumanoid78.addSites(HAnimSite1393)
HAnimSite1394 = x3d.HAnimSite()
HAnimSite1394.setContainerFieldOverride("sites")
HAnimSite1394.setUSE("Joe_r_carpal_distal_phalanx_3_tip")

HAnimHumanoid78.addSites(HAnimSite1394)
HAnimSite1395 = x3d.HAnimSite()
HAnimSite1395.setContainerFieldOverride("sites")
HAnimSite1395.setUSE("Joe_l_carpal_distal_phalanx_4_tip")

HAnimHumanoid78.addSites(HAnimSite1395)
HAnimSite1396 = x3d.HAnimSite()
HAnimSite1396.setContainerFieldOverride("sites")
HAnimSite1396.setUSE("Joe_r_carpal_distal_phalanx_4_tip")

HAnimHumanoid78.addSites(HAnimSite1396)
HAnimSite1397 = x3d.HAnimSite()
HAnimSite1397.setContainerFieldOverride("sites")
HAnimSite1397.setUSE("Joe_l_carpal_distal_phalanx_5_tip")

HAnimHumanoid78.addSites(HAnimSite1397)
HAnimSite1398 = x3d.HAnimSite()
HAnimSite1398.setContainerFieldOverride("sites")
HAnimSite1398.setUSE("Joe_r_carpal_distal_phalanx_5_tip")

HAnimHumanoid78.addSites(HAnimSite1398)
HAnimSite1399 = x3d.HAnimSite()
HAnimSite1399.setContainerFieldOverride("sites")
HAnimSite1399.setUSE("Joe_l_clavicle_pt")

HAnimHumanoid78.addSites(HAnimSite1399)
HAnimSite1400 = x3d.HAnimSite()
HAnimSite1400.setContainerFieldOverride("sites")
HAnimSite1400.setUSE("Joe_r_clavicle_pt")

HAnimHumanoid78.addSites(HAnimSite1400)
HAnimSite1401 = x3d.HAnimSite()
HAnimSite1401.setContainerFieldOverride("sites")
HAnimSite1401.setUSE("Joe_l_dactylion_pt")

HAnimHumanoid78.addSites(HAnimSite1401)
HAnimSite1402 = x3d.HAnimSite()
HAnimSite1402.setContainerFieldOverride("sites")
HAnimSite1402.setUSE("Joe_r_dactylion_pt")

HAnimHumanoid78.addSites(HAnimSite1402)
HAnimSite1403 = x3d.HAnimSite()
HAnimSite1403.setContainerFieldOverride("sites")
HAnimSite1403.setUSE("Joe_l_femoral_lateral_epicondyle_pt")

HAnimHumanoid78.addSites(HAnimSite1403)
HAnimSite1404 = x3d.HAnimSite()
HAnimSite1404.setContainerFieldOverride("sites")
HAnimSite1404.setUSE("Joe_r_femoral_lateral_epicondyle_pt")

HAnimHumanoid78.addSites(HAnimSite1404)
HAnimSite1405 = x3d.HAnimSite()
HAnimSite1405.setContainerFieldOverride("sites")
HAnimSite1405.setUSE("Joe_l_femoral_medial_epicondyle_pt")

HAnimHumanoid78.addSites(HAnimSite1405)
HAnimSite1406 = x3d.HAnimSite()
HAnimSite1406.setContainerFieldOverride("sites")
HAnimSite1406.setUSE("Joe_r_femoral_medial_epicondyle_pt")

HAnimHumanoid78.addSites(HAnimSite1406)
HAnimSite1407 = x3d.HAnimSite()
HAnimSite1407.setContainerFieldOverride("sites")
HAnimSite1407.setUSE("Joe_l_gonion_pt")

HAnimHumanoid78.addSites(HAnimSite1407)
HAnimSite1408 = x3d.HAnimSite()
HAnimSite1408.setContainerFieldOverride("sites")
HAnimSite1408.setUSE("Joe_r_gonion_pt")

HAnimHumanoid78.addSites(HAnimSite1408)
HAnimSite1409 = x3d.HAnimSite()
HAnimSite1409.setContainerFieldOverride("sites")
HAnimSite1409.setUSE("Joe_l_humeral_lateral_epicondyle_pt")

HAnimHumanoid78.addSites(HAnimSite1409)
HAnimSite1410 = x3d.HAnimSite()
HAnimSite1410.setContainerFieldOverride("sites")
HAnimSite1410.setUSE("Joe_r_humeral_lateral_epicondyle_pt")

HAnimHumanoid78.addSites(HAnimSite1410)
HAnimSite1411 = x3d.HAnimSite()
HAnimSite1411.setContainerFieldOverride("sites")
HAnimSite1411.setUSE("Joe_l_humeral_medial_epicondyle_pt")

HAnimHumanoid78.addSites(HAnimSite1411)
HAnimSite1412 = x3d.HAnimSite()
HAnimSite1412.setContainerFieldOverride("sites")
HAnimSite1412.setUSE("Joe_r_humeral_medial_epicondyle_pt")

HAnimHumanoid78.addSites(HAnimSite1412)
HAnimSite1413 = x3d.HAnimSite()
HAnimSite1413.setContainerFieldOverride("sites")
HAnimSite1413.setUSE("Joe_l_iliocristale_pt")

HAnimHumanoid78.addSites(HAnimSite1413)
HAnimSite1414 = x3d.HAnimSite()
HAnimSite1414.setContainerFieldOverride("sites")
HAnimSite1414.setUSE("Joe_r_iliocristale_pt")

HAnimHumanoid78.addSites(HAnimSite1414)
HAnimSite1415 = x3d.HAnimSite()
HAnimSite1415.setContainerFieldOverride("sites")
HAnimSite1415.setUSE("Joe_l_infraorbitale_pt")

HAnimHumanoid78.addSites(HAnimSite1415)
HAnimSite1416 = x3d.HAnimSite()
HAnimSite1416.setContainerFieldOverride("sites")
HAnimSite1416.setUSE("Joe_r_infraorbitale_pt")

HAnimHumanoid78.addSites(HAnimSite1416)
HAnimSite1417 = x3d.HAnimSite()
HAnimSite1417.setContainerFieldOverride("sites")
HAnimSite1417.setUSE("Joe_l_knee_crease_pt")

HAnimHumanoid78.addSites(HAnimSite1417)
HAnimSite1418 = x3d.HAnimSite()
HAnimSite1418.setContainerFieldOverride("sites")
HAnimSite1418.setUSE("Joe_r_knee_crease_pt")

HAnimHumanoid78.addSites(HAnimSite1418)
HAnimSite1419 = x3d.HAnimSite()
HAnimSite1419.setContainerFieldOverride("sites")
HAnimSite1419.setUSE("Joe_l_lateral_malleolus_pt")

HAnimHumanoid78.addSites(HAnimSite1419)
HAnimSite1420 = x3d.HAnimSite()
HAnimSite1420.setContainerFieldOverride("sites")
HAnimSite1420.setUSE("Joe_r_lateral_malleolus_pt")

HAnimHumanoid78.addSites(HAnimSite1420)
HAnimSite1421 = x3d.HAnimSite()
HAnimSite1421.setContainerFieldOverride("sites")
HAnimSite1421.setUSE("Joe_l_medial_malleolus_pt")

HAnimHumanoid78.addSites(HAnimSite1421)
HAnimSite1422 = x3d.HAnimSite()
HAnimSite1422.setContainerFieldOverride("sites")
HAnimSite1422.setUSE("Joe_r_medial_malleolus_pt")

HAnimHumanoid78.addSites(HAnimSite1422)
HAnimSite1423 = x3d.HAnimSite()
HAnimSite1423.setContainerFieldOverride("sites")
HAnimSite1423.setUSE("Joe_l_metacarpal_phalanx_2_pt")

HAnimHumanoid78.addSites(HAnimSite1423)
HAnimSite1424 = x3d.HAnimSite()
HAnimSite1424.setContainerFieldOverride("sites")
HAnimSite1424.setUSE("Joe_r_metacarpal_phalanx_2_pt")

HAnimHumanoid78.addSites(HAnimSite1424)
HAnimSite1425 = x3d.HAnimSite()
HAnimSite1425.setContainerFieldOverride("sites")
HAnimSite1425.setUSE("Joe_l_metacarpal_phalanx_5_pt")

HAnimHumanoid78.addSites(HAnimSite1425)
HAnimSite1426 = x3d.HAnimSite()
HAnimSite1426.setContainerFieldOverride("sites")
HAnimSite1426.setUSE("Joe_r_metacarpal_phalanx_5_pt")

HAnimHumanoid78.addSites(HAnimSite1426)
HAnimSite1427 = x3d.HAnimSite()
HAnimSite1427.setContainerFieldOverride("sites")
HAnimSite1427.setUSE("Joe_l_metatarsal_phalanx_1_pt")

HAnimHumanoid78.addSites(HAnimSite1427)
HAnimSite1428 = x3d.HAnimSite()
HAnimSite1428.setContainerFieldOverride("sites")
HAnimSite1428.setUSE("Joe_r_metatarsal_phalanx_1_pt")

HAnimHumanoid78.addSites(HAnimSite1428)
HAnimSite1429 = x3d.HAnimSite()
HAnimSite1429.setContainerFieldOverride("sites")
HAnimSite1429.setUSE("Joe_l_metatarsal_phalanx_5_pt")

HAnimHumanoid78.addSites(HAnimSite1429)
HAnimSite1430 = x3d.HAnimSite()
HAnimSite1430.setContainerFieldOverride("sites")
HAnimSite1430.setUSE("Joe_r_metatarsal_phalanx_5_pt")

HAnimHumanoid78.addSites(HAnimSite1430)
HAnimSite1431 = x3d.HAnimSite()
HAnimSite1431.setContainerFieldOverride("sites")
HAnimSite1431.setUSE("Joe_l_neck_base_pt")

HAnimHumanoid78.addSites(HAnimSite1431)
HAnimSite1432 = x3d.HAnimSite()
HAnimSite1432.setContainerFieldOverride("sites")
HAnimSite1432.setUSE("Joe_r_neck_base_pt")

HAnimHumanoid78.addSites(HAnimSite1432)
HAnimSite1433 = x3d.HAnimSite()
HAnimSite1433.setContainerFieldOverride("sites")
HAnimSite1433.setUSE("Joe_l_olecranon_pt")

HAnimHumanoid78.addSites(HAnimSite1433)
HAnimSite1434 = x3d.HAnimSite()
HAnimSite1434.setContainerFieldOverride("sites")
HAnimSite1434.setUSE("Joe_r_olecranon_pt")

HAnimHumanoid78.addSites(HAnimSite1434)
HAnimSite1435 = x3d.HAnimSite()
HAnimSite1435.setContainerFieldOverride("sites")
HAnimSite1435.setUSE("Joe_l_psis_pt")

HAnimHumanoid78.addSites(HAnimSite1435)
HAnimSite1436 = x3d.HAnimSite()
HAnimSite1436.setContainerFieldOverride("sites")
HAnimSite1436.setUSE("Joe_r_psis_pt")

HAnimHumanoid78.addSites(HAnimSite1436)
HAnimSite1437 = x3d.HAnimSite()
HAnimSite1437.setContainerFieldOverride("sites")
HAnimSite1437.setUSE("Joe_l_radial_styloid_pt")

HAnimHumanoid78.addSites(HAnimSite1437)
HAnimSite1438 = x3d.HAnimSite()
HAnimSite1438.setContainerFieldOverride("sites")
HAnimSite1438.setUSE("Joe_r_radial_styloid_pt")

HAnimHumanoid78.addSites(HAnimSite1438)
HAnimSite1439 = x3d.HAnimSite()
HAnimSite1439.setContainerFieldOverride("sites")
HAnimSite1439.setUSE("Joe_l_radiale_pt")

HAnimHumanoid78.addSites(HAnimSite1439)
HAnimSite1440 = x3d.HAnimSite()
HAnimSite1440.setContainerFieldOverride("sites")
HAnimSite1440.setUSE("Joe_r_radiale_pt")

HAnimHumanoid78.addSites(HAnimSite1440)
HAnimSite1441 = x3d.HAnimSite()
HAnimSite1441.setContainerFieldOverride("sites")
HAnimSite1441.setUSE("Joe_l_rib10_pt")

HAnimHumanoid78.addSites(HAnimSite1441)
HAnimSite1442 = x3d.HAnimSite()
HAnimSite1442.setContainerFieldOverride("sites")
HAnimSite1442.setUSE("Joe_r_rib10_pt")

HAnimHumanoid78.addSites(HAnimSite1442)
HAnimSite1443 = x3d.HAnimSite()
HAnimSite1443.setContainerFieldOverride("sites")
HAnimSite1443.setUSE("Joe_l_sphyrion_pt")

HAnimHumanoid78.addSites(HAnimSite1443)
HAnimSite1444 = x3d.HAnimSite()
HAnimSite1444.setContainerFieldOverride("sites")
HAnimSite1444.setUSE("Joe_r_sphyrion_pt")

HAnimHumanoid78.addSites(HAnimSite1444)
HAnimSite1445 = x3d.HAnimSite()
HAnimSite1445.setContainerFieldOverride("sites")
HAnimSite1445.setUSE("Joe_l_tarsal_distal_phalanx_2_pt")

HAnimHumanoid78.addSites(HAnimSite1445)
HAnimSite1446 = x3d.HAnimSite()
HAnimSite1446.setContainerFieldOverride("sites")
HAnimSite1446.setUSE("Joe_r_tarsal_distal_phalanx_2_pt")

HAnimHumanoid78.addSites(HAnimSite1446)
HAnimSite1447 = x3d.HAnimSite()
HAnimSite1447.setContainerFieldOverride("sites")
HAnimSite1447.setUSE("Joe_l_thelion_pt")

HAnimHumanoid78.addSites(HAnimSite1447)
HAnimSite1448 = x3d.HAnimSite()
HAnimSite1448.setContainerFieldOverride("sites")
HAnimSite1448.setUSE("Joe_r_thelion_pt")

HAnimHumanoid78.addSites(HAnimSite1448)
HAnimSite1449 = x3d.HAnimSite()
HAnimSite1449.setContainerFieldOverride("sites")
HAnimSite1449.setUSE("Joe_l_tragion_pt")

HAnimHumanoid78.addSites(HAnimSite1449)
HAnimSite1450 = x3d.HAnimSite()
HAnimSite1450.setContainerFieldOverride("sites")
HAnimSite1450.setUSE("Joe_r_tragion_pt")

HAnimHumanoid78.addSites(HAnimSite1450)
HAnimSite1451 = x3d.HAnimSite()
HAnimSite1451.setContainerFieldOverride("sites")
HAnimSite1451.setUSE("Joe_l_trochanterion_pt")

HAnimHumanoid78.addSites(HAnimSite1451)
HAnimSite1452 = x3d.HAnimSite()
HAnimSite1452.setContainerFieldOverride("sites")
HAnimSite1452.setUSE("Joe_r_trochanterion_pt")

HAnimHumanoid78.addSites(HAnimSite1452)
HAnimSite1453 = x3d.HAnimSite()
HAnimSite1453.setContainerFieldOverride("sites")
HAnimSite1453.setUSE("Joe_l_ulnar_styloid_pt")

HAnimHumanoid78.addSites(HAnimSite1453)
HAnimSite1454 = x3d.HAnimSite()
HAnimSite1454.setContainerFieldOverride("sites")
HAnimSite1454.setUSE("Joe_r_ulnar_styloid_pt")

HAnimHumanoid78.addSites(HAnimSite1454)

Group77.addChild(HAnimHumanoid78)

Group76.addChild(Group77)

Scene33.addChild(Group76)
TimeSensor1455 = x3d.TimeSensor()
TimeSensor1455.setDEF("Time1")
TimeSensor1455.setCycleInterval(2.86)
TimeSensor1455.setLoop(True)

Scene33.addChild(TimeSensor1455)
TimeSensor1456 = x3d.TimeSensor()
TimeSensor1456.setDEF("Time2")
TimeSensor1456.setCycleInterval(5.72)
TimeSensor1456.setLoop(True)

Scene33.addChild(TimeSensor1456)
TimeSensor1457 = x3d.TimeSensor()
TimeSensor1457.setDEF("Time3")
TimeSensor1457.setCycleInterval(5.8)
TimeSensor1457.setLoop(True)

Scene33.addChild(TimeSensor1457)
OrientationInterpolator1458 = x3d.OrientationInterpolator()
OrientationInterpolator1458.setDEF("Pitch")
OrientationInterpolator1458.setKey(x3d.doubleToFloat([0,0.2,0.4,0.6,0.8,1]))
OrientationInterpolator1458.setKeyValue(x3d.doubleToFloat([1,0,0,0,1,0,0,1.256,1,0,0,2.512,1,0,0,3.768,1,0,0,5.024,1,0,0,6.28]))

Scene33.addChild(OrientationInterpolator1458)
OrientationInterpolator1459 = x3d.OrientationInterpolator()
OrientationInterpolator1459.setDEF("Yaw")
OrientationInterpolator1459.setKey(x3d.doubleToFloat([0,0.2,0.4,0.6,0.8,1]))
OrientationInterpolator1459.setKeyValue(x3d.doubleToFloat([0,1,0,0,0,1,0,1.256,0,1,0,2.512,0,1,0,3.768,0,1,0,5.024,0,1,0,6.28]))

Scene33.addChild(OrientationInterpolator1459)
OrientationInterpolator1460 = x3d.OrientationInterpolator()
OrientationInterpolator1460.setDEF("Roll")
OrientationInterpolator1460.setKey(x3d.doubleToFloat([0,0.2,0.4,0.6,0.8,1]))
OrientationInterpolator1460.setKeyValue(x3d.doubleToFloat([0,0,1,0,0,0,1,1.256,0,0,1,2.512,0,0,1,3.768,0,0,1,5.024,0,0,1,6.28]))

Scene33.addChild(OrientationInterpolator1460)
OrientationInterpolator1461 = x3d.OrientationInterpolator()
OrientationInterpolator1461.setDEF("vc6Yaw")
OrientationInterpolator1461.setKey(x3d.doubleToFloat([0,0.2,0.4,0.5,0.6,0.7,0.8,0.9,1]))
OrientationInterpolator1461.setKeyValue(x3d.doubleToFloat([0,1,0,0,0,1,0,0.7,0,1,0,0,0,1,0,0,-1,0,0,0.5,-0.4,-1,0,0.7,-0.4,-1,0,0.4,0,1,0,0,0,1,0,0]))

Scene33.addChild(OrientationInterpolator1461)
ROUTE1462 = x3d.ROUTE()
ROUTE1462.setFromField("fraction_changed")
ROUTE1462.setFromNode("Time2")
ROUTE1462.setToField("set_fraction")
ROUTE1462.setToNode("vc6Yaw")

Scene33.addChild(ROUTE1462)
ROUTE1463 = x3d.ROUTE()
ROUTE1463.setFromField("value_changed")
ROUTE1463.setFromNode("vc6Yaw")
ROUTE1463.setToField("set_rotation")
ROUTE1463.setToNode("Joe_vc6")

Scene33.addChild(ROUTE1463)
OrientationInterpolator1464 = x3d.OrientationInterpolator()
OrientationInterpolator1464.setDEF("EyeballsRotation")
OrientationInterpolator1464.setKey(x3d.doubleToFloat([0,0.1,0.2,0.3,0.4,0.5,0.6,0.7,0.8,1]))
OrientationInterpolator1464.setKeyValue(x3d.doubleToFloat([0,0,1,0,0,0,1,0,0.2,0.2,0.2,0.2,-0.2,0.2,0.2,0.2,-0.2,-0.2,0.2,0.2,0.2,-0.2,0.2,0.2,-0.2,0.2,-0.2,0.2,-0.2,0.2,-0.2,0.2,0,0,1,0,0,0,1,0]))

Scene33.addChild(OrientationInterpolator1464)
ROUTE1465 = x3d.ROUTE()
ROUTE1465.setFromField("fraction_changed")
ROUTE1465.setFromNode("Time3")
ROUTE1465.setToField("set_fraction")
ROUTE1465.setToNode("EyeballsRotation")

Scene33.addChild(ROUTE1465)
ROUTE1466 = x3d.ROUTE()
ROUTE1466.setFromField("value_changed")
ROUTE1466.setFromNode("EyeballsRotation")
ROUTE1466.setToField("set_rotation")
ROUTE1466.setToNode("Joe_r_eyeball_joint")

Scene33.addChild(ROUTE1466)
ROUTE1467 = x3d.ROUTE()
ROUTE1467.setFromField("value_changed")
ROUTE1467.setFromNode("EyeballsRotation")
ROUTE1467.setToField("set_rotation")
ROUTE1467.setToNode("Joe_l_eyeball_joint")

Scene33.addChild(ROUTE1467)
OrientationInterpolator1468 = x3d.OrientationInterpolator()
OrientationInterpolator1468.setDEF("r_sternoclavicularRelax")
OrientationInterpolator1468.setKey(x3d.doubleToFloat([0,0.2,0.4,0.6,0.8,1]))
OrientationInterpolator1468.setKeyValue(x3d.doubleToFloat([0,0,1,0,0,0,1,0,0.2,-1,0,0.11,0.2,-1,0,0.11,0.1,-1,0,0.1,0,0,1,0]))

Scene33.addChild(OrientationInterpolator1468)
OrientationInterpolator1469 = x3d.OrientationInterpolator()
OrientationInterpolator1469.setDEF("r_acromioclavicularRelax")
OrientationInterpolator1469.setKey(x3d.doubleToFloat([0,0.2,0.4,0.6,0.8,1]))
OrientationInterpolator1469.setKeyValue(x3d.doubleToFloat([0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]))

Scene33.addChild(OrientationInterpolator1469)
OrientationInterpolator1470 = x3d.OrientationInterpolator()
OrientationInterpolator1470.setDEF("r_shoulderRelax")
OrientationInterpolator1470.setKey(x3d.doubleToFloat([0,0.1,0.3,0.6,0.8,1]))
OrientationInterpolator1470.setKeyValue(x3d.doubleToFloat([0,0,1,0,0,0,1,0,0.4,-0.7,-0.55,0.35,0.4,-0.7,-0.55,0.35,0.4,-0.7,-0.55,0.35,0,0,1,0]))

Scene33.addChild(OrientationInterpolator1470)
OrientationInterpolator1471 = x3d.OrientationInterpolator()
OrientationInterpolator1471.setDEF("r_elbowRelax")
OrientationInterpolator1471.setKey(x3d.doubleToFloat([0,0.15,0.4,0.6,0.9,1]))
OrientationInterpolator1471.setKeyValue(x3d.doubleToFloat([0,0,1,0,0,0,1,0,-0.2,0,0.01,0.5,-0.2,0,0.01,0.5,-0.2,0,0.01,0.5,0,0,1,0]))

Scene33.addChild(OrientationInterpolator1471)
OrientationInterpolator1472 = x3d.OrientationInterpolator()
OrientationInterpolator1472.setDEF("r_wristRelax")
OrientationInterpolator1472.setKey(x3d.doubleToFloat([0,0.2,0.4,0.6,0.9,1]))
OrientationInterpolator1472.setKeyValue(x3d.doubleToFloat([0,0,1,0,0,0,1,0,0,0.1,-0.09,0.25,0,0.1,-0.09,0.25,0,0.1,-0.09,0.25,0,0,1,0]))

Scene33.addChild(OrientationInterpolator1472)
OrientationInterpolator1473 = x3d.OrientationInterpolator()
OrientationInterpolator1473.setDEF("r_index0Relax")
OrientationInterpolator1473.setKey(x3d.doubleToFloat([0,0.1,0.3,0.6,0.8,1]))
OrientationInterpolator1473.setKeyValue(x3d.doubleToFloat([0,0,1,0,0,0,1,0,-0.25,0.25,-1,0.125,-0.25,0.25,-1,0.125,-0.25,0.25,-1,0.125,0,0,1,0]))

Scene33.addChild(OrientationInterpolator1473)
OrientationInterpolator1474 = x3d.OrientationInterpolator()
OrientationInterpolator1474.setDEF("r_index1Relax")
OrientationInterpolator1474.setKey(x3d.doubleToFloat([0,0.1,0.2,0.6,0.8,1]))
OrientationInterpolator1474.setKeyValue(x3d.doubleToFloat([0,0,1,0,0,0,1,0,-0.135,-0.135,1,0.357,-0.159,-0.153,1,0.355,-0.159,-0.153,1,0.357,0,0,1,0]))

Scene33.addChild(OrientationInterpolator1474)
OrientationInterpolator1475 = x3d.OrientationInterpolator()
OrientationInterpolator1475.setDEF("r_middle0Relax")
OrientationInterpolator1475.setKey(x3d.doubleToFloat([0,0.1,0.3,0.6,0.8,1]))
OrientationInterpolator1475.setKeyValue(x3d.doubleToFloat([0,0,1,0,0,0,1,0,0,0,-1,0.14,0,0,-1,0.14,0,0,-1,0.14,0,0,1,0]))

Scene33.addChild(OrientationInterpolator1475)
OrientationInterpolator1476 = x3d.OrientationInterpolator()
OrientationInterpolator1476.setDEF("r_middle1Relax")
OrientationInterpolator1476.setKey(x3d.doubleToFloat([0,0.1,0.2,0.3,0.4,0.5,0.6,0.7,0.8,0.9,1]))
OrientationInterpolator1476.setKeyValue(x3d.doubleToFloat([0,0,1,0,0,0,1,0,0,0,0.3,0.257,0,0,0.3,0.37,0,0,0.3,0.39,0,0,0.3,0.31,0,0,0.3,0.32,0,0,0.3,0.34,0,0,0.3,0.28,0,0,1,0,0,0,1,0]))

Scene33.addChild(OrientationInterpolator1476)
OrientationInterpolator1477 = x3d.OrientationInterpolator()
OrientationInterpolator1477.setDEF("r_ring0Relax")
OrientationInterpolator1477.setKey(x3d.doubleToFloat([0,0.1,0.3,0.6,0.8,1]))
OrientationInterpolator1477.setKeyValue(x3d.doubleToFloat([0,0,1,0,0,0,1,0,0.25,0.25,-1,0.1,0.25,0.25,-1,0.1,0.25,0.25,-1,0.1,0,0,1,0]))

Scene33.addChild(OrientationInterpolator1477)
OrientationInterpolator1478 = x3d.OrientationInterpolator()
OrientationInterpolator1478.setDEF("r_ring1Relax")
OrientationInterpolator1478.setKey(x3d.doubleToFloat([0,0.1,0.4,0.5,0.8,1]))
OrientationInterpolator1478.setKeyValue(x3d.doubleToFloat([0,0,1,0,0,0,1,0,0.135,0.135,1,0.27,0.135,0.135,1,0.27,0.135,0.15,1,0.27,0,0,1,0]))

Scene33.addChild(OrientationInterpolator1478)
OrientationInterpolator1479 = x3d.OrientationInterpolator()
OrientationInterpolator1479.setDEF("r_pinky0Relax")
OrientationInterpolator1479.setKey(x3d.doubleToFloat([0,0.1,0.3,0.5,0.8,1]))
OrientationInterpolator1479.setKeyValue(x3d.doubleToFloat([0,0,1,0,0,0,1,0,0.35,0.35,-0.7,0.12,0.35,0.35,-0.9,0.12,0.35,0.35,-0.7,0.12,0,0,1,0]))

Scene33.addChild(OrientationInterpolator1479)
OrientationInterpolator1480 = x3d.OrientationInterpolator()
OrientationInterpolator1480.setDEF("r_pinky1Relax")
OrientationInterpolator1480.setKey(x3d.doubleToFloat([0,0.1,0.4,0.6,0.8,1]))
OrientationInterpolator1480.setKeyValue(x3d.doubleToFloat([0,0,1,0,0,0,1,0,0.2,0.25,1,0.27,0.2,0.22,1,0.27,0.22,0.2,1,0.27,0,0,1,0]))

Scene33.addChild(OrientationInterpolator1480)
OrientationInterpolator1481 = x3d.OrientationInterpolator()
OrientationInterpolator1481.setDEF("r_thumb1Relax")
OrientationInterpolator1481.setKey(x3d.doubleToFloat([0,0.03,0.08,0.2,0.3,0.4,0.5,0.8,0.95,1]))
OrientationInterpolator1481.setKeyValue(x3d.doubleToFloat([0,0,1,0,0,0,1,0,0,-1,1,1,0.5,-0.16,0.16,0.785,0.5,-0.16,0.16,0.785,1,1,1,0.75,1,1,1,0.75,1,1,1,0.75,1,1,1,0.75,0,0,1,0]))

Scene33.addChild(OrientationInterpolator1481)
OrientationInterpolator1482 = x3d.OrientationInterpolator()
OrientationInterpolator1482.setDEF("r_thumb2Relax")
OrientationInterpolator1482.setKey(x3d.doubleToFloat([0,0.2,0.5,0.6,0.7,0.8,1]))
OrientationInterpolator1482.setKeyValue(x3d.doubleToFloat([0,0,1,0,0,0,1,0,0,0,1,0,1,0,0,0.45,1,0,0,0.45,1,0,0,0.45,0,0,1,0]))

Scene33.addChild(OrientationInterpolator1482)
OrientationInterpolator1483 = x3d.OrientationInterpolator()
OrientationInterpolator1483.setDEF("r_thumb3Relax")
OrientationInterpolator1483.setKey(x3d.doubleToFloat([0,0.2,0.5,0.6,0.7,0.8,1]))
OrientationInterpolator1483.setKeyValue(x3d.doubleToFloat([0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,1,0,0,0.45,0,0,1,0,0,0,1,0]))

Scene33.addChild(OrientationInterpolator1483)
OrientationInterpolator1484 = x3d.OrientationInterpolator()
OrientationInterpolator1484.setDEF("r_fingers2Relax")
OrientationInterpolator1484.setKey(x3d.doubleToFloat([0,0.1,0.2,0.3,0.4,0.5,0.6,0.7,0.8,0.9,1]))
OrientationInterpolator1484.setKeyValue(x3d.doubleToFloat([0,0,1,0,0,0,1,0,0,0,1,0.43,0,0,1,0.44,0,0,1,0.46,0,0,1,0.44,0,0,1,0.245,0,0,1,0.24,0,0,1,0.21,0,0,1,0.24,0,0,1,0]))

Scene33.addChild(OrientationInterpolator1484)
OrientationInterpolator1485 = x3d.OrientationInterpolator()
OrientationInterpolator1485.setDEF("r_fingers3Relax")
OrientationInterpolator1485.setKey(x3d.doubleToFloat([0,0.1,0.2,0.3,0.4,0.5,0.6,0.7,0.8,0.9,1]))
OrientationInterpolator1485.setKeyValue(x3d.doubleToFloat([0,0,1,0,0,0,1,0,0,0,1,0.37,0,0,1,0.38,0,0,1,0.39,0,0,1,0.38,0,0,1,0.27,0,0,1,0.28,0,0,1,0.27,0,0,1,0.28,0,0,1,0]))

Scene33.addChild(OrientationInterpolator1485)
ROUTE1486 = x3d.ROUTE()
ROUTE1486.setFromField("value_changed")
ROUTE1486.setFromNode("r_sternoclavicularRelax")
ROUTE1486.setToField("set_rotation")
ROUTE1486.setToNode("Joe_r_sternoclavicular")

Scene33.addChild(ROUTE1486)
ROUTE1487 = x3d.ROUTE()
ROUTE1487.setFromField("value_changed")
ROUTE1487.setFromNode("r_acromioclavicularRelax")
ROUTE1487.setToField("set_rotation")
ROUTE1487.setToNode("Joe_r_acromioclavicular")

Scene33.addChild(ROUTE1487)
ROUTE1488 = x3d.ROUTE()
ROUTE1488.setFromField("value_changed")
ROUTE1488.setFromNode("r_shoulderRelax")
ROUTE1488.setToField("set_rotation")
ROUTE1488.setToNode("Joe_r_shoulder")

Scene33.addChild(ROUTE1488)
ROUTE1489 = x3d.ROUTE()
ROUTE1489.setFromField("value_changed")
ROUTE1489.setFromNode("r_elbowRelax")
ROUTE1489.setToField("set_rotation")
ROUTE1489.setToNode("Joe_r_elbow")

Scene33.addChild(ROUTE1489)
ROUTE1490 = x3d.ROUTE()
ROUTE1490.setFromField("value_changed")
ROUTE1490.setFromNode("r_wristRelax")
ROUTE1490.setToField("set_rotation")
ROUTE1490.setToNode("Joe_r_radiocarpal")

Scene33.addChild(ROUTE1490)
ROUTE1491 = x3d.ROUTE()
ROUTE1491.setFromField("value_changed")
ROUTE1491.setFromNode("r_thumb1Relax")
ROUTE1491.setToField("set_rotation")
ROUTE1491.setToNode("Joe_r_carpometacarpal_1")

Scene33.addChild(ROUTE1491)
ROUTE1492 = x3d.ROUTE()
ROUTE1492.setFromField("value_changed")
ROUTE1492.setFromNode("r_thumb2Relax")
ROUTE1492.setToField("set_rotation")
ROUTE1492.setToNode("Joe_r_metacarpophalangeal_1")

Scene33.addChild(ROUTE1492)
ROUTE1493 = x3d.ROUTE()
ROUTE1493.setFromField("value_changed")
ROUTE1493.setFromNode("r_thumb3Relax")
ROUTE1493.setToField("set_rotation")
ROUTE1493.setToNode("Joe_r_carpal_interphalangeal_1")

Scene33.addChild(ROUTE1493)
ROUTE1494 = x3d.ROUTE()
ROUTE1494.setFromField("value_changed")
ROUTE1494.setFromNode("r_index0Relax")
ROUTE1494.setToField("set_rotation")
ROUTE1494.setToNode("Joe_r_carpometacarpal_2")

Scene33.addChild(ROUTE1494)
ROUTE1495 = x3d.ROUTE()
ROUTE1495.setFromField("value_changed")
ROUTE1495.setFromNode("r_index1Relax")
ROUTE1495.setToField("set_rotation")
ROUTE1495.setToNode("Joe_r_metacarpophalangeal_2")

Scene33.addChild(ROUTE1495)
ROUTE1496 = x3d.ROUTE()
ROUTE1496.setFromField("value_changed")
ROUTE1496.setFromNode("r_fingers2Relax")
ROUTE1496.setToField("set_rotation")
ROUTE1496.setToNode("Joe_r_carpal_proximal_interphalangeal_2")

Scene33.addChild(ROUTE1496)
ROUTE1497 = x3d.ROUTE()
ROUTE1497.setFromField("value_changed")
ROUTE1497.setFromNode("r_fingers3Relax")
ROUTE1497.setToField("set_rotation")
ROUTE1497.setToNode("Joe_r_carpal_distal_interphalangeal_2")

Scene33.addChild(ROUTE1497)
ROUTE1498 = x3d.ROUTE()
ROUTE1498.setFromField("value_changed")
ROUTE1498.setFromNode("r_middle0Relax")
ROUTE1498.setToField("set_rotation")
ROUTE1498.setToNode("Joe_r_carpometacarpal_3")

Scene33.addChild(ROUTE1498)
ROUTE1499 = x3d.ROUTE()
ROUTE1499.setFromField("value_changed")
ROUTE1499.setFromNode("r_middle1Relax")
ROUTE1499.setToField("set_rotation")
ROUTE1499.setToNode("Joe_r_metacarpophalangeal_3")

Scene33.addChild(ROUTE1499)
ROUTE1500 = x3d.ROUTE()
ROUTE1500.setFromField("value_changed")
ROUTE1500.setFromNode("r_fingers2Relax")
ROUTE1500.setToField("set_rotation")
ROUTE1500.setToNode("Joe_r_carpal_proximal_interphalangeal_3")

Scene33.addChild(ROUTE1500)
ROUTE1501 = x3d.ROUTE()
ROUTE1501.setFromField("value_changed")
ROUTE1501.setFromNode("r_fingers3Relax")
ROUTE1501.setToField("set_rotation")
ROUTE1501.setToNode("Joe_r_carpal_distal_interphalangeal_3")

Scene33.addChild(ROUTE1501)
ROUTE1502 = x3d.ROUTE()
ROUTE1502.setFromField("value_changed")
ROUTE1502.setFromNode("r_ring0Relax")
ROUTE1502.setToField("set_rotation")
ROUTE1502.setToNode("Joe_r_carpometacarpal_4")

Scene33.addChild(ROUTE1502)
ROUTE1503 = x3d.ROUTE()
ROUTE1503.setFromField("value_changed")
ROUTE1503.setFromNode("r_ring1Relax")
ROUTE1503.setToField("set_rotation")
ROUTE1503.setToNode("Joe_r_metacarpophalangeal_4")

Scene33.addChild(ROUTE1503)
ROUTE1504 = x3d.ROUTE()
ROUTE1504.setFromField("value_changed")
ROUTE1504.setFromNode("r_fingers2Relax")
ROUTE1504.setToField("set_rotation")
ROUTE1504.setToNode("Joe_r_carpal_proximal_interphalangeal_4")

Scene33.addChild(ROUTE1504)
ROUTE1505 = x3d.ROUTE()
ROUTE1505.setFromField("value_changed")
ROUTE1505.setFromNode("r_fingers3Relax")
ROUTE1505.setToField("set_rotation")
ROUTE1505.setToNode("Joe_r_carpal_distal_interphalangeal_4")

Scene33.addChild(ROUTE1505)
ROUTE1506 = x3d.ROUTE()
ROUTE1506.setFromField("value_changed")
ROUTE1506.setFromNode("r_pinky0Relax")
ROUTE1506.setToField("set_rotation")
ROUTE1506.setToNode("Joe_r_carpometacarpal_5")

Scene33.addChild(ROUTE1506)
ROUTE1507 = x3d.ROUTE()
ROUTE1507.setFromField("value_changed")
ROUTE1507.setFromNode("r_pinky1Relax")
ROUTE1507.setToField("set_rotation")
ROUTE1507.setToNode("Joe_r_metacarpophalangeal_5")

Scene33.addChild(ROUTE1507)
ROUTE1508 = x3d.ROUTE()
ROUTE1508.setFromField("value_changed")
ROUTE1508.setFromNode("r_fingers2Relax")
ROUTE1508.setToField("set_rotation")
ROUTE1508.setToNode("Joe_r_carpal_proximal_interphalangeal_5")

Scene33.addChild(ROUTE1508)
ROUTE1509 = x3d.ROUTE()
ROUTE1509.setFromField("value_changed")
ROUTE1509.setFromNode("r_fingers3Relax")
ROUTE1509.setToField("set_rotation")
ROUTE1509.setToNode("Joe_r_carpal_distal_interphalangeal_5")

Scene33.addChild(ROUTE1509)
OrientationInterpolator1510 = x3d.OrientationInterpolator()
OrientationInterpolator1510.setDEF("r_sternoclavicularRoll")
OrientationInterpolator1510.setKey(x3d.doubleToFloat([0,0.2,0.4,0.5,0.7,0.8,1]))
OrientationInterpolator1510.setKeyValue(x3d.doubleToFloat([0,0,1,0,0,0,-1,0.1,0,0,-1,0.22,0,0.5,-1,0.27,0,0,-1,0.1,0,0,1,0,0,0,1,0]))

Scene33.addChild(OrientationInterpolator1510)
OrientationInterpolator1511 = x3d.OrientationInterpolator()
OrientationInterpolator1511.setDEF("r_acromioclavicularRoll")
OrientationInterpolator1511.setKey(x3d.doubleToFloat([0,0.2,0.4,0.6,0.8,1]))
OrientationInterpolator1511.setKeyValue(x3d.doubleToFloat([0,0,1,0,0,0,1,0,0,0,1,-0.05,0,0,1,0,0,0,1,0,0,0,1,0]))

Scene33.addChild(OrientationInterpolator1511)
OrientationInterpolator1512 = x3d.OrientationInterpolator()
OrientationInterpolator1512.setDEF("r_shoulderRoll")
OrientationInterpolator1512.setKey(x3d.doubleToFloat([0,0.2,0.4,0.5,0.85,1]))
OrientationInterpolator1512.setKeyValue(x3d.doubleToFloat([1,0,0,0,0,0,-1,1.66,-0.25,0,-1,1.76,0,0,-1,1.256,0,0,-1,0.05,1,0,0,0]))

Scene33.addChild(OrientationInterpolator1512)
OrientationInterpolator1513 = x3d.OrientationInterpolator()
OrientationInterpolator1513.setDEF("r_ForeArmPitch")
OrientationInterpolator1513.setKey(x3d.doubleToFloat([0,0.15,0.3,0.5,0.7,0.9,1]))
OrientationInterpolator1513.setKeyValue(x3d.doubleToFloat([0,0,1,0,-1,0,0,0.55,-1,-0.25,0,2.55,-1,-0.25,0,2.55,-1,-0.25,0,2.55,0,0,1,0,0,0,1,0]))

Scene33.addChild(OrientationInterpolator1513)
OrientationInterpolator1514 = x3d.OrientationInterpolator()
OrientationInterpolator1514.setDEF("r_wristRoll")
OrientationInterpolator1514.setKey(x3d.doubleToFloat([0,0.2,0.4,0.6,0.65,0.75,0.85,1]))
OrientationInterpolator1514.setKeyValue(x3d.doubleToFloat([0,0,1,0,0,0,1,0,0,1,0,-0.55,0,0,1,0,0,1,0,1.55,0,0,-1,1.55,0,0,1,0,0,0,1,0]))

Scene33.addChild(OrientationInterpolator1514)
OrientationInterpolator1515 = x3d.OrientationInterpolator()
OrientationInterpolator1515.setDEF("r_handPitch")
OrientationInterpolator1515.setKey(x3d.doubleToFloat([0,0.2,0.4,0.6,0.8,1]))
OrientationInterpolator1515.setKeyValue(x3d.doubleToFloat([0,0,1,0,0,0,0.01,0.25,0,0,-0.01,0.03,0,0,0.01,0.05,0,0,0.01,0.01,0,0,1,0]))

Scene33.addChild(OrientationInterpolator1515)
OrientationInterpolator1516 = x3d.OrientationInterpolator()
OrientationInterpolator1516.setDEF("r_thumb1Pitch")
OrientationInterpolator1516.setKey(x3d.doubleToFloat([0,0.2,0.4,0.6,0.8,1]))
OrientationInterpolator1516.setKeyValue(x3d.doubleToFloat([1,0,0,0,1,0,0,0.5,1,0,0,1,1,0,0,0.4,1,0,0,0.2,1,0,0,0]))

Scene33.addChild(OrientationInterpolator1516)
OrientationInterpolator1517 = x3d.OrientationInterpolator()
OrientationInterpolator1517.setDEF("r_thumb2Pitch")
OrientationInterpolator1517.setKey(x3d.doubleToFloat([0,0.2,0.4,0.6,0.8,1]))
OrientationInterpolator1517.setKeyValue(x3d.doubleToFloat([0,0,1,0,1,1,0,0.3,1,1,0,0.3,1,1,0,0.6,1,1,0,0.3,0,1,1,0]))

Scene33.addChild(OrientationInterpolator1517)
OrientationInterpolator1518 = x3d.OrientationInterpolator()
OrientationInterpolator1518.setDEF("l_shoulderRoll")
OrientationInterpolator1518.setKey(x3d.doubleToFloat([0,0.2,0.4,0.5,0.85,1]))
OrientationInterpolator1518.setKeyValue(x3d.doubleToFloat([0.25,0,1,1.76,0,0,1,1.66,0.25,0,1,1.76,0,0,1,1.256,0,0,1,0.05,0.25,0,1,1.76]))

Scene33.addChild(OrientationInterpolator1518)
ROUTE1519 = x3d.ROUTE()
ROUTE1519.setFromField("fraction_changed")
ROUTE1519.setFromNode("Time2")
ROUTE1519.setToField("set_fraction")
ROUTE1519.setToNode("r_sternoclavicularRoll")

Scene33.addChild(ROUTE1519)
ROUTE1520 = x3d.ROUTE()
ROUTE1520.setFromField("fraction_changed")
ROUTE1520.setFromNode("Time2")
ROUTE1520.setToField("set_fraction")
ROUTE1520.setToNode("r_acromioclavicularRoll")

Scene33.addChild(ROUTE1520)
ROUTE1521 = x3d.ROUTE()
ROUTE1521.setFromField("fraction_changed")
ROUTE1521.setFromNode("Time2")
ROUTE1521.setToField("set_fraction")
ROUTE1521.setToNode("r_shoulderRoll")

Scene33.addChild(ROUTE1521)
ROUTE1522 = x3d.ROUTE()
ROUTE1522.setFromField("fraction_changed")
ROUTE1522.setFromNode("Time2")
ROUTE1522.setToField("set_fraction")
ROUTE1522.setToNode("r_ForeArmPitch")

Scene33.addChild(ROUTE1522)
ROUTE1523 = x3d.ROUTE()
ROUTE1523.setFromField("fraction_changed")
ROUTE1523.setFromNode("Time2")
ROUTE1523.setToField("set_fraction")
ROUTE1523.setToNode("r_wristRoll")

Scene33.addChild(ROUTE1523)
ROUTE1524 = x3d.ROUTE()
ROUTE1524.setFromField("fraction_changed")
ROUTE1524.setFromNode("Time2")
ROUTE1524.setToField("set_fraction")
ROUTE1524.setToNode("r_handPitch")

Scene33.addChild(ROUTE1524)
ROUTE1525 = x3d.ROUTE()
ROUTE1525.setFromField("fraction_changed")
ROUTE1525.setFromNode("Time2")
ROUTE1525.setToField("set_fraction")
ROUTE1525.setToNode("r_thumb1Pitch")

Scene33.addChild(ROUTE1525)
ROUTE1526 = x3d.ROUTE()
ROUTE1526.setFromField("fraction_changed")
ROUTE1526.setFromNode("Time2")
ROUTE1526.setToField("set_fraction")
ROUTE1526.setToNode("r_thumb2Pitch")

Scene33.addChild(ROUTE1526)
ROUTE1527 = x3d.ROUTE()
ROUTE1527.setFromField("value_changed")
ROUTE1527.setFromNode("r_sternoclavicularRoll")
ROUTE1527.setToField("set_rotation")
ROUTE1527.setToNode("Joe_r_sternoclavicular")

Scene33.addChild(ROUTE1527)
ROUTE1528 = x3d.ROUTE()
ROUTE1528.setFromField("value_changed")
ROUTE1528.setFromNode("r_acromioclavicularRoll")
ROUTE1528.setToField("set_rotation")
ROUTE1528.setToNode("Joe_r_acromioclavicular")

Scene33.addChild(ROUTE1528)
ROUTE1529 = x3d.ROUTE()
ROUTE1529.setFromField("value_changed")
ROUTE1529.setFromNode("r_shoulderRoll")
ROUTE1529.setToField("set_rotation")
ROUTE1529.setToNode("Joe_r_shoulder")

Scene33.addChild(ROUTE1529)
ROUTE1530 = x3d.ROUTE()
ROUTE1530.setFromField("value_changed")
ROUTE1530.setFromNode("r_ForeArmPitch")
ROUTE1530.setToField("set_rotation")
ROUTE1530.setToNode("Joe_r_elbow")

Scene33.addChild(ROUTE1530)
ROUTE1531 = x3d.ROUTE()
ROUTE1531.setFromField("value_changed")
ROUTE1531.setFromNode("r_wristRoll")
ROUTE1531.setToField("set_rotation")
ROUTE1531.setToNode("Joe_r_radiocarpal")

Scene33.addChild(ROUTE1531)
ROUTE1532 = x3d.ROUTE()
ROUTE1532.setFromField("value_changed")
ROUTE1532.setFromNode("r_handPitch")
ROUTE1532.setToField("set_rotation")
ROUTE1532.setToNode("Joe_r_carpometacarpal_2")

Scene33.addChild(ROUTE1532)
ROUTE1533 = x3d.ROUTE()
ROUTE1533.setFromField("value_changed")
ROUTE1533.setFromNode("r_handPitch")
ROUTE1533.setToField("set_rotation")
ROUTE1533.setToNode("Joe_r_metacarpophalangeal_2")

Scene33.addChild(ROUTE1533)
ROUTE1534 = x3d.ROUTE()
ROUTE1534.setFromField("value_changed")
ROUTE1534.setFromNode("r_handPitch")
ROUTE1534.setToField("set_rotation")
ROUTE1534.setToNode("Joe_r_carpal_proximal_interphalangeal_2")

Scene33.addChild(ROUTE1534)
ROUTE1535 = x3d.ROUTE()
ROUTE1535.setFromField("value_changed")
ROUTE1535.setFromNode("r_handPitch")
ROUTE1535.setToField("set_rotation")
ROUTE1535.setToNode("Joe_r_carpal_distal_interphalangeal_2")

Scene33.addChild(ROUTE1535)
ROUTE1536 = x3d.ROUTE()
ROUTE1536.setFromField("value_changed")
ROUTE1536.setFromNode("r_handPitch")
ROUTE1536.setToField("set_rotation")
ROUTE1536.setToNode("Joe_r_carpometacarpal_3")

Scene33.addChild(ROUTE1536)
ROUTE1537 = x3d.ROUTE()
ROUTE1537.setFromField("value_changed")
ROUTE1537.setFromNode("r_handPitch")
ROUTE1537.setToField("set_rotation")
ROUTE1537.setToNode("Joe_r_metacarpophalangeal_3")

Scene33.addChild(ROUTE1537)
ROUTE1538 = x3d.ROUTE()
ROUTE1538.setFromField("value_changed")
ROUTE1538.setFromNode("r_handPitch")
ROUTE1538.setToField("set_rotation")
ROUTE1538.setToNode("Joe_r_carpal_proximal_interphalangeal_3")

Scene33.addChild(ROUTE1538)
ROUTE1539 = x3d.ROUTE()
ROUTE1539.setFromField("value_changed")
ROUTE1539.setFromNode("r_handPitch")
ROUTE1539.setToField("set_rotation")
ROUTE1539.setToNode("Joe_r_carpal_distal_interphalangeal_3")

Scene33.addChild(ROUTE1539)
ROUTE1540 = x3d.ROUTE()
ROUTE1540.setFromField("value_changed")
ROUTE1540.setFromNode("r_handPitch")
ROUTE1540.setToField("set_rotation")
ROUTE1540.setToNode("Joe_r_carpometacarpal_4")

Scene33.addChild(ROUTE1540)
ROUTE1541 = x3d.ROUTE()
ROUTE1541.setFromField("value_changed")
ROUTE1541.setFromNode("r_handPitch")
ROUTE1541.setToField("set_rotation")
ROUTE1541.setToNode("Joe_r_metacarpophalangeal_4")

Scene33.addChild(ROUTE1541)
ROUTE1542 = x3d.ROUTE()
ROUTE1542.setFromField("value_changed")
ROUTE1542.setFromNode("r_handPitch")
ROUTE1542.setToField("set_rotation")
ROUTE1542.setToNode("Joe_r_carpal_proximal_interphalangeal_4")

Scene33.addChild(ROUTE1542)
ROUTE1543 = x3d.ROUTE()
ROUTE1543.setFromField("value_changed")
ROUTE1543.setFromNode("r_handPitch")
ROUTE1543.setToField("set_rotation")
ROUTE1543.setToNode("Joe_r_carpal_distal_interphalangeal_4")

Scene33.addChild(ROUTE1543)
ROUTE1544 = x3d.ROUTE()
ROUTE1544.setFromField("value_changed")
ROUTE1544.setFromNode("r_handPitch")
ROUTE1544.setToField("set_rotation")
ROUTE1544.setToNode("Joe_r_carpometacarpal_5")

Scene33.addChild(ROUTE1544)
ROUTE1545 = x3d.ROUTE()
ROUTE1545.setFromField("value_changed")
ROUTE1545.setFromNode("r_handPitch")
ROUTE1545.setToField("set_rotation")
ROUTE1545.setToNode("Joe_r_metacarpophalangeal_5")

Scene33.addChild(ROUTE1545)
ROUTE1546 = x3d.ROUTE()
ROUTE1546.setFromField("value_changed")
ROUTE1546.setFromNode("r_handPitch")
ROUTE1546.setToField("set_rotation")
ROUTE1546.setToNode("Joe_r_carpal_proximal_interphalangeal_5")

Scene33.addChild(ROUTE1546)
ROUTE1547 = x3d.ROUTE()
ROUTE1547.setFromField("value_changed")
ROUTE1547.setFromNode("r_handPitch")
ROUTE1547.setToField("set_rotation")
ROUTE1547.setToNode("Joe_r_carpal_distal_interphalangeal_5")

Scene33.addChild(ROUTE1547)
ROUTE1548 = x3d.ROUTE()
ROUTE1548.setFromField("value_changed")
ROUTE1548.setFromNode("r_thumb1Pitch")
ROUTE1548.setToField("set_rotation")
ROUTE1548.setToNode("Joe_r_carpometacarpal_1")

Scene33.addChild(ROUTE1548)
ROUTE1549 = x3d.ROUTE()
ROUTE1549.setFromField("value_changed")
ROUTE1549.setFromNode("r_thumb2Pitch")
ROUTE1549.setToField("set_rotation")
ROUTE1549.setToNode("Joe_r_metacarpophalangeal_1")

Scene33.addChild(ROUTE1549)
ROUTE1550 = x3d.ROUTE()
ROUTE1550.setFromField("value_changed")
ROUTE1550.setFromNode("r_thumb2Pitch")
ROUTE1550.setToField("set_rotation")
ROUTE1550.setToNode("Joe_r_carpal_interphalangeal_1")

Scene33.addChild(ROUTE1550)
ROUTE1551 = x3d.ROUTE()
ROUTE1551.setFromField("value_changed")
ROUTE1551.setFromNode("l_shoulderRoll")
ROUTE1551.setToField("set_rotation")
ROUTE1551.setToNode("Joe_l_shoulder")

Scene33.addChild(ROUTE1551)
Group1552 = x3d.Group()
PositionInterpolator1553 = x3d.PositionInterpolator()
PositionInterpolator1553.setDEF("HUMANOIDROOT_POSITION_ANIMATOR")
PositionInterpolator1553.setKey(x3d.doubleToFloat([0,0.0417,0.125,0.1667,0.2083,0.25,0.2917,0.375,0.4583,0.5,0.5417,0.5833,0.625,0.7083,0.75,0.7917,0.875,0.9167,1]))
PositionInterpolator1553.setKeyValue(x3d.doubleToFloat([0,-0.0093,0,0,-0.0039,0,0,-0.0088,0,0,-0.0149,0,0,-0.0264,0,0,-0.0393,0,0,-0.0502,0,0,-0.0747,0,0,-0.0273,0,0,-0.0161,0,0,-0.0113,0,0,-0.0058,0,0,-0.002,0,0,-0.0026,0,0,-0.0143,0,0,-0.038,0,0,-0.0565,0,0,-0.045,0,0,-0.0093,0]))

Group1552.addChild(PositionInterpolator1553)
OrientationInterpolator1554 = x3d.OrientationInterpolator()
OrientationInterpolator1554.setDEF("HUMANOIDROOT_ANIMATOR")
OrientationInterpolator1554.setKey(x3d.doubleToFloat([0,1]))
OrientationInterpolator1554.setKeyValue(x3d.doubleToFloat([0,1,0,0,0,1,0,0]))

Group1552.addChild(OrientationInterpolator1554)
OrientationInterpolator1555 = x3d.OrientationInterpolator()
OrientationInterpolator1555.setDEF("L_HIP_ANIMATOR")
OrientationInterpolator1555.setKey(x3d.doubleToFloat([0,0.25,0.375,0.5,0.6667,0.7917,0.9167,1]))
OrientationInterpolator1555.setKeyValue(x3d.doubleToFloat([-0.873,0.0609,0.484,0.2865,0.9963,-0.0106,0.0848,0.2488,0.9965,0.0159,-0.0822,0.3836,-0.7018,-0.0322,-0.7117,0.1289,-1,0,0,0.5518,-0.9964,0.0223,0.0817,0.5351,-0.9809,0.0491,0.1881,0.5204,-0.873,0.0609,0.484,0.2865]))

Group1552.addChild(OrientationInterpolator1555)
OrientationInterpolator1556 = x3d.OrientationInterpolator()
OrientationInterpolator1556.setDEF("L_KNEE_ANIMATOR")
OrientationInterpolator1556.setKey(x3d.doubleToFloat([0,0.2083,0.375,0.5,0.6667,0.7917,0.9167,1]))
OrientationInterpolator1556.setKeyValue(x3d.doubleToFloat([1,0,0,0.3226,1,0,0,0.1556,1,0,0,0.0868,1,0,0,0.8751,1,0,0,1.131,1,0,0,0.0996,1,0,0,0.3942,1,0,0,0.3226]))

Group1552.addChild(OrientationInterpolator1556)
OrientationInterpolator1557 = x3d.OrientationInterpolator()
OrientationInterpolator1557.setDEF("L_ANKLE_ANIMATOR")
OrientationInterpolator1557.setKey(x3d.doubleToFloat([0,0.125,0.2083,0.375,0.6667,0.9167,1]))
OrientationInterpolator1557.setKeyValue(x3d.doubleToFloat([-1,0,0,0.0671,-1,0,0,0.2152,-1,0,0,0.3184,-1,0,0,0.4717,-1,0,0,0.2912,1,0,0,0.2222,-1,0,0,0.0671]))

Group1552.addChild(OrientationInterpolator1557)
OrientationInterpolator1558 = x3d.OrientationInterpolator()
OrientationInterpolator1558.setDEF("R_ANKLE_ANIMATOR")
OrientationInterpolator1558.setKey(x3d.doubleToFloat([0,0.125,0.2083,0.375,0.4583,0.5,0.6667,0.75,0.78,0.9167,1]))
OrientationInterpolator1558.setKeyValue(x3d.doubleToFloat([0,0,1,0,-1,0,0,0.3533,-1,0,0,0.1072,1,0,0,0.4,1,0,0,0.127,-1,0,0,0.018,-1,0,0,0.058,-1,0,0,0.24,-1,0,0,0.35,-1,0,0,0.33,0,0,1,0]))

Group1552.addChild(OrientationInterpolator1558)
OrientationInterpolator1559 = x3d.OrientationInterpolator()
OrientationInterpolator1559.setDEF("L_subtalar_ANIMATOR")
OrientationInterpolator1559.setKey(x3d.doubleToFloat([0,0.3,1]))
OrientationInterpolator1559.setKeyValue(x3d.doubleToFloat([0,0,1,0,0,0,1,0,0,0,1,0]))

Group1552.addChild(OrientationInterpolator1559)
OrientationInterpolator1560 = x3d.OrientationInterpolator()
OrientationInterpolator1560.setDEF("L_MIDTARSAL_ANIMATOR")
OrientationInterpolator1560.setKey(x3d.doubleToFloat([0,0.5,1]))
OrientationInterpolator1560.setKeyValue(x3d.doubleToFloat([1,0,0,0,1,0,0,-0.2,1,0,0,0]))

Group1552.addChild(OrientationInterpolator1560)
OrientationInterpolator1561 = x3d.OrientationInterpolator()
OrientationInterpolator1561.setDEF("L_metatarsal_ANIMATOR")
OrientationInterpolator1561.setKey(x3d.doubleToFloat([0,0.2,0.4,0.8,1]))
OrientationInterpolator1561.setKeyValue(x3d.doubleToFloat([-1,0,0,0.3,-1,0,0,0.15,1,0,0,0.3,0,0,1,0,-1,0,0,0.3]))

Group1552.addChild(OrientationInterpolator1561)
OrientationInterpolator1562 = x3d.OrientationInterpolator()
OrientationInterpolator1562.setDEF("R_HIP_ANIMATOR")
OrientationInterpolator1562.setKey(x3d.doubleToFloat([0,0.125,0.2083,0.2917,0.375,0.5,0.6667,0.7917,0.9167,1]))
OrientationInterpolator1562.setKeyValue(x3d.doubleToFloat([-0.5831,0.0351,0.8116,0.1481,-0.995,0.023,0.0967,0.4683,-1,0.0019,0.008,0.4732,-0.998,-0.0158,-0.061,0.5079,-0.9911,-0.0354,-0.1286,0.5419,-0.9131,-0.0624,-0.403,0.3361,-0.4306,-0.0796,-0.899,0.0704,1,0,0,0.2571,0.9891,-0.0281,0.1444,0.3879,-0.5831,0.0351,0.8116,0.1481]))

Group1552.addChild(OrientationInterpolator1562)
OrientationInterpolator1563 = x3d.OrientationInterpolator()
OrientationInterpolator1563.setDEF("R_KNEE_ANIMATOR")
OrientationInterpolator1563.setKey(x3d.doubleToFloat([0,0.125,0.2083,0.2917,0.375,0.5,0.6667,0.7917,0.9167,1]))
OrientationInterpolator1563.setKeyValue(x3d.doubleToFloat([1,0,0,0.8573,1,0,0,0.8926,1,0,0,0.5351,1,0,0,0.1756,1,0,0,0.1194,1,0,0,0.3153,1,0,0,0.0935,1,0,0,0.0856,1,0,0,0.2475,1,0,0,0.8573]))

Group1552.addChild(OrientationInterpolator1563)
OrientationInterpolator1564 = x3d.OrientationInterpolator()
OrientationInterpolator1564.setDEF("R_subtalar_ANIMATOR")
OrientationInterpolator1564.setKey(x3d.doubleToFloat([0,0.225,0.25,0.35,0.45,0.85,0.91]))
OrientationInterpolator1564.setKeyValue(x3d.doubleToFloat([-1,0,0,0.1,0,0,1,0,0,0,1,0,1,0,0,0.1,0,0,1,0,1,0,0,0.1,1,0,0,0.25]))

Group1552.addChild(OrientationInterpolator1564)
OrientationInterpolator1565 = x3d.OrientationInterpolator()
OrientationInterpolator1565.setDEF("R_MIDTARSAL_ANIMATOR")
OrientationInterpolator1565.setKey(x3d.doubleToFloat([0,0.22,1]))
OrientationInterpolator1565.setKeyValue(x3d.doubleToFloat([1,0,0,-0.2,0,0,1,0,1,0,0,-0.2]))

Group1552.addChild(OrientationInterpolator1565)
OrientationInterpolator1566 = x3d.OrientationInterpolator()
OrientationInterpolator1566.setDEF("R_metatarsal_ANIMATOR")
OrientationInterpolator1566.setKey(x3d.doubleToFloat([0,0.2,0.4,0.8,1]))
OrientationInterpolator1566.setKeyValue(x3d.doubleToFloat([-1,0,0,0.15,0,0,1,0,1,0,0,0.3,-1,0,0,0.3,-1,0,0,0.15]))

Group1552.addChild(OrientationInterpolator1566)
OrientationInterpolator1567 = x3d.OrientationInterpolator()
OrientationInterpolator1567.setDEF("VL5_ANIMATOR")
OrientationInterpolator1567.setKey(x3d.doubleToFloat([0,0.2083,0.375,0.75,0.8333,1]))
OrientationInterpolator1567.setKeyValue(x3d.doubleToFloat([0,1,0,0.0826,-0.0197,-0.5974,0.8017,0.0823,0.0093,-0.9648,0.2627,0.1734,-0.0124,0.9549,-0.2968,0.0873,-0.0081,0.9691,-0.2463,0.158,0,1,0,0.0826]))

Group1552.addChild(OrientationInterpolator1567)
OrientationInterpolator1568 = x3d.OrientationInterpolator()
OrientationInterpolator1568.setDEF("SKULLBASE_ANIMATOR")
OrientationInterpolator1568.setKey(x3d.doubleToFloat([0,0.375,0.4167,0.5,0.5833,0.6667,0.75,0.8333,0.9167,1]))
OrientationInterpolator1568.setKeyValue(x3d.doubleToFloat([0,-1,0,0.0864,0,1,0,0.1825,0,1,0,0.1505,0,1,0,0.1053,0,1,0,0.0439,0,-1,0,0.0312,0,-1,0,0.0794,0,-1,0,0.1616,0,-1,0,0.155,0,-1,0,0.0864]))

Group1552.addChild(OrientationInterpolator1568)
OrientationInterpolator1569 = x3d.OrientationInterpolator()
OrientationInterpolator1569.setDEF("L_SHOULDER_ANIMATOR")
OrientationInterpolator1569.setKey(x3d.doubleToFloat([0,0.375,0.9167,1]))
OrientationInterpolator1569.setKeyValue(x3d.doubleToFloat([1,0,0.4,0.12,-1,0,0.4,0.186,1,0,0.1,0.336,1,0,0.4,0.12]))

Group1552.addChild(OrientationInterpolator1569)
OrientationInterpolator1570 = x3d.OrientationInterpolator()
OrientationInterpolator1570.setDEF("L_ELBOW_ANIMATOR")
OrientationInterpolator1570.setKey(x3d.doubleToFloat([0,0.375,0.9167,1]))
OrientationInterpolator1570.setKeyValue(x3d.doubleToFloat([-1,0,0,0.066,-1,0,0,0.488,-1,0,0,0.0177,-1,0,0,0.066]))

Group1552.addChild(OrientationInterpolator1570)
OrientationInterpolator1571 = x3d.OrientationInterpolator()
OrientationInterpolator1571.setDEF("L_WRIST_ANIMATOR")
OrientationInterpolator1571.setKey(x3d.doubleToFloat([0,0.375,0.9167,1]))
OrientationInterpolator1571.setKeyValue(x3d.doubleToFloat([0,-1,0,0.461,-0.3302,-0.9275,0.1755,0.5388,0.0328,-0.9993,-0.0172,0.492,0,-1,0,0.4611]))

Group1552.addChild(OrientationInterpolator1571)
OrientationInterpolator1572 = x3d.OrientationInterpolator()
OrientationInterpolator1572.setDEF("R_SHOULDER_ANIMATOR")
OrientationInterpolator1572.setKey(x3d.doubleToFloat([0,0.375,0.9167,1]))
OrientationInterpolator1572.setKeyValue(x3d.doubleToFloat([-1,0,-1,0.092,1,0,-0.2,0.3197,-1,0,-0.5,0.1564,-1,0,-1,0.092]))

Group1552.addChild(OrientationInterpolator1572)
OrientationInterpolator1573 = x3d.OrientationInterpolator()
OrientationInterpolator1573.setDEF("R_ELBOW_ANIMATOR")
OrientationInterpolator1573.setKey(x3d.doubleToFloat([0,0.375,0.9167,1]))
OrientationInterpolator1573.setKeyValue(x3d.doubleToFloat([-1,0,0,0.4115,-1,0,0,0.0925,-1,0,0,0.5726,-1,0,0,0.4115]))

Group1552.addChild(OrientationInterpolator1573)
OrientationInterpolator1574 = x3d.OrientationInterpolator()
OrientationInterpolator1574.setDEF("R_WRIST_ANIMATOR")
OrientationInterpolator1574.setKey(x3d.doubleToFloat([0,0.375,0.9167,1]))
OrientationInterpolator1574.setKeyValue(x3d.doubleToFloat([-0.8129,0.4759,-0.3357,0.1346,0.1533,-0.9878,0.0258,0.3902,-0.5701,0.7604,-0.311,0.366,-0.8129,0.4759,-0.3357,0.1346]))

Group1552.addChild(OrientationInterpolator1574)

Scene33.addChild(Group1552)
ROUTE1575 = x3d.ROUTE()
ROUTE1575.setFromField("fraction_changed")
ROUTE1575.setFromNode("Time1")
ROUTE1575.setToField("set_fraction")
ROUTE1575.setToNode("HUMANOIDROOT_POSITION_ANIMATOR")

Scene33.addChild(ROUTE1575)
ROUTE1576 = x3d.ROUTE()
ROUTE1576.setFromField("fraction_changed")
ROUTE1576.setFromNode("Time1")
ROUTE1576.setToField("set_fraction")
ROUTE1576.setToNode("HUMANOIDROOT_ANIMATOR")

Scene33.addChild(ROUTE1576)
ROUTE1577 = x3d.ROUTE()
ROUTE1577.setFromField("fraction_changed")
ROUTE1577.setFromNode("Time1")
ROUTE1577.setToField("set_fraction")
ROUTE1577.setToNode("L_HIP_ANIMATOR")

Scene33.addChild(ROUTE1577)
ROUTE1578 = x3d.ROUTE()
ROUTE1578.setFromField("fraction_changed")
ROUTE1578.setFromNode("Time1")
ROUTE1578.setToField("set_fraction")
ROUTE1578.setToNode("L_KNEE_ANIMATOR")

Scene33.addChild(ROUTE1578)
ROUTE1579 = x3d.ROUTE()
ROUTE1579.setFromField("fraction_changed")
ROUTE1579.setFromNode("Time1")
ROUTE1579.setToField("set_fraction")
ROUTE1579.setToNode("L_ANKLE_ANIMATOR")

Scene33.addChild(ROUTE1579)
ROUTE1580 = x3d.ROUTE()
ROUTE1580.setFromField("fraction_changed")
ROUTE1580.setFromNode("Time1")
ROUTE1580.setToField("set_fraction")
ROUTE1580.setToNode("L_subtalar_ANIMATOR")

Scene33.addChild(ROUTE1580)
ROUTE1581 = x3d.ROUTE()
ROUTE1581.setFromField("fraction_changed")
ROUTE1581.setFromNode("Time1")
ROUTE1581.setToField("set_fraction")
ROUTE1581.setToNode("L_MIDTARSAL_ANIMATOR")

Scene33.addChild(ROUTE1581)
ROUTE1582 = x3d.ROUTE()
ROUTE1582.setFromField("fraction_changed")
ROUTE1582.setFromNode("Time1")
ROUTE1582.setToField("set_fraction")
ROUTE1582.setToNode("L_metatarsal_ANIMATOR")

Scene33.addChild(ROUTE1582)
ROUTE1583 = x3d.ROUTE()
ROUTE1583.setFromField("fraction_changed")
ROUTE1583.setFromNode("Time1")
ROUTE1583.setToField("set_fraction")
ROUTE1583.setToNode("R_HIP_ANIMATOR")

Scene33.addChild(ROUTE1583)
ROUTE1584 = x3d.ROUTE()
ROUTE1584.setFromField("fraction_changed")
ROUTE1584.setFromNode("Time1")
ROUTE1584.setToField("set_fraction")
ROUTE1584.setToNode("R_KNEE_ANIMATOR")

Scene33.addChild(ROUTE1584)
ROUTE1585 = x3d.ROUTE()
ROUTE1585.setFromField("fraction_changed")
ROUTE1585.setFromNode("Time1")
ROUTE1585.setToField("set_fraction")
ROUTE1585.setToNode("R_ANKLE_ANIMATOR")

Scene33.addChild(ROUTE1585)
ROUTE1586 = x3d.ROUTE()
ROUTE1586.setFromField("fraction_changed")
ROUTE1586.setFromNode("Time1")
ROUTE1586.setToField("set_fraction")
ROUTE1586.setToNode("R_subtalar_ANIMATOR")

Scene33.addChild(ROUTE1586)
ROUTE1587 = x3d.ROUTE()
ROUTE1587.setFromField("fraction_changed")
ROUTE1587.setFromNode("Time1")
ROUTE1587.setToField("set_fraction")
ROUTE1587.setToNode("R_MIDTARSAL_ANIMATOR")

Scene33.addChild(ROUTE1587)
ROUTE1588 = x3d.ROUTE()
ROUTE1588.setFromField("fraction_changed")
ROUTE1588.setFromNode("Time1")
ROUTE1588.setToField("set_fraction")
ROUTE1588.setToNode("R_metatarsal_ANIMATOR")

Scene33.addChild(ROUTE1588)
ROUTE1589 = x3d.ROUTE()
ROUTE1589.setFromField("fraction_changed")
ROUTE1589.setFromNode("Time1")
ROUTE1589.setToField("set_fraction")
ROUTE1589.setToNode("VL5_ANIMATOR")

Scene33.addChild(ROUTE1589)
ROUTE1590 = x3d.ROUTE()
ROUTE1590.setFromField("fraction_changed")
ROUTE1590.setFromNode("Time1")
ROUTE1590.setToField("set_fraction")
ROUTE1590.setToNode("SKULLBASE_ANIMATOR")

Scene33.addChild(ROUTE1590)
ROUTE1591 = x3d.ROUTE()
ROUTE1591.setFromField("fraction_changed")
ROUTE1591.setFromNode("Time1")
ROUTE1591.setToField("set_fraction")
ROUTE1591.setToNode("L_SHOULDER_ANIMATOR")

Scene33.addChild(ROUTE1591)
ROUTE1592 = x3d.ROUTE()
ROUTE1592.setFromField("fraction_changed")
ROUTE1592.setFromNode("Time1")
ROUTE1592.setToField("set_fraction")
ROUTE1592.setToNode("L_ELBOW_ANIMATOR")

Scene33.addChild(ROUTE1592)
ROUTE1593 = x3d.ROUTE()
ROUTE1593.setFromField("fraction_changed")
ROUTE1593.setFromNode("Time1")
ROUTE1593.setToField("set_fraction")
ROUTE1593.setToNode("L_WRIST_ANIMATOR")

Scene33.addChild(ROUTE1593)
ROUTE1594 = x3d.ROUTE()
ROUTE1594.setFromField("value_changed")
ROUTE1594.setFromNode("HUMANOIDROOT_POSITION_ANIMATOR")
ROUTE1594.setToField("set_translation")
ROUTE1594.setToNode("Joe_humanoid_root")

Scene33.addChild(ROUTE1594)
ROUTE1595 = x3d.ROUTE()
ROUTE1595.setFromField("value_changed")
ROUTE1595.setFromNode("HUMANOIDROOT_ANIMATOR")
ROUTE1595.setToField("set_rotation")
ROUTE1595.setToNode("Joe_humanoid_root")

Scene33.addChild(ROUTE1595)
ROUTE1596 = x3d.ROUTE()
ROUTE1596.setFromField("value_changed")
ROUTE1596.setFromNode("L_HIP_ANIMATOR")
ROUTE1596.setToField("set_rotation")
ROUTE1596.setToNode("Joe_l_hip")

Scene33.addChild(ROUTE1596)
ROUTE1597 = x3d.ROUTE()
ROUTE1597.setFromField("value_changed")
ROUTE1597.setFromNode("L_KNEE_ANIMATOR")
ROUTE1597.setToField("set_rotation")
ROUTE1597.setToNode("Joe_l_knee")

Scene33.addChild(ROUTE1597)
ROUTE1598 = x3d.ROUTE()
ROUTE1598.setFromField("value_changed")
ROUTE1598.setFromNode("L_ANKLE_ANIMATOR")
ROUTE1598.setToField("set_rotation")
ROUTE1598.setToNode("Joe_l_talocrural")

Scene33.addChild(ROUTE1598)
ROUTE1599 = x3d.ROUTE()
ROUTE1599.setFromField("value_changed")
ROUTE1599.setFromNode("L_MIDTARSAL_ANIMATOR")
ROUTE1599.setToField("set_rotation")
ROUTE1599.setToNode("Joe_l_metatarsophalangeal_2")

Scene33.addChild(ROUTE1599)
ROUTE1600 = x3d.ROUTE()
ROUTE1600.setFromField("value_changed")
ROUTE1600.setFromNode("L_subtalar_ANIMATOR")
ROUTE1600.setToField("set_rotation")
ROUTE1600.setToNode("Joe_l_tarsometatarsal_2")

Scene33.addChild(ROUTE1600)
ROUTE1601 = x3d.ROUTE()
ROUTE1601.setFromField("value_changed")
ROUTE1601.setFromNode("L_metatarsal_ANIMATOR")
ROUTE1601.setToField("set_rotation")
ROUTE1601.setToNode("Joe_l_metatarsal")

Scene33.addChild(ROUTE1601)
ROUTE1602 = x3d.ROUTE()
ROUTE1602.setFromField("value_changed")
ROUTE1602.setFromNode("R_HIP_ANIMATOR")
ROUTE1602.setToField("set_rotation")
ROUTE1602.setToNode("Joe_r_hip")

Scene33.addChild(ROUTE1602)
ROUTE1603 = x3d.ROUTE()
ROUTE1603.setFromField("value_changed")
ROUTE1603.setFromNode("R_KNEE_ANIMATOR")
ROUTE1603.setToField("set_rotation")
ROUTE1603.setToNode("Joe_r_knee")

Scene33.addChild(ROUTE1603)
ROUTE1604 = x3d.ROUTE()
ROUTE1604.setFromField("value_changed")
ROUTE1604.setFromNode("R_ANKLE_ANIMATOR")
ROUTE1604.setToField("set_rotation")
ROUTE1604.setToNode("Joe_r_talocrural")

Scene33.addChild(ROUTE1604)
ROUTE1605 = x3d.ROUTE()
ROUTE1605.setFromField("value_changed")
ROUTE1605.setFromNode("R_subtalar_ANIMATOR")
ROUTE1605.setToField("set_rotation")
ROUTE1605.setToNode("Joe_r_tarsometatarsal_2")

Scene33.addChild(ROUTE1605)
ROUTE1606 = x3d.ROUTE()
ROUTE1606.setFromField("value_changed")
ROUTE1606.setFromNode("R_MIDTARSAL_ANIMATOR")
ROUTE1606.setToField("set_rotation")
ROUTE1606.setToNode("Joe_r_metatarsophalangeal_2")

Scene33.addChild(ROUTE1606)
ROUTE1607 = x3d.ROUTE()
ROUTE1607.setFromField("value_changed")
ROUTE1607.setFromNode("R_metatarsal_ANIMATOR")
ROUTE1607.setToField("set_rotation")
ROUTE1607.setToNode("Joe_r_tarsal_distal_interphalangeal_2")

Scene33.addChild(ROUTE1607)
ROUTE1608 = x3d.ROUTE()
ROUTE1608.setFromField("value_changed")
ROUTE1608.setFromNode("VL5_ANIMATOR")
ROUTE1608.setToField("set_rotation")
ROUTE1608.setToNode("Joe_vl5")

Scene33.addChild(ROUTE1608)
ROUTE1609 = x3d.ROUTE()
ROUTE1609.setFromField("value_changed")
ROUTE1609.setFromNode("SKULLBASE_ANIMATOR")
ROUTE1609.setToField("set_rotation")
ROUTE1609.setToNode("Joe_skullbase")

Scene33.addChild(ROUTE1609)
ROUTE1610 = x3d.ROUTE()
ROUTE1610.setFromField("value_changed")
ROUTE1610.setFromNode("L_SHOULDER_ANIMATOR")
ROUTE1610.setToField("set_rotation")
ROUTE1610.setToNode("Joe_l_shoulder")

Scene33.addChild(ROUTE1610)
ROUTE1611 = x3d.ROUTE()
ROUTE1611.setFromField("value_changed")
ROUTE1611.setFromNode("L_ELBOW_ANIMATOR")
ROUTE1611.setToField("set_rotation")
ROUTE1611.setToNode("Joe_l_elbow")

Scene33.addChild(ROUTE1611)
ROUTE1612 = x3d.ROUTE()
ROUTE1612.setFromField("value_changed")
ROUTE1612.setFromNode("L_WRIST_ANIMATOR")
ROUTE1612.setToField("set_rotation")
ROUTE1612.setToNode("Joe_l_radiocarpal")

Scene33.addChild(ROUTE1612)
ROUTE1613 = x3d.ROUTE()
ROUTE1613.setFromField("value_changed")
ROUTE1613.setFromNode("R_SHOULDER_ANIMATOR")
ROUTE1613.setToField("set_rotation")
ROUTE1613.setToNode("Joe_r_shoulder")

Scene33.addChild(ROUTE1613)
ROUTE1614 = x3d.ROUTE()
ROUTE1614.setFromField("value_changed")
ROUTE1614.setFromNode("R_ELBOW_ANIMATOR")
ROUTE1614.setToField("set_rotation")
ROUTE1614.setToNode("Joe_r_elbow")

Scene33.addChild(ROUTE1614)
ROUTE1615 = x3d.ROUTE()
ROUTE1615.setFromField("value_changed")
ROUTE1615.setFromNode("R_WRIST_ANIMATOR")
ROUTE1615.setToField("set_rotation")
ROUTE1615.setToNode("Joe_r_radiocarpal")

Scene33.addChild(ROUTE1615)

X3D0.setScene(Scene33)
X3D0.toFileX3D("../data/JoeSkeletonSkinSiteSaluteWalk.new.graalpy.x3d")
X3D0.toFileJSON("../data/JoeSkeletonSkinSiteSaluteWalk.new.graalpy.x3dj")
