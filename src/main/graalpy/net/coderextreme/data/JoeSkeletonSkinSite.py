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
meta3.setContent("JoeSkeletonSkinSite.x3d")

head1.addMeta(meta3)
meta4 = x3d.meta()
meta4.setName("description")
meta4.setContent("Comprehensive LOA4 example showing skeleton, skin, sites with no interpolator animation, includes EXPORT to enable separate Inline/IMPORT usage. All name, DEF, USE, fromNode, toNode values upgraded from legacy HAnim v1 to HAnim v2.")

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
meta12.setName("Image")
meta12.setContent("JoeSkeletonSkinSiteSaluteWalk_X3D-Edit.png")

head1.addMeta(meta12)
meta13 = x3d.meta()
meta13.setName("drawing")
meta13.setContent("JoeSkeletonSkinSiteSaluteWalk_composite.vsdx")

head1.addMeta(meta13)
meta14 = x3d.meta()
meta14.setName("Image")
meta14.setContent("JoeSkeletonSkinSiteSaluteWalk_composite.2023JAN2.png")

head1.addMeta(meta14)
meta15 = x3d.meta()
meta15.setName("Image")
meta15.setContent("JoeSkeletonSkinSiteSaluteWalk_view3dscene.png")

head1.addMeta(meta15)
meta16 = x3d.meta()
meta16.setName("Image")
meta16.setContent("JoeSkeletonSkinSiteSaluteWalk_X_ITE.png")

head1.addMeta(meta16)
meta17 = x3d.meta()
meta17.setName("Image")
meta17.setContent("JoeSkeletonSkinSiteSaluteWalk_X3DOM.png")

head1.addMeta(meta17)
meta18 = x3d.meta()
meta18.setName("Image")
meta18.setContent("JoeSkeletonSkinSiteSaluteWalk_H3DViewer.png")

head1.addMeta(meta18)
meta19 = x3d.meta()
meta19.setName("Image")
meta19.setContent("JoeSkeletonSkinSiteSaluteWalk_freeWrl.png")

head1.addMeta(meta19)
meta20 = x3d.meta()
meta20.setName("Image")
meta20.setContent("JoeSkeletonSkinSiteSaluteWalk_Octaga.png")

head1.addMeta(meta20)
meta21 = x3d.meta()
meta21.setName("Image")
meta21.setContent("JoeSkeletonSkinSiteSaluteWalk_vivaty.png")

head1.addMeta(meta21)
meta22 = x3d.meta()
meta22.setName("generator")
meta22.setContent("tovrmlx3d, https://castle-engine.io/convert.php")

head1.addMeta(meta22)
meta23 = x3d.meta()
meta23.setName("reference")
meta23.setContent("https://castle-engine.io/view3dscene.php#section_converting")

head1.addMeta(meta23)
meta24 = x3d.meta()
meta24.setName("translator")
meta24.setContent("Michalis Kamburelis")

head1.addMeta(meta24)
meta25 = x3d.meta()
meta25.setName("translator")
meta25.setContent("Don Brutzman")

head1.addMeta(meta25)
meta26 = x3d.meta()
meta26.setName("translator")
meta26.setContent("Joe D. Williams")

head1.addMeta(meta26)
meta27 = x3d.meta()
meta27.setName("generator")
meta27.setContent("X3D-Edit 4.0, https://www.web3d.org/x3d/tools/X3D-Edit")

head1.addMeta(meta27)
meta28 = x3d.meta()
meta28.setName("generator")
meta28.setContent("X3D Tidy, https://www.web3d.org/x3d/stylesheets/X3dTidy.html")

head1.addMeta(meta28)
meta29 = x3d.meta()
meta29.setName("identifier")
meta29.setContent("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Skin/JoeSkeletonSkinSite.x3d")

head1.addMeta(meta29)
meta30 = x3d.meta()
meta30.setName("license")
meta30.setContent("../license.html")

head1.addMeta(meta30)
meta31 = x3d.meta()
meta31.setName("generator")
meta31.setContent("X3DJSAIL https://www.web3d.org/specifications/java/X3DJSAIL.html")

head1.addMeta(meta31)

X3D0.setHead(head1)
Scene32 = x3d.Scene()
WorldInfo33 = x3d.WorldInfo()
WorldInfo33.setInfo(["By Joe for Joe","HAnim V1 LOA3 Skeleton Joint centers and Site translations Adapted for approximatrion of ManGLoss Site Location Example and HANIM 200x Default Joint Centers, LOA3"])
WorldInfo33.setTitle("JoeSkeletonSkinSite.x3d")

Scene32.addChild(WorldInfo33)
NavigationInfo34 = x3d.NavigationInfo()
NavigationInfo34.setDEF("HeadlightOnRevealsSkinTextureAndColors")

Scene32.addChild(NavigationInfo34)
Background35 = x3d.Background()
Background35.setGroundAngle(x3d.doubleToFloat([1.57]))
Background35.setGroundColor(x3d.doubleToFloat([0,0.1,0,0,0.1,0]))
Background35.setSkyColor(x3d.doubleToFloat([0,0,0.1]))

Scene32.addChild(Background35)

Scene32.addComments(x3d.CommentsBlock("""Authoring hint: these axes are aligned within local coordinate system"""))
Group36 = x3d.Group()
Group36.setDEF("ViewpointGroup")
Viewpoint37 = x3d.Viewpoint()
Viewpoint37.setDescription("Front Up View")
Viewpoint37.setOrientation(x3d.doubleToFloat([-1,-1,0,0.55]))
Viewpoint37.setPosition(x3d.doubleToFloat([-1,2,2.5]))

Group36.addChild(Viewpoint37)
Viewpoint38 = x3d.Viewpoint()
Viewpoint38.setDescription("From Left View")
Viewpoint38.setOrientation(x3d.doubleToFloat([0.3,1,0,-1.57]))
Viewpoint38.setPosition(x3d.doubleToFloat([-2.5,1.5,0]))

Group36.addChild(Viewpoint38)
Viewpoint39 = x3d.Viewpoint()
Viewpoint39.setDescription("Front Mid View")
Viewpoint39.setPosition(x3d.doubleToFloat([0,0.5,1.25]))

Group36.addChild(Viewpoint39)
Viewpoint40 = x3d.Viewpoint()
Viewpoint40.setDescription("Front Feet View")
Viewpoint40.setPosition(x3d.doubleToFloat([0,0,0.75]))

Group36.addChild(Viewpoint40)
Viewpoint41 = x3d.Viewpoint()
Viewpoint41.setDescription("From Right View")
Viewpoint41.setOrientation(x3d.doubleToFloat([0,1,0,1.57]))
Viewpoint41.setPosition(x3d.doubleToFloat([1,1,0]))

Group36.addChild(Viewpoint41)
Viewpoint42 = x3d.Viewpoint()
Viewpoint42.setCenterOfRotation(x3d.doubleToFloat([0,1.65,0]))
Viewpoint42.setDescription("Front Head View")
Viewpoint42.setPosition(x3d.doubleToFloat([0,1.65,0.75]))

Group36.addChild(Viewpoint42)
Viewpoint43 = x3d.Viewpoint()
Viewpoint43.setDescription("Front Mid View")
Viewpoint43.setPosition(x3d.doubleToFloat([0,1,1.75]))

Group36.addChild(Viewpoint43)
Viewpoint44 = x3d.Viewpoint()
Viewpoint44.setDescription("Rear View")
Viewpoint44.setOrientation(x3d.doubleToFloat([0,1,0,3.14]))
Viewpoint44.setPosition(x3d.doubleToFloat([0,1.5,-4]))

Group36.addChild(Viewpoint44)
Viewpoint45 = x3d.Viewpoint()
Viewpoint45.setDescription("Top View")
Viewpoint45.setOrientation(x3d.doubleToFloat([1,0,0,-1.57]))
Viewpoint45.setPosition(x3d.doubleToFloat([0,4,0]))

Group36.addChild(Viewpoint45)
Viewpoint46 = x3d.Viewpoint()
Viewpoint46.setDescription("Bottom View")
Viewpoint46.setOrientation(x3d.doubleToFloat([1,0,0,1.57]))
Viewpoint46.setPosition(x3d.doubleToFloat([0,-4,0]))

Group36.addChild(Viewpoint46)
Viewpoint47 = x3d.Viewpoint()
Viewpoint47.setDescription("Right View")
Viewpoint47.setOrientation(x3d.doubleToFloat([0,1,0,1.57]))
Viewpoint47.setPosition(x3d.doubleToFloat([4,1.5,0]))

Group36.addChild(Viewpoint47)

Scene32.addChild(Group36)
Group48 = x3d.Group()
Group48.setDEF("VisualizationShapes")
Group48.setVisible(False)
Transform49 = x3d.Transform()
Transform49.setScale(x3d.doubleToFloat([5,5,5]))
Transform49.setTranslation(x3d.doubleToFloat([0,2.1,0]))
Shape50 = x3d.Shape()
Shape50.setDEF("jointbox")
Appearance51 = x3d.Appearance()
Material52 = x3d.Material()
Material52.setAmbientIntensity(0.5)
Material52.setDiffuseColor(x3d.doubleToFloat([0,0,0]))
Material52.setShininess(1)

Appearance51.setMaterial(Material52)

Shape50.setAppearance(Appearance51)
IndexedFaceSet53 = x3d.IndexedFaceSet()
IndexedFaceSet53.setCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1])
IndexedFaceSet53.setCreaseAngle(0.1)
Color54 = x3d.Color()
Color54.setColor(x3d.doubleToFloat([1,0,0,0,0,1,0,1,0,1,1,1,0,1,1,1,1,0]))

IndexedFaceSet53.setColor(Color54)
Coordinate55 = x3d.Coordinate()
Coordinate55.setDEF("boxCoords")
Coordinate55.setPoint(x3d.doubleToFloat([0,0.01,0,-0.01,0,0,0,0,0.0157,0.01,0,0,0,0,-0.01,0,-0.01,0]))

IndexedFaceSet53.setCoord(Coordinate55)

Shape50.setGeometry(IndexedFaceSet53)

Transform49.addChild(Shape50)

Group48.addChild(Transform49)
Transform56 = x3d.Transform()
Transform56.setScale(x3d.doubleToFloat([0.1,0.1,0.1]))
Transform56.setTranslation(x3d.doubleToFloat([-0.2,0.773,-0.016]))
Shape57 = x3d.Shape()
Shape57.setDEF("sitebox")
Appearance58 = x3d.Appearance()
Material59 = x3d.Material()
Material59.setAmbientIntensity(1)
Material59.setDiffuseColor(x3d.doubleToFloat([1,0,0]))
Material59.setEmissiveColor(x3d.doubleToFloat([1,0,0]))
Material59.setShininess(0.7)
Material59.setSpecularColor(x3d.doubleToFloat([1,0,0]))

Appearance58.setMaterial(Material59)

Shape57.setAppearance(Appearance58)
IndexedFaceSet60 = x3d.IndexedFaceSet()
IndexedFaceSet60.setCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1])
IndexedFaceSet60.setCreaseAngle(0.1)
Coordinate61 = x3d.Coordinate()
Coordinate61.setUSE("boxCoords")

IndexedFaceSet60.setCoord(Coordinate61)

Shape57.setGeometry(IndexedFaceSet60)

Transform56.addChild(Shape57)

Group48.addChild(Transform56)
Transform62 = x3d.Transform()
Transform62.setScale(x3d.doubleToFloat([0.1,0.1,0.1]))
Transform62.setTranslation(x3d.doubleToFloat([0,0.2,0]))
Shape63 = x3d.Shape()
Appearance64 = x3d.Appearance()
Appearance64.setDEF("SegmentLine")
Material65 = x3d.Material()
Material65.setDiffuseColor(x3d.doubleToFloat([0,1,0]))
Material65.setEmissiveColor(x3d.doubleToFloat([0,1,0]))
Material65.setSpecularColor(x3d.doubleToFloat([0,1,0]))

Appearance64.setMaterial(Material65)

Shape63.setAppearance(Appearance64)
IndexedLineSet66 = x3d.IndexedLineSet()
IndexedLineSet66.setCoordIndex([0,1,-1])
Coordinate67 = x3d.Coordinate()
Coordinate67.setPoint(x3d.doubleToFloat([0,0,0,0,0.0001,0]))

IndexedLineSet66.setCoord(Coordinate67)

Shape63.setGeometry(IndexedLineSet66)

Transform62.addChild(Shape63)

Group48.addChild(Transform62)
Transform68 = x3d.Transform()
Transform68.setScale(x3d.doubleToFloat([0.1,0.1,0.1]))
Transform68.setTranslation(x3d.doubleToFloat([-0.2,0.773,-0.016]))
Shape69 = x3d.Shape()
Shape69.setDEF("skinsphere")
Appearance70 = x3d.Appearance()
Material71 = x3d.Material()
Material71.setAmbientIntensity(0.5)
Material71.setDiffuseColor(x3d.doubleToFloat([0,1,0]))
Material71.setEmissiveColor(x3d.doubleToFloat([0,1,0]))
Material71.setShininess(1)
Material71.setSpecularColor(x3d.doubleToFloat([0,1,0]))

Appearance70.setMaterial(Material71)

Shape69.setAppearance(Appearance70)
Sphere72 = x3d.Sphere()
Sphere72.setRadius(0.005)

Shape69.setGeometry(Sphere72)

Transform68.addChild(Shape69)

Group48.addChild(Transform68)

Scene32.addChild(Group48)
Group73 = x3d.Group()
Group73.setDEF("SpecHumanoid")
Group74 = x3d.Group()
Group74.setDEF("JoeISOHumanoid")
HAnimHumanoid75 = x3d.HAnimHumanoid()
HAnimHumanoid75.setName("Human")
HAnimHumanoid75.setDEF("Joe_Human")
HAnimHumanoid75.setLoa(4)
HAnimHumanoid75.setVersion("2.0")

HAnimHumanoid75.addComments(x3d.CommentsBlock("""original HAnimHumanoid info='\"humanoidVersion=2.0\"'"""))

HAnimHumanoid75.addComments(x3d.CommentsBlock("""<LOD containerField='skin'> (Switch whichChoice='0' and LOD parents each already work in view3dscene)"""))

HAnimHumanoid75.addComments(x3d.CommentsBlock("""</LOD>"""))
MetadataSet76 = x3d.MetadataSet()
MetadataSet76.setName("HAnimHumanoid.info")
MetadataSet76.setReference("https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/ObjectInterfaces.html#Humanoid")
MetadataString77 = x3d.MetadataString()
MetadataString77.setName("humanoidVersion")
MetadataString77.setValue(["2.0"])

MetadataSet76.setMetadata(MetadataString77)

HAnimHumanoid75.setMetadata(MetadataSet76)
HAnimJoint78 = x3d.HAnimJoint()
HAnimJoint78.setName("humanoid_root")
HAnimJoint78.setDEF("Joe_humanoid_root")
HAnimJoint78.setCenter(x3d.doubleToFloat([0,0.875,0]))
HAnimJoint78.setContainerFieldOverride("skeleton")
HAnimSegment79 = x3d.HAnimSegment()
HAnimSegment79.setName("sacrum")
HAnimSegment79.setDEF("Joe_sacrum")
Transform80 = x3d.Transform()
Transform80.setTranslation(x3d.doubleToFloat([0,0.875,0]))
Shape81 = x3d.Shape()
Shape81.setUSE("jointbox")

Transform80.addChild(Shape81)

HAnimSegment79.addChild(Transform80)
Shape82 = x3d.Shape()
Appearance83 = x3d.Appearance()
Appearance83.setUSE("SegmentLine")

Shape82.setAppearance(Appearance83)
IndexedLineSet84 = x3d.IndexedLineSet()
IndexedLineSet84.setCoordIndex([0,1,-1])
Coordinate85 = x3d.Coordinate()
Coordinate85.setPoint(x3d.doubleToFloat([0,0.875,0,0,0.92,0]))

IndexedLineSet84.setCoord(Coordinate85)

Shape82.setGeometry(IndexedLineSet84)

HAnimSegment79.addChild(Shape82)
Transform86 = x3d.Transform()
Transform86.setTranslation(x3d.doubleToFloat([0,0.92,0.08]))
Shape87 = x3d.Shape()
Shape87.setUSE("skinsphere")

Transform86.addChild(Shape87)

HAnimSegment79.addChild(Transform86)
Transform88 = x3d.Transform()
Transform88.setTranslation(x3d.doubleToFloat([0,0.87,-0.022]))
Shape89 = x3d.Shape()
Shape89.setUSE("skinsphere")

Transform88.addChild(Shape89)

HAnimSegment79.addChild(Transform88)

HAnimJoint78.addChild(HAnimSegment79)
HAnimJoint90 = x3d.HAnimJoint()
HAnimJoint90.setName("sacroiliac")
HAnimJoint90.setDEF("Joe_sacroiliac")
HAnimJoint90.setCenter(x3d.doubleToFloat([0,0.92,0]))
HAnimJoint90.setSkinCoordIndex([17,19,20,21,22,23,26,27,73,82,89,91,93])
HAnimJoint90.setSkinCoordWeight(x3d.doubleToFloat([1,1,1,1,1,1,1,1,1,1,0.35,0.35,1]))
HAnimSegment91 = x3d.HAnimSegment()
HAnimSegment91.setName("pelvis")
HAnimSegment91.setDEF("Joe_pelvis")
Transform92 = x3d.Transform()
Transform92.setTranslation(x3d.doubleToFloat([0,0.9149,0.0016]))
Transform93 = x3d.Transform()
Shape94 = x3d.Shape()
Shape94.setUSE("jointbox")

Transform93.addChild(Shape94)

Transform92.addChild(Transform93)

HAnimSegment91.addChild(Transform92)
Shape95 = x3d.Shape()
Appearance96 = x3d.Appearance()
Appearance96.setUSE("SegmentLine")

Shape95.setAppearance(Appearance96)
IndexedLineSet97 = x3d.IndexedLineSet()
IndexedLineSet97.setCoordIndex([0,1,-1,0,2,-1,0,3,-1])
Coordinate98 = x3d.Coordinate()
Coordinate98.setPoint(x3d.doubleToFloat([0,0.92,0,0.0961,0.9124,0,-0.095,0.9171,0.0029,0,1.045,-0.095]))

IndexedLineSet97.setCoord(Coordinate98)

Shape95.setGeometry(IndexedLineSet97)

HAnimSegment91.addChild(Shape95)
HAnimSite99 = x3d.HAnimSite()
HAnimSite99.setName("l_iliocristale_pt")
HAnimSite99.setDEF("Joe_l_iliocristale_pt")
HAnimSite99.setTranslation(x3d.doubleToFloat([0.1425,1.065,0.0033]))
Shape100 = x3d.Shape()
Shape100.setUSE("sitebox")

HAnimSite99.addChild(Shape100)

HAnimSegment91.addChild(HAnimSite99)
HAnimSite101 = x3d.HAnimSite()
HAnimSite101.setName("l_trochanterion_pt")
HAnimSite101.setDEF("Joe_l_trochanterion_pt")
HAnimSite101.setTranslation(x3d.doubleToFloat([0.15,0.9,-0.01]))
Shape102 = x3d.Shape()
Shape102.setUSE("sitebox")

HAnimSite101.addChild(Shape102)

HAnimSegment91.addChild(HAnimSite101)
HAnimSite103 = x3d.HAnimSite()
HAnimSite103.setName("r_iliocristale_pt")
HAnimSite103.setDEF("Joe_r_iliocristale_pt")
HAnimSite103.setTranslation(x3d.doubleToFloat([-0.1425,1.065,0.0033]))
Shape104 = x3d.Shape()
Shape104.setUSE("sitebox")

HAnimSite103.addChild(Shape104)

HAnimSegment91.addChild(HAnimSite103)
HAnimSite105 = x3d.HAnimSite()
HAnimSite105.setName("r_trochanterion_pt")
HAnimSite105.setDEF("Joe_r_trochanterion_pt")
HAnimSite105.setTranslation(x3d.doubleToFloat([-0.15,0.9,-0.01]))
Shape106 = x3d.Shape()
Shape106.setUSE("sitebox")

HAnimSite105.addChild(Shape106)

HAnimSegment91.addChild(HAnimSite105)
HAnimSite107 = x3d.HAnimSite()
HAnimSite107.setName("l_asis_pt")
HAnimSite107.setDEF("Joe_l_asis_pt")
HAnimSite107.setTranslation(x3d.doubleToFloat([0.0935,1.03,0.075]))
Shape108 = x3d.Shape()
Shape108.setUSE("sitebox")

HAnimSite107.addChild(Shape108)

HAnimSegment91.addChild(HAnimSite107)
HAnimSite109 = x3d.HAnimSite()
HAnimSite109.setName("r_asis_pt")
HAnimSite109.setDEF("Joe_r_asis_pt")
HAnimSite109.setTranslation(x3d.doubleToFloat([-0.0935,1.03,0.075]))
Shape110 = x3d.Shape()
Shape110.setUSE("sitebox")

HAnimSite109.addChild(Shape110)

HAnimSegment91.addChild(HAnimSite109)
HAnimSite111 = x3d.HAnimSite()
HAnimSite111.setName("l_psis_pt")
HAnimSite111.setDEF("Joe_l_psis_pt")
HAnimSite111.setTranslation(x3d.doubleToFloat([0.0773,1.019,-0.12]))
Shape112 = x3d.Shape()
Shape112.setUSE("sitebox")

HAnimSite111.addChild(Shape112)

HAnimSegment91.addChild(HAnimSite111)
HAnimSite113 = x3d.HAnimSite()
HAnimSite113.setName("r_psis_pt")
HAnimSite113.setDEF("Joe_r_psis_pt")
HAnimSite113.setTranslation(x3d.doubleToFloat([-0.0773,1.019,-0.12]))
Shape114 = x3d.Shape()
Shape114.setUSE("sitebox")

HAnimSite113.addChild(Shape114)

HAnimSegment91.addChild(HAnimSite113)
HAnimSite115 = x3d.HAnimSite()
HAnimSite115.setName("floormarker_pt")
HAnimSite115.setDEF("Joe_floormarker_pt")
Transform116 = x3d.Transform()
Transform116.setScale(x3d.doubleToFloat([3,3,3]))
Shape117 = x3d.Shape()
Shape117.setUSE("sitebox")

Transform116.addChild(Shape117)

HAnimSite115.addChild(Transform116)

HAnimSegment91.addChild(HAnimSite115)
HAnimSite118 = x3d.HAnimSite()
HAnimSite118.setName("crotch_pt")
HAnimSite118.setDEF("Joe_crotch_pt")
HAnimSite118.setTranslation(x3d.doubleToFloat([0,0.87,-0.022]))
Shape119 = x3d.Shape()
Shape119.setUSE("sitebox")

HAnimSite118.addChild(Shape119)

HAnimSegment91.addChild(HAnimSite118)

HAnimJoint90.addChild(HAnimSegment91)
HAnimJoint120 = x3d.HAnimJoint()
HAnimJoint120.setName("l_hip")
HAnimJoint120.setDEF("Joe_l_hip")
HAnimJoint120.setCenter(x3d.doubleToFloat([0.1,0.92,0]))
HAnimJoint120.setSkinCoordIndex([89,90,94,95,96,97])
HAnimJoint120.setSkinCoordWeight(x3d.doubleToFloat([0.65,1,1,1,1,1]))
HAnimSegment121 = x3d.HAnimSegment()
HAnimSegment121.setName("l_thigh")
HAnimSegment121.setDEF("Joe_l_thigh")
Transform122 = x3d.Transform()
Transform122.setTranslation(x3d.doubleToFloat([0.1,0.92,0]))
Shape123 = x3d.Shape()
Shape123.setUSE("jointbox")

Transform122.addChild(Shape123)

HAnimSegment121.addChild(Transform122)
Shape124 = x3d.Shape()
Appearance125 = x3d.Appearance()
Appearance125.setUSE("SegmentLine")

Shape124.setAppearance(Appearance125)
IndexedLineSet126 = x3d.IndexedLineSet()
IndexedLineSet126.setCoordIndex([0,1,-1])
Coordinate127 = x3d.Coordinate()
Coordinate127.setPoint(x3d.doubleToFloat([0.1,0.92,0,0.115,0.466,0]))

IndexedLineSet126.setCoord(Coordinate127)

Shape124.setGeometry(IndexedLineSet126)

HAnimSegment121.addChild(Shape124)
Transform128 = x3d.Transform()
Transform128.setTranslation(x3d.doubleToFloat([0.1,0.9,0.0775]))
Shape129 = x3d.Shape()
Shape129.setUSE("skinsphere")

Transform128.addChild(Shape129)

HAnimSegment121.addChild(Transform128)
Transform130 = x3d.Transform()
Transform130.setTranslation(x3d.doubleToFloat([0.079,0.92,-0.14]))
Shape131 = x3d.Shape()
Shape131.setUSE("skinsphere")

Transform130.addChild(Shape131)

HAnimSegment121.addChild(Transform130)
Transform132 = x3d.Transform()
Transform132.setTranslation(x3d.doubleToFloat([0.171,0.65,0]))
Shape133 = x3d.Shape()
Shape133.setUSE("skinsphere")

Transform132.addChild(Shape133)

HAnimSegment121.addChild(Transform132)
Transform134 = x3d.Transform()
Transform134.setTranslation(x3d.doubleToFloat([0.02,0.65,0]))
Shape135 = x3d.Shape()
Shape135.setUSE("skinsphere")

Transform134.addChild(Shape135)

HAnimSegment121.addChild(Transform134)
Transform136 = x3d.Transform()
Transform136.setTranslation(x3d.doubleToFloat([0.1,0.65,-0.08]))
Shape137 = x3d.Shape()
Shape137.setUSE("skinsphere")

Transform136.addChild(Shape137)

HAnimSegment121.addChild(Transform136)
Transform138 = x3d.Transform()
Transform138.setTranslation(x3d.doubleToFloat([0.1,0.65,0.07]))
Shape139 = x3d.Shape()
Shape139.setUSE("skinsphere")

Transform138.addChild(Shape139)

HAnimSegment121.addChild(Transform138)
HAnimSite140 = x3d.HAnimSite()
HAnimSite140.setName("l_knee_crease_pt")
HAnimSite140.setDEF("Joe_l_knee_crease_pt")
HAnimSite140.setTranslation(x3d.doubleToFloat([0.115,0.466,-0.055]))
Shape141 = x3d.Shape()
Shape141.setUSE("sitebox")

HAnimSite140.addChild(Shape141)

HAnimSegment121.addChild(HAnimSite140)
HAnimSite142 = x3d.HAnimSite()
HAnimSite142.setName("l_femoral_lateral_epicondyle_pt")
HAnimSite142.setDEF("Joe_l_femoral_lateral_epicondyle_pt")
HAnimSite142.setTranslation(x3d.doubleToFloat([0.17,0.466,0]))
Shape143 = x3d.Shape()
Shape143.setUSE("sitebox")

HAnimSite142.addChild(Shape143)

HAnimSegment121.addChild(HAnimSite142)
HAnimSite144 = x3d.HAnimSite()
HAnimSite144.setName("l_femoral_medial_epicondyle_pt")
HAnimSite144.setDEF("Joe_l_femoral_medial_epicondyle_pt")
HAnimSite144.setTranslation(x3d.doubleToFloat([0.05,0.466,0]))
Shape145 = x3d.Shape()
Shape145.setUSE("sitebox")

HAnimSite144.addChild(Shape145)

HAnimSegment121.addChild(HAnimSite144)

HAnimJoint120.addChild(HAnimSegment121)
HAnimJoint146 = x3d.HAnimJoint()
HAnimJoint146.setName("l_knee")
HAnimJoint146.setDEF("Joe_l_knee")
HAnimJoint146.setCenter(x3d.doubleToFloat([0.115,0.466,0]))
HAnimJoint146.setSkinCoordIndex([334,335,336,337,338,339,340,341])
HAnimJoint146.setSkinCoordWeight(x3d.doubleToFloat([1,1,1,1,1,1,1,1]))
HAnimSegment147 = x3d.HAnimSegment()
HAnimSegment147.setName("l_calf")
HAnimSegment147.setDEF("Joe_l_calf")
Transform148 = x3d.Transform()
Transform148.setTranslation(x3d.doubleToFloat([0.115,0.466,0]))
Shape149 = x3d.Shape()
Shape149.setUSE("jointbox")

Transform148.addChild(Shape149)

HAnimSegment147.addChild(Transform148)
Shape150 = x3d.Shape()
Appearance151 = x3d.Appearance()
Appearance151.setUSE("SegmentLine")

Shape150.setAppearance(Appearance151)
IndexedLineSet152 = x3d.IndexedLineSet()
IndexedLineSet152.setCoordIndex([0,1,-1])
Coordinate153 = x3d.Coordinate()
Coordinate153.setPoint(x3d.doubleToFloat([0.115,0.466,0,0.1,0.069,0]))

IndexedLineSet152.setCoord(Coordinate153)

Shape150.setGeometry(IndexedLineSet152)

HAnimSegment147.addChild(Shape150)
Transform154 = x3d.Transform()
Transform154.setTranslation(x3d.doubleToFloat([0.115,0.466,0.06]))
Shape155 = x3d.Shape()
Shape155.setUSE("skinsphere")

Transform154.addChild(Shape155)

HAnimSegment147.addChild(Transform154)
Transform156 = x3d.Transform()
Transform156.setTranslation(x3d.doubleToFloat([0.115,0.466,-0.055]))
Shape157 = x3d.Shape()
Shape157.setUSE("skinsphere")

Transform156.addChild(Shape157)

HAnimSegment147.addChild(Transform156)
Transform158 = x3d.Transform()
Transform158.setTranslation(x3d.doubleToFloat([0.17,0.466,0]))
Shape159 = x3d.Shape()
Shape159.setUSE("skinsphere")

Transform158.addChild(Shape159)

HAnimSegment147.addChild(Transform158)
Transform160 = x3d.Transform()
Transform160.setTranslation(x3d.doubleToFloat([0.05,0.466,0]))
Shape161 = x3d.Shape()
Shape161.setUSE("skinsphere")

Transform160.addChild(Shape161)

HAnimSegment147.addChild(Transform160)
Transform162 = x3d.Transform()
Transform162.setTranslation(x3d.doubleToFloat([0.17,0.3,0]))
Shape163 = x3d.Shape()
Shape163.setUSE("skinsphere")

Transform162.addChild(Shape163)

HAnimSegment147.addChild(Transform162)
Transform164 = x3d.Transform()
Transform164.setTranslation(x3d.doubleToFloat([0.06,0.3,0]))
Shape165 = x3d.Shape()
Shape165.setUSE("skinsphere")

Transform164.addChild(Shape165)

HAnimSegment147.addChild(Transform164)
Transform166 = x3d.Transform()
Transform166.setTranslation(x3d.doubleToFloat([0.1,0.3,-0.05]))
Shape167 = x3d.Shape()
Shape167.setUSE("skinsphere")

Transform166.addChild(Shape167)

HAnimSegment147.addChild(Transform166)
Transform168 = x3d.Transform()
Transform168.setTranslation(x3d.doubleToFloat([0.1,0.3,0.05]))
Shape169 = x3d.Shape()
Shape169.setUSE("skinsphere")

Transform168.addChild(Shape169)

HAnimSegment147.addChild(Transform168)
HAnimSite170 = x3d.HAnimSite()
HAnimSite170.setName("l_lateral_malleolus_pt")
HAnimSite170.setDEF("Joe_l_lateral_malleolus_pt")
HAnimSite170.setTranslation(x3d.doubleToFloat([0.15,0.07,0]))
Shape171 = x3d.Shape()
Shape171.setUSE("sitebox")

HAnimSite170.addChild(Shape171)

HAnimSegment147.addChild(HAnimSite170)
HAnimSite172 = x3d.HAnimSite()
HAnimSite172.setName("l_medial_malleolus_pt")
HAnimSite172.setDEF("Joe_l_medial_malleolus_pt")
HAnimSite172.setTranslation(x3d.doubleToFloat([0.085,0.086,0.0125]))
Shape173 = x3d.Shape()
Shape173.setUSE("sitebox")

HAnimSite172.addChild(Shape173)

HAnimSegment147.addChild(HAnimSite172)

HAnimJoint146.addChild(HAnimSegment147)
HAnimJoint174 = x3d.HAnimJoint()
HAnimJoint174.setName("l_talocrural")
HAnimJoint174.setDEF("Joe_l_talocrural")
HAnimJoint174.setCenter(x3d.doubleToFloat([0.115,0.069,0]))
HAnimJoint174.setSkinCoordIndex([342,343,344,345])
HAnimJoint174.setSkinCoordWeight(x3d.doubleToFloat([1,1,1,1]))
HAnimSegment175 = x3d.HAnimSegment()
HAnimSegment175.setName("l_talus")
HAnimSegment175.setDEF("Joe_l_talus")
Transform176 = x3d.Transform()
Transform176.setTranslation(x3d.doubleToFloat([0.115,0.069,0]))
Shape177 = x3d.Shape()
Shape177.setUSE("jointbox")

Transform176.addChild(Shape177)

HAnimSegment175.addChild(Transform176)
Shape178 = x3d.Shape()
Appearance179 = x3d.Appearance()
Appearance179.setUSE("SegmentLine")

Shape178.setAppearance(Appearance179)
IndexedLineSet180 = x3d.IndexedLineSet()
IndexedLineSet180.setCoordIndex([0,1,-1])
Coordinate181 = x3d.Coordinate()
Coordinate181.setPoint(x3d.doubleToFloat([0.1,0.069,0,0.115,0.031,0.03]))

IndexedLineSet180.setCoord(Coordinate181)

Shape178.setGeometry(IndexedLineSet180)

HAnimSegment175.addChild(Shape178)
Transform182 = x3d.Transform()
Transform182.setTranslation(x3d.doubleToFloat([0.15,0.07,0]))
Shape183 = x3d.Shape()
Shape183.setUSE("skinsphere")

Transform182.addChild(Shape183)

HAnimSegment175.addChild(Transform182)
Transform184 = x3d.Transform()
Transform184.setTranslation(x3d.doubleToFloat([0.085,0.086,0.0125]))
Shape185 = x3d.Shape()
Shape185.setUSE("skinsphere")

Transform184.addChild(Shape185)

HAnimSegment175.addChild(Transform184)
Transform186 = x3d.Transform()
Transform186.setTranslation(x3d.doubleToFloat([0.115,0.069,-0.045]))
Shape187 = x3d.Shape()
Shape187.setUSE("skinsphere")

Transform186.addChild(Shape187)

HAnimSegment175.addChild(Transform186)
Transform188 = x3d.Transform()
Transform188.setTranslation(x3d.doubleToFloat([0.117,0.0975,0.0615]))
Shape189 = x3d.Shape()
Shape189.setUSE("skinsphere")

Transform188.addChild(Shape189)

HAnimSegment175.addChild(Transform188)
HAnimSite190 = x3d.HAnimSite()
HAnimSite190.setName("l_sphyrion_pt")
HAnimSite190.setDEF("Joe_l_sphyrion_pt")
HAnimSite190.setTranslation(x3d.doubleToFloat([0.09,0.056,0.0125]))
Shape191 = x3d.Shape()
Shape191.setUSE("sitebox")

HAnimSite190.addChild(Shape191)

HAnimSegment175.addChild(HAnimSite190)
HAnimSite192 = x3d.HAnimSite()
HAnimSite192.setName("l_calcaneus_posterior_pt")
HAnimSite192.setDEF("Joe_l_calcaneus_posterior_pt")
HAnimSite192.setTranslation(x3d.doubleToFloat([0.115,0.04,-0.055]))
Shape193 = x3d.Shape()
Shape193.setUSE("sitebox")

HAnimSite192.addChild(Shape193)

HAnimSegment175.addChild(HAnimSite192)

HAnimJoint174.addChild(HAnimSegment175)
HAnimJoint194 = x3d.HAnimJoint()
HAnimJoint194.setName("l_tarsometatarsal_2")
HAnimJoint194.setDEF("Joe_l_tarsometatarsal_2")
HAnimJoint194.setCenter(x3d.doubleToFloat([0.115,0.031,0.03]))
HAnimJoint194.setSkinCoordIndex([346,347,348,71])
HAnimJoint194.setSkinCoordWeight(x3d.doubleToFloat([1,1,1,1]))
HAnimSegment195 = x3d.HAnimSegment()
HAnimSegment195.setName("l_metatarsal_2")
HAnimSegment195.setDEF("Joe_l_metatarsal_2")
Transform196 = x3d.Transform()
Transform196.setTranslation(x3d.doubleToFloat([0.115,0.031,0.03]))
Shape197 = x3d.Shape()
Shape197.setUSE("jointbox")

Transform196.addChild(Shape197)

HAnimSegment195.addChild(Transform196)
Shape198 = x3d.Shape()
Appearance199 = x3d.Appearance()
Appearance199.setUSE("SegmentLine")

Shape198.setAppearance(Appearance199)
IndexedLineSet200 = x3d.IndexedLineSet()
IndexedLineSet200.setCoordIndex([0,1,-1])
Coordinate201 = x3d.Coordinate()
Coordinate201.setPoint(x3d.doubleToFloat([0.115,0.031,0.03,0.115,0.037,0.09]))

IndexedLineSet200.setCoord(Coordinate201)

Shape198.setGeometry(IndexedLineSet200)

HAnimSegment195.addChild(Shape198)
Transform202 = x3d.Transform()
Transform202.setTranslation(x3d.doubleToFloat([0.1375,0.006,-0.03]))
Shape203 = x3d.Shape()
Shape203.setUSE("skinsphere")

Transform202.addChild(Shape203)

HAnimSegment195.addChild(Transform202)
Transform204 = x3d.Transform()
Transform204.setTranslation(x3d.doubleToFloat([0.095,0.006,-0.03]))
Shape205 = x3d.Shape()
Shape205.setUSE("skinsphere")

Transform204.addChild(Shape205)

HAnimSegment195.addChild(Transform204)
Transform206 = x3d.Transform()
Transform206.setTranslation(x3d.doubleToFloat([0.115,0.015,-0.045]))
Shape207 = x3d.Shape()
Shape207.setUSE("skinsphere")

Transform206.addChild(Shape207)

HAnimSegment195.addChild(Transform206)

HAnimJoint194.addChild(HAnimSegment195)
HAnimJoint208 = x3d.HAnimJoint()
HAnimJoint208.setName("l_metatarsophalangeal_2")
HAnimJoint208.setDEF("Joe_l_metatarsophalangeal_2")
HAnimJoint208.setCenter(x3d.doubleToFloat([0.115,0.037,0.09]))
HAnimJoint208.setSkinCoordIndex([349,350,351,352])
HAnimJoint208.setSkinCoordWeight(x3d.doubleToFloat([1,1,1,1]))
HAnimSegment209 = x3d.HAnimSegment()
HAnimSegment209.setName("l_tarsal_proximal_phalanx_2")
HAnimSegment209.setDEF("Joe_l_tarsal_proximal_phalanx_2")
Transform210 = x3d.Transform()
Transform210.setTranslation(x3d.doubleToFloat([0.115,0.037,0.09]))
Shape211 = x3d.Shape()
Shape211.setUSE("jointbox")

Transform210.addChild(Shape211)

HAnimSegment209.addChild(Transform210)
Shape212 = x3d.Shape()
Appearance213 = x3d.Appearance()
Appearance213.setUSE("SegmentLine")

Shape212.setAppearance(Appearance213)
IndexedLineSet214 = x3d.IndexedLineSet()
IndexedLineSet214.setCoordIndex([0,1,-1])
Coordinate215 = x3d.Coordinate()
Coordinate215.setPoint(x3d.doubleToFloat([0.115,0.037,0.09,0.115,0.02,0.122]))

IndexedLineSet214.setCoord(Coordinate215)

Shape212.setGeometry(IndexedLineSet214)

HAnimSegment209.addChild(Shape212)
Transform216 = x3d.Transform()
Transform216.setTranslation(x3d.doubleToFloat([0.115,0.06,0.1]))
Shape217 = x3d.Shape()
Shape217.setUSE("skinsphere")

Transform216.addChild(Shape217)

HAnimSegment209.addChild(Transform216)
Transform218 = x3d.Transform()
Transform218.setTranslation(x3d.doubleToFloat([0.115,0,0.07]))
Shape219 = x3d.Shape()
Shape219.setUSE("skinsphere")

Transform218.addChild(Shape219)

HAnimSegment209.addChild(Transform218)
Transform220 = x3d.Transform()
Transform220.setTranslation(x3d.doubleToFloat([0.165,0,0.07]))
Shape221 = x3d.Shape()
Shape221.setUSE("skinsphere")

Transform220.addChild(Shape221)

HAnimSegment209.addChild(Transform220)
Transform222 = x3d.Transform()
Transform222.setTranslation(x3d.doubleToFloat([0.095,0,0.07]))
Shape223 = x3d.Shape()
Shape223.setUSE("skinsphere")

Transform222.addChild(Shape223)

HAnimSegment209.addChild(Transform222)
HAnimSite224 = x3d.HAnimSite()
HAnimSite224.setName("l_metatarsal_phalanx_1_pt")
HAnimSite224.setDEF("Joe_l_metatarsal_phalanx_1_pt")
HAnimSite224.setTranslation(x3d.doubleToFloat([0.087,0.01,0.122]))
Shape225 = x3d.Shape()
Shape225.setUSE("sitebox")

HAnimSite224.addChild(Shape225)

HAnimSegment209.addChild(HAnimSite224)

HAnimJoint208.addChild(HAnimSegment209)
HAnimJoint226 = x3d.HAnimJoint()
HAnimJoint226.setName("l_metatarsal")
HAnimJoint226.setDEF("Joe_l_metatarsal")
HAnimJoint226.setCenter(x3d.doubleToFloat([0.115,0.02,0.122]))
HAnimJoint226.setSkinCoordIndex([353,354,355,356,357,358,359,360,361])
HAnimJoint226.setSkinCoordWeight(x3d.doubleToFloat([1,1,1,1,1,1,1,1,1]))
HAnimSegment227 = x3d.HAnimSegment()
HAnimSegment227.setName("l_tarsal_distal_phalanx_2")
HAnimSegment227.setDEF("Joe_l_tarsal_distal_phalanx_2")
Transform228 = x3d.Transform()
Transform228.setTranslation(x3d.doubleToFloat([0.115,0.02,0.13]))
Shape229 = x3d.Shape()
Shape229.setUSE("jointbox")

Transform228.addChild(Shape229)

HAnimSegment227.addChild(Transform228)
Shape230 = x3d.Shape()
Appearance231 = x3d.Appearance()
Appearance231.setUSE("SegmentLine")

Shape230.setAppearance(Appearance231)
IndexedLineSet232 = x3d.IndexedLineSet()
IndexedLineSet232.setCoordIndex([0,1,-1])
Coordinate233 = x3d.Coordinate()
Coordinate233.setPoint(x3d.doubleToFloat([0.115,0.02,0.122,0.132,0.013,0.19]))

IndexedLineSet232.setCoord(Coordinate233)

Shape230.setGeometry(IndexedLineSet232)

HAnimSegment227.addChild(Shape230)
Transform234 = x3d.Transform()
Transform234.setTranslation(x3d.doubleToFloat([0.115,0.04,0.13]))
Shape235 = x3d.Shape()
Shape235.setUSE("skinsphere")

Transform234.addChild(Shape235)

HAnimSegment227.addChild(Transform234)
Transform236 = x3d.Transform()
Transform236.setTranslation(x3d.doubleToFloat([0.125,0,0.12]))
Shape237 = x3d.Shape()
Shape237.setUSE("skinsphere")

Transform236.addChild(Shape237)

HAnimSegment227.addChild(Transform236)
Transform238 = x3d.Transform()
Transform238.setTranslation(x3d.doubleToFloat([0.165,0,0.12]))
Shape239 = x3d.Shape()
Shape239.setUSE("skinsphere")

Transform238.addChild(Shape239)

HAnimSegment227.addChild(Transform238)
Transform240 = x3d.Transform()
Transform240.setTranslation(x3d.doubleToFloat([0.087,0,0.122]))
Shape241 = x3d.Shape()
Shape241.setUSE("skinsphere")

Transform240.addChild(Shape241)

HAnimSegment227.addChild(Transform240)
Transform242 = x3d.Transform()
Transform242.setTranslation(x3d.doubleToFloat([0.09,0.012,0.188]))
Shape243 = x3d.Shape()
Shape243.setUSE("skinsphere")

Transform242.addChild(Shape243)

HAnimSegment227.addChild(Transform242)
Transform244 = x3d.Transform()
Transform244.setTranslation(x3d.doubleToFloat([0.11,0.011,0.19]))
Shape245 = x3d.Shape()
Shape245.setUSE("skinsphere")

Transform244.addChild(Shape245)

HAnimSegment227.addChild(Transform244)
Transform246 = x3d.Transform()
Transform246.setTranslation(x3d.doubleToFloat([0.128,0.011,0.185]))
Shape247 = x3d.Shape()
Shape247.setUSE("skinsphere")

Transform246.addChild(Shape247)

HAnimSegment227.addChild(Transform246)
Transform248 = x3d.Transform()
Transform248.setTranslation(x3d.doubleToFloat([0.142,0.011,0.178]))
Shape249 = x3d.Shape()
Shape249.setUSE("skinsphere")

Transform248.addChild(Shape249)

HAnimSegment227.addChild(Transform248)
Transform250 = x3d.Transform()
Transform250.setTranslation(x3d.doubleToFloat([0.154,0.01,0.168]))
Shape251 = x3d.Shape()
Shape251.setUSE("skinsphere")

Transform250.addChild(Shape251)

HAnimSegment227.addChild(Transform250)
HAnimSite252 = x3d.HAnimSite()
HAnimSite252.setName("l_metatarsal_phalanx_5_pt")
HAnimSite252.setDEF("Joe_l_metatarsal_phalanx_5_pt")
HAnimSite252.setTranslation(x3d.doubleToFloat([0.165,0.01,0.12]))
Shape253 = x3d.Shape()
Shape253.setUSE("sitebox")

HAnimSite252.addChild(Shape253)

HAnimSegment227.addChild(HAnimSite252)
HAnimSite254 = x3d.HAnimSite()
HAnimSite254.setName("l_tarsal_distal_phalanx_2_pt")
HAnimSite254.setDEF("Joe_l_tarsal_distal_phalanx_2_pt")
HAnimSite254.setTranslation(x3d.doubleToFloat([0.11,0.011,0.19]))
Shape255 = x3d.Shape()
Shape255.setUSE("sitebox")

HAnimSite254.addChild(Shape255)

HAnimSegment227.addChild(HAnimSite254)

HAnimJoint226.addChild(HAnimSegment227)

HAnimJoint208.addChild(HAnimJoint226)

HAnimJoint194.addChild(HAnimJoint208)

HAnimJoint174.addChild(HAnimJoint194)

HAnimJoint146.addChild(HAnimJoint174)

HAnimJoint120.addChild(HAnimJoint146)

HAnimJoint90.addChild(HAnimJoint120)
HAnimJoint256 = x3d.HAnimJoint()
HAnimJoint256.setName("r_hip")
HAnimJoint256.setDEF("Joe_r_hip")
HAnimJoint256.setCenter(x3d.doubleToFloat([-0.1,0.92,0]))
HAnimJoint256.setSkinCoordIndex([91,92,98,99,100,101])
HAnimJoint256.setSkinCoordWeight(x3d.doubleToFloat([0.65,1,1,1,1,1]))
HAnimSegment257 = x3d.HAnimSegment()
HAnimSegment257.setName("r_thigh")
HAnimSegment257.setDEF("Joe_r_thigh")
Transform258 = x3d.Transform()
Transform258.setTranslation(x3d.doubleToFloat([-0.1,0.92,0]))
Shape259 = x3d.Shape()
Shape259.setUSE("jointbox")

Transform258.addChild(Shape259)

HAnimSegment257.addChild(Transform258)
Shape260 = x3d.Shape()
Appearance261 = x3d.Appearance()
Appearance261.setUSE("SegmentLine")

Shape260.setAppearance(Appearance261)
IndexedLineSet262 = x3d.IndexedLineSet()
IndexedLineSet262.setCoordIndex([0,1,-1])
Coordinate263 = x3d.Coordinate()
Coordinate263.setPoint(x3d.doubleToFloat([-0.1,0.92,0,-0.1,0.4913,0]))

IndexedLineSet262.setCoord(Coordinate263)

Shape260.setGeometry(IndexedLineSet262)

HAnimSegment257.addChild(Shape260)
Transform264 = x3d.Transform()
Transform264.setTranslation(x3d.doubleToFloat([-0.079,0.92,-0.14]))
Shape265 = x3d.Shape()
Shape265.setUSE("skinsphere")

Transform264.addChild(Shape265)

HAnimSegment257.addChild(Transform264)
Transform266 = x3d.Transform()
Transform266.setTranslation(x3d.doubleToFloat([-0.1,0.9,0.075]))
Shape267 = x3d.Shape()
Shape267.setUSE("skinsphere")

Transform266.addChild(Shape267)

HAnimSegment257.addChild(Transform266)
Transform268 = x3d.Transform()
Transform268.setTranslation(x3d.doubleToFloat([-0.171,0.65,0]))
Shape269 = x3d.Shape()
Shape269.setUSE("skinsphere")

Transform268.addChild(Shape269)

HAnimSegment257.addChild(Transform268)
Transform270 = x3d.Transform()
Transform270.setTranslation(x3d.doubleToFloat([-0.02,0.65,0]))
Shape271 = x3d.Shape()
Shape271.setUSE("skinsphere")

Transform270.addChild(Shape271)

HAnimSegment257.addChild(Transform270)
Transform272 = x3d.Transform()
Transform272.setTranslation(x3d.doubleToFloat([-0.1,0.65,-0.08]))
Shape273 = x3d.Shape()
Shape273.setUSE("skinsphere")

Transform272.addChild(Shape273)

HAnimSegment257.addChild(Transform272)
Transform274 = x3d.Transform()
Transform274.setTranslation(x3d.doubleToFloat([-0.1,0.65,0.07]))
Shape275 = x3d.Shape()
Shape275.setUSE("skinsphere")

Transform274.addChild(Shape275)

HAnimSegment257.addChild(Transform274)
HAnimSite276 = x3d.HAnimSite()
HAnimSite276.setName("r_knee_crease_pt")
HAnimSite276.setDEF("Joe_r_knee_crease_pt")
HAnimSite276.setTranslation(x3d.doubleToFloat([-0.115,0.466,-0.055]))
Shape277 = x3d.Shape()
Shape277.setUSE("sitebox")

HAnimSite276.addChild(Shape277)

HAnimSegment257.addChild(HAnimSite276)
HAnimSite278 = x3d.HAnimSite()
HAnimSite278.setName("r_femoral_lateral_epicondyle_pt")
HAnimSite278.setDEF("Joe_r_femoral_lateral_epicondyle_pt")
HAnimSite278.setTranslation(x3d.doubleToFloat([-0.17,0.466,0]))
Shape279 = x3d.Shape()
Shape279.setUSE("sitebox")

HAnimSite278.addChild(Shape279)

HAnimSegment257.addChild(HAnimSite278)
HAnimSite280 = x3d.HAnimSite()
HAnimSite280.setName("r_femoral_medial_epicondyle_pt")
HAnimSite280.setDEF("Joe_r_femoral_medial_epicondyle_pt")
HAnimSite280.setTranslation(x3d.doubleToFloat([-0.05,0.466,0]))
Shape281 = x3d.Shape()
Shape281.setUSE("sitebox")

HAnimSite280.addChild(Shape281)

HAnimSegment257.addChild(HAnimSite280)

HAnimJoint256.addChild(HAnimSegment257)
HAnimJoint282 = x3d.HAnimJoint()
HAnimJoint282.setName("r_knee")
HAnimJoint282.setDEF("Joe_r_knee")
HAnimJoint282.setCenter(x3d.doubleToFloat([-0.05,0.466,0]))
HAnimJoint282.setSkinCoordIndex([362,363,364,365,366,367,368,369])
HAnimJoint282.setSkinCoordWeight(x3d.doubleToFloat([1,1,1,1,1,1,1,1]))
HAnimSegment283 = x3d.HAnimSegment()
HAnimSegment283.setName("r_calf")
HAnimSegment283.setDEF("Joe_r_calf")
Transform284 = x3d.Transform()
Transform284.setTranslation(x3d.doubleToFloat([-0.1,0.4913,0]))
Shape285 = x3d.Shape()
Shape285.setUSE("jointbox")

Transform284.addChild(Shape285)

HAnimSegment283.addChild(Transform284)
Shape286 = x3d.Shape()
Appearance287 = x3d.Appearance()
Appearance287.setUSE("SegmentLine")

Shape286.setAppearance(Appearance287)
IndexedLineSet288 = x3d.IndexedLineSet()
IndexedLineSet288.setCoordIndex([0,1,-1])
Coordinate289 = x3d.Coordinate()
Coordinate289.setPoint(x3d.doubleToFloat([-0.1,0.4913,0,-0.1,0.0712,0]))

IndexedLineSet288.setCoord(Coordinate289)

Shape286.setGeometry(IndexedLineSet288)

HAnimSegment283.addChild(Shape286)
Transform290 = x3d.Transform()
Transform290.setTranslation(x3d.doubleToFloat([-0.115,0.466,0.06]))
Shape291 = x3d.Shape()
Shape291.setUSE("skinsphere")

Transform290.addChild(Shape291)

HAnimSegment283.addChild(Transform290)
Transform292 = x3d.Transform()
Transform292.setTranslation(x3d.doubleToFloat([-0.115,0.466,-0.055]))
Shape293 = x3d.Shape()
Shape293.setUSE("skinsphere")

Transform292.addChild(Shape293)

HAnimSegment283.addChild(Transform292)
Transform294 = x3d.Transform()
Transform294.setTranslation(x3d.doubleToFloat([-0.17,0.466,0]))
Shape295 = x3d.Shape()
Shape295.setUSE("skinsphere")

Transform294.addChild(Shape295)

HAnimSegment283.addChild(Transform294)
Transform296 = x3d.Transform()
Transform296.setTranslation(x3d.doubleToFloat([-0.05,0.466,0]))
Shape297 = x3d.Shape()
Shape297.setUSE("skinsphere")

Transform296.addChild(Shape297)

HAnimSegment283.addChild(Transform296)
Transform298 = x3d.Transform()
Transform298.setTranslation(x3d.doubleToFloat([-0.17,0.3,0]))
Shape299 = x3d.Shape()
Shape299.setUSE("skinsphere")

Transform298.addChild(Shape299)

HAnimSegment283.addChild(Transform298)
Transform300 = x3d.Transform()
Transform300.setTranslation(x3d.doubleToFloat([-0.06,0.3,0]))
Shape301 = x3d.Shape()
Shape301.setUSE("skinsphere")

Transform300.addChild(Shape301)

HAnimSegment283.addChild(Transform300)
Transform302 = x3d.Transform()
Transform302.setTranslation(x3d.doubleToFloat([-0.1,0.3,-0.05]))
Shape303 = x3d.Shape()
Shape303.setUSE("skinsphere")

Transform302.addChild(Shape303)

HAnimSegment283.addChild(Transform302)
Transform304 = x3d.Transform()
Transform304.setTranslation(x3d.doubleToFloat([-0.1,0.3,0.05]))
Shape305 = x3d.Shape()
Shape305.setUSE("skinsphere")

Transform304.addChild(Shape305)

HAnimSegment283.addChild(Transform304)
HAnimSite306 = x3d.HAnimSite()
HAnimSite306.setName("r_lateral_malleolus_pt")
HAnimSite306.setDEF("Joe_r_lateral_malleolus_pt")
HAnimSite306.setTranslation(x3d.doubleToFloat([-0.15,0.07,0]))
Shape307 = x3d.Shape()
Shape307.setUSE("sitebox")

HAnimSite306.addChild(Shape307)

HAnimSegment283.addChild(HAnimSite306)
HAnimSite308 = x3d.HAnimSite()
HAnimSite308.setName("r_medial_malleolus_pt")
HAnimSite308.setDEF("Joe_r_medial_malleolus_pt")
HAnimSite308.setTranslation(x3d.doubleToFloat([-0.085,0.086,0.0125]))
Shape309 = x3d.Shape()
Shape309.setUSE("sitebox")

HAnimSite308.addChild(Shape309)

HAnimSegment283.addChild(HAnimSite308)

HAnimJoint282.addChild(HAnimSegment283)
HAnimJoint310 = x3d.HAnimJoint()
HAnimJoint310.setName("r_talocrural")
HAnimJoint310.setDEF("Joe_r_talocrural")
HAnimJoint310.setCenter(x3d.doubleToFloat([-0.115,0.069,0]))
HAnimJoint310.setSkinCoordIndex([370,371,372,373])
HAnimJoint310.setSkinCoordWeight(x3d.doubleToFloat([1,1,1,1]))
HAnimSegment311 = x3d.HAnimSegment()
HAnimSegment311.setName("r_talus")
HAnimSegment311.setDEF("Joe_r_talus")
Transform312 = x3d.Transform()
Transform312.setTranslation(x3d.doubleToFloat([-0.1,0.0712,0]))
Shape313 = x3d.Shape()
Shape313.setUSE("jointbox")

Transform312.addChild(Shape313)

HAnimSegment311.addChild(Transform312)
Shape314 = x3d.Shape()
Appearance315 = x3d.Appearance()
Appearance315.setUSE("SegmentLine")

Shape314.setAppearance(Appearance315)
IndexedLineSet316 = x3d.IndexedLineSet()
IndexedLineSet316.setCoordIndex([0,1,-1])
Coordinate317 = x3d.Coordinate()
Coordinate317.setPoint(x3d.doubleToFloat([-0.1,0.0712,0,-0.1,0.015,-0.01]))

IndexedLineSet316.setCoord(Coordinate317)

Shape314.setGeometry(IndexedLineSet316)

HAnimSegment311.addChild(Shape314)
Transform318 = x3d.Transform()
Transform318.setTranslation(x3d.doubleToFloat([-0.15,0.07,0]))
Shape319 = x3d.Shape()
Shape319.setUSE("skinsphere")

Transform318.addChild(Shape319)

HAnimSegment311.addChild(Transform318)
Transform320 = x3d.Transform()
Transform320.setTranslation(x3d.doubleToFloat([-0.085,0.086,0.0125]))
Shape321 = x3d.Shape()
Shape321.setUSE("skinsphere")

Transform320.addChild(Shape321)

HAnimSegment311.addChild(Transform320)
Transform322 = x3d.Transform()
Transform322.setTranslation(x3d.doubleToFloat([-0.115,0.069,-0.045]))
Shape323 = x3d.Shape()
Shape323.setUSE("skinsphere")

Transform322.addChild(Shape323)

HAnimSegment311.addChild(Transform322)
Transform324 = x3d.Transform()
Transform324.setTranslation(x3d.doubleToFloat([-0.117,0.0975,0.0615]))
Shape325 = x3d.Shape()
Shape325.setUSE("skinsphere")

Transform324.addChild(Shape325)

HAnimSegment311.addChild(Transform324)
HAnimSite326 = x3d.HAnimSite()
HAnimSite326.setName("r_sphyrion_pt")
HAnimSite326.setDEF("Joe_r_sphyrion_pt")
HAnimSite326.setTranslation(x3d.doubleToFloat([-0.09,0.056,0.0125]))
Shape327 = x3d.Shape()
Shape327.setUSE("sitebox")

HAnimSite326.addChild(Shape327)

HAnimSegment311.addChild(HAnimSite326)
HAnimSite328 = x3d.HAnimSite()
HAnimSite328.setName("r_calcaneus_posterior_pt")
HAnimSite328.setDEF("Joe_r_calcaneus_posterior_pt")
HAnimSite328.setTranslation(x3d.doubleToFloat([-0.115,0.04,-0.055]))
Shape329 = x3d.Shape()
Shape329.setUSE("sitebox")

HAnimSite328.addChild(Shape329)

HAnimSegment311.addChild(HAnimSite328)

HAnimJoint310.addChild(HAnimSegment311)
HAnimJoint330 = x3d.HAnimJoint()
HAnimJoint330.setName("r_tarsometatarsal_2")
HAnimJoint330.setDEF("Joe_r_tarsometatarsal_2")
HAnimJoint330.setCenter(x3d.doubleToFloat([-0.1,0.015,-0.01]))
HAnimJoint330.setSkinCoordIndex([374,375,376])
HAnimJoint330.setSkinCoordWeight(x3d.doubleToFloat([1,1,1]))
HAnimSegment331 = x3d.HAnimSegment()
HAnimSegment331.setName("r_metatarsal_2")
HAnimSegment331.setDEF("Joe_r_metatarsal_2")
Transform332 = x3d.Transform()
Transform332.setTranslation(x3d.doubleToFloat([-0.1,0.015,-0.01]))
Shape333 = x3d.Shape()
Shape333.setUSE("jointbox")

Transform332.addChild(Shape333)

HAnimSegment331.addChild(Transform332)
Shape334 = x3d.Shape()
Appearance335 = x3d.Appearance()
Appearance335.setUSE("SegmentLine")

Shape334.setAppearance(Appearance335)
IndexedLineSet336 = x3d.IndexedLineSet()
IndexedLineSet336.setCoordIndex([0,1,-1])
Coordinate337 = x3d.Coordinate()
Coordinate337.setPoint(x3d.doubleToFloat([-0.1,0.015,-0.01,-0.1,0.02,0.07]))

IndexedLineSet336.setCoord(Coordinate337)

Shape334.setGeometry(IndexedLineSet336)

HAnimSegment331.addChild(Shape334)
Transform338 = x3d.Transform()
Transform338.setTranslation(x3d.doubleToFloat([-0.1375,0.006,-0.03]))
Shape339 = x3d.Shape()
Shape339.setUSE("skinsphere")

Transform338.addChild(Shape339)

HAnimSegment331.addChild(Transform338)
Transform340 = x3d.Transform()
Transform340.setTranslation(x3d.doubleToFloat([-0.095,0.006,-0.03]))
Shape341 = x3d.Shape()
Shape341.setUSE("skinsphere")

Transform340.addChild(Shape341)

HAnimSegment331.addChild(Transform340)
Transform342 = x3d.Transform()
Transform342.setTranslation(x3d.doubleToFloat([-0.095,0.006,-0.03]))
Shape343 = x3d.Shape()
Shape343.setUSE("skinsphere")

Transform342.addChild(Shape343)

HAnimSegment331.addChild(Transform342)

HAnimJoint330.addChild(HAnimSegment331)
HAnimJoint344 = x3d.HAnimJoint()
HAnimJoint344.setName("r_metatarsophalangeal_2")
HAnimJoint344.setDEF("Joe_r_metatarsophalangeal_2")
HAnimJoint344.setCenter(x3d.doubleToFloat([-0.115,0.037,0.09]))
HAnimJoint344.setSkinCoordIndex([377,378,379,380])
HAnimJoint344.setSkinCoordWeight(x3d.doubleToFloat([1,1,1,1]))
HAnimSegment345 = x3d.HAnimSegment()
HAnimSegment345.setName("r_tarsal_proximal_phalanx_2")
HAnimSegment345.setDEF("Joe_r_tarsal_proximal_phalanx_2")
Transform346 = x3d.Transform()
Transform346.setTranslation(x3d.doubleToFloat([-0.1,0.02,0.07]))
Shape347 = x3d.Shape()
Shape347.setUSE("jointbox")

Transform346.addChild(Shape347)

HAnimSegment345.addChild(Transform346)
Shape348 = x3d.Shape()
Appearance349 = x3d.Appearance()
Appearance349.setUSE("SegmentLine")

Shape348.setAppearance(Appearance349)
IndexedLineSet350 = x3d.IndexedLineSet()
IndexedLineSet350.setCoordIndex([0,1,-1])
Coordinate351 = x3d.Coordinate()
Coordinate351.setPoint(x3d.doubleToFloat([-0.1,0.02,0.07,-0.1,0.01,0.14]))

IndexedLineSet350.setCoord(Coordinate351)

Shape348.setGeometry(IndexedLineSet350)

HAnimSegment345.addChild(Shape348)
Transform352 = x3d.Transform()
Transform352.setTranslation(x3d.doubleToFloat([-0.115,0.06,0.1]))
Shape353 = x3d.Shape()
Shape353.setUSE("skinsphere")

Transform352.addChild(Shape353)

HAnimSegment345.addChild(Transform352)
Transform354 = x3d.Transform()
Transform354.setTranslation(x3d.doubleToFloat([-0.115,0,0.07]))
Shape355 = x3d.Shape()
Shape355.setUSE("skinsphere")

Transform354.addChild(Shape355)

HAnimSegment345.addChild(Transform354)
Transform356 = x3d.Transform()
Transform356.setTranslation(x3d.doubleToFloat([-0.165,0,0.07]))
Shape357 = x3d.Shape()
Shape357.setUSE("skinsphere")

Transform356.addChild(Shape357)

HAnimSegment345.addChild(Transform356)
Transform358 = x3d.Transform()
Transform358.setTranslation(x3d.doubleToFloat([-0.165,0,0.07]))
Shape359 = x3d.Shape()
Shape359.setUSE("skinsphere")

Transform358.addChild(Shape359)

HAnimSegment345.addChild(Transform358)
HAnimSite360 = x3d.HAnimSite()
HAnimSite360.setName("r_metatarsal_phalanx_1_pt")
HAnimSite360.setDEF("Joe_r_metatarsal_phalanx_1_pt")
HAnimSite360.setTranslation(x3d.doubleToFloat([-0.115,0.02,0.122]))
Shape361 = x3d.Shape()
Shape361.setUSE("sitebox")

HAnimSite360.addChild(Shape361)

HAnimSegment345.addChild(HAnimSite360)

HAnimJoint344.addChild(HAnimSegment345)
HAnimJoint362 = x3d.HAnimJoint()
HAnimJoint362.setName("r_tarsal_distal_interphalangeal_2")
HAnimJoint362.setDEF("Joe_r_tarsal_distal_interphalangeal_2")
HAnimJoint362.setCenter(x3d.doubleToFloat([-0.1,0.01,0.14]))
HAnimJoint362.setSkinCoordIndex([381,382,383,384,385,386,387,388,389])
HAnimJoint362.setSkinCoordWeight(x3d.doubleToFloat([1,1,1,1,1,1,1,1,1]))
HAnimSegment363 = x3d.HAnimSegment()
HAnimSegment363.setName("r_tarsal_distal_phalanx_2")
HAnimSegment363.setDEF("Joe_r_tarsal_distal_phalanx_2")
Transform364 = x3d.Transform()
Transform364.setTranslation(x3d.doubleToFloat([-0.1086,0.01,0.14]))
Shape365 = x3d.Shape()
Shape365.setUSE("jointbox")

Transform364.addChild(Shape365)

HAnimSegment363.addChild(Transform364)
Shape366 = x3d.Shape()
Appearance367 = x3d.Appearance()
Appearance367.setUSE("SegmentLine")

Shape366.setAppearance(Appearance367)
IndexedLineSet368 = x3d.IndexedLineSet()
IndexedLineSet368.setCoordIndex([0,1,-1])
Coordinate369 = x3d.Coordinate()
Coordinate369.setPoint(x3d.doubleToFloat([-0.1,0.01,0.14,-0.1043,0.0016,0.2]))

IndexedLineSet368.setCoord(Coordinate369)

Shape366.setGeometry(IndexedLineSet368)

HAnimSegment363.addChild(Shape366)
Transform370 = x3d.Transform()
Transform370.setTranslation(x3d.doubleToFloat([-0.115,0.04,0.13]))
Shape371 = x3d.Shape()
Shape371.setUSE("skinsphere")

Transform370.addChild(Shape371)

HAnimSegment363.addChild(Transform370)
Transform372 = x3d.Transform()
Transform372.setTranslation(x3d.doubleToFloat([-0.125,0,0.12]))
Shape373 = x3d.Shape()
Shape373.setUSE("skinsphere")

Transform372.addChild(Shape373)

HAnimSegment363.addChild(Transform372)
Transform374 = x3d.Transform()
Transform374.setTranslation(x3d.doubleToFloat([-0.165,0,0.12]))
Shape375 = x3d.Shape()
Shape375.setUSE("skinsphere")

Transform374.addChild(Shape375)

HAnimSegment363.addChild(Transform374)
Transform376 = x3d.Transform()
Transform376.setTranslation(x3d.doubleToFloat([-0.087,0,0.122]))
Shape377 = x3d.Shape()
Shape377.setUSE("skinsphere")

Transform376.addChild(Shape377)

HAnimSegment363.addChild(Transform376)
Transform378 = x3d.Transform()
Transform378.setTranslation(x3d.doubleToFloat([-0.09,0.012,0.188]))
Shape379 = x3d.Shape()
Shape379.setUSE("skinsphere")

Transform378.addChild(Shape379)

HAnimSegment363.addChild(Transform378)
Transform380 = x3d.Transform()
Transform380.setTranslation(x3d.doubleToFloat([-0.11,0.011,0.19]))
Shape381 = x3d.Shape()
Shape381.setUSE("skinsphere")

Transform380.addChild(Shape381)

HAnimSegment363.addChild(Transform380)
Transform382 = x3d.Transform()
Transform382.setTranslation(x3d.doubleToFloat([-0.128,0.011,0.185]))
Shape383 = x3d.Shape()
Shape383.setUSE("skinsphere")

Transform382.addChild(Shape383)

HAnimSegment363.addChild(Transform382)
Transform384 = x3d.Transform()
Transform384.setTranslation(x3d.doubleToFloat([-0.142,0.011,0.178]))
Shape385 = x3d.Shape()
Shape385.setUSE("skinsphere")

Transform384.addChild(Shape385)

HAnimSegment363.addChild(Transform384)
Transform386 = x3d.Transform()
Transform386.setTranslation(x3d.doubleToFloat([-0.154,0.01,0.168]))
Shape387 = x3d.Shape()
Shape387.setUSE("skinsphere")

Transform386.addChild(Shape387)

HAnimSegment363.addChild(Transform386)
HAnimSite388 = x3d.HAnimSite()
HAnimSite388.setName("r_metatarsal_phalanx_5_pt")
HAnimSite388.setDEF("Joe_r_metatarsal_phalanx_5_pt")
HAnimSite388.setTranslation(x3d.doubleToFloat([-0.165,0.01,0.12]))
Shape389 = x3d.Shape()
Shape389.setUSE("sitebox")

HAnimSite388.addChild(Shape389)

HAnimSegment363.addChild(HAnimSite388)
HAnimSite390 = x3d.HAnimSite()
HAnimSite390.setName("r_tarsal_distal_phalanx_2_pt")
HAnimSite390.setDEF("Joe_r_tarsal_distal_phalanx_2_pt")
HAnimSite390.setTranslation(x3d.doubleToFloat([-0.11,0.011,0.19]))
Shape391 = x3d.Shape()
Shape391.setUSE("sitebox")

HAnimSite390.addChild(Shape391)

HAnimSegment363.addChild(HAnimSite390)

HAnimJoint362.addChild(HAnimSegment363)

HAnimJoint344.addChild(HAnimJoint362)

HAnimJoint330.addChild(HAnimJoint344)

HAnimJoint310.addChild(HAnimJoint330)

HAnimJoint282.addChild(HAnimJoint310)

HAnimJoint256.addChild(HAnimJoint282)

HAnimJoint90.addChild(HAnimJoint256)

HAnimJoint78.addChild(HAnimJoint90)
HAnimJoint392 = x3d.HAnimJoint()
HAnimJoint392.setName("vl5")
HAnimJoint392.setDEF("Joe_vl5")
HAnimJoint392.setCenter(x3d.doubleToFloat([0,1.045,-0.095]))
HAnimJoint392.setSkinCoordIndex([28,76])
HAnimJoint392.setSkinCoordWeight(x3d.doubleToFloat([1,1]))
HAnimSegment393 = x3d.HAnimSegment()
HAnimSegment393.setName("toPelvis")
HAnimSegment393.setDEF("Joe_toPelvis")
Shape394 = x3d.Shape()
Appearance395 = x3d.Appearance()
Appearance395.setUSE("SegmentLine")

Shape394.setAppearance(Appearance395)
IndexedLineSet396 = x3d.IndexedLineSet()
IndexedLineSet396.setCoordIndex([0,1,-1])
Coordinate397 = x3d.Coordinate()
Coordinate397.setPoint(x3d.doubleToFloat([0,1.045,-0.095,0,0.9149,0.0016]))

IndexedLineSet396.setCoord(Coordinate397)

Shape394.setGeometry(IndexedLineSet396)

HAnimSegment393.addChild(Shape394)

HAnimJoint392.addChild(HAnimSegment393)
HAnimSegment398 = x3d.HAnimSegment()
HAnimSegment398.setName("l5")
HAnimSegment398.setDEF("Joe_l5")
Shape399 = x3d.Shape()
Appearance400 = x3d.Appearance()
Appearance400.setUSE("SegmentLine")

Shape399.setAppearance(Appearance400)
IndexedLineSet401 = x3d.IndexedLineSet()
IndexedLineSet401.setCoordIndex([0,1,-1])
Coordinate402 = x3d.Coordinate()
Coordinate402.setPoint(x3d.doubleToFloat([0,1.045,-0.095,0,1.068,-0.085]))

IndexedLineSet401.setCoord(Coordinate402)

Shape399.setGeometry(IndexedLineSet401)

HAnimSegment398.addChild(Shape399)
HAnimSite403 = x3d.HAnimSite()
HAnimSite403.setName("waist_preferred_posterior_pt")
HAnimSite403.setDEF("Joe_waist_preferred_posterior_pt")
HAnimSite403.setTranslation(x3d.doubleToFloat([0,1.0915,-0.1091]))
Shape404 = x3d.Shape()
Shape404.setUSE("sitebox")

HAnimSite403.addChild(Shape404)

HAnimSegment398.addChild(HAnimSite403)
HAnimSite405 = x3d.HAnimSite()
HAnimSite405.setName("navel_pt")
HAnimSite405.setDEF("Joe_navel_pt")
HAnimSite405.setTranslation(x3d.doubleToFloat([0,1.0723,0.09]))
Shape406 = x3d.Shape()
Shape406.setUSE("sitebox")

HAnimSite405.addChild(Shape406)

HAnimSegment398.addChild(HAnimSite405)

HAnimJoint392.addChild(HAnimSegment398)
HAnimJoint407 = x3d.HAnimJoint()
HAnimJoint407.setName("vl4")
HAnimJoint407.setDEF("Joe_vl4")
HAnimJoint407.setCenter(x3d.doubleToFloat([0,1.068,-0.085]))
HAnimSegment408 = x3d.HAnimSegment()
HAnimSegment408.setName("l4")
HAnimSegment408.setDEF("Joe_l4")
Shape409 = x3d.Shape()
Appearance410 = x3d.Appearance()
Appearance410.setUSE("SegmentLine")

Shape409.setAppearance(Appearance410)
IndexedLineSet411 = x3d.IndexedLineSet()
IndexedLineSet411.setCoordIndex([0,1,-1])
Coordinate412 = x3d.Coordinate()
Coordinate412.setPoint(x3d.doubleToFloat([0,1.068,-0.085,0,1.092,-0.0725]))

IndexedLineSet411.setCoord(Coordinate412)

Shape409.setGeometry(IndexedLineSet411)

HAnimSegment408.addChild(Shape409)
Transform413 = x3d.Transform()
Transform413.setTranslation(x3d.doubleToFloat([0,1.068,-0.085]))
Shape414 = x3d.Shape()
Shape414.setUSE("jointbox")

Transform413.addChild(Shape414)

HAnimSegment408.addChild(Transform413)

HAnimJoint407.addChild(HAnimSegment408)
HAnimJoint415 = x3d.HAnimJoint()
HAnimJoint415.setName("vl3")
HAnimJoint415.setDEF("Joe_vl3")
HAnimJoint415.setCenter(x3d.doubleToFloat([0,1.092,-0.0725]))
HAnimSegment416 = x3d.HAnimSegment()
HAnimSegment416.setName("l3")
HAnimSegment416.setDEF("Joe_l3")
Shape417 = x3d.Shape()
Appearance418 = x3d.Appearance()
Appearance418.setUSE("SegmentLine")

Shape417.setAppearance(Appearance418)
IndexedLineSet419 = x3d.IndexedLineSet()
IndexedLineSet419.setCoordIndex([0,1,-1])
Coordinate420 = x3d.Coordinate()
Coordinate420.setPoint(x3d.doubleToFloat([0,1.092,-0.0725,0,1.12,-0.065]))

IndexedLineSet419.setCoord(Coordinate420)

Shape417.setGeometry(IndexedLineSet419)

HAnimSegment416.addChild(Shape417)
Transform421 = x3d.Transform()
Transform421.setTranslation(x3d.doubleToFloat([0,1.092,-0.0725]))
Shape422 = x3d.Shape()
Shape422.setUSE("jointbox")

Transform421.addChild(Shape422)

HAnimSegment416.addChild(Transform421)

HAnimJoint415.addChild(HAnimSegment416)
HAnimJoint423 = x3d.HAnimJoint()
HAnimJoint423.setName("vl2")
HAnimJoint423.setDEF("Joe_vl2")
HAnimJoint423.setCenter(x3d.doubleToFloat([0,1.12,-0.065]))
HAnimJoint423.setSkinCoordIndex([16,18,25,83,84,85,86,87,88])
HAnimJoint423.setSkinCoordWeight(x3d.doubleToFloat([1,1,1,1,1,1,0.7,1,0.8]))
HAnimSegment424 = x3d.HAnimSegment()
HAnimSegment424.setName("l2")
HAnimSegment424.setDEF("Joe_l2")
Shape425 = x3d.Shape()
Appearance426 = x3d.Appearance()
Appearance426.setUSE("SegmentLine")

Shape425.setAppearance(Appearance426)
IndexedLineSet427 = x3d.IndexedLineSet()
IndexedLineSet427.setCoordIndex([0,1,-1])
Coordinate428 = x3d.Coordinate()
Coordinate428.setPoint(x3d.doubleToFloat([0,1.12,-0.065,0,1.1459,-0.0625]))

IndexedLineSet427.setCoord(Coordinate428)

Shape425.setGeometry(IndexedLineSet427)

HAnimSegment424.addChild(Shape425)
Transform429 = x3d.Transform()
Transform429.setTranslation(x3d.doubleToFloat([0,1.12,-0.065]))
Shape430 = x3d.Shape()
Shape430.setUSE("jointbox")

Transform429.addChild(Shape430)

HAnimSegment424.addChild(Transform429)
Transform431 = x3d.Transform()
Transform431.setTranslation(x3d.doubleToFloat([-0.087,1.19,-0.09]))
Shape432 = x3d.Shape()
Shape432.setUSE("skinsphere")

Transform431.addChild(Shape432)

HAnimSegment424.addChild(Transform431)
Transform433 = x3d.Transform()
Transform433.setTranslation(x3d.doubleToFloat([0.087,1.19,-0.09]))
Shape434 = x3d.Shape()
Shape434.setUSE("skinsphere")

Transform433.addChild(Shape434)

HAnimSegment424.addChild(Transform433)
Transform435 = x3d.Transform()
Transform435.setTranslation(x3d.doubleToFloat([0.172,1.32,-0.03]))
Shape436 = x3d.Shape()
Shape436.setUSE("skinsphere")

Transform435.addChild(Shape436)

HAnimSegment424.addChild(Transform435)
Transform437 = x3d.Transform()
Transform437.setTranslation(x3d.doubleToFloat([-0.172,1.32,-0.03]))
Shape438 = x3d.Shape()
Shape438.setUSE("skinsphere")

Transform437.addChild(Shape438)

HAnimSegment424.addChild(Transform437)
Transform439 = x3d.Transform()
Transform439.setTranslation(x3d.doubleToFloat([0.15,1.23,-0.015]))
Shape440 = x3d.Shape()
Shape440.setUSE("skinsphere")

Transform439.addChild(Shape440)

HAnimSegment424.addChild(Transform439)
Transform441 = x3d.Transform()
Transform441.setTranslation(x3d.doubleToFloat([-0.15,1.23,-0.015]))
Shape442 = x3d.Shape()
Shape442.setUSE("skinsphere")

Transform441.addChild(Shape442)

HAnimSegment424.addChild(Transform441)
HAnimSite443 = x3d.HAnimSite()
HAnimSite443.setName("r_rib10_pt")
HAnimSite443.setDEF("Joe_r_rib10_pt")
HAnimSite443.setTranslation(x3d.doubleToFloat([-0.087,1.19,0.09]))
Shape444 = x3d.Shape()
Shape444.setUSE("sitebox")

HAnimSite443.addChild(Shape444)

HAnimSegment424.addChild(HAnimSite443)
HAnimSite445 = x3d.HAnimSite()
HAnimSite445.setName("l_rib10_pt")
HAnimSite445.setDEF("Joe_l_rib10_pt")
HAnimSite445.setTranslation(x3d.doubleToFloat([0.087,1.19,0.09]))
Shape446 = x3d.Shape()
Shape446.setUSE("sitebox")

HAnimSite445.addChild(Shape446)

HAnimSegment424.addChild(HAnimSite445)
HAnimSite447 = x3d.HAnimSite()
HAnimSite447.setName("rib10_midspine_pt")
HAnimSite447.setDEF("Joe_rib10_midspine_pt")
HAnimSite447.setTranslation(x3d.doubleToFloat([0,1.1908,-0.1113]))
Shape448 = x3d.Shape()
Shape448.setUSE("sitebox")

HAnimSite447.addChild(Shape448)

HAnimSegment424.addChild(HAnimSite447)

HAnimJoint423.addChild(HAnimSegment424)
HAnimJoint449 = x3d.HAnimJoint()
HAnimJoint449.setName("vl1")
HAnimJoint449.setDEF("Joe_vl1")
HAnimJoint449.setCenter(x3d.doubleToFloat([0,1.1459,-0.0625]))
HAnimSegment450 = x3d.HAnimSegment()
HAnimSegment450.setName("l1")
HAnimSegment450.setDEF("Joe_l1")
Shape451 = x3d.Shape()
Appearance452 = x3d.Appearance()
Appearance452.setUSE("SegmentLine")

Shape451.setAppearance(Appearance452)
IndexedLineSet453 = x3d.IndexedLineSet()
IndexedLineSet453.setCoordIndex([0,1,-1])
Coordinate454 = x3d.Coordinate()
Coordinate454.setPoint(x3d.doubleToFloat([0,1.1459,-0.0625,0,1.179,-0.068]))

IndexedLineSet453.setCoord(Coordinate454)

Shape451.setGeometry(IndexedLineSet453)

HAnimSegment450.addChild(Shape451)
Transform455 = x3d.Transform()
Transform455.setTranslation(x3d.doubleToFloat([0,1.1459,-0.0625]))
Shape456 = x3d.Shape()
Shape456.setUSE("jointbox")

Transform455.addChild(Shape456)

HAnimSegment450.addChild(Transform455)

HAnimJoint449.addChild(HAnimSegment450)
HAnimJoint457 = x3d.HAnimJoint()
HAnimJoint457.setName("vt12")
HAnimJoint457.setDEF("Joe_vt12")
HAnimJoint457.setCenter(x3d.doubleToFloat([0,1.179,-0.068]))
HAnimSegment458 = x3d.HAnimSegment()
HAnimSegment458.setName("t12")
HAnimSegment458.setDEF("Joe_t12")
Shape459 = x3d.Shape()
Appearance460 = x3d.Appearance()
Appearance460.setUSE("SegmentLine")

Shape459.setAppearance(Appearance460)
IndexedLineSet461 = x3d.IndexedLineSet()
IndexedLineSet461.setCoordIndex([0,1,-1])
Coordinate462 = x3d.Coordinate()
Coordinate462.setPoint(x3d.doubleToFloat([0,1.179,-0.068,0,1.242,-0.09]))

IndexedLineSet461.setCoord(Coordinate462)

Shape459.setGeometry(IndexedLineSet461)

HAnimSegment458.addChild(Shape459)
Transform463 = x3d.Transform()
Transform463.setTranslation(x3d.doubleToFloat([0,1.179,-0.068]))
Shape464 = x3d.Shape()
Shape464.setUSE("jointbox")

Transform463.addChild(Shape464)

HAnimSegment458.addChild(Transform463)

HAnimJoint457.addChild(HAnimSegment458)
HAnimJoint465 = x3d.HAnimJoint()
HAnimJoint465.setName("vt11")
HAnimJoint465.setDEF("Joe_vt11")
HAnimJoint465.setCenter(x3d.doubleToFloat([0,1.2679,-0.081]))
HAnimSegment466 = x3d.HAnimSegment()
HAnimSegment466.setName("t11")
HAnimSegment466.setDEF("Joe_t11")
Shape467 = x3d.Shape()
Appearance468 = x3d.Appearance()
Appearance468.setUSE("SegmentLine")

Shape467.setAppearance(Appearance468)
IndexedLineSet469 = x3d.IndexedLineSet()
IndexedLineSet469.setCoordIndex([0,1,-1])
Coordinate470 = x3d.Coordinate()
Coordinate470.setPoint(x3d.doubleToFloat([0,1.2145,-0.0755,0,1.242,-0.09]))

IndexedLineSet469.setCoord(Coordinate470)

Shape467.setGeometry(IndexedLineSet469)

HAnimSegment466.addChild(Shape467)
Transform471 = x3d.Transform()
Transform471.setTranslation(x3d.doubleToFloat([0,1.2145,-0.0755]))
Shape472 = x3d.Shape()
Shape472.setUSE("jointbox")

Transform471.addChild(Shape472)

HAnimSegment466.addChild(Transform471)

HAnimJoint465.addChild(HAnimSegment466)
HAnimJoint473 = x3d.HAnimJoint()
HAnimJoint473.setName("vt10")
HAnimJoint473.setDEF("Joe_vt10")
HAnimJoint473.setCenter(x3d.doubleToFloat([0,1.242,-0.09]))
HAnimJoint473.setSkinCoordIndex([15])
HAnimJoint473.setSkinCoordWeight(x3d.doubleToFloat([1]))
HAnimSegment474 = x3d.HAnimSegment()
HAnimSegment474.setName("t10")
HAnimSegment474.setDEF("Joe_t10")
Shape475 = x3d.Shape()
Appearance476 = x3d.Appearance()
Appearance476.setUSE("SegmentLine")

Shape475.setAppearance(Appearance476)
IndexedLineSet477 = x3d.IndexedLineSet()
IndexedLineSet477.setCoordIndex([0,1,-1])
Coordinate478 = x3d.Coordinate()
Coordinate478.setPoint(x3d.doubleToFloat([0,1.242,-0.09,0,1.268,-0.1]))

IndexedLineSet477.setCoord(Coordinate478)

Shape475.setGeometry(IndexedLineSet477)

HAnimSegment474.addChild(Shape475)
Transform479 = x3d.Transform()
Transform479.setTranslation(x3d.doubleToFloat([0,1.242,-0.09]))
Shape480 = x3d.Shape()
Shape480.setUSE("jointbox")

Transform479.addChild(Shape480)

HAnimSegment474.addChild(Transform479)
HAnimSite481 = x3d.HAnimSite()
HAnimSite481.setName("substernale_pt")
HAnimSite481.setDEF("Joe_substernale_pt")
HAnimSite481.setTranslation(x3d.doubleToFloat([0,1.25,0.113]))
Shape482 = x3d.Shape()
Shape482.setUSE("sitebox")

HAnimSite481.addChild(Shape482)

HAnimSegment474.addChild(HAnimSite481)

HAnimJoint473.addChild(HAnimSegment474)
HAnimJoint483 = x3d.HAnimJoint()
HAnimJoint483.setName("vt9")
HAnimJoint483.setDEF("Joe_vt9")
HAnimJoint483.setCenter(x3d.doubleToFloat([0,1.268,-0.1]))
HAnimJoint483.setSkinCoordIndex([13,14])
HAnimJoint483.setSkinCoordWeight(x3d.doubleToFloat([1,1]))
HAnimSegment484 = x3d.HAnimSegment()
HAnimSegment484.setName("t9")
HAnimSegment484.setDEF("Joe_t9")
Shape485 = x3d.Shape()
Appearance486 = x3d.Appearance()
Appearance486.setUSE("SegmentLine")

Shape485.setAppearance(Appearance486)
IndexedLineSet487 = x3d.IndexedLineSet()
IndexedLineSet487.setCoordIndex([0,1,-1])
Coordinate488 = x3d.Coordinate()
Coordinate488.setPoint(x3d.doubleToFloat([0,1.268,-0.1,0,1.294,-0.11]))

IndexedLineSet487.setCoord(Coordinate488)

Shape485.setGeometry(IndexedLineSet487)

HAnimSegment484.addChild(Shape485)
Transform489 = x3d.Transform()
Transform489.setTranslation(x3d.doubleToFloat([0,1.268,-0.1]))
Shape490 = x3d.Shape()
Shape490.setUSE("jointbox")

Transform489.addChild(Shape490)

HAnimSegment484.addChild(Transform489)
HAnimSite491 = x3d.HAnimSite()
HAnimSite491.setName("r_thelion_pt")
HAnimSite491.setDEF("Joe_r_thelion_pt")
HAnimSite491.setTranslation(x3d.doubleToFloat([-0.1135,1.318,0.095]))
Shape492 = x3d.Shape()
Shape492.setUSE("sitebox")

HAnimSite491.addChild(Shape492)

HAnimSegment484.addChild(HAnimSite491)
HAnimSite493 = x3d.HAnimSite()
HAnimSite493.setName("l_thelion_pt")
HAnimSite493.setDEF("Joe_l_thelion_pt")
HAnimSite493.setTranslation(x3d.doubleToFloat([0.1135,1.318,0.095]))
Shape494 = x3d.Shape()
Shape494.setUSE("sitebox")

HAnimSite493.addChild(Shape494)

HAnimSegment484.addChild(HAnimSite493)

HAnimJoint483.addChild(HAnimSegment484)
HAnimJoint495 = x3d.HAnimJoint()
HAnimJoint495.setName("vt8")
HAnimJoint495.setDEF("Joe_vt8")
HAnimJoint495.setCenter(x3d.doubleToFloat([0,1.294,-0.11]))
HAnimSegment496 = x3d.HAnimSegment()
HAnimSegment496.setName("t8")
HAnimSegment496.setDEF("Joe_t8")
Shape497 = x3d.Shape()
Appearance498 = x3d.Appearance()
Appearance498.setUSE("SegmentLine")

Shape497.setAppearance(Appearance498)
IndexedLineSet499 = x3d.IndexedLineSet()
IndexedLineSet499.setCoordIndex([0,1,-1])
Coordinate500 = x3d.Coordinate()
Coordinate500.setPoint(x3d.doubleToFloat([0,1.294,-0.11,0,1.352,-0.12]))

IndexedLineSet499.setCoord(Coordinate500)

Shape497.setGeometry(IndexedLineSet499)

HAnimSegment496.addChild(Shape497)
Transform501 = x3d.Transform()
Transform501.setTranslation(x3d.doubleToFloat([0,1.294,-0.11]))
Shape502 = x3d.Shape()
Shape502.setUSE("jointbox")

Transform501.addChild(Shape502)

HAnimSegment496.addChild(Transform501)

HAnimJoint495.addChild(HAnimSegment496)
HAnimJoint503 = x3d.HAnimJoint()
HAnimJoint503.setName("vt7")
HAnimJoint503.setDEF("Joe_vt7")
HAnimJoint503.setCenter(x3d.doubleToFloat([0,1.323,-0.1155]))
HAnimSegment504 = x3d.HAnimSegment()
HAnimSegment504.setName("t7")
HAnimSegment504.setDEF("Joe_t7")
Shape505 = x3d.Shape()
Appearance506 = x3d.Appearance()
Appearance506.setUSE("SegmentLine")

Shape505.setAppearance(Appearance506)
IndexedLineSet507 = x3d.IndexedLineSet()
IndexedLineSet507.setCoordIndex([0,1,-1])
Coordinate508 = x3d.Coordinate()
Coordinate508.setPoint(x3d.doubleToFloat([0,1.352,-0.12,0,1.381,-0.1235]))

IndexedLineSet507.setCoord(Coordinate508)

Shape505.setGeometry(IndexedLineSet507)

HAnimSegment504.addChild(Shape505)
Transform509 = x3d.Transform()
Transform509.setTranslation(x3d.doubleToFloat([0,1.323,-0.1155]))
Shape510 = x3d.Shape()
Shape510.setUSE("jointbox")

Transform509.addChild(Shape510)

HAnimSegment504.addChild(Transform509)

HAnimJoint503.addChild(HAnimSegment504)
HAnimJoint511 = x3d.HAnimJoint()
HAnimJoint511.setName("vt6")
HAnimJoint511.setDEF("Joe_vt6")
HAnimJoint511.setCenter(x3d.doubleToFloat([0,1.352,-0.12]))
HAnimSegment512 = x3d.HAnimSegment()
HAnimSegment512.setName("t6")
HAnimSegment512.setDEF("Joe_t6")
Shape513 = x3d.Shape()
Appearance514 = x3d.Appearance()
Appearance514.setUSE("SegmentLine")

Shape513.setAppearance(Appearance514)
IndexedLineSet515 = x3d.IndexedLineSet()
IndexedLineSet515.setCoordIndex([0,1,-1])
Coordinate516 = x3d.Coordinate()
Coordinate516.setPoint(x3d.doubleToFloat([0,1.381,-0.1235,0,1.41,-0.1235]))

IndexedLineSet515.setCoord(Coordinate516)

Shape513.setGeometry(IndexedLineSet515)

HAnimSegment512.addChild(Shape513)
Transform517 = x3d.Transform()
Transform517.setTranslation(x3d.doubleToFloat([0,1.352,-0.12]))
Shape518 = x3d.Shape()
Shape518.setUSE("jointbox")

Transform517.addChild(Shape518)

HAnimSegment512.addChild(Transform517)

HAnimJoint511.addChild(HAnimSegment512)
HAnimJoint519 = x3d.HAnimJoint()
HAnimJoint519.setName("vt5")
HAnimJoint519.setDEF("Joe_vt5")
HAnimJoint519.setCenter(x3d.doubleToFloat([0,1.381,-0.1235]))
HAnimSegment520 = x3d.HAnimSegment()
HAnimSegment520.setName("t5")
HAnimSegment520.setDEF("Joe_t5")
Shape521 = x3d.Shape()
Appearance522 = x3d.Appearance()
Appearance522.setUSE("SegmentLine")

Shape521.setAppearance(Appearance522)
IndexedLineSet523 = x3d.IndexedLineSet()
IndexedLineSet523.setCoordIndex([0,1,-1])
Coordinate524 = x3d.Coordinate()
Coordinate524.setPoint(x3d.doubleToFloat([0,1.41,-0.1235,0,1.438,-0.12]))

IndexedLineSet523.setCoord(Coordinate524)

Shape521.setGeometry(IndexedLineSet523)

HAnimSegment520.addChild(Shape521)
Transform525 = x3d.Transform()
Transform525.setTranslation(x3d.doubleToFloat([0,1.381,-0.1235]))
Shape526 = x3d.Shape()
Shape526.setUSE("jointbox")

Transform525.addChild(Shape526)

HAnimSegment520.addChild(Transform525)

HAnimJoint519.addChild(HAnimSegment520)
HAnimJoint527 = x3d.HAnimJoint()
HAnimJoint527.setName("vt4")
HAnimJoint527.setDEF("Joe_vt4")
HAnimJoint527.setCenter(x3d.doubleToFloat([0,1.41,-0.1235]))
HAnimJoint527.setSkinCoordIndex([81])
HAnimJoint527.setSkinCoordWeight(x3d.doubleToFloat([1]))
HAnimSegment528 = x3d.HAnimSegment()
HAnimSegment528.setName("t4")
HAnimSegment528.setDEF("Joe_t4")
Shape529 = x3d.Shape()
Appearance530 = x3d.Appearance()
Appearance530.setUSE("SegmentLine")

Shape529.setAppearance(Appearance530)
IndexedLineSet531 = x3d.IndexedLineSet()
IndexedLineSet531.setCoordIndex([0,1,-1])
Coordinate532 = x3d.Coordinate()
Coordinate532.setPoint(x3d.doubleToFloat([0,1.41,-0.1235,0,1.438,-0.12]))

IndexedLineSet531.setCoord(Coordinate532)

Shape529.setGeometry(IndexedLineSet531)

HAnimSegment528.addChild(Shape529)
Transform533 = x3d.Transform()
Transform533.setTranslation(x3d.doubleToFloat([0,1.41,-0.1235]))
Shape534 = x3d.Shape()
Shape534.setUSE("jointbox")

Transform533.addChild(Shape534)

HAnimSegment528.addChild(Transform533)
Transform535 = x3d.Transform()
Transform535.setTranslation(x3d.doubleToFloat([0,1.41,-0.145]))
Shape536 = x3d.Shape()
Shape536.setUSE("skinsphere")

Transform535.addChild(Shape536)

HAnimSegment528.addChild(Transform535)

HAnimJoint527.addChild(HAnimSegment528)
HAnimJoint537 = x3d.HAnimJoint()
HAnimJoint537.setName("vt3")
HAnimJoint537.setDEF("Joe_vt3")
HAnimJoint537.setCenter(x3d.doubleToFloat([0,1.438,-0.12]))
HAnimSegment538 = x3d.HAnimSegment()
HAnimSegment538.setName("t3")
HAnimSegment538.setDEF("Joe_t3")
Shape539 = x3d.Shape()
Appearance540 = x3d.Appearance()
Appearance540.setUSE("SegmentLine")

Shape539.setAppearance(Appearance540)
IndexedLineSet541 = x3d.IndexedLineSet()
IndexedLineSet541.setCoordIndex([0,1,-1])
Coordinate542 = x3d.Coordinate()
Coordinate542.setPoint(x3d.doubleToFloat([0,1.438,-0.12,0,1.468,-0.105]))

IndexedLineSet541.setCoord(Coordinate542)

Shape539.setGeometry(IndexedLineSet541)

HAnimSegment538.addChild(Shape539)
Transform543 = x3d.Transform()
Transform543.setTranslation(x3d.doubleToFloat([0,1.438,-0.12]))
Shape544 = x3d.Shape()
Shape544.setUSE("jointbox")

Transform543.addChild(Shape544)

HAnimSegment538.addChild(Transform543)

HAnimJoint537.addChild(HAnimSegment538)
HAnimJoint545 = x3d.HAnimJoint()
HAnimJoint545.setName("vt2")
HAnimJoint545.setDEF("Joe_vt2")
HAnimJoint545.setCenter(x3d.doubleToFloat([0,1.468,-0.105]))
HAnimSegment546 = x3d.HAnimSegment()
HAnimSegment546.setName("t2")
HAnimSegment546.setDEF("Joe_t2")
Shape547 = x3d.Shape()
Appearance548 = x3d.Appearance()
Appearance548.setUSE("SegmentLine")

Shape547.setAppearance(Appearance548)
IndexedLineSet549 = x3d.IndexedLineSet()
IndexedLineSet549.setCoordIndex([0,1,-1])
Coordinate550 = x3d.Coordinate()
Coordinate550.setPoint(x3d.doubleToFloat([0,1.468,-0.105,0,1.497,-0.09]))

IndexedLineSet549.setCoord(Coordinate550)

Shape547.setGeometry(IndexedLineSet549)

HAnimSegment546.addChild(Shape547)
Transform551 = x3d.Transform()
Transform551.setTranslation(x3d.doubleToFloat([0,1.468,-0.105]))
Shape552 = x3d.Shape()
Shape552.setUSE("jointbox")

Transform551.addChild(Shape552)

HAnimSegment546.addChild(Transform551)

HAnimJoint545.addChild(HAnimSegment546)
HAnimJoint553 = x3d.HAnimJoint()
HAnimJoint553.setName("vt1")
HAnimJoint553.setDEF("Joe_vt1")
HAnimJoint553.setCenter(x3d.doubleToFloat([0,1.497,-0.09]))
HAnimJoint553.setSkinCoordIndex([11,24])
HAnimJoint553.setSkinCoordWeight(x3d.doubleToFloat([1,1]))
HAnimSegment554 = x3d.HAnimSegment()
HAnimSegment554.setName("t1")
HAnimSegment554.setDEF("Joe_t1")
Shape555 = x3d.Shape()
Appearance556 = x3d.Appearance()
Appearance556.setUSE("SegmentLine")

Shape555.setAppearance(Appearance556)
IndexedLineSet557 = x3d.IndexedLineSet()
IndexedLineSet557.setCoordIndex([0,1,-1])
Coordinate558 = x3d.Coordinate()
Coordinate558.setPoint(x3d.doubleToFloat([0,1.497,-0.09,0,1.525,-0.072]))

IndexedLineSet557.setCoord(Coordinate558)

Shape555.setGeometry(IndexedLineSet557)

HAnimSegment554.addChild(Shape555)
Transform559 = x3d.Transform()
Transform559.setTranslation(x3d.doubleToFloat([0,1.497,-0.09]))
Shape560 = x3d.Shape()
Shape560.setUSE("jointbox")

Transform559.addChild(Shape560)

HAnimSegment554.addChild(Transform559)
HAnimSite561 = x3d.HAnimSite()
HAnimSite561.setName("suprasternale_pt")
HAnimSite561.setDEF("Joe_suprasternale_pt")
HAnimSite561.setTranslation(x3d.doubleToFloat([0,1.44,0.03]))
Shape562 = x3d.Shape()
Shape562.setUSE("sitebox")

HAnimSite561.addChild(Shape562)

HAnimSegment554.addChild(HAnimSite561)
HAnimSite563 = x3d.HAnimSite()
HAnimSite563.setName("cervicale_pt")
HAnimSite563.setDEF("Joe_cervicale_pt")
HAnimSite563.setTranslation(x3d.doubleToFloat([0,1.53,-0.084]))
Shape564 = x3d.Shape()
Shape564.setUSE("sitebox")

HAnimSite563.addChild(Shape564)

HAnimSegment554.addChild(HAnimSite563)

HAnimJoint553.addChild(HAnimSegment554)
HAnimJoint565 = x3d.HAnimJoint()
HAnimJoint565.setName("vc7")
HAnimJoint565.setDEF("Joe_vc7")
HAnimJoint565.setCenter(x3d.doubleToFloat([0,1.525,-0.072]))
HAnimJoint565.setSkinCoordIndex([74,75])
HAnimJoint565.setSkinCoordWeight(x3d.doubleToFloat([1,1]))
HAnimSegment566 = x3d.HAnimSegment()
HAnimSegment566.setName("c7")
HAnimSegment566.setDEF("Joe_c7")
Shape567 = x3d.Shape()
Appearance568 = x3d.Appearance()
Appearance568.setUSE("SegmentLine")

Shape567.setAppearance(Appearance568)
IndexedLineSet569 = x3d.IndexedLineSet()
IndexedLineSet569.setCoordIndex([0,1,-1,0,2,-1,0,3,-1])
Coordinate570 = x3d.Coordinate()
Coordinate570.setPoint(x3d.doubleToFloat([0,1.525,-0.072,0.082,1.4488,-0.0353,-0.03,1.46,0.02,0,1.54,-0.05]))

IndexedLineSet569.setCoord(Coordinate570)

Shape567.setGeometry(IndexedLineSet569)

HAnimSegment566.addChild(Shape567)
Transform571 = x3d.Transform()
Transform571.setTranslation(x3d.doubleToFloat([0,1.525,-0.072]))
Shape572 = x3d.Shape()
Shape572.setUSE("jointbox")

Transform571.addChild(Shape572)

HAnimSegment566.addChild(Transform571)
HAnimSite573 = x3d.HAnimSite()
HAnimSite573.setName("r_neck_base_pt")
HAnimSite573.setDEF("Joe_r_neck_base_pt")
HAnimSite573.setTranslation(x3d.doubleToFloat([-0.0646,1.5149,-0.0385]))
Shape574 = x3d.Shape()
Shape574.setUSE("sitebox")

HAnimSite573.addChild(Shape574)

HAnimSegment566.addChild(HAnimSite573)
HAnimSite575 = x3d.HAnimSite()
HAnimSite575.setName("l_neck_base_pt")
HAnimSite575.setDEF("Joe_l_neck_base_pt")
HAnimSite575.setTranslation(x3d.doubleToFloat([0.0646,1.5149,-0.0385]))
Shape576 = x3d.Shape()
Shape576.setUSE("sitebox")

HAnimSite575.addChild(Shape576)

HAnimSegment566.addChild(HAnimSite575)

HAnimJoint565.addChild(HAnimSegment566)
HAnimJoint577 = x3d.HAnimJoint()
HAnimJoint577.setName("vc6")
HAnimJoint577.setDEF("Joe_vc6")
HAnimJoint577.setCenter(x3d.doubleToFloat([0,1.54,-0.05]))
HAnimSegment578 = x3d.HAnimSegment()
HAnimSegment578.setName("c6")
HAnimSegment578.setDEF("Joe_c6")
Shape579 = x3d.Shape()
Appearance580 = x3d.Appearance()
Appearance580.setUSE("SegmentLine")

Shape579.setAppearance(Appearance580)
IndexedLineSet581 = x3d.IndexedLineSet()
IndexedLineSet581.setCoordIndex([0,1,-1])
Coordinate582 = x3d.Coordinate()
Coordinate582.setPoint(x3d.doubleToFloat([0,1.54,-0.05,0,1.5675,-0.0256]))

IndexedLineSet581.setCoord(Coordinate582)

Shape579.setGeometry(IndexedLineSet581)

HAnimSegment578.addChild(Shape579)
Transform583 = x3d.Transform()
Transform583.setTranslation(x3d.doubleToFloat([0,1.54,-0.05]))
Shape584 = x3d.Shape()
Shape584.setUSE("jointbox")

Transform583.addChild(Shape584)

HAnimSegment578.addChild(Transform583)

HAnimJoint577.addChild(HAnimSegment578)
HAnimJoint585 = x3d.HAnimJoint()
HAnimJoint585.setName("vc5")
HAnimJoint585.setDEF("Joe_vc5")
HAnimJoint585.setCenter(x3d.doubleToFloat([0,1.552,-0.035]))
HAnimSegment586 = x3d.HAnimSegment()
HAnimSegment586.setName("c5")
HAnimSegment586.setDEF("Joe_c5")
Transform587 = x3d.Transform()
Transform587.setTranslation(x3d.doubleToFloat([0,1.552,-0.035]))
Shape588 = x3d.Shape()
Shape588.setUSE("jointbox")

Transform587.addChild(Shape588)

HAnimSegment586.addChild(Transform587)
Shape589 = x3d.Shape()
Appearance590 = x3d.Appearance()
Appearance590.setUSE("SegmentLine")

Shape589.setAppearance(Appearance590)
IndexedLineSet591 = x3d.IndexedLineSet()
IndexedLineSet591.setCoordIndex([0,1,-1])
Coordinate592 = x3d.Coordinate()
Coordinate592.setPoint(x3d.doubleToFloat([0,1.5675,-0.0256,0,1.5823,-0.0185]))

IndexedLineSet591.setCoord(Coordinate592)

Shape589.setGeometry(IndexedLineSet591)

HAnimSegment586.addChild(Shape589)

HAnimJoint585.addChild(HAnimSegment586)
HAnimJoint593 = x3d.HAnimJoint()
HAnimJoint593.setName("vc4")
HAnimJoint593.setDEF("Joe_vc4")
HAnimJoint593.setCenter(x3d.doubleToFloat([0,1.5675,-0.0256]))
HAnimSegment594 = x3d.HAnimSegment()
HAnimSegment594.setName("c4")
HAnimSegment594.setDEF("Joe_c4")
Shape595 = x3d.Shape()
Appearance596 = x3d.Appearance()
Appearance596.setUSE("SegmentLine")

Shape595.setAppearance(Appearance596)
IndexedLineSet597 = x3d.IndexedLineSet()
IndexedLineSet597.setCoordIndex([0,1,-1])
Coordinate598 = x3d.Coordinate()
Coordinate598.setPoint(x3d.doubleToFloat([0,1.5823,-0.0185,0,1.595,-0.0175]))

IndexedLineSet597.setCoord(Coordinate598)

Shape595.setGeometry(IndexedLineSet597)

HAnimSegment594.addChild(Shape595)
Transform599 = x3d.Transform()
Transform599.setTranslation(x3d.doubleToFloat([0,1.5675,-0.0256]))
Shape600 = x3d.Shape()
Shape600.setUSE("jointbox")

Transform599.addChild(Shape600)

HAnimSegment594.addChild(Transform599)

HAnimJoint593.addChild(HAnimSegment594)
HAnimJoint601 = x3d.HAnimJoint()
HAnimJoint601.setName("vc3")
HAnimJoint601.setDEF("Joe_vc3")
HAnimJoint601.setCenter(x3d.doubleToFloat([0,1.5823,-0.0185]))
HAnimSegment602 = x3d.HAnimSegment()
HAnimSegment602.setName("c3")
HAnimSegment602.setDEF("Joe_c3")
Shape603 = x3d.Shape()
Appearance604 = x3d.Appearance()
Appearance604.setUSE("SegmentLine")

Shape603.setAppearance(Appearance604)
IndexedLineSet605 = x3d.IndexedLineSet()
IndexedLineSet605.setCoordIndex([0,1,-1])
Coordinate606 = x3d.Coordinate()
Coordinate606.setPoint(x3d.doubleToFloat([0,1.595,-0.0175,0,1.61,-0.015]))

IndexedLineSet605.setCoord(Coordinate606)

Shape603.setGeometry(IndexedLineSet605)

HAnimSegment602.addChild(Shape603)
Transform607 = x3d.Transform()
Transform607.setTranslation(x3d.doubleToFloat([0,1.5823,-0.0185]))
Shape608 = x3d.Shape()
Shape608.setUSE("jointbox")

Transform607.addChild(Shape608)

HAnimSegment602.addChild(Transform607)

HAnimJoint601.addChild(HAnimSegment602)
HAnimJoint609 = x3d.HAnimJoint()
HAnimJoint609.setName("vc2")
HAnimJoint609.setDEF("Joe_vc2")
HAnimJoint609.setCenter(x3d.doubleToFloat([0,1.595,-0.0175]))
HAnimSegment610 = x3d.HAnimSegment()
HAnimSegment610.setName("c2")
HAnimSegment610.setDEF("Joe_c2")
Shape611 = x3d.Shape()
Appearance612 = x3d.Appearance()
Appearance612.setUSE("SegmentLine")

Shape611.setAppearance(Appearance612)
IndexedLineSet613 = x3d.IndexedLineSet()
IndexedLineSet613.setCoordIndex([0,1,-1])
Coordinate614 = x3d.Coordinate()
Coordinate614.setPoint(x3d.doubleToFloat([0,1.61,-0.015,0,1.6144,-0.0034]))

IndexedLineSet613.setCoord(Coordinate614)

Shape611.setGeometry(IndexedLineSet613)

HAnimSegment610.addChild(Shape611)
Transform615 = x3d.Transform()
Transform615.setTranslation(x3d.doubleToFloat([0,1.595,-0.0175]))
Shape616 = x3d.Shape()
Shape616.setUSE("jointbox")

Transform615.addChild(Shape616)

HAnimSegment610.addChild(Transform615)

HAnimJoint609.addChild(HAnimSegment610)
HAnimJoint617 = x3d.HAnimJoint()
HAnimJoint617.setName("vc1")
HAnimJoint617.setDEF("Joe_vc1")
HAnimJoint617.setCenter(x3d.doubleToFloat([0,1.61,-0.015]))
HAnimSegment618 = x3d.HAnimSegment()
HAnimSegment618.setName("c1")
HAnimSegment618.setDEF("Joe_c1")
Shape619 = x3d.Shape()
Appearance620 = x3d.Appearance()
Appearance620.setUSE("SegmentLine")

Shape619.setAppearance(Appearance620)
IndexedLineSet621 = x3d.IndexedLineSet()
IndexedLineSet621.setCoordIndex([0,1,-1])
Coordinate622 = x3d.Coordinate()
Coordinate622.setPoint(x3d.doubleToFloat([0,1.6144,-0.0034,0,1.63,-0.01]))

IndexedLineSet621.setCoord(Coordinate622)

Shape619.setGeometry(IndexedLineSet621)

HAnimSegment618.addChild(Shape619)
Transform623 = x3d.Transform()
Transform623.setTranslation(x3d.doubleToFloat([0,1.61,-0.015]))
Shape624 = x3d.Shape()
Shape624.setUSE("jointbox")

Transform623.addChild(Shape624)

HAnimSegment618.addChild(Transform623)

HAnimJoint617.addChild(HAnimSegment618)
HAnimJoint625 = x3d.HAnimJoint()
HAnimJoint625.setName("skullbase")
HAnimJoint625.setDEF("Joe_skullbase")
HAnimJoint625.setCenter(x3d.doubleToFloat([0,1.63,-0.01]))
HAnimJoint625.setSkinCoordIndex([0,1,2,3,4,5,6,7,8,9])
HAnimJoint625.setSkinCoordWeight(x3d.doubleToFloat([1,1,1,1,1,1,1,1,1,1]))
HAnimSegment626 = x3d.HAnimSegment()
HAnimSegment626.setName("skull")
HAnimSegment626.setDEF("Joe_skull")
Shape627 = x3d.Shape()
Appearance628 = x3d.Appearance()
Appearance628.setUSE("SegmentLine")

Shape627.setAppearance(Appearance628)
IndexedLineSet629 = x3d.IndexedLineSet()
IndexedLineSet629.setCoordIndex([0,1,-1,0,2,-1])
Coordinate630 = x3d.Coordinate()
Coordinate630.setPoint(x3d.doubleToFloat([0,1.63,-0.01,0.034,1.659,0.06,-0.034,1.655,0.065]))

IndexedLineSet629.setCoord(Coordinate630)

Shape627.setGeometry(IndexedLineSet629)

HAnimSegment626.addChild(Shape627)
Transform631 = x3d.Transform()
Transform631.setTranslation(x3d.doubleToFloat([0,1.63,-0.01]))
Shape632 = x3d.Shape()
Shape632.setUSE("jointbox")

Transform631.addChild(Shape632)

HAnimSegment626.addChild(Transform631)
HAnimSite633 = x3d.HAnimSite()
HAnimSite633.setName("skull_vertex_tip")
HAnimSite633.setDEF("Joe_skull_vertex_tip")
HAnimSite633.setTranslation(x3d.doubleToFloat([0,1.77,0]))
Shape634 = x3d.Shape()
Shape634.setUSE("sitebox")

HAnimSite633.addChild(Shape634)

HAnimSegment626.addChild(HAnimSite633)
HAnimSite635 = x3d.HAnimSite()
HAnimSite635.setName("sellion_pt")
HAnimSite635.setDEF("Joe_sellion_pt")
HAnimSite635.setTranslation(x3d.doubleToFloat([0,1.665,0.09]))
Shape636 = x3d.Shape()
Shape636.setUSE("sitebox")

HAnimSite635.addChild(Shape636)

HAnimSegment626.addChild(HAnimSite635)
HAnimSite637 = x3d.HAnimSite()
HAnimSite637.setName("r_infraorbitale_pt")
HAnimSite637.setDEF("Joe_r_infraorbitale_pt")
HAnimSite637.setTranslation(x3d.doubleToFloat([-0.033,1.62,0.087]))
Shape638 = x3d.Shape()
Shape638.setUSE("sitebox")

HAnimSite637.addChild(Shape638)

HAnimSegment626.addChild(HAnimSite637)
HAnimSite639 = x3d.HAnimSite()
HAnimSite639.setName("l_infraorbitale_pt")
HAnimSite639.setDEF("Joe_l_infraorbitale_pt")
HAnimSite639.setTranslation(x3d.doubleToFloat([0.033,1.62,0.087]))
Shape640 = x3d.Shape()
Shape640.setUSE("sitebox")

HAnimSite639.addChild(Shape640)

HAnimSegment626.addChild(HAnimSite639)
HAnimSite641 = x3d.HAnimSite()
HAnimSite641.setName("supramenton_pt")
HAnimSite641.setDEF("Joe_supramenton_pt")
HAnimSite641.setTranslation(x3d.doubleToFloat([0,1.55,0.097]))
Shape642 = x3d.Shape()
Shape642.setUSE("sitebox")

HAnimSite641.addChild(Shape642)

HAnimSegment626.addChild(HAnimSite641)
HAnimSite643 = x3d.HAnimSite()
HAnimSite643.setName("r_tragion_pt")
HAnimSite643.setDEF("Joe_r_tragion_pt")
HAnimSite643.setTranslation(x3d.doubleToFloat([-0.077,1.64,-0.01]))
Shape644 = x3d.Shape()
Shape644.setUSE("sitebox")

HAnimSite643.addChild(Shape644)

HAnimSegment626.addChild(HAnimSite643)
HAnimSite645 = x3d.HAnimSite()
HAnimSite645.setName("r_gonion_pt")
HAnimSite645.setDEF("Joe_r_gonion_pt")
HAnimSite645.setTranslation(x3d.doubleToFloat([-0.052,1.58,0.015]))
Shape646 = x3d.Shape()
Shape646.setUSE("sitebox")

HAnimSite645.addChild(Shape646)

HAnimSegment626.addChild(HAnimSite645)
HAnimSite647 = x3d.HAnimSite()
HAnimSite647.setName("l_tragion_pt")
HAnimSite647.setDEF("Joe_l_tragion_pt")
HAnimSite647.setTranslation(x3d.doubleToFloat([0.077,1.64,-0.01]))
Shape648 = x3d.Shape()
Shape648.setUSE("sitebox")

HAnimSite647.addChild(Shape648)

HAnimSegment626.addChild(HAnimSite647)
HAnimSite649 = x3d.HAnimSite()
HAnimSite649.setName("l_gonion_pt")
HAnimSite649.setDEF("Joe_l_gonion_pt")
HAnimSite649.setTranslation(x3d.doubleToFloat([0.0631,1.58,0.015]))
Shape650 = x3d.Shape()
Shape650.setUSE("sitebox")

HAnimSite649.addChild(Shape650)

HAnimSegment626.addChild(HAnimSite649)
HAnimSite651 = x3d.HAnimSite()
HAnimSite651.setName("nuchale_pt")
HAnimSite651.setDEF("Joe_nuchale_pt")
HAnimSite651.setTranslation(x3d.doubleToFloat([0,1.625,-0.0925]))
Shape652 = x3d.Shape()
Shape652.setUSE("sitebox")

HAnimSite651.addChild(Shape652)

HAnimSegment626.addChild(HAnimSite651)

HAnimJoint625.addChild(HAnimSegment626)
HAnimJoint653 = x3d.HAnimJoint()
HAnimJoint653.setName("l_eyeball_joint")
HAnimJoint653.setDEF("Joe_l_eyeball_joint")
HAnimJoint653.setCenter(x3d.doubleToFloat([0.034,1.659,0.06]))
HAnimSegment654 = x3d.HAnimSegment()
HAnimSegment654.setName("l_eyeball")
HAnimSegment654.setDEF("Joe_l_eyeball")
Shape655 = x3d.Shape()
Appearance656 = x3d.Appearance()
Appearance656.setUSE("SegmentLine")

Shape655.setAppearance(Appearance656)
IndexedLineSet657 = x3d.IndexedLineSet()
IndexedLineSet657.setCoordIndex([0,1,-1])
Coordinate658 = x3d.Coordinate()
Coordinate658.setPoint(x3d.doubleToFloat([0.034,1.655,0.065,-0.034,1.655,0.065]))

IndexedLineSet657.setCoord(Coordinate658)

Shape655.setGeometry(IndexedLineSet657)

HAnimSegment654.addChild(Shape655)
Transform659 = x3d.Transform()
Transform659.setScale(x3d.doubleToFloat([1,1,1.4]))
Transform659.setTranslation(x3d.doubleToFloat([0.034,1.655,0.065]))
Shape660 = x3d.Shape()
Shape660.setUSE("jointbox")

Transform659.addChild(Shape660)

HAnimSegment654.addChild(Transform659)

HAnimJoint653.addChild(HAnimSegment654)

HAnimJoint625.addChild(HAnimJoint653)
HAnimJoint661 = x3d.HAnimJoint()
HAnimJoint661.setName("r_eyeball_joint")
HAnimJoint661.setDEF("Joe_r_eyeball_joint")
HAnimJoint661.setCenter(x3d.doubleToFloat([-0.034,1.659,0.06]))
HAnimSegment662 = x3d.HAnimSegment()
HAnimSegment662.setName("r_eyeball")
HAnimSegment662.setDEF("Joe_r_eyeball")
Shape663 = x3d.Shape()
Appearance664 = x3d.Appearance()
Appearance664.setUSE("SegmentLine")

Shape663.setAppearance(Appearance664)
IndexedLineSet665 = x3d.IndexedLineSet()
IndexedLineSet665.setCoordIndex([0,1,-1])
Coordinate666 = x3d.Coordinate()
Coordinate666.setPoint(x3d.doubleToFloat([0.034,1.655,0.065,-0.034,1.655,0.065]))

IndexedLineSet665.setCoord(Coordinate666)

Shape663.setGeometry(IndexedLineSet665)

HAnimSegment662.addChild(Shape663)
Transform667 = x3d.Transform()
Transform667.setScale(x3d.doubleToFloat([1,1,1.4]))
Transform667.setTranslation(x3d.doubleToFloat([-0.034,1.655,0.065]))
Shape668 = x3d.Shape()
Shape668.setUSE("jointbox")

Transform667.addChild(Shape668)

HAnimSegment662.addChild(Transform667)

HAnimJoint661.addChild(HAnimSegment662)

HAnimJoint625.addChild(HAnimJoint661)

HAnimJoint617.addChild(HAnimJoint625)

HAnimJoint609.addChild(HAnimJoint617)

HAnimJoint601.addChild(HAnimJoint609)

HAnimJoint593.addChild(HAnimJoint601)

HAnimJoint585.addChild(HAnimJoint593)

HAnimJoint577.addChild(HAnimJoint585)

HAnimJoint565.addChild(HAnimJoint577)

HAnimJoint553.addChild(HAnimJoint565)
HAnimJoint669 = x3d.HAnimJoint()
HAnimJoint669.setName("l_sternoclavicular")
HAnimJoint669.setDEF("Joe_l_sternoclavicular")
HAnimJoint669.setCenter(x3d.doubleToFloat([0.082,1.4488,-0.0353]))
HAnimJoint669.setSkinCoordIndex([12])
HAnimJoint669.setSkinCoordWeight(x3d.doubleToFloat([1]))
HAnimSegment670 = x3d.HAnimSegment()
HAnimSegment670.setName("l_clavicle")
HAnimSegment670.setDEF("Joe_l_clavicle")
Shape671 = x3d.Shape()
Appearance672 = x3d.Appearance()
Appearance672.setUSE("SegmentLine")

Shape671.setAppearance(Appearance672)
IndexedLineSet673 = x3d.IndexedLineSet()
IndexedLineSet673.setCoordIndex([0,1,-1])
Coordinate674 = x3d.Coordinate()
Coordinate674.setPoint(x3d.doubleToFloat([0.082,1.4488,-0.0353,0.0962,1.4269,-0.0424]))

IndexedLineSet673.setCoord(Coordinate674)

Shape671.setGeometry(IndexedLineSet673)

HAnimSegment670.addChild(Shape671)
Transform675 = x3d.Transform()
Transform675.setTranslation(x3d.doubleToFloat([0.082,1.4488,-0.0353]))
Shape676 = x3d.Shape()
Shape676.setUSE("jointbox")

Transform675.addChild(Shape676)

HAnimSegment670.addChild(Transform675)
HAnimSite677 = x3d.HAnimSite()
HAnimSite677.setName("l_clavicle_pt")
HAnimSite677.setDEF("Joe_l_clavicle_pt")
HAnimSite677.setTranslation(x3d.doubleToFloat([0.03,1.46,0.035]))
Shape678 = x3d.Shape()
Shape678.setUSE("sitebox")

HAnimSite677.addChild(Shape678)

HAnimSegment670.addChild(HAnimSite677)

HAnimJoint669.addChild(HAnimSegment670)
HAnimJoint679 = x3d.HAnimJoint()
HAnimJoint679.setName("l_acromioclavicular")
HAnimJoint679.setDEF("Joe_l_acromioclavicular")
HAnimJoint679.setCenter(x3d.doubleToFloat([0.0962,1.4269,-0.0424]))
HAnimJoint679.setSkinCoordIndex([79])
HAnimJoint679.setSkinCoordWeight(x3d.doubleToFloat([1]))
HAnimSegment680 = x3d.HAnimSegment()
HAnimSegment680.setName("l_scapula")
HAnimSegment680.setDEF("Joe_l_scapula")
Shape681 = x3d.Shape()
Appearance682 = x3d.Appearance()
Appearance682.setUSE("SegmentLine")

Shape681.setAppearance(Appearance682)
IndexedLineSet683 = x3d.IndexedLineSet()
IndexedLineSet683.setCoordIndex([0,1,-1])
Coordinate684 = x3d.Coordinate()
Coordinate684.setPoint(x3d.doubleToFloat([0.0962,1.4269,-0.0424,0.2,1.44,-0.04]))

IndexedLineSet683.setCoord(Coordinate684)

Shape681.setGeometry(IndexedLineSet683)

HAnimSegment680.addChild(Shape681)
Transform685 = x3d.Transform()
Transform685.setTranslation(x3d.doubleToFloat([0.0962,1.4269,-0.0424]))
Shape686 = x3d.Shape()
Shape686.setUSE("jointbox")

Transform685.addChild(Shape686)

HAnimSegment680.addChild(Transform685)
Transform687 = x3d.Transform()
Transform687.setTranslation(x3d.doubleToFloat([0.11,1.427,-0.1375]))
Shape688 = x3d.Shape()
Shape688.setUSE("skinsphere")

Transform687.addChild(Shape688)

HAnimSegment680.addChild(Transform687)
HAnimSite689 = x3d.HAnimSite()
HAnimSite689.setName("l_acromion_pt")
HAnimSite689.setDEF("Joe_l_acromion_pt")
HAnimSite689.setTranslation(x3d.doubleToFloat([0.175,1.4825,-0.06]))
Shape690 = x3d.Shape()
Shape690.setUSE("sitebox")

HAnimSite689.addChild(Shape690)

HAnimSegment680.addChild(HAnimSite689)
HAnimSite691 = x3d.HAnimSite()
HAnimSite691.setName("l_axilla_proximal_pt")
HAnimSite691.setDEF("Joe_l_axilla_proximal_pt")
HAnimSite691.setTranslation(x3d.doubleToFloat([0.17,1.38,0.007]))
Shape692 = x3d.Shape()
Shape692.setUSE("sitebox")

HAnimSite691.addChild(Shape692)

HAnimSegment680.addChild(HAnimSite691)
HAnimSite693 = x3d.HAnimSite()
HAnimSite693.setName("l_axilla_distal_pt")
HAnimSite693.setDEF("Joe_l_axilla_distal_pt")
HAnimSite693.setTranslation(x3d.doubleToFloat([0.16,1.38,-0.125]))
Shape694 = x3d.Shape()
Shape694.setUSE("sitebox")

HAnimSite693.addChild(Shape694)

HAnimSegment680.addChild(HAnimSite693)

HAnimJoint679.addChild(HAnimSegment680)
HAnimJoint695 = x3d.HAnimJoint()
HAnimJoint695.setName("l_shoulder")
HAnimJoint695.setDEF("Joe_l_shoulder")
HAnimJoint695.setCenter(x3d.doubleToFloat([0.2,1.44,-0.04]))
HAnimJoint695.setSkinCoordIndex([41,42,44,80,102,103,104,105])
HAnimJoint695.setSkinCoordWeight(x3d.doubleToFloat([1,1,1,1,1,1,1,1]))
HAnimSegment696 = x3d.HAnimSegment()
HAnimSegment696.setName("l_upperarm")
HAnimSegment696.setDEF("Joe_l_upperarm")
Shape697 = x3d.Shape()
Appearance698 = x3d.Appearance()
Appearance698.setUSE("SegmentLine")

Shape697.setAppearance(Appearance698)
IndexedLineSet699 = x3d.IndexedLineSet()
IndexedLineSet699.setCoordIndex([0,1,-1])
Coordinate700 = x3d.Coordinate()
Coordinate700.setPoint(x3d.doubleToFloat([0.2029,1.44,-0.0387,0.2,1.1388,-0.04]))

IndexedLineSet699.setCoord(Coordinate700)

Shape697.setGeometry(IndexedLineSet699)

HAnimSegment696.addChild(Shape697)
Transform701 = x3d.Transform()
Transform701.setTranslation(x3d.doubleToFloat([0.2,1.44,-0.04]))
Shape702 = x3d.Shape()
Shape702.setUSE("jointbox")

Transform701.addChild(Shape702)

HAnimSegment696.addChild(Transform701)
Transform703 = x3d.Transform()
Transform703.setTranslation(x3d.doubleToFloat([0.235,1.42,-0.0625]))
Shape704 = x3d.Shape()
Shape704.setUSE("skinsphere")

Transform703.addChild(Shape704)

HAnimSegment696.addChild(Transform703)
Transform705 = x3d.Transform()
Transform705.setTranslation(x3d.doubleToFloat([0.25,1.27,-0.04]))
Shape706 = x3d.Shape()
Shape706.setUSE("skinsphere")

Transform705.addChild(Shape706)

HAnimSegment696.addChild(Transform705)
Transform707 = x3d.Transform()
Transform707.setTranslation(x3d.doubleToFloat([0.17,1.27,-0.04]))
Shape708 = x3d.Shape()
Shape708.setUSE("skinsphere")

Transform707.addChild(Shape708)

HAnimSegment696.addChild(Transform707)
Transform709 = x3d.Transform()
Transform709.setTranslation(x3d.doubleToFloat([0.2,1.27,-0.09]))
Shape710 = x3d.Shape()
Shape710.setUSE("skinsphere")

Transform709.addChild(Shape710)

HAnimSegment696.addChild(Transform709)
Transform711 = x3d.Transform()
Transform711.setTranslation(x3d.doubleToFloat([0.2,1.27,0.02]))
Shape712 = x3d.Shape()
Shape712.setUSE("skinsphere")

Transform711.addChild(Shape712)

HAnimSegment696.addChild(Transform711)
HAnimSite713 = x3d.HAnimSite()
HAnimSite713.setName("l_humeral_medial_epicondyle_pt")
HAnimSite713.setDEF("Joe_l_humeral_medial_epicondyle_pt")
HAnimSite713.setTranslation(x3d.doubleToFloat([0.165,1.1388,-0.04]))
Shape714 = x3d.Shape()
Shape714.setUSE("sitebox")

HAnimSite713.addChild(Shape714)

HAnimSegment696.addChild(HAnimSite713)
HAnimSite715 = x3d.HAnimSite()
HAnimSite715.setName("l_radiale_pt")
HAnimSite715.setDEF("Joe_l_radiale_pt")
HAnimSite715.setTranslation(x3d.doubleToFloat([0.23,1.133,-0.055]))
Shape716 = x3d.Shape()
Shape716.setUSE("sitebox")

HAnimSite715.addChild(Shape716)

HAnimSegment696.addChild(HAnimSite715)
HAnimSite717 = x3d.HAnimSite()
HAnimSite717.setName("l_humeral_lateral_epicondyle_pt")
HAnimSite717.setDEF("Joe_l_humeral_lateral_epicondyle_pt")
HAnimSite717.setTranslation(x3d.doubleToFloat([0.244,1.1388,-0.04]))
Shape718 = x3d.Shape()
Shape718.setUSE("sitebox")

HAnimSite717.addChild(Shape718)

HAnimSegment696.addChild(HAnimSite717)

HAnimJoint695.addChild(HAnimSegment696)
HAnimJoint719 = x3d.HAnimJoint()
HAnimJoint719.setName("l_elbow")
HAnimJoint719.setDEF("Joe_l_elbow")
HAnimJoint719.setCenter(x3d.doubleToFloat([0.2,1.1388,-0.04]))
HAnimJoint719.setSkinCoordIndex([45,46,47,109,110,111,112,113,115,116,117,118])
HAnimJoint719.setSkinCoordWeight(x3d.doubleToFloat([1,1,1,1,1,1,1,1,1,1,1,1,1,1,1]))
HAnimSegment720 = x3d.HAnimSegment()
HAnimSegment720.setName("l_forearm")
HAnimSegment720.setDEF("Joe_l_forearm")
Shape721 = x3d.Shape()
Appearance722 = x3d.Appearance()
Appearance722.setUSE("SegmentLine")

Shape721.setAppearance(Appearance722)
IndexedLineSet723 = x3d.IndexedLineSet()
IndexedLineSet723.setCoordIndex([0,1,-1])
Coordinate724 = x3d.Coordinate()
Coordinate724.setPoint(x3d.doubleToFloat([0.2,1.1388,-0.04,0.2,0.87,-0.04]))

IndexedLineSet723.setCoord(Coordinate724)

Shape721.setGeometry(IndexedLineSet723)

HAnimSegment720.addChild(Shape721)
Transform725 = x3d.Transform()
Transform725.setTranslation(x3d.doubleToFloat([0.2,1.1388,-0.04]))
Shape726 = x3d.Shape()
Shape726.setUSE("jointbox")

Transform725.addChild(Shape726)

HAnimSegment720.addChild(Transform725)
Transform727 = x3d.Transform()
Transform727.setTranslation(x3d.doubleToFloat([0.2,1.1388,-0.013]))
Shape728 = x3d.Shape()
Shape728.setUSE("skinsphere")

Transform727.addChild(Shape728)

HAnimSegment720.addChild(Transform727)
Transform729 = x3d.Transform()
Transform729.setTranslation(x3d.doubleToFloat([0.225,1,-0.01]))
Shape730 = x3d.Shape()
Shape730.setUSE("skinsphere")

Transform729.addChild(Shape730)

HAnimSegment720.addChild(Transform729)
Transform731 = x3d.Transform()
Transform731.setTranslation(x3d.doubleToFloat([0.225,1,-0.07]))
Shape732 = x3d.Shape()
Shape732.setUSE("skinsphere")

Transform731.addChild(Shape732)

HAnimSegment720.addChild(Transform731)
Transform733 = x3d.Transform()
Transform733.setTranslation(x3d.doubleToFloat([0.185,1,-0.01]))
Shape734 = x3d.Shape()
Shape734.setUSE("skinsphere")

Transform733.addChild(Shape734)

HAnimSegment720.addChild(Transform733)
Transform735 = x3d.Transform()
Transform735.setTranslation(x3d.doubleToFloat([0.185,1,-0.07]))
Shape736 = x3d.Shape()
Shape736.setUSE("skinsphere")

Transform735.addChild(Shape736)

HAnimSegment720.addChild(Transform735)
HAnimSite737 = x3d.HAnimSite()
HAnimSite737.setName("l_radial_styloid_pt")
HAnimSite737.setDEF("Joe_l_radial_styloid_pt")
HAnimSite737.setTranslation(x3d.doubleToFloat([0.1901,0.8645,-0.0415]))
Shape738 = x3d.Shape()
Shape738.setUSE("sitebox")

HAnimSite737.addChild(Shape738)

HAnimSegment720.addChild(HAnimSite737)
HAnimSite739 = x3d.HAnimSite()
HAnimSite739.setName("l_olecranon_pt")
HAnimSite739.setDEF("Joe_l_olecranon_pt")
HAnimSite739.setTranslation(x3d.doubleToFloat([0.2,1.1388,-0.08]))
Shape740 = x3d.Shape()
Shape740.setUSE("sitebox")

HAnimSite739.addChild(Shape740)

HAnimSegment720.addChild(HAnimSite739)

HAnimJoint719.addChild(HAnimSegment720)
HAnimJoint741 = x3d.HAnimJoint()
HAnimJoint741.setName("l_radiocarpal")
HAnimJoint741.setDEF("Joe_l_radiocarpal")
HAnimJoint741.setCenter(x3d.doubleToFloat([0.2,0.87,-0.04]))
HAnimJoint741.setSkinCoordIndex([119,120,121,122,123,124,125,126])
HAnimJoint741.setSkinCoordWeight(x3d.doubleToFloat([1,1,1,1,1,1,1,1]))
HAnimSegment742 = x3d.HAnimSegment()
HAnimSegment742.setName("l_carpal")
HAnimSegment742.setDEF("Joe_l_carpal")
Shape743 = x3d.Shape()
Appearance744 = x3d.Appearance()
Appearance744.setUSE("SegmentLine")

Shape743.setAppearance(Appearance744)
IndexedLineSet745 = x3d.IndexedLineSet()
IndexedLineSet745.setCoordIndex([0,1,-1,0,2,-1,0,3,-1,0,4,-1,0,5,-1])
Coordinate746 = x3d.Coordinate()
Coordinate746.setPoint(x3d.doubleToFloat([0.2,0.87,-0.04,0.1924,0.8472,-0.0534,0.1983,0.8024,-0.028,0.1987,0.8029,-0.053,0.1956,0.8019,-0.0794,0.1925,0.8066,-0.1036]))

IndexedLineSet745.setCoord(Coordinate746)

Shape743.setGeometry(IndexedLineSet745)

HAnimSegment742.addChild(Shape743)
Transform747 = x3d.Transform()
Transform747.setTranslation(x3d.doubleToFloat([0.2,0.87,-0.04]))
Shape748 = x3d.Shape()
Shape748.setUSE("jointbox")

Transform747.addChild(Shape748)

HAnimSegment742.addChild(Transform747)
HAnimSite749 = x3d.HAnimSite()
HAnimSite749.setName("l_metacarpal_phalanx_2_pt")
HAnimSite749.setDEF("Joe_l_metacarpal_phalanx_2_pt")
HAnimSite749.setTranslation(x3d.doubleToFloat([0.2009,0.8139,-0.0237]))
Shape750 = x3d.Shape()
Shape750.setUSE("sitebox")

HAnimSite749.addChild(Shape750)

HAnimSegment742.addChild(HAnimSite749)
HAnimSite751 = x3d.HAnimSite()
HAnimSite751.setName("l_ulnar_styloid_pt")
HAnimSite751.setDEF("Joe_l_ulnar_styloid_pt")
HAnimSite751.setTranslation(x3d.doubleToFloat([0.2142,0.8529,-0.0648]))
Shape752 = x3d.Shape()
Shape752.setUSE("sitebox")

HAnimSite751.addChild(Shape752)

HAnimSegment742.addChild(HAnimSite751)
HAnimSite753 = x3d.HAnimSite()
HAnimSite753.setName("l_metacarpal_phalanx_5_pt")
HAnimSite753.setDEF("Joe_l_metacarpal_phalanx_5_pt")
HAnimSite753.setTranslation(x3d.doubleToFloat([0.1929,0.786,-0.1122]))
Shape754 = x3d.Shape()
Shape754.setUSE("sitebox")

HAnimSite753.addChild(Shape754)

HAnimSegment742.addChild(HAnimSite753)

HAnimJoint741.addChild(HAnimSegment742)
HAnimJoint755 = x3d.HAnimJoint()
HAnimJoint755.setName("l_carpometacarpal_1")
HAnimJoint755.setDEF("Joe_l_carpometacarpal_1")
HAnimJoint755.setCenter(x3d.doubleToFloat([0.1924,0.8472,-0.0534]))
HAnimJoint755.setSkinCoordIndex([127,128])
HAnimJoint755.setSkinCoordWeight(x3d.doubleToFloat([1,1]))
HAnimSegment756 = x3d.HAnimSegment()
HAnimSegment756.setName("l_metacarpal_1")
HAnimSegment756.setDEF("Joe_l_metacarpal_1")
Shape757 = x3d.Shape()
Appearance758 = x3d.Appearance()
Appearance758.setUSE("SegmentLine")

Shape757.setAppearance(Appearance758)
IndexedLineSet759 = x3d.IndexedLineSet()
IndexedLineSet759.setCoordIndex([0,1,-1])
Coordinate760 = x3d.Coordinate()
Coordinate760.setPoint(x3d.doubleToFloat([0.1924,0.8472,-0.0534,0.1951,0.8226,0.0246]))

IndexedLineSet759.setCoord(Coordinate760)

Shape757.setGeometry(IndexedLineSet759)

HAnimSegment756.addChild(Shape757)
Transform761 = x3d.Transform()
Transform761.setTranslation(x3d.doubleToFloat([0.1924,0.8472,-0.0534]))
Shape762 = x3d.Shape()
Shape762.setUSE("jointbox")

Transform761.addChild(Shape762)

HAnimSegment756.addChild(Transform761)

HAnimJoint755.addChild(HAnimSegment756)
HAnimJoint763 = x3d.HAnimJoint()
HAnimJoint763.setName("l_metacarpophalangeal_1")
HAnimJoint763.setDEF("Joe_l_metacarpophalangeal_1")
HAnimJoint763.setCenter(x3d.doubleToFloat([0.1951,0.8226,0.0246]))
HAnimJoint763.setSkinCoordIndex([138,139,140,141,142,143])
HAnimJoint763.setSkinCoordWeight(x3d.doubleToFloat([0.5,0.5,0.5,1,1,1]))
HAnimSegment764 = x3d.HAnimSegment()
HAnimSegment764.setName("l_carpal_proximal_phalanx_1")
HAnimSegment764.setDEF("Joe_l_carpal_proximal_phalanx_1")
Shape765 = x3d.Shape()
Appearance766 = x3d.Appearance()
Appearance766.setUSE("SegmentLine")

Shape765.setAppearance(Appearance766)
IndexedLineSet767 = x3d.IndexedLineSet()
IndexedLineSet767.setCoordIndex([0,1,-1])
Coordinate768 = x3d.Coordinate()
Coordinate768.setPoint(x3d.doubleToFloat([0.1951,0.8226,0.0246,0.1955,0.8159,0.0464]))

IndexedLineSet767.setCoord(Coordinate768)

Shape765.setGeometry(IndexedLineSet767)

HAnimSegment764.addChild(Shape765)
Transform769 = x3d.Transform()
Transform769.setTranslation(x3d.doubleToFloat([0.1951,0.8226,0.0246]))
Shape770 = x3d.Shape()
Shape770.setUSE("jointbox")

Transform769.addChild(Shape770)

HAnimSegment764.addChild(Transform769)

HAnimJoint763.addChild(HAnimSegment764)
HAnimJoint771 = x3d.HAnimJoint()
HAnimJoint771.setName("l_carpal_interphalangeal_1")
HAnimJoint771.setDEF("Joe_l_carpal_interphalangeal_1")
HAnimJoint771.setCenter(x3d.doubleToFloat([0.1955,0.8159,0.0464]))
HAnimJoint771.setSkinCoordIndex([144,145,146,147,148,149,150,151,152])
HAnimJoint771.setSkinCoordWeight(x3d.doubleToFloat([1,1,1,1,1,1,1,1,1]))
HAnimSegment772 = x3d.HAnimSegment()
HAnimSegment772.setName("l_carpal_distal_phalanx_1")
HAnimSegment772.setDEF("Joe_l_carpal_distal_phalanx_1")
Shape773 = x3d.Shape()
Appearance774 = x3d.Appearance()
Appearance774.setUSE("SegmentLine")

Shape773.setAppearance(Appearance774)
IndexedLineSet775 = x3d.IndexedLineSet()
IndexedLineSet775.setCoordIndex([0,1,-1])
Coordinate776 = x3d.Coordinate()
Coordinate776.setPoint(x3d.doubleToFloat([0.1955,0.8159,0.0464,0.1982,0.8061,0.0759]))

IndexedLineSet775.setCoord(Coordinate776)

Shape773.setGeometry(IndexedLineSet775)

HAnimSegment772.addChild(Shape773)
Transform777 = x3d.Transform()
Transform777.setTranslation(x3d.doubleToFloat([0.1955,0.8159,0.0464]))
Shape778 = x3d.Shape()
Shape778.setUSE("jointbox")

Transform777.addChild(Shape778)

HAnimSegment772.addChild(Transform777)
HAnimSite779 = x3d.HAnimSite()
HAnimSite779.setName("l_carpal_distal_phalanx_1_tip")
HAnimSite779.setDEF("Joe_l_carpal_distal_phalanx_1_tip")
HAnimSite779.setTranslation(x3d.doubleToFloat([0.1982,0.8061,0.0759]))
Shape780 = x3d.Shape()
Shape780.setUSE("sitebox")

HAnimSite779.addChild(Shape780)

HAnimSegment772.addChild(HAnimSite779)

HAnimJoint771.addChild(HAnimSegment772)

HAnimJoint763.addChild(HAnimJoint771)

HAnimJoint755.addChild(HAnimJoint763)

HAnimJoint741.addChild(HAnimJoint755)
HAnimJoint781 = x3d.HAnimJoint()
HAnimJoint781.setName("l_carpometacarpal_2")
HAnimJoint781.setDEF("Joe_l_carpometacarpal_2")
HAnimJoint781.setCenter(x3d.doubleToFloat([0.1983,0.8024,-0.028]))
HAnimJoint781.setSkinCoordIndex([129,130])
HAnimJoint781.setSkinCoordWeight(x3d.doubleToFloat([1,1]))
HAnimSegment782 = x3d.HAnimSegment()
HAnimSegment782.setName("l_metacarpal_2")
HAnimSegment782.setDEF("Joe_l_metacarpal_2")
Shape783 = x3d.Shape()
Appearance784 = x3d.Appearance()
Appearance784.setUSE("SegmentLine")

Shape783.setAppearance(Appearance784)
IndexedLineSet785 = x3d.IndexedLineSet()
IndexedLineSet785.setCoordIndex([0,1,-1])
Coordinate786 = x3d.Coordinate()
Coordinate786.setPoint(x3d.doubleToFloat([0.1983,0.8024,-0.028,0.1983,0.7815,-0.028]))

IndexedLineSet785.setCoord(Coordinate786)

Shape783.setGeometry(IndexedLineSet785)

HAnimSegment782.addChild(Shape783)
Transform787 = x3d.Transform()
Transform787.setTranslation(x3d.doubleToFloat([0.1983,0.8024,-0.028]))
Shape788 = x3d.Shape()
Shape788.setUSE("jointbox")

Transform787.addChild(Shape788)

HAnimSegment782.addChild(Transform787)

HAnimJoint781.addChild(HAnimSegment782)
HAnimJoint789 = x3d.HAnimJoint()
HAnimJoint789.setName("l_metacarpophalangeal_2")
HAnimJoint789.setDEF("Joe_l_metacarpophalangeal_2")
HAnimJoint789.setCenter(x3d.doubleToFloat([0.1983,0.7815,-0.028]))
HAnimJoint789.setSkinCoordIndex([138,139,140,153,154,155,163])
HAnimJoint789.setSkinCoordWeight(x3d.doubleToFloat([0.5,0.5,0.5,1,1,1,0.5]))
HAnimSegment790 = x3d.HAnimSegment()
HAnimSegment790.setName("l_carpal_proximal_phalanx_2")
HAnimSegment790.setDEF("Joe_l_carpal_proximal_phalanx_2")
Shape791 = x3d.Shape()
Appearance792 = x3d.Appearance()
Appearance792.setUSE("SegmentLine")

Shape791.setAppearance(Appearance792)
IndexedLineSet793 = x3d.IndexedLineSet()
IndexedLineSet793.setCoordIndex([0,1,-1])
Coordinate794 = x3d.Coordinate()
Coordinate794.setPoint(x3d.doubleToFloat([0.1983,0.7815,-0.028,0.2017,0.7363,-0.0248]))

IndexedLineSet793.setCoord(Coordinate794)

Shape791.setGeometry(IndexedLineSet793)

HAnimSegment790.addChild(Shape791)
Transform795 = x3d.Transform()
Transform795.setTranslation(x3d.doubleToFloat([0.1983,0.7815,-0.028]))
Shape796 = x3d.Shape()
Shape796.setUSE("jointbox")

Transform795.addChild(Shape796)

HAnimSegment790.addChild(Transform795)

HAnimJoint789.addChild(HAnimSegment790)
HAnimJoint797 = x3d.HAnimJoint()
HAnimJoint797.setName("l_carpal_proximal_interphalangeal_2")
HAnimJoint797.setDEF("Joe_l_carpal_proximal_interphalangeal_2")
HAnimJoint797.setCenter(x3d.doubleToFloat([0.2017,0.7363,-0.0248]))
HAnimJoint797.setSkinCoordIndex([166,167,168,169])
HAnimJoint797.setSkinCoordWeight(x3d.doubleToFloat([1,1,1,1]))
HAnimSegment798 = x3d.HAnimSegment()
HAnimSegment798.setName("l_carpal_middle_phalanx_2")
HAnimSegment798.setDEF("Joe_l_carpal_middle_phalanx_2")
Shape799 = x3d.Shape()
Appearance800 = x3d.Appearance()
Appearance800.setUSE("SegmentLine")

Shape799.setAppearance(Appearance800)
IndexedLineSet801 = x3d.IndexedLineSet()
IndexedLineSet801.setCoordIndex([0,1,-1])
Coordinate802 = x3d.Coordinate()
Coordinate802.setPoint(x3d.doubleToFloat([0.2017,0.7363,-0.0248,0.2028,0.7139,-0.0236]))

IndexedLineSet801.setCoord(Coordinate802)

Shape799.setGeometry(IndexedLineSet801)

HAnimSegment798.addChild(Shape799)
Transform803 = x3d.Transform()
Transform803.setTranslation(x3d.doubleToFloat([0.2017,0.7363,-0.0248]))
Shape804 = x3d.Shape()
Shape804.setUSE("jointbox")

Transform803.addChild(Shape804)

HAnimSegment798.addChild(Transform803)

HAnimJoint797.addChild(HAnimSegment798)
HAnimJoint805 = x3d.HAnimJoint()
HAnimJoint805.setName("l_carpal_distal_interphalangeal_2")
HAnimJoint805.setDEF("Joe_l_carpal_distal_interphalangeal_2")
HAnimJoint805.setCenter(x3d.doubleToFloat([0.2028,0.7139,-0.0236]))
HAnimJoint805.setSkinCoordIndex([170,171,172,173,174,175,176,177,178])
HAnimJoint805.setSkinCoordWeight(x3d.doubleToFloat([1,1,1,1,1,1,1,1,1]))
HAnimSegment806 = x3d.HAnimSegment()
HAnimSegment806.setName("l_carpal_distal_phalanx_2")
HAnimSegment806.setDEF("Joe_l_carpal_distal_phalanx_2")
Shape807 = x3d.Shape()
Appearance808 = x3d.Appearance()
Appearance808.setUSE("SegmentLine")

Shape807.setAppearance(Appearance808)
IndexedLineSet809 = x3d.IndexedLineSet()
IndexedLineSet809.setCoordIndex([0,1,-1])
Coordinate810 = x3d.Coordinate()
Coordinate810.setPoint(x3d.doubleToFloat([0.2028,0.7139,-0.0236,0.2089,0.6858,-0.0245]))

IndexedLineSet809.setCoord(Coordinate810)

Shape807.setGeometry(IndexedLineSet809)

HAnimSegment806.addChild(Shape807)
Transform811 = x3d.Transform()
Transform811.setTranslation(x3d.doubleToFloat([0.2028,0.7139,-0.0236]))
Shape812 = x3d.Shape()
Shape812.setUSE("jointbox")

Transform811.addChild(Shape812)

HAnimSegment806.addChild(Transform811)
HAnimSite813 = x3d.HAnimSite()
HAnimSite813.setName("l_carpal_distal_phalanx_2_tip")
HAnimSite813.setDEF("Joe_l_carpal_distal_phalanx_2_tip")
HAnimSite813.setTranslation(x3d.doubleToFloat([0.2089,0.6858,-0.0245]))
Shape814 = x3d.Shape()
Shape814.setUSE("sitebox")

HAnimSite813.addChild(Shape814)

HAnimSegment806.addChild(HAnimSite813)
HAnimSite815 = x3d.HAnimSite()
HAnimSite815.setName("l_dactylion_pt")
HAnimSite815.setDEF("Joe_l_dactylion_pt")
HAnimSite815.setTranslation(x3d.doubleToFloat([0.2056,0.6743,-0.0482]))
Shape816 = x3d.Shape()
Shape816.setUSE("sitebox")

HAnimSite815.addChild(Shape816)

HAnimSegment806.addChild(HAnimSite815)

HAnimJoint805.addChild(HAnimSegment806)

HAnimJoint797.addChild(HAnimJoint805)

HAnimJoint789.addChild(HAnimJoint797)

HAnimJoint781.addChild(HAnimJoint789)

HAnimJoint741.addChild(HAnimJoint781)
HAnimJoint817 = x3d.HAnimJoint()
HAnimJoint817.setName("l_carpometacarpal_3")
HAnimJoint817.setDEF("Joe_l_carpometacarpal_3")
HAnimJoint817.setCenter(x3d.doubleToFloat([0.1987,0.8029,-0.053]))
HAnimJoint817.setSkinCoordIndex([131,132])
HAnimJoint817.setSkinCoordWeight(x3d.doubleToFloat([1,1]))
HAnimSegment818 = x3d.HAnimSegment()
HAnimSegment818.setName("l_metacarpal_3")
HAnimSegment818.setDEF("Joe_l_metacarpal_3")
Shape819 = x3d.Shape()
Appearance820 = x3d.Appearance()
Appearance820.setUSE("SegmentLine")

Shape819.setAppearance(Appearance820)
IndexedLineSet821 = x3d.IndexedLineSet()
IndexedLineSet821.setCoordIndex([0,1,-1])
Coordinate822 = x3d.Coordinate()
Coordinate822.setPoint(x3d.doubleToFloat([0.1987,0.8029,-0.053,0.1987,0.7818,-0.053]))

IndexedLineSet821.setCoord(Coordinate822)

Shape819.setGeometry(IndexedLineSet821)

HAnimSegment818.addChild(Shape819)
Transform823 = x3d.Transform()
Transform823.setTranslation(x3d.doubleToFloat([0.1987,0.8029,-0.053]))
Shape824 = x3d.Shape()
Shape824.setUSE("jointbox")

Transform823.addChild(Shape824)

HAnimSegment818.addChild(Transform823)

HAnimJoint817.addChild(HAnimSegment818)
HAnimJoint825 = x3d.HAnimJoint()
HAnimJoint825.setName("l_metacarpophalangeal_3")
HAnimJoint825.setDEF("Joe_l_metacarpophalangeal_3")
HAnimJoint825.setCenter(x3d.doubleToFloat([0.1987,0.7818,-0.053]))
HAnimJoint825.setSkinCoordIndex([156,157,163,164])
HAnimJoint825.setSkinCoordWeight(x3d.doubleToFloat([1,1,0.5,0.5]))
HAnimSegment826 = x3d.HAnimSegment()
HAnimSegment826.setName("l_carpal_proximal_phalanx_3")
HAnimSegment826.setDEF("Joe_l_carpal_proximal_phalanx_3")
Shape827 = x3d.Shape()
Appearance828 = x3d.Appearance()
Appearance828.setUSE("SegmentLine")

Shape827.setAppearance(Appearance828)
IndexedLineSet829 = x3d.IndexedLineSet()
IndexedLineSet829.setCoordIndex([0,1,-1])
Coordinate830 = x3d.Coordinate()
Coordinate830.setPoint(x3d.doubleToFloat([0.1987,0.7818,-0.053,0.2013,0.7273,-0.0503]))

IndexedLineSet829.setCoord(Coordinate830)

Shape827.setGeometry(IndexedLineSet829)

HAnimSegment826.addChild(Shape827)
Transform831 = x3d.Transform()
Transform831.setTranslation(x3d.doubleToFloat([0.1987,0.7818,-0.053]))
Shape832 = x3d.Shape()
Shape832.setUSE("jointbox")

Transform831.addChild(Shape832)

HAnimSegment826.addChild(Transform831)

HAnimJoint825.addChild(HAnimSegment826)
HAnimJoint833 = x3d.HAnimJoint()
HAnimJoint833.setName("l_carpal_proximal_interphalangeal_3")
HAnimJoint833.setDEF("Joe_l_carpal_proximal_interphalangeal_3")
HAnimJoint833.setCenter(x3d.doubleToFloat([0.2013,0.7273,-0.0503]))
HAnimJoint833.setSkinCoordIndex([179,180,181,182])
HAnimJoint833.setSkinCoordWeight(x3d.doubleToFloat([1,1,1,1]))
HAnimSegment834 = x3d.HAnimSegment()
HAnimSegment834.setName("l_carpal_middle_phalanx_3")
HAnimSegment834.setDEF("Joe_l_carpal_middle_phalanx_3")
Shape835 = x3d.Shape()
Appearance836 = x3d.Appearance()
Appearance836.setUSE("SegmentLine")

Shape835.setAppearance(Appearance836)
IndexedLineSet837 = x3d.IndexedLineSet()
IndexedLineSet837.setCoordIndex([0,1,-1])
Coordinate838 = x3d.Coordinate()
Coordinate838.setPoint(x3d.doubleToFloat([0.2013,0.7273,-0.0503,0.2026,0.7011,-0.0494]))

IndexedLineSet837.setCoord(Coordinate838)

Shape835.setGeometry(IndexedLineSet837)

HAnimSegment834.addChild(Shape835)
Transform839 = x3d.Transform()
Transform839.setTranslation(x3d.doubleToFloat([0.2013,0.7273,-0.0503]))
Shape840 = x3d.Shape()
Shape840.setUSE("jointbox")

Transform839.addChild(Shape840)

HAnimSegment834.addChild(Transform839)

HAnimJoint833.addChild(HAnimSegment834)
HAnimJoint841 = x3d.HAnimJoint()
HAnimJoint841.setName("l_carpal_distal_interphalangeal_3")
HAnimJoint841.setDEF("Joe_l_carpal_distal_interphalangeal_3")
HAnimJoint841.setCenter(x3d.doubleToFloat([0.2026,0.7011,-0.0494]))
HAnimJoint841.setSkinCoordIndex([183,184,185,186,187,188,189,190,191])
HAnimJoint841.setSkinCoordWeight(x3d.doubleToFloat([1,1,1,1,1,1,1,1,1]))
HAnimSegment842 = x3d.HAnimSegment()
HAnimSegment842.setName("l_carpal_distal_phalanx_3")
HAnimSegment842.setDEF("Joe_l_carpal_distal_phalanx_3")
Shape843 = x3d.Shape()
Appearance844 = x3d.Appearance()
Appearance844.setUSE("SegmentLine")

Shape843.setAppearance(Appearance844)
IndexedLineSet845 = x3d.IndexedLineSet()
IndexedLineSet845.setCoordIndex([0,1,-1])
Coordinate846 = x3d.Coordinate()
Coordinate846.setPoint(x3d.doubleToFloat([0.2026,0.7011,-0.0494,0.208,0.6731,-0.0491]))

IndexedLineSet845.setCoord(Coordinate846)

Shape843.setGeometry(IndexedLineSet845)

HAnimSegment842.addChild(Shape843)
HAnimSite847 = x3d.HAnimSite()
HAnimSite847.setName("l_carpal_distal_phalanx_3_tip")
HAnimSite847.setDEF("Joe_l_carpal_distal_phalanx_3_tip")
HAnimSite847.setTranslation(x3d.doubleToFloat([0.208,0.6731,-0.0491]))
Shape848 = x3d.Shape()
Shape848.setUSE("sitebox")

HAnimSite847.addChild(Shape848)

HAnimSegment842.addChild(HAnimSite847)
Transform849 = x3d.Transform()
Transform849.setTranslation(x3d.doubleToFloat([0.2026,0.7011,-0.0494]))
Shape850 = x3d.Shape()
Shape850.setUSE("jointbox")

Transform849.addChild(Shape850)

HAnimSegment842.addChild(Transform849)

HAnimJoint841.addChild(HAnimSegment842)

HAnimJoint833.addChild(HAnimJoint841)

HAnimJoint825.addChild(HAnimJoint833)

HAnimJoint817.addChild(HAnimJoint825)

HAnimJoint741.addChild(HAnimJoint817)
HAnimJoint851 = x3d.HAnimJoint()
HAnimJoint851.setName("l_carpometacarpal_4")
HAnimJoint851.setDEF("Joe_l_carpometacarpal_4")
HAnimJoint851.setCenter(x3d.doubleToFloat([0.1956,0.8019,-0.0794]))
HAnimJoint851.setSkinCoordIndex([133,134])
HAnimJoint851.setSkinCoordWeight(x3d.doubleToFloat([1,1]))
HAnimSegment852 = x3d.HAnimSegment()
HAnimSegment852.setName("l_metacarpal_4")
HAnimSegment852.setDEF("Joe_l_metacarpal_4")
Shape853 = x3d.Shape()
Appearance854 = x3d.Appearance()
Appearance854.setUSE("SegmentLine")

Shape853.setAppearance(Appearance854)
IndexedLineSet855 = x3d.IndexedLineSet()
IndexedLineSet855.setCoordIndex([0,1,-1])
Coordinate856 = x3d.Coordinate()
Coordinate856.setPoint(x3d.doubleToFloat([0.1956,0.8019,-0.0794,0.1956,0.7815,-0.0794]))

IndexedLineSet855.setCoord(Coordinate856)

Shape853.setGeometry(IndexedLineSet855)

HAnimSegment852.addChild(Shape853)
Transform857 = x3d.Transform()
Transform857.setTranslation(x3d.doubleToFloat([0.1956,0.8019,-0.0794]))
Shape858 = x3d.Shape()
Shape858.setUSE("jointbox")

Transform857.addChild(Shape858)

HAnimSegment852.addChild(Transform857)

HAnimJoint851.addChild(HAnimSegment852)
HAnimJoint859 = x3d.HAnimJoint()
HAnimJoint859.setName("l_metacarpophalangeal_4")
HAnimJoint859.setDEF("Joe_l_metacarpophalangeal_4")
HAnimJoint859.setCenter(x3d.doubleToFloat([0.1956,0.7815,-0.0794]))
HAnimJoint859.setSkinCoordIndex([158,159,164,165])
HAnimJoint859.setSkinCoordWeight(x3d.doubleToFloat([1,1,0.5,0.5]))
HAnimSegment860 = x3d.HAnimSegment()
HAnimSegment860.setName("l_carpal_proximal_phalanx_4")
HAnimSegment860.setDEF("Joe_l_carpal_proximal_phalanx_4")
Shape861 = x3d.Shape()
Appearance862 = x3d.Appearance()
Appearance862.setUSE("SegmentLine")

Shape861.setAppearance(Appearance862)
IndexedLineSet863 = x3d.IndexedLineSet()
IndexedLineSet863.setCoordIndex([0,1,-1])
Coordinate864 = x3d.Coordinate()
Coordinate864.setPoint(x3d.doubleToFloat([0.1956,0.7815,-0.0794,0.1973,0.7287,-0.0777]))

IndexedLineSet863.setCoord(Coordinate864)

Shape861.setGeometry(IndexedLineSet863)

HAnimSegment860.addChild(Shape861)
Transform865 = x3d.Transform()
Transform865.setTranslation(x3d.doubleToFloat([0.1956,0.7815,-0.0794]))
Shape866 = x3d.Shape()
Shape866.setUSE("jointbox")

Transform865.addChild(Shape866)

HAnimSegment860.addChild(Transform865)

HAnimJoint859.addChild(HAnimSegment860)
HAnimJoint867 = x3d.HAnimJoint()
HAnimJoint867.setName("l_carpal_proximal_interphalangeal_4")
HAnimJoint867.setDEF("Joe_l_carpal_proximal_interphalangeal_4")
HAnimJoint867.setCenter(x3d.doubleToFloat([0.1973,0.7287,-0.0777]))
HAnimJoint867.setSkinCoordIndex([192,193,194,195])
HAnimJoint867.setSkinCoordWeight(x3d.doubleToFloat([1,1,1,1]))
HAnimSegment868 = x3d.HAnimSegment()
HAnimSegment868.setName("l_carpal_middle_phalanx_4")
HAnimSegment868.setDEF("Joe_l_carpal_middle_phalanx_4")
Shape869 = x3d.Shape()
Appearance870 = x3d.Appearance()
Appearance870.setUSE("SegmentLine")

Shape869.setAppearance(Appearance870)
IndexedLineSet871 = x3d.IndexedLineSet()
IndexedLineSet871.setCoordIndex([0,1,-1])
Coordinate872 = x3d.Coordinate()
Coordinate872.setPoint(x3d.doubleToFloat([0.1973,0.7287,-0.0777,0.1983,0.7045,-0.0767]))

IndexedLineSet871.setCoord(Coordinate872)

Shape869.setGeometry(IndexedLineSet871)

HAnimSegment868.addChild(Shape869)
Transform873 = x3d.Transform()
Transform873.setTranslation(x3d.doubleToFloat([0.1973,0.7287,-0.0777]))
Shape874 = x3d.Shape()
Shape874.setUSE("jointbox")

Transform873.addChild(Shape874)

HAnimSegment868.addChild(Transform873)

HAnimJoint867.addChild(HAnimSegment868)
HAnimJoint875 = x3d.HAnimJoint()
HAnimJoint875.setName("l_carpal_distal_interphalangeal_4")
HAnimJoint875.setDEF("Joe_l_carpal_distal_interphalangeal_4")
HAnimJoint875.setCenter(x3d.doubleToFloat([0.1983,0.7045,-0.0767]))
HAnimJoint875.setSkinCoordIndex([196,197,198,199,200,201,202,203,204])
HAnimJoint875.setSkinCoordWeight(x3d.doubleToFloat([1,1,1,1,1,1,1,1,1]))
HAnimSegment876 = x3d.HAnimSegment()
HAnimSegment876.setName("l_carpal_distal_phalanx_4")
HAnimSegment876.setDEF("Joe_l_carpal_distal_phalanx_4")
Shape877 = x3d.Shape()
Appearance878 = x3d.Appearance()
Appearance878.setUSE("SegmentLine")

Shape877.setAppearance(Appearance878)
IndexedLineSet879 = x3d.IndexedLineSet()
IndexedLineSet879.setCoordIndex([0,1,-1])
Coordinate880 = x3d.Coordinate()
Coordinate880.setPoint(x3d.doubleToFloat([0.1983,0.7045,-0.0767,0.2035,0.675,-0.0756]))

IndexedLineSet879.setCoord(Coordinate880)

Shape877.setGeometry(IndexedLineSet879)

HAnimSegment876.addChild(Shape877)
Transform881 = x3d.Transform()
Transform881.setTranslation(x3d.doubleToFloat([0.1983,0.7045,-0.0767]))
Shape882 = x3d.Shape()
Shape882.setUSE("jointbox")

Transform881.addChild(Shape882)

HAnimSegment876.addChild(Transform881)
HAnimSite883 = x3d.HAnimSite()
HAnimSite883.setName("l_carpal_distal_phalanx_4_tip")
HAnimSite883.setDEF("Joe_l_carpal_distal_phalanx_4_tip")
HAnimSite883.setTranslation(x3d.doubleToFloat([0.2035,0.675,-0.0756]))
Shape884 = x3d.Shape()
Shape884.setUSE("sitebox")

HAnimSite883.addChild(Shape884)

HAnimSegment876.addChild(HAnimSite883)

HAnimJoint875.addChild(HAnimSegment876)

HAnimJoint867.addChild(HAnimJoint875)

HAnimJoint859.addChild(HAnimJoint867)

HAnimJoint851.addChild(HAnimJoint859)

HAnimJoint741.addChild(HAnimJoint851)
HAnimJoint885 = x3d.HAnimJoint()
HAnimJoint885.setName("l_carpometacarpal_5")
HAnimJoint885.setDEF("Joe_l_carpometacarpal_5")
HAnimJoint885.setCenter(x3d.doubleToFloat([0.1925,0.8066,-0.1036]))
HAnimJoint885.setSkinCoordIndex([135,136,137,165])
HAnimJoint885.setSkinCoordWeight(x3d.doubleToFloat([1,1,1,0.5]))
HAnimSegment886 = x3d.HAnimSegment()
HAnimSegment886.setName("l_metacarpal_5")
HAnimSegment886.setDEF("Joe_l_metacarpal_5")
Shape887 = x3d.Shape()
Appearance888 = x3d.Appearance()
Appearance888.setUSE("SegmentLine")

Shape887.setAppearance(Appearance888)
IndexedLineSet889 = x3d.IndexedLineSet()
IndexedLineSet889.setCoordIndex([0,1,-1])
Coordinate890 = x3d.Coordinate()
Coordinate890.setPoint(x3d.doubleToFloat([0.1925,0.8066,-0.1036,0.1925,0.7866,-0.1036]))

IndexedLineSet889.setCoord(Coordinate890)

Shape887.setGeometry(IndexedLineSet889)

HAnimSegment886.addChild(Shape887)
Transform891 = x3d.Transform()
Transform891.setTranslation(x3d.doubleToFloat([0.1925,0.8066,-0.1036]))
Shape892 = x3d.Shape()
Shape892.setUSE("jointbox")

Transform891.addChild(Shape892)

HAnimSegment886.addChild(Transform891)

HAnimJoint885.addChild(HAnimSegment886)
HAnimJoint893 = x3d.HAnimJoint()
HAnimJoint893.setName("l_metacarpophalangeal_5")
HAnimJoint893.setDEF("Joe_l_metacarpophalangeal_5")
HAnimJoint893.setCenter(x3d.doubleToFloat([0.1925,0.7866,-0.1036]))
HAnimJoint893.setSkinCoordIndex([160,161,162])
HAnimJoint893.setSkinCoordWeight(x3d.doubleToFloat([1,1,1]))
HAnimSegment894 = x3d.HAnimSegment()
HAnimSegment894.setName("l_carpal_proximal_phalanx_5")
HAnimSegment894.setDEF("Joe_l_carpal_proximal_phalanx_5")
Shape895 = x3d.Shape()
Appearance896 = x3d.Appearance()
Appearance896.setUSE("SegmentLine")

Shape895.setAppearance(Appearance896)
IndexedLineSet897 = x3d.IndexedLineSet()
IndexedLineSet897.setCoordIndex([0,1,-1])
Coordinate898 = x3d.Coordinate()
Coordinate898.setPoint(x3d.doubleToFloat([0.1925,0.7866,-0.1036,0.1938,0.7452,-0.1024]))

IndexedLineSet897.setCoord(Coordinate898)

Shape895.setGeometry(IndexedLineSet897)

HAnimSegment894.addChild(Shape895)
Transform899 = x3d.Transform()
Transform899.setTranslation(x3d.doubleToFloat([0.1925,0.7866,-0.1036]))
Shape900 = x3d.Shape()
Shape900.setUSE("jointbox")

Transform899.addChild(Shape900)

HAnimSegment894.addChild(Transform899)

HAnimJoint893.addChild(HAnimSegment894)
HAnimJoint901 = x3d.HAnimJoint()
HAnimJoint901.setName("l_carpal_proximal_interphalangeal_5")
HAnimJoint901.setDEF("Joe_l_carpal_proximal_interphalangeal_5")
HAnimJoint901.setCenter(x3d.doubleToFloat([0.1938,0.7452,-0.1024]))
HAnimJoint901.setSkinCoordIndex([205,206,207,208])
HAnimJoint901.setSkinCoordWeight(x3d.doubleToFloat([1,1,1,1]))
HAnimSegment902 = x3d.HAnimSegment()
HAnimSegment902.setName("l_carpal_middle_phalanx_5")
HAnimSegment902.setDEF("Joe_l_carpal_middle_phalanx_5")
Transform903 = x3d.Transform()
Transform903.setTranslation(x3d.doubleToFloat([0.1938,0.7452,-0.1024]))
Shape904 = x3d.Shape()
Shape904.setUSE("jointbox")

Transform903.addChild(Shape904)

HAnimSegment902.addChild(Transform903)
Shape905 = x3d.Shape()
Appearance906 = x3d.Appearance()
Appearance906.setUSE("SegmentLine")

Shape905.setAppearance(Appearance906)
IndexedLineSet907 = x3d.IndexedLineSet()
IndexedLineSet907.setCoordIndex([0,1,-1])
Coordinate908 = x3d.Coordinate()
Coordinate908.setPoint(x3d.doubleToFloat([0.1938,0.7452,-0.1024,0.1948,0.7277,-0.1017]))

IndexedLineSet907.setCoord(Coordinate908)

Shape905.setGeometry(IndexedLineSet907)

HAnimSegment902.addChild(Shape905)

HAnimJoint901.addChild(HAnimSegment902)
HAnimJoint909 = x3d.HAnimJoint()
HAnimJoint909.setName("l_carpal_distal_interphalangeal_5")
HAnimJoint909.setDEF("Joe_l_carpal_distal_interphalangeal_5")
HAnimJoint909.setCenter(x3d.doubleToFloat([0.1948,0.7277,-0.1017]))
HAnimJoint909.setSkinCoordIndex([209,210,211,212,213,214,215,216,217])
HAnimJoint909.setSkinCoordWeight(x3d.doubleToFloat([1,1,1,1,1,1,1,1,1]))
HAnimSegment910 = x3d.HAnimSegment()
HAnimSegment910.setName("l_carpal_distal_phalanx_5")
HAnimSegment910.setDEF("Joe_l_carpal_distal_phalanx_5")
Shape911 = x3d.Shape()
Appearance912 = x3d.Appearance()
Appearance912.setUSE("SegmentLine")

Shape911.setAppearance(Appearance912)
IndexedLineSet913 = x3d.IndexedLineSet()
IndexedLineSet913.setCoordIndex([0,1,-1])
Coordinate914 = x3d.Coordinate()
Coordinate914.setPoint(x3d.doubleToFloat([0.1948,0.7277,-0.1017,0.2014,0.7009,-0.1012]))

IndexedLineSet913.setCoord(Coordinate914)

Shape911.setGeometry(IndexedLineSet913)

HAnimSegment910.addChild(Shape911)
Transform915 = x3d.Transform()
Transform915.setTranslation(x3d.doubleToFloat([0.1948,0.7277,-0.1017]))
Shape916 = x3d.Shape()
Shape916.setUSE("jointbox")

Transform915.addChild(Shape916)

HAnimSegment910.addChild(Transform915)
HAnimSite917 = x3d.HAnimSite()
HAnimSite917.setName("l_carpal_distal_phalanx_5_tip")
HAnimSite917.setDEF("Joe_l_carpal_distal_phalanx_5_tip")
HAnimSite917.setTranslation(x3d.doubleToFloat([0.2014,0.7009,-0.1012]))
Shape918 = x3d.Shape()
Shape918.setUSE("sitebox")

HAnimSite917.addChild(Shape918)

HAnimSegment910.addChild(HAnimSite917)

HAnimJoint909.addChild(HAnimSegment910)

HAnimJoint901.addChild(HAnimJoint909)

HAnimJoint893.addChild(HAnimJoint901)

HAnimJoint885.addChild(HAnimJoint893)

HAnimJoint741.addChild(HAnimJoint885)

HAnimJoint719.addChild(HAnimJoint741)

HAnimJoint695.addChild(HAnimJoint719)

HAnimJoint679.addChild(HAnimJoint695)

HAnimJoint669.addChild(HAnimJoint679)

HAnimJoint553.addChild(HAnimJoint669)
HAnimJoint919 = x3d.HAnimJoint()
HAnimJoint919.setName("r_sternoclavicular")
HAnimJoint919.setDEF("Joe_r_sternoclavicular")
HAnimJoint919.setCenter(x3d.doubleToFloat([-0.03,1.46,0]))
HAnimJoint919.setSkinCoordIndex([10])
HAnimJoint919.setSkinCoordWeight(x3d.doubleToFloat([1]))
HAnimSegment920 = x3d.HAnimSegment()
HAnimSegment920.setName("r_clavicle")
HAnimSegment920.setDEF("Joe_r_clavicle")
Shape921 = x3d.Shape()
Appearance922 = x3d.Appearance()
Appearance922.setUSE("SegmentLine")

Shape921.setAppearance(Appearance922)
IndexedLineSet923 = x3d.IndexedLineSet()
IndexedLineSet923.setCoordIndex([0,1,-1])
Coordinate924 = x3d.Coordinate()
Coordinate924.setPoint(x3d.doubleToFloat([-0.03,1.46,0.02,-0.09,1.41,-0.09]))

IndexedLineSet923.setCoord(Coordinate924)

Shape921.setGeometry(IndexedLineSet923)

HAnimSegment920.addChild(Shape921)
Transform925 = x3d.Transform()
Transform925.setTranslation(x3d.doubleToFloat([-0.03,1.46,0.02]))
Shape926 = x3d.Shape()
Shape926.setUSE("jointbox")

Transform925.addChild(Shape926)

HAnimSegment920.addChild(Transform925)
HAnimSite927 = x3d.HAnimSite()
HAnimSite927.setName("r_clavicle_pt")
HAnimSite927.setDEF("Joe_r_clavicle_pt")
HAnimSite927.setTranslation(x3d.doubleToFloat([-0.03,1.46,0.035]))
Shape928 = x3d.Shape()
Shape928.setUSE("sitebox")

HAnimSite927.addChild(Shape928)

HAnimSegment920.addChild(HAnimSite927)

HAnimJoint919.addChild(HAnimSegment920)
HAnimJoint929 = x3d.HAnimJoint()
HAnimJoint929.setName("r_acromioclavicular")
HAnimJoint929.setDEF("Joe_r_acromioclavicular")
HAnimJoint929.setCenter(x3d.doubleToFloat([-0.09,1.41,-0.11]))
HAnimJoint929.setSkinCoordIndex([77,29])
HAnimJoint929.setSkinCoordWeight(x3d.doubleToFloat([1,0.9]))
HAnimSegment930 = x3d.HAnimSegment()
HAnimSegment930.setName("r_scapula")
HAnimSegment930.setDEF("Joe_r_scapula")
Shape931 = x3d.Shape()
Appearance932 = x3d.Appearance()
Appearance932.setUSE("SegmentLine")

Shape931.setAppearance(Appearance932)
IndexedLineSet933 = x3d.IndexedLineSet()
IndexedLineSet933.setCoordIndex([0,1,-1])
Coordinate934 = x3d.Coordinate()
Coordinate934.setPoint(x3d.doubleToFloat([-0.09,1.41,-0.09,-0.2,1.44,-0.04]))

IndexedLineSet933.setCoord(Coordinate934)

Shape931.setGeometry(IndexedLineSet933)

HAnimSegment930.addChild(Shape931)
Transform935 = x3d.Transform()
Transform935.setTranslation(x3d.doubleToFloat([-0.09,1.41,-0.09]))
Shape936 = x3d.Shape()
Shape936.setUSE("jointbox")

Transform935.addChild(Shape936)

HAnimSegment930.addChild(Transform935)
Transform937 = x3d.Transform()
Transform937.setTranslation(x3d.doubleToFloat([-0.11,1.427,-0.1375]))
Shape938 = x3d.Shape()
Shape938.setUSE("skinsphere")

Transform937.addChild(Shape938)

HAnimSegment930.addChild(Transform937)
HAnimSite939 = x3d.HAnimSite()
HAnimSite939.setName("r_acromion_pt")
HAnimSite939.setDEF("Joe_r_acromion_pt")
HAnimSite939.setTranslation(x3d.doubleToFloat([-0.178,1.4825,-0.0625]))
Shape940 = x3d.Shape()
Shape940.setUSE("sitebox")

HAnimSite939.addChild(Shape940)

HAnimSegment930.addChild(HAnimSite939)
HAnimSite941 = x3d.HAnimSite()
HAnimSite941.setName("r_axilla_proximal_pt")
HAnimSite941.setDEF("Joe_r_axilla_proximal_pt")
HAnimSite941.setTranslation(x3d.doubleToFloat([-0.17,1.38,0.007]))
Shape942 = x3d.Shape()
Shape942.setUSE("sitebox")

HAnimSite941.addChild(Shape942)

HAnimSegment930.addChild(HAnimSite941)
HAnimSite943 = x3d.HAnimSite()
HAnimSite943.setName("r_axilla_distal_pt")
HAnimSite943.setDEF("Joe_r_axilla_distal_pt")
HAnimSite943.setTranslation(x3d.doubleToFloat([-0.16,1.38,-0.127]))
Shape944 = x3d.Shape()
Shape944.setUSE("sitebox")

HAnimSite943.addChild(Shape944)

HAnimSegment930.addChild(HAnimSite943)

HAnimJoint929.addChild(HAnimSegment930)
HAnimJoint945 = x3d.HAnimJoint()
HAnimJoint945.setName("r_shoulder")
HAnimJoint945.setDEF("Joe_r_shoulder")
HAnimJoint945.setCenter(x3d.doubleToFloat([-0.2,1.44,-0.04]))
HAnimJoint945.setSkinCoordIndex([29,30,32,78,218,219,220,221,86,88])
HAnimJoint945.setSkinCoordWeight(x3d.doubleToFloat([0.1,1,1,1,1,1,1,1,0.3,0.2]))
HAnimSegment946 = x3d.HAnimSegment()
HAnimSegment946.setName("r_upperarm")
HAnimSegment946.setDEF("Joe_r_upperarm")
Transform947 = x3d.Transform()
Transform947.setTranslation(x3d.doubleToFloat([-0.2,1.44,-0.04]))
Shape948 = x3d.Shape()
Shape948.setUSE("jointbox")

Transform947.addChild(Shape948)

HAnimSegment946.addChild(Transform947)
Shape949 = x3d.Shape()
Appearance950 = x3d.Appearance()
Appearance950.setUSE("SegmentLine")

Shape949.setAppearance(Appearance950)
IndexedLineSet951 = x3d.IndexedLineSet()
IndexedLineSet951.setCoordIndex([0,1,-1])
Coordinate952 = x3d.Coordinate()
Coordinate952.setPoint(x3d.doubleToFloat([-0.2,1.44,-0.04,-0.2,1.1388,-0.04]))

IndexedLineSet951.setCoord(Coordinate952)

Shape949.setGeometry(IndexedLineSet951)

HAnimSegment946.addChild(Shape949)
Transform953 = x3d.Transform()
Transform953.setTranslation(x3d.doubleToFloat([-0.178,1.4825,-0.0625]))
Shape954 = x3d.Shape()
Shape954.setUSE("skinsphere")

Transform953.addChild(Shape954)

HAnimSegment946.addChild(Transform953)
Transform955 = x3d.Transform()
Transform955.setTranslation(x3d.doubleToFloat([-0.17,1.38,0.007]))
Shape956 = x3d.Shape()
Shape956.setUSE("skinsphere")

Transform955.addChild(Shape956)

HAnimSegment946.addChild(Transform955)
Transform957 = x3d.Transform()
Transform957.setTranslation(x3d.doubleToFloat([-0.16,1.38,-0.127]))
Shape958 = x3d.Shape()
Shape958.setUSE("skinsphere")

Transform957.addChild(Shape958)

HAnimSegment946.addChild(Transform957)
Transform959 = x3d.Transform()
Transform959.setTranslation(x3d.doubleToFloat([-0.235,1.42,-0.0625]))
Shape960 = x3d.Shape()
Shape960.setUSE("skinsphere")

Transform959.addChild(Shape960)

HAnimSegment946.addChild(Transform959)
Transform961 = x3d.Transform()
Transform961.setTranslation(x3d.doubleToFloat([-0.23,1.235,-0.04]))
Shape962 = x3d.Shape()
Shape962.setUSE("skinsphere")

Transform961.addChild(Shape962)

HAnimSegment946.addChild(Transform961)
Transform963 = x3d.Transform()
Transform963.setTranslation(x3d.doubleToFloat([-0.16,1.23,-0.04]))
Shape964 = x3d.Shape()
Shape964.setUSE("skinsphere")

Transform963.addChild(Shape964)

HAnimSegment946.addChild(Transform963)
Transform965 = x3d.Transform()
Transform965.setTranslation(x3d.doubleToFloat([-0.2,1.23,-0.105]))
Shape966 = x3d.Shape()
Shape966.setUSE("skinsphere")

Transform965.addChild(Shape966)

HAnimSegment946.addChild(Transform965)
Transform967 = x3d.Transform()
Transform967.setTranslation(x3d.doubleToFloat([-0.2,1.235,0.02]))
Shape968 = x3d.Shape()
Shape968.setUSE("skinsphere")

Transform967.addChild(Shape968)

HAnimSegment946.addChild(Transform967)
HAnimSite969 = x3d.HAnimSite()
HAnimSite969.setName("r_humeral_medial_epicondyle_pt")
HAnimSite969.setDEF("Joe_r_humeral_medial_epicondyle_pt")
HAnimSite969.setTranslation(x3d.doubleToFloat([-0.165,1.1388,-0.04]))
Shape970 = x3d.Shape()
Shape970.setUSE("sitebox")

HAnimSite969.addChild(Shape970)

HAnimSegment946.addChild(HAnimSite969)
HAnimSite971 = x3d.HAnimSite()
HAnimSite971.setName("r_radiale_pt")
HAnimSite971.setDEF("Joe_r_radiale_pt")
HAnimSite971.setTranslation(x3d.doubleToFloat([-0.23,1.133,-0.055]))
Shape972 = x3d.Shape()
Shape972.setUSE("sitebox")

HAnimSite971.addChild(Shape972)

HAnimSegment946.addChild(HAnimSite971)
HAnimSite973 = x3d.HAnimSite()
HAnimSite973.setName("r_humeral_lateral_epicondyle_pt")
HAnimSite973.setDEF("Joe_r_humeral_lateral_epicondyle_pt")
HAnimSite973.setTranslation(x3d.doubleToFloat([-0.244,1.1388,-0.04]))
Shape974 = x3d.Shape()
Shape974.setUSE("sitebox")

HAnimSite973.addChild(Shape974)

HAnimSegment946.addChild(HAnimSite973)

HAnimJoint945.addChild(HAnimSegment946)
HAnimJoint975 = x3d.HAnimJoint()
HAnimJoint975.setName("r_elbow")
HAnimJoint975.setDEF("Joe_r_elbow")
HAnimJoint975.setCenter(x3d.doubleToFloat([-0.2,1.1388,-0.04]))
HAnimJoint975.setSkinCoordIndex([33,34,35,225,226,227,228,229,231,232,233,234])
HAnimJoint975.setSkinCoordWeight(x3d.doubleToFloat([1,1,1,1,1,1,1,1,1,1,1,1]))
HAnimSegment976 = x3d.HAnimSegment()
HAnimSegment976.setName("r_forearm")
HAnimSegment976.setDEF("Joe_r_forearm")
Shape977 = x3d.Shape()
Appearance978 = x3d.Appearance()
Appearance978.setUSE("SegmentLine")

Shape977.setAppearance(Appearance978)
IndexedLineSet979 = x3d.IndexedLineSet()
IndexedLineSet979.setCoordIndex([0,1,-1])
Coordinate980 = x3d.Coordinate()
Coordinate980.setPoint(x3d.doubleToFloat([-0.2,1.1388,-0.04,-0.2,0.89,-0.04]))

IndexedLineSet979.setCoord(Coordinate980)

Shape977.setGeometry(IndexedLineSet979)

HAnimSegment976.addChild(Shape977)
Transform981 = x3d.Transform()
Transform981.setTranslation(x3d.doubleToFloat([-0.2,1.1388,-0.04]))
Shape982 = x3d.Shape()
Shape982.setUSE("jointbox")

Transform981.addChild(Shape982)

HAnimSegment976.addChild(Transform981)
Transform983 = x3d.Transform()
Transform983.setTranslation(x3d.doubleToFloat([-0.2,1.1388,0.013]))
Shape984 = x3d.Shape()
Shape984.setUSE("skinsphere")

Transform983.addChild(Shape984)

HAnimSegment976.addChild(Transform983)
Transform985 = x3d.Transform()
Transform985.setTranslation(x3d.doubleToFloat([-0.225,1,-0.01]))
Shape986 = x3d.Shape()
Shape986.setUSE("skinsphere")

Transform985.addChild(Shape986)

HAnimSegment976.addChild(Transform985)
Transform987 = x3d.Transform()
Transform987.setTranslation(x3d.doubleToFloat([-0.225,1,-0.07]))
Shape988 = x3d.Shape()
Shape988.setUSE("skinsphere")

Transform987.addChild(Shape988)

HAnimSegment976.addChild(Transform987)
Transform989 = x3d.Transform()
Transform989.setTranslation(x3d.doubleToFloat([-0.185,1,-0.01]))
Shape990 = x3d.Shape()
Shape990.setUSE("skinsphere")

Transform989.addChild(Shape990)

HAnimSegment976.addChild(Transform989)
Transform991 = x3d.Transform()
Transform991.setTranslation(x3d.doubleToFloat([-0.185,1,-0.07]))
Shape992 = x3d.Shape()
Shape992.setUSE("skinsphere")

Transform991.addChild(Shape992)

HAnimSegment976.addChild(Transform991)
HAnimSite993 = x3d.HAnimSite()
HAnimSite993.setName("r_radial_styloid_pt")
HAnimSite993.setDEF("Joe_r_radial_styloid_pt")
HAnimSite993.setTranslation(x3d.doubleToFloat([-0.2,0.9,-0.015]))
Shape994 = x3d.Shape()
Shape994.setUSE("sitebox")

HAnimSite993.addChild(Shape994)

HAnimSegment976.addChild(HAnimSite993)
HAnimSite995 = x3d.HAnimSite()
HAnimSite995.setName("r_olecranon_pt")
HAnimSite995.setDEF("Joe_r_olecranon_pt")
HAnimSite995.setTranslation(x3d.doubleToFloat([-0.2,1.1388,-0.08]))
Shape996 = x3d.Shape()
Shape996.setUSE("sitebox")

HAnimSite995.addChild(Shape996)

HAnimSegment976.addChild(HAnimSite995)

HAnimJoint975.addChild(HAnimSegment976)
HAnimJoint997 = x3d.HAnimJoint()
HAnimJoint997.setName("r_radiocarpal")
HAnimJoint997.setDEF("Joe_r_radiocarpal")
HAnimJoint997.setCenter(x3d.doubleToFloat([-0.2,0.89,-0.04]))
HAnimJoint997.setSkinCoordIndex([235,236,237,238,239,240,241,242])
HAnimJoint997.setSkinCoordWeight(x3d.doubleToFloat([1,1,1,1,1,1,1,1]))
HAnimSegment998 = x3d.HAnimSegment()
HAnimSegment998.setName("r_carpal")
HAnimSegment998.setDEF("Joe_r_carpal")
Shape999 = x3d.Shape()
Appearance1000 = x3d.Appearance()
Appearance1000.setUSE("SegmentLine")

Shape999.setAppearance(Appearance1000)
IndexedLineSet1001 = x3d.IndexedLineSet()
IndexedLineSet1001.setCoordIndex([0,1,-1,0,2,-1,0,3,-1,0,4,-1,0,5,-1])
Coordinate1002 = x3d.Coordinate()
Coordinate1002.setPoint(x3d.doubleToFloat([-0.2,0.89,-0.04,-0.2,0.85,0,-0.2,0.84,-0.015,-0.2,0.835,-0.04,-0.2,0.835,-0.065,-0.2,0.84,-0.085]))

IndexedLineSet1001.setCoord(Coordinate1002)

Shape999.setGeometry(IndexedLineSet1001)

HAnimSegment998.addChild(Shape999)
Transform1003 = x3d.Transform()
Transform1003.setTranslation(x3d.doubleToFloat([-0.2,0.89,-0.04]))
Shape1004 = x3d.Shape()
Shape1004.setUSE("jointbox")

Transform1003.addChild(Shape1004)

HAnimSegment998.addChild(Transform1003)
HAnimSite1005 = x3d.HAnimSite()
HAnimSite1005.setName("r_ulnar_styloid_pt")
HAnimSite1005.setDEF("Joe_r_ulnar_styloid_pt")
HAnimSite1005.setTranslation(x3d.doubleToFloat([-0.2,0.9,-0.085]))
Shape1006 = x3d.Shape()
Shape1006.setUSE("sitebox")

HAnimSite1005.addChild(Shape1006)

HAnimSegment998.addChild(HAnimSite1005)

HAnimJoint997.addChild(HAnimSegment998)
HAnimJoint1007 = x3d.HAnimJoint()
HAnimJoint1007.setName("r_carpometacarpal_1")
HAnimJoint1007.setDEF("Joe_r_carpometacarpal_1")
HAnimJoint1007.setCenter(x3d.doubleToFloat([-0.2,0.85,0]))
HAnimJoint1007.setSkinCoordIndex([243,244])
HAnimJoint1007.setSkinCoordWeight(x3d.doubleToFloat([1,1]))
HAnimSegment1008 = x3d.HAnimSegment()
HAnimSegment1008.setName("r_metacarpal_1")
HAnimSegment1008.setDEF("Joe_r_metacarpal_1")
Shape1009 = x3d.Shape()
Appearance1010 = x3d.Appearance()
Appearance1010.setUSE("SegmentLine")

Shape1009.setAppearance(Appearance1010)
IndexedLineSet1011 = x3d.IndexedLineSet()
IndexedLineSet1011.setCoordIndex([0,1,-1])
Coordinate1012 = x3d.Coordinate()
Coordinate1012.setPoint(x3d.doubleToFloat([-0.2,0.85,0,-0.2,0.82,0.03]))

IndexedLineSet1011.setCoord(Coordinate1012)

Shape1009.setGeometry(IndexedLineSet1011)

HAnimSegment1008.addChild(Shape1009)
Transform1013 = x3d.Transform()
Transform1013.setTranslation(x3d.doubleToFloat([-0.2,0.85,0]))
Shape1014 = x3d.Shape()
Shape1014.setUSE("jointbox")

Transform1013.addChild(Shape1014)

HAnimSegment1008.addChild(Transform1013)

HAnimJoint1007.addChild(HAnimSegment1008)
HAnimJoint1015 = x3d.HAnimJoint()
HAnimJoint1015.setName("r_metacarpophalangeal_1")
HAnimJoint1015.setDEF("Joe_r_metacarpophalangeal_1")
HAnimJoint1015.setCenter(x3d.doubleToFloat([-0.2,0.82,0.03]))
HAnimJoint1015.setSkinCoordIndex([254,255,256,257,258,259])
HAnimJoint1015.setSkinCoordWeight(x3d.doubleToFloat([0.5,0.5,0.5,1,1,1]))
HAnimSegment1016 = x3d.HAnimSegment()
HAnimSegment1016.setName("r_carpal_proximal_phalanx_1")
HAnimSegment1016.setDEF("Joe_r_carpal_proximal_phalanx_1")
Shape1017 = x3d.Shape()
Appearance1018 = x3d.Appearance()
Appearance1018.setUSE("SegmentLine")

Shape1017.setAppearance(Appearance1018)
IndexedLineSet1019 = x3d.IndexedLineSet()
IndexedLineSet1019.setCoordIndex([0,1,-1])
Coordinate1020 = x3d.Coordinate()
Coordinate1020.setPoint(x3d.doubleToFloat([-0.2,0.82,0.03,-0.2,0.8,0.05]))

IndexedLineSet1019.setCoord(Coordinate1020)

Shape1017.setGeometry(IndexedLineSet1019)

HAnimSegment1016.addChild(Shape1017)
Transform1021 = x3d.Transform()
Transform1021.setTranslation(x3d.doubleToFloat([-0.2,0.82,0.03]))
Shape1022 = x3d.Shape()
Shape1022.setUSE("jointbox")

Transform1021.addChild(Shape1022)

HAnimSegment1016.addChild(Transform1021)

HAnimJoint1015.addChild(HAnimSegment1016)
HAnimJoint1023 = x3d.HAnimJoint()
HAnimJoint1023.setName("r_carpal_interphalangeal_1")
HAnimJoint1023.setDEF("Joe_r_carpal_interphalangeal_1")
HAnimJoint1023.setCenter(x3d.doubleToFloat([-0.2,0.8,0.05]))
HAnimJoint1023.setSkinCoordIndex([260,261,262,263,264,265,266,267,268])
HAnimJoint1023.setSkinCoordWeight(x3d.doubleToFloat([1,1,1,1,1,1,1,1,1]))
HAnimSegment1024 = x3d.HAnimSegment()
HAnimSegment1024.setName("r_carpal_distal_phalanx_1")
HAnimSegment1024.setDEF("Joe_r_carpal_distal_phalanx_1")
Shape1025 = x3d.Shape()
Appearance1026 = x3d.Appearance()
Appearance1026.setUSE("SegmentLine")

Shape1025.setAppearance(Appearance1026)
IndexedLineSet1027 = x3d.IndexedLineSet()
IndexedLineSet1027.setCoordIndex([0,1,-1])
Coordinate1028 = x3d.Coordinate()
Coordinate1028.setPoint(x3d.doubleToFloat([-0.2,0.8,0.05,-0.2,0.78,0.07]))

IndexedLineSet1027.setCoord(Coordinate1028)

Shape1025.setGeometry(IndexedLineSet1027)

HAnimSegment1024.addChild(Shape1025)
Transform1029 = x3d.Transform()
Transform1029.setDEF("Thumbnail")
Transform1029.setTranslation(x3d.doubleToFloat([-0.2,0.785,0.075]))
Shape1030 = x3d.Shape()
Shape1030.setUSE("skinsphere")

Transform1029.addChild(Shape1030)

HAnimSegment1024.addChild(Transform1029)
Transform1031 = x3d.Transform()
Transform1031.setTranslation(x3d.doubleToFloat([-0.2,0.8,0.05]))
Shape1032 = x3d.Shape()
Shape1032.setUSE("jointbox")

Transform1031.addChild(Shape1032)

HAnimSegment1024.addChild(Transform1031)
HAnimSite1033 = x3d.HAnimSite()
HAnimSite1033.setName("r_carpal_distal_phalanx_1_tip")
HAnimSite1033.setDEF("Joe_r_carpal_distal_phalanx_1_tip")
HAnimSite1033.setTranslation(x3d.doubleToFloat([-0.2,0.78,0.07]))
Shape1034 = x3d.Shape()
Shape1034.setUSE("sitebox")

HAnimSite1033.addChild(Shape1034)

HAnimSegment1024.addChild(HAnimSite1033)

HAnimJoint1023.addChild(HAnimSegment1024)

HAnimJoint1015.addChild(HAnimJoint1023)

HAnimJoint1007.addChild(HAnimJoint1015)

HAnimJoint997.addChild(HAnimJoint1007)
HAnimJoint1035 = x3d.HAnimJoint()
HAnimJoint1035.setName("r_carpometacarpal_2")
HAnimJoint1035.setDEF("Joe_r_carpometacarpal_2")
HAnimJoint1035.setCenter(x3d.doubleToFloat([-0.2,0.84,-0.015]))
HAnimJoint1035.setSkinCoordIndex([245,246])
HAnimJoint1035.setSkinCoordWeight(x3d.doubleToFloat([1,1]))
HAnimSegment1036 = x3d.HAnimSegment()
HAnimSegment1036.setName("r_metacarpal_2")
HAnimSegment1036.setDEF("Joe_r_metacarpal_2")
Shape1037 = x3d.Shape()
Appearance1038 = x3d.Appearance()
Appearance1038.setUSE("SegmentLine")

Shape1037.setAppearance(Appearance1038)
IndexedLineSet1039 = x3d.IndexedLineSet()
IndexedLineSet1039.setCoordIndex([0,1,-1])
Coordinate1040 = x3d.Coordinate()
Coordinate1040.setPoint(x3d.doubleToFloat([-0.2,0.84,-0.015,-0.2,0.793,-0.015]))

IndexedLineSet1039.setCoord(Coordinate1040)

Shape1037.setGeometry(IndexedLineSet1039)

HAnimSegment1036.addChild(Shape1037)
Transform1041 = x3d.Transform()
Transform1041.setTranslation(x3d.doubleToFloat([-0.2,0.84,-0.015]))
Shape1042 = x3d.Shape()
Shape1042.setUSE("jointbox")

Transform1041.addChild(Shape1042)

HAnimSegment1036.addChild(Transform1041)
HAnimSite1043 = x3d.HAnimSite()
HAnimSite1043.setName("r_metacarpal_phalanx_2_pt")
HAnimSite1043.setDEF("Joe_r_metacarpal_phalanx_2_pt")
HAnimSite1043.setTranslation(x3d.doubleToFloat([-0.2,0.793,-0.005]))
Shape1044 = x3d.Shape()
Shape1044.setUSE("sitebox")

HAnimSite1043.addChild(Shape1044)

HAnimSegment1036.addChild(HAnimSite1043)

HAnimJoint1035.addChild(HAnimSegment1036)
HAnimJoint1045 = x3d.HAnimJoint()
HAnimJoint1045.setName("r_metacarpophalangeal_2")
HAnimJoint1045.setDEF("Joe_r_metacarpophalangeal_2")
HAnimJoint1045.setCenter(x3d.doubleToFloat([-0.2,0.793,-0.015]))
HAnimJoint1045.setSkinCoordIndex([254,255,256,269,270,271,279])
HAnimJoint1045.setSkinCoordWeight(x3d.doubleToFloat([0.5,0.5,0.5,1,1,1,0.5]))
HAnimSegment1046 = x3d.HAnimSegment()
HAnimSegment1046.setName("r_carpal_proximal_phalanx_2")
HAnimSegment1046.setDEF("Joe_r_carpal_proximal_phalanx_2")
Shape1047 = x3d.Shape()
Appearance1048 = x3d.Appearance()
Appearance1048.setUSE("SegmentLine")

Shape1047.setAppearance(Appearance1048)
IndexedLineSet1049 = x3d.IndexedLineSet()
IndexedLineSet1049.setCoordIndex([0,1,-1])
Coordinate1050 = x3d.Coordinate()
Coordinate1050.setPoint(x3d.doubleToFloat([-0.2,0.793,-0.015,-0.2,0.745,-0.015]))

IndexedLineSet1049.setCoord(Coordinate1050)

Shape1047.setGeometry(IndexedLineSet1049)

HAnimSegment1046.addChild(Shape1047)
Transform1051 = x3d.Transform()
Transform1051.setTranslation(x3d.doubleToFloat([-0.2,0.793,-0.015]))
Shape1052 = x3d.Shape()
Shape1052.setUSE("jointbox")

Transform1051.addChild(Shape1052)

HAnimSegment1046.addChild(Transform1051)

HAnimJoint1045.addChild(HAnimSegment1046)
HAnimJoint1053 = x3d.HAnimJoint()
HAnimJoint1053.setName("r_carpal_proximal_interphalangeal_2")
HAnimJoint1053.setDEF("Joe_r_carpal_proximal_interphalangeal_2")
HAnimJoint1053.setCenter(x3d.doubleToFloat([-0.2,0.745,-0.015]))
HAnimJoint1053.setSkinCoordIndex([282,283,284,285])
HAnimJoint1053.setSkinCoordWeight(x3d.doubleToFloat([1,1,1,1]))
HAnimSegment1054 = x3d.HAnimSegment()
HAnimSegment1054.setName("r_carpal_middle_phalanx_2")
HAnimSegment1054.setDEF("Joe_r_carpal_middle_phalanx_2")
Shape1055 = x3d.Shape()
Appearance1056 = x3d.Appearance()
Appearance1056.setUSE("SegmentLine")

Shape1055.setAppearance(Appearance1056)
IndexedLineSet1057 = x3d.IndexedLineSet()
IndexedLineSet1057.setCoordIndex([0,1,-1])
Coordinate1058 = x3d.Coordinate()
Coordinate1058.setPoint(x3d.doubleToFloat([-0.2,0.745,-0.015,-0.2,0.72,-0.015]))

IndexedLineSet1057.setCoord(Coordinate1058)

Shape1055.setGeometry(IndexedLineSet1057)

HAnimSegment1054.addChild(Shape1055)
Transform1059 = x3d.Transform()
Transform1059.setTranslation(x3d.doubleToFloat([-0.2,0.745,-0.015]))
Shape1060 = x3d.Shape()
Shape1060.setUSE("jointbox")

Transform1059.addChild(Shape1060)

HAnimSegment1054.addChild(Transform1059)

HAnimJoint1053.addChild(HAnimSegment1054)
HAnimJoint1061 = x3d.HAnimJoint()
HAnimJoint1061.setName("r_carpal_distal_interphalangeal_2")
HAnimJoint1061.setDEF("Joe_r_carpal_distal_interphalangeal_2")
HAnimJoint1061.setCenter(x3d.doubleToFloat([-0.2,0.72,-0.015]))
HAnimJoint1061.setSkinCoordIndex([286,287,288,289,290,291,292,293,294])
HAnimJoint1061.setSkinCoordWeight(x3d.doubleToFloat([1,1,1,1,1,1,1,1,1]))
HAnimSegment1062 = x3d.HAnimSegment()
HAnimSegment1062.setName("r_carpal_distal_phalanx_2")
HAnimSegment1062.setDEF("Joe_r_carpal_distal_phalanx_2")
Shape1063 = x3d.Shape()
Appearance1064 = x3d.Appearance()
Appearance1064.setUSE("SegmentLine")

Shape1063.setAppearance(Appearance1064)
IndexedLineSet1065 = x3d.IndexedLineSet()
IndexedLineSet1065.setCoordIndex([0,1,-1])
Coordinate1066 = x3d.Coordinate()
Coordinate1066.setPoint(x3d.doubleToFloat([-0.2,0.72,-0.015,-0.2,0.695,-0.015]))

IndexedLineSet1065.setCoord(Coordinate1066)

Shape1063.setGeometry(IndexedLineSet1065)

HAnimSegment1062.addChild(Shape1063)
Transform1067 = x3d.Transform()
Transform1067.setTranslation(x3d.doubleToFloat([-0.2,0.72,-0.015]))
Shape1068 = x3d.Shape()
Shape1068.setUSE("jointbox")

Transform1067.addChild(Shape1068)

HAnimSegment1062.addChild(Transform1067)
HAnimSite1069 = x3d.HAnimSite()
HAnimSite1069.setName("r_carpal_distal_phalanx_2_tip")
HAnimSite1069.setDEF("Joe_r_carpal_distal_phalanx_2_tip")
HAnimSite1069.setTranslation(x3d.doubleToFloat([-0.2,0.695,-0.015]))
Shape1070 = x3d.Shape()
Shape1070.setUSE("sitebox")

HAnimSite1069.addChild(Shape1070)

HAnimSegment1062.addChild(HAnimSite1069)

HAnimJoint1061.addChild(HAnimSegment1062)

HAnimJoint1053.addChild(HAnimJoint1061)

HAnimJoint1045.addChild(HAnimJoint1053)

HAnimJoint1035.addChild(HAnimJoint1045)

HAnimJoint997.addChild(HAnimJoint1035)
HAnimJoint1071 = x3d.HAnimJoint()
HAnimJoint1071.setName("r_carpometacarpal_3")
HAnimJoint1071.setDEF("Joe_r_carpometacarpal_3")
HAnimJoint1071.setCenter(x3d.doubleToFloat([-0.2,0.835,-0.04]))
HAnimJoint1071.setSkinCoordIndex([247,248])
HAnimJoint1071.setSkinCoordWeight(x3d.doubleToFloat([1,1]))
HAnimSegment1072 = x3d.HAnimSegment()
HAnimSegment1072.setName("r_metacarpal_3")
HAnimSegment1072.setDEF("Joe_r_metacarpal_3")
Shape1073 = x3d.Shape()
Appearance1074 = x3d.Appearance()
Appearance1074.setUSE("SegmentLine")

Shape1073.setAppearance(Appearance1074)
IndexedLineSet1075 = x3d.IndexedLineSet()
IndexedLineSet1075.setCoordIndex([0,1,-1])
Coordinate1076 = x3d.Coordinate()
Coordinate1076.setPoint(x3d.doubleToFloat([-0.2,0.835,-0.04,-0.2,0.788,-0.04]))

IndexedLineSet1075.setCoord(Coordinate1076)

Shape1073.setGeometry(IndexedLineSet1075)

HAnimSegment1072.addChild(Shape1073)
Transform1077 = x3d.Transform()
Transform1077.setTranslation(x3d.doubleToFloat([-0.2,0.835,-0.04]))
Shape1078 = x3d.Shape()
Shape1078.setUSE("jointbox")

Transform1077.addChild(Shape1078)

HAnimSegment1072.addChild(Transform1077)

HAnimJoint1071.addChild(HAnimSegment1072)
HAnimJoint1079 = x3d.HAnimJoint()
HAnimJoint1079.setName("r_metacarpophalangeal_3")
HAnimJoint1079.setDEF("Joe_r_metacarpophalangeal_3")
HAnimJoint1079.setCenter(x3d.doubleToFloat([-0.2,0.788,-0.04]))
HAnimJoint1079.setSkinCoordIndex([272,273,279,280])
HAnimJoint1079.setSkinCoordWeight(x3d.doubleToFloat([1,1,0.5,0.5]))
HAnimSegment1080 = x3d.HAnimSegment()
HAnimSegment1080.setName("r_carpal_proximal_phalanx_3")
HAnimSegment1080.setDEF("Joe_r_carpal_proximal_phalanx_3")
Shape1081 = x3d.Shape()
Appearance1082 = x3d.Appearance()
Appearance1082.setUSE("SegmentLine")

Shape1081.setAppearance(Appearance1082)
IndexedLineSet1083 = x3d.IndexedLineSet()
IndexedLineSet1083.setCoordIndex([0,1,-1])
Coordinate1084 = x3d.Coordinate()
Coordinate1084.setPoint(x3d.doubleToFloat([-0.2,0.788,-0.04,-0.2,0.74,-0.04]))

IndexedLineSet1083.setCoord(Coordinate1084)

Shape1081.setGeometry(IndexedLineSet1083)

HAnimSegment1080.addChild(Shape1081)
Transform1085 = x3d.Transform()
Transform1085.setTranslation(x3d.doubleToFloat([-0.2,0.788,-0.04]))
Shape1086 = x3d.Shape()
Shape1086.setUSE("jointbox")

Transform1085.addChild(Shape1086)

HAnimSegment1080.addChild(Transform1085)

HAnimJoint1079.addChild(HAnimSegment1080)
HAnimJoint1087 = x3d.HAnimJoint()
HAnimJoint1087.setName("r_carpal_proximal_interphalangeal_3")
HAnimJoint1087.setDEF("Joe_r_carpal_proximal_interphalangeal_3")
HAnimJoint1087.setCenter(x3d.doubleToFloat([-0.2,0.74,-0.04]))
HAnimJoint1087.setSkinCoordIndex([295,296,297,298])
HAnimJoint1087.setSkinCoordWeight(x3d.doubleToFloat([1,1,1,1]))
HAnimSegment1088 = x3d.HAnimSegment()
HAnimSegment1088.setName("r_carpal_middle_phalanx_3")
HAnimSegment1088.setDEF("Joe_r_carpal_middle_phalanx_3")
Shape1089 = x3d.Shape()
Appearance1090 = x3d.Appearance()
Appearance1090.setUSE("SegmentLine")

Shape1089.setAppearance(Appearance1090)
IndexedLineSet1091 = x3d.IndexedLineSet()
IndexedLineSet1091.setCoordIndex([0,1,-1])
Coordinate1092 = x3d.Coordinate()
Coordinate1092.setPoint(x3d.doubleToFloat([-0.2,0.74,-0.04,-0.2,0.7142,-0.04]))

IndexedLineSet1091.setCoord(Coordinate1092)

Shape1089.setGeometry(IndexedLineSet1091)

HAnimSegment1088.addChild(Shape1089)
Transform1093 = x3d.Transform()
Transform1093.setTranslation(x3d.doubleToFloat([-0.2,0.74,-0.04]))
Shape1094 = x3d.Shape()
Shape1094.setUSE("jointbox")

Transform1093.addChild(Shape1094)

HAnimSegment1088.addChild(Transform1093)

HAnimJoint1087.addChild(HAnimSegment1088)
HAnimJoint1095 = x3d.HAnimJoint()
HAnimJoint1095.setName("r_carpal_distal_interphalangeal_3")
HAnimJoint1095.setDEF("Joe_r_carpal_distal_interphalangeal_3")
HAnimJoint1095.setCenter(x3d.doubleToFloat([-0.2,0.7142,-0.04]))
HAnimJoint1095.setSkinCoordIndex([299,300,301,302,303,304,305,306,307])
HAnimJoint1095.setSkinCoordWeight(x3d.doubleToFloat([1,1,1,1,1,1,1,1,1]))
HAnimSegment1096 = x3d.HAnimSegment()
HAnimSegment1096.setName("r_carpal_distal_phalanx_3")
HAnimSegment1096.setDEF("Joe_r_carpal_distal_phalanx_3")
Shape1097 = x3d.Shape()
Appearance1098 = x3d.Appearance()
Appearance1098.setUSE("SegmentLine")

Shape1097.setAppearance(Appearance1098)
IndexedLineSet1099 = x3d.IndexedLineSet()
IndexedLineSet1099.setCoordIndex([0,1,-1])
Coordinate1100 = x3d.Coordinate()
Coordinate1100.setPoint(x3d.doubleToFloat([-0.2,0.7142,-0.04,-0.2,0.6758,-0.04]))

IndexedLineSet1099.setCoord(Coordinate1100)

Shape1097.setGeometry(IndexedLineSet1099)

HAnimSegment1096.addChild(Shape1097)
Transform1101 = x3d.Transform()
Transform1101.setTranslation(x3d.doubleToFloat([-0.2,0.7142,-0.04]))
Shape1102 = x3d.Shape()
Shape1102.setUSE("jointbox")

Transform1101.addChild(Shape1102)

HAnimSegment1096.addChild(Transform1101)
HAnimSite1103 = x3d.HAnimSite()
HAnimSite1103.setName("r_dactylion_pt")
HAnimSite1103.setDEF("Joe_r_dactylion_pt")
HAnimSite1103.setTranslation(x3d.doubleToFloat([-0.2,0.68,-0.04]))
Shape1104 = x3d.Shape()
Shape1104.setUSE("sitebox")

HAnimSite1103.addChild(Shape1104)

HAnimSegment1096.addChild(HAnimSite1103)
HAnimSite1105 = x3d.HAnimSite()
HAnimSite1105.setName("r_carpal_distal_phalanx_3_tip")
HAnimSite1105.setDEF("Joe_r_carpal_distal_phalanx_3_tip")
HAnimSite1105.setTranslation(x3d.doubleToFloat([-0.2,0.68,-0.04]))
Shape1106 = x3d.Shape()
Shape1106.setUSE("sitebox")

HAnimSite1105.addChild(Shape1106)

HAnimSegment1096.addChild(HAnimSite1105)

HAnimJoint1095.addChild(HAnimSegment1096)

HAnimJoint1087.addChild(HAnimJoint1095)

HAnimJoint1079.addChild(HAnimJoint1087)

HAnimJoint1071.addChild(HAnimJoint1079)

HAnimJoint997.addChild(HAnimJoint1071)
HAnimJoint1107 = x3d.HAnimJoint()
HAnimJoint1107.setName("r_carpometacarpal_4")
HAnimJoint1107.setDEF("Joe_r_carpometacarpal_4")
HAnimJoint1107.setCenter(x3d.doubleToFloat([-0.2,0.835,-0.065]))
HAnimJoint1107.setSkinCoordIndex([249,250])
HAnimJoint1107.setSkinCoordWeight(x3d.doubleToFloat([1,1]))
HAnimSegment1108 = x3d.HAnimSegment()
HAnimSegment1108.setName("r_metacarpal_4")
HAnimSegment1108.setDEF("Joe_r_metacarpal_4")
Shape1109 = x3d.Shape()
Appearance1110 = x3d.Appearance()
Appearance1110.setUSE("SegmentLine")

Shape1109.setAppearance(Appearance1110)
IndexedLineSet1111 = x3d.IndexedLineSet()
IndexedLineSet1111.setCoordIndex([0,1,-1])
Coordinate1112 = x3d.Coordinate()
Coordinate1112.setPoint(x3d.doubleToFloat([-0.2,0.835,-0.065,-0.2,0.793,-0.065]))

IndexedLineSet1111.setCoord(Coordinate1112)

Shape1109.setGeometry(IndexedLineSet1111)

HAnimSegment1108.addChild(Shape1109)
Transform1113 = x3d.Transform()
Transform1113.setTranslation(x3d.doubleToFloat([-0.2,0.835,-0.065]))
Shape1114 = x3d.Shape()
Shape1114.setUSE("jointbox")

Transform1113.addChild(Shape1114)

HAnimSegment1108.addChild(Transform1113)

HAnimJoint1107.addChild(HAnimSegment1108)
HAnimJoint1115 = x3d.HAnimJoint()
HAnimJoint1115.setName("r_metacarpophalangeal_4")
HAnimJoint1115.setDEF("Joe_r_metacarpophalangeal_4")
HAnimJoint1115.setCenter(x3d.doubleToFloat([-0.2,0.793,-0.065]))
HAnimJoint1115.setSkinCoordIndex([274,275,280,281])
HAnimJoint1115.setSkinCoordWeight(x3d.doubleToFloat([1,1,0.5,0.5]))
HAnimSegment1116 = x3d.HAnimSegment()
HAnimSegment1116.setName("r_carpal_proximal_phalanx_4")
HAnimSegment1116.setDEF("Joe_r_carpal_proximal_phalanx_4")
Shape1117 = x3d.Shape()
Appearance1118 = x3d.Appearance()
Appearance1118.setUSE("SegmentLine")

Shape1117.setAppearance(Appearance1118)
IndexedLineSet1119 = x3d.IndexedLineSet()
IndexedLineSet1119.setCoordIndex([0,1,-1])
Coordinate1120 = x3d.Coordinate()
Coordinate1120.setPoint(x3d.doubleToFloat([-0.2,0.793,-0.065,-0.2,0.74,-0.065]))

IndexedLineSet1119.setCoord(Coordinate1120)

Shape1117.setGeometry(IndexedLineSet1119)

HAnimSegment1116.addChild(Shape1117)
Transform1121 = x3d.Transform()
Transform1121.setTranslation(x3d.doubleToFloat([-0.2,0.793,-0.065]))
Shape1122 = x3d.Shape()
Shape1122.setUSE("jointbox")

Transform1121.addChild(Shape1122)

HAnimSegment1116.addChild(Transform1121)

HAnimJoint1115.addChild(HAnimSegment1116)
HAnimJoint1123 = x3d.HAnimJoint()
HAnimJoint1123.setName("r_carpal_proximal_interphalangeal_4")
HAnimJoint1123.setDEF("Joe_r_carpal_proximal_interphalangeal_4")
HAnimJoint1123.setCenter(x3d.doubleToFloat([-0.2,0.74,-0.065]))
HAnimJoint1123.setSkinCoordIndex([308,309,310,311])
HAnimJoint1123.setSkinCoordWeight(x3d.doubleToFloat([1,1,1,1]))
HAnimSegment1124 = x3d.HAnimSegment()
HAnimSegment1124.setName("r_carpal_middle_phalanx_4")
HAnimSegment1124.setDEF("Joe_r_carpal_middle_phalanx_4")
Shape1125 = x3d.Shape()
Appearance1126 = x3d.Appearance()
Appearance1126.setUSE("SegmentLine")

Shape1125.setAppearance(Appearance1126)
IndexedLineSet1127 = x3d.IndexedLineSet()
IndexedLineSet1127.setCoordIndex([0,1,-1])
Coordinate1128 = x3d.Coordinate()
Coordinate1128.setPoint(x3d.doubleToFloat([-0.2,0.74,-0.065,-0.2,0.7177,-0.065]))

IndexedLineSet1127.setCoord(Coordinate1128)

Shape1125.setGeometry(IndexedLineSet1127)

HAnimSegment1124.addChild(Shape1125)
Transform1129 = x3d.Transform()
Transform1129.setTranslation(x3d.doubleToFloat([-0.2,0.74,-0.065]))
Shape1130 = x3d.Shape()
Shape1130.setUSE("jointbox")

Transform1129.addChild(Shape1130)

HAnimSegment1124.addChild(Transform1129)

HAnimJoint1123.addChild(HAnimSegment1124)
HAnimJoint1131 = x3d.HAnimJoint()
HAnimJoint1131.setName("r_carpal_distal_interphalangeal_4")
HAnimJoint1131.setDEF("Joe_r_carpal_distal_interphalangeal_4")
HAnimJoint1131.setCenter(x3d.doubleToFloat([-0.2,0.7177,-0.065]))
HAnimJoint1131.setSkinCoordIndex([312,313,314,315,316,317,318,319,320])
HAnimJoint1131.setSkinCoordWeight(x3d.doubleToFloat([1,1,1,1,1,1,1,1,1]))
HAnimSegment1132 = x3d.HAnimSegment()
HAnimSegment1132.setName("r_carpal_distal_phalanx_4")
HAnimSegment1132.setDEF("Joe_r_carpal_distal_phalanx_4")
Shape1133 = x3d.Shape()
Appearance1134 = x3d.Appearance()
Appearance1134.setUSE("SegmentLine")

Shape1133.setAppearance(Appearance1134)
IndexedLineSet1135 = x3d.IndexedLineSet()
IndexedLineSet1135.setCoordIndex([0,1,-1])
Coordinate1136 = x3d.Coordinate()
Coordinate1136.setPoint(x3d.doubleToFloat([-0.2,0.7177,-0.065,-0.2,0.695,-0.065]))

IndexedLineSet1135.setCoord(Coordinate1136)

Shape1133.setGeometry(IndexedLineSet1135)

HAnimSegment1132.addChild(Shape1133)
Transform1137 = x3d.Transform()
Transform1137.setTranslation(x3d.doubleToFloat([-0.2,0.7177,-0.065]))
Shape1138 = x3d.Shape()
Shape1138.setUSE("jointbox")

Transform1137.addChild(Shape1138)

HAnimSegment1132.addChild(Transform1137)
HAnimSite1139 = x3d.HAnimSite()
HAnimSite1139.setName("r_carpal_distal_phalanx_4_tip")
HAnimSite1139.setDEF("Joe_r_carpal_distal_phalanx_4_tip")
HAnimSite1139.setTranslation(x3d.doubleToFloat([-0.2,0.695,-0.065]))
Shape1140 = x3d.Shape()
Shape1140.setUSE("sitebox")

HAnimSite1139.addChild(Shape1140)

HAnimSegment1132.addChild(HAnimSite1139)

HAnimJoint1131.addChild(HAnimSegment1132)

HAnimJoint1123.addChild(HAnimJoint1131)

HAnimJoint1115.addChild(HAnimJoint1123)

HAnimJoint1107.addChild(HAnimJoint1115)

HAnimJoint997.addChild(HAnimJoint1107)
HAnimJoint1141 = x3d.HAnimJoint()
HAnimJoint1141.setName("r_carpometacarpal_5")
HAnimJoint1141.setDEF("Joe_r_carpometacarpal_5")
HAnimJoint1141.setCenter(x3d.doubleToFloat([-0.2,0.84,-0.085]))
HAnimJoint1141.setSkinCoordIndex([251,252,253,281])
HAnimJoint1141.setSkinCoordWeight(x3d.doubleToFloat([1,1,1,0.5]))
HAnimSegment1142 = x3d.HAnimSegment()
HAnimSegment1142.setName("r_metacarpal_5")
HAnimSegment1142.setDEF("Joe_r_metacarpal_5")
Shape1143 = x3d.Shape()
Appearance1144 = x3d.Appearance()
Appearance1144.setUSE("SegmentLine")

Shape1143.setAppearance(Appearance1144)
IndexedLineSet1145 = x3d.IndexedLineSet()
IndexedLineSet1145.setCoordIndex([0,1,-1])
Coordinate1146 = x3d.Coordinate()
Coordinate1146.setPoint(x3d.doubleToFloat([-0.2,0.84,-0.085,-0.2,0.79,-0.085]))

IndexedLineSet1145.setCoord(Coordinate1146)

Shape1143.setGeometry(IndexedLineSet1145)

HAnimSegment1142.addChild(Shape1143)
Transform1147 = x3d.Transform()
Transform1147.setTranslation(x3d.doubleToFloat([-0.2,0.84,-0.085]))
Shape1148 = x3d.Shape()
Shape1148.setUSE("jointbox")

Transform1147.addChild(Shape1148)

HAnimSegment1142.addChild(Transform1147)
HAnimSite1149 = x3d.HAnimSite()
HAnimSite1149.setName("r_metacarpal_phalanx_5_pt")
HAnimSite1149.setDEF("Joe_r_metacarpal_phalanx_5_pt")
HAnimSite1149.setTranslation(x3d.doubleToFloat([-0.2,0.79,-0.095]))
Shape1150 = x3d.Shape()
Shape1150.setUSE("sitebox")

HAnimSite1149.addChild(Shape1150)

HAnimSegment1142.addChild(HAnimSite1149)

HAnimJoint1141.addChild(HAnimSegment1142)
HAnimJoint1151 = x3d.HAnimJoint()
HAnimJoint1151.setName("r_metacarpophalangeal_5")
HAnimJoint1151.setDEF("Joe_r_metacarpophalangeal_5")
HAnimJoint1151.setCenter(x3d.doubleToFloat([-0.2,0.79,-0.085]))
HAnimJoint1151.setSkinCoordIndex([276,277,278])
HAnimJoint1151.setSkinCoordWeight(x3d.doubleToFloat([1,1,1]))
HAnimSegment1152 = x3d.HAnimSegment()
HAnimSegment1152.setName("r_carpal_proximal_phalanx_5")
HAnimSegment1152.setDEF("Joe_r_carpal_proximal_phalanx_5")
Shape1153 = x3d.Shape()
Appearance1154 = x3d.Appearance()
Appearance1154.setUSE("SegmentLine")

Shape1153.setAppearance(Appearance1154)
IndexedLineSet1155 = x3d.IndexedLineSet()
IndexedLineSet1155.setCoordIndex([0,1,-1])
Coordinate1156 = x3d.Coordinate()
Coordinate1156.setPoint(x3d.doubleToFloat([-0.2,0.79,-0.085,-0.2,0.755,-0.085]))

IndexedLineSet1155.setCoord(Coordinate1156)

Shape1153.setGeometry(IndexedLineSet1155)

HAnimSegment1152.addChild(Shape1153)
Transform1157 = x3d.Transform()
Transform1157.setTranslation(x3d.doubleToFloat([-0.2,0.79,-0.085]))
Shape1158 = x3d.Shape()
Shape1158.setUSE("jointbox")

Transform1157.addChild(Shape1158)

HAnimSegment1152.addChild(Transform1157)

HAnimJoint1151.addChild(HAnimSegment1152)
HAnimJoint1159 = x3d.HAnimJoint()
HAnimJoint1159.setName("r_carpal_proximal_interphalangeal_5")
HAnimJoint1159.setDEF("Joe_r_carpal_proximal_interphalangeal_5")
HAnimJoint1159.setCenter(x3d.doubleToFloat([-0.2,0.755,-0.085]))
HAnimJoint1159.setSkinCoordIndex([321,322,323,324])
HAnimJoint1159.setSkinCoordWeight(x3d.doubleToFloat([1,1,1,1]))
HAnimSegment1160 = x3d.HAnimSegment()
HAnimSegment1160.setName("r_carpal_middle_phalanx_5")
HAnimSegment1160.setDEF("Joe_r_carpal_middle_phalanx_5")
Shape1161 = x3d.Shape()
Appearance1162 = x3d.Appearance()
Appearance1162.setUSE("SegmentLine")

Shape1161.setAppearance(Appearance1162)
IndexedLineSet1163 = x3d.IndexedLineSet()
IndexedLineSet1163.setCoordIndex([0,1,-1])
Coordinate1164 = x3d.Coordinate()
Coordinate1164.setPoint(x3d.doubleToFloat([-0.2,0.755,-0.085,-0.2,0.735,-0.085]))

IndexedLineSet1163.setCoord(Coordinate1164)

Shape1161.setGeometry(IndexedLineSet1163)

HAnimSegment1160.addChild(Shape1161)
Transform1165 = x3d.Transform()
Transform1165.setTranslation(x3d.doubleToFloat([-0.2,0.755,-0.085]))
Shape1166 = x3d.Shape()
Shape1166.setUSE("jointbox")

Transform1165.addChild(Shape1166)

HAnimSegment1160.addChild(Transform1165)

HAnimJoint1159.addChild(HAnimSegment1160)
HAnimJoint1167 = x3d.HAnimJoint()
HAnimJoint1167.setName("r_carpal_distal_interphalangeal_5")
HAnimJoint1167.setDEF("Joe_r_carpal_distal_interphalangeal_5")
HAnimJoint1167.setCenter(x3d.doubleToFloat([-0.2,0.735,-0.09]))
HAnimJoint1167.setSkinCoordIndex([325,326,327,328,329,330,331,332,333])
HAnimJoint1167.setSkinCoordWeight(x3d.doubleToFloat([1,1,1,1,1,1,1,1,1]))
HAnimSegment1168 = x3d.HAnimSegment()
HAnimSegment1168.setName("r_carpal_distal_phalanx_5")
HAnimSegment1168.setDEF("Joe_r_carpal_distal_phalanx_5")
Shape1169 = x3d.Shape()
Appearance1170 = x3d.Appearance()
Appearance1170.setUSE("SegmentLine")

Shape1169.setAppearance(Appearance1170)
IndexedLineSet1171 = x3d.IndexedLineSet()
IndexedLineSet1171.setCoordIndex([0,1,-1])
Coordinate1172 = x3d.Coordinate()
Coordinate1172.setPoint(x3d.doubleToFloat([-0.2,0.735,-0.085,-0.2,0.72,-0.085]))

IndexedLineSet1171.setCoord(Coordinate1172)

Shape1169.setGeometry(IndexedLineSet1171)

HAnimSegment1168.addChild(Shape1169)
Transform1173 = x3d.Transform()
Transform1173.setTranslation(x3d.doubleToFloat([-0.2,0.735,-0.085]))
Shape1174 = x3d.Shape()
Shape1174.setUSE("jointbox")

Transform1173.addChild(Shape1174)

HAnimSegment1168.addChild(Transform1173)
HAnimSite1175 = x3d.HAnimSite()
HAnimSite1175.setName("r_carpal_distal_phalanx_5_tip")
HAnimSite1175.setDEF("Joe_r_carpal_distal_phalanx_5_tip")
HAnimSite1175.setTranslation(x3d.doubleToFloat([-0.2,0.72,-0.085]))
Shape1176 = x3d.Shape()
Shape1176.setUSE("sitebox")

HAnimSite1175.addChild(Shape1176)

HAnimSegment1168.addChild(HAnimSite1175)

HAnimJoint1167.addChild(HAnimSegment1168)

HAnimJoint1159.addChild(HAnimJoint1167)

HAnimJoint1151.addChild(HAnimJoint1159)

HAnimJoint1141.addChild(HAnimJoint1151)

HAnimJoint997.addChild(HAnimJoint1141)

HAnimJoint975.addChild(HAnimJoint997)

HAnimJoint945.addChild(HAnimJoint975)

HAnimJoint929.addChild(HAnimJoint945)

HAnimJoint919.addChild(HAnimJoint929)

HAnimJoint553.addChild(HAnimJoint919)

HAnimJoint545.addChild(HAnimJoint553)

HAnimJoint537.addChild(HAnimJoint545)

HAnimJoint527.addChild(HAnimJoint537)

HAnimJoint519.addChild(HAnimJoint527)

HAnimJoint511.addChild(HAnimJoint519)

HAnimJoint503.addChild(HAnimJoint511)

HAnimJoint495.addChild(HAnimJoint503)

HAnimJoint483.addChild(HAnimJoint495)

HAnimJoint473.addChild(HAnimJoint483)

HAnimJoint465.addChild(HAnimJoint473)

HAnimJoint457.addChild(HAnimJoint465)

HAnimJoint449.addChild(HAnimJoint457)

HAnimJoint423.addChild(HAnimJoint449)

HAnimJoint415.addChild(HAnimJoint423)

HAnimJoint407.addChild(HAnimJoint415)

HAnimJoint392.addChild(HAnimJoint407)

HAnimJoint78.addChild(HAnimJoint392)

HAnimHumanoid75.addSkeleton(HAnimJoint78)
Shape1177 = x3d.Shape()
Shape1177.setDEF("SkinShape")
Shape1177.setContainerFieldOverride("skin")
Appearance1178 = x3d.Appearance()
Appearance1178.setDEF("SkinAppearance")
Material1179 = x3d.Material()
Material1179.setDEF("SkinMaterial")
Material1179.setAmbientIntensity(0.6)
Material1179.setDiffuseColor(x3d.doubleToFloat([1,1,1]))
Material1179.setShininess(0.6)
Material1179.setTransparency(0.2)

Appearance1178.setMaterial(Material1179)
ImageTexture1180 = x3d.ImageTexture()
ImageTexture1180.setDEF("zBlueSpiralBkg2")
ImageTexture1180.setDescription("Blue Spiral Pattern")
ImageTexture1180.setUrl(["zBlueSpiralBkg2.gif","https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Skin/zBlueSpiralBkg2.gif"])

Appearance1178.setTexture(ImageTexture1180)

Shape1177.setAppearance(Appearance1178)
IndexedFaceSet1181 = x3d.IndexedFaceSet()
IndexedFaceSet1181.setCoordIndex([0,9,5,-1,0,7,9,-1,0,5,1,-1,1,5,2,-1,1,3,7,-1,2,4,3,-1,0,1,7,-1,1,2,3,-1,5,6,2,-1,7,3,8,-1,6,4,2,-1,3,4,8,-1,9,6,5,-1,9,7,8,-1,4,6,10,-1,4,10,12,-1,4,12,8,-1,10,11,12,-1,9,75,24,-1,9,24,74,-1,9,8,75,-1,9,74,6,-1,10,6,74,-1,12,75,8,-1,74,24,29,-1,24,77,29,-1,10,74,29,-1,77,32,29,-1,32,78,29,-1,78,30,29,-1,30,10,29,-1,41,24,75,-1,41,75,12,-1,41,12,42,-1,41,42,80,-1,41,80,44,-1,41,44,79,-1,41,79,24,-1,81,24,79,-1,81,77,24,-1,81,25,77,-1,81,79,25,-1,25,79,44,-1,25,32,77,-1,25,83,32,-1,25,26,83,-1,25,27,26,-1,25,84,27,-1,25,44,84,-1,11,10,30,-1,11,30,13,-1,11,13,15,-1,11,15,14,-1,11,14,42,-1,11,42,12,-1,15,13,16,-1,15,18,14,-1,15,16,76,-1,15,76,18,-1,76,16,17,-1,76,17,82,-1,76,82,19,-1,76,19,18,-1,22,18,19,-1,22,87,18,-1,22,27,84,-1,22,84,87,-1,87,84,85,-1,85,84,44,-1,85,42,14,-1,87,14,18,-1,87,85,14,-1,20,83,26,-1,20,17,16,-1,20,16,88,-1,20,88,83,-1,88,16,13,-1,88,13,86,-1,88,86,83,-1,86,13,30,-1,86,32,83,-1,23,89,22,-1,89,27,22,-1,89,91,27,-1,91,26,27,-1,91,20,26,-1,21,20,91,-1,21,17,20,-1,21,92,17,-1,82,17,92,-1,82,90,19,-1,23,22,19,-1,23,19,90,-1,82,92,101,-1,82,101,99,-1,82,99,93,-1,82,93,95,-1,82,95,97,-1,82,97,90,-1,23,90,97,-1,23,97,94,-1,23,94,89,-1,89,94,96,-1,89,96,95,-1,89,95,93,-1,89,93,91,-1,91,93,99,-1,91,99,100,-1,91,100,98,-1,21,91,98,-1,21,98,101,-1,21,101,92,-1,85,105,42,-1,85,103,105,-1,85,44,103,-1,103,44,104,-1,80,42,105,-1,80,105,102,-1,80,102,104,-1,80,104,44,-1,105,109,102,-1,102,109,47,-1,47,104,102,-1,104,47,45,-1,104,45,103,-1,103,45,46,-1,103,46,109,-1,103,109,105,-1,109,112,110,-1,109,110,47,-1,47,110,111,-1,47,111,45,-1,45,111,113,-1,113,46,45,-1,46,113,112,-1,112,109,46,-1,112,118,110,-1,110,118,115,-1,110,115,111,-1,111,115,117,-1,111,117,113,-1,113,117,116,-1,113,116,112,-1,112,116,118,-1,115,118,119,-1,119,118,122,-1,118,116,122,-1,122,116,120,-1,116,117,120,-1,120,117,121,-1,117,115,121,-1,115,119,121,-1,119,127,123,-1,119,122,127,-1,122,126,127,-1,122,128,126,-1,122,120,128,-1,120,124,128,-1,120,121,124,-1,121,125,124,-1,121,119,125,-1,119,123,125,-1,127,129,123,-1,127,126,129,-1,129,126,141,-1,141,126,143,-1,126,142,143,-1,126,128,142,-1,128,124,130,-1,142,128,130,-1,124,132,130,-1,124,134,132,-1,125,134,124,-1,125,136,134,-1,125,137,136,-1,125,135,137,-1,125,133,135,-1,125,123,133,-1,123,131,133,-1,123,129,131,-1,131,129,138,-1,129,141,138,-1,138,141,144,-1,141,143,144,-1,143,146,144,-1,142,146,143,-1,142,145,146,-1,139,145,142,-1,130,139,142,-1,139,130,132,-1,139,132,154,-1,132,157,154,-1,132,159,157,-1,132,134,159,-1,134,136,159,-1,136,161,159,-1,136,137,161,-1,137,162,161,-1,160,162,137,-1,135,160,137,-1,133,160,135,-1,133,158,160,-1,131,158,133,-1,156,158,131,-1,153,156,131,-1,131,138,153,-1,138,155,153,-1,140,155,138,-1,138,144,140,-1,144,147,140,-1,140,147,145,-1,140,145,139,-1,139,155,140,-1,154,155,139,-1,146,149,144,-1,146,151,149,-1,145,151,146,-1,150,151,145,-1,145,152,150,-1,147,152,145,-1,147,149,152,-1,147,144,149,-1,148,149,151,-1,148,152,149,-1,148,150,152,-1,148,151,150,-1,160,207,162,-1,160,205,207,-1,165,208,205,-1,160,165,205,-1,158,165,160,-1,161,162,207,-1,161,207,206,-1,165,206,208,-1,206,165,161,-1,161,165,159,-1,207,209,211,-1,205,209,207,-1,205,212,209,-1,205,208,212,-1,206,212,208,-1,206,210,212,-1,206,207,210,-1,207,211,210,-1,209,212,213,-1,212,216,213,-1,212,214,216,-1,210,214,212,-1,210,215,214,-1,210,211,215,-1,209,215,211,-1,209,213,215,-1,217,213,216,-1,217,215,213,-1,217,214,215,-1,217,216,214,-1,158,194,165,-1,192,194,158,-1,164,195,192,-1,158,164,192,-1,156,164,158,-1,159,194,165,-1,159,194,193,-1,159,193,195,-1,159,195,164,-1,159,164,157,-1,157,164,180,-1,192,198,194,-1,192,196,198,-1,192,195,196,-1,195,199,196,-1,196,199,200,-1,199,203,200,-1,193,199,195,-1,193,197,199,-1,193,198,197,-1,193,194,198,-1,199,201,203,-1,197,201,199,-1,197,198,201,-1,198,202,201,-1,196,202,198,-1,200,202,196,-1,204,202,200,-1,204,201,202,-1,204,203,201,-1,204,200,203,-1,156,181,164,-1,156,179,181,-1,156,182,179,-1,156,163,182,-1,163,180,182,-1,157,180,163,-1,164,181,180,-1,179,182,183,-1,182,186,183,-1,182,184,186,-1,180,184,182,-1,180,181,184,-1,181,185,184,-1,179,185,181,-1,183,185,179,-1,183,186,187,-1,186,190,187,-1,184,190,186,-1,184,188,190,-1,184,185,188,-1,185,189,188,-1,185,183,189,-1,183,187,189,-1,191,189,187,-1,191,188,189,-1,191,190,188,-1,191,187,190,-1,153,163,156,-1,153,168,163,-1,153,166,168,-1,153,169,166,-1,155,169,153,-1,155,167,169,-1,154,167,155,-1,154,163,167,-1,154,157,163,-1,163,168,167,-1,166,169,170,-1,169,173,170,-1,169,171,173,-1,169,167,171,-1,167,168,171,-1,168,172,171,-1,168,170,172,-1,170,168,166,-1,170,173,174,-1,173,177,174,-1,173,175,177,-1,173,171,175,-1,171,172,175,-1,172,176,175,-1,172,174,176,-1,170,174,172,-1,178,176,174,-1,178,175,176,-1,178,177,175,-1,178,174,177,-1,86,30,221,-1,86,221,219,-1,86,219,32,-1,32,219,220,-1,78,32,220,-1,78,220,218,-1,78,218,221,-1,78,221,30,-1,221,225,219,-1,219,225,35,-1,35,33,219,-1,33,220,219,-1,33,34,220,-1,220,34,218,-1,221,218,34,-1,34,225,221,-1,225,226,228,-1,225,228,35,-1,35,228,229,-1,35,229,33,-1,33,229,227,-1,33,227,34,-1,34,227,226,-1,34,226,225,-1,226,234,228,-1,228,234,232,-1,232,229,228,-1,232,233,229,-1,229,233,227,-1,227,233,231,-1,227,231,226,-1,226,231,234,-1,231,235,234,-1,235,238,234,-1,234,238,232,-1,238,236,232,-1,232,236,233,-1,236,237,233,-1,233,237,231,-1,231,237,235,-1,235,239,243,-1,235,243,238,-1,238,243,242,-1,238,242,244,-1,238,244,236,-1,236,244,240,-1,236,240,237,-1,237,240,241,-1,237,241,235,-1,235,241,239,-1,243,239,245,-1,243,245,242,-1,245,257,242,-1,257,259,242,-1,242,259,258,-1,242,258,244,-1,244,246,240,-1,258,246,244,-1,240,246,248,-1,240,248,250,-1,241,240,250,-1,241,250,252,-1,241,252,253,-1,241,253,251,-1,241,251,249,-1,241,249,239,-1,239,249,247,-1,239,247,245,-1,247,254,245,-1,245,254,257,-1,254,260,257,-1,257,260,259,-1,259,260,262,-1,258,259,262,-1,258,262,261,-1,255,258,261,-1,246,258,255,-1,255,248,246,-1,255,270,248,-1,248,270,273,-1,248,273,275,-1,248,275,250,-1,250,275,252,-1,252,275,277,-1,252,277,253,-1,253,277,278,-1,276,253,278,-1,251,253,276,-1,249,251,276,-1,249,276,274,-1,247,249,274,-1,272,247,274,-1,269,247,272,-1,247,269,254,-1,254,269,271,-1,256,254,271,-1,254,256,260,-1,260,256,263,-1,256,261,263,-1,256,255,261,-1,255,256,271,-1,270,255,271,-1,262,260,265,-1,262,265,267,-1,261,262,267,-1,266,261,267,-1,261,266,268,-1,263,261,268,-1,263,268,265,-1,263,265,260,-1,264,267,265,-1,264,265,268,-1,264,268,266,-1,264,266,267,-1,276,278,323,-1,276,323,321,-1,281,321,324,-1,276,321,281,-1,274,276,281,-1,277,323,278,-1,277,322,323,-1,281,324,322,-1,322,277,281,-1,277,275,281,-1,323,327,325,-1,321,323,325,-1,321,325,328,-1,321,328,324,-1,322,324,328,-1,322,328,326,-1,322,326,323,-1,323,326,327,-1,325,329,328,-1,328,329,332,-1,328,332,330,-1,326,328,330,-1,326,330,331,-1,326,331,327,-1,325,327,331,-1,325,331,329,-1,333,332,329,-1,333,329,331,-1,333,331,330,-1,333,330,332,-1,274,281,310,-1,308,274,310,-1,280,308,311,-1,274,308,280,-1,272,274,280,-1,275,310,281,-1,275,309,310,-1,275,311,309,-1,275,280,311,-1,275,273,280,-1,273,296,280,-1,308,310,314,-1,308,314,312,-1,308,312,311,-1,311,312,315,-1,312,316,315,-1,315,316,319,-1,309,311,315,-1,309,315,313,-1,309,313,314,-1,309,314,310,-1,315,319,317,-1,313,315,317,-1,313,317,314,-1,314,317,318,-1,312,314,318,-1,316,312,318,-1,320,316,318,-1,320,318,317,-1,320,317,319,-1,320,319,316,-1,272,280,297,-1,272,297,295,-1,272,295,298,-1,272,298,279,-1,279,298,296,-1,273,279,296,-1,280,296,297,-1,295,299,298,-1,298,299,302,-1,298,302,300,-1,296,298,300,-1,296,300,297,-1,297,300,301,-1,295,297,301,-1,299,295,301,-1,299,303,302,-1,302,303,306,-1,300,302,306,-1,300,306,304,-1,300,304,301,-1,301,304,305,-1,301,305,299,-1,299,305,303,-1,307,303,305,-1,307,305,304,-1,307,304,306,-1,307,306,303,-1,269,272,279,-1,269,279,284,-1,269,284,282,-1,269,282,285,-1,271,269,285,-1,271,285,283,-1,270,271,283,-1,270,283,279,-1,270,279,273,-1,279,283,284,-1,282,286,285,-1,285,286,289,-1,285,289,287,-1,285,287,283,-1,283,287,284,-1,284,287,288,-1,284,288,286,-1,286,282,284,-1,286,290,289,-1,289,290,293,-1,289,293,291,-1,289,291,287,-1,287,291,288,-1,288,291,292,-1,288,292,290,-1,286,288,290,-1,294,290,292,-1,294,292,291,-1,294,291,293,-1,294,293,290,-1,97,334,336,-1,97,336,94,-1,94,336,96,-1,336,335,96,-1,96,335,95,-1,95,335,337,-1,95,337,334,-1,95,334,97,-1,334,341,336,-1,336,341,338,-1,336,338,335,-1,335,338,340,-1,335,340,337,-1,337,340,339,-1,337,339,334,-1,334,339,341,-1,341,345,342,-1,341,342,338,-1,338,342,340,-1,340,342,344,-1,340,344,339,-1,339,344,343,-1,339,343,345,-1,339,345,341,-1,345,349,342,-1,342,349,351,-1,342,351,346,-1,342,346,344,-1,71,346,348,-1,71,344,346,-1,71,348,347,-1,71,347,344,-1,344,347,343,-1,343,347,352,-1,343,352,349,-1,343,349,345,-1,349,352,356,-1,349,356,353,-1,349,353,355,-1,349,355,351,-1,354,356,352,-1,354,352,350,-1,354,350,351,-1,354,351,355,-1,353,356,357,-1,353,357,358,-1,353,358,359,-1,353,359,360,-1,353,360,361,-1,353,361,355,-1,354,357,356,-1,350,346,351,-1,348,346,347,-1,350,347,346,-1,350,352,347,-1,354,358,357,-1,354,359,358,-1,354,360,359,-1,354,361,360,-1,354,355,361,-1,101,362,365,-1,101,365,99,-1,99,365,100,-1,100,365,363,-1,100,363,98,-1,98,363,364,-1,98,364,101,-1,101,364,362,-1,362,369,367,-1,362,367,365,-1,365,367,363,-1,363,367,368,-1,363,367,368,-1,363,368,366,-1,363,366,364,-1,364,366,362,-1,362,366,369,-1,369,373,371,-1,369,371,367,-1,367,371,368,-1,368,371,372,-1,368,372,366,-1,366,372,370,-1,366,370,369,-1,369,370,373,-1,373,377,380,-1,373,380,375,-1,373,375,371,-1,371,375,372,-1,372,375,376,-1,372,376,374,-1,372,374,370,-1,370,374,379,-1,373,370,379,-1,373,379,377,-1,377,379,383,-1,377,383,381,-1,377,381,384,-1,377,384,380,-1,381,383,389,-1,381,389,388,-1,381,388,387,-1,381,387,386,-1,381,386,385,-1,381,385,384,-1,376,375,374,-1,378,379,374,-1,378,374,375,-1,378,375,380,-1,382,386,387,-1,382,387,388,-1,382,388,389,-1,382,389,383,-1,382,383,379,-1,382,379,378,-1,382,378,380,-1,382,380,384,-1,382,384,385,-1,382,385,386,-1])
IndexedFaceSet1181.setCreaseAngle(3.1)
Color1182 = x3d.Color()
Color1182.setColor(x3d.doubleToFloat([1,0,0,0,1,1,0,1,0,1,1,0,1,1,0,1,0,0,0,1,0,0,0,1,0,1,1,0,1,1,1,1,0,1,1,0,1,1,0,1,1,0,0,1,0,0,0,1,0,1,0,1,0,0,0,1,0,1,0,1,1,0,0,1,0,0,1,1,0,1,1,0,1,1,1,1,0,0,0,1,0,0,1,0,1,1,0,0,1,0,1,1,0,1,1,1,0,1,0,1,1,0,0,1,0,1,1,0,0,1,0,1,0,0,0,1,0,1,1,0,0,1,0,1,1,0,0,0,1,0,0,1,0,1,0,1,1,0,0,0,1,1,1,0,0,1,0,0,0,1,1,1,0,0,1,0,1,1,0,0,1,0,0,0,1,1,1,0,0,1,0,0,1,0,1,1,0,0,0,1,0,1,0,1,1,0,0,0,1,0,1,0,1,1,0,0,0,1,0,1,0,1,1,0,0,0,1,0,0,1,0,0,1,0,1,0,0,0,1,0,1,0,1,1,0,0,0,1,0,1,0,1,1,0,0,0,1,0,0,1,0,1,0,1,1,0,0,1,0,1,1,0,1,1,0,0,1,0,1,1,0,0,0,1,1,1,0,0,0,1,0,0,1,0,0,1,1,1,0,0,1,0,0,0,1,1,1,0,1,1,0,0,0,1,0,1,0,0,0,1,1,1,0,0,1,0,1,1,0,0,1,0,1,1,0,0,0,1,1,1,0,0,1,0,1,1,0,0,1,0,1,1,0,0,0,1,0,1,0,1,1,0,0,1,0,1,1,0,1,1,0,0,1,0,1,1,0,1,0,1,1,1,0,0,1,0,0,1,0,1,1,0,0,0,1,1,1,0,0,1,0,0,0,1,0,1,0,1,1,0,0,0,1,0,1,0,1,1,0,0,1,0,1,1,0,0,0,1,1,0,1,1,0,1,1,0,1,1,0,1,0,1,0,1,0,0,0,1,0,1,0,0,0,1,0,1,0,0,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,1,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,1,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,1,0,0,1,0,1,0,1,0,0,0,0,1,1,0,0,0,1,0,0,0,1,0,1,1,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,1,1,0,1,0,0,0,0,1,0,1,1,1,0,0,1,0,1,0,1,0,1,0,0,1,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,1,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,0,1,0,0,0,1,0,1,0,1,1,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,1,1,0,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,1,0,1,0,1,0,1,0,0,0,1,0,1,0,1,0,1,0,1,0,0,0,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,1,1,0,0,1,0,1,1,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,0,1,0,1,1,0,0,1,0,1,1,0,1,0,1,1,1,0,0,1,0,1,1,0,0,0,1,0,1,0,1,1,0,0,0,1,1,1,0,0,1,0,1,1,0,0,1,0,0,1,0,0,0,1,1,1,0,0,1,0,1,1,0,0,1,0,0,0,1,1,1,0,1,0,1,1,0,1,1,0,1,1,0,1,0,1,0,1,0,0,0,1,0,1,0,0,0,1,0,1,0,0,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,1,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,1,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,1,0,0,1,0,1,0,1,0,0,0,0,1,1,0,0,0,1,0,0,0,1,0,1,1,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,1,1,0,1,0,0,0,0,1,0,1,1,1,0,0,1,0,1,0,1,0,1,0,0,1,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,1,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,0,1,0,0,0,1,0,1,0,1,1,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,1,1,0,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,1,0,1,0,1,0,1,0,0,0,1,0,1,0,1,0,1,0,1,0,0,0,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,1,1,0,0,1,0,1,1,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,1,0,1,0,1,1,1,0,0,0,1,0,1,0,0,0,1,1,1,0,0,1,0,1,1,0,0,1,0,1,1,0,0,1,0,1,1,0,0,1,0,0,1,0,1,1,0,1,0,1,0,1,0,1,1,0,0,1,0,1,1,0,0,0,1,1,1,0,0,1,0,1,1,0,0,0,1,0,1,0,1,1,0,0,0,1,1,1,0,0,1,0,0,0,1,1,0,1,0,1,0,1,1,0,0,1,0,1,1,0,0,0,1,0,1,0,1,1,0,0,1,0,1,1,0,1,0,1,0,1,0,0,1,0,1,1,0,0,1,0,1,1,0,0,1,0,1,1,0,1,1,0,0,1,0,1,1,0,0,1,0,1,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,1,1,0,0,0,1,0,1,0,0,0,1,1,1,0,0,1,0,1,1,0,0,1,0,1,1,0,0,1,0,1,1,0,0,1,0,0,1,0,1,1,0,1,0,1,0,1,0,1,1,0,0,1,0,1,1,0,0,0,1,1,1,0,0,1,0,1,1,0,0,0,1,0,1,0,1,1,0,0,0,1,1,1,0,0,1,0,0,0,1,1,0,1,0,1,0,1,1,0,0,1,0,1,1,0,0,0,1,0,1,0,1,1,0,0,1,0,1,1,0,1,0,1,0,1,0,0,1,0,1,1,0,0,1,0,1,1,0,0,1,0,1,1,0,1,1,0,0,1,0,1,1,0,0,1,0,1,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,1,1,1]))

IndexedFaceSet1181.setColor(Color1182)
Coordinate1183 = x3d.Coordinate()
Coordinate1183.setDEF("TheSkinCoord")
Coordinate1183.setPoint(x3d.doubleToFloat([0,1.77,0,0,1.665,0.09,-0.033,1.62,0.087,0.033,1.62,0.087,0,1.55,0.097,-0.077,1.64,-0.01,-0.0527,1.58,0.015,0.077,1.64,-0.01,0.0527,1.58,0.015,0,1.625,-0.0925,-0.03,1.46,0.035,0,1.44,0.03,0.03,1.46,0.035,-0.1135,1.318,0.095,0.1135,1.318,0.095,0,1.25,0.113,-0.087,1.19,0.09,-0.0935,1.03,0.075,0.087,1.19,0.09,0.0935,1.03,0.075,-0.1425,1.065,0.0033,-0.15,0.9,-0.01,0.1425,1.065,0.0033,0.15,0.9,-0.01,0,1.53,-0.084,0.0049,1.1908,-0.1113,-0.0773,1.019,-0.12,0.0773,1.019,-0.12,0.005,1.0915,-0.1091,-0.178,1.4825,-0.0625,-0.17,1.38,0.007,-0.1884,0.8676,-0.036,-0.16,1.38,-0.127,-0.2,1.1388,-0.08,-0.244,1.1388,-0.04,-0.165,1.1388,-0.04,-0.23,1.133,-0.055,-0.1977,0.8169,-0.0177,-0.1941,0.6772,-0.0423,-0.2117,0.8562,-0.0584,-0.1929,0.789,-0.1064,0.175,1.4825,-0.06,0.17,1.38,0.007,0.1901,0.8645,-0.0415,0.16,1.38,-0.125,0.2,1.1388,-0.08,0.165,1.1388,-0.04,0.244,1.1388,-0.04,0.23,1.133,-0.055,0.2009,0.8139,-0.0237,0.2056,0.6743,-0.0482,0.2142,0.8529,-0.0648,0.1929,0.786,-0.1122,-0.1,0.4913,-0.03,-0.17,0.466,0,-0.05,0.466,0,-0.165,0.01,0.12,-0.15,0.07,0,-0.085,0.086,0.0125,-0.09,0.056,0.0125,-0.115,0.02,0.122,-0.115,0.04,-0.055,-0.11,0.011,0.19,0.0993,0.4881,-0.0309,0.17,0.466,0,0.05,0.4867,0,0.165,0.01,0.12,0.15,0.07,0,0.085,0.086,0.0125,0.09,0.056,0.0125,0.115,0.02,0.122,0.115,0.04,-0.055,0.11,0.011,0.19,0,0.875,0,-0.0646,1.5149,-0.038,0.0646,1.5149,-0.038,0,1.0723,0.09,-0.11,1.427,-0.1375,-0.235,1.42,-0.0625,0.11,1.427,-0.1375,0.235,1.42,-0.0625,0,1.41,-0.145,0,0.925,0.08,-0.087,1.19,-0.09,0.087,1.19,-0.09,0.172,1.32,-0.03,-0.172,1.32,-0.03,0.15,1.23,-0.015,-0.15,1.23,-0.015,0.079,0.92,-0.14,0.1,0.9,0.077,-0.079,0.92,-0.14,-0.1,0.9,0.075,0,0.87,0,0.171,0.65,0,0.02,0.65,0,0.1,0.65,-0.08,0.1,0.65,0.07,-0.171,0.65,0,-0.02,0.65,0,-0.1,0.65,-0.08,-0.1,0.65,0.07,0.25,1.27,-0.04,0.17,1.27,-0.04,0.2,1.27,-0.09,0.2,1.27,0.02,0.244,1.1388,-0.04,0.165,1.1388,-0.04,0.2,1.1388,-0.08,0.2,1.1388,-0.013,0.225,1,-0.01,0.225,1,-0.07,0.185,1,-0.01,0.185,1,-0.07,0.2,1.1388,-0.04,0.225,0.92,-0.04,0.175,0.92,-0.04,0.2,0.92,-0.065,0.2,0.92,-0.015,0.225,0.89,-0.04,0.175,0.89,-0.04,0.2,0.89,-0.065,0.2,0.89,-0.015,0.218,0.86,-0.04,0.184,0.86,-0.04,0.2,0.87,-0.07,0.2,0.87,0,0.21,0.85,0,0.1854,0.85,0,0.212,0.84,-0.015,0.183,0.84,-0.015,0.213,0.835,-0.04,0.19,0.835,-0.04,0.211,0.835,-0.065,0.192,0.835,-0.065,0.208,0.84,-0.085,0.19,0.84,-0.085,0.2,0.84,-0.095,0.215,0.82,0,0.193,0.815,0.005,0.198,0.8,0.012,0.21,0.82,0.03,0.19,0.82,0.03,0.2,0.835,0.039,0.212,0.8,0.05,0.188,0.8,0.05,0.2,0.807,0.057,0.2,0.793,0.035,0.2,0.774,0.076,0.212,0.78,0.07,0.188,0.78,0.07,0.2,0.785,0.075,0.2,0.77,0.062,0.215,0.793,-0.015,0.187,0.793,-0.015,0.2,0.793,-0.005,0.215,0.788,-0.04,0.187,0.788,-0.04,0.215,0.793,-0.065,0.187,0.793,-0.065,0.21,0.79,-0.085,0.19,0.79,-0.085,0.2,0.79,-0.095,0.19,0.77,-0.0275,0.19,0.77,-0.0525,0.19,0.78,-0.0775,0.212,0.745,-0.015,0.188,0.745,-0.02,0.2,0.745,-0.0255,0.2,0.745,-0.0045,0.211,0.72,-0.015,0.189,0.72,-0.015,0.2,0.72,-0.0252,0.2,0.72,-0.0048,0.21,0.695,-0.015,0.19,0.695,-0.015,0.2,0.695,-0.025,0.2,0.695,-0.005,0.2,0.685,-0.015,0.215,0.74,-0.04,0.185,0.74,-0.04,0.2,0.74,-0.055,0.2,0.74,-0.025,0.21,0.7142,-0.04,0.19,0.7142,-0.04,0.2,0.7142,-0.053,0.2,0.7142,-0.027,0.21,0.68,-0.04,0.19,0.68,-0.04,0.2,0.68,-0.05,0.2,0.68,-0.03,0.2,0.67,-0.04,0.212,0.74,-0.065,0.188,0.74,-0.065,0.2,0.74,-0.0756,0.2,0.74,-0.0542,0.21,0.7177,-0.065,0.19,0.7177,-0.065,0.2,0.7177,-0.0751,0.2,0.7177,-0.0549,0.21,0.695,-0.065,0.19,0.695,-0.065,0.2,0.695,-0.075,0.2,0.695,-0.055,0.2,0.685,-0.065,0.211,0.755,-0.085,0.189,0.755,-0.085,0.2,0.755,-0.0952,0.2,0.755,-0.0748,0.21,0.735,-0.085,0.19,0.735,-0.085,0.2,0.735,-0.0951,0.2,0.735,-0.0749,0.21,0.72,-0.085,0.19,0.72,-0.085,0.2,0.72,-0.095,0.2,0.72,-0.075,0.2,0.71,-0.085,-0.23,1.23,-0.04,-0.16,1.23,-0.04,-0.2,1.235,-0.105,-0.2,1.235,0.02,-0.244,1.1388,-0.04,-0.165,1.1388,-0.04,-0.2,1.1388,-0.08,-0.2,1.1388,0.013,-0.225,1,-0.01,-0.225,1,-0.07,-0.185,1,-0.01,-0.185,1,-0.07,-0.2,1.1388,-0.04,-0.225,0.92,-0.04,-0.175,0.92,-0.04,-0.2,0.92,-0.065,-0.2,0.92,-0.015,-0.225,0.89,-0.04,-0.175,0.89,-0.04,-0.2,0.89,-0.065,-0.2,0.89,-0.015,-0.218,0.86,-0.04,-0.184,0.86,-0.04,-0.2,0.87,-0.07,-0.2,0.87,0,-0.21,0.85,0,-0.1854,0.85,0,-0.212,0.84,-0.015,-0.183,0.84,-0.015,-0.213,0.835,-0.04,-0.19,0.835,-0.04,-0.211,0.835,-0.065,-0.192,0.835,-0.065,-0.208,0.84,-0.085,-0.19,0.84,-0.085,-0.2,0.84,-0.095,-0.215,0.82,0,-0.193,0.815,0.005,-0.198,0.8,0.012,-0.21,0.82,0.03,-0.19,0.82,0.03,-0.2,0.835,0.039,-0.212,0.8,0.05,-0.188,0.8,0.05,-0.2,0.807,0.057,-0.2,0.793,0.035,-0.2,0.774,0.076,-0.212,0.78,0.07,-0.188,0.78,0.07,-0.2,0.785,0.075,-0.2,0.77,0.062,-0.215,0.793,-0.015,-0.187,0.793,-0.015,-0.2,0.793,-0.005,-0.215,0.788,-0.04,-0.187,0.788,-0.04,-0.215,0.793,-0.065,-0.187,0.793,-0.065,-0.21,0.79,-0.085,-0.19,0.79,-0.085,-0.2,0.79,-0.095,-0.19,0.77,-0.0275,-0.19,0.77,-0.0525,-0.19,0.78,-0.0775,-0.212,0.745,-0.015,-0.188,0.745,-0.02,-0.2,0.745,-0.0255,-0.2,0.745,-0.0045,-0.211,0.72,-0.015,-0.189,0.72,-0.015,-0.2,0.72,-0.0252,-0.2,0.72,-0.0048,-0.21,0.695,-0.015,-0.19,0.695,-0.015,-0.2,0.695,-0.025,-0.2,0.695,-0.005,-0.2,0.685,-0.015,-0.215,0.74,-0.04,-0.185,0.74,-0.04,-0.2,0.74,-0.055,-0.2,0.74,-0.025,-0.21,0.7142,-0.04,-0.19,0.7142,-0.04,-0.2,0.7142,-0.053,-0.2,0.7142,-0.027,-0.21,0.68,-0.04,-0.19,0.68,-0.04,-0.2,0.68,-0.05,-0.2,0.68,-0.03,-0.2,0.67,-0.04,-0.212,0.74,-0.065,-0.188,0.74,-0.065,-0.2,0.74,-0.0756,-0.2,0.74,-0.0542,-0.21,0.7177,-0.065,-0.19,0.7177,-0.065,-0.2,0.7177,-0.0751,-0.2,0.7177,-0.0549,-0.21,0.695,-0.065,-0.19,0.695,-0.065,-0.2,0.695,-0.075,-0.2,0.695,-0.055,-0.2,0.685,-0.065,-0.211,0.755,-0.085,-0.189,0.755,-0.085,-0.2,0.755,-0.0952,-0.2,0.755,-0.0748,-0.21,0.735,-0.085,-0.19,0.735,-0.085,-0.2,0.735,-0.0951,-0.2,0.735,-0.0749,-0.21,0.72,-0.085,-0.19,0.72,-0.085,-0.2,0.72,-0.095,-0.2,0.72,-0.075,-0.2,0.71,-0.085,0.115,0.466,0.06,0.115,0.466,-0.055,0.15,0.466,0,0.05,0.466,0,0.17,0.3,0,0.06,0.3,0,0.1,0.3,-0.05,0.1,0.3,0.05,0.15,0.07,0,0.085,0.086,0.0125,0.115,0.069,-0.045,0.117,0.0975,0.0615,0.1375,0.006,-0.03,0.095,0.006,-0.03,0.115,0.015,-0.045,0.115,0.06,0.1,0.115,0,0.07,0.165,0,0.07,0.095,0,0.07,0.115,0.04,0.13,0.125,0,0.12,0.165,0,0.12,0.087,0,0.122,0.09,0.012,0.188,0.11,0.011,0.19,0.128,0.011,0.185,0.142,0.011,0.178,0.154,0.01,0.168,-0.115,0.466,0.06,-0.115,0.466,-0.055,-0.17,0.466,0,-0.05,0.466,0,-0.17,0.3,0,-0.06,0.3,0,-0.1,0.3,-0.05,-0.1,0.3,0.05,-0.15,0.07,0,-0.085,0.086,0.0125,-0.115,0.069,-0.045,-0.117,0.0975,0.0615,-0.1375,0.006,-0.03,-0.095,0.006,-0.03,-0.095,0.006,-0.03,-0.115,0.06,0.1,-0.115,0,0.07,-0.165,0,0.07,-0.095,0,0.07,-0.115,0.04,0.13,-0.125,0,0.12,-0.165,0,0.12,-0.087,0,0.122,-0.09,0.012,0.188,-0.11,0.011,0.19,-0.128,0.011,0.185,-0.142,0.011,0.178,-0.154,0.01,0.168]))

IndexedFaceSet1181.setCoord(Coordinate1183)

Shape1177.setGeometry(IndexedFaceSet1181)

HAnimHumanoid75.addSkin(Shape1177)
Coordinate1184 = x3d.Coordinate()
Coordinate1184.setContainerFieldOverride("skinCoord")
Coordinate1184.setUSE("TheSkinCoord")

HAnimHumanoid75.setSkinCoord(Coordinate1184)
HAnimJoint1185 = x3d.HAnimJoint()
HAnimJoint1185.setContainerFieldOverride("joints")
HAnimJoint1185.setUSE("Joe_humanoid_root")

HAnimHumanoid75.addJoints(HAnimJoint1185)
HAnimJoint1186 = x3d.HAnimJoint()
HAnimJoint1186.setContainerFieldOverride("joints")
HAnimJoint1186.setUSE("Joe_sacroiliac")

HAnimHumanoid75.addJoints(HAnimJoint1186)
HAnimJoint1187 = x3d.HAnimJoint()
HAnimJoint1187.setContainerFieldOverride("joints")
HAnimJoint1187.setUSE("Joe_vl5")

HAnimHumanoid75.addJoints(HAnimJoint1187)
HAnimJoint1188 = x3d.HAnimJoint()
HAnimJoint1188.setContainerFieldOverride("joints")
HAnimJoint1188.setUSE("Joe_vl4")

HAnimHumanoid75.addJoints(HAnimJoint1188)
HAnimJoint1189 = x3d.HAnimJoint()
HAnimJoint1189.setContainerFieldOverride("joints")
HAnimJoint1189.setUSE("Joe_vl3")

HAnimHumanoid75.addJoints(HAnimJoint1189)
HAnimJoint1190 = x3d.HAnimJoint()
HAnimJoint1190.setContainerFieldOverride("joints")
HAnimJoint1190.setUSE("Joe_vl2")

HAnimHumanoid75.addJoints(HAnimJoint1190)
HAnimJoint1191 = x3d.HAnimJoint()
HAnimJoint1191.setContainerFieldOverride("joints")
HAnimJoint1191.setUSE("Joe_vl1")

HAnimHumanoid75.addJoints(HAnimJoint1191)
HAnimJoint1192 = x3d.HAnimJoint()
HAnimJoint1192.setContainerFieldOverride("joints")
HAnimJoint1192.setUSE("Joe_vt12")

HAnimHumanoid75.addJoints(HAnimJoint1192)
HAnimJoint1193 = x3d.HAnimJoint()
HAnimJoint1193.setContainerFieldOverride("joints")
HAnimJoint1193.setUSE("Joe_vt11")

HAnimHumanoid75.addJoints(HAnimJoint1193)
HAnimJoint1194 = x3d.HAnimJoint()
HAnimJoint1194.setContainerFieldOverride("joints")
HAnimJoint1194.setUSE("Joe_vt10")

HAnimHumanoid75.addJoints(HAnimJoint1194)
HAnimJoint1195 = x3d.HAnimJoint()
HAnimJoint1195.setContainerFieldOverride("joints")
HAnimJoint1195.setUSE("Joe_vt9")

HAnimHumanoid75.addJoints(HAnimJoint1195)
HAnimJoint1196 = x3d.HAnimJoint()
HAnimJoint1196.setContainerFieldOverride("joints")
HAnimJoint1196.setUSE("Joe_vt8")

HAnimHumanoid75.addJoints(HAnimJoint1196)
HAnimJoint1197 = x3d.HAnimJoint()
HAnimJoint1197.setContainerFieldOverride("joints")
HAnimJoint1197.setUSE("Joe_vt7")

HAnimHumanoid75.addJoints(HAnimJoint1197)
HAnimJoint1198 = x3d.HAnimJoint()
HAnimJoint1198.setContainerFieldOverride("joints")
HAnimJoint1198.setUSE("Joe_vt6")

HAnimHumanoid75.addJoints(HAnimJoint1198)
HAnimJoint1199 = x3d.HAnimJoint()
HAnimJoint1199.setContainerFieldOverride("joints")
HAnimJoint1199.setUSE("Joe_vt5")

HAnimHumanoid75.addJoints(HAnimJoint1199)
HAnimJoint1200 = x3d.HAnimJoint()
HAnimJoint1200.setContainerFieldOverride("joints")
HAnimJoint1200.setUSE("Joe_vt4")

HAnimHumanoid75.addJoints(HAnimJoint1200)
HAnimJoint1201 = x3d.HAnimJoint()
HAnimJoint1201.setContainerFieldOverride("joints")
HAnimJoint1201.setUSE("Joe_vt3")

HAnimHumanoid75.addJoints(HAnimJoint1201)
HAnimJoint1202 = x3d.HAnimJoint()
HAnimJoint1202.setContainerFieldOverride("joints")
HAnimJoint1202.setUSE("Joe_vt2")

HAnimHumanoid75.addJoints(HAnimJoint1202)
HAnimJoint1203 = x3d.HAnimJoint()
HAnimJoint1203.setContainerFieldOverride("joints")
HAnimJoint1203.setUSE("Joe_vt1")

HAnimHumanoid75.addJoints(HAnimJoint1203)
HAnimJoint1204 = x3d.HAnimJoint()
HAnimJoint1204.setContainerFieldOverride("joints")
HAnimJoint1204.setUSE("Joe_vc7")

HAnimHumanoid75.addJoints(HAnimJoint1204)
HAnimJoint1205 = x3d.HAnimJoint()
HAnimJoint1205.setContainerFieldOverride("joints")
HAnimJoint1205.setUSE("Joe_vc6")

HAnimHumanoid75.addJoints(HAnimJoint1205)
HAnimJoint1206 = x3d.HAnimJoint()
HAnimJoint1206.setContainerFieldOverride("joints")
HAnimJoint1206.setUSE("Joe_vc5")

HAnimHumanoid75.addJoints(HAnimJoint1206)
HAnimJoint1207 = x3d.HAnimJoint()
HAnimJoint1207.setContainerFieldOverride("joints")
HAnimJoint1207.setUSE("Joe_vc4")

HAnimHumanoid75.addJoints(HAnimJoint1207)
HAnimJoint1208 = x3d.HAnimJoint()
HAnimJoint1208.setContainerFieldOverride("joints")
HAnimJoint1208.setUSE("Joe_vc3")

HAnimHumanoid75.addJoints(HAnimJoint1208)
HAnimJoint1209 = x3d.HAnimJoint()
HAnimJoint1209.setContainerFieldOverride("joints")
HAnimJoint1209.setUSE("Joe_vc2")

HAnimHumanoid75.addJoints(HAnimJoint1209)
HAnimJoint1210 = x3d.HAnimJoint()
HAnimJoint1210.setContainerFieldOverride("joints")
HAnimJoint1210.setUSE("Joe_vc1")

HAnimHumanoid75.addJoints(HAnimJoint1210)
HAnimJoint1211 = x3d.HAnimJoint()
HAnimJoint1211.setContainerFieldOverride("joints")
HAnimJoint1211.setUSE("Joe_skullbase")

HAnimHumanoid75.addJoints(HAnimJoint1211)
HAnimJoint1212 = x3d.HAnimJoint()
HAnimJoint1212.setContainerFieldOverride("joints")
HAnimJoint1212.setUSE("Joe_l_acromioclavicular")

HAnimHumanoid75.addJoints(HAnimJoint1212)
HAnimJoint1213 = x3d.HAnimJoint()
HAnimJoint1213.setContainerFieldOverride("joints")
HAnimJoint1213.setUSE("Joe_r_acromioclavicular")

HAnimHumanoid75.addJoints(HAnimJoint1213)
HAnimJoint1214 = x3d.HAnimJoint()
HAnimJoint1214.setContainerFieldOverride("joints")
HAnimJoint1214.setUSE("Joe_l_carpal_distal_interphalangeal_2")

HAnimHumanoid75.addJoints(HAnimJoint1214)
HAnimJoint1215 = x3d.HAnimJoint()
HAnimJoint1215.setContainerFieldOverride("joints")
HAnimJoint1215.setUSE("Joe_r_carpal_distal_interphalangeal_2")

HAnimHumanoid75.addJoints(HAnimJoint1215)
HAnimJoint1216 = x3d.HAnimJoint()
HAnimJoint1216.setContainerFieldOverride("joints")
HAnimJoint1216.setUSE("Joe_l_carpal_distal_interphalangeal_3")

HAnimHumanoid75.addJoints(HAnimJoint1216)
HAnimJoint1217 = x3d.HAnimJoint()
HAnimJoint1217.setContainerFieldOverride("joints")
HAnimJoint1217.setUSE("Joe_r_carpal_distal_interphalangeal_3")

HAnimHumanoid75.addJoints(HAnimJoint1217)
HAnimJoint1218 = x3d.HAnimJoint()
HAnimJoint1218.setContainerFieldOverride("joints")
HAnimJoint1218.setUSE("Joe_l_carpal_distal_interphalangeal_4")

HAnimHumanoid75.addJoints(HAnimJoint1218)
HAnimJoint1219 = x3d.HAnimJoint()
HAnimJoint1219.setContainerFieldOverride("joints")
HAnimJoint1219.setUSE("Joe_r_carpal_distal_interphalangeal_4")

HAnimHumanoid75.addJoints(HAnimJoint1219)
HAnimJoint1220 = x3d.HAnimJoint()
HAnimJoint1220.setContainerFieldOverride("joints")
HAnimJoint1220.setUSE("Joe_l_carpal_distal_interphalangeal_5")

HAnimHumanoid75.addJoints(HAnimJoint1220)
HAnimJoint1221 = x3d.HAnimJoint()
HAnimJoint1221.setContainerFieldOverride("joints")
HAnimJoint1221.setUSE("Joe_r_carpal_distal_interphalangeal_5")

HAnimHumanoid75.addJoints(HAnimJoint1221)
HAnimJoint1222 = x3d.HAnimJoint()
HAnimJoint1222.setContainerFieldOverride("joints")
HAnimJoint1222.setUSE("Joe_l_carpal_interphalangeal_1")

HAnimHumanoid75.addJoints(HAnimJoint1222)
HAnimJoint1223 = x3d.HAnimJoint()
HAnimJoint1223.setContainerFieldOverride("joints")
HAnimJoint1223.setUSE("Joe_r_carpal_interphalangeal_1")

HAnimHumanoid75.addJoints(HAnimJoint1223)
HAnimJoint1224 = x3d.HAnimJoint()
HAnimJoint1224.setContainerFieldOverride("joints")
HAnimJoint1224.setUSE("Joe_l_carpal_proximal_interphalangeal_2")

HAnimHumanoid75.addJoints(HAnimJoint1224)
HAnimJoint1225 = x3d.HAnimJoint()
HAnimJoint1225.setContainerFieldOverride("joints")
HAnimJoint1225.setUSE("Joe_r_carpal_proximal_interphalangeal_2")

HAnimHumanoid75.addJoints(HAnimJoint1225)
HAnimJoint1226 = x3d.HAnimJoint()
HAnimJoint1226.setContainerFieldOverride("joints")
HAnimJoint1226.setUSE("Joe_l_carpal_proximal_interphalangeal_3")

HAnimHumanoid75.addJoints(HAnimJoint1226)
HAnimJoint1227 = x3d.HAnimJoint()
HAnimJoint1227.setContainerFieldOverride("joints")
HAnimJoint1227.setUSE("Joe_r_carpal_proximal_interphalangeal_3")

HAnimHumanoid75.addJoints(HAnimJoint1227)
HAnimJoint1228 = x3d.HAnimJoint()
HAnimJoint1228.setContainerFieldOverride("joints")
HAnimJoint1228.setUSE("Joe_l_carpal_proximal_interphalangeal_4")

HAnimHumanoid75.addJoints(HAnimJoint1228)
HAnimJoint1229 = x3d.HAnimJoint()
HAnimJoint1229.setContainerFieldOverride("joints")
HAnimJoint1229.setUSE("Joe_r_carpal_proximal_interphalangeal_4")

HAnimHumanoid75.addJoints(HAnimJoint1229)
HAnimJoint1230 = x3d.HAnimJoint()
HAnimJoint1230.setContainerFieldOverride("joints")
HAnimJoint1230.setUSE("Joe_l_carpal_proximal_interphalangeal_5")

HAnimHumanoid75.addJoints(HAnimJoint1230)
HAnimJoint1231 = x3d.HAnimJoint()
HAnimJoint1231.setContainerFieldOverride("joints")
HAnimJoint1231.setUSE("Joe_r_carpal_proximal_interphalangeal_5")

HAnimHumanoid75.addJoints(HAnimJoint1231)
HAnimJoint1232 = x3d.HAnimJoint()
HAnimJoint1232.setContainerFieldOverride("joints")
HAnimJoint1232.setUSE("Joe_l_carpometacarpal_1")

HAnimHumanoid75.addJoints(HAnimJoint1232)
HAnimJoint1233 = x3d.HAnimJoint()
HAnimJoint1233.setContainerFieldOverride("joints")
HAnimJoint1233.setUSE("Joe_r_carpometacarpal_1")

HAnimHumanoid75.addJoints(HAnimJoint1233)
HAnimJoint1234 = x3d.HAnimJoint()
HAnimJoint1234.setContainerFieldOverride("joints")
HAnimJoint1234.setUSE("Joe_l_carpometacarpal_2")

HAnimHumanoid75.addJoints(HAnimJoint1234)
HAnimJoint1235 = x3d.HAnimJoint()
HAnimJoint1235.setContainerFieldOverride("joints")
HAnimJoint1235.setUSE("Joe_r_carpometacarpal_2")

HAnimHumanoid75.addJoints(HAnimJoint1235)
HAnimJoint1236 = x3d.HAnimJoint()
HAnimJoint1236.setContainerFieldOverride("joints")
HAnimJoint1236.setUSE("Joe_l_carpometacarpal_3")

HAnimHumanoid75.addJoints(HAnimJoint1236)
HAnimJoint1237 = x3d.HAnimJoint()
HAnimJoint1237.setContainerFieldOverride("joints")
HAnimJoint1237.setUSE("Joe_r_carpometacarpal_3")

HAnimHumanoid75.addJoints(HAnimJoint1237)
HAnimJoint1238 = x3d.HAnimJoint()
HAnimJoint1238.setContainerFieldOverride("joints")
HAnimJoint1238.setUSE("Joe_l_carpometacarpal_4")

HAnimHumanoid75.addJoints(HAnimJoint1238)
HAnimJoint1239 = x3d.HAnimJoint()
HAnimJoint1239.setContainerFieldOverride("joints")
HAnimJoint1239.setUSE("Joe_r_carpometacarpal_4")

HAnimHumanoid75.addJoints(HAnimJoint1239)
HAnimJoint1240 = x3d.HAnimJoint()
HAnimJoint1240.setContainerFieldOverride("joints")
HAnimJoint1240.setUSE("Joe_l_carpometacarpal_5")

HAnimHumanoid75.addJoints(HAnimJoint1240)
HAnimJoint1241 = x3d.HAnimJoint()
HAnimJoint1241.setContainerFieldOverride("joints")
HAnimJoint1241.setUSE("Joe_r_carpometacarpal_5")

HAnimHumanoid75.addJoints(HAnimJoint1241)
HAnimJoint1242 = x3d.HAnimJoint()
HAnimJoint1242.setContainerFieldOverride("joints")
HAnimJoint1242.setUSE("Joe_l_elbow")

HAnimHumanoid75.addJoints(HAnimJoint1242)
HAnimJoint1243 = x3d.HAnimJoint()
HAnimJoint1243.setContainerFieldOverride("joints")
HAnimJoint1243.setUSE("Joe_r_elbow")

HAnimHumanoid75.addJoints(HAnimJoint1243)
HAnimJoint1244 = x3d.HAnimJoint()
HAnimJoint1244.setContainerFieldOverride("joints")
HAnimJoint1244.setUSE("Joe_l_eyeball_joint")

HAnimHumanoid75.addJoints(HAnimJoint1244)
HAnimJoint1245 = x3d.HAnimJoint()
HAnimJoint1245.setContainerFieldOverride("joints")
HAnimJoint1245.setUSE("Joe_r_eyeball_joint")

HAnimHumanoid75.addJoints(HAnimJoint1245)
HAnimJoint1246 = x3d.HAnimJoint()
HAnimJoint1246.setContainerFieldOverride("joints")
HAnimJoint1246.setUSE("Joe_l_hip")

HAnimHumanoid75.addJoints(HAnimJoint1246)
HAnimJoint1247 = x3d.HAnimJoint()
HAnimJoint1247.setContainerFieldOverride("joints")
HAnimJoint1247.setUSE("Joe_r_hip")

HAnimHumanoid75.addJoints(HAnimJoint1247)
HAnimJoint1248 = x3d.HAnimJoint()
HAnimJoint1248.setContainerFieldOverride("joints")
HAnimJoint1248.setUSE("Joe_l_knee")

HAnimHumanoid75.addJoints(HAnimJoint1248)
HAnimJoint1249 = x3d.HAnimJoint()
HAnimJoint1249.setContainerFieldOverride("joints")
HAnimJoint1249.setUSE("Joe_r_knee")

HAnimHumanoid75.addJoints(HAnimJoint1249)
HAnimJoint1250 = x3d.HAnimJoint()
HAnimJoint1250.setContainerFieldOverride("joints")
HAnimJoint1250.setUSE("Joe_l_metacarpophalangeal_1")

HAnimHumanoid75.addJoints(HAnimJoint1250)
HAnimJoint1251 = x3d.HAnimJoint()
HAnimJoint1251.setContainerFieldOverride("joints")
HAnimJoint1251.setUSE("Joe_r_metacarpophalangeal_1")

HAnimHumanoid75.addJoints(HAnimJoint1251)
HAnimJoint1252 = x3d.HAnimJoint()
HAnimJoint1252.setContainerFieldOverride("joints")
HAnimJoint1252.setUSE("Joe_l_metacarpophalangeal_2")

HAnimHumanoid75.addJoints(HAnimJoint1252)
HAnimJoint1253 = x3d.HAnimJoint()
HAnimJoint1253.setContainerFieldOverride("joints")
HAnimJoint1253.setUSE("Joe_r_metacarpophalangeal_2")

HAnimHumanoid75.addJoints(HAnimJoint1253)
HAnimJoint1254 = x3d.HAnimJoint()
HAnimJoint1254.setContainerFieldOverride("joints")
HAnimJoint1254.setUSE("Joe_l_metacarpophalangeal_3")

HAnimHumanoid75.addJoints(HAnimJoint1254)
HAnimJoint1255 = x3d.HAnimJoint()
HAnimJoint1255.setContainerFieldOverride("joints")
HAnimJoint1255.setUSE("Joe_r_metacarpophalangeal_3")

HAnimHumanoid75.addJoints(HAnimJoint1255)
HAnimJoint1256 = x3d.HAnimJoint()
HAnimJoint1256.setContainerFieldOverride("joints")
HAnimJoint1256.setUSE("Joe_l_metacarpophalangeal_4")

HAnimHumanoid75.addJoints(HAnimJoint1256)
HAnimJoint1257 = x3d.HAnimJoint()
HAnimJoint1257.setContainerFieldOverride("joints")
HAnimJoint1257.setUSE("Joe_r_metacarpophalangeal_4")

HAnimHumanoid75.addJoints(HAnimJoint1257)
HAnimJoint1258 = x3d.HAnimJoint()
HAnimJoint1258.setContainerFieldOverride("joints")
HAnimJoint1258.setUSE("Joe_l_metacarpophalangeal_5")

HAnimHumanoid75.addJoints(HAnimJoint1258)
HAnimJoint1259 = x3d.HAnimJoint()
HAnimJoint1259.setContainerFieldOverride("joints")
HAnimJoint1259.setUSE("Joe_r_metacarpophalangeal_5")

HAnimHumanoid75.addJoints(HAnimJoint1259)
HAnimJoint1260 = x3d.HAnimJoint()
HAnimJoint1260.setContainerFieldOverride("joints")
HAnimJoint1260.setUSE("Joe_l_metatarsal")

HAnimHumanoid75.addJoints(HAnimJoint1260)
HAnimJoint1261 = x3d.HAnimJoint()
HAnimJoint1261.setContainerFieldOverride("joints")
HAnimJoint1261.setUSE("Joe_l_metatarsophalangeal_2")

HAnimHumanoid75.addJoints(HAnimJoint1261)
HAnimJoint1262 = x3d.HAnimJoint()
HAnimJoint1262.setContainerFieldOverride("joints")
HAnimJoint1262.setUSE("Joe_r_metatarsophalangeal_2")

HAnimHumanoid75.addJoints(HAnimJoint1262)
HAnimJoint1263 = x3d.HAnimJoint()
HAnimJoint1263.setContainerFieldOverride("joints")
HAnimJoint1263.setUSE("Joe_l_radiocarpal")

HAnimHumanoid75.addJoints(HAnimJoint1263)
HAnimJoint1264 = x3d.HAnimJoint()
HAnimJoint1264.setContainerFieldOverride("joints")
HAnimJoint1264.setUSE("Joe_r_radiocarpal")

HAnimHumanoid75.addJoints(HAnimJoint1264)
HAnimJoint1265 = x3d.HAnimJoint()
HAnimJoint1265.setContainerFieldOverride("joints")
HAnimJoint1265.setUSE("Joe_l_shoulder")

HAnimHumanoid75.addJoints(HAnimJoint1265)
HAnimJoint1266 = x3d.HAnimJoint()
HAnimJoint1266.setContainerFieldOverride("joints")
HAnimJoint1266.setUSE("Joe_r_shoulder")

HAnimHumanoid75.addJoints(HAnimJoint1266)
HAnimJoint1267 = x3d.HAnimJoint()
HAnimJoint1267.setContainerFieldOverride("joints")
HAnimJoint1267.setUSE("Joe_l_sternoclavicular")

HAnimHumanoid75.addJoints(HAnimJoint1267)
HAnimJoint1268 = x3d.HAnimJoint()
HAnimJoint1268.setContainerFieldOverride("joints")
HAnimJoint1268.setUSE("Joe_r_sternoclavicular")

HAnimHumanoid75.addJoints(HAnimJoint1268)
HAnimJoint1269 = x3d.HAnimJoint()
HAnimJoint1269.setContainerFieldOverride("joints")
HAnimJoint1269.setUSE("Joe_l_talocrural")

HAnimHumanoid75.addJoints(HAnimJoint1269)
HAnimJoint1270 = x3d.HAnimJoint()
HAnimJoint1270.setContainerFieldOverride("joints")
HAnimJoint1270.setUSE("Joe_r_talocrural")

HAnimHumanoid75.addJoints(HAnimJoint1270)
HAnimJoint1271 = x3d.HAnimJoint()
HAnimJoint1271.setContainerFieldOverride("joints")
HAnimJoint1271.setUSE("Joe_r_tarsal_distal_interphalangeal_2")

HAnimHumanoid75.addJoints(HAnimJoint1271)
HAnimJoint1272 = x3d.HAnimJoint()
HAnimJoint1272.setContainerFieldOverride("joints")
HAnimJoint1272.setUSE("Joe_l_tarsometatarsal_2")

HAnimHumanoid75.addJoints(HAnimJoint1272)
HAnimJoint1273 = x3d.HAnimJoint()
HAnimJoint1273.setContainerFieldOverride("joints")
HAnimJoint1273.setUSE("Joe_r_tarsometatarsal_2")

HAnimHumanoid75.addJoints(HAnimJoint1273)
HAnimSegment1274 = x3d.HAnimSegment()
HAnimSegment1274.setContainerFieldOverride("segments")
HAnimSegment1274.setUSE("Joe_c1")

HAnimHumanoid75.addSegments(HAnimSegment1274)
HAnimSegment1275 = x3d.HAnimSegment()
HAnimSegment1275.setContainerFieldOverride("segments")
HAnimSegment1275.setUSE("Joe_c2")

HAnimHumanoid75.addSegments(HAnimSegment1275)
HAnimSegment1276 = x3d.HAnimSegment()
HAnimSegment1276.setContainerFieldOverride("segments")
HAnimSegment1276.setUSE("Joe_c3")

HAnimHumanoid75.addSegments(HAnimSegment1276)
HAnimSegment1277 = x3d.HAnimSegment()
HAnimSegment1277.setContainerFieldOverride("segments")
HAnimSegment1277.setUSE("Joe_c4")

HAnimHumanoid75.addSegments(HAnimSegment1277)
HAnimSegment1278 = x3d.HAnimSegment()
HAnimSegment1278.setContainerFieldOverride("segments")
HAnimSegment1278.setUSE("Joe_c5")

HAnimHumanoid75.addSegments(HAnimSegment1278)
HAnimSegment1279 = x3d.HAnimSegment()
HAnimSegment1279.setContainerFieldOverride("segments")
HAnimSegment1279.setUSE("Joe_c6")

HAnimHumanoid75.addSegments(HAnimSegment1279)
HAnimSegment1280 = x3d.HAnimSegment()
HAnimSegment1280.setContainerFieldOverride("segments")
HAnimSegment1280.setUSE("Joe_c7")

HAnimHumanoid75.addSegments(HAnimSegment1280)
HAnimSegment1281 = x3d.HAnimSegment()
HAnimSegment1281.setContainerFieldOverride("segments")
HAnimSegment1281.setUSE("Joe_l1")

HAnimHumanoid75.addSegments(HAnimSegment1281)
HAnimSegment1282 = x3d.HAnimSegment()
HAnimSegment1282.setContainerFieldOverride("segments")
HAnimSegment1282.setUSE("Joe_l2")

HAnimHumanoid75.addSegments(HAnimSegment1282)
HAnimSegment1283 = x3d.HAnimSegment()
HAnimSegment1283.setContainerFieldOverride("segments")
HAnimSegment1283.setUSE("Joe_l3")

HAnimHumanoid75.addSegments(HAnimSegment1283)
HAnimSegment1284 = x3d.HAnimSegment()
HAnimSegment1284.setContainerFieldOverride("segments")
HAnimSegment1284.setUSE("Joe_l4")

HAnimHumanoid75.addSegments(HAnimSegment1284)
HAnimSegment1285 = x3d.HAnimSegment()
HAnimSegment1285.setContainerFieldOverride("segments")
HAnimSegment1285.setUSE("Joe_l5")

HAnimHumanoid75.addSegments(HAnimSegment1285)
HAnimSegment1286 = x3d.HAnimSegment()
HAnimSegment1286.setContainerFieldOverride("segments")
HAnimSegment1286.setUSE("Joe_pelvis")

HAnimHumanoid75.addSegments(HAnimSegment1286)
HAnimSegment1287 = x3d.HAnimSegment()
HAnimSegment1287.setContainerFieldOverride("segments")
HAnimSegment1287.setUSE("Joe_sacrum")

HAnimHumanoid75.addSegments(HAnimSegment1287)
HAnimSegment1288 = x3d.HAnimSegment()
HAnimSegment1288.setContainerFieldOverride("segments")
HAnimSegment1288.setUSE("Joe_skull")

HAnimHumanoid75.addSegments(HAnimSegment1288)
HAnimSegment1289 = x3d.HAnimSegment()
HAnimSegment1289.setContainerFieldOverride("segments")
HAnimSegment1289.setUSE("Joe_t1")

HAnimHumanoid75.addSegments(HAnimSegment1289)
HAnimSegment1290 = x3d.HAnimSegment()
HAnimSegment1290.setContainerFieldOverride("segments")
HAnimSegment1290.setUSE("Joe_t10")

HAnimHumanoid75.addSegments(HAnimSegment1290)
HAnimSegment1291 = x3d.HAnimSegment()
HAnimSegment1291.setContainerFieldOverride("segments")
HAnimSegment1291.setUSE("Joe_t11")

HAnimHumanoid75.addSegments(HAnimSegment1291)
HAnimSegment1292 = x3d.HAnimSegment()
HAnimSegment1292.setContainerFieldOverride("segments")
HAnimSegment1292.setUSE("Joe_t12")

HAnimHumanoid75.addSegments(HAnimSegment1292)
HAnimSegment1293 = x3d.HAnimSegment()
HAnimSegment1293.setContainerFieldOverride("segments")
HAnimSegment1293.setUSE("Joe_t2")

HAnimHumanoid75.addSegments(HAnimSegment1293)
HAnimSegment1294 = x3d.HAnimSegment()
HAnimSegment1294.setContainerFieldOverride("segments")
HAnimSegment1294.setUSE("Joe_t3")

HAnimHumanoid75.addSegments(HAnimSegment1294)
HAnimSegment1295 = x3d.HAnimSegment()
HAnimSegment1295.setContainerFieldOverride("segments")
HAnimSegment1295.setUSE("Joe_t4")

HAnimHumanoid75.addSegments(HAnimSegment1295)
HAnimSegment1296 = x3d.HAnimSegment()
HAnimSegment1296.setContainerFieldOverride("segments")
HAnimSegment1296.setUSE("Joe_t5")

HAnimHumanoid75.addSegments(HAnimSegment1296)
HAnimSegment1297 = x3d.HAnimSegment()
HAnimSegment1297.setContainerFieldOverride("segments")
HAnimSegment1297.setUSE("Joe_t6")

HAnimHumanoid75.addSegments(HAnimSegment1297)
HAnimSegment1298 = x3d.HAnimSegment()
HAnimSegment1298.setContainerFieldOverride("segments")
HAnimSegment1298.setUSE("Joe_t7")

HAnimHumanoid75.addSegments(HAnimSegment1298)
HAnimSegment1299 = x3d.HAnimSegment()
HAnimSegment1299.setContainerFieldOverride("segments")
HAnimSegment1299.setUSE("Joe_t8")

HAnimHumanoid75.addSegments(HAnimSegment1299)
HAnimSegment1300 = x3d.HAnimSegment()
HAnimSegment1300.setContainerFieldOverride("segments")
HAnimSegment1300.setUSE("Joe_t9")

HAnimHumanoid75.addSegments(HAnimSegment1300)
HAnimSegment1301 = x3d.HAnimSegment()
HAnimSegment1301.setContainerFieldOverride("segments")
HAnimSegment1301.setUSE("Joe_toPelvis")

HAnimHumanoid75.addSegments(HAnimSegment1301)
HAnimSegment1302 = x3d.HAnimSegment()
HAnimSegment1302.setContainerFieldOverride("segments")
HAnimSegment1302.setUSE("Joe_l_calf")

HAnimHumanoid75.addSegments(HAnimSegment1302)
HAnimSegment1303 = x3d.HAnimSegment()
HAnimSegment1303.setContainerFieldOverride("segments")
HAnimSegment1303.setUSE("Joe_r_calf")

HAnimHumanoid75.addSegments(HAnimSegment1303)
HAnimSegment1304 = x3d.HAnimSegment()
HAnimSegment1304.setContainerFieldOverride("segments")
HAnimSegment1304.setUSE("Joe_l_carpal")

HAnimHumanoid75.addSegments(HAnimSegment1304)
HAnimSegment1305 = x3d.HAnimSegment()
HAnimSegment1305.setContainerFieldOverride("segments")
HAnimSegment1305.setUSE("Joe_r_carpal")

HAnimHumanoid75.addSegments(HAnimSegment1305)
HAnimSegment1306 = x3d.HAnimSegment()
HAnimSegment1306.setContainerFieldOverride("segments")
HAnimSegment1306.setUSE("Joe_l_carpal_distal_phalanx_1")

HAnimHumanoid75.addSegments(HAnimSegment1306)
HAnimSegment1307 = x3d.HAnimSegment()
HAnimSegment1307.setContainerFieldOverride("segments")
HAnimSegment1307.setUSE("Joe_r_carpal_distal_phalanx_1")

HAnimHumanoid75.addSegments(HAnimSegment1307)
HAnimSegment1308 = x3d.HAnimSegment()
HAnimSegment1308.setContainerFieldOverride("segments")
HAnimSegment1308.setUSE("Joe_l_carpal_distal_phalanx_2")

HAnimHumanoid75.addSegments(HAnimSegment1308)
HAnimSegment1309 = x3d.HAnimSegment()
HAnimSegment1309.setContainerFieldOverride("segments")
HAnimSegment1309.setUSE("Joe_r_carpal_distal_phalanx_2")

HAnimHumanoid75.addSegments(HAnimSegment1309)
HAnimSegment1310 = x3d.HAnimSegment()
HAnimSegment1310.setContainerFieldOverride("segments")
HAnimSegment1310.setUSE("Joe_l_carpal_distal_phalanx_3")

HAnimHumanoid75.addSegments(HAnimSegment1310)
HAnimSegment1311 = x3d.HAnimSegment()
HAnimSegment1311.setContainerFieldOverride("segments")
HAnimSegment1311.setUSE("Joe_r_carpal_distal_phalanx_3")

HAnimHumanoid75.addSegments(HAnimSegment1311)
HAnimSegment1312 = x3d.HAnimSegment()
HAnimSegment1312.setContainerFieldOverride("segments")
HAnimSegment1312.setUSE("Joe_l_carpal_distal_phalanx_4")

HAnimHumanoid75.addSegments(HAnimSegment1312)
HAnimSegment1313 = x3d.HAnimSegment()
HAnimSegment1313.setContainerFieldOverride("segments")
HAnimSegment1313.setUSE("Joe_r_carpal_distal_phalanx_4")

HAnimHumanoid75.addSegments(HAnimSegment1313)
HAnimSegment1314 = x3d.HAnimSegment()
HAnimSegment1314.setContainerFieldOverride("segments")
HAnimSegment1314.setUSE("Joe_l_carpal_distal_phalanx_5")

HAnimHumanoid75.addSegments(HAnimSegment1314)
HAnimSegment1315 = x3d.HAnimSegment()
HAnimSegment1315.setContainerFieldOverride("segments")
HAnimSegment1315.setUSE("Joe_r_carpal_distal_phalanx_5")

HAnimHumanoid75.addSegments(HAnimSegment1315)
HAnimSegment1316 = x3d.HAnimSegment()
HAnimSegment1316.setContainerFieldOverride("segments")
HAnimSegment1316.setUSE("Joe_l_carpal_middle_phalanx_2")

HAnimHumanoid75.addSegments(HAnimSegment1316)
HAnimSegment1317 = x3d.HAnimSegment()
HAnimSegment1317.setContainerFieldOverride("segments")
HAnimSegment1317.setUSE("Joe_r_carpal_middle_phalanx_2")

HAnimHumanoid75.addSegments(HAnimSegment1317)
HAnimSegment1318 = x3d.HAnimSegment()
HAnimSegment1318.setContainerFieldOverride("segments")
HAnimSegment1318.setUSE("Joe_l_carpal_middle_phalanx_3")

HAnimHumanoid75.addSegments(HAnimSegment1318)
HAnimSegment1319 = x3d.HAnimSegment()
HAnimSegment1319.setContainerFieldOverride("segments")
HAnimSegment1319.setUSE("Joe_r_carpal_middle_phalanx_3")

HAnimHumanoid75.addSegments(HAnimSegment1319)
HAnimSegment1320 = x3d.HAnimSegment()
HAnimSegment1320.setContainerFieldOverride("segments")
HAnimSegment1320.setUSE("Joe_l_carpal_middle_phalanx_4")

HAnimHumanoid75.addSegments(HAnimSegment1320)
HAnimSegment1321 = x3d.HAnimSegment()
HAnimSegment1321.setContainerFieldOverride("segments")
HAnimSegment1321.setUSE("Joe_r_carpal_middle_phalanx_4")

HAnimHumanoid75.addSegments(HAnimSegment1321)
HAnimSegment1322 = x3d.HAnimSegment()
HAnimSegment1322.setContainerFieldOverride("segments")
HAnimSegment1322.setUSE("Joe_l_carpal_middle_phalanx_5")

HAnimHumanoid75.addSegments(HAnimSegment1322)
HAnimSegment1323 = x3d.HAnimSegment()
HAnimSegment1323.setContainerFieldOverride("segments")
HAnimSegment1323.setUSE("Joe_r_carpal_middle_phalanx_5")

HAnimHumanoid75.addSegments(HAnimSegment1323)
HAnimSegment1324 = x3d.HAnimSegment()
HAnimSegment1324.setContainerFieldOverride("segments")
HAnimSegment1324.setUSE("Joe_l_carpal_proximal_phalanx_1")

HAnimHumanoid75.addSegments(HAnimSegment1324)
HAnimSegment1325 = x3d.HAnimSegment()
HAnimSegment1325.setContainerFieldOverride("segments")
HAnimSegment1325.setUSE("Joe_r_carpal_proximal_phalanx_1")

HAnimHumanoid75.addSegments(HAnimSegment1325)
HAnimSegment1326 = x3d.HAnimSegment()
HAnimSegment1326.setContainerFieldOverride("segments")
HAnimSegment1326.setUSE("Joe_l_carpal_proximal_phalanx_2")

HAnimHumanoid75.addSegments(HAnimSegment1326)
HAnimSegment1327 = x3d.HAnimSegment()
HAnimSegment1327.setContainerFieldOverride("segments")
HAnimSegment1327.setUSE("Joe_r_carpal_proximal_phalanx_2")

HAnimHumanoid75.addSegments(HAnimSegment1327)
HAnimSegment1328 = x3d.HAnimSegment()
HAnimSegment1328.setContainerFieldOverride("segments")
HAnimSegment1328.setUSE("Joe_l_carpal_proximal_phalanx_3")

HAnimHumanoid75.addSegments(HAnimSegment1328)
HAnimSegment1329 = x3d.HAnimSegment()
HAnimSegment1329.setContainerFieldOverride("segments")
HAnimSegment1329.setUSE("Joe_r_carpal_proximal_phalanx_3")

HAnimHumanoid75.addSegments(HAnimSegment1329)
HAnimSegment1330 = x3d.HAnimSegment()
HAnimSegment1330.setContainerFieldOverride("segments")
HAnimSegment1330.setUSE("Joe_l_carpal_proximal_phalanx_4")

HAnimHumanoid75.addSegments(HAnimSegment1330)
HAnimSegment1331 = x3d.HAnimSegment()
HAnimSegment1331.setContainerFieldOverride("segments")
HAnimSegment1331.setUSE("Joe_r_carpal_proximal_phalanx_4")

HAnimHumanoid75.addSegments(HAnimSegment1331)
HAnimSegment1332 = x3d.HAnimSegment()
HAnimSegment1332.setContainerFieldOverride("segments")
HAnimSegment1332.setUSE("Joe_l_carpal_proximal_phalanx_5")

HAnimHumanoid75.addSegments(HAnimSegment1332)
HAnimSegment1333 = x3d.HAnimSegment()
HAnimSegment1333.setContainerFieldOverride("segments")
HAnimSegment1333.setUSE("Joe_r_carpal_proximal_phalanx_5")

HAnimHumanoid75.addSegments(HAnimSegment1333)
HAnimSegment1334 = x3d.HAnimSegment()
HAnimSegment1334.setContainerFieldOverride("segments")
HAnimSegment1334.setUSE("Joe_l_clavicle")

HAnimHumanoid75.addSegments(HAnimSegment1334)
HAnimSegment1335 = x3d.HAnimSegment()
HAnimSegment1335.setContainerFieldOverride("segments")
HAnimSegment1335.setUSE("Joe_r_clavicle")

HAnimHumanoid75.addSegments(HAnimSegment1335)
HAnimSegment1336 = x3d.HAnimSegment()
HAnimSegment1336.setContainerFieldOverride("segments")
HAnimSegment1336.setUSE("Joe_l_eyeball")

HAnimHumanoid75.addSegments(HAnimSegment1336)
HAnimSegment1337 = x3d.HAnimSegment()
HAnimSegment1337.setContainerFieldOverride("segments")
HAnimSegment1337.setUSE("Joe_r_eyeball")

HAnimHumanoid75.addSegments(HAnimSegment1337)
HAnimSegment1338 = x3d.HAnimSegment()
HAnimSegment1338.setContainerFieldOverride("segments")
HAnimSegment1338.setUSE("Joe_l_forearm")

HAnimHumanoid75.addSegments(HAnimSegment1338)
HAnimSegment1339 = x3d.HAnimSegment()
HAnimSegment1339.setContainerFieldOverride("segments")
HAnimSegment1339.setUSE("Joe_r_forearm")

HAnimHumanoid75.addSegments(HAnimSegment1339)
HAnimSegment1340 = x3d.HAnimSegment()
HAnimSegment1340.setContainerFieldOverride("segments")
HAnimSegment1340.setUSE("Joe_l_metacarpal_1")

HAnimHumanoid75.addSegments(HAnimSegment1340)
HAnimSegment1341 = x3d.HAnimSegment()
HAnimSegment1341.setContainerFieldOverride("segments")
HAnimSegment1341.setUSE("Joe_r_metacarpal_1")

HAnimHumanoid75.addSegments(HAnimSegment1341)
HAnimSegment1342 = x3d.HAnimSegment()
HAnimSegment1342.setContainerFieldOverride("segments")
HAnimSegment1342.setUSE("Joe_l_metacarpal_2")

HAnimHumanoid75.addSegments(HAnimSegment1342)
HAnimSegment1343 = x3d.HAnimSegment()
HAnimSegment1343.setContainerFieldOverride("segments")
HAnimSegment1343.setUSE("Joe_r_metacarpal_2")

HAnimHumanoid75.addSegments(HAnimSegment1343)
HAnimSegment1344 = x3d.HAnimSegment()
HAnimSegment1344.setContainerFieldOverride("segments")
HAnimSegment1344.setUSE("Joe_l_metacarpal_3")

HAnimHumanoid75.addSegments(HAnimSegment1344)
HAnimSegment1345 = x3d.HAnimSegment()
HAnimSegment1345.setContainerFieldOverride("segments")
HAnimSegment1345.setUSE("Joe_r_metacarpal_3")

HAnimHumanoid75.addSegments(HAnimSegment1345)
HAnimSegment1346 = x3d.HAnimSegment()
HAnimSegment1346.setContainerFieldOverride("segments")
HAnimSegment1346.setUSE("Joe_l_metacarpal_4")

HAnimHumanoid75.addSegments(HAnimSegment1346)
HAnimSegment1347 = x3d.HAnimSegment()
HAnimSegment1347.setContainerFieldOverride("segments")
HAnimSegment1347.setUSE("Joe_r_metacarpal_4")

HAnimHumanoid75.addSegments(HAnimSegment1347)
HAnimSegment1348 = x3d.HAnimSegment()
HAnimSegment1348.setContainerFieldOverride("segments")
HAnimSegment1348.setUSE("Joe_l_metacarpal_5")

HAnimHumanoid75.addSegments(HAnimSegment1348)
HAnimSegment1349 = x3d.HAnimSegment()
HAnimSegment1349.setContainerFieldOverride("segments")
HAnimSegment1349.setUSE("Joe_r_metacarpal_5")

HAnimHumanoid75.addSegments(HAnimSegment1349)
HAnimSegment1350 = x3d.HAnimSegment()
HAnimSegment1350.setContainerFieldOverride("segments")
HAnimSegment1350.setUSE("Joe_l_metatarsal_2")

HAnimHumanoid75.addSegments(HAnimSegment1350)
HAnimSegment1351 = x3d.HAnimSegment()
HAnimSegment1351.setContainerFieldOverride("segments")
HAnimSegment1351.setUSE("Joe_r_metatarsal_2")

HAnimHumanoid75.addSegments(HAnimSegment1351)
HAnimSegment1352 = x3d.HAnimSegment()
HAnimSegment1352.setContainerFieldOverride("segments")
HAnimSegment1352.setUSE("Joe_l_scapula")

HAnimHumanoid75.addSegments(HAnimSegment1352)
HAnimSegment1353 = x3d.HAnimSegment()
HAnimSegment1353.setContainerFieldOverride("segments")
HAnimSegment1353.setUSE("Joe_r_scapula")

HAnimHumanoid75.addSegments(HAnimSegment1353)
HAnimSegment1354 = x3d.HAnimSegment()
HAnimSegment1354.setContainerFieldOverride("segments")
HAnimSegment1354.setUSE("Joe_l_talus")

HAnimHumanoid75.addSegments(HAnimSegment1354)
HAnimSegment1355 = x3d.HAnimSegment()
HAnimSegment1355.setContainerFieldOverride("segments")
HAnimSegment1355.setUSE("Joe_r_talus")

HAnimHumanoid75.addSegments(HAnimSegment1355)
HAnimSegment1356 = x3d.HAnimSegment()
HAnimSegment1356.setContainerFieldOverride("segments")
HAnimSegment1356.setUSE("Joe_l_tarsal_distal_phalanx_2")

HAnimHumanoid75.addSegments(HAnimSegment1356)
HAnimSegment1357 = x3d.HAnimSegment()
HAnimSegment1357.setContainerFieldOverride("segments")
HAnimSegment1357.setUSE("Joe_r_tarsal_distal_phalanx_2")

HAnimHumanoid75.addSegments(HAnimSegment1357)
HAnimSegment1358 = x3d.HAnimSegment()
HAnimSegment1358.setContainerFieldOverride("segments")
HAnimSegment1358.setUSE("Joe_l_tarsal_proximal_phalanx_2")

HAnimHumanoid75.addSegments(HAnimSegment1358)
HAnimSegment1359 = x3d.HAnimSegment()
HAnimSegment1359.setContainerFieldOverride("segments")
HAnimSegment1359.setUSE("Joe_r_tarsal_proximal_phalanx_2")

HAnimHumanoid75.addSegments(HAnimSegment1359)
HAnimSegment1360 = x3d.HAnimSegment()
HAnimSegment1360.setContainerFieldOverride("segments")
HAnimSegment1360.setUSE("Joe_l_thigh")

HAnimHumanoid75.addSegments(HAnimSegment1360)
HAnimSegment1361 = x3d.HAnimSegment()
HAnimSegment1361.setContainerFieldOverride("segments")
HAnimSegment1361.setUSE("Joe_r_thigh")

HAnimHumanoid75.addSegments(HAnimSegment1361)
HAnimSegment1362 = x3d.HAnimSegment()
HAnimSegment1362.setContainerFieldOverride("segments")
HAnimSegment1362.setUSE("Joe_l_upperarm")

HAnimHumanoid75.addSegments(HAnimSegment1362)
HAnimSegment1363 = x3d.HAnimSegment()
HAnimSegment1363.setContainerFieldOverride("segments")
HAnimSegment1363.setUSE("Joe_r_upperarm")

HAnimHumanoid75.addSegments(HAnimSegment1363)
HAnimSite1364 = x3d.HAnimSite()
HAnimSite1364.setContainerFieldOverride("sites")
HAnimSite1364.setUSE("Joe_cervicale_pt")

HAnimHumanoid75.addSites(HAnimSite1364)
HAnimSite1365 = x3d.HAnimSite()
HAnimSite1365.setContainerFieldOverride("sites")
HAnimSite1365.setUSE("Joe_crotch_pt")

HAnimHumanoid75.addSites(HAnimSite1365)
HAnimSite1366 = x3d.HAnimSite()
HAnimSite1366.setContainerFieldOverride("sites")
HAnimSite1366.setUSE("Joe_floormarker_pt")

HAnimHumanoid75.addSites(HAnimSite1366)
HAnimSite1367 = x3d.HAnimSite()
HAnimSite1367.setContainerFieldOverride("sites")
HAnimSite1367.setUSE("Joe_navel_pt")

HAnimHumanoid75.addSites(HAnimSite1367)
HAnimSite1368 = x3d.HAnimSite()
HAnimSite1368.setContainerFieldOverride("sites")
HAnimSite1368.setUSE("Joe_nuchale_pt")

HAnimHumanoid75.addSites(HAnimSite1368)
HAnimSite1369 = x3d.HAnimSite()
HAnimSite1369.setContainerFieldOverride("sites")
HAnimSite1369.setUSE("Joe_rib10_midspine_pt")

HAnimHumanoid75.addSites(HAnimSite1369)
HAnimSite1370 = x3d.HAnimSite()
HAnimSite1370.setContainerFieldOverride("sites")
HAnimSite1370.setUSE("Joe_sellion_pt")

HAnimHumanoid75.addSites(HAnimSite1370)
HAnimSite1371 = x3d.HAnimSite()
HAnimSite1371.setContainerFieldOverride("sites")
HAnimSite1371.setUSE("Joe_skull_vertex_tip")

HAnimHumanoid75.addSites(HAnimSite1371)
HAnimSite1372 = x3d.HAnimSite()
HAnimSite1372.setContainerFieldOverride("sites")
HAnimSite1372.setUSE("Joe_substernale_pt")

HAnimHumanoid75.addSites(HAnimSite1372)
HAnimSite1373 = x3d.HAnimSite()
HAnimSite1373.setContainerFieldOverride("sites")
HAnimSite1373.setUSE("Joe_supramenton_pt")

HAnimHumanoid75.addSites(HAnimSite1373)
HAnimSite1374 = x3d.HAnimSite()
HAnimSite1374.setContainerFieldOverride("sites")
HAnimSite1374.setUSE("Joe_suprasternale_pt")

HAnimHumanoid75.addSites(HAnimSite1374)
HAnimSite1375 = x3d.HAnimSite()
HAnimSite1375.setContainerFieldOverride("sites")
HAnimSite1375.setUSE("Joe_waist_preferred_posterior_pt")

HAnimHumanoid75.addSites(HAnimSite1375)
HAnimSite1376 = x3d.HAnimSite()
HAnimSite1376.setContainerFieldOverride("sites")
HAnimSite1376.setUSE("Joe_l_acromion_pt")

HAnimHumanoid75.addSites(HAnimSite1376)
HAnimSite1377 = x3d.HAnimSite()
HAnimSite1377.setContainerFieldOverride("sites")
HAnimSite1377.setUSE("Joe_r_acromion_pt")

HAnimHumanoid75.addSites(HAnimSite1377)
HAnimSite1378 = x3d.HAnimSite()
HAnimSite1378.setContainerFieldOverride("sites")
HAnimSite1378.setUSE("Joe_l_asis_pt")

HAnimHumanoid75.addSites(HAnimSite1378)
HAnimSite1379 = x3d.HAnimSite()
HAnimSite1379.setContainerFieldOverride("sites")
HAnimSite1379.setUSE("Joe_r_asis_pt")

HAnimHumanoid75.addSites(HAnimSite1379)
HAnimSite1380 = x3d.HAnimSite()
HAnimSite1380.setContainerFieldOverride("sites")
HAnimSite1380.setUSE("Joe_l_axilla_distal_pt")

HAnimHumanoid75.addSites(HAnimSite1380)
HAnimSite1381 = x3d.HAnimSite()
HAnimSite1381.setContainerFieldOverride("sites")
HAnimSite1381.setUSE("Joe_r_axilla_distal_pt")

HAnimHumanoid75.addSites(HAnimSite1381)
HAnimSite1382 = x3d.HAnimSite()
HAnimSite1382.setContainerFieldOverride("sites")
HAnimSite1382.setUSE("Joe_l_axilla_proximal_pt")

HAnimHumanoid75.addSites(HAnimSite1382)
HAnimSite1383 = x3d.HAnimSite()
HAnimSite1383.setContainerFieldOverride("sites")
HAnimSite1383.setUSE("Joe_r_axilla_proximal_pt")

HAnimHumanoid75.addSites(HAnimSite1383)
HAnimSite1384 = x3d.HAnimSite()
HAnimSite1384.setContainerFieldOverride("sites")
HAnimSite1384.setUSE("Joe_l_calcaneus_posterior_pt")

HAnimHumanoid75.addSites(HAnimSite1384)
HAnimSite1385 = x3d.HAnimSite()
HAnimSite1385.setContainerFieldOverride("sites")
HAnimSite1385.setUSE("Joe_r_calcaneus_posterior_pt")

HAnimHumanoid75.addSites(HAnimSite1385)
HAnimSite1386 = x3d.HAnimSite()
HAnimSite1386.setContainerFieldOverride("sites")
HAnimSite1386.setUSE("Joe_l_carpal_distal_phalanx_1_tip")

HAnimHumanoid75.addSites(HAnimSite1386)
HAnimSite1387 = x3d.HAnimSite()
HAnimSite1387.setContainerFieldOverride("sites")
HAnimSite1387.setUSE("Joe_r_carpal_distal_phalanx_1_tip")

HAnimHumanoid75.addSites(HAnimSite1387)
HAnimSite1388 = x3d.HAnimSite()
HAnimSite1388.setContainerFieldOverride("sites")
HAnimSite1388.setUSE("Joe_l_carpal_distal_phalanx_2_tip")

HAnimHumanoid75.addSites(HAnimSite1388)
HAnimSite1389 = x3d.HAnimSite()
HAnimSite1389.setContainerFieldOverride("sites")
HAnimSite1389.setUSE("Joe_r_carpal_distal_phalanx_2_tip")

HAnimHumanoid75.addSites(HAnimSite1389)
HAnimSite1390 = x3d.HAnimSite()
HAnimSite1390.setContainerFieldOverride("sites")
HAnimSite1390.setUSE("Joe_l_carpal_distal_phalanx_3_tip")

HAnimHumanoid75.addSites(HAnimSite1390)
HAnimSite1391 = x3d.HAnimSite()
HAnimSite1391.setContainerFieldOverride("sites")
HAnimSite1391.setUSE("Joe_r_carpal_distal_phalanx_3_tip")

HAnimHumanoid75.addSites(HAnimSite1391)
HAnimSite1392 = x3d.HAnimSite()
HAnimSite1392.setContainerFieldOverride("sites")
HAnimSite1392.setUSE("Joe_l_carpal_distal_phalanx_4_tip")

HAnimHumanoid75.addSites(HAnimSite1392)
HAnimSite1393 = x3d.HAnimSite()
HAnimSite1393.setContainerFieldOverride("sites")
HAnimSite1393.setUSE("Joe_r_carpal_distal_phalanx_4_tip")

HAnimHumanoid75.addSites(HAnimSite1393)
HAnimSite1394 = x3d.HAnimSite()
HAnimSite1394.setContainerFieldOverride("sites")
HAnimSite1394.setUSE("Joe_l_carpal_distal_phalanx_5_tip")

HAnimHumanoid75.addSites(HAnimSite1394)
HAnimSite1395 = x3d.HAnimSite()
HAnimSite1395.setContainerFieldOverride("sites")
HAnimSite1395.setUSE("Joe_r_carpal_distal_phalanx_5_tip")

HAnimHumanoid75.addSites(HAnimSite1395)
HAnimSite1396 = x3d.HAnimSite()
HAnimSite1396.setContainerFieldOverride("sites")
HAnimSite1396.setUSE("Joe_l_clavicle_pt")

HAnimHumanoid75.addSites(HAnimSite1396)
HAnimSite1397 = x3d.HAnimSite()
HAnimSite1397.setContainerFieldOverride("sites")
HAnimSite1397.setUSE("Joe_r_clavicle_pt")

HAnimHumanoid75.addSites(HAnimSite1397)
HAnimSite1398 = x3d.HAnimSite()
HAnimSite1398.setContainerFieldOverride("sites")
HAnimSite1398.setUSE("Joe_l_dactylion_pt")

HAnimHumanoid75.addSites(HAnimSite1398)
HAnimSite1399 = x3d.HAnimSite()
HAnimSite1399.setContainerFieldOverride("sites")
HAnimSite1399.setUSE("Joe_r_dactylion_pt")

HAnimHumanoid75.addSites(HAnimSite1399)
HAnimSite1400 = x3d.HAnimSite()
HAnimSite1400.setContainerFieldOverride("sites")
HAnimSite1400.setUSE("Joe_l_femoral_lateral_epicondyle_pt")

HAnimHumanoid75.addSites(HAnimSite1400)
HAnimSite1401 = x3d.HAnimSite()
HAnimSite1401.setContainerFieldOverride("sites")
HAnimSite1401.setUSE("Joe_r_femoral_lateral_epicondyle_pt")

HAnimHumanoid75.addSites(HAnimSite1401)
HAnimSite1402 = x3d.HAnimSite()
HAnimSite1402.setContainerFieldOverride("sites")
HAnimSite1402.setUSE("Joe_l_femoral_medial_epicondyle_pt")

HAnimHumanoid75.addSites(HAnimSite1402)
HAnimSite1403 = x3d.HAnimSite()
HAnimSite1403.setContainerFieldOverride("sites")
HAnimSite1403.setUSE("Joe_r_femoral_medial_epicondyle_pt")

HAnimHumanoid75.addSites(HAnimSite1403)
HAnimSite1404 = x3d.HAnimSite()
HAnimSite1404.setContainerFieldOverride("sites")
HAnimSite1404.setUSE("Joe_l_gonion_pt")

HAnimHumanoid75.addSites(HAnimSite1404)
HAnimSite1405 = x3d.HAnimSite()
HAnimSite1405.setContainerFieldOverride("sites")
HAnimSite1405.setUSE("Joe_r_gonion_pt")

HAnimHumanoid75.addSites(HAnimSite1405)
HAnimSite1406 = x3d.HAnimSite()
HAnimSite1406.setContainerFieldOverride("sites")
HAnimSite1406.setUSE("Joe_l_humeral_lateral_epicondyle_pt")

HAnimHumanoid75.addSites(HAnimSite1406)
HAnimSite1407 = x3d.HAnimSite()
HAnimSite1407.setContainerFieldOverride("sites")
HAnimSite1407.setUSE("Joe_r_humeral_lateral_epicondyle_pt")

HAnimHumanoid75.addSites(HAnimSite1407)
HAnimSite1408 = x3d.HAnimSite()
HAnimSite1408.setContainerFieldOverride("sites")
HAnimSite1408.setUSE("Joe_l_humeral_medial_epicondyle_pt")

HAnimHumanoid75.addSites(HAnimSite1408)
HAnimSite1409 = x3d.HAnimSite()
HAnimSite1409.setContainerFieldOverride("sites")
HAnimSite1409.setUSE("Joe_r_humeral_medial_epicondyle_pt")

HAnimHumanoid75.addSites(HAnimSite1409)
HAnimSite1410 = x3d.HAnimSite()
HAnimSite1410.setContainerFieldOverride("sites")
HAnimSite1410.setUSE("Joe_l_iliocristale_pt")

HAnimHumanoid75.addSites(HAnimSite1410)
HAnimSite1411 = x3d.HAnimSite()
HAnimSite1411.setContainerFieldOverride("sites")
HAnimSite1411.setUSE("Joe_r_iliocristale_pt")

HAnimHumanoid75.addSites(HAnimSite1411)
HAnimSite1412 = x3d.HAnimSite()
HAnimSite1412.setContainerFieldOverride("sites")
HAnimSite1412.setUSE("Joe_l_infraorbitale_pt")

HAnimHumanoid75.addSites(HAnimSite1412)
HAnimSite1413 = x3d.HAnimSite()
HAnimSite1413.setContainerFieldOverride("sites")
HAnimSite1413.setUSE("Joe_r_infraorbitale_pt")

HAnimHumanoid75.addSites(HAnimSite1413)
HAnimSite1414 = x3d.HAnimSite()
HAnimSite1414.setContainerFieldOverride("sites")
HAnimSite1414.setUSE("Joe_l_knee_crease_pt")

HAnimHumanoid75.addSites(HAnimSite1414)
HAnimSite1415 = x3d.HAnimSite()
HAnimSite1415.setContainerFieldOverride("sites")
HAnimSite1415.setUSE("Joe_r_knee_crease_pt")

HAnimHumanoid75.addSites(HAnimSite1415)
HAnimSite1416 = x3d.HAnimSite()
HAnimSite1416.setContainerFieldOverride("sites")
HAnimSite1416.setUSE("Joe_l_lateral_malleolus_pt")

HAnimHumanoid75.addSites(HAnimSite1416)
HAnimSite1417 = x3d.HAnimSite()
HAnimSite1417.setContainerFieldOverride("sites")
HAnimSite1417.setUSE("Joe_r_lateral_malleolus_pt")

HAnimHumanoid75.addSites(HAnimSite1417)
HAnimSite1418 = x3d.HAnimSite()
HAnimSite1418.setContainerFieldOverride("sites")
HAnimSite1418.setUSE("Joe_l_medial_malleolus_pt")

HAnimHumanoid75.addSites(HAnimSite1418)
HAnimSite1419 = x3d.HAnimSite()
HAnimSite1419.setContainerFieldOverride("sites")
HAnimSite1419.setUSE("Joe_r_medial_malleolus_pt")

HAnimHumanoid75.addSites(HAnimSite1419)
HAnimSite1420 = x3d.HAnimSite()
HAnimSite1420.setContainerFieldOverride("sites")
HAnimSite1420.setUSE("Joe_l_metacarpal_phalanx_2_pt")

HAnimHumanoid75.addSites(HAnimSite1420)
HAnimSite1421 = x3d.HAnimSite()
HAnimSite1421.setContainerFieldOverride("sites")
HAnimSite1421.setUSE("Joe_r_metacarpal_phalanx_2_pt")

HAnimHumanoid75.addSites(HAnimSite1421)
HAnimSite1422 = x3d.HAnimSite()
HAnimSite1422.setContainerFieldOverride("sites")
HAnimSite1422.setUSE("Joe_l_metacarpal_phalanx_5_pt")

HAnimHumanoid75.addSites(HAnimSite1422)
HAnimSite1423 = x3d.HAnimSite()
HAnimSite1423.setContainerFieldOverride("sites")
HAnimSite1423.setUSE("Joe_r_metacarpal_phalanx_5_pt")

HAnimHumanoid75.addSites(HAnimSite1423)
HAnimSite1424 = x3d.HAnimSite()
HAnimSite1424.setContainerFieldOverride("sites")
HAnimSite1424.setUSE("Joe_l_metatarsal_phalanx_1_pt")

HAnimHumanoid75.addSites(HAnimSite1424)
HAnimSite1425 = x3d.HAnimSite()
HAnimSite1425.setContainerFieldOverride("sites")
HAnimSite1425.setUSE("Joe_r_metatarsal_phalanx_1_pt")

HAnimHumanoid75.addSites(HAnimSite1425)
HAnimSite1426 = x3d.HAnimSite()
HAnimSite1426.setContainerFieldOverride("sites")
HAnimSite1426.setUSE("Joe_l_metatarsal_phalanx_5_pt")

HAnimHumanoid75.addSites(HAnimSite1426)
HAnimSite1427 = x3d.HAnimSite()
HAnimSite1427.setContainerFieldOverride("sites")
HAnimSite1427.setUSE("Joe_r_metatarsal_phalanx_5_pt")

HAnimHumanoid75.addSites(HAnimSite1427)
HAnimSite1428 = x3d.HAnimSite()
HAnimSite1428.setContainerFieldOverride("sites")
HAnimSite1428.setUSE("Joe_l_neck_base_pt")

HAnimHumanoid75.addSites(HAnimSite1428)
HAnimSite1429 = x3d.HAnimSite()
HAnimSite1429.setContainerFieldOverride("sites")
HAnimSite1429.setUSE("Joe_r_neck_base_pt")

HAnimHumanoid75.addSites(HAnimSite1429)
HAnimSite1430 = x3d.HAnimSite()
HAnimSite1430.setContainerFieldOverride("sites")
HAnimSite1430.setUSE("Joe_l_olecranon_pt")

HAnimHumanoid75.addSites(HAnimSite1430)
HAnimSite1431 = x3d.HAnimSite()
HAnimSite1431.setContainerFieldOverride("sites")
HAnimSite1431.setUSE("Joe_r_olecranon_pt")

HAnimHumanoid75.addSites(HAnimSite1431)
HAnimSite1432 = x3d.HAnimSite()
HAnimSite1432.setContainerFieldOverride("sites")
HAnimSite1432.setUSE("Joe_l_psis_pt")

HAnimHumanoid75.addSites(HAnimSite1432)
HAnimSite1433 = x3d.HAnimSite()
HAnimSite1433.setContainerFieldOverride("sites")
HAnimSite1433.setUSE("Joe_r_psis_pt")

HAnimHumanoid75.addSites(HAnimSite1433)
HAnimSite1434 = x3d.HAnimSite()
HAnimSite1434.setContainerFieldOverride("sites")
HAnimSite1434.setUSE("Joe_l_radial_styloid_pt")

HAnimHumanoid75.addSites(HAnimSite1434)
HAnimSite1435 = x3d.HAnimSite()
HAnimSite1435.setContainerFieldOverride("sites")
HAnimSite1435.setUSE("Joe_r_radial_styloid_pt")

HAnimHumanoid75.addSites(HAnimSite1435)
HAnimSite1436 = x3d.HAnimSite()
HAnimSite1436.setContainerFieldOverride("sites")
HAnimSite1436.setUSE("Joe_l_radiale_pt")

HAnimHumanoid75.addSites(HAnimSite1436)
HAnimSite1437 = x3d.HAnimSite()
HAnimSite1437.setContainerFieldOverride("sites")
HAnimSite1437.setUSE("Joe_r_radiale_pt")

HAnimHumanoid75.addSites(HAnimSite1437)
HAnimSite1438 = x3d.HAnimSite()
HAnimSite1438.setContainerFieldOverride("sites")
HAnimSite1438.setUSE("Joe_l_rib10_pt")

HAnimHumanoid75.addSites(HAnimSite1438)
HAnimSite1439 = x3d.HAnimSite()
HAnimSite1439.setContainerFieldOverride("sites")
HAnimSite1439.setUSE("Joe_r_rib10_pt")

HAnimHumanoid75.addSites(HAnimSite1439)
HAnimSite1440 = x3d.HAnimSite()
HAnimSite1440.setContainerFieldOverride("sites")
HAnimSite1440.setUSE("Joe_l_sphyrion_pt")

HAnimHumanoid75.addSites(HAnimSite1440)
HAnimSite1441 = x3d.HAnimSite()
HAnimSite1441.setContainerFieldOverride("sites")
HAnimSite1441.setUSE("Joe_r_sphyrion_pt")

HAnimHumanoid75.addSites(HAnimSite1441)
HAnimSite1442 = x3d.HAnimSite()
HAnimSite1442.setContainerFieldOverride("sites")
HAnimSite1442.setUSE("Joe_l_tarsal_distal_phalanx_2_pt")

HAnimHumanoid75.addSites(HAnimSite1442)
HAnimSite1443 = x3d.HAnimSite()
HAnimSite1443.setContainerFieldOverride("sites")
HAnimSite1443.setUSE("Joe_r_tarsal_distal_phalanx_2_pt")

HAnimHumanoid75.addSites(HAnimSite1443)
HAnimSite1444 = x3d.HAnimSite()
HAnimSite1444.setContainerFieldOverride("sites")
HAnimSite1444.setUSE("Joe_l_thelion_pt")

HAnimHumanoid75.addSites(HAnimSite1444)
HAnimSite1445 = x3d.HAnimSite()
HAnimSite1445.setContainerFieldOverride("sites")
HAnimSite1445.setUSE("Joe_r_thelion_pt")

HAnimHumanoid75.addSites(HAnimSite1445)
HAnimSite1446 = x3d.HAnimSite()
HAnimSite1446.setContainerFieldOverride("sites")
HAnimSite1446.setUSE("Joe_l_tragion_pt")

HAnimHumanoid75.addSites(HAnimSite1446)
HAnimSite1447 = x3d.HAnimSite()
HAnimSite1447.setContainerFieldOverride("sites")
HAnimSite1447.setUSE("Joe_r_tragion_pt")

HAnimHumanoid75.addSites(HAnimSite1447)
HAnimSite1448 = x3d.HAnimSite()
HAnimSite1448.setContainerFieldOverride("sites")
HAnimSite1448.setUSE("Joe_l_trochanterion_pt")

HAnimHumanoid75.addSites(HAnimSite1448)
HAnimSite1449 = x3d.HAnimSite()
HAnimSite1449.setContainerFieldOverride("sites")
HAnimSite1449.setUSE("Joe_r_trochanterion_pt")

HAnimHumanoid75.addSites(HAnimSite1449)
HAnimSite1450 = x3d.HAnimSite()
HAnimSite1450.setContainerFieldOverride("sites")
HAnimSite1450.setUSE("Joe_l_ulnar_styloid_pt")

HAnimHumanoid75.addSites(HAnimSite1450)
HAnimSite1451 = x3d.HAnimSite()
HAnimSite1451.setContainerFieldOverride("sites")
HAnimSite1451.setUSE("Joe_r_ulnar_styloid_pt")

HAnimHumanoid75.addSites(HAnimSite1451)

Group74.addChild(HAnimHumanoid75)

Group73.addChild(Group74)

Scene32.addChild(Group73)

Scene32.addComments(x3d.CommentsBlock("""expected best practice: EXPORT AS='fileName' for clarity"""))
EXPORT1452 = x3d.EXPORT()
EXPORT1452.setAS("JoeSkeletonSkinSite")
EXPORT1452.setLocalDEF("Joe_Human")

Scene32.addChild(EXPORT1452)

X3D0.setScene(Scene32)
X3D0.toFileX3D("../data/JoeSkeletonSkinSite.new.graalpy.x3d")
X3D0.toFileJSON("../data/JoeSkeletonSkinSite.new.graalpy.x3dj")
