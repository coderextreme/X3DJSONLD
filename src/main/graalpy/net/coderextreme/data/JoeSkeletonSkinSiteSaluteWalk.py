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
meta3.setContent("JoeSkeletonSkinSaluteSiteWalk.x3d")

head1.addMeta(meta3)
meta4 = x3d.meta()
meta4.setName("description")
meta4.setContent("Comprehensive example showing skeleton, skin, sites and interpolator animation together.")

head1.addMeta(meta4)
meta5 = x3d.meta()
meta5.setName("creator")
meta5.setContent("Joe D. Williams")

head1.addMeta(meta5)
meta6 = x3d.meta()
meta6.setName("created")
meta6.setContent("9 January 2004")

head1.addMeta(meta6)
meta7 = x3d.meta()
meta7.setName("translated")
meta7.setContent("4 December 2022")

head1.addMeta(meta7)
meta8 = x3d.meta()
meta8.setName("modified")
meta8.setContent("Tue, 09 Sep 2025 19:38:38 GMT")

head1.addMeta(meta8)
meta9 = x3d.meta()
meta9.setName("warning")
meta9.setContent("Under development, numerous errors and warnings")

head1.addMeta(meta9)
meta10 = x3d.meta()
meta10.setName("TODO")
meta10.setContent("This is an HAnimV1 loa model, might need to convert to X3D4 to note loa value")

head1.addMeta(meta10)
meta11 = x3d.meta()
meta11.setName("TODO")
meta11.setContent("Provide feedback to tovrmlx3d converter")

head1.addMeta(meta11)
meta12 = x3d.meta()
meta12.setName("TODO")
meta12.setContent("HAnimJoint cannot contain X3DChildNode elements, only HAnimJoint HAnimSegment HAnimSite - improve diagnostics.")

head1.addMeta(meta12)
meta13 = x3d.meta()
meta13.setName("TODO")
meta13.setContent("ensure name prefix \"Joe_\" applied to all contained DEF values (not name field), perhaps correction automatically applied by X3DTidy")

head1.addMeta(meta13)
meta14 = x3d.meta()
meta14.setName("reference")
meta14.setContent("JoeSkeletonSkinSaluteSiteWalk.original.x3dv")

head1.addMeta(meta14)
meta15 = x3d.meta()
meta15.setName("reference")
meta15.setContent("JoeSkeletonSkinSaluteSiteWalk.modified1.x3dv")

head1.addMeta(meta15)
meta16 = x3d.meta()
meta16.setName("reference")
meta16.setContent("JoeSkeletonSkinSaluteSiteWalk.modified2.x3dv")

head1.addMeta(meta16)
meta17 = x3d.meta()
meta17.setName("reference")
meta17.setContent("https://castle-engine.io/view3dscene.php#section_converting")

head1.addMeta(meta17)
meta18 = x3d.meta()
meta18.setName("Image")
meta18.setContent("JoeSkeletonSkinSiteSaluteWalk_X3D-Edit.png")

head1.addMeta(meta18)
meta19 = x3d.meta()
meta19.setName("Image")
meta19.setContent("JoeSkeletonSkinSiteSaluteWalk_composite.2023JAN2.png")

head1.addMeta(meta19)
meta20 = x3d.meta()
meta20.setName("Image")
meta20.setContent("JoeSkeletonSkinSiteSaluteWalk_view3dscene.png")

head1.addMeta(meta20)
meta21 = x3d.meta()
meta21.setName("Image")
meta21.setContent("JoeSkeletonSkinSiteSaluteWalk_X_ITE.png")

head1.addMeta(meta21)
meta22 = x3d.meta()
meta22.setName("Image")
meta22.setContent("JoeSkeletonSkinSiteSaluteWalk_X3DOM.png")

head1.addMeta(meta22)
meta23 = x3d.meta()
meta23.setName("Image")
meta23.setContent("JoeSkeletonSkinSiteSaluteWalk_H3DViewer.png")

head1.addMeta(meta23)
meta24 = x3d.meta()
meta24.setName("Image")
meta24.setContent("JoeSkeletonSkinSiteSaluteWalk_freeWrl.png")

head1.addMeta(meta24)
meta25 = x3d.meta()
meta25.setName("Image")
meta25.setContent("JoeSkeletonSkinSiteSaluteWalk_Octaga.png")

head1.addMeta(meta25)
meta26 = x3d.meta()
meta26.setName("Image")
meta26.setContent("JoeSkeletonSkinSiteSaluteWalk_vivaty.png")

head1.addMeta(meta26)
meta27 = x3d.meta()
meta27.setName("drawing")
meta27.setContent("JoeSkeletonSkinSiteSaluteWalk_composite.vsdx")

head1.addMeta(meta27)
meta28 = x3d.meta()
meta28.setName("generator")
meta28.setContent("tovrmlx3d, https://castle-engine.io/convert.php")

head1.addMeta(meta28)
meta29 = x3d.meta()
meta29.setName("generator")
meta29.setContent("X3D-Edit 4.0, https://www.web3d.org/x3d/tools/X3D-Edit")

head1.addMeta(meta29)
meta30 = x3d.meta()
meta30.setName("generator")
meta30.setContent("x3d-tidy V2.2.1, https://www.npmjs.com/package/x3d-tidy")

head1.addMeta(meta30)
meta31 = x3d.meta()
meta31.setName("translator")
meta31.setContent("Michalis Kamburelis")

head1.addMeta(meta31)
meta32 = x3d.meta()
meta32.setName("translator")
meta32.setContent("Don Brutzman")

head1.addMeta(meta32)

X3D0.setHead(head1)
Scene33 = x3d.Scene()
WorldInfo34 = x3d.WorldInfo()
WorldInfo34.setTitle("HAnim V1 LOA3 Skeleton Joint centers and Site translations Adapted for approximatrion of ManGLoss Site Location Example and HANIM 200x Default Joint Centers, LOA3")
WorldInfo34.setInfo(["By Joe for Joe"])

Scene33.addChild(WorldInfo34)
WorldInfo35 = x3d.WorldInfo()
WorldInfo35.setTitle("HAnim V1 LOA3 Skeleton Joint centers Adapted for approximatrion of ManGLoss Site Location Example and ANIM 200x Default Joint Centers, LOA3")
WorldInfo35.setInfo(["By Joe for Joe"])

Scene33.addChild(WorldInfo35)
NavigationInfo36 = x3d.NavigationInfo()
NavigationInfo36.setDEF("HeadlightOnRevealsSkinTextureAndColors")

Scene33.addChild(NavigationInfo36)
Background37 = x3d.Background()
Background37.setSkyColor(x3d.doubleToFloat([0,0,0.1]))
Background37.setGroundAngle(x3d.doubleToFloat([1.57]))
Background37.setGroundColor(x3d.doubleToFloat([0,0.1,0,0,0.1,0]))

Scene33.addChild(Background37)
Transform38 = x3d.Transform()
Transform38.setDEF("cordsysfloor")
Transform38.setScale(x3d.doubleToFloat([0.175,0.175,0.175]))
Inline39 = x3d.Inline()
Inline39.setDEF("CoordinateAxes")
Inline39.setUrl(["../../X3dForWebAuthors/Chapter03Grouping/CoordinateAxes.x3d","../../../Savage/Tools/Authoring/CoordinateAxes.x3d","https://www.web3d.org/x3d/content/examples/X3dForWebAuthors/Chapter03Grouping/CoordinateAxes.x3d","https://savage.nps.edu/Savage/Tools/Authoring/CoordinateAxes.x3d","../../X3dForWebAuthors/Chapter03Grouping/CoordinateAxes.wrl","../../../Savage/Tools/Authoring/CoordinateAxes.wrl","https://www.web3d.org/x3d/content/examples/X3dForWebAuthors/Chapter03Grouping/CoordinateAxes.wrl","https://savage.nps.edu/Savage/Tools/Authoring/CoordinateAxes.wrl"])

Transform38.addChild(Inline39)

Scene33.addChild(Transform38)
Group40 = x3d.Group()
Group40.setDEF("ViewpointGroup")
Viewpoint41 = x3d.Viewpoint()
Viewpoint41.setDescription("Front Up View")
Viewpoint41.setPosition(x3d.doubleToFloat([-1,2,2.5]))
Viewpoint41.setOrientation(x3d.doubleToFloat([-1,-1,0,0.55]))

Group40.addChild(Viewpoint41)
Viewpoint42 = x3d.Viewpoint()
Viewpoint42.setDescription("From Left View")
Viewpoint42.setPosition(x3d.doubleToFloat([-2.5,1.5,0]))
Viewpoint42.setOrientation(x3d.doubleToFloat([0.3,1,0,-1.57]))

Group40.addChild(Viewpoint42)
Viewpoint43 = x3d.Viewpoint()
Viewpoint43.setDescription("Front Mid View")
Viewpoint43.setPosition(x3d.doubleToFloat([0,0.5,1.25]))

Group40.addChild(Viewpoint43)
Viewpoint44 = x3d.Viewpoint()
Viewpoint44.setDescription("Front Feet View")
Viewpoint44.setPosition(x3d.doubleToFloat([0,0,0.75]))

Group40.addChild(Viewpoint44)
Viewpoint45 = x3d.Viewpoint()
Viewpoint45.setDescription("From Right View")
Viewpoint45.setPosition(x3d.doubleToFloat([1,1,0]))
Viewpoint45.setOrientation(x3d.doubleToFloat([0,1,0,1.57]))

Group40.addChild(Viewpoint45)
Viewpoint46 = x3d.Viewpoint()
Viewpoint46.setDescription("Front Head View")
Viewpoint46.setPosition(x3d.doubleToFloat([0,1.65,0.75]))
Viewpoint46.setCenterOfRotation(x3d.doubleToFloat([0,1.65,0]))

Group40.addChild(Viewpoint46)
Viewpoint47 = x3d.Viewpoint()
Viewpoint47.setDescription("Front Mid View")
Viewpoint47.setPosition(x3d.doubleToFloat([0,1,1.75]))

Group40.addChild(Viewpoint47)
Viewpoint48 = x3d.Viewpoint()
Viewpoint48.setDescription("Rear View")
Viewpoint48.setPosition(x3d.doubleToFloat([0,1.5,-4]))
Viewpoint48.setOrientation(x3d.doubleToFloat([0,1,0,3.14]))

Group40.addChild(Viewpoint48)
Viewpoint49 = x3d.Viewpoint()
Viewpoint49.setDescription("Top View")
Viewpoint49.setPosition(x3d.doubleToFloat([0,4,0]))
Viewpoint49.setOrientation(x3d.doubleToFloat([1,0,0,-1.57]))

Group40.addChild(Viewpoint49)
Viewpoint50 = x3d.Viewpoint()
Viewpoint50.setDescription("Bottom View")
Viewpoint50.setPosition(x3d.doubleToFloat([0,-4,0]))
Viewpoint50.setOrientation(x3d.doubleToFloat([1,0,0,1.57]))

Group40.addChild(Viewpoint50)
Viewpoint51 = x3d.Viewpoint()
Viewpoint51.setDescription("Right View")
Viewpoint51.setPosition(x3d.doubleToFloat([4,1.5,0]))
Viewpoint51.setOrientation(x3d.doubleToFloat([0,1,0,1.57]))

Group40.addChild(Viewpoint51)

Scene33.addChild(Group40)
Group52 = x3d.Group()
Group52.setDEF("VisualizationShapes")
Transform53 = x3d.Transform()
Transform53.setTranslation(x3d.doubleToFloat([0,2.1,0]))
Transform53.setScale(x3d.doubleToFloat([5,5,5]))
Shape54 = x3d.Shape()
Shape54.setDEF("jointbox")
Appearance55 = x3d.Appearance()
Material56 = x3d.Material()
Material56.setAmbientIntensity(0.5)
Material56.setDiffuseColor(x3d.doubleToFloat([0,0,0]))
Material56.setShininess(1)

Appearance55.setMaterial(Material56)

Shape54.setAppearance(Appearance55)
IndexedFaceSet57 = x3d.IndexedFaceSet()
IndexedFaceSet57.setCreaseAngle(0.1)
IndexedFaceSet57.setCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1])
Color58 = x3d.Color()
Color58.setColor(x3d.doubleToFloat([1,0,0,0,0,1,0,1,0,1,1,1,0,1,1,1,1,0]))

IndexedFaceSet57.setColor(Color58)
Coordinate59 = x3d.Coordinate()
Coordinate59.setDEF("boxCoords")
Coordinate59.setPoint(x3d.doubleToFloat([0,0.01,0,-0.01,0,0,0,0,0.0157,0.01,0,0,0,0,-0.01,0,-0.01,0]))

IndexedFaceSet57.setCoord(Coordinate59)

Shape54.setGeometry(IndexedFaceSet57)

Transform53.addChild(Shape54)

Group52.addChild(Transform53)
Transform60 = x3d.Transform()
Transform60.setTranslation(x3d.doubleToFloat([-0.2,0.773,-0.016]))
Transform60.setScale(x3d.doubleToFloat([0.1,0.1,0.1]))
Shape61 = x3d.Shape()
Shape61.setDEF("sitebox")
Appearance62 = x3d.Appearance()
Material63 = x3d.Material()
Material63.setAmbientIntensity(1)
Material63.setDiffuseColor(x3d.doubleToFloat([1,0,0]))
Material63.setSpecularColor(x3d.doubleToFloat([1,0,0]))
Material63.setEmissiveColor(x3d.doubleToFloat([1,0,0]))
Material63.setShininess(0.7)

Appearance62.setMaterial(Material63)

Shape61.setAppearance(Appearance62)
IndexedFaceSet64 = x3d.IndexedFaceSet()
IndexedFaceSet64.setCreaseAngle(0.1)
IndexedFaceSet64.setCoordIndex([0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1])
Coordinate65 = x3d.Coordinate()
Coordinate65.setUSE("boxCoords")

IndexedFaceSet64.setCoord(Coordinate65)

Shape61.setGeometry(IndexedFaceSet64)

Transform60.addChild(Shape61)

Group52.addChild(Transform60)
Transform66 = x3d.Transform()
Transform66.setTranslation(x3d.doubleToFloat([0,0.2,0]))
Transform66.setScale(x3d.doubleToFloat([0.1,0.1,0.1]))
Shape67 = x3d.Shape()
Appearance68 = x3d.Appearance()
Appearance68.setDEF("SegmentLine")
Material69 = x3d.Material()
Material69.setDiffuseColor(x3d.doubleToFloat([0,1,0]))
Material69.setSpecularColor(x3d.doubleToFloat([0,1,0]))
Material69.setEmissiveColor(x3d.doubleToFloat([0,1,0]))

Appearance68.setMaterial(Material69)

Shape67.setAppearance(Appearance68)
IndexedLineSet70 = x3d.IndexedLineSet()
IndexedLineSet70.setCoordIndex([0,1,-1])
Coordinate71 = x3d.Coordinate()
Coordinate71.setPoint(x3d.doubleToFloat([0,0,0,0,0.0001,0]))

IndexedLineSet70.setCoord(Coordinate71)

Shape67.setGeometry(IndexedLineSet70)

Transform66.addChild(Shape67)

Group52.addChild(Transform66)
Transform72 = x3d.Transform()
Transform72.setTranslation(x3d.doubleToFloat([-0.2,0.773,-0.016]))
Transform72.setScale(x3d.doubleToFloat([0.1,0.1,0.1]))
Shape73 = x3d.Shape()
Shape73.setDEF("skinsphere")
Appearance74 = x3d.Appearance()
Material75 = x3d.Material()
Material75.setAmbientIntensity(0.5)
Material75.setDiffuseColor(x3d.doubleToFloat([0,1,0]))
Material75.setSpecularColor(x3d.doubleToFloat([0,1,0]))
Material75.setEmissiveColor(x3d.doubleToFloat([0,1,0]))
Material75.setShininess(1)

Appearance74.setMaterial(Material75)

Shape73.setAppearance(Appearance74)
Sphere76 = x3d.Sphere()
Sphere76.setRadius(0.005)

Shape73.setGeometry(Sphere76)

Transform72.addChild(Shape73)

Group52.addChild(Transform72)

Scene33.addChild(Group52)
Group77 = x3d.Group()
Group77.setDEF("SpecHumanoid")
Group78 = x3d.Group()
Group78.setDEF("JoeISOHumanoid")
HAnimHumanoid79 = x3d.HAnimHumanoid()
HAnimHumanoid79.setDEF("Joe_Human")
HAnimHumanoid79.setName("Human")
HAnimHumanoid79.setInfo(["humanoidVersion=2.0"])
HAnimJoint80 = x3d.HAnimJoint()
HAnimJoint80.setContainerFieldOverride("skeleton")
HAnimJoint80.setDEF("Joe_HumanoidRoot")
HAnimJoint80.setName("humanoid_root")
HAnimJoint80.setTranslation(x3d.doubleToFloat([0,-0.0293965,0]))
HAnimJoint80.setCenter(x3d.doubleToFloat([0,0.875,0]))
HAnimSegment81 = x3d.HAnimSegment()
HAnimSegment81.setDEF("Joe_sacrum")
HAnimSegment81.setName("sacrum")
Transform82 = x3d.Transform()
Transform82.setTranslation(x3d.doubleToFloat([0,0.875,0]))
Shape83 = x3d.Shape()
Shape83.setUSE("jointbox")

Transform82.addChild(Shape83)

HAnimSegment81.addChild(Transform82)
Shape84 = x3d.Shape()
Appearance85 = x3d.Appearance()
Appearance85.setUSE("SegmentLine")

Shape84.setAppearance(Appearance85)
IndexedLineSet86 = x3d.IndexedLineSet()
IndexedLineSet86.setCoordIndex([0,1,-1])
Coordinate87 = x3d.Coordinate()
Coordinate87.setPoint(x3d.doubleToFloat([0,0.875,0,0,0.92,0]))

IndexedLineSet86.setCoord(Coordinate87)

Shape84.setGeometry(IndexedLineSet86)

HAnimSegment81.addChild(Shape84)
Transform88 = x3d.Transform()
Transform88.setTranslation(x3d.doubleToFloat([0,0.92,0.08]))
Shape89 = x3d.Shape()
Shape89.setUSE("skinsphere")

Transform88.addChild(Shape89)

HAnimSegment81.addChild(Transform88)
Transform90 = x3d.Transform()
Transform90.setTranslation(x3d.doubleToFloat([0,0.87,-0.022]))
Shape91 = x3d.Shape()
Shape91.setUSE("skinsphere")

Transform90.addChild(Shape91)

HAnimSegment81.addChild(Transform90)

HAnimJoint80.addChild(HAnimSegment81)
HAnimJoint92 = x3d.HAnimJoint()
HAnimJoint92.setDEF("Joe_sacroiliac")
HAnimJoint92.setName("sacroiliac")
HAnimJoint92.setCenter(x3d.doubleToFloat([0,0.92,0]))
HAnimJoint92.setSkinCoordIndex([17,19,20,21,22,23,26,27,73,82,89,91,93])
HAnimJoint92.setSkinCoordWeight(x3d.doubleToFloat([1,1,1,1,1,1,1,1,1,1,0.35,0.35,1]))
HAnimSegment93 = x3d.HAnimSegment()
HAnimSegment93.setDEF("Joe_pelvis")
HAnimSegment93.setName("pelvis")
Transform94 = x3d.Transform()
Transform94.setTranslation(x3d.doubleToFloat([0,0.9149,0.0016]))
Transform95 = x3d.Transform()
Shape96 = x3d.Shape()
Shape96.setUSE("jointbox")

Transform95.addChild(Shape96)

Transform94.addChild(Transform95)

HAnimSegment93.addChild(Transform94)
Shape97 = x3d.Shape()
Appearance98 = x3d.Appearance()
Appearance98.setUSE("SegmentLine")

Shape97.setAppearance(Appearance98)
IndexedLineSet99 = x3d.IndexedLineSet()
IndexedLineSet99.setCoordIndex([0,1,-1,0,2,-1,0,3,-1])
Coordinate100 = x3d.Coordinate()
Coordinate100.setPoint(x3d.doubleToFloat([0,0.92,0,0.0961,0.9124,0,-0.095,0.9171,0.0029,0,1.045,-0.095]))

IndexedLineSet99.setCoord(Coordinate100)

Shape97.setGeometry(IndexedLineSet99)

HAnimSegment93.addChild(Shape97)
HAnimSite101 = x3d.HAnimSite()
HAnimSite101.setDEF("Joe_l_iliocristale")
HAnimSite101.setName("l_iliocristale")
HAnimSite101.setTranslation(x3d.doubleToFloat([0.1425,1.065,0.0033]))
Shape102 = x3d.Shape()
Shape102.setUSE("sitebox")

HAnimSite101.addChild(Shape102)

HAnimSegment93.addChild(HAnimSite101)
HAnimSite103 = x3d.HAnimSite()
HAnimSite103.setDEF("Joe_l_trochanterion")
HAnimSite103.setName("l_trochanterion")
HAnimSite103.setTranslation(x3d.doubleToFloat([0.15,0.9,-0.01]))
Shape104 = x3d.Shape()
Shape104.setUSE("sitebox")

HAnimSite103.addChild(Shape104)

HAnimSegment93.addChild(HAnimSite103)
HAnimSite105 = x3d.HAnimSite()
HAnimSite105.setDEF("Joe_r_iliocristale")
HAnimSite105.setName("r_iliocristale")
HAnimSite105.setTranslation(x3d.doubleToFloat([-0.1425,1.065,0.0033]))
Shape106 = x3d.Shape()
Shape106.setUSE("sitebox")

HAnimSite105.addChild(Shape106)

HAnimSegment93.addChild(HAnimSite105)
HAnimSite107 = x3d.HAnimSite()
HAnimSite107.setDEF("Joe_r_trochanterion")
HAnimSite107.setName("r_trochanterion")
HAnimSite107.setTranslation(x3d.doubleToFloat([-0.15,0.9,-0.01]))
Shape108 = x3d.Shape()
Shape108.setUSE("sitebox")

HAnimSite107.addChild(Shape108)

HAnimSegment93.addChild(HAnimSite107)
HAnimSite109 = x3d.HAnimSite()
HAnimSite109.setDEF("Joe_l_asis")
HAnimSite109.setName("l_asis")
HAnimSite109.setTranslation(x3d.doubleToFloat([0.0935,1.03,0.075]))
Shape110 = x3d.Shape()
Shape110.setUSE("sitebox")

HAnimSite109.addChild(Shape110)

HAnimSegment93.addChild(HAnimSite109)
HAnimSite111 = x3d.HAnimSite()
HAnimSite111.setDEF("Joe_r_asis")
HAnimSite111.setName("r_asis")
HAnimSite111.setTranslation(x3d.doubleToFloat([-0.0935,1.03,0.075]))
Shape112 = x3d.Shape()
Shape112.setUSE("sitebox")

HAnimSite111.addChild(Shape112)

HAnimSegment93.addChild(HAnimSite111)
HAnimSite113 = x3d.HAnimSite()
HAnimSite113.setDEF("Joe_l_psis")
HAnimSite113.setName("l_psis")
HAnimSite113.setTranslation(x3d.doubleToFloat([0.0773,1.019,-0.12]))
Shape114 = x3d.Shape()
Shape114.setUSE("sitebox")

HAnimSite113.addChild(Shape114)

HAnimSegment93.addChild(HAnimSite113)
HAnimSite115 = x3d.HAnimSite()
HAnimSite115.setDEF("Joe_r_psis")
HAnimSite115.setName("r_psis")
HAnimSite115.setTranslation(x3d.doubleToFloat([-0.0773,1.019,-0.12]))
Shape116 = x3d.Shape()
Shape116.setUSE("sitebox")

HAnimSite115.addChild(Shape116)

HAnimSegment93.addChild(HAnimSite115)
HAnimSite117 = x3d.HAnimSite()
HAnimSite117.setDEF("Joe_floormarker")
HAnimSite117.setName("floormarker")
Transform118 = x3d.Transform()
Transform118.setScale(x3d.doubleToFloat([3,3,3]))
Shape119 = x3d.Shape()
Shape119.setUSE("sitebox")

Transform118.addChild(Shape119)

HAnimSite117.addChild(Transform118)

HAnimSegment93.addChild(HAnimSite117)
HAnimSite120 = x3d.HAnimSite()
HAnimSite120.setDEF("Joe_crotch")
HAnimSite120.setName("crotch")
HAnimSite120.setTranslation(x3d.doubleToFloat([0,0.87,-0.022]))
Shape121 = x3d.Shape()
Shape121.setUSE("sitebox")

HAnimSite120.addChild(Shape121)

HAnimSegment93.addChild(HAnimSite120)

HAnimJoint92.addChild(HAnimSegment93)
HAnimJoint122 = x3d.HAnimJoint()
HAnimJoint122.setDEF("Joe_l_hip")
HAnimJoint122.setName("l_hip")
HAnimJoint122.setRotation(x3d.doubleToFloat([-0.997243499192129,0.0195458722844272,0.0715776654808345,0.536920945834996]))
HAnimJoint122.setCenter(x3d.doubleToFloat([0.1,0.92,0]))
HAnimJoint122.setSkinCoordIndex([89,90,94,95,96,97])
HAnimJoint122.setSkinCoordWeight(x3d.doubleToFloat([0.65,1,1,1,1,1]))
HAnimSegment123 = x3d.HAnimSegment()
HAnimSegment123.setDEF("Joe_l_thigh")
HAnimSegment123.setName("l_thigh")
Transform124 = x3d.Transform()
Transform124.setTranslation(x3d.doubleToFloat([0.1,0.92,0]))
Shape125 = x3d.Shape()
Shape125.setUSE("jointbox")

Transform124.addChild(Shape125)

HAnimSegment123.addChild(Transform124)
Shape126 = x3d.Shape()
Appearance127 = x3d.Appearance()
Appearance127.setUSE("SegmentLine")

Shape126.setAppearance(Appearance127)
IndexedLineSet128 = x3d.IndexedLineSet()
IndexedLineSet128.setCoordIndex([0,1,-1])
Coordinate129 = x3d.Coordinate()
Coordinate129.setPoint(x3d.doubleToFloat([0.1,0.92,0,0.115,0.466,0]))

IndexedLineSet128.setCoord(Coordinate129)

Shape126.setGeometry(IndexedLineSet128)

HAnimSegment123.addChild(Shape126)
Transform130 = x3d.Transform()
Transform130.setTranslation(x3d.doubleToFloat([0.1,0.9,0.0775]))
Shape131 = x3d.Shape()
Shape131.setUSE("skinsphere")

Transform130.addChild(Shape131)

HAnimSegment123.addChild(Transform130)
Transform132 = x3d.Transform()
Transform132.setTranslation(x3d.doubleToFloat([0.079,0.92,-0.14]))
Shape133 = x3d.Shape()
Shape133.setUSE("skinsphere")

Transform132.addChild(Shape133)

HAnimSegment123.addChild(Transform132)
Transform134 = x3d.Transform()
Transform134.setTranslation(x3d.doubleToFloat([0.171,0.65,0]))
Shape135 = x3d.Shape()
Shape135.setUSE("skinsphere")

Transform134.addChild(Shape135)

HAnimSegment123.addChild(Transform134)
Transform136 = x3d.Transform()
Transform136.setTranslation(x3d.doubleToFloat([0.02,0.65,0]))
Shape137 = x3d.Shape()
Shape137.setUSE("skinsphere")

Transform136.addChild(Shape137)

HAnimSegment123.addChild(Transform136)
Transform138 = x3d.Transform()
Transform138.setTranslation(x3d.doubleToFloat([0.1,0.65,-0.08]))
Shape139 = x3d.Shape()
Shape139.setUSE("skinsphere")

Transform138.addChild(Shape139)

HAnimSegment123.addChild(Transform138)
Transform140 = x3d.Transform()
Transform140.setTranslation(x3d.doubleToFloat([0.1,0.65,0.07]))
Shape141 = x3d.Shape()
Shape141.setUSE("skinsphere")

Transform140.addChild(Shape141)

HAnimSegment123.addChild(Transform140)
HAnimSite142 = x3d.HAnimSite()
HAnimSite142.setDEF("Joe_l_knee_crease")
HAnimSite142.setName("l_knee_crease")
HAnimSite142.setTranslation(x3d.doubleToFloat([0.115,0.466,-0.055]))
Shape143 = x3d.Shape()
Shape143.setUSE("sitebox")

HAnimSite142.addChild(Shape143)

HAnimSegment123.addChild(HAnimSite142)
HAnimSite144 = x3d.HAnimSite()
HAnimSite144.setDEF("Joe_l_femoral_lateral_epicn")
HAnimSite144.setName("l_femoral_lateral_epicn")
HAnimSite144.setTranslation(x3d.doubleToFloat([0.17,0.466,0]))
Shape145 = x3d.Shape()
Shape145.setUSE("sitebox")

HAnimSite144.addChild(Shape145)

HAnimSegment123.addChild(HAnimSite144)
HAnimSite146 = x3d.HAnimSite()
HAnimSite146.setDEF("Joe_l_femoral_medial_epicn")
HAnimSite146.setName("l_femoral_medial_epicn")
HAnimSite146.setTranslation(x3d.doubleToFloat([0.05,0.466,0]))
Shape147 = x3d.Shape()
Shape147.setUSE("sitebox")

HAnimSite146.addChild(Shape147)

HAnimSegment123.addChild(HAnimSite146)

HAnimJoint122.addChild(HAnimSegment123)
HAnimJoint148 = x3d.HAnimJoint()
HAnimJoint148.setDEF("Joe_l_knee")
HAnimJoint148.setName("l_knee")
HAnimJoint148.setRotation(x3d.doubleToFloat([1.00000000000001,0,0,0.224421281773429]))
HAnimJoint148.setCenter(x3d.doubleToFloat([0.115,0.466,0]))
HAnimJoint148.setSkinCoordIndex([334,335,336,337,338,339,340,341])
HAnimJoint148.setSkinCoordWeight(x3d.doubleToFloat([1,1,1,1,1,1,1,1]))
HAnimSegment149 = x3d.HAnimSegment()
HAnimSegment149.setDEF("Joe_l_calf")
HAnimSegment149.setName("l_calf")
Transform150 = x3d.Transform()
Transform150.setTranslation(x3d.doubleToFloat([0.115,0.466,0]))
Shape151 = x3d.Shape()
Shape151.setUSE("jointbox")

Transform150.addChild(Shape151)

HAnimSegment149.addChild(Transform150)
Shape152 = x3d.Shape()
Appearance153 = x3d.Appearance()
Appearance153.setUSE("SegmentLine")

Shape152.setAppearance(Appearance153)
IndexedLineSet154 = x3d.IndexedLineSet()
IndexedLineSet154.setCoordIndex([0,1,-1])
Coordinate155 = x3d.Coordinate()
Coordinate155.setPoint(x3d.doubleToFloat([0.115,0.466,0,0.1,0.069,0]))

IndexedLineSet154.setCoord(Coordinate155)

Shape152.setGeometry(IndexedLineSet154)

HAnimSegment149.addChild(Shape152)
Transform156 = x3d.Transform()
Transform156.setTranslation(x3d.doubleToFloat([0.115,0.466,0.06]))
Shape157 = x3d.Shape()
Shape157.setUSE("skinsphere")

Transform156.addChild(Shape157)

HAnimSegment149.addChild(Transform156)
Transform158 = x3d.Transform()
Transform158.setTranslation(x3d.doubleToFloat([0.115,0.466,-0.055]))
Shape159 = x3d.Shape()
Shape159.setUSE("skinsphere")

Transform158.addChild(Shape159)

HAnimSegment149.addChild(Transform158)
Transform160 = x3d.Transform()
Transform160.setTranslation(x3d.doubleToFloat([0.17,0.466,0]))
Shape161 = x3d.Shape()
Shape161.setUSE("skinsphere")

Transform160.addChild(Shape161)

HAnimSegment149.addChild(Transform160)
Transform162 = x3d.Transform()
Transform162.setTranslation(x3d.doubleToFloat([0.05,0.466,0]))
Shape163 = x3d.Shape()
Shape163.setUSE("skinsphere")

Transform162.addChild(Shape163)

HAnimSegment149.addChild(Transform162)
Transform164 = x3d.Transform()
Transform164.setTranslation(x3d.doubleToFloat([0.17,0.3,0]))
Shape165 = x3d.Shape()
Shape165.setUSE("skinsphere")

Transform164.addChild(Shape165)

HAnimSegment149.addChild(Transform164)
Transform166 = x3d.Transform()
Transform166.setTranslation(x3d.doubleToFloat([0.06,0.3,0]))
Shape167 = x3d.Shape()
Shape167.setUSE("skinsphere")

Transform166.addChild(Shape167)

HAnimSegment149.addChild(Transform166)
Transform168 = x3d.Transform()
Transform168.setTranslation(x3d.doubleToFloat([0.1,0.3,-0.05]))
Shape169 = x3d.Shape()
Shape169.setUSE("skinsphere")

Transform168.addChild(Shape169)

HAnimSegment149.addChild(Transform168)
Transform170 = x3d.Transform()
Transform170.setTranslation(x3d.doubleToFloat([0.1,0.3,0.05]))
Shape171 = x3d.Shape()
Shape171.setUSE("skinsphere")

Transform170.addChild(Shape171)

HAnimSegment149.addChild(Transform170)
HAnimSite172 = x3d.HAnimSite()
HAnimSite172.setDEF("Joe_l_lateral_malleolus")
HAnimSite172.setName("l_lateral_malleolus")
HAnimSite172.setTranslation(x3d.doubleToFloat([0.15,0.07,0]))
Shape173 = x3d.Shape()
Shape173.setUSE("sitebox")

HAnimSite172.addChild(Shape173)

HAnimSegment149.addChild(HAnimSite172)
HAnimSite174 = x3d.HAnimSite()
HAnimSite174.setDEF("Joe_l_medial_malleolus")
HAnimSite174.setName("l_medial_malleolus")
HAnimSite174.setTranslation(x3d.doubleToFloat([0.085,0.086,0.0125]))
Shape175 = x3d.Shape()
Shape175.setUSE("sitebox")

HAnimSite174.addChild(Shape175)

HAnimSegment149.addChild(HAnimSite174)

HAnimJoint148.addChild(HAnimSegment149)
HAnimJoint176 = x3d.HAnimJoint()
HAnimJoint176.setDEF("Joe_l_ankle")
HAnimJoint176.setName("l_ankle")
HAnimJoint176.setRotation(x3d.doubleToFloat([-1.00000000000007,0,0,0.0655639608914055]))
HAnimJoint176.setCenter(x3d.doubleToFloat([0.115,0.069,0]))
HAnimJoint176.setSkinCoordIndex([342,343,344,345])
HAnimJoint176.setSkinCoordWeight(x3d.doubleToFloat([1,1,1,1]))
HAnimSegment177 = x3d.HAnimSegment()
HAnimSegment177.setDEF("Joe_l_hindfoot")
HAnimSegment177.setName("l_hindfoot")
Transform178 = x3d.Transform()
Transform178.setTranslation(x3d.doubleToFloat([0.115,0.069,0]))
Shape179 = x3d.Shape()
Shape179.setUSE("jointbox")

Transform178.addChild(Shape179)

HAnimSegment177.addChild(Transform178)
Shape180 = x3d.Shape()
Appearance181 = x3d.Appearance()
Appearance181.setUSE("SegmentLine")

Shape180.setAppearance(Appearance181)
IndexedLineSet182 = x3d.IndexedLineSet()
IndexedLineSet182.setCoordIndex([0,1,-1])
Coordinate183 = x3d.Coordinate()
Coordinate183.setPoint(x3d.doubleToFloat([0.1,0.069,0,0.115,0.031,0.03]))

IndexedLineSet182.setCoord(Coordinate183)

Shape180.setGeometry(IndexedLineSet182)

HAnimSegment177.addChild(Shape180)
Transform184 = x3d.Transform()
Transform184.setTranslation(x3d.doubleToFloat([0.15,0.07,0]))
Shape185 = x3d.Shape()
Shape185.setUSE("skinsphere")

Transform184.addChild(Shape185)

HAnimSegment177.addChild(Transform184)
Transform186 = x3d.Transform()
Transform186.setTranslation(x3d.doubleToFloat([0.085,0.086,0.0125]))
Shape187 = x3d.Shape()
Shape187.setUSE("skinsphere")

Transform186.addChild(Shape187)

HAnimSegment177.addChild(Transform186)
Transform188 = x3d.Transform()
Transform188.setTranslation(x3d.doubleToFloat([0.115,0.069,-0.045]))
Shape189 = x3d.Shape()
Shape189.setUSE("skinsphere")

Transform188.addChild(Shape189)

HAnimSegment177.addChild(Transform188)
Transform190 = x3d.Transform()
Transform190.setTranslation(x3d.doubleToFloat([0.117,0.0975,0.0615]))
Shape191 = x3d.Shape()
Shape191.setUSE("skinsphere")

Transform190.addChild(Shape191)

HAnimSegment177.addChild(Transform190)
HAnimSite192 = x3d.HAnimSite()
HAnimSite192.setDEF("Joe_l_sphyrion")
HAnimSite192.setName("l_sphyrion")
HAnimSite192.setTranslation(x3d.doubleToFloat([0.09,0.056,0.0125]))
Shape193 = x3d.Shape()
Shape193.setUSE("sitebox")

HAnimSite192.addChild(Shape193)

HAnimSegment177.addChild(HAnimSite192)
HAnimSite194 = x3d.HAnimSite()
HAnimSite194.setDEF("Joe_l_calcaneous_post")
HAnimSite194.setName("l_calcaneous_post")
HAnimSite194.setTranslation(x3d.doubleToFloat([0.115,0.04,-0.055]))
Shape195 = x3d.Shape()
Shape195.setUSE("sitebox")

HAnimSite194.addChild(Shape195)

HAnimSegment177.addChild(HAnimSite194)

HAnimJoint176.addChild(HAnimSegment177)
HAnimJoint196 = x3d.HAnimJoint()
HAnimJoint196.setDEF("Joe_l_subtalar")
HAnimJoint196.setName("l_subtalar")
HAnimJoint196.setCenter(x3d.doubleToFloat([0.115,0.031,0.03]))
HAnimJoint196.setSkinCoordIndex([346,347,348,71])
HAnimJoint196.setSkinCoordWeight(x3d.doubleToFloat([1,1,1,1]))
HAnimSegment197 = x3d.HAnimSegment()
HAnimSegment197.setDEF("Joe_l_midproximal")
HAnimSegment197.setName("l_midproximal")
Transform198 = x3d.Transform()
Transform198.setTranslation(x3d.doubleToFloat([0.115,0.031,0.03]))
Shape199 = x3d.Shape()
Shape199.setUSE("jointbox")

Transform198.addChild(Shape199)

HAnimSegment197.addChild(Transform198)
Shape200 = x3d.Shape()
Appearance201 = x3d.Appearance()
Appearance201.setUSE("SegmentLine")

Shape200.setAppearance(Appearance201)
IndexedLineSet202 = x3d.IndexedLineSet()
IndexedLineSet202.setCoordIndex([0,1,-1])
Coordinate203 = x3d.Coordinate()
Coordinate203.setPoint(x3d.doubleToFloat([0.115,0.031,0.03,0.115,0.037,0.09]))

IndexedLineSet202.setCoord(Coordinate203)

Shape200.setGeometry(IndexedLineSet202)

HAnimSegment197.addChild(Shape200)
Transform204 = x3d.Transform()
Transform204.setTranslation(x3d.doubleToFloat([0.1375,0.006,-0.03]))
Shape205 = x3d.Shape()
Shape205.setUSE("skinsphere")

Transform204.addChild(Shape205)

HAnimSegment197.addChild(Transform204)
Transform206 = x3d.Transform()
Transform206.setTranslation(x3d.doubleToFloat([0.095,0.006,-0.03]))
Shape207 = x3d.Shape()
Shape207.setUSE("skinsphere")

Transform206.addChild(Shape207)

HAnimSegment197.addChild(Transform206)
Transform208 = x3d.Transform()
Transform208.setTranslation(x3d.doubleToFloat([0.115,0.015,-0.045]))
Shape209 = x3d.Shape()
Shape209.setUSE("skinsphere")

Transform208.addChild(Shape209)

HAnimSegment197.addChild(Transform208)

HAnimJoint196.addChild(HAnimSegment197)
HAnimJoint210 = x3d.HAnimJoint()
HAnimJoint210.setDEF("Joe_l_midtarsal")
HAnimJoint210.setName("l_midtarsal")
HAnimJoint210.setRotation(x3d.doubleToFloat([1.00000000000005,0,0,6.19381467367623]))
HAnimJoint210.setCenter(x3d.doubleToFloat([0.115,0.037,0.09]))
HAnimJoint210.setSkinCoordIndex([349,350,351,352])
HAnimJoint210.setSkinCoordWeight(x3d.doubleToFloat([1,1,1,1]))
HAnimSegment211 = x3d.HAnimSegment()
HAnimSegment211.setDEF("Joe_l_middistal")
HAnimSegment211.setName("l_middistal")
Transform212 = x3d.Transform()
Transform212.setTranslation(x3d.doubleToFloat([0.115,0.037,0.09]))
Shape213 = x3d.Shape()
Shape213.setUSE("jointbox")

Transform212.addChild(Shape213)

HAnimSegment211.addChild(Transform212)
Shape214 = x3d.Shape()
Appearance215 = x3d.Appearance()
Appearance215.setUSE("SegmentLine")

Shape214.setAppearance(Appearance215)
IndexedLineSet216 = x3d.IndexedLineSet()
IndexedLineSet216.setCoordIndex([0,1,-1])
Coordinate217 = x3d.Coordinate()
Coordinate217.setPoint(x3d.doubleToFloat([0.115,0.037,0.09,0.115,0.02,0.122]))

IndexedLineSet216.setCoord(Coordinate217)

Shape214.setGeometry(IndexedLineSet216)

HAnimSegment211.addChild(Shape214)
Transform218 = x3d.Transform()
Transform218.setTranslation(x3d.doubleToFloat([0.115,0.06,0.1]))
Shape219 = x3d.Shape()
Shape219.setUSE("skinsphere")

Transform218.addChild(Shape219)

HAnimSegment211.addChild(Transform218)
Transform220 = x3d.Transform()
Transform220.setTranslation(x3d.doubleToFloat([0.115,0,0.07]))
Shape221 = x3d.Shape()
Shape221.setUSE("skinsphere")

Transform220.addChild(Shape221)

HAnimSegment211.addChild(Transform220)
Transform222 = x3d.Transform()
Transform222.setTranslation(x3d.doubleToFloat([0.165,0,0.07]))
Shape223 = x3d.Shape()
Shape223.setUSE("skinsphere")

Transform222.addChild(Shape223)

HAnimSegment211.addChild(Transform222)
Transform224 = x3d.Transform()
Transform224.setTranslation(x3d.doubleToFloat([0.095,0,0.07]))
Shape225 = x3d.Shape()
Shape225.setUSE("skinsphere")

Transform224.addChild(Shape225)

HAnimSegment211.addChild(Transform224)
HAnimSite226 = x3d.HAnimSite()
HAnimSite226.setDEF("Joe_l_metatarsal_pha1")
HAnimSite226.setName("l_metatarsal_pha1")
HAnimSite226.setTranslation(x3d.doubleToFloat([0.087,0.01,0.122]))
Shape227 = x3d.Shape()
Shape227.setUSE("sitebox")

HAnimSite226.addChild(Shape227)

HAnimSegment211.addChild(HAnimSite226)

HAnimJoint210.addChild(HAnimSegment211)
HAnimJoint228 = x3d.HAnimJoint()
HAnimJoint228.setDEF("Joe_l_metatarsal")
HAnimJoint228.setName("l_metatarsal")
HAnimJoint228.setRotation(x3d.doubleToFloat([1.00000000000253,0,0,0.0175699446988144]))
HAnimJoint228.setCenter(x3d.doubleToFloat([0.115,0.02,0.122]))
HAnimJoint228.setSkinCoordIndex([353,354,355,356,357,358,359,360,361])
HAnimJoint228.setSkinCoordWeight(x3d.doubleToFloat([1,1,1,1,1,1,1,1,1]))
HAnimSegment229 = x3d.HAnimSegment()
HAnimSegment229.setDEF("Joe_l_forefoot")
HAnimSegment229.setName("l_forefoot")
Transform230 = x3d.Transform()
Transform230.setTranslation(x3d.doubleToFloat([0.115,0.02,0.13]))
Shape231 = x3d.Shape()
Shape231.setUSE("jointbox")

Transform230.addChild(Shape231)

HAnimSegment229.addChild(Transform230)
Shape232 = x3d.Shape()
Appearance233 = x3d.Appearance()
Appearance233.setUSE("SegmentLine")

Shape232.setAppearance(Appearance233)
IndexedLineSet234 = x3d.IndexedLineSet()
IndexedLineSet234.setCoordIndex([0,1,-1])
Coordinate235 = x3d.Coordinate()
Coordinate235.setPoint(x3d.doubleToFloat([0.115,0.02,0.122,0.132,0.013,0.19]))

IndexedLineSet234.setCoord(Coordinate235)

Shape232.setGeometry(IndexedLineSet234)

HAnimSegment229.addChild(Shape232)
Transform236 = x3d.Transform()
Transform236.setTranslation(x3d.doubleToFloat([0.115,0.04,0.13]))
Shape237 = x3d.Shape()
Shape237.setUSE("skinsphere")

Transform236.addChild(Shape237)

HAnimSegment229.addChild(Transform236)
Transform238 = x3d.Transform()
Transform238.setTranslation(x3d.doubleToFloat([0.125,0,0.12]))
Shape239 = x3d.Shape()
Shape239.setUSE("skinsphere")

Transform238.addChild(Shape239)

HAnimSegment229.addChild(Transform238)
Transform240 = x3d.Transform()
Transform240.setTranslation(x3d.doubleToFloat([0.165,0,0.12]))
Shape241 = x3d.Shape()
Shape241.setUSE("skinsphere")

Transform240.addChild(Shape241)

HAnimSegment229.addChild(Transform240)
Transform242 = x3d.Transform()
Transform242.setTranslation(x3d.doubleToFloat([0.087,0,0.122]))
Shape243 = x3d.Shape()
Shape243.setUSE("skinsphere")

Transform242.addChild(Shape243)

HAnimSegment229.addChild(Transform242)
Transform244 = x3d.Transform()
Transform244.setTranslation(x3d.doubleToFloat([0.09,0.012,0.188]))
Shape245 = x3d.Shape()
Shape245.setUSE("skinsphere")

Transform244.addChild(Shape245)

HAnimSegment229.addChild(Transform244)
Transform246 = x3d.Transform()
Transform246.setTranslation(x3d.doubleToFloat([0.11,0.011,0.19]))
Shape247 = x3d.Shape()
Shape247.setUSE("skinsphere")

Transform246.addChild(Shape247)

HAnimSegment229.addChild(Transform246)
Transform248 = x3d.Transform()
Transform248.setTranslation(x3d.doubleToFloat([0.128,0.011,0.185]))
Shape249 = x3d.Shape()
Shape249.setUSE("skinsphere")

Transform248.addChild(Shape249)

HAnimSegment229.addChild(Transform248)
Transform250 = x3d.Transform()
Transform250.setTranslation(x3d.doubleToFloat([0.142,0.011,0.178]))
Shape251 = x3d.Shape()
Shape251.setUSE("skinsphere")

Transform250.addChild(Shape251)

HAnimSegment229.addChild(Transform250)
Transform252 = x3d.Transform()
Transform252.setTranslation(x3d.doubleToFloat([0.154,0.01,0.168]))
Shape253 = x3d.Shape()
Shape253.setUSE("skinsphere")

Transform252.addChild(Shape253)

HAnimSegment229.addChild(Transform252)
HAnimSite254 = x3d.HAnimSite()
HAnimSite254.setDEF("Joe_l_metatarsal_pha5")
HAnimSite254.setName("l_metatarsal_pha5")
HAnimSite254.setTranslation(x3d.doubleToFloat([0.165,0.01,0.12]))
Shape255 = x3d.Shape()
Shape255.setUSE("sitebox")

HAnimSite254.addChild(Shape255)

HAnimSegment229.addChild(HAnimSite254)
HAnimSite256 = x3d.HAnimSite()
HAnimSite256.setDEF("Joe_l_digit2")
HAnimSite256.setName("l_digit2")
HAnimSite256.setTranslation(x3d.doubleToFloat([0.11,0.011,0.19]))
Shape257 = x3d.Shape()
Shape257.setUSE("sitebox")

HAnimSite256.addChild(Shape257)

HAnimSegment229.addChild(HAnimSite256)

HAnimJoint228.addChild(HAnimSegment229)

HAnimJoint210.addChild(HAnimJoint228)

HAnimJoint196.addChild(HAnimJoint210)

HAnimJoint176.addChild(HAnimJoint196)

HAnimJoint148.addChild(HAnimJoint176)

HAnimJoint122.addChild(HAnimJoint148)

HAnimJoint92.addChild(HAnimJoint122)
HAnimJoint258 = x3d.HAnimJoint()
HAnimJoint258.setDEF("Joe_r_hip")
HAnimJoint258.setName("r_hip")
HAnimJoint258.setRotation(x3d.doubleToFloat([0.999396359667701,-0.00306481646315883,-0.0346052479115659,0.222463685925696]))
HAnimJoint258.setCenter(x3d.doubleToFloat([-0.1,0.92,0]))
HAnimJoint258.setSkinCoordIndex([91,92,98,99,100,101])
HAnimJoint258.setSkinCoordWeight(x3d.doubleToFloat([0.65,1,1,1,1,1]))
HAnimSegment259 = x3d.HAnimSegment()
HAnimSegment259.setDEF("Joe_r_thigh")
HAnimSegment259.setName("r_thigh")
Transform260 = x3d.Transform()
Transform260.setTranslation(x3d.doubleToFloat([-0.1,0.92,0]))
Shape261 = x3d.Shape()
Shape261.setUSE("jointbox")

Transform260.addChild(Shape261)

HAnimSegment259.addChild(Transform260)
Shape262 = x3d.Shape()
Appearance263 = x3d.Appearance()
Appearance263.setUSE("SegmentLine")

Shape262.setAppearance(Appearance263)
IndexedLineSet264 = x3d.IndexedLineSet()
IndexedLineSet264.setCoordIndex([0,1,-1])
Coordinate265 = x3d.Coordinate()
Coordinate265.setPoint(x3d.doubleToFloat([-0.1,0.92,0,-0.1,0.4913,0]))

IndexedLineSet264.setCoord(Coordinate265)

Shape262.setGeometry(IndexedLineSet264)

HAnimSegment259.addChild(Shape262)
Transform266 = x3d.Transform()
Transform266.setTranslation(x3d.doubleToFloat([-0.079,0.92,-0.14]))
Shape267 = x3d.Shape()
Shape267.setUSE("skinsphere")

Transform266.addChild(Shape267)

HAnimSegment259.addChild(Transform266)
Transform268 = x3d.Transform()
Transform268.setTranslation(x3d.doubleToFloat([-0.1,0.9,0.075]))
Shape269 = x3d.Shape()
Shape269.setUSE("skinsphere")

Transform268.addChild(Shape269)

HAnimSegment259.addChild(Transform268)
Transform270 = x3d.Transform()
Transform270.setTranslation(x3d.doubleToFloat([-0.171,0.65,0]))
Shape271 = x3d.Shape()
Shape271.setUSE("skinsphere")

Transform270.addChild(Shape271)

HAnimSegment259.addChild(Transform270)
Transform272 = x3d.Transform()
Transform272.setTranslation(x3d.doubleToFloat([-0.02,0.65,0]))
Shape273 = x3d.Shape()
Shape273.setUSE("skinsphere")

Transform272.addChild(Shape273)

HAnimSegment259.addChild(Transform272)
Transform274 = x3d.Transform()
Transform274.setTranslation(x3d.doubleToFloat([-0.1,0.65,-0.08]))
Shape275 = x3d.Shape()
Shape275.setUSE("skinsphere")

Transform274.addChild(Shape275)

HAnimSegment259.addChild(Transform274)
Transform276 = x3d.Transform()
Transform276.setTranslation(x3d.doubleToFloat([-0.1,0.65,0.07]))
Shape277 = x3d.Shape()
Shape277.setUSE("skinsphere")

Transform276.addChild(Shape277)

HAnimSegment259.addChild(Transform276)
HAnimSite278 = x3d.HAnimSite()
HAnimSite278.setDEF("Joe_r_knee_crease")
HAnimSite278.setName("r_knee_crease")
HAnimSite278.setTranslation(x3d.doubleToFloat([-0.115,0.466,-0.055]))
Shape279 = x3d.Shape()
Shape279.setUSE("sitebox")

HAnimSite278.addChild(Shape279)

HAnimSegment259.addChild(HAnimSite278)
HAnimSite280 = x3d.HAnimSite()
HAnimSite280.setDEF("Joe_r_femoral_lateral_epicn")
HAnimSite280.setName("r_femoral_lateral_epicn")
HAnimSite280.setTranslation(x3d.doubleToFloat([-0.17,0.466,0]))
Shape281 = x3d.Shape()
Shape281.setUSE("sitebox")

HAnimSite280.addChild(Shape281)

HAnimSegment259.addChild(HAnimSite280)
HAnimSite282 = x3d.HAnimSite()
HAnimSite282.setDEF("Joe_r_femoral_medial_epicn")
HAnimSite282.setName("r_femoral_medial_epicn")
HAnimSite282.setTranslation(x3d.doubleToFloat([-0.05,0.466,0]))
Shape283 = x3d.Shape()
Shape283.setUSE("sitebox")

HAnimSite282.addChild(Shape283)

HAnimSegment259.addChild(HAnimSite282)

HAnimJoint258.addChild(HAnimSegment259)
HAnimJoint284 = x3d.HAnimJoint()
HAnimJoint284.setDEF("Joe_r_knee")
HAnimJoint284.setName("r_knee")
HAnimJoint284.setRotation(x3d.doubleToFloat([0.999999999999952,0,0,0.086543259681602]))
HAnimJoint284.setCenter(x3d.doubleToFloat([-0.05,0.466,0]))
HAnimJoint284.setSkinCoordIndex([362,363,364,365,366,367,368,369])
HAnimJoint284.setSkinCoordWeight(x3d.doubleToFloat([1,1,1,1,1,1,1,1]))
HAnimSegment285 = x3d.HAnimSegment()
HAnimSegment285.setDEF("Joe_r_calf")
HAnimSegment285.setName("r_calf")
Transform286 = x3d.Transform()
Transform286.setTranslation(x3d.doubleToFloat([-0.1,0.4913,0]))
Shape287 = x3d.Shape()
Shape287.setUSE("jointbox")

Transform286.addChild(Shape287)

HAnimSegment285.addChild(Transform286)
Shape288 = x3d.Shape()
Appearance289 = x3d.Appearance()
Appearance289.setUSE("SegmentLine")

Shape288.setAppearance(Appearance289)
IndexedLineSet290 = x3d.IndexedLineSet()
IndexedLineSet290.setCoordIndex([0,1,-1])
Coordinate291 = x3d.Coordinate()
Coordinate291.setPoint(x3d.doubleToFloat([-0.1,0.4913,0,-0.1,0.0712,0]))

IndexedLineSet290.setCoord(Coordinate291)

Shape288.setGeometry(IndexedLineSet290)

HAnimSegment285.addChild(Shape288)
Transform292 = x3d.Transform()
Transform292.setTranslation(x3d.doubleToFloat([-0.115,0.466,0.06]))
Shape293 = x3d.Shape()
Shape293.setUSE("skinsphere")

Transform292.addChild(Shape293)

HAnimSegment285.addChild(Transform292)
Transform294 = x3d.Transform()
Transform294.setTranslation(x3d.doubleToFloat([-0.115,0.466,-0.055]))
Shape295 = x3d.Shape()
Shape295.setUSE("skinsphere")

Transform294.addChild(Shape295)

HAnimSegment285.addChild(Transform294)
Transform296 = x3d.Transform()
Transform296.setTranslation(x3d.doubleToFloat([-0.17,0.466,0]))
Shape297 = x3d.Shape()
Shape297.setUSE("skinsphere")

Transform296.addChild(Shape297)

HAnimSegment285.addChild(Transform296)
Transform298 = x3d.Transform()
Transform298.setTranslation(x3d.doubleToFloat([-0.05,0.466,0]))
Shape299 = x3d.Shape()
Shape299.setUSE("skinsphere")

Transform298.addChild(Shape299)

HAnimSegment285.addChild(Transform298)
Transform300 = x3d.Transform()
Transform300.setTranslation(x3d.doubleToFloat([-0.17,0.3,0]))
Shape301 = x3d.Shape()
Shape301.setUSE("skinsphere")

Transform300.addChild(Shape301)

HAnimSegment285.addChild(Transform300)
Transform302 = x3d.Transform()
Transform302.setTranslation(x3d.doubleToFloat([-0.06,0.3,0]))
Shape303 = x3d.Shape()
Shape303.setUSE("skinsphere")

Transform302.addChild(Shape303)

HAnimSegment285.addChild(Transform302)
Transform304 = x3d.Transform()
Transform304.setTranslation(x3d.doubleToFloat([-0.1,0.3,-0.05]))
Shape305 = x3d.Shape()
Shape305.setUSE("skinsphere")

Transform304.addChild(Shape305)

HAnimSegment285.addChild(Transform304)
Transform306 = x3d.Transform()
Transform306.setTranslation(x3d.doubleToFloat([-0.1,0.3,0.05]))
Shape307 = x3d.Shape()
Shape307.setUSE("skinsphere")

Transform306.addChild(Shape307)

HAnimSegment285.addChild(Transform306)
HAnimSite308 = x3d.HAnimSite()
HAnimSite308.setDEF("Joe_r_lateral_malleolus")
HAnimSite308.setName("r_lateral_malleolus")
HAnimSite308.setTranslation(x3d.doubleToFloat([-0.15,0.07,0]))
Shape309 = x3d.Shape()
Shape309.setUSE("sitebox")

HAnimSite308.addChild(Shape309)

HAnimSegment285.addChild(HAnimSite308)
HAnimSite310 = x3d.HAnimSite()
HAnimSite310.setDEF("Joe_r_medial_malleolus")
HAnimSite310.setName("r_medial_malleolus")
HAnimSite310.setTranslation(x3d.doubleToFloat([-0.085,0.086,0.0125]))
Shape311 = x3d.Shape()
Shape311.setUSE("sitebox")

HAnimSite310.addChild(Shape311)

HAnimSegment285.addChild(HAnimSite310)

HAnimJoint284.addChild(HAnimSegment285)
HAnimJoint312 = x3d.HAnimJoint()
HAnimJoint312.setDEF("Joe_r_ankle")
HAnimJoint312.setName("r_ankle")
HAnimJoint312.setRotation(x3d.doubleToFloat([-1.00000000000001,0,0,0.337435958789841]))
HAnimJoint312.setCenter(x3d.doubleToFloat([-0.115,0.069,0]))
HAnimJoint312.setSkinCoordIndex([370,371,372,373])
HAnimJoint312.setSkinCoordWeight(x3d.doubleToFloat([1,1,1,1]))
HAnimSegment313 = x3d.HAnimSegment()
HAnimSegment313.setDEF("Joe_r_hindfoot")
HAnimSegment313.setName("r_hindfoot")
Transform314 = x3d.Transform()
Transform314.setTranslation(x3d.doubleToFloat([-0.1,0.0712,0]))
Shape315 = x3d.Shape()
Shape315.setUSE("jointbox")

Transform314.addChild(Shape315)

HAnimSegment313.addChild(Transform314)
Shape316 = x3d.Shape()
Appearance317 = x3d.Appearance()
Appearance317.setUSE("SegmentLine")

Shape316.setAppearance(Appearance317)
IndexedLineSet318 = x3d.IndexedLineSet()
IndexedLineSet318.setCoordIndex([0,1,-1])
Coordinate319 = x3d.Coordinate()
Coordinate319.setPoint(x3d.doubleToFloat([-0.1,0.0712,0,-0.1,0.015,-0.01]))

IndexedLineSet318.setCoord(Coordinate319)

Shape316.setGeometry(IndexedLineSet318)

HAnimSegment313.addChild(Shape316)
Transform320 = x3d.Transform()
Transform320.setTranslation(x3d.doubleToFloat([-0.15,0.07,0]))
Shape321 = x3d.Shape()
Shape321.setUSE("skinsphere")

Transform320.addChild(Shape321)

HAnimSegment313.addChild(Transform320)
Transform322 = x3d.Transform()
Transform322.setTranslation(x3d.doubleToFloat([-0.085,0.086,0.0125]))
Shape323 = x3d.Shape()
Shape323.setUSE("skinsphere")

Transform322.addChild(Shape323)

HAnimSegment313.addChild(Transform322)
Transform324 = x3d.Transform()
Transform324.setTranslation(x3d.doubleToFloat([-0.115,0.069,-0.045]))
Shape325 = x3d.Shape()
Shape325.setUSE("skinsphere")

Transform324.addChild(Shape325)

HAnimSegment313.addChild(Transform324)
Transform326 = x3d.Transform()
Transform326.setTranslation(x3d.doubleToFloat([-0.117,0.0975,0.0615]))
Shape327 = x3d.Shape()
Shape327.setUSE("skinsphere")

Transform326.addChild(Shape327)

HAnimSegment313.addChild(Transform326)
HAnimSite328 = x3d.HAnimSite()
HAnimSite328.setDEF("Joe_r_sphyrion")
HAnimSite328.setName("r_sphyrion")
HAnimSite328.setTranslation(x3d.doubleToFloat([-0.09,0.056,0.0125]))
Shape329 = x3d.Shape()
Shape329.setUSE("sitebox")

HAnimSite328.addChild(Shape329)

HAnimSegment313.addChild(HAnimSite328)
HAnimSite330 = x3d.HAnimSite()
HAnimSite330.setDEF("Joe_r_calcaneous_post")
HAnimSite330.setName("r_calcaneous_post")
HAnimSite330.setTranslation(x3d.doubleToFloat([-0.115,0.04,-0.055]))
Shape331 = x3d.Shape()
Shape331.setUSE("sitebox")

HAnimSite330.addChild(Shape331)

HAnimSegment313.addChild(HAnimSite330)

HAnimJoint312.addChild(HAnimSegment313)
HAnimJoint332 = x3d.HAnimJoint()
HAnimJoint332.setDEF("Joe_r_subtalar")
HAnimJoint332.setName("r_subtalar")
HAnimJoint332.setRotation(x3d.doubleToFloat([1.00000000000014,0,0,0.0816433505734676]))
HAnimJoint332.setCenter(x3d.doubleToFloat([-0.1,0.015,-0.01]))
HAnimJoint332.setSkinCoordIndex([374,375,376])
HAnimJoint332.setSkinCoordWeight(x3d.doubleToFloat([1,1,1]))
HAnimSegment333 = x3d.HAnimSegment()
HAnimSegment333.setDEF("Joe_r_midproximal")
HAnimSegment333.setName("r_midproximal")
Transform334 = x3d.Transform()
Transform334.setTranslation(x3d.doubleToFloat([-0.1,0.015,-0.01]))
Shape335 = x3d.Shape()
Shape335.setUSE("jointbox")

Transform334.addChild(Shape335)

HAnimSegment333.addChild(Transform334)
Shape336 = x3d.Shape()
Appearance337 = x3d.Appearance()
Appearance337.setUSE("SegmentLine")

Shape336.setAppearance(Appearance337)
IndexedLineSet338 = x3d.IndexedLineSet()
IndexedLineSet338.setCoordIndex([0,1,-1])
Coordinate339 = x3d.Coordinate()
Coordinate339.setPoint(x3d.doubleToFloat([-0.1,0.015,-0.01,-0.1,0.02,0.07]))

IndexedLineSet338.setCoord(Coordinate339)

Shape336.setGeometry(IndexedLineSet338)

HAnimSegment333.addChild(Shape336)
Transform340 = x3d.Transform()
Transform340.setTranslation(x3d.doubleToFloat([-0.1375,0.006,-0.03]))
Shape341 = x3d.Shape()
Shape341.setUSE("skinsphere")

Transform340.addChild(Shape341)

HAnimSegment333.addChild(Transform340)
Transform342 = x3d.Transform()
Transform342.setTranslation(x3d.doubleToFloat([-0.095,0.006,-0.03]))
Shape343 = x3d.Shape()
Shape343.setUSE("skinsphere")

Transform342.addChild(Shape343)

HAnimSegment333.addChild(Transform342)
Transform344 = x3d.Transform()
Transform344.setTranslation(x3d.doubleToFloat([-0.095,0.006,-0.03]))
Shape345 = x3d.Shape()
Shape345.setUSE("skinsphere")

Transform344.addChild(Shape345)

HAnimSegment333.addChild(Transform344)

HAnimJoint332.addChild(HAnimSegment333)
HAnimJoint346 = x3d.HAnimJoint()
HAnimJoint346.setDEF("Joe_r_midtarsal")
HAnimJoint346.setName("r_midtarsal")
HAnimJoint346.setRotation(x3d.doubleToFloat([-1.00000000000001,0,0,0.14271113543743]))
HAnimJoint346.setCenter(x3d.doubleToFloat([-0.115,0.037,0.09]))
HAnimJoint346.setSkinCoordIndex([377,378,379,380])
HAnimJoint346.setSkinCoordWeight(x3d.doubleToFloat([1,1,1,1]))
HAnimSegment347 = x3d.HAnimSegment()
HAnimSegment347.setDEF("Joe_r_middistal")
HAnimSegment347.setName("r_middistal")
Transform348 = x3d.Transform()
Transform348.setTranslation(x3d.doubleToFloat([-0.1,0.02,0.07]))
Shape349 = x3d.Shape()
Shape349.setUSE("jointbox")

Transform348.addChild(Shape349)

HAnimSegment347.addChild(Transform348)
Shape350 = x3d.Shape()
Appearance351 = x3d.Appearance()
Appearance351.setUSE("SegmentLine")

Shape350.setAppearance(Appearance351)
IndexedLineSet352 = x3d.IndexedLineSet()
IndexedLineSet352.setCoordIndex([0,1,-1])
Coordinate353 = x3d.Coordinate()
Coordinate353.setPoint(x3d.doubleToFloat([-0.1,0.02,0.07,-0.1,0.01,0.14]))

IndexedLineSet352.setCoord(Coordinate353)

Shape350.setGeometry(IndexedLineSet352)

HAnimSegment347.addChild(Shape350)
Transform354 = x3d.Transform()
Transform354.setTranslation(x3d.doubleToFloat([-0.115,0.06,0.1]))
Shape355 = x3d.Shape()
Shape355.setUSE("skinsphere")

Transform354.addChild(Shape355)

HAnimSegment347.addChild(Transform354)
Transform356 = x3d.Transform()
Transform356.setTranslation(x3d.doubleToFloat([-0.115,0,0.07]))
Shape357 = x3d.Shape()
Shape357.setUSE("skinsphere")

Transform356.addChild(Shape357)

HAnimSegment347.addChild(Transform356)
Transform358 = x3d.Transform()
Transform358.setTranslation(x3d.doubleToFloat([-0.165,0,0.07]))
Shape359 = x3d.Shape()
Shape359.setUSE("skinsphere")

Transform358.addChild(Shape359)

HAnimSegment347.addChild(Transform358)
Transform360 = x3d.Transform()
Transform360.setTranslation(x3d.doubleToFloat([-0.165,0,0.07]))
Shape361 = x3d.Shape()
Shape361.setUSE("skinsphere")

Transform360.addChild(Shape361)

HAnimSegment347.addChild(Transform360)
HAnimSite362 = x3d.HAnimSite()
HAnimSite362.setDEF("Joe_r_metatarsal_pha1")
HAnimSite362.setName("r_metatarsal_pha1")
HAnimSite362.setTranslation(x3d.doubleToFloat([-0.115,0.02,0.122]))
Shape363 = x3d.Shape()
Shape363.setUSE("sitebox")

HAnimSite362.addChild(Shape363)

HAnimSegment347.addChild(HAnimSite362)

HAnimJoint346.addChild(HAnimSegment347)
HAnimJoint364 = x3d.HAnimJoint()
HAnimJoint364.setDEF("Joe_r_metatarsal")
HAnimJoint364.setName("r_metatarsal")
HAnimJoint364.setRotation(x3d.doubleToFloat([-1.00000000000001,0,0,0.264860122523209]))
HAnimJoint364.setCenter(x3d.doubleToFloat([-0.1,0.01,0.14]))
HAnimJoint364.setSkinCoordIndex([381,382,383,384,385,386,387,388,389])
HAnimJoint364.setSkinCoordWeight(x3d.doubleToFloat([1,1,1,1,1,1,1,1,1]))
HAnimSegment365 = x3d.HAnimSegment()
HAnimSegment365.setDEF("Joe_r_forefoot")
HAnimSegment365.setName("r_forefoot")
Transform366 = x3d.Transform()
Transform366.setTranslation(x3d.doubleToFloat([-0.1086,0.01,0.14]))
Shape367 = x3d.Shape()
Shape367.setUSE("jointbox")

Transform366.addChild(Shape367)

HAnimSegment365.addChild(Transform366)
Shape368 = x3d.Shape()
Appearance369 = x3d.Appearance()
Appearance369.setUSE("SegmentLine")

Shape368.setAppearance(Appearance369)
IndexedLineSet370 = x3d.IndexedLineSet()
IndexedLineSet370.setCoordIndex([0,1,-1])
Coordinate371 = x3d.Coordinate()
Coordinate371.setPoint(x3d.doubleToFloat([-0.1,0.01,0.14,-0.1043,0.0016,0.2]))

IndexedLineSet370.setCoord(Coordinate371)

Shape368.setGeometry(IndexedLineSet370)

HAnimSegment365.addChild(Shape368)
Transform372 = x3d.Transform()
Transform372.setTranslation(x3d.doubleToFloat([-0.115,0.04,0.13]))
Shape373 = x3d.Shape()
Shape373.setUSE("skinsphere")

Transform372.addChild(Shape373)

HAnimSegment365.addChild(Transform372)
Transform374 = x3d.Transform()
Transform374.setTranslation(x3d.doubleToFloat([-0.125,0,0.12]))
Shape375 = x3d.Shape()
Shape375.setUSE("skinsphere")

Transform374.addChild(Shape375)

HAnimSegment365.addChild(Transform374)
Transform376 = x3d.Transform()
Transform376.setTranslation(x3d.doubleToFloat([-0.165,0,0.12]))
Shape377 = x3d.Shape()
Shape377.setUSE("skinsphere")

Transform376.addChild(Shape377)

HAnimSegment365.addChild(Transform376)
Transform378 = x3d.Transform()
Transform378.setTranslation(x3d.doubleToFloat([-0.087,0,0.122]))
Shape379 = x3d.Shape()
Shape379.setUSE("skinsphere")

Transform378.addChild(Shape379)

HAnimSegment365.addChild(Transform378)
Transform380 = x3d.Transform()
Transform380.setTranslation(x3d.doubleToFloat([-0.09,0.012,0.188]))
Shape381 = x3d.Shape()
Shape381.setUSE("skinsphere")

Transform380.addChild(Shape381)

HAnimSegment365.addChild(Transform380)
Transform382 = x3d.Transform()
Transform382.setTranslation(x3d.doubleToFloat([-0.11,0.011,0.19]))
Shape383 = x3d.Shape()
Shape383.setUSE("skinsphere")

Transform382.addChild(Shape383)

HAnimSegment365.addChild(Transform382)
Transform384 = x3d.Transform()
Transform384.setTranslation(x3d.doubleToFloat([-0.128,0.011,0.185]))
Shape385 = x3d.Shape()
Shape385.setUSE("skinsphere")

Transform384.addChild(Shape385)

HAnimSegment365.addChild(Transform384)
Transform386 = x3d.Transform()
Transform386.setTranslation(x3d.doubleToFloat([-0.142,0.011,0.178]))
Shape387 = x3d.Shape()
Shape387.setUSE("skinsphere")

Transform386.addChild(Shape387)

HAnimSegment365.addChild(Transform386)
Transform388 = x3d.Transform()
Transform388.setTranslation(x3d.doubleToFloat([-0.154,0.01,0.168]))
Shape389 = x3d.Shape()
Shape389.setUSE("skinsphere")

Transform388.addChild(Shape389)

HAnimSegment365.addChild(Transform388)
HAnimSite390 = x3d.HAnimSite()
HAnimSite390.setDEF("Joe_r_metatarsal_pha5")
HAnimSite390.setName("r_metatarsal_pha5")
HAnimSite390.setTranslation(x3d.doubleToFloat([-0.165,0.01,0.12]))
Shape391 = x3d.Shape()
Shape391.setUSE("sitebox")

HAnimSite390.addChild(Shape391)

HAnimSegment365.addChild(HAnimSite390)
HAnimSite392 = x3d.HAnimSite()
HAnimSite392.setDEF("Joe_r_digit2")
HAnimSite392.setName("r_digit2")
HAnimSite392.setTranslation(x3d.doubleToFloat([-0.11,0.011,0.19]))
Shape393 = x3d.Shape()
Shape393.setUSE("sitebox")

HAnimSite392.addChild(Shape393)

HAnimSegment365.addChild(HAnimSite392)

HAnimJoint364.addChild(HAnimSegment365)

HAnimJoint346.addChild(HAnimJoint364)

HAnimJoint332.addChild(HAnimJoint346)

HAnimJoint312.addChild(HAnimJoint332)

HAnimJoint284.addChild(HAnimJoint312)

HAnimJoint258.addChild(HAnimJoint284)

HAnimJoint92.addChild(HAnimJoint258)

HAnimJoint80.addChild(HAnimJoint92)
HAnimJoint394 = x3d.HAnimJoint()
HAnimJoint394.setDEF("Joe_vl5")
HAnimJoint394.setName("vl5")
HAnimJoint394.setRotation(x3d.doubleToFloat([-0.0104321818467796,0.961748598508238,-0.273734913464392,0.109829831225253]))
HAnimJoint394.setCenter(x3d.doubleToFloat([0,1.045,-0.095]))
HAnimJoint394.setSkinCoordIndex([28,76])
HAnimJoint394.setSkinCoordWeight(x3d.doubleToFloat([1,1]))
HAnimSegment395 = x3d.HAnimSegment()
HAnimSegment395.setDEF("Joe_toPelvisMarker")
HAnimSegment395.setName("toPelvis")
Shape396 = x3d.Shape()
Appearance397 = x3d.Appearance()
Appearance397.setUSE("SegmentLine")

Shape396.setAppearance(Appearance397)
IndexedLineSet398 = x3d.IndexedLineSet()
IndexedLineSet398.setCoordIndex([0,1,-1])
Coordinate399 = x3d.Coordinate()
Coordinate399.setPoint(x3d.doubleToFloat([0,1.045,-0.095,0,0.9149,0.0016]))

IndexedLineSet398.setCoord(Coordinate399)

Shape396.setGeometry(IndexedLineSet398)

HAnimSegment395.addChild(Shape396)

HAnimJoint394.addChild(HAnimSegment395)
HAnimSegment400 = x3d.HAnimSegment()
HAnimSegment400.setDEF("Joe_l5")
HAnimSegment400.setName("l5")
Shape401 = x3d.Shape()
Appearance402 = x3d.Appearance()
Appearance402.setUSE("SegmentLine")

Shape401.setAppearance(Appearance402)
IndexedLineSet403 = x3d.IndexedLineSet()
IndexedLineSet403.setCoordIndex([0,1,-1])
Coordinate404 = x3d.Coordinate()
Coordinate404.setPoint(x3d.doubleToFloat([0,1.045,-0.095,0,1.068,-0.085]))

IndexedLineSet403.setCoord(Coordinate404)

Shape401.setGeometry(IndexedLineSet403)

HAnimSegment400.addChild(Shape401)
HAnimSite405 = x3d.HAnimSite()
HAnimSite405.setDEF("Joe_waist_preferred_post")
HAnimSite405.setName("waist_preferred_post")
HAnimSite405.setTranslation(x3d.doubleToFloat([0,1.0915,-0.1091]))
Shape406 = x3d.Shape()
Shape406.setUSE("sitebox")

HAnimSite405.addChild(Shape406)

HAnimSegment400.addChild(HAnimSite405)
HAnimSite407 = x3d.HAnimSite()
HAnimSite407.setDEF("Joe_navel")
HAnimSite407.setName("navel")
HAnimSite407.setTranslation(x3d.doubleToFloat([0,1.07225,0.09]))
Shape408 = x3d.Shape()
Shape408.setUSE("sitebox")

HAnimSite407.addChild(Shape408)

HAnimSegment400.addChild(HAnimSite407)

HAnimJoint394.addChild(HAnimSegment400)
HAnimJoint409 = x3d.HAnimJoint()
HAnimJoint409.setDEF("Joe_vl4")
HAnimJoint409.setName("vl4")
HAnimJoint409.setCenter(x3d.doubleToFloat([0,1.068,-0.085]))
HAnimSegment410 = x3d.HAnimSegment()
HAnimSegment410.setDEF("Joe_l4")
HAnimSegment410.setName("l4")
Shape411 = x3d.Shape()
Appearance412 = x3d.Appearance()
Appearance412.setUSE("SegmentLine")

Shape411.setAppearance(Appearance412)
IndexedLineSet413 = x3d.IndexedLineSet()
IndexedLineSet413.setCoordIndex([0,1,-1])
Coordinate414 = x3d.Coordinate()
Coordinate414.setPoint(x3d.doubleToFloat([0,1.068,-0.085,0,1.092,-0.0725]))

IndexedLineSet413.setCoord(Coordinate414)

Shape411.setGeometry(IndexedLineSet413)

HAnimSegment410.addChild(Shape411)
Transform415 = x3d.Transform()
Transform415.setTranslation(x3d.doubleToFloat([0,1.068,-0.085]))
Shape416 = x3d.Shape()
Shape416.setUSE("jointbox")

Transform415.addChild(Shape416)

HAnimSegment410.addChild(Transform415)

HAnimJoint409.addChild(HAnimSegment410)
HAnimJoint417 = x3d.HAnimJoint()
HAnimJoint417.setDEF("Joe_vl3")
HAnimJoint417.setName("vl3")
HAnimJoint417.setCenter(x3d.doubleToFloat([0,1.092,-0.0725]))
HAnimSegment418 = x3d.HAnimSegment()
HAnimSegment418.setDEF("Joe_l3")
HAnimSegment418.setName("l3")
Shape419 = x3d.Shape()
Appearance420 = x3d.Appearance()
Appearance420.setUSE("SegmentLine")

Shape419.setAppearance(Appearance420)
IndexedLineSet421 = x3d.IndexedLineSet()
IndexedLineSet421.setCoordIndex([0,1,-1])
Coordinate422 = x3d.Coordinate()
Coordinate422.setPoint(x3d.doubleToFloat([0,1.092,-0.0725,0,1.12,-0.065]))

IndexedLineSet421.setCoord(Coordinate422)

Shape419.setGeometry(IndexedLineSet421)

HAnimSegment418.addChild(Shape419)
Transform423 = x3d.Transform()
Transform423.setTranslation(x3d.doubleToFloat([0,1.092,-0.0725]))
Shape424 = x3d.Shape()
Shape424.setUSE("jointbox")

Transform423.addChild(Shape424)

HAnimSegment418.addChild(Transform423)

HAnimJoint417.addChild(HAnimSegment418)
HAnimJoint425 = x3d.HAnimJoint()
HAnimJoint425.setDEF("Joe_vl2")
HAnimJoint425.setName("vl2")
HAnimJoint425.setCenter(x3d.doubleToFloat([0,1.12,-0.065]))
HAnimJoint425.setSkinCoordIndex([16,18,25,83,84,85,86,87,88])
HAnimJoint425.setSkinCoordWeight(x3d.doubleToFloat([1,1,1,1,1,1,0.7,1,0.8]))
HAnimSegment426 = x3d.HAnimSegment()
HAnimSegment426.setDEF("Joe_l2")
HAnimSegment426.setName("l2")
Shape427 = x3d.Shape()
Appearance428 = x3d.Appearance()
Appearance428.setUSE("SegmentLine")

Shape427.setAppearance(Appearance428)
IndexedLineSet429 = x3d.IndexedLineSet()
IndexedLineSet429.setCoordIndex([0,1,-1])
Coordinate430 = x3d.Coordinate()
Coordinate430.setPoint(x3d.doubleToFloat([0,1.12,-0.065,0,1.1459,-0.0625]))

IndexedLineSet429.setCoord(Coordinate430)

Shape427.setGeometry(IndexedLineSet429)

HAnimSegment426.addChild(Shape427)
Transform431 = x3d.Transform()
Transform431.setTranslation(x3d.doubleToFloat([0,1.12,-0.065]))
Shape432 = x3d.Shape()
Shape432.setUSE("jointbox")

Transform431.addChild(Shape432)

HAnimSegment426.addChild(Transform431)
Transform433 = x3d.Transform()
Transform433.setTranslation(x3d.doubleToFloat([-0.087,1.19,-0.09]))
Shape434 = x3d.Shape()
Shape434.setUSE("skinsphere")

Transform433.addChild(Shape434)

HAnimSegment426.addChild(Transform433)
Transform435 = x3d.Transform()
Transform435.setTranslation(x3d.doubleToFloat([0.087,1.19,-0.09]))
Shape436 = x3d.Shape()
Shape436.setUSE("skinsphere")

Transform435.addChild(Shape436)

HAnimSegment426.addChild(Transform435)
Transform437 = x3d.Transform()
Transform437.setTranslation(x3d.doubleToFloat([0.172,1.32,-0.03]))
Shape438 = x3d.Shape()
Shape438.setUSE("skinsphere")

Transform437.addChild(Shape438)

HAnimSegment426.addChild(Transform437)
Transform439 = x3d.Transform()
Transform439.setTranslation(x3d.doubleToFloat([-0.172,1.32,-0.03]))
Shape440 = x3d.Shape()
Shape440.setUSE("skinsphere")

Transform439.addChild(Shape440)

HAnimSegment426.addChild(Transform439)
Transform441 = x3d.Transform()
Transform441.setTranslation(x3d.doubleToFloat([0.15,1.23,-0.015]))
Shape442 = x3d.Shape()
Shape442.setUSE("skinsphere")

Transform441.addChild(Shape442)

HAnimSegment426.addChild(Transform441)
Transform443 = x3d.Transform()
Transform443.setTranslation(x3d.doubleToFloat([-0.15,1.23,-0.015]))
Shape444 = x3d.Shape()
Shape444.setUSE("skinsphere")

Transform443.addChild(Shape444)

HAnimSegment426.addChild(Transform443)
HAnimSite445 = x3d.HAnimSite()
HAnimSite445.setDEF("Joe_r_rib10")
HAnimSite445.setName("r_rib10")
HAnimSite445.setTranslation(x3d.doubleToFloat([-0.087,1.19,0.09]))
Shape446 = x3d.Shape()
Shape446.setUSE("sitebox")

HAnimSite445.addChild(Shape446)

HAnimSegment426.addChild(HAnimSite445)
HAnimSite447 = x3d.HAnimSite()
HAnimSite447.setDEF("Joe_l_rib10")
HAnimSite447.setName("l_rib10")
HAnimSite447.setTranslation(x3d.doubleToFloat([0.087,1.19,0.09]))
Shape448 = x3d.Shape()
Shape448.setUSE("sitebox")

HAnimSite447.addChild(Shape448)

HAnimSegment426.addChild(HAnimSite447)
HAnimSite449 = x3d.HAnimSite()
HAnimSite449.setDEF("Joe_rib10_midspine")
HAnimSite449.setName("rib10_midspine")
HAnimSite449.setTranslation(x3d.doubleToFloat([0,1.1908,-0.1113]))
Shape450 = x3d.Shape()
Shape450.setUSE("sitebox")

HAnimSite449.addChild(Shape450)

HAnimSegment426.addChild(HAnimSite449)

HAnimJoint425.addChild(HAnimSegment426)
HAnimJoint451 = x3d.HAnimJoint()
HAnimJoint451.setDEF("Joe_vl1")
HAnimJoint451.setName("vl1")
HAnimJoint451.setCenter(x3d.doubleToFloat([0,1.1459,-0.0625]))
HAnimSegment452 = x3d.HAnimSegment()
HAnimSegment452.setDEF("Joe_l1")
HAnimSegment452.setName("l1")
Shape453 = x3d.Shape()
Appearance454 = x3d.Appearance()
Appearance454.setUSE("SegmentLine")

Shape453.setAppearance(Appearance454)
IndexedLineSet455 = x3d.IndexedLineSet()
IndexedLineSet455.setCoordIndex([0,1,-1])
Coordinate456 = x3d.Coordinate()
Coordinate456.setPoint(x3d.doubleToFloat([0,1.1459,-0.0625,0,1.179,-0.068]))

IndexedLineSet455.setCoord(Coordinate456)

Shape453.setGeometry(IndexedLineSet455)

HAnimSegment452.addChild(Shape453)
Transform457 = x3d.Transform()
Transform457.setTranslation(x3d.doubleToFloat([0,1.1459,-0.0625]))
Shape458 = x3d.Shape()
Shape458.setUSE("jointbox")

Transform457.addChild(Shape458)

HAnimSegment452.addChild(Transform457)

HAnimJoint451.addChild(HAnimSegment452)
HAnimJoint459 = x3d.HAnimJoint()
HAnimJoint459.setDEF("Joe_vt12")
HAnimJoint459.setName("vt12")
HAnimJoint459.setCenter(x3d.doubleToFloat([0,1.179,-0.068]))
HAnimSegment460 = x3d.HAnimSegment()
HAnimSegment460.setDEF("Joe_t12")
HAnimSegment460.setName("t12")
Shape461 = x3d.Shape()
Appearance462 = x3d.Appearance()
Appearance462.setUSE("SegmentLine")

Shape461.setAppearance(Appearance462)
IndexedLineSet463 = x3d.IndexedLineSet()
IndexedLineSet463.setCoordIndex([0,1,-1])
Coordinate464 = x3d.Coordinate()
Coordinate464.setPoint(x3d.doubleToFloat([0,1.179,-0.068,0,1.242,-0.09]))

IndexedLineSet463.setCoord(Coordinate464)

Shape461.setGeometry(IndexedLineSet463)

HAnimSegment460.addChild(Shape461)
Transform465 = x3d.Transform()
Transform465.setTranslation(x3d.doubleToFloat([0,1.179,-0.068]))
Shape466 = x3d.Shape()
Shape466.setUSE("jointbox")

Transform465.addChild(Shape466)

HAnimSegment460.addChild(Transform465)

HAnimJoint459.addChild(HAnimSegment460)
HAnimJoint467 = x3d.HAnimJoint()
HAnimJoint467.setDEF("Joe_vt11")
HAnimJoint467.setName("vt11")
HAnimJoint467.setCenter(x3d.doubleToFloat([0,1.2679,-0.081]))
HAnimSegment468 = x3d.HAnimSegment()
HAnimSegment468.setDEF("Joe_t11")
HAnimSegment468.setName("t11")
Shape469 = x3d.Shape()
Appearance470 = x3d.Appearance()
Appearance470.setUSE("SegmentLine")

Shape469.setAppearance(Appearance470)
IndexedLineSet471 = x3d.IndexedLineSet()
IndexedLineSet471.setCoordIndex([0,1,-1])
Coordinate472 = x3d.Coordinate()
Coordinate472.setPoint(x3d.doubleToFloat([0,1.2145,-0.0755,0,1.242,-0.09]))

IndexedLineSet471.setCoord(Coordinate472)

Shape469.setGeometry(IndexedLineSet471)

HAnimSegment468.addChild(Shape469)
Transform473 = x3d.Transform()
Transform473.setTranslation(x3d.doubleToFloat([0,1.2145,-0.0755]))
Shape474 = x3d.Shape()
Shape474.setUSE("jointbox")

Transform473.addChild(Shape474)

HAnimSegment468.addChild(Transform473)

HAnimJoint467.addChild(HAnimSegment468)
HAnimJoint475 = x3d.HAnimJoint()
HAnimJoint475.setDEF("Joe_vt10")
HAnimJoint475.setName("vt10")
HAnimJoint475.setCenter(x3d.doubleToFloat([0,1.242,-0.09]))
HAnimJoint475.setSkinCoordIndex([15])
HAnimJoint475.setSkinCoordWeight(x3d.doubleToFloat([1]))
HAnimSegment476 = x3d.HAnimSegment()
HAnimSegment476.setDEF("Joe_t10")
HAnimSegment476.setName("t10")
Shape477 = x3d.Shape()
Appearance478 = x3d.Appearance()
Appearance478.setUSE("SegmentLine")

Shape477.setAppearance(Appearance478)
IndexedLineSet479 = x3d.IndexedLineSet()
IndexedLineSet479.setCoordIndex([0,1,-1])
Coordinate480 = x3d.Coordinate()
Coordinate480.setPoint(x3d.doubleToFloat([0,1.242,-0.09,0,1.268,-0.1]))

IndexedLineSet479.setCoord(Coordinate480)

Shape477.setGeometry(IndexedLineSet479)

HAnimSegment476.addChild(Shape477)
Transform481 = x3d.Transform()
Transform481.setTranslation(x3d.doubleToFloat([0,1.242,-0.09]))
Shape482 = x3d.Shape()
Shape482.setUSE("jointbox")

Transform481.addChild(Shape482)

HAnimSegment476.addChild(Transform481)
HAnimSite483 = x3d.HAnimSite()
HAnimSite483.setDEF("Joe_substernale")
HAnimSite483.setName("substernale")
HAnimSite483.setTranslation(x3d.doubleToFloat([0,1.25,0.113]))
Shape484 = x3d.Shape()
Shape484.setUSE("sitebox")

HAnimSite483.addChild(Shape484)

HAnimSegment476.addChild(HAnimSite483)

HAnimJoint475.addChild(HAnimSegment476)
HAnimJoint485 = x3d.HAnimJoint()
HAnimJoint485.setDEF("Joe_vt9")
HAnimJoint485.setName("vt9")
HAnimJoint485.setCenter(x3d.doubleToFloat([0,1.268,-0.1]))
HAnimJoint485.setSkinCoordIndex([13,14])
HAnimJoint485.setSkinCoordWeight(x3d.doubleToFloat([1,1]))
HAnimSegment486 = x3d.HAnimSegment()
HAnimSegment486.setDEF("Joe_t9")
HAnimSegment486.setName("t9")
Shape487 = x3d.Shape()
Appearance488 = x3d.Appearance()
Appearance488.setUSE("SegmentLine")

Shape487.setAppearance(Appearance488)
IndexedLineSet489 = x3d.IndexedLineSet()
IndexedLineSet489.setCoordIndex([0,1,-1])
Coordinate490 = x3d.Coordinate()
Coordinate490.setPoint(x3d.doubleToFloat([0,1.268,-0.1,0,1.294,-0.11]))

IndexedLineSet489.setCoord(Coordinate490)

Shape487.setGeometry(IndexedLineSet489)

HAnimSegment486.addChild(Shape487)
Transform491 = x3d.Transform()
Transform491.setTranslation(x3d.doubleToFloat([0,1.268,-0.1]))
Shape492 = x3d.Shape()
Shape492.setUSE("jointbox")

Transform491.addChild(Shape492)

HAnimSegment486.addChild(Transform491)
HAnimSite493 = x3d.HAnimSite()
HAnimSite493.setDEF("Joe_r_thelion")
HAnimSite493.setName("r_thelion")
HAnimSite493.setTranslation(x3d.doubleToFloat([-0.1135,1.318,0.095]))
Shape494 = x3d.Shape()
Shape494.setUSE("sitebox")

HAnimSite493.addChild(Shape494)

HAnimSegment486.addChild(HAnimSite493)
HAnimSite495 = x3d.HAnimSite()
HAnimSite495.setDEF("Joe_l_thelion")
HAnimSite495.setName("l_thelion")
HAnimSite495.setTranslation(x3d.doubleToFloat([0.1135,1.318,0.095]))
Shape496 = x3d.Shape()
Shape496.setUSE("sitebox")

HAnimSite495.addChild(Shape496)

HAnimSegment486.addChild(HAnimSite495)

HAnimJoint485.addChild(HAnimSegment486)
HAnimJoint497 = x3d.HAnimJoint()
HAnimJoint497.setDEF("Joe_vt8")
HAnimJoint497.setName("vt8")
HAnimJoint497.setCenter(x3d.doubleToFloat([0,1.294,-0.11]))
HAnimSegment498 = x3d.HAnimSegment()
HAnimSegment498.setDEF("Joe_t8")
HAnimSegment498.setName("t8")
Shape499 = x3d.Shape()
Appearance500 = x3d.Appearance()
Appearance500.setUSE("SegmentLine")

Shape499.setAppearance(Appearance500)
IndexedLineSet501 = x3d.IndexedLineSet()
IndexedLineSet501.setCoordIndex([0,1,-1])
Coordinate502 = x3d.Coordinate()
Coordinate502.setPoint(x3d.doubleToFloat([0,1.294,-0.11,0,1.352,-0.12]))

IndexedLineSet501.setCoord(Coordinate502)

Shape499.setGeometry(IndexedLineSet501)

HAnimSegment498.addChild(Shape499)
Transform503 = x3d.Transform()
Transform503.setTranslation(x3d.doubleToFloat([0,1.294,-0.11]))
Shape504 = x3d.Shape()
Shape504.setUSE("jointbox")

Transform503.addChild(Shape504)

HAnimSegment498.addChild(Transform503)

HAnimJoint497.addChild(HAnimSegment498)
HAnimJoint505 = x3d.HAnimJoint()
HAnimJoint505.setDEF("Joe_vt7")
HAnimJoint505.setName("vt7")
HAnimJoint505.setCenter(x3d.doubleToFloat([0,1.323,-0.1155]))
HAnimSegment506 = x3d.HAnimSegment()
HAnimSegment506.setDEF("Joe_t7")
HAnimSegment506.setName("t7")
Shape507 = x3d.Shape()
Appearance508 = x3d.Appearance()
Appearance508.setUSE("SegmentLine")

Shape507.setAppearance(Appearance508)
IndexedLineSet509 = x3d.IndexedLineSet()
IndexedLineSet509.setCoordIndex([0,1,-1])
Coordinate510 = x3d.Coordinate()
Coordinate510.setPoint(x3d.doubleToFloat([0,1.352,-0.12,0,1.381,-0.1235]))

IndexedLineSet509.setCoord(Coordinate510)

Shape507.setGeometry(IndexedLineSet509)

HAnimSegment506.addChild(Shape507)
Transform511 = x3d.Transform()
Transform511.setTranslation(x3d.doubleToFloat([0,1.323,-0.1155]))
Shape512 = x3d.Shape()
Shape512.setUSE("jointbox")

Transform511.addChild(Shape512)

HAnimSegment506.addChild(Transform511)

HAnimJoint505.addChild(HAnimSegment506)
HAnimJoint513 = x3d.HAnimJoint()
HAnimJoint513.setDEF("Joe_vt6")
HAnimJoint513.setName("vt6")
HAnimJoint513.setCenter(x3d.doubleToFloat([0,1.352,-0.12]))
HAnimSegment514 = x3d.HAnimSegment()
HAnimSegment514.setDEF("Joe_t6")
HAnimSegment514.setName("t6")
Shape515 = x3d.Shape()
Appearance516 = x3d.Appearance()
Appearance516.setUSE("SegmentLine")

Shape515.setAppearance(Appearance516)
IndexedLineSet517 = x3d.IndexedLineSet()
IndexedLineSet517.setCoordIndex([0,1,-1])
Coordinate518 = x3d.Coordinate()
Coordinate518.setPoint(x3d.doubleToFloat([0,1.381,-0.1235,0,1.41,-0.1235]))

IndexedLineSet517.setCoord(Coordinate518)

Shape515.setGeometry(IndexedLineSet517)

HAnimSegment514.addChild(Shape515)
Transform519 = x3d.Transform()
Transform519.setTranslation(x3d.doubleToFloat([0,1.352,-0.12]))
Shape520 = x3d.Shape()
Shape520.setUSE("jointbox")

Transform519.addChild(Shape520)

HAnimSegment514.addChild(Transform519)

HAnimJoint513.addChild(HAnimSegment514)
HAnimJoint521 = x3d.HAnimJoint()
HAnimJoint521.setDEF("Joe_vt5")
HAnimJoint521.setName("vt5")
HAnimJoint521.setCenter(x3d.doubleToFloat([0,1.381,-0.1235]))
HAnimSegment522 = x3d.HAnimSegment()
HAnimSegment522.setDEF("Joe_t5")
HAnimSegment522.setName("t5")
Shape523 = x3d.Shape()
Appearance524 = x3d.Appearance()
Appearance524.setUSE("SegmentLine")

Shape523.setAppearance(Appearance524)
IndexedLineSet525 = x3d.IndexedLineSet()
IndexedLineSet525.setCoordIndex([0,1,-1])
Coordinate526 = x3d.Coordinate()
Coordinate526.setPoint(x3d.doubleToFloat([0,1.41,-0.1235,0,1.438,-0.12]))

IndexedLineSet525.setCoord(Coordinate526)

Shape523.setGeometry(IndexedLineSet525)

HAnimSegment522.addChild(Shape523)
Transform527 = x3d.Transform()
Transform527.setTranslation(x3d.doubleToFloat([0,1.381,-0.1235]))
Shape528 = x3d.Shape()
Shape528.setUSE("jointbox")

Transform527.addChild(Shape528)

HAnimSegment522.addChild(Transform527)

HAnimJoint521.addChild(HAnimSegment522)
HAnimJoint529 = x3d.HAnimJoint()
HAnimJoint529.setDEF("Joe_vt4")
HAnimJoint529.setName("vt4")
HAnimJoint529.setCenter(x3d.doubleToFloat([0,1.41,-0.1235]))
HAnimJoint529.setSkinCoordIndex([81])
HAnimJoint529.setSkinCoordWeight(x3d.doubleToFloat([1]))
HAnimSegment530 = x3d.HAnimSegment()
HAnimSegment530.setDEF("Joe_t4")
HAnimSegment530.setName("t4")
Shape531 = x3d.Shape()
Appearance532 = x3d.Appearance()
Appearance532.setUSE("SegmentLine")

Shape531.setAppearance(Appearance532)
IndexedLineSet533 = x3d.IndexedLineSet()
IndexedLineSet533.setCoordIndex([0,1,-1])
Coordinate534 = x3d.Coordinate()
Coordinate534.setPoint(x3d.doubleToFloat([0,1.41,-0.1235,0,1.438,-0.12]))

IndexedLineSet533.setCoord(Coordinate534)

Shape531.setGeometry(IndexedLineSet533)

HAnimSegment530.addChild(Shape531)
Transform535 = x3d.Transform()
Transform535.setTranslation(x3d.doubleToFloat([0,1.41,-0.1235]))
Shape536 = x3d.Shape()
Shape536.setUSE("jointbox")

Transform535.addChild(Shape536)

HAnimSegment530.addChild(Transform535)
Transform537 = x3d.Transform()
Transform537.setTranslation(x3d.doubleToFloat([0,1.41,-0.145]))
Shape538 = x3d.Shape()
Shape538.setUSE("skinsphere")

Transform537.addChild(Shape538)

HAnimSegment530.addChild(Transform537)

HAnimJoint529.addChild(HAnimSegment530)
HAnimJoint539 = x3d.HAnimJoint()
HAnimJoint539.setDEF("Joe_vt3")
HAnimJoint539.setName("vt3")
HAnimJoint539.setCenter(x3d.doubleToFloat([0,1.438,-0.12]))
HAnimSegment540 = x3d.HAnimSegment()
HAnimSegment540.setDEF("Joe_t3")
HAnimSegment540.setName("t3")
Shape541 = x3d.Shape()
Appearance542 = x3d.Appearance()
Appearance542.setUSE("SegmentLine")

Shape541.setAppearance(Appearance542)
IndexedLineSet543 = x3d.IndexedLineSet()
IndexedLineSet543.setCoordIndex([0,1,-1])
Coordinate544 = x3d.Coordinate()
Coordinate544.setPoint(x3d.doubleToFloat([0,1.438,-0.12,0,1.468,-0.105]))

IndexedLineSet543.setCoord(Coordinate544)

Shape541.setGeometry(IndexedLineSet543)

HAnimSegment540.addChild(Shape541)
Transform545 = x3d.Transform()
Transform545.setTranslation(x3d.doubleToFloat([0,1.438,-0.12]))
Shape546 = x3d.Shape()
Shape546.setUSE("jointbox")

Transform545.addChild(Shape546)

HAnimSegment540.addChild(Transform545)

HAnimJoint539.addChild(HAnimSegment540)
HAnimJoint547 = x3d.HAnimJoint()
HAnimJoint547.setDEF("Joe_vt2")
HAnimJoint547.setName("vt2")
HAnimJoint547.setCenter(x3d.doubleToFloat([0,1.468,-0.105]))
HAnimSegment548 = x3d.HAnimSegment()
HAnimSegment548.setDEF("Joe_t2")
HAnimSegment548.setName("t2")
Shape549 = x3d.Shape()
Appearance550 = x3d.Appearance()
Appearance550.setUSE("SegmentLine")

Shape549.setAppearance(Appearance550)
IndexedLineSet551 = x3d.IndexedLineSet()
IndexedLineSet551.setCoordIndex([0,1,-1])
Coordinate552 = x3d.Coordinate()
Coordinate552.setPoint(x3d.doubleToFloat([0,1.468,-0.105,0,1.497,-0.09]))

IndexedLineSet551.setCoord(Coordinate552)

Shape549.setGeometry(IndexedLineSet551)

HAnimSegment548.addChild(Shape549)
Transform553 = x3d.Transform()
Transform553.setTranslation(x3d.doubleToFloat([0,1.468,-0.105]))
Shape554 = x3d.Shape()
Shape554.setUSE("jointbox")

Transform553.addChild(Shape554)

HAnimSegment548.addChild(Transform553)

HAnimJoint547.addChild(HAnimSegment548)
HAnimJoint555 = x3d.HAnimJoint()
HAnimJoint555.setDEF("Joe_vt1")
HAnimJoint555.setName("vt1")
HAnimJoint555.setCenter(x3d.doubleToFloat([0,1.497,-0.09]))
HAnimJoint555.setSkinCoordIndex([11,24])
HAnimJoint555.setSkinCoordWeight(x3d.doubleToFloat([1,1]))
HAnimSegment556 = x3d.HAnimSegment()
HAnimSegment556.setDEF("Joe_t1")
HAnimSegment556.setName("t1")
Shape557 = x3d.Shape()
Appearance558 = x3d.Appearance()
Appearance558.setUSE("SegmentLine")

Shape557.setAppearance(Appearance558)
IndexedLineSet559 = x3d.IndexedLineSet()
IndexedLineSet559.setCoordIndex([0,1,-1])
Coordinate560 = x3d.Coordinate()
Coordinate560.setPoint(x3d.doubleToFloat([0,1.497,-0.09,0,1.525,-0.072]))

IndexedLineSet559.setCoord(Coordinate560)

Shape557.setGeometry(IndexedLineSet559)

HAnimSegment556.addChild(Shape557)
Transform561 = x3d.Transform()
Transform561.setTranslation(x3d.doubleToFloat([0,1.497,-0.09]))
Shape562 = x3d.Shape()
Shape562.setUSE("jointbox")

Transform561.addChild(Shape562)

HAnimSegment556.addChild(Transform561)
HAnimSite563 = x3d.HAnimSite()
HAnimSite563.setDEF("Joe_suprasternale")
HAnimSite563.setName("suprasternale")
HAnimSite563.setTranslation(x3d.doubleToFloat([0,1.44,0.03]))
Shape564 = x3d.Shape()
Shape564.setUSE("sitebox")

HAnimSite563.addChild(Shape564)

HAnimSegment556.addChild(HAnimSite563)
HAnimSite565 = x3d.HAnimSite()
HAnimSite565.setDEF("Joe_cervicale")
HAnimSite565.setName("cervicale")
HAnimSite565.setTranslation(x3d.doubleToFloat([0,1.53,-0.084]))
Shape566 = x3d.Shape()
Shape566.setUSE("sitebox")

HAnimSite565.addChild(Shape566)

HAnimSegment556.addChild(HAnimSite565)

HAnimJoint555.addChild(HAnimSegment556)
HAnimJoint567 = x3d.HAnimJoint()
HAnimJoint567.setDEF("Joe_vc7")
HAnimJoint567.setName("vc7")
HAnimJoint567.setCenter(x3d.doubleToFloat([0,1.525,-0.072]))
HAnimJoint567.setSkinCoordIndex([74,75])
HAnimJoint567.setSkinCoordWeight(x3d.doubleToFloat([1,1]))
HAnimSegment568 = x3d.HAnimSegment()
HAnimSegment568.setDEF("Joe_c7")
HAnimSegment568.setName("c7")
Shape569 = x3d.Shape()
Appearance570 = x3d.Appearance()
Appearance570.setUSE("SegmentLine")

Shape569.setAppearance(Appearance570)
IndexedLineSet571 = x3d.IndexedLineSet()
IndexedLineSet571.setCoordIndex([0,1,-1,0,2,-1,0,3,-1])
Coordinate572 = x3d.Coordinate()
Coordinate572.setPoint(x3d.doubleToFloat([0,1.525,-0.072,0.082,1.4488,-0.0353,-0.03,1.46,0.02,0,1.54,-0.05]))

IndexedLineSet571.setCoord(Coordinate572)

Shape569.setGeometry(IndexedLineSet571)

HAnimSegment568.addChild(Shape569)
Transform573 = x3d.Transform()
Transform573.setTranslation(x3d.doubleToFloat([0,1.525,-0.072]))
Shape574 = x3d.Shape()
Shape574.setUSE("jointbox")

Transform573.addChild(Shape574)

HAnimSegment568.addChild(Transform573)
HAnimSite575 = x3d.HAnimSite()
HAnimSite575.setDEF("Joe_r_neck_base")
HAnimSite575.setName("r_neck_base")
HAnimSite575.setTranslation(x3d.doubleToFloat([-0.0646,1.5149,-0.0385]))
Shape576 = x3d.Shape()
Shape576.setUSE("sitebox")

HAnimSite575.addChild(Shape576)

HAnimSegment568.addChild(HAnimSite575)
HAnimSite577 = x3d.HAnimSite()
HAnimSite577.setDEF("Joe_l_neck_base")
HAnimSite577.setName("l_neck_base")
HAnimSite577.setTranslation(x3d.doubleToFloat([0.0646,1.5149,-0.0385]))
Shape578 = x3d.Shape()
Shape578.setUSE("sitebox")

HAnimSite577.addChild(Shape578)

HAnimSegment568.addChild(HAnimSite577)

HAnimJoint567.addChild(HAnimSegment568)
HAnimJoint579 = x3d.HAnimJoint()
HAnimJoint579.setDEF("Joe_vc6")
HAnimJoint579.setName("vc6")
HAnimJoint579.setRotation(x3d.doubleToFloat([-0.37139068112485,-0.928476688976744,0,0.0468530829448654]))
HAnimJoint579.setCenter(x3d.doubleToFloat([0,1.54,-0.05]))
HAnimSegment580 = x3d.HAnimSegment()
HAnimSegment580.setDEF("Joe_c6")
HAnimSegment580.setName("c6")
Shape581 = x3d.Shape()
Appearance582 = x3d.Appearance()
Appearance582.setUSE("SegmentLine")

Shape581.setAppearance(Appearance582)
IndexedLineSet583 = x3d.IndexedLineSet()
IndexedLineSet583.setCoordIndex([0,1,-1])
Coordinate584 = x3d.Coordinate()
Coordinate584.setPoint(x3d.doubleToFloat([0,1.54,-0.05,0,1.5675,-0.0256]))

IndexedLineSet583.setCoord(Coordinate584)

Shape581.setGeometry(IndexedLineSet583)

HAnimSegment580.addChild(Shape581)
Transform585 = x3d.Transform()
Transform585.setTranslation(x3d.doubleToFloat([0,1.54,-0.05]))
Shape586 = x3d.Shape()
Shape586.setUSE("jointbox")

Transform585.addChild(Shape586)

HAnimSegment580.addChild(Transform585)

HAnimJoint579.addChild(HAnimSegment580)
HAnimJoint587 = x3d.HAnimJoint()
HAnimJoint587.setDEF("Joe_vc5")
HAnimJoint587.setName("vc5")
HAnimJoint587.setCenter(x3d.doubleToFloat([0,1.552,-0.035]))
HAnimSegment588 = x3d.HAnimSegment()
HAnimSegment588.setDEF("Joe_c5")
HAnimSegment588.setName("c5")
Transform589 = x3d.Transform()
Transform589.setTranslation(x3d.doubleToFloat([0,1.552,-0.035]))
Shape590 = x3d.Shape()
Shape590.setUSE("jointbox")

Transform589.addChild(Shape590)

HAnimSegment588.addChild(Transform589)
Shape591 = x3d.Shape()
Appearance592 = x3d.Appearance()
Appearance592.setUSE("SegmentLine")

Shape591.setAppearance(Appearance592)
IndexedLineSet593 = x3d.IndexedLineSet()
IndexedLineSet593.setCoordIndex([0,1,-1])
Coordinate594 = x3d.Coordinate()
Coordinate594.setPoint(x3d.doubleToFloat([0,1.5675,-0.0256,0,1.58225,-0.0185]))

IndexedLineSet593.setCoord(Coordinate594)

Shape591.setGeometry(IndexedLineSet593)

HAnimSegment588.addChild(Shape591)

HAnimJoint587.addChild(HAnimSegment588)
HAnimJoint595 = x3d.HAnimJoint()
HAnimJoint595.setDEF("Joe_vc4")
HAnimJoint595.setName("vc4")
HAnimJoint595.setCenter(x3d.doubleToFloat([0,1.5675,-0.0256]))
HAnimSegment596 = x3d.HAnimSegment()
HAnimSegment596.setDEF("Joe_c4")
HAnimSegment596.setName("c4")
Shape597 = x3d.Shape()
Appearance598 = x3d.Appearance()
Appearance598.setUSE("SegmentLine")

Shape597.setAppearance(Appearance598)
IndexedLineSet599 = x3d.IndexedLineSet()
IndexedLineSet599.setCoordIndex([0,1,-1])
Coordinate600 = x3d.Coordinate()
Coordinate600.setPoint(x3d.doubleToFloat([0,1.58225,-0.0185,0,1.595,-0.0175]))

IndexedLineSet599.setCoord(Coordinate600)

Shape597.setGeometry(IndexedLineSet599)

HAnimSegment596.addChild(Shape597)
Transform601 = x3d.Transform()
Transform601.setTranslation(x3d.doubleToFloat([0,1.5675,-0.0256]))
Shape602 = x3d.Shape()
Shape602.setUSE("jointbox")

Transform601.addChild(Shape602)

HAnimSegment596.addChild(Transform601)

HAnimJoint595.addChild(HAnimSegment596)
HAnimJoint603 = x3d.HAnimJoint()
HAnimJoint603.setDEF("Joe_vc3")
HAnimJoint603.setName("vc3")
HAnimJoint603.setCenter(x3d.doubleToFloat([0,1.58225,-0.0185]))
HAnimSegment604 = x3d.HAnimSegment()
HAnimSegment604.setDEF("Joe_c3")
HAnimSegment604.setName("c3")
Shape605 = x3d.Shape()
Appearance606 = x3d.Appearance()
Appearance606.setUSE("SegmentLine")

Shape605.setAppearance(Appearance606)
IndexedLineSet607 = x3d.IndexedLineSet()
IndexedLineSet607.setCoordIndex([0,1,-1])
Coordinate608 = x3d.Coordinate()
Coordinate608.setPoint(x3d.doubleToFloat([0,1.595,-0.0175,0,1.61,-0.015]))

IndexedLineSet607.setCoord(Coordinate608)

Shape605.setGeometry(IndexedLineSet607)

HAnimSegment604.addChild(Shape605)
Transform609 = x3d.Transform()
Transform609.setTranslation(x3d.doubleToFloat([0,1.58225,-0.0185]))
Shape610 = x3d.Shape()
Shape610.setUSE("jointbox")

Transform609.addChild(Shape610)

HAnimSegment604.addChild(Transform609)

HAnimJoint603.addChild(HAnimSegment604)
HAnimJoint611 = x3d.HAnimJoint()
HAnimJoint611.setDEF("Joe_vc2")
HAnimJoint611.setName("vc2")
HAnimJoint611.setCenter(x3d.doubleToFloat([0,1.595,-0.0175]))
HAnimSegment612 = x3d.HAnimSegment()
HAnimSegment612.setDEF("Joe_c2")
HAnimSegment612.setName("c2")
Shape613 = x3d.Shape()
Appearance614 = x3d.Appearance()
Appearance614.setUSE("SegmentLine")

Shape613.setAppearance(Appearance614)
IndexedLineSet615 = x3d.IndexedLineSet()
IndexedLineSet615.setCoordIndex([0,1,-1])
Coordinate616 = x3d.Coordinate()
Coordinate616.setPoint(x3d.doubleToFloat([0,1.61,-0.015,0,1.6144,-0.0034]))

IndexedLineSet615.setCoord(Coordinate616)

Shape613.setGeometry(IndexedLineSet615)

HAnimSegment612.addChild(Shape613)
Transform617 = x3d.Transform()
Transform617.setTranslation(x3d.doubleToFloat([0,1.595,-0.0175]))
Shape618 = x3d.Shape()
Shape618.setUSE("jointbox")

Transform617.addChild(Shape618)

HAnimSegment612.addChild(Transform617)

HAnimJoint611.addChild(HAnimSegment612)
HAnimJoint619 = x3d.HAnimJoint()
HAnimJoint619.setDEF("Joe_vc1")
HAnimJoint619.setName("vc1")
HAnimJoint619.setCenter(x3d.doubleToFloat([0,1.61,-0.015]))
HAnimSegment620 = x3d.HAnimSegment()
HAnimSegment620.setDEF("Joe_c1")
HAnimSegment620.setName("c1")
Shape621 = x3d.Shape()
Appearance622 = x3d.Appearance()
Appearance622.setUSE("SegmentLine")

Shape621.setAppearance(Appearance622)
IndexedLineSet623 = x3d.IndexedLineSet()
IndexedLineSet623.setCoordIndex([0,1,-1])
Coordinate624 = x3d.Coordinate()
Coordinate624.setPoint(x3d.doubleToFloat([0,1.6144,-0.0034,0,1.63,-0.01]))

IndexedLineSet623.setCoord(Coordinate624)

Shape621.setGeometry(IndexedLineSet623)

HAnimSegment620.addChild(Shape621)
Transform625 = x3d.Transform()
Transform625.setTranslation(x3d.doubleToFloat([0,1.61,-0.015]))
Shape626 = x3d.Shape()
Shape626.setUSE("jointbox")

Transform625.addChild(Shape626)

HAnimSegment620.addChild(Transform625)

HAnimJoint619.addChild(HAnimSegment620)
HAnimJoint627 = x3d.HAnimJoint()
HAnimJoint627.setDEF("Joe_skullbase")
HAnimJoint627.setName("skullbase")
HAnimJoint627.setRotation(x3d.doubleToFloat([0,-1,0,0.105595270685895]))
HAnimJoint627.setCenter(x3d.doubleToFloat([0,1.63,-0.01]))
HAnimJoint627.setSkinCoordIndex([0,1,2,3,4,5,6,7,8,9])
HAnimJoint627.setSkinCoordWeight(x3d.doubleToFloat([1,1,1,1,1,1,1,1,1,1]))
HAnimSegment628 = x3d.HAnimSegment()
HAnimSegment628.setDEF("Joe_skull")
HAnimSegment628.setName("skull")
Shape629 = x3d.Shape()
Appearance630 = x3d.Appearance()
Appearance630.setUSE("SegmentLine")

Shape629.setAppearance(Appearance630)
IndexedLineSet631 = x3d.IndexedLineSet()
IndexedLineSet631.setCoordIndex([0,1,-1,0,2,-1])
Coordinate632 = x3d.Coordinate()
Coordinate632.setPoint(x3d.doubleToFloat([0,1.63,-0.01,0.034,1.659,0.06,-0.034,1.655,0.065]))

IndexedLineSet631.setCoord(Coordinate632)

Shape629.setGeometry(IndexedLineSet631)

HAnimSegment628.addChild(Shape629)
Transform633 = x3d.Transform()
Transform633.setTranslation(x3d.doubleToFloat([0,1.63,-0.01]))
Shape634 = x3d.Shape()
Shape634.setUSE("jointbox")

Transform633.addChild(Shape634)

HAnimSegment628.addChild(Transform633)
HAnimSite635 = x3d.HAnimSite()
HAnimSite635.setDEF("Joe_skull_tip")
HAnimSite635.setName("skull_tip")
HAnimSite635.setTranslation(x3d.doubleToFloat([0,1.77,0]))
Shape636 = x3d.Shape()
Shape636.setUSE("sitebox")

HAnimSite635.addChild(Shape636)

HAnimSegment628.addChild(HAnimSite635)
HAnimSite637 = x3d.HAnimSite()
HAnimSite637.setDEF("Joe_sellion")
HAnimSite637.setName("sellion")
HAnimSite637.setTranslation(x3d.doubleToFloat([0,1.665,0.09]))
Shape638 = x3d.Shape()
Shape638.setUSE("sitebox")

HAnimSite637.addChild(Shape638)

HAnimSegment628.addChild(HAnimSite637)
HAnimSite639 = x3d.HAnimSite()
HAnimSite639.setDEF("Joe_r_infraorbitale")
HAnimSite639.setName("r_infraorbitale")
HAnimSite639.setTranslation(x3d.doubleToFloat([-0.033,1.62,0.087]))
Shape640 = x3d.Shape()
Shape640.setUSE("sitebox")

HAnimSite639.addChild(Shape640)

HAnimSegment628.addChild(HAnimSite639)
HAnimSite641 = x3d.HAnimSite()
HAnimSite641.setDEF("Joe_l_infraorbitale")
HAnimSite641.setName("l_infraorbitale")
HAnimSite641.setTranslation(x3d.doubleToFloat([0.033,1.62,0.087]))
Shape642 = x3d.Shape()
Shape642.setUSE("sitebox")

HAnimSite641.addChild(Shape642)

HAnimSegment628.addChild(HAnimSite641)
HAnimSite643 = x3d.HAnimSite()
HAnimSite643.setDEF("Joe_supramenton")
HAnimSite643.setName("supramenton")
HAnimSite643.setTranslation(x3d.doubleToFloat([0,1.55,0.097]))
Shape644 = x3d.Shape()
Shape644.setUSE("sitebox")

HAnimSite643.addChild(Shape644)

HAnimSegment628.addChild(HAnimSite643)
HAnimSite645 = x3d.HAnimSite()
HAnimSite645.setDEF("Joe_r_tragion")
HAnimSite645.setName("r_tragion")
HAnimSite645.setTranslation(x3d.doubleToFloat([-0.077,1.64,-0.01]))
Shape646 = x3d.Shape()
Shape646.setUSE("sitebox")

HAnimSite645.addChild(Shape646)

HAnimSegment628.addChild(HAnimSite645)
HAnimSite647 = x3d.HAnimSite()
HAnimSite647.setDEF("Joe_r_gonion")
HAnimSite647.setName("r_gonion")
HAnimSite647.setTranslation(x3d.doubleToFloat([-0.052,1.58,0.015]))
Shape648 = x3d.Shape()
Shape648.setUSE("sitebox")

HAnimSite647.addChild(Shape648)

HAnimSegment628.addChild(HAnimSite647)
HAnimSite649 = x3d.HAnimSite()
HAnimSite649.setDEF("Joe_l_tragion")
HAnimSite649.setName("l_tragion")
HAnimSite649.setTranslation(x3d.doubleToFloat([0.077,1.64,-0.01]))
Shape650 = x3d.Shape()
Shape650.setUSE("sitebox")

HAnimSite649.addChild(Shape650)

HAnimSegment628.addChild(HAnimSite649)
HAnimSite651 = x3d.HAnimSite()
HAnimSite651.setDEF("Joe_l_gonion")
HAnimSite651.setName("l_gonion")
HAnimSite651.setTranslation(x3d.doubleToFloat([0.0631,1.58,0.015]))
Shape652 = x3d.Shape()
Shape652.setUSE("sitebox")

HAnimSite651.addChild(Shape652)

HAnimSegment628.addChild(HAnimSite651)
HAnimSite653 = x3d.HAnimSite()
HAnimSite653.setDEF("Joe_nuchale")
HAnimSite653.setName("nuchale")
HAnimSite653.setTranslation(x3d.doubleToFloat([0,1.625,-0.0925]))
Shape654 = x3d.Shape()
Shape654.setUSE("sitebox")

HAnimSite653.addChild(Shape654)

HAnimSegment628.addChild(HAnimSite653)

HAnimJoint627.addChild(HAnimSegment628)
HAnimJoint655 = x3d.HAnimJoint()
HAnimJoint655.setDEF("Joe_l_eyeball_joint")
HAnimJoint655.setName("l_eyeball_joint")
HAnimJoint655.setCenter(x3d.doubleToFloat([0.034,1.659,0.06]))
HAnimSegment656 = x3d.HAnimSegment()
HAnimSegment656.setDEF("Joe_l_eyeball")
HAnimSegment656.setName("l_eyeball")
Shape657 = x3d.Shape()
Appearance658 = x3d.Appearance()
Appearance658.setUSE("SegmentLine")

Shape657.setAppearance(Appearance658)
IndexedLineSet659 = x3d.IndexedLineSet()
IndexedLineSet659.setCoordIndex([0,1,-1])
Coordinate660 = x3d.Coordinate()
Coordinate660.setPoint(x3d.doubleToFloat([0.034,1.655,0.065,-0.034,1.655,0.065]))

IndexedLineSet659.setCoord(Coordinate660)

Shape657.setGeometry(IndexedLineSet659)

HAnimSegment656.addChild(Shape657)
Transform661 = x3d.Transform()
Transform661.setTranslation(x3d.doubleToFloat([0.034,1.655,0.065]))
Transform661.setScale(x3d.doubleToFloat([1,1,1.4]))
Shape662 = x3d.Shape()
Shape662.setUSE("jointbox")

Transform661.addChild(Shape662)

HAnimSegment656.addChild(Transform661)

HAnimJoint655.addChild(HAnimSegment656)

HAnimJoint627.addChild(HAnimJoint655)
HAnimJoint663 = x3d.HAnimJoint()
HAnimJoint663.setDEF("Joe_r_eyeball_joint")
HAnimJoint663.setName("r_eyeball_joint")
HAnimJoint663.setCenter(x3d.doubleToFloat([-0.034,1.659,0.06]))
HAnimSegment664 = x3d.HAnimSegment()
HAnimSegment664.setDEF("Joe_r_eyeball")
HAnimSegment664.setName("r_eyeball")
Shape665 = x3d.Shape()
Appearance666 = x3d.Appearance()
Appearance666.setUSE("SegmentLine")

Shape665.setAppearance(Appearance666)
IndexedLineSet667 = x3d.IndexedLineSet()
IndexedLineSet667.setCoordIndex([0,1,-1])
Coordinate668 = x3d.Coordinate()
Coordinate668.setPoint(x3d.doubleToFloat([0.034,1.655,0.065,-0.034,1.655,0.065]))

IndexedLineSet667.setCoord(Coordinate668)

Shape665.setGeometry(IndexedLineSet667)

HAnimSegment664.addChild(Shape665)
Transform669 = x3d.Transform()
Transform669.setTranslation(x3d.doubleToFloat([-0.034,1.655,0.065]))
Transform669.setScale(x3d.doubleToFloat([1,1,1.4]))
Shape670 = x3d.Shape()
Shape670.setUSE("jointbox")

Transform669.addChild(Shape670)

HAnimSegment664.addChild(Transform669)

HAnimJoint663.addChild(HAnimSegment664)

HAnimJoint627.addChild(HAnimJoint663)

HAnimJoint619.addChild(HAnimJoint627)

HAnimJoint611.addChild(HAnimJoint619)

HAnimJoint603.addChild(HAnimJoint611)

HAnimJoint595.addChild(HAnimJoint603)

HAnimJoint587.addChild(HAnimJoint595)

HAnimJoint579.addChild(HAnimJoint587)

HAnimJoint567.addChild(HAnimJoint579)

HAnimJoint555.addChild(HAnimJoint567)
HAnimJoint671 = x3d.HAnimJoint()
HAnimJoint671.setDEF("Joe_l_sternoclavicular")
HAnimJoint671.setName("l_sternoclavicular")
HAnimJoint671.setCenter(x3d.doubleToFloat([0.082,1.4488,-0.0353]))
HAnimJoint671.setSkinCoordIndex([12])
HAnimJoint671.setSkinCoordWeight(x3d.doubleToFloat([1]))
HAnimSegment672 = x3d.HAnimSegment()
HAnimSegment672.setDEF("Joe_l_clavicle")
HAnimSegment672.setName("l_clavicle")
Shape673 = x3d.Shape()
Appearance674 = x3d.Appearance()
Appearance674.setUSE("SegmentLine")

Shape673.setAppearance(Appearance674)
IndexedLineSet675 = x3d.IndexedLineSet()
IndexedLineSet675.setCoordIndex([0,1,-1])
Coordinate676 = x3d.Coordinate()
Coordinate676.setPoint(x3d.doubleToFloat([0.082,1.4488,-0.0353,0.0962,1.4269,-0.0424]))

IndexedLineSet675.setCoord(Coordinate676)

Shape673.setGeometry(IndexedLineSet675)

HAnimSegment672.addChild(Shape673)
Transform677 = x3d.Transform()
Transform677.setTranslation(x3d.doubleToFloat([0.082,1.4488,-0.0353]))
Shape678 = x3d.Shape()
Shape678.setUSE("jointbox")

Transform677.addChild(Shape678)

HAnimSegment672.addChild(Transform677)
HAnimSite679 = x3d.HAnimSite()
HAnimSite679.setDEF("Joe_l_clavicale")
HAnimSite679.setName("l_clavicale")
HAnimSite679.setTranslation(x3d.doubleToFloat([0.03,1.46,0.035]))
Shape680 = x3d.Shape()
Shape680.setUSE("sitebox")

HAnimSite679.addChild(Shape680)

HAnimSegment672.addChild(HAnimSite679)

HAnimJoint671.addChild(HAnimSegment672)
HAnimJoint681 = x3d.HAnimJoint()
HAnimJoint681.setDEF("Joe_l_acromioclavicular")
HAnimJoint681.setName("l_acromioclavicular")
HAnimJoint681.setCenter(x3d.doubleToFloat([0.0962,1.4269,-0.0424]))
HAnimJoint681.setSkinCoordIndex([79])
HAnimJoint681.setSkinCoordWeight(x3d.doubleToFloat([1]))
HAnimSegment682 = x3d.HAnimSegment()
HAnimSegment682.setDEF("Joe_l_scapula")
HAnimSegment682.setName("l_scapula")
Shape683 = x3d.Shape()
Appearance684 = x3d.Appearance()
Appearance684.setUSE("SegmentLine")

Shape683.setAppearance(Appearance684)
IndexedLineSet685 = x3d.IndexedLineSet()
IndexedLineSet685.setCoordIndex([0,1,-1])
Coordinate686 = x3d.Coordinate()
Coordinate686.setPoint(x3d.doubleToFloat([0.0962,1.4269,-0.0424,0.2,1.44,-0.04]))

IndexedLineSet685.setCoord(Coordinate686)

Shape683.setGeometry(IndexedLineSet685)

HAnimSegment682.addChild(Shape683)
Transform687 = x3d.Transform()
Transform687.setTranslation(x3d.doubleToFloat([0.0962,1.4269,-0.0424]))
Shape688 = x3d.Shape()
Shape688.setUSE("jointbox")

Transform687.addChild(Shape688)

HAnimSegment682.addChild(Transform687)
Transform689 = x3d.Transform()
Transform689.setTranslation(x3d.doubleToFloat([0.11,1.427,-0.1375]))
Shape690 = x3d.Shape()
Shape690.setUSE("skinsphere")

Transform689.addChild(Shape690)

HAnimSegment682.addChild(Transform689)
HAnimSite691 = x3d.HAnimSite()
HAnimSite691.setDEF("Joe_l_acromion")
HAnimSite691.setName("l_acromion")
HAnimSite691.setTranslation(x3d.doubleToFloat([0.175,1.4825,-0.06]))
Shape692 = x3d.Shape()
Shape692.setUSE("sitebox")

HAnimSite691.addChild(Shape692)

HAnimSegment682.addChild(HAnimSite691)
HAnimSite693 = x3d.HAnimSite()
HAnimSite693.setDEF("Joe_l_axilla_ant")
HAnimSite693.setName("l_axilla_ant")
HAnimSite693.setTranslation(x3d.doubleToFloat([0.17,1.38,0.007]))
Shape694 = x3d.Shape()
Shape694.setUSE("sitebox")

HAnimSite693.addChild(Shape694)

HAnimSegment682.addChild(HAnimSite693)
HAnimSite695 = x3d.HAnimSite()
HAnimSite695.setDEF("Joe_l_axilla_post")
HAnimSite695.setName("l_axilla_post")
HAnimSite695.setTranslation(x3d.doubleToFloat([0.16,1.38,-0.125]))
Shape696 = x3d.Shape()
Shape696.setUSE("sitebox")

HAnimSite695.addChild(Shape696)

HAnimSegment682.addChild(HAnimSite695)

HAnimJoint681.addChild(HAnimSegment682)
HAnimJoint697 = x3d.HAnimJoint()
HAnimJoint697.setDEF("Joe_l_shoulder")
HAnimJoint697.setName("l_shoulder")
HAnimJoint697.setRotation(x3d.doubleToFloat([0.978440403355312,0,0.206529361307055,0.207668332501419]))
HAnimJoint697.setCenter(x3d.doubleToFloat([0.2,1.44,-0.04]))
HAnimJoint697.setSkinCoordIndex([41,42,44,80,102,103,104,105])
HAnimJoint697.setSkinCoordWeight(x3d.doubleToFloat([1,1,1,1,1,1,1,1]))
HAnimSegment698 = x3d.HAnimSegment()
HAnimSegment698.setDEF("Joe_l_upperarm")
HAnimSegment698.setName("l_upperarm")
Shape699 = x3d.Shape()
Appearance700 = x3d.Appearance()
Appearance700.setUSE("SegmentLine")

Shape699.setAppearance(Appearance700)
IndexedLineSet701 = x3d.IndexedLineSet()
IndexedLineSet701.setCoordIndex([0,1,-1])
Coordinate702 = x3d.Coordinate()
Coordinate702.setPoint(x3d.doubleToFloat([0.2029,1.44,-0.0387,0.2,1.1388,-0.04]))

IndexedLineSet701.setCoord(Coordinate702)

Shape699.setGeometry(IndexedLineSet701)

HAnimSegment698.addChild(Shape699)
Transform703 = x3d.Transform()
Transform703.setTranslation(x3d.doubleToFloat([0.2,1.44,-0.04]))
Shape704 = x3d.Shape()
Shape704.setUSE("jointbox")

Transform703.addChild(Shape704)

HAnimSegment698.addChild(Transform703)
Transform705 = x3d.Transform()
Transform705.setTranslation(x3d.doubleToFloat([0.235,1.42,-0.0625]))
Shape706 = x3d.Shape()
Shape706.setUSE("skinsphere")

Transform705.addChild(Shape706)

HAnimSegment698.addChild(Transform705)
Transform707 = x3d.Transform()
Transform707.setTranslation(x3d.doubleToFloat([0.25,1.27,-0.04]))
Shape708 = x3d.Shape()
Shape708.setUSE("skinsphere")

Transform707.addChild(Shape708)

HAnimSegment698.addChild(Transform707)
Transform709 = x3d.Transform()
Transform709.setTranslation(x3d.doubleToFloat([0.17,1.27,-0.04]))
Shape710 = x3d.Shape()
Shape710.setUSE("skinsphere")

Transform709.addChild(Shape710)

HAnimSegment698.addChild(Transform709)
Transform711 = x3d.Transform()
Transform711.setTranslation(x3d.doubleToFloat([0.2,1.27,-0.09]))
Shape712 = x3d.Shape()
Shape712.setUSE("skinsphere")

Transform711.addChild(Shape712)

HAnimSegment698.addChild(Transform711)
Transform713 = x3d.Transform()
Transform713.setTranslation(x3d.doubleToFloat([0.2,1.27,0.02]))
Shape714 = x3d.Shape()
Shape714.setUSE("skinsphere")

Transform713.addChild(Shape714)

HAnimSegment698.addChild(Transform713)
HAnimSite715 = x3d.HAnimSite()
HAnimSite715.setDEF("Joe_l_humeral_medial_epicn")
HAnimSite715.setName("l_humeral_medial_epicn")
HAnimSite715.setTranslation(x3d.doubleToFloat([0.165,1.1388,-0.04]))
Shape716 = x3d.Shape()
Shape716.setUSE("sitebox")

HAnimSite715.addChild(Shape716)

HAnimSegment698.addChild(HAnimSite715)
HAnimSite717 = x3d.HAnimSite()
HAnimSite717.setDEF("Joe_l_radiale")
HAnimSite717.setName("l_radiale")
HAnimSite717.setTranslation(x3d.doubleToFloat([0.23,1.133,-0.055]))
Shape718 = x3d.Shape()
Shape718.setUSE("sitebox")

HAnimSite717.addChild(Shape718)

HAnimSegment698.addChild(HAnimSite717)
HAnimSite719 = x3d.HAnimSite()
HAnimSite719.setDEF("Joe_l_humeral_lateral_epicn")
HAnimSite719.setName("l_humeral_lateral_epicn")
HAnimSite719.setTranslation(x3d.doubleToFloat([0.244,1.1388,-0.04]))
Shape720 = x3d.Shape()
Shape720.setUSE("sitebox")

HAnimSite719.addChild(Shape720)

HAnimSegment698.addChild(HAnimSite719)

HAnimJoint697.addChild(HAnimSegment698)
HAnimJoint721 = x3d.HAnimJoint()
HAnimJoint721.setDEF("Joe_l_elbow")
HAnimJoint721.setName("l_elbow")
HAnimJoint721.setRotation(x3d.doubleToFloat([-0.999999999999982,0,0,0.139356882713934]))
HAnimJoint721.setCenter(x3d.doubleToFloat([0.2,1.1388,-0.04]))
HAnimJoint721.setSkinCoordIndex([45,46,47,109,110,111,112,113,115,116,117,118])
HAnimJoint721.setSkinCoordWeight(x3d.doubleToFloat([1,1,1,1,1,1,1,1,1,1,1,1,1,1,1]))
HAnimSegment722 = x3d.HAnimSegment()
HAnimSegment722.setDEF("Joe_l_forearm")
HAnimSegment722.setName("l_forearm")
Shape723 = x3d.Shape()
Appearance724 = x3d.Appearance()
Appearance724.setUSE("SegmentLine")

Shape723.setAppearance(Appearance724)
IndexedLineSet725 = x3d.IndexedLineSet()
IndexedLineSet725.setCoordIndex([0,1,-1])
Coordinate726 = x3d.Coordinate()
Coordinate726.setPoint(x3d.doubleToFloat([0.2,1.1388,-0.04,0.2,0.87,-0.04]))

IndexedLineSet725.setCoord(Coordinate726)

Shape723.setGeometry(IndexedLineSet725)

HAnimSegment722.addChild(Shape723)
Transform727 = x3d.Transform()
Transform727.setTranslation(x3d.doubleToFloat([0.2,1.1388,-0.04]))
Shape728 = x3d.Shape()
Shape728.setUSE("jointbox")

Transform727.addChild(Shape728)

HAnimSegment722.addChild(Transform727)
Transform729 = x3d.Transform()
Transform729.setTranslation(x3d.doubleToFloat([0.2,1.1388,-0.013]))
Shape730 = x3d.Shape()
Shape730.setUSE("skinsphere")

Transform729.addChild(Shape730)

HAnimSegment722.addChild(Transform729)
Transform731 = x3d.Transform()
Transform731.setTranslation(x3d.doubleToFloat([0.225,1,-0.01]))
Shape732 = x3d.Shape()
Shape732.setUSE("skinsphere")

Transform731.addChild(Shape732)

HAnimSegment722.addChild(Transform731)
Transform733 = x3d.Transform()
Transform733.setTranslation(x3d.doubleToFloat([0.225,1,-0.07]))
Shape734 = x3d.Shape()
Shape734.setUSE("skinsphere")

Transform733.addChild(Shape734)

HAnimSegment722.addChild(Transform733)
Transform735 = x3d.Transform()
Transform735.setTranslation(x3d.doubleToFloat([0.185,1,-0.01]))
Shape736 = x3d.Shape()
Shape736.setUSE("skinsphere")

Transform735.addChild(Shape736)

HAnimSegment722.addChild(Transform735)
Transform737 = x3d.Transform()
Transform737.setTranslation(x3d.doubleToFloat([0.185,1,-0.07]))
Shape738 = x3d.Shape()
Shape738.setUSE("skinsphere")

Transform737.addChild(Shape738)

HAnimSegment722.addChild(Transform737)
HAnimSite739 = x3d.HAnimSite()
HAnimSite739.setDEF("Joe_l_radial_styloid")
HAnimSite739.setName("l_radial_styloid")
HAnimSite739.setTranslation(x3d.doubleToFloat([0.1901,0.8645,-0.0415]))
Shape740 = x3d.Shape()
Shape740.setUSE("sitebox")

HAnimSite739.addChild(Shape740)

HAnimSegment722.addChild(HAnimSite739)
HAnimSite741 = x3d.HAnimSite()
HAnimSite741.setDEF("Joe_l_olecranon")
HAnimSite741.setName("l_olecranon")
HAnimSite741.setTranslation(x3d.doubleToFloat([0.2,1.1388,-0.08]))
Shape742 = x3d.Shape()
Shape742.setUSE("sitebox")

HAnimSite741.addChild(Shape742)

HAnimSegment722.addChild(HAnimSite741)

HAnimJoint721.addChild(HAnimSegment722)
HAnimJoint743 = x3d.HAnimJoint()
HAnimJoint743.setDEF("Joe_l_wrist")
HAnimJoint743.setName("l_wrist")
HAnimJoint743.setRotation(x3d.doubleToFloat([-0.0686990484698033,-0.996963540991216,0.0366624968270793,0.495650570003821]))
HAnimJoint743.setCenter(x3d.doubleToFloat([0.2,0.87,-0.04]))
HAnimJoint743.setSkinCoordIndex([119,120,121,122,123,124,125,126])
HAnimJoint743.setSkinCoordWeight(x3d.doubleToFloat([1,1,1,1,1,1,1,1]))
HAnimSegment744 = x3d.HAnimSegment()
HAnimSegment744.setDEF("Joe_l_hand")
HAnimSegment744.setName("l_hand")
Shape745 = x3d.Shape()
Appearance746 = x3d.Appearance()
Appearance746.setUSE("SegmentLine")

Shape745.setAppearance(Appearance746)
IndexedLineSet747 = x3d.IndexedLineSet()
IndexedLineSet747.setCoordIndex([0,1,-1,0,2,-1,0,3,-1,0,4,-1,0,5,-1])
Coordinate748 = x3d.Coordinate()
Coordinate748.setPoint(x3d.doubleToFloat([0.2,0.87,-0.04,0.1924,0.8472,-0.0534,0.1983,0.8024,-0.028,0.1987,0.8029,-0.053,0.1956,0.8019,-0.0794,0.1925,0.8066,-0.1036]))

IndexedLineSet747.setCoord(Coordinate748)

Shape745.setGeometry(IndexedLineSet747)

HAnimSegment744.addChild(Shape745)
Transform749 = x3d.Transform()
Transform749.setTranslation(x3d.doubleToFloat([0.2,0.87,-0.04]))
Shape750 = x3d.Shape()
Shape750.setUSE("jointbox")

Transform749.addChild(Shape750)

HAnimSegment744.addChild(Transform749)
HAnimSite751 = x3d.HAnimSite()
HAnimSite751.setDEF("Joe_l_metacarpal_pha2")
HAnimSite751.setName("l_metacarpal_pha2")
HAnimSite751.setTranslation(x3d.doubleToFloat([0.2009,0.8139,-0.0237]))
Shape752 = x3d.Shape()
Shape752.setUSE("sitebox")

HAnimSite751.addChild(Shape752)

HAnimSegment744.addChild(HAnimSite751)
HAnimSite753 = x3d.HAnimSite()
HAnimSite753.setDEF("Joe_l_ulnar_styloid")
HAnimSite753.setName("l_ulnar_styloid")
HAnimSite753.setTranslation(x3d.doubleToFloat([0.2142,0.8529,-0.0648]))
Shape754 = x3d.Shape()
Shape754.setUSE("sitebox")

HAnimSite753.addChild(Shape754)

HAnimSegment744.addChild(HAnimSite753)
HAnimSite755 = x3d.HAnimSite()
HAnimSite755.setDEF("Joe_l_metacarpal_pha5")
HAnimSite755.setName("l_metacarpal_pha5")
HAnimSite755.setTranslation(x3d.doubleToFloat([0.1929,0.786,-0.1122]))
Shape756 = x3d.Shape()
Shape756.setUSE("sitebox")

HAnimSite755.addChild(Shape756)

HAnimSegment744.addChild(HAnimSite755)

HAnimJoint743.addChild(HAnimSegment744)
HAnimJoint757 = x3d.HAnimJoint()
HAnimJoint757.setDEF("Joe_l_thumb1")
HAnimJoint757.setName("l_thumb1")
HAnimJoint757.setCenter(x3d.doubleToFloat([0.1924,0.8472,-0.0534]))
HAnimJoint757.setSkinCoordIndex([127,128])
HAnimJoint757.setSkinCoordWeight(x3d.doubleToFloat([1,1]))
HAnimSegment758 = x3d.HAnimSegment()
HAnimSegment758.setDEF("Joe_l_thumb_metacarpal")
HAnimSegment758.setName("l_thumb_metacarpal")
Shape759 = x3d.Shape()
Appearance760 = x3d.Appearance()
Appearance760.setUSE("SegmentLine")

Shape759.setAppearance(Appearance760)
IndexedLineSet761 = x3d.IndexedLineSet()
IndexedLineSet761.setCoordIndex([0,1,-1])
Coordinate762 = x3d.Coordinate()
Coordinate762.setPoint(x3d.doubleToFloat([0.1924,0.8472,-0.0534,0.1951,0.8226,0.0246]))

IndexedLineSet761.setCoord(Coordinate762)

Shape759.setGeometry(IndexedLineSet761)

HAnimSegment758.addChild(Shape759)
Transform763 = x3d.Transform()
Transform763.setTranslation(x3d.doubleToFloat([0.1924,0.8472,-0.0534]))
Shape764 = x3d.Shape()
Shape764.setUSE("jointbox")

Transform763.addChild(Shape764)

HAnimSegment758.addChild(Transform763)

HAnimJoint757.addChild(HAnimSegment758)
HAnimJoint765 = x3d.HAnimJoint()
HAnimJoint765.setDEF("Joe_l_thumb2")
HAnimJoint765.setName("l_thumb2")
HAnimJoint765.setCenter(x3d.doubleToFloat([0.1951,0.8226,0.0246]))
HAnimJoint765.setSkinCoordIndex([138,139,140,141,142,143])
HAnimJoint765.setSkinCoordWeight(x3d.doubleToFloat([0.5,0.5,0.5,1,1,1]))
HAnimSegment766 = x3d.HAnimSegment()
HAnimSegment766.setDEF("Joe_l_thumb_proximal")
HAnimSegment766.setName("l_thumb_distal")
Shape767 = x3d.Shape()
Appearance768 = x3d.Appearance()
Appearance768.setUSE("SegmentLine")

Shape767.setAppearance(Appearance768)
IndexedLineSet769 = x3d.IndexedLineSet()
IndexedLineSet769.setCoordIndex([0,1,-1])
Coordinate770 = x3d.Coordinate()
Coordinate770.setPoint(x3d.doubleToFloat([0.1951,0.8226,0.0246,0.1955,0.8159,0.0464]))

IndexedLineSet769.setCoord(Coordinate770)

Shape767.setGeometry(IndexedLineSet769)

HAnimSegment766.addChild(Shape767)
Transform771 = x3d.Transform()
Transform771.setTranslation(x3d.doubleToFloat([0.1951,0.8226,0.0246]))
Shape772 = x3d.Shape()
Shape772.setUSE("jointbox")

Transform771.addChild(Shape772)

HAnimSegment766.addChild(Transform771)

HAnimJoint765.addChild(HAnimSegment766)
HAnimJoint773 = x3d.HAnimJoint()
HAnimJoint773.setDEF("Joe_l_thumb3")
HAnimJoint773.setName("l_thumb3")
HAnimJoint773.setCenter(x3d.doubleToFloat([0.1955,0.8159,0.0464]))
HAnimJoint773.setSkinCoordIndex([144,145,146,147,148,149,150,151,152])
HAnimJoint773.setSkinCoordWeight(x3d.doubleToFloat([1,1,1,1,1,1,1,1,1]))
HAnimSegment774 = x3d.HAnimSegment()
HAnimSegment774.setDEF("Joe_l_thumb_distal")
HAnimSegment774.setName("l_thumb_distal")
Shape775 = x3d.Shape()
Appearance776 = x3d.Appearance()
Appearance776.setUSE("SegmentLine")

Shape775.setAppearance(Appearance776)
IndexedLineSet777 = x3d.IndexedLineSet()
IndexedLineSet777.setCoordIndex([0,1,-1])
Coordinate778 = x3d.Coordinate()
Coordinate778.setPoint(x3d.doubleToFloat([0.1955,0.8159,0.0464,0.1982,0.8061,0.0759]))

IndexedLineSet777.setCoord(Coordinate778)

Shape775.setGeometry(IndexedLineSet777)

HAnimSegment774.addChild(Shape775)
Transform779 = x3d.Transform()
Transform779.setTranslation(x3d.doubleToFloat([0.1955,0.8159,0.0464]))
Shape780 = x3d.Shape()
Shape780.setUSE("jointbox")

Transform779.addChild(Shape780)

HAnimSegment774.addChild(Transform779)
HAnimSite781 = x3d.HAnimSite()
HAnimSite781.setDEF("Joe_l_thumb_distal_tip")
HAnimSite781.setName("l_thumb_distal_tip")
HAnimSite781.setTranslation(x3d.doubleToFloat([0.1982,0.8061,0.0759]))
Shape782 = x3d.Shape()
Shape782.setUSE("sitebox")

HAnimSite781.addChild(Shape782)

HAnimSegment774.addChild(HAnimSite781)

HAnimJoint773.addChild(HAnimSegment774)

HAnimJoint765.addChild(HAnimJoint773)

HAnimJoint757.addChild(HAnimJoint765)

HAnimJoint743.addChild(HAnimJoint757)
HAnimJoint783 = x3d.HAnimJoint()
HAnimJoint783.setDEF("Joe_l_index0")
HAnimJoint783.setName("l_index0")
HAnimJoint783.setCenter(x3d.doubleToFloat([0.1983,0.8024,-0.028]))
HAnimJoint783.setSkinCoordIndex([129,130])
HAnimJoint783.setSkinCoordWeight(x3d.doubleToFloat([1,1]))
HAnimSegment784 = x3d.HAnimSegment()
HAnimSegment784.setDEF("Joe_l_index_metacarpal")
HAnimSegment784.setName("l_index_metacarpal")
Shape785 = x3d.Shape()
Appearance786 = x3d.Appearance()
Appearance786.setUSE("SegmentLine")

Shape785.setAppearance(Appearance786)
IndexedLineSet787 = x3d.IndexedLineSet()
IndexedLineSet787.setCoordIndex([0,1,-1])
Coordinate788 = x3d.Coordinate()
Coordinate788.setPoint(x3d.doubleToFloat([0.1983,0.8024,-0.028,0.1983,0.7815,-0.028]))

IndexedLineSet787.setCoord(Coordinate788)

Shape785.setGeometry(IndexedLineSet787)

HAnimSegment784.addChild(Shape785)
Transform789 = x3d.Transform()
Transform789.setTranslation(x3d.doubleToFloat([0.1983,0.8024,-0.028]))
Shape790 = x3d.Shape()
Shape790.setUSE("jointbox")

Transform789.addChild(Shape790)

HAnimSegment784.addChild(Transform789)

HAnimJoint783.addChild(HAnimSegment784)
HAnimJoint791 = x3d.HAnimJoint()
HAnimJoint791.setDEF("Joe_l_index1")
HAnimJoint791.setName("l_index1")
HAnimJoint791.setCenter(x3d.doubleToFloat([0.1983,0.7815,-0.028]))
HAnimJoint791.setSkinCoordIndex([138,139,140,153,154,155,163])
HAnimJoint791.setSkinCoordWeight(x3d.doubleToFloat([0.5,0.5,0.5,1,1,1,0.5]))
HAnimSegment792 = x3d.HAnimSegment()
HAnimSegment792.setDEF("Joe_l_index_proximal")
HAnimSegment792.setName("l_index_proximal")
Shape793 = x3d.Shape()
Appearance794 = x3d.Appearance()
Appearance794.setUSE("SegmentLine")

Shape793.setAppearance(Appearance794)
IndexedLineSet795 = x3d.IndexedLineSet()
IndexedLineSet795.setCoordIndex([0,1,-1])
Coordinate796 = x3d.Coordinate()
Coordinate796.setPoint(x3d.doubleToFloat([0.1983,0.7815,-0.028,0.2017,0.7363,-0.0248]))

IndexedLineSet795.setCoord(Coordinate796)

Shape793.setGeometry(IndexedLineSet795)

HAnimSegment792.addChild(Shape793)
Transform797 = x3d.Transform()
Transform797.setTranslation(x3d.doubleToFloat([0.1983,0.7815,-0.028]))
Shape798 = x3d.Shape()
Shape798.setUSE("jointbox")

Transform797.addChild(Shape798)

HAnimSegment792.addChild(Transform797)

HAnimJoint791.addChild(HAnimSegment792)
HAnimJoint799 = x3d.HAnimJoint()
HAnimJoint799.setDEF("Joe_l_index2")
HAnimJoint799.setName("l_index2")
HAnimJoint799.setCenter(x3d.doubleToFloat([0.2017,0.7363,-0.0248]))
HAnimJoint799.setSkinCoordIndex([166,167,168,169])
HAnimJoint799.setSkinCoordWeight(x3d.doubleToFloat([1,1,1,1]))
HAnimSegment800 = x3d.HAnimSegment()
HAnimSegment800.setDEF("Joe_l_index_middle")
HAnimSegment800.setName("l_index_middle")
Shape801 = x3d.Shape()
Appearance802 = x3d.Appearance()
Appearance802.setUSE("SegmentLine")

Shape801.setAppearance(Appearance802)
IndexedLineSet803 = x3d.IndexedLineSet()
IndexedLineSet803.setCoordIndex([0,1,-1])
Coordinate804 = x3d.Coordinate()
Coordinate804.setPoint(x3d.doubleToFloat([0.2017,0.7363,-0.0248,0.2028,0.7139,-0.0236]))

IndexedLineSet803.setCoord(Coordinate804)

Shape801.setGeometry(IndexedLineSet803)

HAnimSegment800.addChild(Shape801)
Transform805 = x3d.Transform()
Transform805.setTranslation(x3d.doubleToFloat([0.2017,0.7363,-0.0248]))
Shape806 = x3d.Shape()
Shape806.setUSE("jointbox")

Transform805.addChild(Shape806)

HAnimSegment800.addChild(Transform805)

HAnimJoint799.addChild(HAnimSegment800)
HAnimJoint807 = x3d.HAnimJoint()
HAnimJoint807.setDEF("Joe_l_index3")
HAnimJoint807.setName("l_index3")
HAnimJoint807.setCenter(x3d.doubleToFloat([0.2028,0.7139,-0.0236]))
HAnimJoint807.setSkinCoordIndex([170,171,172,173,174,175,176,177,178])
HAnimJoint807.setSkinCoordWeight(x3d.doubleToFloat([1,1,1,1,1,1,1,1,1]))
HAnimSegment808 = x3d.HAnimSegment()
HAnimSegment808.setDEF("Joe_l_index_distal")
HAnimSegment808.setName("l_index_distal")
Shape809 = x3d.Shape()
Appearance810 = x3d.Appearance()
Appearance810.setUSE("SegmentLine")

Shape809.setAppearance(Appearance810)
IndexedLineSet811 = x3d.IndexedLineSet()
IndexedLineSet811.setCoordIndex([0,1,-1])
Coordinate812 = x3d.Coordinate()
Coordinate812.setPoint(x3d.doubleToFloat([0.2028,0.7139,-0.0236,0.2089,0.6858,-0.0245]))

IndexedLineSet811.setCoord(Coordinate812)

Shape809.setGeometry(IndexedLineSet811)

HAnimSegment808.addChild(Shape809)
Transform813 = x3d.Transform()
Transform813.setTranslation(x3d.doubleToFloat([0.2028,0.7139,-0.0236]))
Shape814 = x3d.Shape()
Shape814.setUSE("jointbox")

Transform813.addChild(Shape814)

HAnimSegment808.addChild(Transform813)
HAnimSite815 = x3d.HAnimSite()
HAnimSite815.setDEF("Joe_l_index_distal_tip")
HAnimSite815.setName("l_index_distal_tip")
HAnimSite815.setTranslation(x3d.doubleToFloat([0.2089,0.6858,-0.0245]))
Shape816 = x3d.Shape()
Shape816.setUSE("sitebox")

HAnimSite815.addChild(Shape816)

HAnimSegment808.addChild(HAnimSite815)
HAnimSite817 = x3d.HAnimSite()
HAnimSite817.setDEF("Joe_l_dactylion")
HAnimSite817.setName("l_dactylion")
HAnimSite817.setTranslation(x3d.doubleToFloat([0.2056,0.6743,-0.0482]))
Shape818 = x3d.Shape()
Shape818.setUSE("sitebox")

HAnimSite817.addChild(Shape818)

HAnimSegment808.addChild(HAnimSite817)

HAnimJoint807.addChild(HAnimSegment808)

HAnimJoint799.addChild(HAnimJoint807)

HAnimJoint791.addChild(HAnimJoint799)

HAnimJoint783.addChild(HAnimJoint791)

HAnimJoint743.addChild(HAnimJoint783)
HAnimJoint819 = x3d.HAnimJoint()
HAnimJoint819.setDEF("Joe_l_middle0")
HAnimJoint819.setName("l_middle0")
HAnimJoint819.setCenter(x3d.doubleToFloat([0.1987,0.8029,-0.053]))
HAnimJoint819.setSkinCoordIndex([131,132])
HAnimJoint819.setSkinCoordWeight(x3d.doubleToFloat([1,1]))
HAnimSegment820 = x3d.HAnimSegment()
HAnimSegment820.setDEF("Joe_l_middle_metacarpal")
HAnimSegment820.setName("l_middle_metacarpal")
Shape821 = x3d.Shape()
Appearance822 = x3d.Appearance()
Appearance822.setUSE("SegmentLine")

Shape821.setAppearance(Appearance822)
IndexedLineSet823 = x3d.IndexedLineSet()
IndexedLineSet823.setCoordIndex([0,1,-1])
Coordinate824 = x3d.Coordinate()
Coordinate824.setPoint(x3d.doubleToFloat([0.1987,0.8029,-0.053,0.1987,0.7818,-0.053]))

IndexedLineSet823.setCoord(Coordinate824)

Shape821.setGeometry(IndexedLineSet823)

HAnimSegment820.addChild(Shape821)
Transform825 = x3d.Transform()
Transform825.setTranslation(x3d.doubleToFloat([0.1987,0.8029,-0.053]))
Shape826 = x3d.Shape()
Shape826.setUSE("jointbox")

Transform825.addChild(Shape826)

HAnimSegment820.addChild(Transform825)

HAnimJoint819.addChild(HAnimSegment820)
HAnimJoint827 = x3d.HAnimJoint()
HAnimJoint827.setDEF("Joe_l_middle1")
HAnimJoint827.setName("l_middle1")
HAnimJoint827.setCenter(x3d.doubleToFloat([0.1987,0.7818,-0.053]))
HAnimJoint827.setSkinCoordIndex([156,157,163,164])
HAnimJoint827.setSkinCoordWeight(x3d.doubleToFloat([1,1,0.5,0.5]))
HAnimSegment828 = x3d.HAnimSegment()
HAnimSegment828.setDEF("Joe_l_middle_proximal")
HAnimSegment828.setName("l_middle_proximal")
Shape829 = x3d.Shape()
Appearance830 = x3d.Appearance()
Appearance830.setUSE("SegmentLine")

Shape829.setAppearance(Appearance830)
IndexedLineSet831 = x3d.IndexedLineSet()
IndexedLineSet831.setCoordIndex([0,1,-1])
Coordinate832 = x3d.Coordinate()
Coordinate832.setPoint(x3d.doubleToFloat([0.1987,0.7818,-0.053,0.2013,0.7273,-0.0503]))

IndexedLineSet831.setCoord(Coordinate832)

Shape829.setGeometry(IndexedLineSet831)

HAnimSegment828.addChild(Shape829)
Transform833 = x3d.Transform()
Transform833.setTranslation(x3d.doubleToFloat([0.1987,0.7818,-0.053]))
Shape834 = x3d.Shape()
Shape834.setUSE("jointbox")

Transform833.addChild(Shape834)

HAnimSegment828.addChild(Transform833)

HAnimJoint827.addChild(HAnimSegment828)
HAnimJoint835 = x3d.HAnimJoint()
HAnimJoint835.setDEF("Joe_l_middle2")
HAnimJoint835.setName("l_middle2")
HAnimJoint835.setCenter(x3d.doubleToFloat([0.2013,0.7273,-0.0503]))
HAnimJoint835.setSkinCoordIndex([179,180,181,182])
HAnimJoint835.setSkinCoordWeight(x3d.doubleToFloat([1,1,1,1]))
HAnimSegment836 = x3d.HAnimSegment()
HAnimSegment836.setDEF("Joe_l_middle_middle")
HAnimSegment836.setName("l_middle_middle")
Shape837 = x3d.Shape()
Appearance838 = x3d.Appearance()
Appearance838.setUSE("SegmentLine")

Shape837.setAppearance(Appearance838)
IndexedLineSet839 = x3d.IndexedLineSet()
IndexedLineSet839.setCoordIndex([0,1,-1])
Coordinate840 = x3d.Coordinate()
Coordinate840.setPoint(x3d.doubleToFloat([0.2013,0.7273,-0.0503,0.2026,0.7011,-0.0494]))

IndexedLineSet839.setCoord(Coordinate840)

Shape837.setGeometry(IndexedLineSet839)

HAnimSegment836.addChild(Shape837)
Transform841 = x3d.Transform()
Transform841.setTranslation(x3d.doubleToFloat([0.2013,0.7273,-0.0503]))
Shape842 = x3d.Shape()
Shape842.setUSE("jointbox")

Transform841.addChild(Shape842)

HAnimSegment836.addChild(Transform841)

HAnimJoint835.addChild(HAnimSegment836)
HAnimJoint843 = x3d.HAnimJoint()
HAnimJoint843.setDEF("Joe_l_middle3")
HAnimJoint843.setName("l_middle3")
HAnimJoint843.setCenter(x3d.doubleToFloat([0.2026,0.7011,-0.0494]))
HAnimJoint843.setSkinCoordIndex([183,184,185,186,187,188,189,190,191])
HAnimJoint843.setSkinCoordWeight(x3d.doubleToFloat([1,1,1,1,1,1,1,1,1]))
HAnimSegment844 = x3d.HAnimSegment()
HAnimSegment844.setDEF("Joe_l_middle_distal")
HAnimSegment844.setName("l_middle_distal")
Shape845 = x3d.Shape()
Appearance846 = x3d.Appearance()
Appearance846.setUSE("SegmentLine")

Shape845.setAppearance(Appearance846)
IndexedLineSet847 = x3d.IndexedLineSet()
IndexedLineSet847.setCoordIndex([0,1,-1])
Coordinate848 = x3d.Coordinate()
Coordinate848.setPoint(x3d.doubleToFloat([0.2026,0.7011,-0.0494,0.208,0.6731,-0.0491]))

IndexedLineSet847.setCoord(Coordinate848)

Shape845.setGeometry(IndexedLineSet847)

HAnimSegment844.addChild(Shape845)
HAnimSite849 = x3d.HAnimSite()
HAnimSite849.setDEF("Joe_l_middle_distal_tip")
HAnimSite849.setName("l_middle_distal_tip")
HAnimSite849.setTranslation(x3d.doubleToFloat([0.208,0.6731,-0.0491]))
Shape850 = x3d.Shape()
Shape850.setUSE("sitebox")

HAnimSite849.addChild(Shape850)

HAnimSegment844.addChild(HAnimSite849)
Transform851 = x3d.Transform()
Transform851.setTranslation(x3d.doubleToFloat([0.2026,0.7011,-0.0494]))
Shape852 = x3d.Shape()
Shape852.setUSE("jointbox")

Transform851.addChild(Shape852)

HAnimSegment844.addChild(Transform851)

HAnimJoint843.addChild(HAnimSegment844)

HAnimJoint835.addChild(HAnimJoint843)

HAnimJoint827.addChild(HAnimJoint835)

HAnimJoint819.addChild(HAnimJoint827)

HAnimJoint743.addChild(HAnimJoint819)
HAnimJoint853 = x3d.HAnimJoint()
HAnimJoint853.setDEF("Joe_l_ring0")
HAnimJoint853.setName("l_ring0")
HAnimJoint853.setCenter(x3d.doubleToFloat([0.1956,0.8019,-0.0794]))
HAnimJoint853.setSkinCoordIndex([133,134])
HAnimJoint853.setSkinCoordWeight(x3d.doubleToFloat([1,1]))
HAnimSegment854 = x3d.HAnimSegment()
HAnimSegment854.setDEF("Joe_l_ring_metacarpal")
HAnimSegment854.setName("l_ring_metacarpal")
Shape855 = x3d.Shape()
Appearance856 = x3d.Appearance()
Appearance856.setUSE("SegmentLine")

Shape855.setAppearance(Appearance856)
IndexedLineSet857 = x3d.IndexedLineSet()
IndexedLineSet857.setCoordIndex([0,1,-1])
Coordinate858 = x3d.Coordinate()
Coordinate858.setPoint(x3d.doubleToFloat([0.1956,0.8019,-0.0794,0.1956,0.7815,-0.0794]))

IndexedLineSet857.setCoord(Coordinate858)

Shape855.setGeometry(IndexedLineSet857)

HAnimSegment854.addChild(Shape855)
Transform859 = x3d.Transform()
Transform859.setTranslation(x3d.doubleToFloat([0.1956,0.8019,-0.0794]))
Shape860 = x3d.Shape()
Shape860.setUSE("jointbox")

Transform859.addChild(Shape860)

HAnimSegment854.addChild(Transform859)

HAnimJoint853.addChild(HAnimSegment854)
HAnimJoint861 = x3d.HAnimJoint()
HAnimJoint861.setDEF("Joe_l_ring1")
HAnimJoint861.setName("l_ring1")
HAnimJoint861.setCenter(x3d.doubleToFloat([0.1956,0.7815,-0.0794]))
HAnimJoint861.setSkinCoordIndex([158,159,164,165])
HAnimJoint861.setSkinCoordWeight(x3d.doubleToFloat([1,1,0.5,0.5]))
HAnimSegment862 = x3d.HAnimSegment()
HAnimSegment862.setDEF("Joe_l_ring_proximal")
HAnimSegment862.setName("l_ring_proximal")
Shape863 = x3d.Shape()
Appearance864 = x3d.Appearance()
Appearance864.setUSE("SegmentLine")

Shape863.setAppearance(Appearance864)
IndexedLineSet865 = x3d.IndexedLineSet()
IndexedLineSet865.setCoordIndex([0,1,-1])
Coordinate866 = x3d.Coordinate()
Coordinate866.setPoint(x3d.doubleToFloat([0.1956,0.7815,-0.0794,0.1973,0.7287,-0.0777]))

IndexedLineSet865.setCoord(Coordinate866)

Shape863.setGeometry(IndexedLineSet865)

HAnimSegment862.addChild(Shape863)
Transform867 = x3d.Transform()
Transform867.setTranslation(x3d.doubleToFloat([0.1956,0.7815,-0.0794]))
Shape868 = x3d.Shape()
Shape868.setUSE("jointbox")

Transform867.addChild(Shape868)

HAnimSegment862.addChild(Transform867)

HAnimJoint861.addChild(HAnimSegment862)
HAnimJoint869 = x3d.HAnimJoint()
HAnimJoint869.setDEF("Joe_l_ring2")
HAnimJoint869.setName("l_ring2")
HAnimJoint869.setCenter(x3d.doubleToFloat([0.1973,0.7287,-0.0777]))
HAnimJoint869.setSkinCoordIndex([192,193,194,195])
HAnimJoint869.setSkinCoordWeight(x3d.doubleToFloat([1,1,1,1]))
HAnimSegment870 = x3d.HAnimSegment()
HAnimSegment870.setDEF("Joe_l_ring_middle")
HAnimSegment870.setName("l_ring_middle")
Shape871 = x3d.Shape()
Appearance872 = x3d.Appearance()
Appearance872.setUSE("SegmentLine")

Shape871.setAppearance(Appearance872)
IndexedLineSet873 = x3d.IndexedLineSet()
IndexedLineSet873.setCoordIndex([0,1,-1])
Coordinate874 = x3d.Coordinate()
Coordinate874.setPoint(x3d.doubleToFloat([0.1973,0.7287,-0.0777,0.1983,0.7045,-0.0767]))

IndexedLineSet873.setCoord(Coordinate874)

Shape871.setGeometry(IndexedLineSet873)

HAnimSegment870.addChild(Shape871)
Transform875 = x3d.Transform()
Transform875.setTranslation(x3d.doubleToFloat([0.1973,0.7287,-0.0777]))
Shape876 = x3d.Shape()
Shape876.setUSE("jointbox")

Transform875.addChild(Shape876)

HAnimSegment870.addChild(Transform875)

HAnimJoint869.addChild(HAnimSegment870)
HAnimJoint877 = x3d.HAnimJoint()
HAnimJoint877.setDEF("Joe_l_ring3")
HAnimJoint877.setName("l_ring3")
HAnimJoint877.setCenter(x3d.doubleToFloat([0.1983,0.7045,-0.0767]))
HAnimJoint877.setSkinCoordIndex([196,197,198,199,200,201,202,203,204])
HAnimJoint877.setSkinCoordWeight(x3d.doubleToFloat([1,1,1,1,1,1,1,1,1]))
HAnimSegment878 = x3d.HAnimSegment()
HAnimSegment878.setDEF("Joe_l_ring_distal")
HAnimSegment878.setName("l_ring_distal")
Shape879 = x3d.Shape()
Appearance880 = x3d.Appearance()
Appearance880.setUSE("SegmentLine")

Shape879.setAppearance(Appearance880)
IndexedLineSet881 = x3d.IndexedLineSet()
IndexedLineSet881.setCoordIndex([0,1,-1])
Coordinate882 = x3d.Coordinate()
Coordinate882.setPoint(x3d.doubleToFloat([0.1983,0.7045,-0.0767,0.2035,0.675,-0.0756]))

IndexedLineSet881.setCoord(Coordinate882)

Shape879.setGeometry(IndexedLineSet881)

HAnimSegment878.addChild(Shape879)
Transform883 = x3d.Transform()
Transform883.setTranslation(x3d.doubleToFloat([0.1983,0.7045,-0.0767]))
Shape884 = x3d.Shape()
Shape884.setUSE("jointbox")

Transform883.addChild(Shape884)

HAnimSegment878.addChild(Transform883)
HAnimSite885 = x3d.HAnimSite()
HAnimSite885.setDEF("Joe_l_ring_distal_tip")
HAnimSite885.setName("l_ring_distal_tip")
HAnimSite885.setTranslation(x3d.doubleToFloat([0.2035,0.675,-0.0756]))
Shape886 = x3d.Shape()
Shape886.setUSE("sitebox")

HAnimSite885.addChild(Shape886)

HAnimSegment878.addChild(HAnimSite885)

HAnimJoint877.addChild(HAnimSegment878)

HAnimJoint869.addChild(HAnimJoint877)

HAnimJoint861.addChild(HAnimJoint869)

HAnimJoint853.addChild(HAnimJoint861)

HAnimJoint743.addChild(HAnimJoint853)
HAnimJoint887 = x3d.HAnimJoint()
HAnimJoint887.setDEF("Joe_l_pinky0")
HAnimJoint887.setName("l_pinky0")
HAnimJoint887.setCenter(x3d.doubleToFloat([0.1925,0.8066,-0.1036]))
HAnimJoint887.setSkinCoordIndex([135,136,137,165])
HAnimJoint887.setSkinCoordWeight(x3d.doubleToFloat([1,1,1,0.5]))
HAnimSegment888 = x3d.HAnimSegment()
HAnimSegment888.setDEF("Joe_l_pinky_metacarpal")
HAnimSegment888.setName("l_pinky_metacarpal")
Shape889 = x3d.Shape()
Appearance890 = x3d.Appearance()
Appearance890.setUSE("SegmentLine")

Shape889.setAppearance(Appearance890)
IndexedLineSet891 = x3d.IndexedLineSet()
IndexedLineSet891.setCoordIndex([0,1,-1])
Coordinate892 = x3d.Coordinate()
Coordinate892.setPoint(x3d.doubleToFloat([0.1925,0.8066,-0.1036,0.1925,0.7866,-0.1036]))

IndexedLineSet891.setCoord(Coordinate892)

Shape889.setGeometry(IndexedLineSet891)

HAnimSegment888.addChild(Shape889)
Transform893 = x3d.Transform()
Transform893.setTranslation(x3d.doubleToFloat([0.1925,0.8066,-0.1036]))
Shape894 = x3d.Shape()
Shape894.setUSE("jointbox")

Transform893.addChild(Shape894)

HAnimSegment888.addChild(Transform893)

HAnimJoint887.addChild(HAnimSegment888)
HAnimJoint895 = x3d.HAnimJoint()
HAnimJoint895.setDEF("Joe_l_pinky1")
HAnimJoint895.setName("l_pinky1")
HAnimJoint895.setCenter(x3d.doubleToFloat([0.1925,0.7866,-0.1036]))
HAnimJoint895.setSkinCoordIndex([160,161,162])
HAnimJoint895.setSkinCoordWeight(x3d.doubleToFloat([1,1,1]))
HAnimSegment896 = x3d.HAnimSegment()
HAnimSegment896.setDEF("Joe_l_pinky_proximal")
HAnimSegment896.setName("l_pinky_proximal")
Shape897 = x3d.Shape()
Appearance898 = x3d.Appearance()
Appearance898.setUSE("SegmentLine")

Shape897.setAppearance(Appearance898)
IndexedLineSet899 = x3d.IndexedLineSet()
IndexedLineSet899.setCoordIndex([0,1,-1])
Coordinate900 = x3d.Coordinate()
Coordinate900.setPoint(x3d.doubleToFloat([0.1925,0.7866,-0.1036,0.1938,0.7452,-0.1024]))

IndexedLineSet899.setCoord(Coordinate900)

Shape897.setGeometry(IndexedLineSet899)

HAnimSegment896.addChild(Shape897)
Transform901 = x3d.Transform()
Transform901.setTranslation(x3d.doubleToFloat([0.1925,0.7866,-0.1036]))
Shape902 = x3d.Shape()
Shape902.setUSE("jointbox")

Transform901.addChild(Shape902)

HAnimSegment896.addChild(Transform901)

HAnimJoint895.addChild(HAnimSegment896)
HAnimJoint903 = x3d.HAnimJoint()
HAnimJoint903.setDEF("Joe_l_pinky2")
HAnimJoint903.setName("l_pinky2")
HAnimJoint903.setCenter(x3d.doubleToFloat([0.1938,0.7452,-0.1024]))
HAnimJoint903.setSkinCoordIndex([205,206,207,208])
HAnimJoint903.setSkinCoordWeight(x3d.doubleToFloat([1,1,1,1]))
HAnimSegment904 = x3d.HAnimSegment()
HAnimSegment904.setDEF("Joe_l_pinky_middle")
HAnimSegment904.setName("l_pinky_middle")
Transform905 = x3d.Transform()
Transform905.setTranslation(x3d.doubleToFloat([0.1938,0.7452,-0.1024]))
Shape906 = x3d.Shape()
Shape906.setUSE("jointbox")

Transform905.addChild(Shape906)

HAnimSegment904.addChild(Transform905)
Shape907 = x3d.Shape()
Appearance908 = x3d.Appearance()
Appearance908.setUSE("SegmentLine")

Shape907.setAppearance(Appearance908)
IndexedLineSet909 = x3d.IndexedLineSet()
IndexedLineSet909.setCoordIndex([0,1,-1])
Coordinate910 = x3d.Coordinate()
Coordinate910.setPoint(x3d.doubleToFloat([0.1938,0.7452,-0.1024,0.1948,0.7277,-0.1017]))

IndexedLineSet909.setCoord(Coordinate910)

Shape907.setGeometry(IndexedLineSet909)

HAnimSegment904.addChild(Shape907)

HAnimJoint903.addChild(HAnimSegment904)
HAnimJoint911 = x3d.HAnimJoint()
HAnimJoint911.setDEF("Joe_l_pinky3")
HAnimJoint911.setName("l_pinky3")
HAnimJoint911.setCenter(x3d.doubleToFloat([0.1948,0.7277,-0.1017]))
HAnimJoint911.setSkinCoordIndex([209,210,211,212,213,214,215,216,217])
HAnimJoint911.setSkinCoordWeight(x3d.doubleToFloat([1,1,1,1,1,1,1,1,1]))
HAnimSegment912 = x3d.HAnimSegment()
HAnimSegment912.setDEF("Joe_l_pinky_distal")
HAnimSegment912.setName("l_pinky_distal")
Shape913 = x3d.Shape()
Appearance914 = x3d.Appearance()
Appearance914.setUSE("SegmentLine")

Shape913.setAppearance(Appearance914)
IndexedLineSet915 = x3d.IndexedLineSet()
IndexedLineSet915.setCoordIndex([0,1,-1])
Coordinate916 = x3d.Coordinate()
Coordinate916.setPoint(x3d.doubleToFloat([0.1948,0.7277,-0.1017,0.2014,0.7009,-0.1012]))

IndexedLineSet915.setCoord(Coordinate916)

Shape913.setGeometry(IndexedLineSet915)

HAnimSegment912.addChild(Shape913)
Transform917 = x3d.Transform()
Transform917.setTranslation(x3d.doubleToFloat([0.1948,0.7277,-0.1017]))
Shape918 = x3d.Shape()
Shape918.setUSE("jointbox")

Transform917.addChild(Shape918)

HAnimSegment912.addChild(Transform917)
HAnimSite919 = x3d.HAnimSite()
HAnimSite919.setDEF("Joe_l_pinky_distal_tip")
HAnimSite919.setName("l_pinky_distal_tip")
HAnimSite919.setTranslation(x3d.doubleToFloat([0.2014,0.7009,-0.1012]))
Shape920 = x3d.Shape()
Shape920.setUSE("sitebox")

HAnimSite919.addChild(Shape920)

HAnimSegment912.addChild(HAnimSite919)

HAnimJoint911.addChild(HAnimSegment912)

HAnimJoint903.addChild(HAnimJoint911)

HAnimJoint895.addChild(HAnimJoint903)

HAnimJoint887.addChild(HAnimJoint895)

HAnimJoint743.addChild(HAnimJoint887)

HAnimJoint721.addChild(HAnimJoint743)

HAnimJoint697.addChild(HAnimJoint721)

HAnimJoint681.addChild(HAnimJoint697)

HAnimJoint671.addChild(HAnimJoint681)

HAnimJoint555.addChild(HAnimJoint671)
HAnimJoint921 = x3d.HAnimJoint()
HAnimJoint921.setDEF("Joe_r_sternoclavicular")
HAnimJoint921.setName("r_sternoclavicular")
HAnimJoint921.setCenter(x3d.doubleToFloat([-0.03,1.46,0]))
HAnimJoint921.setSkinCoordIndex([10])
HAnimJoint921.setSkinCoordWeight(x3d.doubleToFloat([1]))
HAnimSegment922 = x3d.HAnimSegment()
HAnimSegment922.setDEF("Joe_r_clavicle")
HAnimSegment922.setName("r_clavicle")
Shape923 = x3d.Shape()
Appearance924 = x3d.Appearance()
Appearance924.setUSE("SegmentLine")

Shape923.setAppearance(Appearance924)
IndexedLineSet925 = x3d.IndexedLineSet()
IndexedLineSet925.setCoordIndex([0,1,-1])
Coordinate926 = x3d.Coordinate()
Coordinate926.setPoint(x3d.doubleToFloat([-0.03,1.46,0.02,-0.09,1.41,-0.09]))

IndexedLineSet925.setCoord(Coordinate926)

Shape923.setGeometry(IndexedLineSet925)

HAnimSegment922.addChild(Shape923)
Transform927 = x3d.Transform()
Transform927.setTranslation(x3d.doubleToFloat([-0.03,1.46,0.02]))
Shape928 = x3d.Shape()
Shape928.setUSE("jointbox")

Transform927.addChild(Shape928)

HAnimSegment922.addChild(Transform927)
HAnimSite929 = x3d.HAnimSite()
HAnimSite929.setDEF("Joe_r_clavicale")
HAnimSite929.setName("r_clavicale")
HAnimSite929.setTranslation(x3d.doubleToFloat([-0.03,1.46,0.035]))
Shape930 = x3d.Shape()
Shape930.setUSE("sitebox")

HAnimSite929.addChild(Shape930)

HAnimSegment922.addChild(HAnimSite929)

HAnimJoint921.addChild(HAnimSegment922)
HAnimJoint931 = x3d.HAnimJoint()
HAnimJoint931.setDEF("Joe_r_acromioclavicular")
HAnimJoint931.setName("r_acromioclavicular")
HAnimJoint931.setCenter(x3d.doubleToFloat([-0.09,1.41,-0.11]))
HAnimJoint931.setSkinCoordIndex([77,29])
HAnimJoint931.setSkinCoordWeight(x3d.doubleToFloat([1,0.9]))
HAnimSegment932 = x3d.HAnimSegment()
HAnimSegment932.setDEF("Joe_r_scapula")
HAnimSegment932.setName("r_scapula")
Shape933 = x3d.Shape()
Appearance934 = x3d.Appearance()
Appearance934.setUSE("SegmentLine")

Shape933.setAppearance(Appearance934)
IndexedLineSet935 = x3d.IndexedLineSet()
IndexedLineSet935.setCoordIndex([0,1,-1])
Coordinate936 = x3d.Coordinate()
Coordinate936.setPoint(x3d.doubleToFloat([-0.09,1.41,-0.09,-0.2,1.44,-0.04]))

IndexedLineSet935.setCoord(Coordinate936)

Shape933.setGeometry(IndexedLineSet935)

HAnimSegment932.addChild(Shape933)
Transform937 = x3d.Transform()
Transform937.setTranslation(x3d.doubleToFloat([-0.09,1.41,-0.09]))
Shape938 = x3d.Shape()
Shape938.setUSE("jointbox")

Transform937.addChild(Shape938)

HAnimSegment932.addChild(Transform937)
Transform939 = x3d.Transform()
Transform939.setTranslation(x3d.doubleToFloat([-0.11,1.427,-0.1375]))
Shape940 = x3d.Shape()
Shape940.setUSE("skinsphere")

Transform939.addChild(Shape940)

HAnimSegment932.addChild(Transform939)
HAnimSite941 = x3d.HAnimSite()
HAnimSite941.setDEF("Joe_r_acromion")
HAnimSite941.setName("r_acromion")
HAnimSite941.setTranslation(x3d.doubleToFloat([-0.178,1.4825,-0.0625]))
Shape942 = x3d.Shape()
Shape942.setUSE("sitebox")

HAnimSite941.addChild(Shape942)

HAnimSegment932.addChild(HAnimSite941)
HAnimSite943 = x3d.HAnimSite()
HAnimSite943.setDEF("Joe_r_axilla_ant")
HAnimSite943.setName("r_axilla_ant")
HAnimSite943.setTranslation(x3d.doubleToFloat([-0.17,1.38,0.007]))
Shape944 = x3d.Shape()
Shape944.setUSE("sitebox")

HAnimSite943.addChild(Shape944)

HAnimSegment932.addChild(HAnimSite943)
HAnimSite945 = x3d.HAnimSite()
HAnimSite945.setDEF("Joe_r_axilla_post")
HAnimSite945.setName("r_axilla_post")
HAnimSite945.setTranslation(x3d.doubleToFloat([-0.16,1.38,-0.127]))
Shape946 = x3d.Shape()
Shape946.setUSE("sitebox")

HAnimSite945.addChild(Shape946)

HAnimSegment932.addChild(HAnimSite945)

HAnimJoint931.addChild(HAnimSegment932)
HAnimJoint947 = x3d.HAnimJoint()
HAnimJoint947.setDEF("Joe_r_shoulder")
HAnimJoint947.setName("r_shoulder")
HAnimJoint947.setRotation(x3d.doubleToFloat([0,0,-0.999999999999779,0.0372377698785245]))
HAnimJoint947.setCenter(x3d.doubleToFloat([-0.2,1.44,-0.04]))
HAnimJoint947.setSkinCoordIndex([29,30,32,78,218,219,220,221,86,88])
HAnimJoint947.setSkinCoordWeight(x3d.doubleToFloat([0.1,1,1,1,1,1,1,1,0.3,0.2]))
HAnimSegment948 = x3d.HAnimSegment()
HAnimSegment948.setDEF("Joe_r_upperarm")
HAnimSegment948.setName("r_upperarm")
Transform949 = x3d.Transform()
Transform949.setTranslation(x3d.doubleToFloat([-0.2,1.44,-0.04]))
Shape950 = x3d.Shape()
Shape950.setUSE("jointbox")

Transform949.addChild(Shape950)

HAnimSegment948.addChild(Transform949)
Shape951 = x3d.Shape()
Appearance952 = x3d.Appearance()
Appearance952.setUSE("SegmentLine")

Shape951.setAppearance(Appearance952)
IndexedLineSet953 = x3d.IndexedLineSet()
IndexedLineSet953.setCoordIndex([0,1,-1])
Coordinate954 = x3d.Coordinate()
Coordinate954.setPoint(x3d.doubleToFloat([-0.2,1.44,-0.04,-0.2,1.1388,-0.04]))

IndexedLineSet953.setCoord(Coordinate954)

Shape951.setGeometry(IndexedLineSet953)

HAnimSegment948.addChild(Shape951)
Transform955 = x3d.Transform()
Transform955.setTranslation(x3d.doubleToFloat([-0.178,1.4825,-0.0625]))
Shape956 = x3d.Shape()
Shape956.setUSE("skinsphere")

Transform955.addChild(Shape956)

HAnimSegment948.addChild(Transform955)
Transform957 = x3d.Transform()
Transform957.setTranslation(x3d.doubleToFloat([-0.17,1.38,0.007]))
Shape958 = x3d.Shape()
Shape958.setUSE("skinsphere")

Transform957.addChild(Shape958)

HAnimSegment948.addChild(Transform957)
Transform959 = x3d.Transform()
Transform959.setTranslation(x3d.doubleToFloat([-0.16,1.38,-0.127]))
Shape960 = x3d.Shape()
Shape960.setUSE("skinsphere")

Transform959.addChild(Shape960)

HAnimSegment948.addChild(Transform959)
Transform961 = x3d.Transform()
Transform961.setTranslation(x3d.doubleToFloat([-0.235,1.42,-0.0625]))
Shape962 = x3d.Shape()
Shape962.setUSE("skinsphere")

Transform961.addChild(Shape962)

HAnimSegment948.addChild(Transform961)
Transform963 = x3d.Transform()
Transform963.setTranslation(x3d.doubleToFloat([-0.23,1.235,-0.04]))
Shape964 = x3d.Shape()
Shape964.setUSE("skinsphere")

Transform963.addChild(Shape964)

HAnimSegment948.addChild(Transform963)
Transform965 = x3d.Transform()
Transform965.setTranslation(x3d.doubleToFloat([-0.16,1.23,-0.04]))
Shape966 = x3d.Shape()
Shape966.setUSE("skinsphere")

Transform965.addChild(Shape966)

HAnimSegment948.addChild(Transform965)
Transform967 = x3d.Transform()
Transform967.setTranslation(x3d.doubleToFloat([-0.2,1.23,-0.105]))
Shape968 = x3d.Shape()
Shape968.setUSE("skinsphere")

Transform967.addChild(Shape968)

HAnimSegment948.addChild(Transform967)
Transform969 = x3d.Transform()
Transform969.setTranslation(x3d.doubleToFloat([-0.2,1.235,0.02]))
Shape970 = x3d.Shape()
Shape970.setUSE("skinsphere")

Transform969.addChild(Shape970)

HAnimSegment948.addChild(Transform969)
HAnimSite971 = x3d.HAnimSite()
HAnimSite971.setDEF("Joe_r_humeral_medial_epicn")
HAnimSite971.setName("r_humeral_medial_epicn")
HAnimSite971.setTranslation(x3d.doubleToFloat([-0.165,1.1388,-0.04]))
Shape972 = x3d.Shape()
Shape972.setUSE("sitebox")

HAnimSite971.addChild(Shape972)

HAnimSegment948.addChild(HAnimSite971)
HAnimSite973 = x3d.HAnimSite()
HAnimSite973.setDEF("Joe_r_radiale")
HAnimSite973.setName("r_radiale")
HAnimSite973.setTranslation(x3d.doubleToFloat([-0.23,1.133,-0.055]))
Shape974 = x3d.Shape()
Shape974.setUSE("sitebox")

HAnimSite973.addChild(Shape974)

HAnimSegment948.addChild(HAnimSite973)
HAnimSite975 = x3d.HAnimSite()
HAnimSite975.setDEF("Joe_r_humeral_lateral_epicn")
HAnimSite975.setName("r_humeral_lateral_epicn")
HAnimSite975.setTranslation(x3d.doubleToFloat([-0.244,1.1388,-0.04]))
Shape976 = x3d.Shape()
Shape976.setUSE("sitebox")

HAnimSite975.addChild(Shape976)

HAnimSegment948.addChild(HAnimSite975)

HAnimJoint947.addChild(HAnimSegment948)
HAnimJoint977 = x3d.HAnimJoint()
HAnimJoint977.setDEF("Joe_r_elbow")
HAnimJoint977.setName("r_elbow")
HAnimJoint977.setRotation(x3d.doubleToFloat([-0.970142500145333,-0.242535625036333,0,0.149344152360623]))
HAnimJoint977.setCenter(x3d.doubleToFloat([-0.2,1.1388,-0.04]))
HAnimJoint977.setSkinCoordIndex([33,34,35,225,226,227,228,229,231,232,233,234])
HAnimJoint977.setSkinCoordWeight(x3d.doubleToFloat([1,1,1,1,1,1,1,1,1,1,1,1]))
HAnimSegment978 = x3d.HAnimSegment()
HAnimSegment978.setDEF("Joe_r_forearm")
HAnimSegment978.setName("r_forearm")
Shape979 = x3d.Shape()
Appearance980 = x3d.Appearance()
Appearance980.setUSE("SegmentLine")

Shape979.setAppearance(Appearance980)
IndexedLineSet981 = x3d.IndexedLineSet()
IndexedLineSet981.setCoordIndex([0,1,-1])
Coordinate982 = x3d.Coordinate()
Coordinate982.setPoint(x3d.doubleToFloat([-0.2,1.1388,-0.04,-0.2,0.89,-0.04]))

IndexedLineSet981.setCoord(Coordinate982)

Shape979.setGeometry(IndexedLineSet981)

HAnimSegment978.addChild(Shape979)
Transform983 = x3d.Transform()
Transform983.setTranslation(x3d.doubleToFloat([-0.2,1.1388,-0.04]))
Shape984 = x3d.Shape()
Shape984.setUSE("jointbox")

Transform983.addChild(Shape984)

HAnimSegment978.addChild(Transform983)
Transform985 = x3d.Transform()
Transform985.setTranslation(x3d.doubleToFloat([-0.2,1.1388,0.013]))
Shape986 = x3d.Shape()
Shape986.setUSE("skinsphere")

Transform985.addChild(Shape986)

HAnimSegment978.addChild(Transform985)
Transform987 = x3d.Transform()
Transform987.setTranslation(x3d.doubleToFloat([-0.225,1,-0.01]))
Shape988 = x3d.Shape()
Shape988.setUSE("skinsphere")

Transform987.addChild(Shape988)

HAnimSegment978.addChild(Transform987)
Transform989 = x3d.Transform()
Transform989.setTranslation(x3d.doubleToFloat([-0.225,1,-0.07]))
Shape990 = x3d.Shape()
Shape990.setUSE("skinsphere")

Transform989.addChild(Shape990)

HAnimSegment978.addChild(Transform989)
Transform991 = x3d.Transform()
Transform991.setTranslation(x3d.doubleToFloat([-0.185,1,-0.01]))
Shape992 = x3d.Shape()
Shape992.setUSE("skinsphere")

Transform991.addChild(Shape992)

HAnimSegment978.addChild(Transform991)
Transform993 = x3d.Transform()
Transform993.setTranslation(x3d.doubleToFloat([-0.185,1,-0.07]))
Shape994 = x3d.Shape()
Shape994.setUSE("skinsphere")

Transform993.addChild(Shape994)

HAnimSegment978.addChild(Transform993)
HAnimSite995 = x3d.HAnimSite()
HAnimSite995.setDEF("Joe_r_radial_styloid")
HAnimSite995.setName("r_radial_styloid")
HAnimSite995.setTranslation(x3d.doubleToFloat([-0.2,0.9,-0.015]))
Shape996 = x3d.Shape()
Shape996.setUSE("sitebox")

HAnimSite995.addChild(Shape996)

HAnimSegment978.addChild(HAnimSite995)
HAnimSite997 = x3d.HAnimSite()
HAnimSite997.setDEF("Joe_r_olecranon")
HAnimSite997.setName("r_olecranon")
HAnimSite997.setTranslation(x3d.doubleToFloat([-0.2,1.1388,-0.08]))
Shape998 = x3d.Shape()
Shape998.setUSE("sitebox")

HAnimSite997.addChild(Shape998)

HAnimSegment978.addChild(HAnimSite997)

HAnimJoint977.addChild(HAnimSegment978)
HAnimJoint999 = x3d.HAnimJoint()
HAnimJoint999.setDEF("Joe_r_wrist")
HAnimJoint999.setName("r_wrist")
HAnimJoint999.setCenter(x3d.doubleToFloat([-0.2,0.89,-0.04]))
HAnimJoint999.setSkinCoordIndex([235,236,237,238,239,240,241,242])
HAnimJoint999.setSkinCoordWeight(x3d.doubleToFloat([1,1,1,1,1,1,1,1]))
HAnimSegment1000 = x3d.HAnimSegment()
HAnimSegment1000.setDEF("Joe_r_hand")
HAnimSegment1000.setName("r_hand")
Shape1001 = x3d.Shape()
Appearance1002 = x3d.Appearance()
Appearance1002.setUSE("SegmentLine")

Shape1001.setAppearance(Appearance1002)
IndexedLineSet1003 = x3d.IndexedLineSet()
IndexedLineSet1003.setCoordIndex([0,1,-1,0,2,-1,0,3,-1,0,4,-1,0,5,-1])
Coordinate1004 = x3d.Coordinate()
Coordinate1004.setPoint(x3d.doubleToFloat([-0.2,0.89,-0.04,-0.2,0.85,0,-0.2,0.84,-0.015,-0.2,0.835,-0.04,-0.2,0.835,-0.065,-0.2,0.84,-0.085]))

IndexedLineSet1003.setCoord(Coordinate1004)

Shape1001.setGeometry(IndexedLineSet1003)

HAnimSegment1000.addChild(Shape1001)
Transform1005 = x3d.Transform()
Transform1005.setTranslation(x3d.doubleToFloat([-0.2,0.89,-0.04]))
Shape1006 = x3d.Shape()
Shape1006.setUSE("jointbox")

Transform1005.addChild(Shape1006)

HAnimSegment1000.addChild(Transform1005)
HAnimSite1007 = x3d.HAnimSite()
HAnimSite1007.setDEF("Joe_r_ulnar_styloid")
HAnimSite1007.setName("r_ulnar_styloid")
HAnimSite1007.setTranslation(x3d.doubleToFloat([-0.2,0.9,-0.085]))
Shape1008 = x3d.Shape()
Shape1008.setUSE("sitebox")

HAnimSite1007.addChild(Shape1008)

HAnimSegment1000.addChild(HAnimSite1007)

HAnimJoint999.addChild(HAnimSegment1000)
HAnimJoint1009 = x3d.HAnimJoint()
HAnimJoint1009.setDEF("Joe_r_thumb1")
HAnimJoint1009.setName("r_thumb1")
HAnimJoint1009.setRotation(x3d.doubleToFloat([0.999999999999976,0,0,0.11171329853783]))
HAnimJoint1009.setCenter(x3d.doubleToFloat([-0.2,0.85,0]))
HAnimJoint1009.setSkinCoordIndex([243,244])
HAnimJoint1009.setSkinCoordWeight(x3d.doubleToFloat([1,1]))
HAnimSegment1010 = x3d.HAnimSegment()
HAnimSegment1010.setDEF("Joe_r_thumb_metacarpal")
HAnimSegment1010.setName("r_thumb_metacarpal")
Shape1011 = x3d.Shape()
Appearance1012 = x3d.Appearance()
Appearance1012.setUSE("SegmentLine")

Shape1011.setAppearance(Appearance1012)
IndexedLineSet1013 = x3d.IndexedLineSet()
IndexedLineSet1013.setCoordIndex([0,1,-1])
Coordinate1014 = x3d.Coordinate()
Coordinate1014.setPoint(x3d.doubleToFloat([-0.2,0.85,0,-0.2,0.82,0.03]))

IndexedLineSet1013.setCoord(Coordinate1014)

Shape1011.setGeometry(IndexedLineSet1013)

HAnimSegment1010.addChild(Shape1011)
Transform1015 = x3d.Transform()
Transform1015.setTranslation(x3d.doubleToFloat([-0.2,0.85,0]))
Shape1016 = x3d.Shape()
Shape1016.setUSE("jointbox")

Transform1015.addChild(Shape1016)

HAnimSegment1010.addChild(Transform1015)

HAnimJoint1009.addChild(HAnimSegment1010)
HAnimJoint1017 = x3d.HAnimJoint()
HAnimJoint1017.setDEF("Joe_r_thumb2")
HAnimJoint1017.setName("r_thumb2")
HAnimJoint1017.setRotation(x3d.doubleToFloat([0.707106781186553,0.707106781186553,0,0.167569951968385]))
HAnimJoint1017.setCenter(x3d.doubleToFloat([-0.2,0.82,0.03]))
HAnimJoint1017.setSkinCoordIndex([254,255,256,257,258,259])
HAnimJoint1017.setSkinCoordWeight(x3d.doubleToFloat([0.5,0.5,0.5,1,1,1]))
HAnimSegment1018 = x3d.HAnimSegment()
HAnimSegment1018.setDEF("Joe_r_thumb_proximal")
HAnimSegment1018.setName("r_thumb_proximal")
Shape1019 = x3d.Shape()
Appearance1020 = x3d.Appearance()
Appearance1020.setUSE("SegmentLine")

Shape1019.setAppearance(Appearance1020)
IndexedLineSet1021 = x3d.IndexedLineSet()
IndexedLineSet1021.setCoordIndex([0,1,-1])
Coordinate1022 = x3d.Coordinate()
Coordinate1022.setPoint(x3d.doubleToFloat([-0.2,0.82,0.03,-0.2,0.8,0.05]))

IndexedLineSet1021.setCoord(Coordinate1022)

Shape1019.setGeometry(IndexedLineSet1021)

HAnimSegment1018.addChild(Shape1019)
Transform1023 = x3d.Transform()
Transform1023.setTranslation(x3d.doubleToFloat([-0.2,0.82,0.03]))
Shape1024 = x3d.Shape()
Shape1024.setUSE("jointbox")

Transform1023.addChild(Shape1024)

HAnimSegment1018.addChild(Transform1023)

HAnimJoint1017.addChild(HAnimSegment1018)
HAnimJoint1025 = x3d.HAnimJoint()
HAnimJoint1025.setDEF("Joe_r_thumb3")
HAnimJoint1025.setName("r_thumb3")
HAnimJoint1025.setRotation(x3d.doubleToFloat([0.707106781186553,0.707106781186553,0,0.167569951968385]))
HAnimJoint1025.setCenter(x3d.doubleToFloat([-0.2,0.8,0.05]))
HAnimJoint1025.setSkinCoordIndex([260,261,262,263,264,265,266,267,268])
HAnimJoint1025.setSkinCoordWeight(x3d.doubleToFloat([1,1,1,1,1,1,1,1,1]))
HAnimSegment1026 = x3d.HAnimSegment()
HAnimSegment1026.setDEF("Joe_r_thumb_distal")
HAnimSegment1026.setName("r_thumb_distal")
Shape1027 = x3d.Shape()
Appearance1028 = x3d.Appearance()
Appearance1028.setUSE("SegmentLine")

Shape1027.setAppearance(Appearance1028)
IndexedLineSet1029 = x3d.IndexedLineSet()
IndexedLineSet1029.setCoordIndex([0,1,-1])
Coordinate1030 = x3d.Coordinate()
Coordinate1030.setPoint(x3d.doubleToFloat([-0.2,0.8,0.05,-0.2,0.78,0.07]))

IndexedLineSet1029.setCoord(Coordinate1030)

Shape1027.setGeometry(IndexedLineSet1029)

HAnimSegment1026.addChild(Shape1027)
Transform1031 = x3d.Transform()
Transform1031.setDEF("Thumbnail")
Transform1031.setTranslation(x3d.doubleToFloat([-0.2,0.785,0.075]))
Shape1032 = x3d.Shape()
Shape1032.setUSE("skinsphere")

Transform1031.addChild(Shape1032)

HAnimSegment1026.addChild(Transform1031)
Transform1033 = x3d.Transform()
Transform1033.setTranslation(x3d.doubleToFloat([-0.2,0.8,0.05]))
Shape1034 = x3d.Shape()
Shape1034.setUSE("jointbox")

Transform1033.addChild(Shape1034)

HAnimSegment1026.addChild(Transform1033)
HAnimSite1035 = x3d.HAnimSite()
HAnimSite1035.setDEF("Joe_r_thumb_distal_tip")
HAnimSite1035.setName("r_thumb_distal_tip")
HAnimSite1035.setTranslation(x3d.doubleToFloat([-0.2,0.78,0.07]))
Shape1036 = x3d.Shape()
Shape1036.setUSE("sitebox")

HAnimSite1035.addChild(Shape1036)

HAnimSegment1026.addChild(HAnimSite1035)

HAnimJoint1025.addChild(HAnimSegment1026)

HAnimJoint1017.addChild(HAnimJoint1025)

HAnimJoint1009.addChild(HAnimJoint1017)

HAnimJoint999.addChild(HAnimJoint1009)
HAnimJoint1037 = x3d.HAnimJoint()
HAnimJoint1037.setDEF("Joe_r_index0")
HAnimJoint1037.setName("r_index0")
HAnimJoint1037.setRotation(x3d.doubleToFloat([0,0,1.00000000001315,0.0055856647187357]))
HAnimJoint1037.setCenter(x3d.doubleToFloat([-0.2,0.84,-0.015]))
HAnimJoint1037.setSkinCoordIndex([245,246])
HAnimJoint1037.setSkinCoordWeight(x3d.doubleToFloat([1,1]))
HAnimSegment1038 = x3d.HAnimSegment()
HAnimSegment1038.setDEF("Joe_r_index_metacarpal")
HAnimSegment1038.setName("r_index_metacarpal")
Shape1039 = x3d.Shape()
Appearance1040 = x3d.Appearance()
Appearance1040.setUSE("SegmentLine")

Shape1039.setAppearance(Appearance1040)
IndexedLineSet1041 = x3d.IndexedLineSet()
IndexedLineSet1041.setCoordIndex([0,1,-1])
Coordinate1042 = x3d.Coordinate()
Coordinate1042.setPoint(x3d.doubleToFloat([-0.2,0.84,-0.015,-0.2,0.793,-0.015]))

IndexedLineSet1041.setCoord(Coordinate1042)

Shape1039.setGeometry(IndexedLineSet1041)

HAnimSegment1038.addChild(Shape1039)
Transform1043 = x3d.Transform()
Transform1043.setTranslation(x3d.doubleToFloat([-0.2,0.84,-0.015]))
Shape1044 = x3d.Shape()
Shape1044.setUSE("jointbox")

Transform1043.addChild(Shape1044)

HAnimSegment1038.addChild(Transform1043)
HAnimSite1045 = x3d.HAnimSite()
HAnimSite1045.setDEF("Joe_r_metacarpal_pha2")
HAnimSite1045.setName("r_metacarpal_pha2")
HAnimSite1045.setTranslation(x3d.doubleToFloat([-0.2,0.793,-0.005]))
Shape1046 = x3d.Shape()
Shape1046.setUSE("sitebox")

HAnimSite1045.addChild(Shape1046)

HAnimSegment1038.addChild(HAnimSite1045)

HAnimJoint1037.addChild(HAnimSegment1038)
HAnimJoint1047 = x3d.HAnimJoint()
HAnimJoint1047.setDEF("Joe_r_index1")
HAnimJoint1047.setName("r_index1")
HAnimJoint1047.setRotation(x3d.doubleToFloat([0,0,1.00000000001315,0.0055856647187357]))
HAnimJoint1047.setCenter(x3d.doubleToFloat([-0.2,0.793,-0.015]))
HAnimJoint1047.setSkinCoordIndex([254,255,256,269,270,271,279])
HAnimJoint1047.setSkinCoordWeight(x3d.doubleToFloat([0.5,0.5,0.5,1,1,1,0.5]))
HAnimSegment1048 = x3d.HAnimSegment()
HAnimSegment1048.setDEF("Joe_r_index_proximal")
HAnimSegment1048.setName("r_index_proximal")
Shape1049 = x3d.Shape()
Appearance1050 = x3d.Appearance()
Appearance1050.setUSE("SegmentLine")

Shape1049.setAppearance(Appearance1050)
IndexedLineSet1051 = x3d.IndexedLineSet()
IndexedLineSet1051.setCoordIndex([0,1,-1])
Coordinate1052 = x3d.Coordinate()
Coordinate1052.setPoint(x3d.doubleToFloat([-0.2,0.793,-0.015,-0.2,0.745,-0.015]))

IndexedLineSet1051.setCoord(Coordinate1052)

Shape1049.setGeometry(IndexedLineSet1051)

HAnimSegment1048.addChild(Shape1049)
Transform1053 = x3d.Transform()
Transform1053.setTranslation(x3d.doubleToFloat([-0.2,0.793,-0.015]))
Shape1054 = x3d.Shape()
Shape1054.setUSE("jointbox")

Transform1053.addChild(Shape1054)

HAnimSegment1048.addChild(Transform1053)

HAnimJoint1047.addChild(HAnimSegment1048)
HAnimJoint1055 = x3d.HAnimJoint()
HAnimJoint1055.setDEF("Joe_r_index2")
HAnimJoint1055.setName("r_index2")
HAnimJoint1055.setRotation(x3d.doubleToFloat([0,0,1.00000000001315,0.0055856647187357]))
HAnimJoint1055.setCenter(x3d.doubleToFloat([-0.2,0.745,-0.015]))
HAnimJoint1055.setSkinCoordIndex([282,283,284,285])
HAnimJoint1055.setSkinCoordWeight(x3d.doubleToFloat([1,1,1,1]))
HAnimSegment1056 = x3d.HAnimSegment()
HAnimSegment1056.setDEF("Joe_r_index_middle")
HAnimSegment1056.setName("r_index_middle")
Shape1057 = x3d.Shape()
Appearance1058 = x3d.Appearance()
Appearance1058.setUSE("SegmentLine")

Shape1057.setAppearance(Appearance1058)
IndexedLineSet1059 = x3d.IndexedLineSet()
IndexedLineSet1059.setCoordIndex([0,1,-1])
Coordinate1060 = x3d.Coordinate()
Coordinate1060.setPoint(x3d.doubleToFloat([-0.2,0.745,-0.015,-0.2,0.72,-0.015]))

IndexedLineSet1059.setCoord(Coordinate1060)

Shape1057.setGeometry(IndexedLineSet1059)

HAnimSegment1056.addChild(Shape1057)
Transform1061 = x3d.Transform()
Transform1061.setTranslation(x3d.doubleToFloat([-0.2,0.745,-0.015]))
Shape1062 = x3d.Shape()
Shape1062.setUSE("jointbox")

Transform1061.addChild(Shape1062)

HAnimSegment1056.addChild(Transform1061)

HAnimJoint1055.addChild(HAnimSegment1056)
HAnimJoint1063 = x3d.HAnimJoint()
HAnimJoint1063.setDEF("Joe_r_index3")
HAnimJoint1063.setName("r_index3")
HAnimJoint1063.setRotation(x3d.doubleToFloat([0,0,1.00000000001315,0.0055856647187357]))
HAnimJoint1063.setCenter(x3d.doubleToFloat([-0.2,0.72,-0.015]))
HAnimJoint1063.setSkinCoordIndex([286,287,288,289,290,291,292,293,294])
HAnimJoint1063.setSkinCoordWeight(x3d.doubleToFloat([1,1,1,1,1,1,1,1,1]))
HAnimSegment1064 = x3d.HAnimSegment()
HAnimSegment1064.setDEF("Joe_r_index_distal")
HAnimSegment1064.setName("r_index_distal")
Shape1065 = x3d.Shape()
Appearance1066 = x3d.Appearance()
Appearance1066.setUSE("SegmentLine")

Shape1065.setAppearance(Appearance1066)
IndexedLineSet1067 = x3d.IndexedLineSet()
IndexedLineSet1067.setCoordIndex([0,1,-1])
Coordinate1068 = x3d.Coordinate()
Coordinate1068.setPoint(x3d.doubleToFloat([-0.2,0.72,-0.015,-0.2,0.695,-0.015]))

IndexedLineSet1067.setCoord(Coordinate1068)

Shape1065.setGeometry(IndexedLineSet1067)

HAnimSegment1064.addChild(Shape1065)
Transform1069 = x3d.Transform()
Transform1069.setTranslation(x3d.doubleToFloat([-0.2,0.72,-0.015]))
Shape1070 = x3d.Shape()
Shape1070.setUSE("jointbox")

Transform1069.addChild(Shape1070)

HAnimSegment1064.addChild(Transform1069)
HAnimSite1071 = x3d.HAnimSite()
HAnimSite1071.setDEF("Joe_r_index_distal_tip")
HAnimSite1071.setName("r_index_distal_tip")
HAnimSite1071.setTranslation(x3d.doubleToFloat([-0.2,0.695,-0.015]))
Shape1072 = x3d.Shape()
Shape1072.setUSE("sitebox")

HAnimSite1071.addChild(Shape1072)

HAnimSegment1064.addChild(HAnimSite1071)

HAnimJoint1063.addChild(HAnimSegment1064)

HAnimJoint1055.addChild(HAnimJoint1063)

HAnimJoint1047.addChild(HAnimJoint1055)

HAnimJoint1037.addChild(HAnimJoint1047)

HAnimJoint999.addChild(HAnimJoint1037)
HAnimJoint1073 = x3d.HAnimJoint()
HAnimJoint1073.setDEF("Joe_r_middle0")
HAnimJoint1073.setName("r_middle0")
HAnimJoint1073.setRotation(x3d.doubleToFloat([0,0,1.00000000001315,0.0055856647187357]))
HAnimJoint1073.setCenter(x3d.doubleToFloat([-0.2,0.835,-0.04]))
HAnimJoint1073.setSkinCoordIndex([247,248])
HAnimJoint1073.setSkinCoordWeight(x3d.doubleToFloat([1,1]))
HAnimSegment1074 = x3d.HAnimSegment()
HAnimSegment1074.setDEF("Joe_r_middle_metacarpal")
HAnimSegment1074.setName("r_middle_metacarpal")
Shape1075 = x3d.Shape()
Appearance1076 = x3d.Appearance()
Appearance1076.setUSE("SegmentLine")

Shape1075.setAppearance(Appearance1076)
IndexedLineSet1077 = x3d.IndexedLineSet()
IndexedLineSet1077.setCoordIndex([0,1,-1])
Coordinate1078 = x3d.Coordinate()
Coordinate1078.setPoint(x3d.doubleToFloat([-0.2,0.835,-0.04,-0.2,0.788,-0.04]))

IndexedLineSet1077.setCoord(Coordinate1078)

Shape1075.setGeometry(IndexedLineSet1077)

HAnimSegment1074.addChild(Shape1075)
Transform1079 = x3d.Transform()
Transform1079.setTranslation(x3d.doubleToFloat([-0.2,0.835,-0.04]))
Shape1080 = x3d.Shape()
Shape1080.setUSE("jointbox")

Transform1079.addChild(Shape1080)

HAnimSegment1074.addChild(Transform1079)

HAnimJoint1073.addChild(HAnimSegment1074)
HAnimJoint1081 = x3d.HAnimJoint()
HAnimJoint1081.setDEF("Joe_r_middle1")
HAnimJoint1081.setName("r_middle1")
HAnimJoint1081.setRotation(x3d.doubleToFloat([0,0,1.00000000001315,0.0055856647187357]))
HAnimJoint1081.setCenter(x3d.doubleToFloat([-0.2,0.788,-0.04]))
HAnimJoint1081.setSkinCoordIndex([272,273,279,280])
HAnimJoint1081.setSkinCoordWeight(x3d.doubleToFloat([1,1,0.5,0.5]))
HAnimSegment1082 = x3d.HAnimSegment()
HAnimSegment1082.setDEF("Joe_r_middle_proximal")
HAnimSegment1082.setName("r_middle_proximal")
Shape1083 = x3d.Shape()
Appearance1084 = x3d.Appearance()
Appearance1084.setUSE("SegmentLine")

Shape1083.setAppearance(Appearance1084)
IndexedLineSet1085 = x3d.IndexedLineSet()
IndexedLineSet1085.setCoordIndex([0,1,-1])
Coordinate1086 = x3d.Coordinate()
Coordinate1086.setPoint(x3d.doubleToFloat([-0.2,0.788,-0.04,-0.2,0.74,-0.04]))

IndexedLineSet1085.setCoord(Coordinate1086)

Shape1083.setGeometry(IndexedLineSet1085)

HAnimSegment1082.addChild(Shape1083)
Transform1087 = x3d.Transform()
Transform1087.setTranslation(x3d.doubleToFloat([-0.2,0.788,-0.04]))
Shape1088 = x3d.Shape()
Shape1088.setUSE("jointbox")

Transform1087.addChild(Shape1088)

HAnimSegment1082.addChild(Transform1087)

HAnimJoint1081.addChild(HAnimSegment1082)
HAnimJoint1089 = x3d.HAnimJoint()
HAnimJoint1089.setDEF("Joe_r_middle2")
HAnimJoint1089.setName("r_middle2")
HAnimJoint1089.setRotation(x3d.doubleToFloat([0,0,1.00000000001315,0.0055856647187357]))
HAnimJoint1089.setCenter(x3d.doubleToFloat([-0.2,0.74,-0.04]))
HAnimJoint1089.setSkinCoordIndex([295,296,297,298])
HAnimJoint1089.setSkinCoordWeight(x3d.doubleToFloat([1,1,1,1]))
HAnimSegment1090 = x3d.HAnimSegment()
HAnimSegment1090.setDEF("Joe_r_middle_middle")
HAnimSegment1090.setName("r_middle_middle")
Shape1091 = x3d.Shape()
Appearance1092 = x3d.Appearance()
Appearance1092.setUSE("SegmentLine")

Shape1091.setAppearance(Appearance1092)
IndexedLineSet1093 = x3d.IndexedLineSet()
IndexedLineSet1093.setCoordIndex([0,1,-1])
Coordinate1094 = x3d.Coordinate()
Coordinate1094.setPoint(x3d.doubleToFloat([-0.2,0.74,-0.04,-0.2,0.7142,-0.04]))

IndexedLineSet1093.setCoord(Coordinate1094)

Shape1091.setGeometry(IndexedLineSet1093)

HAnimSegment1090.addChild(Shape1091)
Transform1095 = x3d.Transform()
Transform1095.setTranslation(x3d.doubleToFloat([-0.2,0.74,-0.04]))
Shape1096 = x3d.Shape()
Shape1096.setUSE("jointbox")

Transform1095.addChild(Shape1096)

HAnimSegment1090.addChild(Transform1095)

HAnimJoint1089.addChild(HAnimSegment1090)
HAnimJoint1097 = x3d.HAnimJoint()
HAnimJoint1097.setDEF("Joe_r_middle3")
HAnimJoint1097.setName("r_middle3")
HAnimJoint1097.setRotation(x3d.doubleToFloat([0,0,1.00000000001315,0.0055856647187357]))
HAnimJoint1097.setCenter(x3d.doubleToFloat([-0.2,0.7142,-0.04]))
HAnimJoint1097.setSkinCoordIndex([299,300,301,302,303,304,305,306,307])
HAnimJoint1097.setSkinCoordWeight(x3d.doubleToFloat([1,1,1,1,1,1,1,1,1]))
HAnimSegment1098 = x3d.HAnimSegment()
HAnimSegment1098.setDEF("Joe_r_middle_distal")
HAnimSegment1098.setName("r_middle_distal")
Shape1099 = x3d.Shape()
Appearance1100 = x3d.Appearance()
Appearance1100.setUSE("SegmentLine")

Shape1099.setAppearance(Appearance1100)
IndexedLineSet1101 = x3d.IndexedLineSet()
IndexedLineSet1101.setCoordIndex([0,1,-1])
Coordinate1102 = x3d.Coordinate()
Coordinate1102.setPoint(x3d.doubleToFloat([-0.2,0.7142,-0.04,-0.2,0.6758,-0.04]))

IndexedLineSet1101.setCoord(Coordinate1102)

Shape1099.setGeometry(IndexedLineSet1101)

HAnimSegment1098.addChild(Shape1099)
Transform1103 = x3d.Transform()
Transform1103.setTranslation(x3d.doubleToFloat([-0.2,0.7142,-0.04]))
Shape1104 = x3d.Shape()
Shape1104.setUSE("jointbox")

Transform1103.addChild(Shape1104)

HAnimSegment1098.addChild(Transform1103)
HAnimSite1105 = x3d.HAnimSite()
HAnimSite1105.setDEF("Joe_r_dactylion")
HAnimSite1105.setName("r_dactylion")
HAnimSite1105.setTranslation(x3d.doubleToFloat([-0.2,0.68,-0.04]))
Shape1106 = x3d.Shape()
Shape1106.setUSE("sitebox")

HAnimSite1105.addChild(Shape1106)

HAnimSegment1098.addChild(HAnimSite1105)
HAnimSite1107 = x3d.HAnimSite()
HAnimSite1107.setDEF("Joe_r_middle_distal_tip")
HAnimSite1107.setName("r_middle_distal_tip")
HAnimSite1107.setTranslation(x3d.doubleToFloat([-0.2,0.68,-0.04]))
Shape1108 = x3d.Shape()
Shape1108.setUSE("sitebox")

HAnimSite1107.addChild(Shape1108)

HAnimSegment1098.addChild(HAnimSite1107)

HAnimJoint1097.addChild(HAnimSegment1098)

HAnimJoint1089.addChild(HAnimJoint1097)

HAnimJoint1081.addChild(HAnimJoint1089)

HAnimJoint1073.addChild(HAnimJoint1081)

HAnimJoint999.addChild(HAnimJoint1073)
HAnimJoint1109 = x3d.HAnimJoint()
HAnimJoint1109.setDEF("Joe_r_ring0")
HAnimJoint1109.setName("r_ring0")
HAnimJoint1109.setRotation(x3d.doubleToFloat([0,0,1.00000000001315,0.0055856647187357]))
HAnimJoint1109.setCenter(x3d.doubleToFloat([-0.2,0.835,-0.065]))
HAnimJoint1109.setSkinCoordIndex([249,250])
HAnimJoint1109.setSkinCoordWeight(x3d.doubleToFloat([1,1]))
HAnimSegment1110 = x3d.HAnimSegment()
HAnimSegment1110.setDEF("Joe_r_ring_metacarpal")
HAnimSegment1110.setName("r_ring_metacarpal")
Shape1111 = x3d.Shape()
Appearance1112 = x3d.Appearance()
Appearance1112.setUSE("SegmentLine")

Shape1111.setAppearance(Appearance1112)
IndexedLineSet1113 = x3d.IndexedLineSet()
IndexedLineSet1113.setCoordIndex([0,1,-1])
Coordinate1114 = x3d.Coordinate()
Coordinate1114.setPoint(x3d.doubleToFloat([-0.2,0.835,-0.065,-0.2,0.793,-0.065]))

IndexedLineSet1113.setCoord(Coordinate1114)

Shape1111.setGeometry(IndexedLineSet1113)

HAnimSegment1110.addChild(Shape1111)
Transform1115 = x3d.Transform()
Transform1115.setTranslation(x3d.doubleToFloat([-0.2,0.835,-0.065]))
Shape1116 = x3d.Shape()
Shape1116.setUSE("jointbox")

Transform1115.addChild(Shape1116)

HAnimSegment1110.addChild(Transform1115)

HAnimJoint1109.addChild(HAnimSegment1110)
HAnimJoint1117 = x3d.HAnimJoint()
HAnimJoint1117.setDEF("Joe_r_ring1")
HAnimJoint1117.setName("r_ring1")
HAnimJoint1117.setRotation(x3d.doubleToFloat([0,0,1.00000000001315,0.0055856647187357]))
HAnimJoint1117.setCenter(x3d.doubleToFloat([-0.2,0.793,-0.065]))
HAnimJoint1117.setSkinCoordIndex([274,275,280,281])
HAnimJoint1117.setSkinCoordWeight(x3d.doubleToFloat([1,1,0.5,0.5]))
HAnimSegment1118 = x3d.HAnimSegment()
HAnimSegment1118.setDEF("Joe_r_ring_proximal")
HAnimSegment1118.setName("r_ring_proximal")
Shape1119 = x3d.Shape()
Appearance1120 = x3d.Appearance()
Appearance1120.setUSE("SegmentLine")

Shape1119.setAppearance(Appearance1120)
IndexedLineSet1121 = x3d.IndexedLineSet()
IndexedLineSet1121.setCoordIndex([0,1,-1])
Coordinate1122 = x3d.Coordinate()
Coordinate1122.setPoint(x3d.doubleToFloat([-0.2,0.793,-0.065,-0.2,0.74,-0.065]))

IndexedLineSet1121.setCoord(Coordinate1122)

Shape1119.setGeometry(IndexedLineSet1121)

HAnimSegment1118.addChild(Shape1119)
Transform1123 = x3d.Transform()
Transform1123.setTranslation(x3d.doubleToFloat([-0.2,0.793,-0.065]))
Shape1124 = x3d.Shape()
Shape1124.setUSE("jointbox")

Transform1123.addChild(Shape1124)

HAnimSegment1118.addChild(Transform1123)

HAnimJoint1117.addChild(HAnimSegment1118)
HAnimJoint1125 = x3d.HAnimJoint()
HAnimJoint1125.setDEF("Joe_r_ring2")
HAnimJoint1125.setName("r_ring2")
HAnimJoint1125.setRotation(x3d.doubleToFloat([0,0,1.00000000001315,0.0055856647187357]))
HAnimJoint1125.setCenter(x3d.doubleToFloat([-0.2,0.74,-0.065]))
HAnimJoint1125.setSkinCoordIndex([308,309,310,311])
HAnimJoint1125.setSkinCoordWeight(x3d.doubleToFloat([1,1,1,1]))
HAnimSegment1126 = x3d.HAnimSegment()
HAnimSegment1126.setDEF("Joe_r_ring_middle")
HAnimSegment1126.setName("r_ring_middle")
Shape1127 = x3d.Shape()
Appearance1128 = x3d.Appearance()
Appearance1128.setUSE("SegmentLine")

Shape1127.setAppearance(Appearance1128)
IndexedLineSet1129 = x3d.IndexedLineSet()
IndexedLineSet1129.setCoordIndex([0,1,-1])
Coordinate1130 = x3d.Coordinate()
Coordinate1130.setPoint(x3d.doubleToFloat([-0.2,0.74,-0.065,-0.2,0.7177,-0.065]))

IndexedLineSet1129.setCoord(Coordinate1130)

Shape1127.setGeometry(IndexedLineSet1129)

HAnimSegment1126.addChild(Shape1127)
Transform1131 = x3d.Transform()
Transform1131.setTranslation(x3d.doubleToFloat([-0.2,0.74,-0.065]))
Shape1132 = x3d.Shape()
Shape1132.setUSE("jointbox")

Transform1131.addChild(Shape1132)

HAnimSegment1126.addChild(Transform1131)

HAnimJoint1125.addChild(HAnimSegment1126)
HAnimJoint1133 = x3d.HAnimJoint()
HAnimJoint1133.setDEF("Joe_r_ring3")
HAnimJoint1133.setName("r_ring3")
HAnimJoint1133.setRotation(x3d.doubleToFloat([0,0,1.00000000001315,0.0055856647187357]))
HAnimJoint1133.setCenter(x3d.doubleToFloat([-0.2,0.7177,-0.065]))
HAnimJoint1133.setSkinCoordIndex([312,313,314,315,316,317,318,319,320])
HAnimJoint1133.setSkinCoordWeight(x3d.doubleToFloat([1,1,1,1,1,1,1,1,1]))
HAnimSegment1134 = x3d.HAnimSegment()
HAnimSegment1134.setDEF("Joe_r_ring_distal")
HAnimSegment1134.setName("r_ring_distal")
Shape1135 = x3d.Shape()
Appearance1136 = x3d.Appearance()
Appearance1136.setUSE("SegmentLine")

Shape1135.setAppearance(Appearance1136)
IndexedLineSet1137 = x3d.IndexedLineSet()
IndexedLineSet1137.setCoordIndex([0,1,-1])
Coordinate1138 = x3d.Coordinate()
Coordinate1138.setPoint(x3d.doubleToFloat([-0.2,0.7177,-0.065,-0.2,0.695,-0.065]))

IndexedLineSet1137.setCoord(Coordinate1138)

Shape1135.setGeometry(IndexedLineSet1137)

HAnimSegment1134.addChild(Shape1135)
Transform1139 = x3d.Transform()
Transform1139.setTranslation(x3d.doubleToFloat([-0.2,0.7177,-0.065]))
Shape1140 = x3d.Shape()
Shape1140.setUSE("jointbox")

Transform1139.addChild(Shape1140)

HAnimSegment1134.addChild(Transform1139)
HAnimSite1141 = x3d.HAnimSite()
HAnimSite1141.setDEF("Joe_r_ring_distal_tip")
HAnimSite1141.setName("r_ring_distal_tip")
HAnimSite1141.setTranslation(x3d.doubleToFloat([-0.2,0.695,-0.065]))
Shape1142 = x3d.Shape()
Shape1142.setUSE("sitebox")

HAnimSite1141.addChild(Shape1142)

HAnimSegment1134.addChild(HAnimSite1141)

HAnimJoint1133.addChild(HAnimSegment1134)

HAnimJoint1125.addChild(HAnimJoint1133)

HAnimJoint1117.addChild(HAnimJoint1125)

HAnimJoint1109.addChild(HAnimJoint1117)

HAnimJoint999.addChild(HAnimJoint1109)
HAnimJoint1143 = x3d.HAnimJoint()
HAnimJoint1143.setDEF("Joe_r_pinky0")
HAnimJoint1143.setName("r_pinky0")
HAnimJoint1143.setRotation(x3d.doubleToFloat([0,0,1.00000000001315,0.0055856647187357]))
HAnimJoint1143.setCenter(x3d.doubleToFloat([-0.2,0.84,-0.085]))
HAnimJoint1143.setSkinCoordIndex([251,252,253,281])
HAnimJoint1143.setSkinCoordWeight(x3d.doubleToFloat([1,1,1,0.5]))
HAnimSegment1144 = x3d.HAnimSegment()
HAnimSegment1144.setDEF("Joe_r_pinky_metacarpal")
HAnimSegment1144.setName("r_pinky_metacarpal")
Shape1145 = x3d.Shape()
Appearance1146 = x3d.Appearance()
Appearance1146.setUSE("SegmentLine")

Shape1145.setAppearance(Appearance1146)
IndexedLineSet1147 = x3d.IndexedLineSet()
IndexedLineSet1147.setCoordIndex([0,1,-1])
Coordinate1148 = x3d.Coordinate()
Coordinate1148.setPoint(x3d.doubleToFloat([-0.2,0.84,-0.085,-0.2,0.79,-0.085]))

IndexedLineSet1147.setCoord(Coordinate1148)

Shape1145.setGeometry(IndexedLineSet1147)

HAnimSegment1144.addChild(Shape1145)
Transform1149 = x3d.Transform()
Transform1149.setTranslation(x3d.doubleToFloat([-0.2,0.84,-0.085]))
Shape1150 = x3d.Shape()
Shape1150.setUSE("jointbox")

Transform1149.addChild(Shape1150)

HAnimSegment1144.addChild(Transform1149)
HAnimSite1151 = x3d.HAnimSite()
HAnimSite1151.setDEF("Joe_r_metacarpal_pha5")
HAnimSite1151.setName("r_metacarpal_pha5")
HAnimSite1151.setTranslation(x3d.doubleToFloat([-0.2,0.79,-0.095]))
Shape1152 = x3d.Shape()
Shape1152.setUSE("sitebox")

HAnimSite1151.addChild(Shape1152)

HAnimSegment1144.addChild(HAnimSite1151)

HAnimJoint1143.addChild(HAnimSegment1144)
HAnimJoint1153 = x3d.HAnimJoint()
HAnimJoint1153.setDEF("Joe_r_pinky1")
HAnimJoint1153.setName("r_pinky1")
HAnimJoint1153.setRotation(x3d.doubleToFloat([0,0,1.00000000001315,0.0055856647187357]))
HAnimJoint1153.setCenter(x3d.doubleToFloat([-0.2,0.79,-0.085]))
HAnimJoint1153.setSkinCoordIndex([276,277,278])
HAnimJoint1153.setSkinCoordWeight(x3d.doubleToFloat([1,1,1]))
HAnimSegment1154 = x3d.HAnimSegment()
HAnimSegment1154.setDEF("Joe_r_pinky_proximal")
HAnimSegment1154.setName("r_pinky_proximal")
Shape1155 = x3d.Shape()
Appearance1156 = x3d.Appearance()
Appearance1156.setUSE("SegmentLine")

Shape1155.setAppearance(Appearance1156)
IndexedLineSet1157 = x3d.IndexedLineSet()
IndexedLineSet1157.setCoordIndex([0,1,-1])
Coordinate1158 = x3d.Coordinate()
Coordinate1158.setPoint(x3d.doubleToFloat([-0.2,0.79,-0.085,-0.2,0.755,-0.085]))

IndexedLineSet1157.setCoord(Coordinate1158)

Shape1155.setGeometry(IndexedLineSet1157)

HAnimSegment1154.addChild(Shape1155)
Transform1159 = x3d.Transform()
Transform1159.setTranslation(x3d.doubleToFloat([-0.2,0.79,-0.085]))
Shape1160 = x3d.Shape()
Shape1160.setUSE("jointbox")

Transform1159.addChild(Shape1160)

HAnimSegment1154.addChild(Transform1159)

HAnimJoint1153.addChild(HAnimSegment1154)
HAnimJoint1161 = x3d.HAnimJoint()
HAnimJoint1161.setDEF("Joe_r_pinky2")
HAnimJoint1161.setName("r_pinky2")
HAnimJoint1161.setRotation(x3d.doubleToFloat([0,0,1.00000000001315,0.0055856647187357]))
HAnimJoint1161.setCenter(x3d.doubleToFloat([-0.2,0.755,-0.085]))
HAnimJoint1161.setSkinCoordIndex([321,322,323,324])
HAnimJoint1161.setSkinCoordWeight(x3d.doubleToFloat([1,1,1,1]))
HAnimSegment1162 = x3d.HAnimSegment()
HAnimSegment1162.setDEF("Joe_r_pinky_middle")
HAnimSegment1162.setName("r_pinky_middle")
Shape1163 = x3d.Shape()
Appearance1164 = x3d.Appearance()
Appearance1164.setUSE("SegmentLine")

Shape1163.setAppearance(Appearance1164)
IndexedLineSet1165 = x3d.IndexedLineSet()
IndexedLineSet1165.setCoordIndex([0,1,-1])
Coordinate1166 = x3d.Coordinate()
Coordinate1166.setPoint(x3d.doubleToFloat([-0.2,0.755,-0.085,-0.2,0.735,-0.085]))

IndexedLineSet1165.setCoord(Coordinate1166)

Shape1163.setGeometry(IndexedLineSet1165)

HAnimSegment1162.addChild(Shape1163)
Transform1167 = x3d.Transform()
Transform1167.setTranslation(x3d.doubleToFloat([-0.2,0.755,-0.085]))
Shape1168 = x3d.Shape()
Shape1168.setUSE("jointbox")

Transform1167.addChild(Shape1168)

HAnimSegment1162.addChild(Transform1167)

HAnimJoint1161.addChild(HAnimSegment1162)
HAnimJoint1169 = x3d.HAnimJoint()
HAnimJoint1169.setDEF("Joe_r_pinky3")
HAnimJoint1169.setName("r_pinky3")
HAnimJoint1169.setRotation(x3d.doubleToFloat([0,0,1.00000000001315,0.0055856647187357]))
HAnimJoint1169.setCenter(x3d.doubleToFloat([-0.2,0.735,-0.09]))
HAnimJoint1169.setSkinCoordIndex([325,326,327,328,329,330,331,332,333])
HAnimJoint1169.setSkinCoordWeight(x3d.doubleToFloat([1,1,1,1,1,1,1,1,1]))
HAnimSegment1170 = x3d.HAnimSegment()
HAnimSegment1170.setDEF("Joe_r_pinky_distal")
HAnimSegment1170.setName("r_pinky_distal")
Shape1171 = x3d.Shape()
Appearance1172 = x3d.Appearance()
Appearance1172.setUSE("SegmentLine")

Shape1171.setAppearance(Appearance1172)
IndexedLineSet1173 = x3d.IndexedLineSet()
IndexedLineSet1173.setCoordIndex([0,1,-1])
Coordinate1174 = x3d.Coordinate()
Coordinate1174.setPoint(x3d.doubleToFloat([-0.2,0.735,-0.085,-0.2,0.72,-0.085]))

IndexedLineSet1173.setCoord(Coordinate1174)

Shape1171.setGeometry(IndexedLineSet1173)

HAnimSegment1170.addChild(Shape1171)
Transform1175 = x3d.Transform()
Transform1175.setTranslation(x3d.doubleToFloat([-0.2,0.735,-0.085]))
Shape1176 = x3d.Shape()
Shape1176.setUSE("jointbox")

Transform1175.addChild(Shape1176)

HAnimSegment1170.addChild(Transform1175)
HAnimSite1177 = x3d.HAnimSite()
HAnimSite1177.setDEF("Joe_r_pinky_distal_tip")
HAnimSite1177.setName("r_pinky_distal_tip")
HAnimSite1177.setTranslation(x3d.doubleToFloat([-0.2,0.72,-0.085]))
Shape1178 = x3d.Shape()
Shape1178.setUSE("sitebox")

HAnimSite1177.addChild(Shape1178)

HAnimSegment1170.addChild(HAnimSite1177)

HAnimJoint1169.addChild(HAnimSegment1170)

HAnimJoint1161.addChild(HAnimJoint1169)

HAnimJoint1153.addChild(HAnimJoint1161)

HAnimJoint1143.addChild(HAnimJoint1153)

HAnimJoint999.addChild(HAnimJoint1143)

HAnimJoint977.addChild(HAnimJoint999)

HAnimJoint947.addChild(HAnimJoint977)

HAnimJoint931.addChild(HAnimJoint947)

HAnimJoint921.addChild(HAnimJoint931)

HAnimJoint555.addChild(HAnimJoint921)

HAnimJoint547.addChild(HAnimJoint555)

HAnimJoint539.addChild(HAnimJoint547)

HAnimJoint529.addChild(HAnimJoint539)

HAnimJoint521.addChild(HAnimJoint529)

HAnimJoint513.addChild(HAnimJoint521)

HAnimJoint505.addChild(HAnimJoint513)

HAnimJoint497.addChild(HAnimJoint505)

HAnimJoint485.addChild(HAnimJoint497)

HAnimJoint475.addChild(HAnimJoint485)

HAnimJoint467.addChild(HAnimJoint475)

HAnimJoint459.addChild(HAnimJoint467)

HAnimJoint451.addChild(HAnimJoint459)

HAnimJoint425.addChild(HAnimJoint451)

HAnimJoint417.addChild(HAnimJoint425)

HAnimJoint409.addChild(HAnimJoint417)

HAnimJoint394.addChild(HAnimJoint409)

HAnimJoint80.addChild(HAnimJoint394)

HAnimHumanoid79.addSkeleton(HAnimJoint80)
HAnimJoint1179 = x3d.HAnimJoint()
HAnimJoint1179.setContainerFieldOverride("joints")
HAnimJoint1179.setUSE("Joe_HumanoidRoot")

HAnimHumanoid79.addJoints(HAnimJoint1179)
HAnimJoint1180 = x3d.HAnimJoint()
HAnimJoint1180.setContainerFieldOverride("joints")
HAnimJoint1180.setUSE("Joe_sacroiliac")

HAnimHumanoid79.addJoints(HAnimJoint1180)
HAnimJoint1181 = x3d.HAnimJoint()
HAnimJoint1181.setContainerFieldOverride("joints")
HAnimJoint1181.setUSE("Joe_l_hip")

HAnimHumanoid79.addJoints(HAnimJoint1181)
HAnimJoint1182 = x3d.HAnimJoint()
HAnimJoint1182.setContainerFieldOverride("joints")
HAnimJoint1182.setUSE("Joe_l_knee")

HAnimHumanoid79.addJoints(HAnimJoint1182)
HAnimJoint1183 = x3d.HAnimJoint()
HAnimJoint1183.setContainerFieldOverride("joints")
HAnimJoint1183.setUSE("Joe_l_ankle")

HAnimHumanoid79.addJoints(HAnimJoint1183)
HAnimJoint1184 = x3d.HAnimJoint()
HAnimJoint1184.setContainerFieldOverride("joints")
HAnimJoint1184.setUSE("Joe_l_subtalar")

HAnimHumanoid79.addJoints(HAnimJoint1184)
HAnimJoint1185 = x3d.HAnimJoint()
HAnimJoint1185.setContainerFieldOverride("joints")
HAnimJoint1185.setUSE("Joe_l_midtarsal")

HAnimHumanoid79.addJoints(HAnimJoint1185)
HAnimJoint1186 = x3d.HAnimJoint()
HAnimJoint1186.setContainerFieldOverride("joints")
HAnimJoint1186.setUSE("Joe_l_metatarsal")

HAnimHumanoid79.addJoints(HAnimJoint1186)
HAnimJoint1187 = x3d.HAnimJoint()
HAnimJoint1187.setContainerFieldOverride("joints")
HAnimJoint1187.setUSE("Joe_r_hip")

HAnimHumanoid79.addJoints(HAnimJoint1187)
HAnimJoint1188 = x3d.HAnimJoint()
HAnimJoint1188.setContainerFieldOverride("joints")
HAnimJoint1188.setUSE("Joe_r_knee")

HAnimHumanoid79.addJoints(HAnimJoint1188)
HAnimJoint1189 = x3d.HAnimJoint()
HAnimJoint1189.setContainerFieldOverride("joints")
HAnimJoint1189.setUSE("Joe_r_ankle")

HAnimHumanoid79.addJoints(HAnimJoint1189)
HAnimJoint1190 = x3d.HAnimJoint()
HAnimJoint1190.setContainerFieldOverride("joints")
HAnimJoint1190.setUSE("Joe_r_subtalar")

HAnimHumanoid79.addJoints(HAnimJoint1190)
HAnimJoint1191 = x3d.HAnimJoint()
HAnimJoint1191.setContainerFieldOverride("joints")
HAnimJoint1191.setUSE("Joe_r_midtarsal")

HAnimHumanoid79.addJoints(HAnimJoint1191)
HAnimJoint1192 = x3d.HAnimJoint()
HAnimJoint1192.setContainerFieldOverride("joints")
HAnimJoint1192.setUSE("Joe_r_metatarsal")

HAnimHumanoid79.addJoints(HAnimJoint1192)
HAnimJoint1193 = x3d.HAnimJoint()
HAnimJoint1193.setContainerFieldOverride("joints")
HAnimJoint1193.setUSE("Joe_vl5")

HAnimHumanoid79.addJoints(HAnimJoint1193)
HAnimJoint1194 = x3d.HAnimJoint()
HAnimJoint1194.setContainerFieldOverride("joints")
HAnimJoint1194.setUSE("Joe_vl4")

HAnimHumanoid79.addJoints(HAnimJoint1194)
HAnimJoint1195 = x3d.HAnimJoint()
HAnimJoint1195.setContainerFieldOverride("joints")
HAnimJoint1195.setUSE("Joe_vl3")

HAnimHumanoid79.addJoints(HAnimJoint1195)
HAnimJoint1196 = x3d.HAnimJoint()
HAnimJoint1196.setContainerFieldOverride("joints")
HAnimJoint1196.setUSE("Joe_vl2")

HAnimHumanoid79.addJoints(HAnimJoint1196)
HAnimJoint1197 = x3d.HAnimJoint()
HAnimJoint1197.setContainerFieldOverride("joints")
HAnimJoint1197.setUSE("Joe_vl1")

HAnimHumanoid79.addJoints(HAnimJoint1197)
HAnimJoint1198 = x3d.HAnimJoint()
HAnimJoint1198.setContainerFieldOverride("joints")
HAnimJoint1198.setUSE("Joe_vt12")

HAnimHumanoid79.addJoints(HAnimJoint1198)
HAnimJoint1199 = x3d.HAnimJoint()
HAnimJoint1199.setContainerFieldOverride("joints")
HAnimJoint1199.setUSE("Joe_vt11")

HAnimHumanoid79.addJoints(HAnimJoint1199)
HAnimJoint1200 = x3d.HAnimJoint()
HAnimJoint1200.setContainerFieldOverride("joints")
HAnimJoint1200.setUSE("Joe_vt10")

HAnimHumanoid79.addJoints(HAnimJoint1200)
HAnimJoint1201 = x3d.HAnimJoint()
HAnimJoint1201.setContainerFieldOverride("joints")
HAnimJoint1201.setUSE("Joe_vt9")

HAnimHumanoid79.addJoints(HAnimJoint1201)
HAnimJoint1202 = x3d.HAnimJoint()
HAnimJoint1202.setContainerFieldOverride("joints")
HAnimJoint1202.setUSE("Joe_vt8")

HAnimHumanoid79.addJoints(HAnimJoint1202)
HAnimJoint1203 = x3d.HAnimJoint()
HAnimJoint1203.setContainerFieldOverride("joints")
HAnimJoint1203.setUSE("Joe_vt7")

HAnimHumanoid79.addJoints(HAnimJoint1203)
HAnimJoint1204 = x3d.HAnimJoint()
HAnimJoint1204.setContainerFieldOverride("joints")
HAnimJoint1204.setUSE("Joe_vt6")

HAnimHumanoid79.addJoints(HAnimJoint1204)
HAnimJoint1205 = x3d.HAnimJoint()
HAnimJoint1205.setContainerFieldOverride("joints")
HAnimJoint1205.setUSE("Joe_vt5")

HAnimHumanoid79.addJoints(HAnimJoint1205)
HAnimJoint1206 = x3d.HAnimJoint()
HAnimJoint1206.setContainerFieldOverride("joints")
HAnimJoint1206.setUSE("Joe_vt4")

HAnimHumanoid79.addJoints(HAnimJoint1206)
HAnimJoint1207 = x3d.HAnimJoint()
HAnimJoint1207.setContainerFieldOverride("joints")
HAnimJoint1207.setUSE("Joe_vt3")

HAnimHumanoid79.addJoints(HAnimJoint1207)
HAnimJoint1208 = x3d.HAnimJoint()
HAnimJoint1208.setContainerFieldOverride("joints")
HAnimJoint1208.setUSE("Joe_vt2")

HAnimHumanoid79.addJoints(HAnimJoint1208)
HAnimJoint1209 = x3d.HAnimJoint()
HAnimJoint1209.setContainerFieldOverride("joints")
HAnimJoint1209.setUSE("Joe_vt1")

HAnimHumanoid79.addJoints(HAnimJoint1209)
HAnimJoint1210 = x3d.HAnimJoint()
HAnimJoint1210.setContainerFieldOverride("joints")
HAnimJoint1210.setUSE("Joe_vc7")

HAnimHumanoid79.addJoints(HAnimJoint1210)
HAnimJoint1211 = x3d.HAnimJoint()
HAnimJoint1211.setContainerFieldOverride("joints")
HAnimJoint1211.setUSE("Joe_vc6")

HAnimHumanoid79.addJoints(HAnimJoint1211)
HAnimJoint1212 = x3d.HAnimJoint()
HAnimJoint1212.setContainerFieldOverride("joints")
HAnimJoint1212.setUSE("Joe_vc5")

HAnimHumanoid79.addJoints(HAnimJoint1212)
HAnimJoint1213 = x3d.HAnimJoint()
HAnimJoint1213.setContainerFieldOverride("joints")
HAnimJoint1213.setUSE("Joe_vc4")

HAnimHumanoid79.addJoints(HAnimJoint1213)
HAnimJoint1214 = x3d.HAnimJoint()
HAnimJoint1214.setContainerFieldOverride("joints")
HAnimJoint1214.setUSE("Joe_vc3")

HAnimHumanoid79.addJoints(HAnimJoint1214)
HAnimJoint1215 = x3d.HAnimJoint()
HAnimJoint1215.setContainerFieldOverride("joints")
HAnimJoint1215.setUSE("Joe_vc2")

HAnimHumanoid79.addJoints(HAnimJoint1215)
HAnimJoint1216 = x3d.HAnimJoint()
HAnimJoint1216.setContainerFieldOverride("joints")
HAnimJoint1216.setUSE("Joe_vc1")

HAnimHumanoid79.addJoints(HAnimJoint1216)
HAnimJoint1217 = x3d.HAnimJoint()
HAnimJoint1217.setContainerFieldOverride("joints")
HAnimJoint1217.setUSE("Joe_skullbase")

HAnimHumanoid79.addJoints(HAnimJoint1217)
HAnimJoint1218 = x3d.HAnimJoint()
HAnimJoint1218.setContainerFieldOverride("joints")
HAnimJoint1218.setUSE("Joe_l_eyeball_joint")

HAnimHumanoid79.addJoints(HAnimJoint1218)
HAnimJoint1219 = x3d.HAnimJoint()
HAnimJoint1219.setContainerFieldOverride("joints")
HAnimJoint1219.setUSE("Joe_r_eyeball_joint")

HAnimHumanoid79.addJoints(HAnimJoint1219)
HAnimJoint1220 = x3d.HAnimJoint()
HAnimJoint1220.setContainerFieldOverride("joints")
HAnimJoint1220.setUSE("Joe_l_sternoclavicular")

HAnimHumanoid79.addJoints(HAnimJoint1220)
HAnimJoint1221 = x3d.HAnimJoint()
HAnimJoint1221.setContainerFieldOverride("joints")
HAnimJoint1221.setUSE("Joe_l_acromioclavicular")

HAnimHumanoid79.addJoints(HAnimJoint1221)
HAnimJoint1222 = x3d.HAnimJoint()
HAnimJoint1222.setContainerFieldOverride("joints")
HAnimJoint1222.setUSE("Joe_l_shoulder")

HAnimHumanoid79.addJoints(HAnimJoint1222)
HAnimJoint1223 = x3d.HAnimJoint()
HAnimJoint1223.setContainerFieldOverride("joints")
HAnimJoint1223.setUSE("Joe_l_elbow")

HAnimHumanoid79.addJoints(HAnimJoint1223)
HAnimJoint1224 = x3d.HAnimJoint()
HAnimJoint1224.setContainerFieldOverride("joints")
HAnimJoint1224.setUSE("Joe_l_wrist")

HAnimHumanoid79.addJoints(HAnimJoint1224)
HAnimJoint1225 = x3d.HAnimJoint()
HAnimJoint1225.setContainerFieldOverride("joints")
HAnimJoint1225.setUSE("Joe_l_thumb1")

HAnimHumanoid79.addJoints(HAnimJoint1225)
HAnimJoint1226 = x3d.HAnimJoint()
HAnimJoint1226.setContainerFieldOverride("joints")
HAnimJoint1226.setUSE("Joe_l_thumb2")

HAnimHumanoid79.addJoints(HAnimJoint1226)
HAnimJoint1227 = x3d.HAnimJoint()
HAnimJoint1227.setContainerFieldOverride("joints")
HAnimJoint1227.setUSE("Joe_l_thumb3")

HAnimHumanoid79.addJoints(HAnimJoint1227)
HAnimJoint1228 = x3d.HAnimJoint()
HAnimJoint1228.setContainerFieldOverride("joints")
HAnimJoint1228.setUSE("Joe_l_index0")

HAnimHumanoid79.addJoints(HAnimJoint1228)
HAnimJoint1229 = x3d.HAnimJoint()
HAnimJoint1229.setContainerFieldOverride("joints")
HAnimJoint1229.setUSE("Joe_l_index1")

HAnimHumanoid79.addJoints(HAnimJoint1229)
HAnimJoint1230 = x3d.HAnimJoint()
HAnimJoint1230.setContainerFieldOverride("joints")
HAnimJoint1230.setUSE("Joe_l_index2")

HAnimHumanoid79.addJoints(HAnimJoint1230)
HAnimJoint1231 = x3d.HAnimJoint()
HAnimJoint1231.setContainerFieldOverride("joints")
HAnimJoint1231.setUSE("Joe_l_index3")

HAnimHumanoid79.addJoints(HAnimJoint1231)
HAnimJoint1232 = x3d.HAnimJoint()
HAnimJoint1232.setContainerFieldOverride("joints")
HAnimJoint1232.setUSE("Joe_l_middle0")

HAnimHumanoid79.addJoints(HAnimJoint1232)
HAnimJoint1233 = x3d.HAnimJoint()
HAnimJoint1233.setContainerFieldOverride("joints")
HAnimJoint1233.setUSE("Joe_l_middle1")

HAnimHumanoid79.addJoints(HAnimJoint1233)
HAnimJoint1234 = x3d.HAnimJoint()
HAnimJoint1234.setContainerFieldOverride("joints")
HAnimJoint1234.setUSE("Joe_l_middle2")

HAnimHumanoid79.addJoints(HAnimJoint1234)
HAnimJoint1235 = x3d.HAnimJoint()
HAnimJoint1235.setContainerFieldOverride("joints")
HAnimJoint1235.setUSE("Joe_l_middle3")

HAnimHumanoid79.addJoints(HAnimJoint1235)
HAnimJoint1236 = x3d.HAnimJoint()
HAnimJoint1236.setContainerFieldOverride("joints")
HAnimJoint1236.setUSE("Joe_l_ring0")

HAnimHumanoid79.addJoints(HAnimJoint1236)
HAnimJoint1237 = x3d.HAnimJoint()
HAnimJoint1237.setContainerFieldOverride("joints")
HAnimJoint1237.setUSE("Joe_l_ring1")

HAnimHumanoid79.addJoints(HAnimJoint1237)
HAnimJoint1238 = x3d.HAnimJoint()
HAnimJoint1238.setContainerFieldOverride("joints")
HAnimJoint1238.setUSE("Joe_l_ring2")

HAnimHumanoid79.addJoints(HAnimJoint1238)
HAnimJoint1239 = x3d.HAnimJoint()
HAnimJoint1239.setContainerFieldOverride("joints")
HAnimJoint1239.setUSE("Joe_l_ring3")

HAnimHumanoid79.addJoints(HAnimJoint1239)
HAnimJoint1240 = x3d.HAnimJoint()
HAnimJoint1240.setContainerFieldOverride("joints")
HAnimJoint1240.setUSE("Joe_l_pinky0")

HAnimHumanoid79.addJoints(HAnimJoint1240)
HAnimJoint1241 = x3d.HAnimJoint()
HAnimJoint1241.setContainerFieldOverride("joints")
HAnimJoint1241.setUSE("Joe_l_pinky1")

HAnimHumanoid79.addJoints(HAnimJoint1241)
HAnimJoint1242 = x3d.HAnimJoint()
HAnimJoint1242.setContainerFieldOverride("joints")
HAnimJoint1242.setUSE("Joe_l_pinky2")

HAnimHumanoid79.addJoints(HAnimJoint1242)
HAnimJoint1243 = x3d.HAnimJoint()
HAnimJoint1243.setContainerFieldOverride("joints")
HAnimJoint1243.setUSE("Joe_l_pinky3")

HAnimHumanoid79.addJoints(HAnimJoint1243)
HAnimJoint1244 = x3d.HAnimJoint()
HAnimJoint1244.setContainerFieldOverride("joints")
HAnimJoint1244.setUSE("Joe_r_sternoclavicular")

HAnimHumanoid79.addJoints(HAnimJoint1244)
HAnimJoint1245 = x3d.HAnimJoint()
HAnimJoint1245.setContainerFieldOverride("joints")
HAnimJoint1245.setUSE("Joe_r_acromioclavicular")

HAnimHumanoid79.addJoints(HAnimJoint1245)
HAnimJoint1246 = x3d.HAnimJoint()
HAnimJoint1246.setContainerFieldOverride("joints")
HAnimJoint1246.setUSE("Joe_r_shoulder")

HAnimHumanoid79.addJoints(HAnimJoint1246)
HAnimJoint1247 = x3d.HAnimJoint()
HAnimJoint1247.setContainerFieldOverride("joints")
HAnimJoint1247.setUSE("Joe_r_elbow")

HAnimHumanoid79.addJoints(HAnimJoint1247)
HAnimJoint1248 = x3d.HAnimJoint()
HAnimJoint1248.setContainerFieldOverride("joints")
HAnimJoint1248.setUSE("Joe_r_wrist")

HAnimHumanoid79.addJoints(HAnimJoint1248)
HAnimJoint1249 = x3d.HAnimJoint()
HAnimJoint1249.setContainerFieldOverride("joints")
HAnimJoint1249.setUSE("Joe_r_thumb1")

HAnimHumanoid79.addJoints(HAnimJoint1249)
HAnimJoint1250 = x3d.HAnimJoint()
HAnimJoint1250.setContainerFieldOverride("joints")
HAnimJoint1250.setUSE("Joe_r_thumb2")

HAnimHumanoid79.addJoints(HAnimJoint1250)
HAnimJoint1251 = x3d.HAnimJoint()
HAnimJoint1251.setContainerFieldOverride("joints")
HAnimJoint1251.setUSE("Joe_r_thumb3")

HAnimHumanoid79.addJoints(HAnimJoint1251)
HAnimJoint1252 = x3d.HAnimJoint()
HAnimJoint1252.setContainerFieldOverride("joints")
HAnimJoint1252.setUSE("Joe_r_index0")

HAnimHumanoid79.addJoints(HAnimJoint1252)
HAnimJoint1253 = x3d.HAnimJoint()
HAnimJoint1253.setContainerFieldOverride("joints")
HAnimJoint1253.setUSE("Joe_r_index1")

HAnimHumanoid79.addJoints(HAnimJoint1253)
HAnimJoint1254 = x3d.HAnimJoint()
HAnimJoint1254.setContainerFieldOverride("joints")
HAnimJoint1254.setUSE("Joe_r_index2")

HAnimHumanoid79.addJoints(HAnimJoint1254)
HAnimJoint1255 = x3d.HAnimJoint()
HAnimJoint1255.setContainerFieldOverride("joints")
HAnimJoint1255.setUSE("Joe_r_index3")

HAnimHumanoid79.addJoints(HAnimJoint1255)
HAnimJoint1256 = x3d.HAnimJoint()
HAnimJoint1256.setContainerFieldOverride("joints")
HAnimJoint1256.setUSE("Joe_r_middle0")

HAnimHumanoid79.addJoints(HAnimJoint1256)
HAnimJoint1257 = x3d.HAnimJoint()
HAnimJoint1257.setContainerFieldOverride("joints")
HAnimJoint1257.setUSE("Joe_r_middle1")

HAnimHumanoid79.addJoints(HAnimJoint1257)
HAnimJoint1258 = x3d.HAnimJoint()
HAnimJoint1258.setContainerFieldOverride("joints")
HAnimJoint1258.setUSE("Joe_r_middle2")

HAnimHumanoid79.addJoints(HAnimJoint1258)
HAnimJoint1259 = x3d.HAnimJoint()
HAnimJoint1259.setContainerFieldOverride("joints")
HAnimJoint1259.setUSE("Joe_r_middle3")

HAnimHumanoid79.addJoints(HAnimJoint1259)
HAnimJoint1260 = x3d.HAnimJoint()
HAnimJoint1260.setContainerFieldOverride("joints")
HAnimJoint1260.setUSE("Joe_r_ring0")

HAnimHumanoid79.addJoints(HAnimJoint1260)
HAnimJoint1261 = x3d.HAnimJoint()
HAnimJoint1261.setContainerFieldOverride("joints")
HAnimJoint1261.setUSE("Joe_r_ring1")

HAnimHumanoid79.addJoints(HAnimJoint1261)
HAnimJoint1262 = x3d.HAnimJoint()
HAnimJoint1262.setContainerFieldOverride("joints")
HAnimJoint1262.setUSE("Joe_r_ring2")

HAnimHumanoid79.addJoints(HAnimJoint1262)
HAnimJoint1263 = x3d.HAnimJoint()
HAnimJoint1263.setContainerFieldOverride("joints")
HAnimJoint1263.setUSE("Joe_r_ring3")

HAnimHumanoid79.addJoints(HAnimJoint1263)
HAnimJoint1264 = x3d.HAnimJoint()
HAnimJoint1264.setContainerFieldOverride("joints")
HAnimJoint1264.setUSE("Joe_r_pinky0")

HAnimHumanoid79.addJoints(HAnimJoint1264)
HAnimJoint1265 = x3d.HAnimJoint()
HAnimJoint1265.setContainerFieldOverride("joints")
HAnimJoint1265.setUSE("Joe_r_pinky1")

HAnimHumanoid79.addJoints(HAnimJoint1265)
HAnimJoint1266 = x3d.HAnimJoint()
HAnimJoint1266.setContainerFieldOverride("joints")
HAnimJoint1266.setUSE("Joe_r_pinky2")

HAnimHumanoid79.addJoints(HAnimJoint1266)
HAnimJoint1267 = x3d.HAnimJoint()
HAnimJoint1267.setContainerFieldOverride("joints")
HAnimJoint1267.setUSE("Joe_r_pinky3")

HAnimHumanoid79.addJoints(HAnimJoint1267)
Coordinate1268 = x3d.Coordinate()
Coordinate1268.setContainerFieldOverride("skinCoord")
Coordinate1268.setDEF("TheSkinCoord")
Coordinate1268.setPoint(x3d.doubleToFloat([0,1.77,0,0,1.665,0.09,-0.033,1.62,0.087,0.033,1.62,0.087,0,1.55,0.097,-0.077,1.64,-0.01,-0.0527,1.58,0.015,0.077,1.64,-0.01,0.0527,1.58,0.015,0,1.625,-0.0925,-0.03,1.46,0.035,0,1.44,0.03,0.03,1.46,0.035,-0.1135,1.318,0.095,0.1135,1.318,0.095,0,1.25,0.113,-0.087,1.19,0.09,-0.0935,1.03,0.075,0.087,1.19,0.09,0.0935,1.03,0.075,-0.1425,1.065,0.0033,-0.15,0.9,-0.01,0.1425,1.065,0.0033,0.15,0.9,-0.01,0,1.53,-0.084,0.0049,1.1908,-0.1113,-0.0773,1.019,-0.12,0.0773,1.019,-0.12,0.005,1.0915,-0.1091,-0.178,1.4825,-0.0625,-0.17,1.38,0.007,-0.1884,0.8676,-0.036,-0.16,1.38,-0.127,-0.2,1.1388,-0.08,-0.244,1.1388,-0.04,-0.165,1.1388,-0.04,-0.23,1.133,-0.055,-0.1977,0.8169,-0.0177,-0.1941,0.6772,-0.0423,-0.2117,0.8562,-0.0584,-0.1929,0.789,-0.1064,0.175,1.4825,-0.06,0.17,1.38,0.007,0.1901,0.8645,-0.0415,0.16,1.38,-0.125,0.2,1.1388,-0.08,0.165,1.1388,-0.04,0.244,1.1388,-0.04,0.23,1.133,-0.055,0.2009,0.8139,-0.0237,0.2056,0.6743,-0.0482,0.2142,0.8529,-0.0648,0.1929,0.786,-0.1122,-0.1,0.4913,-0.03,-0.17,0.466,0,-0.05,0.466,0,-0.165,0.01,0.12,-0.15,0.07,0,-0.085,0.086,0.0125,-0.09,0.056,0.0125,-0.115,0.02,0.122,-0.115,0.04,-0.055,-0.11,0.011,0.19,0.0993,0.4881,-0.0309,0.17,0.466,0,0.05,0.4867,0,0.165,0.01,0.12,0.15,0.07,0,0.085,0.086,0.0125,0.09,0.056,0.0125,0.115,0.02,0.122,0.115,0.04,-0.055,0.11,0.011,0.19,0,0.875,0,-0.0646,1.5149,-0.038,0.0646,1.5149,-0.038,0,1.07225,0.09,-0.11,1.427,-0.1375,-0.235,1.42,-0.0625,0.11,1.427,-0.1375,0.235,1.42,-0.0625,0,1.41,-0.145,0,0.925,0.08,-0.087,1.19,-0.09,0.087,1.19,-0.09,0.172,1.32,-0.03,-0.172,1.32,-0.03,0.15,1.23,-0.015,-0.15,1.23,-0.015,0.079,0.92,-0.14,0.1,0.9,0.077,-0.079,0.92,-0.14,-0.1,0.9,0.075,0,0.87,0,0.171,0.65,0,0.02,0.65,0,0.1,0.65,-0.08,0.1,0.65,0.07,-0.171,0.65,0,-0.02,0.65,0,-0.1,0.65,-0.08,-0.1,0.65,0.07,0.25,1.27,-0.04,0.17,1.27,-0.04,0.2,1.27,-0.09,0.2,1.27,0.02,0.244,1.1388,-0.04,0.165,1.1388,-0.04,0.2,1.1388,-0.08,0.2,1.1388,-0.013,0.225,1,-0.01,0.225,1,-0.07,0.185,1,-0.01,0.185,1,-0.07,0.2,1.1388,-0.04,0.225,0.92,-0.04,0.175,0.92,-0.04,0.2,0.92,-0.065,0.2,0.92,-0.015,0.225,0.89,-0.04,0.175,0.89,-0.04,0.2,0.89,-0.065,0.2,0.89,-0.015,0.218,0.86,-0.04,0.184,0.86,-0.04,0.2,0.87,-0.07,0.2,0.87,0,0.21,0.85,0,0.1854,0.85,0,0.212,0.84,-0.015,0.183,0.84,-0.015,0.213,0.835,-0.04,0.19,0.835,-0.04,0.211,0.835,-0.065,0.192,0.835,-0.065,0.208,0.84,-0.085,0.19,0.84,-0.085,0.2,0.84,-0.095,0.215,0.82,0,0.193,0.815,0.005,0.198,0.8,0.012,0.21,0.82,0.03,0.19,0.82,0.03,0.2,0.835,0.039,0.212,0.8,0.05,0.188,0.8,0.05,0.2,0.807,0.057,0.2,0.793,0.035,0.2,0.774,0.076,0.212,0.78,0.07,0.188,0.78,0.07,0.2,0.785,0.075,0.2,0.77,0.062,0.215,0.793,-0.015,0.187,0.793,-0.015,0.2,0.793,-0.005,0.215,0.788,-0.04,0.187,0.788,-0.04,0.215,0.793,-0.065,0.187,0.793,-0.065,0.21,0.79,-0.085,0.19,0.79,-0.085,0.2,0.79,-0.095,0.19,0.77,-0.0275,0.19,0.77,-0.0525,0.19,0.78,-0.0775,0.212,0.745,-0.015,0.188,0.745,-0.02,0.2,0.745,-0.0255,0.2,0.745,-0.0045,0.211,0.72,-0.015,0.189,0.72,-0.015,0.2,0.72,-0.0252,0.2,0.72,-0.0048,0.21,0.695,-0.015,0.19,0.695,-0.015,0.2,0.695,-0.025,0.2,0.695,-0.005,0.2,0.685,-0.015,0.215,0.74,-0.04,0.185,0.74,-0.04,0.2,0.74,-0.055,0.2,0.74,-0.025,0.21,0.7142,-0.04,0.19,0.7142,-0.04,0.2,0.7142,-0.053,0.2,0.7142,-0.027,0.21,0.68,-0.04,0.19,0.68,-0.04,0.2,0.68,-0.05,0.2,0.68,-0.03,0.2,0.67,-0.04,0.212,0.74,-0.065,0.188,0.74,-0.065,0.2,0.74,-0.0756,0.2,0.74,-0.0542,0.21,0.7177,-0.065,0.19,0.7177,-0.065,0.2,0.7177,-0.0751,0.2,0.7177,-0.0549,0.21,0.695,-0.065,0.19,0.695,-0.065,0.2,0.695,-0.075,0.2,0.695,-0.055,0.2,0.685,-0.065,0.211,0.755,-0.085,0.189,0.755,-0.085,0.2,0.755,-0.0952,0.2,0.755,-0.0748,0.21,0.735,-0.085,0.19,0.735,-0.085,0.2,0.735,-0.0951,0.2,0.735,-0.0749,0.21,0.72,-0.085,0.19,0.72,-0.085,0.2,0.72,-0.095,0.2,0.72,-0.075,0.2,0.71,-0.085,-0.23,1.23,-0.04,-0.16,1.23,-0.04,-0.2,1.235,-0.105,-0.2,1.235,0.02,-0.244,1.1388,-0.04,-0.165,1.1388,-0.04,-0.2,1.1388,-0.08,-0.2,1.1388,0.013,-0.225,1,-0.01,-0.225,1,-0.07,-0.185,1,-0.01,-0.185,1,-0.07,-0.2,1.1388,-0.04,-0.225,0.92,-0.04,-0.175,0.92,-0.04,-0.2,0.92,-0.065,-0.2,0.92,-0.015,-0.225,0.89,-0.04,-0.175,0.89,-0.04,-0.2,0.89,-0.065,-0.2,0.89,-0.015,-0.218,0.86,-0.04,-0.184,0.86,-0.04,-0.2,0.87,-0.07,-0.2,0.87,0,-0.21,0.85,0,-0.1854,0.85,0,-0.212,0.84,-0.015,-0.183,0.84,-0.015,-0.213,0.835,-0.04,-0.19,0.835,-0.04,-0.211,0.835,-0.065,-0.192,0.835,-0.065,-0.208,0.84,-0.085,-0.19,0.84,-0.085,-0.2,0.84,-0.095,-0.215,0.82,0,-0.193,0.815,0.005,-0.198,0.8,0.012,-0.21,0.82,0.03,-0.19,0.82,0.03,-0.2,0.835,0.039,-0.212,0.8,0.05,-0.188,0.8,0.05,-0.2,0.807,0.057,-0.2,0.793,0.035,-0.2,0.774,0.076,-0.212,0.78,0.07,-0.188,0.78,0.07,-0.2,0.785,0.075,-0.2,0.77,0.062,-0.215,0.793,-0.015,-0.187,0.793,-0.015,-0.2,0.793,-0.005,-0.215,0.788,-0.04,-0.187,0.788,-0.04,-0.215,0.793,-0.065,-0.187,0.793,-0.065,-0.21,0.79,-0.085,-0.19,0.79,-0.085,-0.2,0.79,-0.095,-0.19,0.77,-0.0275,-0.19,0.77,-0.0525,-0.19,0.78,-0.0775,-0.212,0.745,-0.015,-0.188,0.745,-0.02,-0.2,0.745,-0.0255,-0.2,0.745,-0.0045,-0.211,0.72,-0.015,-0.189,0.72,-0.015,-0.2,0.72,-0.0252,-0.2,0.72,-0.0048,-0.21,0.695,-0.015,-0.19,0.695,-0.015,-0.2,0.695,-0.025,-0.2,0.695,-0.005,-0.2,0.685,-0.015,-0.215,0.74,-0.04,-0.185,0.74,-0.04,-0.2,0.74,-0.055,-0.2,0.74,-0.025,-0.21,0.7142,-0.04,-0.19,0.7142,-0.04,-0.2,0.7142,-0.053,-0.2,0.7142,-0.027,-0.21,0.68,-0.04,-0.19,0.68,-0.04,-0.2,0.68,-0.05,-0.2,0.68,-0.03,-0.2,0.67,-0.04,-0.212,0.74,-0.065,-0.188,0.74,-0.065,-0.2,0.74,-0.0756,-0.2,0.74,-0.0542,-0.21,0.7177,-0.065,-0.19,0.7177,-0.065,-0.2,0.7177,-0.0751,-0.2,0.7177,-0.0549,-0.21,0.695,-0.065,-0.19,0.695,-0.065,-0.2,0.695,-0.075,-0.2,0.695,-0.055,-0.2,0.685,-0.065,-0.211,0.755,-0.085,-0.189,0.755,-0.085,-0.2,0.755,-0.0952,-0.2,0.755,-0.0748,-0.21,0.735,-0.085,-0.19,0.735,-0.085,-0.2,0.735,-0.0951,-0.2,0.735,-0.0749,-0.21,0.72,-0.085,-0.19,0.72,-0.085,-0.2,0.72,-0.095,-0.2,0.72,-0.075,-0.2,0.71,-0.085,0.115,0.466,0.06,0.115,0.466,-0.055,0.15,0.466,0,0.05,0.466,0,0.17,0.3,0,0.06,0.3,0,0.1,0.3,-0.05,0.1,0.3,0.05,0.15,0.07,0,0.085,0.086,0.0125,0.115,0.069,-0.045,0.117,0.0975,0.0615,0.1375,0.006,-0.03,0.095,0.006,-0.03,0.115,0.015,-0.045,0.115,0.06,0.1,0.115,0,0.07,0.165,0,0.07,0.095,0,0.07,0.115,0.04,0.13,0.125,0,0.12,0.165,0,0.12,0.087,0,0.122,0.09,0.012,0.188,0.11,0.011,0.19,0.128,0.011,0.185,0.142,0.011,0.178,0.154,0.01,0.168,-0.115,0.466,0.06,-0.115,0.466,-0.055,-0.17,0.466,0,-0.05,0.466,0,-0.17,0.3,0,-0.06,0.3,0,-0.1,0.3,-0.05,-0.1,0.3,0.05,-0.15,0.07,0,-0.085,0.086,0.0125,-0.115,0.069,-0.045,-0.117,0.0975,0.0615,-0.1375,0.006,-0.03,-0.095,0.006,-0.03,-0.095,0.006,-0.03,-0.115,0.06,0.1,-0.115,0,0.07,-0.165,0,0.07,-0.095,0,0.07,-0.115,0.04,0.13,-0.125,0,0.12,-0.165,0,0.12,-0.087,0,0.122,-0.09,0.012,0.188,-0.11,0.011,0.19,-0.128,0.011,0.185,-0.142,0.011,0.178,-0.154,0.01,0.168]))

HAnimHumanoid79.setSkinCoord(Coordinate1268)
Shape1269 = x3d.Shape()
Shape1269.setContainerFieldOverride("skin")
Shape1269.setDEF("SkinShape")
Appearance1270 = x3d.Appearance()
Appearance1270.setDEF("SkinAppearance")
Material1271 = x3d.Material()
Material1271.setDEF("SkinMaterial")
Material1271.setAmbientIntensity(0.6)
Material1271.setDiffuseColor(x3d.doubleToFloat([1,1,1]))
Material1271.setShininess(0.6)
Material1271.setTransparency(0.2)

Appearance1270.setMaterial(Material1271)
ImageTexture1272 = x3d.ImageTexture()
ImageTexture1272.setDEF("zBlueSpiralBkg2")
ImageTexture1272.setDescription("Blue Spiral Pattern")
ImageTexture1272.setUrl(["zBlueSpiralBkg2.gif","https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Skin/zBlueSpiralBkg2.gif"])

Appearance1270.setTexture(ImageTexture1272)

Shape1269.setAppearance(Appearance1270)
IndexedFaceSet1273 = x3d.IndexedFaceSet()
IndexedFaceSet1273.setCreaseAngle(3.1)
IndexedFaceSet1273.setCoordIndex([0,9,5,-1,0,7,9,-1,0,5,1,-1,1,5,2,-1,1,3,7,-1,2,4,3,-1,0,1,7,-1,1,2,3,-1,5,6,2,-1,7,3,8,-1,6,4,2,-1,3,4,8,-1,9,6,5,-1,9,7,8,-1,4,6,10,-1,4,10,12,-1,4,12,8,-1,10,11,12,-1,9,75,24,-1,9,24,74,-1,9,8,75,-1,9,74,6,-1,10,6,74,-1,12,75,8,-1,74,24,29,-1,24,77,29,-1,10,74,29,-1,77,32,29,-1,32,78,29,-1,78,30,29,-1,30,10,29,-1,41,24,75,-1,41,75,12,-1,41,12,42,-1,41,42,80,-1,41,80,44,-1,41,44,79,-1,41,79,24,-1,81,24,79,-1,81,77,24,-1,81,25,77,-1,81,79,25,-1,25,79,44,-1,25,32,77,-1,25,83,32,-1,25,26,83,-1,25,27,26,-1,25,84,27,-1,25,44,84,-1,11,10,30,-1,11,30,13,-1,11,13,15,-1,11,15,14,-1,11,14,42,-1,11,42,12,-1,15,13,16,-1,15,18,14,-1,15,16,76,-1,15,76,18,-1,76,16,17,-1,76,17,82,-1,76,82,19,-1,76,19,18,-1,22,18,19,-1,22,87,18,-1,22,27,84,-1,22,84,87,-1,87,84,85,-1,85,84,44,-1,85,42,14,-1,87,14,18,-1,87,85,14,-1,20,83,26,-1,20,17,16,-1,20,16,88,-1,20,88,83,-1,88,16,13,-1,88,13,86,-1,88,86,83,-1,86,13,30,-1,86,32,83,-1,23,89,22,-1,89,27,22,-1,89,91,27,-1,91,26,27,-1,91,20,26,-1,21,20,91,-1,21,17,20,-1,21,92,17,-1,82,17,92,-1,82,90,19,-1,23,22,19,-1,23,19,90,-1,82,92,101,-1,82,101,99,-1,82,99,93,-1,82,93,95,-1,82,95,97,-1,82,97,90,-1,23,90,97,-1,23,97,94,-1,23,94,89,-1,89,94,96,-1,89,96,95,-1,89,95,93,-1,89,93,91,-1,91,93,99,-1,91,99,100,-1,91,100,98,-1,21,91,98,-1,21,98,101,-1,21,101,92,-1,85,105,42,-1,85,103,105,-1,85,44,103,-1,103,44,104,-1,80,42,105,-1,80,105,102,-1,80,102,104,-1,80,104,44,-1,105,109,102,-1,102,109,47,-1,47,104,102,-1,104,47,45,-1,104,45,103,-1,103,45,46,-1,103,46,109,-1,103,109,105,-1,109,112,110,-1,109,110,47,-1,47,110,111,-1,47,111,45,-1,45,111,113,-1,113,46,45,-1,46,113,112,-1,112,109,46,-1,112,118,110,-1,110,118,115,-1,110,115,111,-1,111,115,117,-1,111,117,113,-1,113,117,116,-1,113,116,112,-1,112,116,118,-1,115,118,119,-1,119,118,122,-1,118,116,122,-1,122,116,120,-1,116,117,120,-1,120,117,121,-1,117,115,121,-1,115,119,121,-1,119,127,123,-1,119,122,127,-1,122,126,127,-1,122,128,126,-1,122,120,128,-1,120,124,128,-1,120,121,124,-1,121,125,124,-1,121,119,125,-1,119,123,125,-1,127,129,123,-1,127,126,129,-1,129,126,141,-1,141,126,143,-1,126,142,143,-1,126,128,142,-1,128,124,130,-1,142,128,130,-1,124,132,130,-1,124,134,132,-1,125,134,124,-1,125,136,134,-1,125,137,136,-1,125,135,137,-1,125,133,135,-1,125,123,133,-1,123,131,133,-1,123,129,131,-1,131,129,138,-1,129,141,138,-1,138,141,144,-1,141,143,144,-1,143,146,144,-1,142,146,143,-1,142,145,146,-1,139,145,142,-1,130,139,142,-1,139,130,132,-1,139,132,154,-1,132,157,154,-1,132,159,157,-1,132,134,159,-1,134,136,159,-1,136,161,159,-1,136,137,161,-1,137,162,161,-1,160,162,137,-1,135,160,137,-1,133,160,135,-1,133,158,160,-1,131,158,133,-1,156,158,131,-1,153,156,131,-1,131,138,153,-1,138,155,153,-1,140,155,138,-1,138,144,140,-1,144,147,140,-1,140,147,145,-1,140,145,139,-1,139,155,140,-1,154,155,139,-1,146,149,144,-1,146,151,149,-1,145,151,146,-1,150,151,145,-1,145,152,150,-1,147,152,145,-1,147,149,152,-1,147,144,149,-1,148,149,151,-1,148,152,149,-1,148,150,152,-1,148,151,150,-1,160,207,162,-1,160,205,207,-1,165,208,205,-1,160,165,205,-1,158,165,160,-1,161,162,207,-1,161,207,206,-1,165,206,208,-1,206,165,161,-1,161,165,159,-1,207,209,211,-1,205,209,207,-1,205,212,209,-1,205,208,212,-1,206,212,208,-1,206,210,212,-1,206,207,210,-1,207,211,210,-1,209,212,213,-1,212,216,213,-1,212,214,216,-1,210,214,212,-1,210,215,214,-1,210,211,215,-1,209,215,211,-1,209,213,215,-1,217,213,216,-1,217,215,213,-1,217,214,215,-1,217,216,214,-1,158,194,165,-1,192,194,158,-1,164,195,192,-1,158,164,192,-1,156,164,158,-1,159,194,165,-1,159,194,193,-1,159,193,195,-1,159,195,164,-1,159,164,157,-1,157,164,180,-1,192,198,194,-1,192,196,198,-1,192,195,196,-1,195,199,196,-1,196,199,200,-1,199,203,200,-1,193,199,195,-1,193,197,199,-1,193,198,197,-1,193,194,198,-1,199,201,203,-1,197,201,199,-1,197,198,201,-1,198,202,201,-1,196,202,198,-1,200,202,196,-1,204,202,200,-1,204,201,202,-1,204,203,201,-1,204,200,203,-1,156,181,164,-1,156,179,181,-1,156,182,179,-1,156,163,182,-1,163,180,182,-1,157,180,163,-1,164,181,180,-1,179,182,183,-1,182,186,183,-1,182,184,186,-1,180,184,182,-1,180,181,184,-1,181,185,184,-1,179,185,181,-1,183,185,179,-1,183,186,187,-1,186,190,187,-1,184,190,186,-1,184,188,190,-1,184,185,188,-1,185,189,188,-1,185,183,189,-1,183,187,189,-1,191,189,187,-1,191,188,189,-1,191,190,188,-1,191,187,190,-1,153,163,156,-1,153,168,163,-1,153,166,168,-1,153,169,166,-1,155,169,153,-1,155,167,169,-1,154,167,155,-1,154,163,167,-1,154,157,163,-1,163,168,167,-1,166,169,170,-1,169,173,170,-1,169,171,173,-1,169,167,171,-1,167,168,171,-1,168,172,171,-1,168,170,172,-1,170,168,166,-1,170,173,174,-1,173,177,174,-1,173,175,177,-1,173,171,175,-1,171,172,175,-1,172,176,175,-1,172,174,176,-1,170,174,172,-1,178,176,174,-1,178,175,176,-1,178,177,175,-1,178,174,177,-1,86,30,221,-1,86,221,219,-1,86,219,32,-1,32,219,220,-1,78,32,220,-1,78,220,218,-1,78,218,221,-1,78,221,30,-1,221,225,219,-1,219,225,35,-1,35,33,219,-1,33,220,219,-1,33,34,220,-1,220,34,218,-1,221,218,34,-1,34,225,221,-1,225,226,228,-1,225,228,35,-1,35,228,229,-1,35,229,33,-1,33,229,227,-1,33,227,34,-1,34,227,226,-1,34,226,225,-1,226,234,228,-1,228,234,232,-1,232,229,228,-1,232,233,229,-1,229,233,227,-1,227,233,231,-1,227,231,226,-1,226,231,234,-1,231,235,234,-1,235,238,234,-1,234,238,232,-1,238,236,232,-1,232,236,233,-1,236,237,233,-1,233,237,231,-1,231,237,235,-1,235,239,243,-1,235,243,238,-1,238,243,242,-1,238,242,244,-1,238,244,236,-1,236,244,240,-1,236,240,237,-1,237,240,241,-1,237,241,235,-1,235,241,239,-1,243,239,245,-1,243,245,242,-1,245,257,242,-1,257,259,242,-1,242,259,258,-1,242,258,244,-1,244,246,240,-1,258,246,244,-1,240,246,248,-1,240,248,250,-1,241,240,250,-1,241,250,252,-1,241,252,253,-1,241,253,251,-1,241,251,249,-1,241,249,239,-1,239,249,247,-1,239,247,245,-1,247,254,245,-1,245,254,257,-1,254,260,257,-1,257,260,259,-1,259,260,262,-1,258,259,262,-1,258,262,261,-1,255,258,261,-1,246,258,255,-1,255,248,246,-1,255,270,248,-1,248,270,273,-1,248,273,275,-1,248,275,250,-1,250,275,252,-1,252,275,277,-1,252,277,253,-1,253,277,278,-1,276,253,278,-1,251,253,276,-1,249,251,276,-1,249,276,274,-1,247,249,274,-1,272,247,274,-1,269,247,272,-1,247,269,254,-1,254,269,271,-1,256,254,271,-1,254,256,260,-1,260,256,263,-1,256,261,263,-1,256,255,261,-1,255,256,271,-1,270,255,271,-1,262,260,265,-1,262,265,267,-1,261,262,267,-1,266,261,267,-1,261,266,268,-1,263,261,268,-1,263,268,265,-1,263,265,260,-1,264,267,265,-1,264,265,268,-1,264,268,266,-1,264,266,267,-1,276,278,323,-1,276,323,321,-1,281,321,324,-1,276,321,281,-1,274,276,281,-1,277,323,278,-1,277,322,323,-1,281,324,322,-1,322,277,281,-1,277,275,281,-1,323,327,325,-1,321,323,325,-1,321,325,328,-1,321,328,324,-1,322,324,328,-1,322,328,326,-1,322,326,323,-1,323,326,327,-1,325,329,328,-1,328,329,332,-1,328,332,330,-1,326,328,330,-1,326,330,331,-1,326,331,327,-1,325,327,331,-1,325,331,329,-1,333,332,329,-1,333,329,331,-1,333,331,330,-1,333,330,332,-1,274,281,310,-1,308,274,310,-1,280,308,311,-1,274,308,280,-1,272,274,280,-1,275,310,281,-1,275,309,310,-1,275,311,309,-1,275,280,311,-1,275,273,280,-1,273,296,280,-1,308,310,314,-1,308,314,312,-1,308,312,311,-1,311,312,315,-1,312,316,315,-1,315,316,319,-1,309,311,315,-1,309,315,313,-1,309,313,314,-1,309,314,310,-1,315,319,317,-1,313,315,317,-1,313,317,314,-1,314,317,318,-1,312,314,318,-1,316,312,318,-1,320,316,318,-1,320,318,317,-1,320,317,319,-1,320,319,316,-1,272,280,297,-1,272,297,295,-1,272,295,298,-1,272,298,279,-1,279,298,296,-1,273,279,296,-1,280,296,297,-1,295,299,298,-1,298,299,302,-1,298,302,300,-1,296,298,300,-1,296,300,297,-1,297,300,301,-1,295,297,301,-1,299,295,301,-1,299,303,302,-1,302,303,306,-1,300,302,306,-1,300,306,304,-1,300,304,301,-1,301,304,305,-1,301,305,299,-1,299,305,303,-1,307,303,305,-1,307,305,304,-1,307,304,306,-1,307,306,303,-1,269,272,279,-1,269,279,284,-1,269,284,282,-1,269,282,285,-1,271,269,285,-1,271,285,283,-1,270,271,283,-1,270,283,279,-1,270,279,273,-1,279,283,284,-1,282,286,285,-1,285,286,289,-1,285,289,287,-1,285,287,283,-1,283,287,284,-1,284,287,288,-1,284,288,286,-1,286,282,284,-1,286,290,289,-1,289,290,293,-1,289,293,291,-1,289,291,287,-1,287,291,288,-1,288,291,292,-1,288,292,290,-1,286,288,290,-1,294,290,292,-1,294,292,291,-1,294,291,293,-1,294,293,290,-1,97,334,336,-1,97,336,94,-1,94,336,96,-1,336,335,96,-1,96,335,95,-1,95,335,337,-1,95,337,334,-1,95,334,97,-1,334,341,336,-1,336,341,338,-1,336,338,335,-1,335,338,340,-1,335,340,337,-1,337,340,339,-1,337,339,334,-1,334,339,341,-1,341,345,342,-1,341,342,338,-1,338,342,340,-1,340,342,344,-1,340,344,339,-1,339,344,343,-1,339,343,345,-1,339,345,341,-1,345,349,342,-1,342,349,351,-1,342,351,346,-1,342,346,344,-1,71,346,348,-1,71,344,346,-1,71,348,347,-1,71,347,344,-1,344,347,343,-1,343,347,352,-1,343,352,349,-1,343,349,345,-1,349,352,356,-1,349,356,353,-1,349,353,355,-1,349,355,351,-1,354,356,352,-1,354,352,350,-1,354,350,351,-1,354,351,355,-1,353,356,357,-1,353,357,358,-1,353,358,359,-1,353,359,360,-1,353,360,361,-1,353,361,355,-1,354,357,356,-1,350,346,351,-1,348,346,347,-1,350,347,346,-1,350,352,347,-1,354,358,357,-1,354,359,358,-1,354,360,359,-1,354,361,360,-1,354,355,361,-1,101,362,365,-1,101,365,99,-1,99,365,100,-1,100,365,363,-1,100,363,98,-1,98,363,364,-1,98,364,101,-1,101,364,362,-1,362,369,367,-1,362,367,365,-1,365,367,363,-1,363,367,368,-1,363,367,368,-1,363,368,366,-1,363,366,364,-1,364,366,362,-1,362,366,369,-1,369,373,371,-1,369,371,367,-1,367,371,368,-1,368,371,372,-1,368,372,366,-1,366,372,370,-1,366,370,369,-1,369,370,373,-1,373,377,380,-1,373,380,375,-1,373,375,371,-1,371,375,372,-1,372,375,376,-1,372,376,374,-1,372,374,370,-1,370,374,379,-1,373,370,379,-1,373,379,377,-1,377,379,383,-1,377,383,381,-1,377,381,384,-1,377,384,380,-1,381,383,389,-1,381,389,388,-1,381,388,387,-1,381,387,386,-1,381,386,385,-1,381,385,384,-1,376,375,374,-1,378,379,374,-1,378,374,375,-1,378,375,380,-1,382,386,387,-1,382,387,388,-1,382,388,389,-1,382,389,383,-1,382,383,379,-1,382,379,378,-1,382,378,380,-1,382,380,384,-1,382,384,385,-1,382,385,386,-1])
Color1274 = x3d.Color()
Color1274.setColor(x3d.doubleToFloat([1,0,0,0,1,1,0,1,0,1,1,0,1,1,0,1,0,0,0,1,0,0,0,1,0,1,1,0,1,1,1,1,0,1,1,0,1,1,0,1,1,0,0,1,0,0,0,1,0,1,0,1,0,0,0,1,0,1,0,1,1,0,0,1,0,0,1,1,0,1,1,0,1,1,1,1,0,0,0,1,0,0,1,0,1,1,0,0,1,0,1,1,0,1,1,1,0,1,0,1,1,0,0,1,0,1,1,0,0,1,0,1,0,0,0,1,0,1,1,0,0,1,0,1,1,0,0,0,1,0,0,1,0,1,0,1,1,0,0,0,1,1,1,0,0,1,0,0,0,1,1,1,0,0,1,0,1,1,0,0,1,0,0,0,1,1,1,0,0,1,0,0,1,0,1,1,0,0,0,1,0,1,0,1,1,0,0,0,1,0,1,0,1,1,0,0,0,1,0,1,0,1,1,0,0,0,1,0,0,1,0,0,1,0,1,0,0,0,1,0,1,0,1,1,0,0,0,1,0,1,0,1,1,0,0,0,1,0,0,1,0,1,0,1,1,0,0,1,0,1,1,0,1,1,0,0,1,0,1,1,0,0,0,1,1,1,0,0,0,1,0,0,1,0,0,1,1,1,0,0,1,0,0,0,1,1,1,0,1,1,0,0,0,1,0,1,0,0,0,1,1,1,0,0,1,0,1,1,0,0,1,0,1,1,0,0,0,1,1,1,0,0,1,0,1,1,0,0,1,0,1,1,0,0,0,1,0,1,0,1,1,0,0,1,0,1,1,0,1,1,0,0,1,0,1,1,0,1,0,1,1,1,0,0,1,0,0,1,0,1,1,0,0,0,1,1,1,0,0,1,0,0,0,1,0,1,0,1,1,0,0,0,1,0,1,0,1,1,0,0,1,0,1,1,0,0,0,1,1,0,1,1,0,1,1,0,1,1,0,1,0,1,0,1,0,0,0,1,0,1,0,0,0,1,0,1,0,0,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,1,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,1,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,1,0,0,1,0,1,0,1,0,0,0,0,1,1,0,0,0,1,0,0,0,1,0,1,1,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,1,1,0,1,0,0,0,0,1,0,1,1,1,0,0,1,0,1,0,1,0,1,0,0,1,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,1,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,0,1,0,0,0,1,0,1,0,1,1,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,1,1,0,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,1,0,1,0,1,0,1,0,0,0,1,0,1,0,1,0,1,0,1,0,0,0,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,1,1,0,0,1,0,1,1,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,0,1,0,1,1,0,0,1,0,1,1,0,1,0,1,1,1,0,0,1,0,1,1,0,0,0,1,0,1,0,1,1,0,0,0,1,1,1,0,0,1,0,1,1,0,0,1,0,0,1,0,0,0,1,1,1,0,0,1,0,1,1,0,0,1,0,0,0,1,1,1,0,1,0,1,1,0,1,1,0,1,1,0,1,0,1,0,1,0,0,0,1,0,1,0,0,0,1,0,1,0,0,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,1,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,1,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,1,0,0,1,0,1,0,1,0,0,0,0,1,1,0,0,0,1,0,0,0,1,0,1,1,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,0,0,1,1,1,0,1,0,0,0,0,1,0,1,1,1,0,0,1,0,1,0,1,0,1,0,0,1,0,1,0,1,0,1,0,0,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,1,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,0,1,0,0,0,1,0,1,0,1,1,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,1,1,0,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,1,0,1,0,1,0,1,0,0,0,1,0,1,0,1,0,1,0,1,0,0,0,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,1,1,0,0,1,0,1,1,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,0,1,0,1,0,1,0,1,0,1,0,1,1,1,0,0,0,1,0,1,0,0,0,1,1,1,0,0,1,0,1,1,0,0,1,0,1,1,0,0,1,0,1,1,0,0,1,0,0,1,0,1,1,0,1,0,1,0,1,0,1,1,0,0,1,0,1,1,0,0,0,1,1,1,0,0,1,0,1,1,0,0,0,1,0,1,0,1,1,0,0,0,1,1,1,0,0,1,0,0,0,1,1,0,1,0,1,0,1,1,0,0,1,0,1,1,0,0,0,1,0,1,0,1,1,0,0,1,0,1,1,0,1,0,1,0,1,0,0,1,0,1,1,0,0,1,0,1,1,0,0,1,0,1,1,0,1,1,0,0,1,0,1,1,0,0,1,0,1,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,1,1,0,0,0,1,0,1,0,0,0,1,1,1,0,0,1,0,1,1,0,0,1,0,1,1,0,0,1,0,1,1,0,0,1,0,0,1,0,1,1,0,1,0,1,0,1,0,1,1,0,0,1,0,1,1,0,0,0,1,1,1,0,0,1,0,1,1,0,0,0,1,0,1,0,1,1,0,0,0,1,1,1,0,0,1,0,0,0,1,1,0,1,0,1,0,1,1,0,0,1,0,1,1,0,0,0,1,0,1,0,1,1,0,0,1,0,1,1,0,1,0,1,0,1,0,0,1,0,1,1,0,0,1,0,1,1,0,0,1,0,1,1,0,1,1,0,0,1,0,1,1,0,0,1,0,1,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,1,1,1]))

IndexedFaceSet1273.setColor(Color1274)
Coordinate1275 = x3d.Coordinate()
Coordinate1275.setUSE("TheSkinCoord")

IndexedFaceSet1273.setCoord(Coordinate1275)

Shape1269.setGeometry(IndexedFaceSet1273)

HAnimHumanoid79.addSkin(Shape1269)

Group78.addChild(HAnimHumanoid79)

Group77.addChild(Group78)

Scene33.addChild(Group77)
TimeSensor1276 = x3d.TimeSensor()
TimeSensor1276.setDEF("Time1")
TimeSensor1276.setCycleInterval(2.86)
TimeSensor1276.setLoop(True)

Scene33.addChild(TimeSensor1276)
TimeSensor1277 = x3d.TimeSensor()
TimeSensor1277.setDEF("Time2")
TimeSensor1277.setCycleInterval(5.72)
TimeSensor1277.setLoop(True)

Scene33.addChild(TimeSensor1277)
TimeSensor1278 = x3d.TimeSensor()
TimeSensor1278.setDEF("Time3")
TimeSensor1278.setCycleInterval(5.8)
TimeSensor1278.setLoop(True)

Scene33.addChild(TimeSensor1278)
OrientationInterpolator1279 = x3d.OrientationInterpolator()
OrientationInterpolator1279.setDEF("Pitch")
OrientationInterpolator1279.setKey(x3d.doubleToFloat([0,0.2,0.4,0.6,0.8,1]))
OrientationInterpolator1279.setKeyValue(x3d.doubleToFloat([1,0,0,0,1,0,0,1.25600004196167,1,0,0,2.51200008392334,1,0,0,3.76799988746643,1,0,0,5.02400016784668,1,0,0,6.28000020980835]))

Scene33.addChild(OrientationInterpolator1279)
OrientationInterpolator1280 = x3d.OrientationInterpolator()
OrientationInterpolator1280.setDEF("Yaw")
OrientationInterpolator1280.setKey(x3d.doubleToFloat([0,0.2,0.4,0.6,0.8,1]))
OrientationInterpolator1280.setKeyValue(x3d.doubleToFloat([0,1,0,0,0,1,0,1.25600004196167,0,1,0,2.51200008392334,0,1,0,3.76799988746643,0,1,0,5.02400016784668,0,1,0,6.28000020980835]))

Scene33.addChild(OrientationInterpolator1280)
OrientationInterpolator1281 = x3d.OrientationInterpolator()
OrientationInterpolator1281.setDEF("Roll")
OrientationInterpolator1281.setKey(x3d.doubleToFloat([0,0.2,0.4,0.6,0.8,1]))
OrientationInterpolator1281.setKeyValue(x3d.doubleToFloat([0,0,1,0,0,0,1,1.25600004196167,0,0,1,2.51200008392334,0,0,1,3.76799988746643,0,0,1,5.02400016784668,0,0,1,6.28000020980835]))

Scene33.addChild(OrientationInterpolator1281)
OrientationInterpolator1282 = x3d.OrientationInterpolator()
OrientationInterpolator1282.setDEF("vc6Yaw")
OrientationInterpolator1282.setKey(x3d.doubleToFloat([0,0.2,0.4,0.5,0.6,0.7,0.8,0.9,1]))
OrientationInterpolator1282.setKeyValue(x3d.doubleToFloat([0,1,0,0,0,1,0,0.699999988079071,0,1,0,0,0,1,0,0,-1,0,0,0.5,-0.400000005960465,-1,0,0.699999988079071,-0.400000005960465,-1,0,0.400000005960465,0,1,0,0,0,1,0,0]))

Scene33.addChild(OrientationInterpolator1282)
OrientationInterpolator1283 = x3d.OrientationInterpolator()
OrientationInterpolator1283.setDEF("EyeballsRotation")
OrientationInterpolator1283.setKey(x3d.doubleToFloat([0,0.1,0.2,0.3,0.4,0.5,0.6,0.7,0.8,1]))
OrientationInterpolator1283.setKeyValue(x3d.doubleToFloat([0,0,1,0,0,0,1,0,0.200000002980232,0.200000002980232,0.200000002980232,0.200000002980232,-0.200000002980232,0.200000002980232,0.200000002980232,0.200000002980232,-0.200000002980232,-0.200000002980232,0.200000002980232,0.200000002980232,0.200000002980232,-0.200000002980232,0.200000002980232,0.200000002980232,-0.200000002980232,0.200000002980232,-0.200000002980232,0.200000002980232,-0.200000002980232,0.200000002980232,-0.200000002980232,0.200000002980232,0,0,1,0,0,0,1,0]))

Scene33.addChild(OrientationInterpolator1283)
OrientationInterpolator1284 = x3d.OrientationInterpolator()
OrientationInterpolator1284.setDEF("r_sternoclavicularRelax")
OrientationInterpolator1284.setKey(x3d.doubleToFloat([0,0.2,0.4,0.6,0.8,1]))
OrientationInterpolator1284.setKeyValue(x3d.doubleToFloat([0,0,1,0,0,0,1,0,0.200000002980232,-1,0,0.109999999403954,0.200000002980232,-1,0,0.109999999403954,0.100000001490116,-1,0,0.100000001490116,0,0,1,0]))

Scene33.addChild(OrientationInterpolator1284)
OrientationInterpolator1285 = x3d.OrientationInterpolator()
OrientationInterpolator1285.setDEF("r_acromioclavicularRelax")
OrientationInterpolator1285.setKey(x3d.doubleToFloat([0,0.2,0.4,0.6,0.8,1]))
OrientationInterpolator1285.setKeyValue(x3d.doubleToFloat([0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0]))

Scene33.addChild(OrientationInterpolator1285)
OrientationInterpolator1286 = x3d.OrientationInterpolator()
OrientationInterpolator1286.setDEF("r_shoulderRelax")
OrientationInterpolator1286.setKey(x3d.doubleToFloat([0,0.1,0.3,0.6,0.8,1]))
OrientationInterpolator1286.setKeyValue(x3d.doubleToFloat([0,0,1,0,0,0,1,0,0.400000005960465,-0.699999988079071,-0.550000011920929,0.349999994039536,0.400000005960465,-0.699999988079071,-0.550000011920929,0.349999994039536,0.400000005960465,-0.699999988079071,-0.550000011920929,0.349999994039536,0,0,1,0]))

Scene33.addChild(OrientationInterpolator1286)
OrientationInterpolator1287 = x3d.OrientationInterpolator()
OrientationInterpolator1287.setDEF("r_elbowRelax")
OrientationInterpolator1287.setKey(x3d.doubleToFloat([0,0.15,0.4,0.6,0.9,1]))
OrientationInterpolator1287.setKeyValue(x3d.doubleToFloat([0,0,1,0,0,0,1,0,-0.200000002980232,0,0.00999999977648258,0.5,-0.200000002980232,0,0.00999999977648258,0.5,-0.200000002980232,0,0.00999999977648258,0.5,0,0,1,0]))

Scene33.addChild(OrientationInterpolator1287)
OrientationInterpolator1288 = x3d.OrientationInterpolator()
OrientationInterpolator1288.setDEF("r_wristRelax")
OrientationInterpolator1288.setKey(x3d.doubleToFloat([0,0.2,0.4,0.6,0.9,1]))
OrientationInterpolator1288.setKeyValue(x3d.doubleToFloat([0,0,1,0,0,0,1,0,0,0.100000001490116,-0.0900000035762787,0.25,0,0.100000001490116,-0.0900000035762787,0.25,0,0.100000001490116,-0.0900000035762787,0.25,0,0,1,0]))

Scene33.addChild(OrientationInterpolator1288)
OrientationInterpolator1289 = x3d.OrientationInterpolator()
OrientationInterpolator1289.setDEF("r_index0Relax")
OrientationInterpolator1289.setKey(x3d.doubleToFloat([0,0.1,0.3,0.6,0.8,1]))
OrientationInterpolator1289.setKeyValue(x3d.doubleToFloat([0,0,1,0,0,0,1,0,-0.25,0.25,-1,0.125,-0.25,0.25,-1,0.125,-0.25,0.25,-1,0.125,0,0,1,0]))

Scene33.addChild(OrientationInterpolator1289)
OrientationInterpolator1290 = x3d.OrientationInterpolator()
OrientationInterpolator1290.setDEF("r_index1Relax")
OrientationInterpolator1290.setKey(x3d.doubleToFloat([0,0.1,0.2,0.6,0.8,1]))
OrientationInterpolator1290.setKeyValue(x3d.doubleToFloat([0,0,1,0,0,0,1,0,-0.135000005364418,-0.135000005364418,1,0.35699999332428,-0.158999994397163,-0.152999997138977,1,0.354999989271164,-0.158999994397163,-0.152999997138977,1,0.35699999332428,0,0,1,0]))

Scene33.addChild(OrientationInterpolator1290)
OrientationInterpolator1291 = x3d.OrientationInterpolator()
OrientationInterpolator1291.setDEF("r_middle0Relax")
OrientationInterpolator1291.setKey(x3d.doubleToFloat([0,0.1,0.3,0.6,0.8,1]))
OrientationInterpolator1291.setKeyValue(x3d.doubleToFloat([0,0,1,0,0,0,1,0,0,0,-1,0.140000000596046,0,0,-1,0.140000000596046,0,0,-1,0.140000000596046,0,0,1,0]))

Scene33.addChild(OrientationInterpolator1291)
OrientationInterpolator1292 = x3d.OrientationInterpolator()
OrientationInterpolator1292.setDEF("r_middle1Relax")
OrientationInterpolator1292.setKey(x3d.doubleToFloat([0,0.1,0.2,0.3,0.4,0.5,0.6,0.7,0.8,0.9,1]))
OrientationInterpolator1292.setKeyValue(x3d.doubleToFloat([0,0,1,0,0,0,1,0,0,0,0.300000011920929,0.256999999284744,0,0,0.300000011920929,0.370000004768372,0,0,0.300000011920929,0.389999985694885,0,0,0.300000011920929,0.310000002384186,0,0,0.300000011920929,0.319999992847443,0,0,0.300000011920929,0.340000003576279,0,0,0.300000011920929,0.280000001192093,0,0,1,0,0,0,1,0]))

Scene33.addChild(OrientationInterpolator1292)
OrientationInterpolator1293 = x3d.OrientationInterpolator()
OrientationInterpolator1293.setDEF("r_ring0Relax")
OrientationInterpolator1293.setKey(x3d.doubleToFloat([0,0.1,0.3,0.6,0.8,1]))
OrientationInterpolator1293.setKeyValue(x3d.doubleToFloat([0,0,1,0,0,0,1,0,0.25,0.25,-1,0.100000001490116,0.25,0.25,-1,0.100000001490116,0.25,0.25,-1,0.100000001490116,0,0,1,0]))

Scene33.addChild(OrientationInterpolator1293)
OrientationInterpolator1294 = x3d.OrientationInterpolator()
OrientationInterpolator1294.setDEF("r_ring1Relax")
OrientationInterpolator1294.setKey(x3d.doubleToFloat([0,0.1,0.4,0.5,0.8,1]))
OrientationInterpolator1294.setKeyValue(x3d.doubleToFloat([0,0,1,0,0,0,1,0,0.135000005364418,0.135000005364418,1,0.270000010728836,0.135000005364418,0.135000005364418,1,0.270000010728836,0.135000005364418,0.150000005960464,1,0.270000010728836,0,0,1,0]))

Scene33.addChild(OrientationInterpolator1294)
OrientationInterpolator1295 = x3d.OrientationInterpolator()
OrientationInterpolator1295.setDEF("r_pinky0Relax")
OrientationInterpolator1295.setKey(x3d.doubleToFloat([0,0.1,0.3,0.5,0.8,1]))
OrientationInterpolator1295.setKeyValue(x3d.doubleToFloat([0,0,1,0,0,0,1,0,0.349999994039536,0.349999994039536,-0.699999988079071,0.119999997317791,0.349999994039536,0.349999994039536,-0.899999976158142,0.119999997317791,0.349999994039536,0.349999994039536,-0.699999988079071,0.119999997317791,0,0,1,0]))

Scene33.addChild(OrientationInterpolator1295)
OrientationInterpolator1296 = x3d.OrientationInterpolator()
OrientationInterpolator1296.setDEF("r_pinky1Relax")
OrientationInterpolator1296.setKey(x3d.doubleToFloat([0,0.1,0.4,0.6,0.8,1]))
OrientationInterpolator1296.setKeyValue(x3d.doubleToFloat([0,0,1,0,0,0,1,0,0.200000002980232,0.25,1,0.270000010728836,0.200000002980232,0.219999998807907,1,0.270000010728836,0.219999998807907,0.200000002980232,1,0.270000010728836,0,0,1,0]))

Scene33.addChild(OrientationInterpolator1296)
OrientationInterpolator1297 = x3d.OrientationInterpolator()
OrientationInterpolator1297.setDEF("r_thumb1Relax")
OrientationInterpolator1297.setKey(x3d.doubleToFloat([0,0.03,0.08,0.2,0.3,0.4,0.5,0.8,0.95,1]))
OrientationInterpolator1297.setKeyValue(x3d.doubleToFloat([0,0,1,0,0,0,1,0,0,-1,1,1,0.5,-0.159999996423721,0.159999996423721,0.785000026226044,0.5,-0.159999996423721,0.159999996423721,0.785000026226044,1,1,1,0.75,1,1,1,0.75,1,1,1,0.75,1,1,1,0.75,0,0,1,0]))

Scene33.addChild(OrientationInterpolator1297)
OrientationInterpolator1298 = x3d.OrientationInterpolator()
OrientationInterpolator1298.setDEF("r_thumb2Relax")
OrientationInterpolator1298.setKey(x3d.doubleToFloat([0,0.2,0.5,0.6,0.7,0.8,1]))
OrientationInterpolator1298.setKeyValue(x3d.doubleToFloat([0,0,1,0,0,0,1,0,0,0,1,0,1,0,0,0.449999988079071,1,0,0,0.449999988079071,1,0,0,0.449999988079071,0,0,1,0]))

Scene33.addChild(OrientationInterpolator1298)
OrientationInterpolator1299 = x3d.OrientationInterpolator()
OrientationInterpolator1299.setDEF("r_thumb3Relax")
OrientationInterpolator1299.setKey(x3d.doubleToFloat([0,0.2,0.5,0.6,0.7,0.8,1]))
OrientationInterpolator1299.setKeyValue(x3d.doubleToFloat([0,0,1,0,0,0,1,0,0,0,1,0,0,0,1,0,1,0,0,0.449999988079071,0,0,1,0,0,0,1,0]))

Scene33.addChild(OrientationInterpolator1299)
OrientationInterpolator1300 = x3d.OrientationInterpolator()
OrientationInterpolator1300.setDEF("r_fingers2Relax")
OrientationInterpolator1300.setKey(x3d.doubleToFloat([0,0.1,0.2,0.3,0.4,0.5,0.6,0.7,0.8,0.9,1]))
OrientationInterpolator1300.setKeyValue(x3d.doubleToFloat([0,0,1,0,0,0,1,0,0,0,1,0.430000007152557,0,0,1,0.439999997615814,0,0,1,0.46000000834465,0,0,1,0.439999997615814,0,0,1,0.245000004768372,0,0,1,0.239999994635582,0,0,1,0.209999993443489,0,0,1,0.239999994635582,0,0,1,0]))

Scene33.addChild(OrientationInterpolator1300)
OrientationInterpolator1301 = x3d.OrientationInterpolator()
OrientationInterpolator1301.setDEF("r_fingers3Relax")
OrientationInterpolator1301.setKey(x3d.doubleToFloat([0,0.1,0.2,0.3,0.4,0.5,0.6,0.7,0.8,0.9,1]))
OrientationInterpolator1301.setKeyValue(x3d.doubleToFloat([0,0,1,0,0,0,1,0,0,0,1,0.370000004768372,0,0,1,0.379999995231628,0,0,1,0.389999985694885,0,0,1,0.379999995231628,0,0,1,0.270000010728836,0,0,1,0.280000001192093,0,0,1,0.270000010728836,0,0,1,0.280000001192093,0,0,1,0]))

Scene33.addChild(OrientationInterpolator1301)
OrientationInterpolator1302 = x3d.OrientationInterpolator()
OrientationInterpolator1302.setDEF("r_sternoclavicularRoll")
OrientationInterpolator1302.setKey(x3d.doubleToFloat([0,0.2,0.4,0.5,0.7,0.8,1]))
OrientationInterpolator1302.setKeyValue(x3d.doubleToFloat([0,0,1,0,0,0,-1,0.100000001490116,0,0,-1,0.219999998807907,0,0.5,-1,0.270000010728836,0,0,-1,0.100000001490116,0,0,1,0,0,0,1,0]))

Scene33.addChild(OrientationInterpolator1302)
OrientationInterpolator1303 = x3d.OrientationInterpolator()
OrientationInterpolator1303.setDEF("r_acromioclavicularRoll")
OrientationInterpolator1303.setKey(x3d.doubleToFloat([0,0.2,0.4,0.6,0.8,1]))
OrientationInterpolator1303.setKeyValue(x3d.doubleToFloat([0,0,1,0,0,0,1,0,0,0,1,-0.0500000007450581,0,0,1,0,0,0,1,0,0,0,1,0]))

Scene33.addChild(OrientationInterpolator1303)
OrientationInterpolator1304 = x3d.OrientationInterpolator()
OrientationInterpolator1304.setDEF("r_shoulderRoll")
OrientationInterpolator1304.setKey(x3d.doubleToFloat([0,0.2,0.4,0.5,0.85,1]))
OrientationInterpolator1304.setKeyValue(x3d.doubleToFloat([1,0,0,0,0,0,-1,1.6599999666214,-0.25,0,-1,1.75999999046326,0,0,-1,1.25600004196167,0,0,-1,0.0500000007450581,1,0,0,0]))

Scene33.addChild(OrientationInterpolator1304)
OrientationInterpolator1305 = x3d.OrientationInterpolator()
OrientationInterpolator1305.setDEF("r_ForeArmPitch")
OrientationInterpolator1305.setKey(x3d.doubleToFloat([0,0.15,0.3,0.5,0.7,0.9,1]))
OrientationInterpolator1305.setKeyValue(x3d.doubleToFloat([0,0,1,0,-1,0,0,0.550000011920929,-1,-0.25,0,2.54999995231628,-1,-0.25,0,2.54999995231628,-1,-0.25,0,2.54999995231628,0,0,1,0,0,0,1,0]))

Scene33.addChild(OrientationInterpolator1305)
OrientationInterpolator1306 = x3d.OrientationInterpolator()
OrientationInterpolator1306.setDEF("r_wristRoll")
OrientationInterpolator1306.setKey(x3d.doubleToFloat([0,0.2,0.4,0.6,0.65,0.75,0.85,1]))
OrientationInterpolator1306.setKeyValue(x3d.doubleToFloat([0,0,1,0,0,0,1,0,0,1,0,-0.550000011920929,0,0,1,0,0,1,0,1.54999995231628,0,0,-1,1.54999995231628,0,0,1,0,0,0,1,0]))

Scene33.addChild(OrientationInterpolator1306)
OrientationInterpolator1307 = x3d.OrientationInterpolator()
OrientationInterpolator1307.setDEF("r_handPitch")
OrientationInterpolator1307.setKey(x3d.doubleToFloat([0,0.2,0.4,0.6,0.8,1]))
OrientationInterpolator1307.setKeyValue(x3d.doubleToFloat([0,0,1,0,0,0,0.00999999977648258,0.25,0,0,-0.00999999977648258,0.0299999993294477,0,0,0.00999999977648258,0.0500000007450581,0,0,0.00999999977648258,0.00999999977648258,0,0,1,0]))

Scene33.addChild(OrientationInterpolator1307)
OrientationInterpolator1308 = x3d.OrientationInterpolator()
OrientationInterpolator1308.setDEF("r_thumb1Pitch")
OrientationInterpolator1308.setKey(x3d.doubleToFloat([0,0.2,0.4,0.6,0.8,1]))
OrientationInterpolator1308.setKeyValue(x3d.doubleToFloat([1,0,0,0,1,0,0,0.5,1,0,0,1,1,0,0,0.400000005960465,1,0,0,0.200000002980232,1,0,0,0]))

Scene33.addChild(OrientationInterpolator1308)
OrientationInterpolator1309 = x3d.OrientationInterpolator()
OrientationInterpolator1309.setDEF("r_thumb2Pitch")
OrientationInterpolator1309.setKey(x3d.doubleToFloat([0,0.2,0.4,0.6,0.8,1]))
OrientationInterpolator1309.setKeyValue(x3d.doubleToFloat([0,0,1,0,1,1,0,0.300000011920929,1,1,0,0.300000011920929,1,1,0,0.600000023841858,1,1,0,0.300000011920929,0,1,1,0]))

Scene33.addChild(OrientationInterpolator1309)
OrientationInterpolator1310 = x3d.OrientationInterpolator()
OrientationInterpolator1310.setDEF("l_shoulderRoll")
OrientationInterpolator1310.setKey(x3d.doubleToFloat([0,0.2,0.4,0.5,0.85,1]))
OrientationInterpolator1310.setKeyValue(x3d.doubleToFloat([0.25,0,1,1.75999999046326,0,0,1,1.6599999666214,0.25,0,1,1.75999999046326,0,0,1,1.25600004196167,0,0,1,0.0500000007450581,0.25,0,1,1.75999999046326]))

Scene33.addChild(OrientationInterpolator1310)
Group1311 = x3d.Group()
PositionInterpolator1312 = x3d.PositionInterpolator()
PositionInterpolator1312.setDEF("HUMANOIDROOT_POSITION_ANIMATOR")
PositionInterpolator1312.setKey(x3d.doubleToFloat([0,0.04167,0.125,0.1667,0.2083,0.25,0.2917,0.375,0.4583,0.5,0.5417,0.5833,0.625,0.7083,0.75,0.7917,0.875,0.9167,1]))
PositionInterpolator1312.setKeyValue(x3d.doubleToFloat([0,-0.00928,0,0,-0.003858,0,0,-0.008847,0,0,-0.01486,0,0,-0.02641,0,0,-0.03934,0,0,-0.0502,0,0,-0.07469,0,0,-0.02732,0,0,-0.01608,0,0,-0.01129,0,0,-0.005819,0,0,-0.002004,0,0,-0.002579,0,0,-0.0143,0,0,-0.03799,0,0,-0.05648,0,0,-0.045,0,0,-0.00928,0]))

Group1311.addChild(PositionInterpolator1312)
OrientationInterpolator1313 = x3d.OrientationInterpolator()
OrientationInterpolator1313.setDEF("HUMANOIDROOT_ANIMATOR")
OrientationInterpolator1313.setKey(x3d.doubleToFloat([0,1]))
OrientationInterpolator1313.setKeyValue(x3d.doubleToFloat([0,1,0,0,0,1,0,0]))

Group1311.addChild(OrientationInterpolator1313)
OrientationInterpolator1314 = x3d.OrientationInterpolator()
OrientationInterpolator1314.setDEF("L_HIP_ANIMATOR")
OrientationInterpolator1314.setKey(x3d.doubleToFloat([0,0.25,0.375,0.5,0.6667,0.7917,0.9167,1]))
OrientationInterpolator1314.setKeyValue(x3d.doubleToFloat([-0.873000025749207,0.0609400011599064,0.483999997377396,0.286500006914139,0.996299982070923,-0.0105699999257922,0.0848100036382675,0.248799994587898,0.996500015258789,0.0159099996089935,-0.0822200030088425,0.383599996566772,-0.701799988746643,-0.0322300009429455,-0.711700022220612,0.12890000641346,-1,0,0,0.551800012588501,-0.996399998664856,0.0223099999129772,0.0816999971866608,0.535099983215332,-0.98089998960495,0.0491200014948845,0.18809999525547,0.520399987697601,-0.873000025749207,0.0609400011599064,0.483999997377396,0.286500006914139]))

Group1311.addChild(OrientationInterpolator1314)
OrientationInterpolator1315 = x3d.OrientationInterpolator()
OrientationInterpolator1315.setDEF("L_KNEE_ANIMATOR")
OrientationInterpolator1315.setKey(x3d.doubleToFloat([0,0.2083,0.375,0.5,0.6667,0.7917,0.9167,1]))
OrientationInterpolator1315.setKeyValue(x3d.doubleToFloat([1,0,0,0.32260000705719,1,0,0,0.155599996447563,1,0,0,0.086779996752739,1,0,0,0.875100016593933,1,0,0,1.13100004196167,1,0,0,0.0996100008487701,1,0,0,0.394199997186661,1,0,0,0.32260000705719]))

Group1311.addChild(OrientationInterpolator1315)
OrientationInterpolator1316 = x3d.OrientationInterpolator()
OrientationInterpolator1316.setDEF("L_ANKLE_ANIMATOR")
OrientationInterpolator1316.setKey(x3d.doubleToFloat([0,0.125,0.2083,0.375,0.6667,0.9167,1]))
OrientationInterpolator1316.setKeyValue(x3d.doubleToFloat([-1,0,0,0.067100003361702,-1,0,0,0.215200006961823,-1,0,0,0.318399995565414,-1,0,0,0.471700012683868,-1,0,0,0.291200011968613,1,0,0,0.222200006246567,-1,0,0,0.067100003361702]))

Group1311.addChild(OrientationInterpolator1316)
OrientationInterpolator1317 = x3d.OrientationInterpolator()
OrientationInterpolator1317.setDEF("R_ANKLE_ANIMATOR")
OrientationInterpolator1317.setKey(x3d.doubleToFloat([0,0.125,0.2083,0.375,0.4583,0.5,0.6667,0.75,0.78,0.9167,1]))
OrientationInterpolator1317.setKeyValue(x3d.doubleToFloat([0,0,1,0,-1,0,0,0.353300005197525,-1,0,0,0.107199996709824,1,0,0,0.400000005960465,1,0,0,0.127000004053116,-1,0,0,0.0179999992251396,-1,0,0,0.0579999983310699,-1,0,0,0.239999994635582,-1,0,0,0.349999994039536,-1,0,0,0.330000013113022,0,0,1,0]))

Group1311.addChild(OrientationInterpolator1317)
OrientationInterpolator1318 = x3d.OrientationInterpolator()
OrientationInterpolator1318.setDEF("L_subtalar_ANIMATOR")
OrientationInterpolator1318.setKey(x3d.doubleToFloat([0,0.3,1]))
OrientationInterpolator1318.setKeyValue(x3d.doubleToFloat([0,0,1,0,0,0,1,0,0,0,1,0]))

Group1311.addChild(OrientationInterpolator1318)
OrientationInterpolator1319 = x3d.OrientationInterpolator()
OrientationInterpolator1319.setDEF("L_MIDTARSAL_ANIMATOR")
OrientationInterpolator1319.setKey(x3d.doubleToFloat([0,0.5,1]))
OrientationInterpolator1319.setKeyValue(x3d.doubleToFloat([1,0,0,0,1,0,0,-0.200000002980232,1,0,0,0]))

Group1311.addChild(OrientationInterpolator1319)
OrientationInterpolator1320 = x3d.OrientationInterpolator()
OrientationInterpolator1320.setDEF("L_metatarsal_ANIMATOR")
OrientationInterpolator1320.setKey(x3d.doubleToFloat([0,0.2,0.4,0.8,1]))
OrientationInterpolator1320.setKeyValue(x3d.doubleToFloat([-1,0,0,0.300000011920929,-1,0,0,0.150000005960464,1,0,0,0.300000011920929,0,0,1,0,-1,0,0,0.300000011920929]))

Group1311.addChild(OrientationInterpolator1320)
OrientationInterpolator1321 = x3d.OrientationInterpolator()
OrientationInterpolator1321.setDEF("R_HIP_ANIMATOR")
OrientationInterpolator1321.setKey(x3d.doubleToFloat([0,0.125,0.2083,0.2917,0.375,0.5,0.6667,0.7917,0.9167,1]))
OrientationInterpolator1321.setKeyValue(x3d.doubleToFloat([-0.583100020885468,0.0351100005209446,0.811600029468536,0.148100003600121,-0.995000004768372,0.0229599997401238,0.0967399999499321,0.468300014734268,-1,0.0019000000320375,0.00796000007539988,0.473199993371964,-0.998000025749207,-0.0157999992370605,-0.0610200017690659,0.50789999961853,-0.991100013256073,-0.0354099981486797,-0.128600001335144,0.541899979114533,-0.913100004196167,-0.0624300017952919,-0.402999997138977,0.33610001206398,-0.430599987506866,-0.0796200037002564,-0.898999989032745,0.0703800022602081,1,0,0,0.257099986076355,0.989099979400635,-0.0280499998480082,0.144400000572205,0.387899994850159,-0.583100020885468,0.0351100005209446,0.811600029468536,0.148100003600121]))

Group1311.addChild(OrientationInterpolator1321)
OrientationInterpolator1322 = x3d.OrientationInterpolator()
OrientationInterpolator1322.setDEF("R_KNEE_ANIMATOR")
OrientationInterpolator1322.setKey(x3d.doubleToFloat([0,0.125,0.2083,0.2917,0.375,0.5,0.6667,0.7917,0.9167,1]))
OrientationInterpolator1322.setKeyValue(x3d.doubleToFloat([1,0,0,0.857299983501434,1,0,0,0.892599999904633,1,0,0,0.535099983215332,1,0,0,0.175600007176399,1,0,0,0.119400002062321,1,0,0,0.315299987792969,1,0,0,0.0935399979352951,1,0,0,0.0855799987912178,1,0,0,0.247500002384186,1,0,0,0.857299983501434]))

Group1311.addChild(OrientationInterpolator1322)
OrientationInterpolator1323 = x3d.OrientationInterpolator()
OrientationInterpolator1323.setDEF("R_subtalar_ANIMATOR")
OrientationInterpolator1323.setKey(x3d.doubleToFloat([0,0.225,0.25,0.35,0.45,0.85,0.91]))
OrientationInterpolator1323.setKeyValue(x3d.doubleToFloat([-1,0,0,0.1,0,0,1,0,0,0,1,0,1,0,0,0.1,0,0,1,0,1,0,0,0.1,1,0,0,0.25]))

Group1311.addChild(OrientationInterpolator1323)
OrientationInterpolator1324 = x3d.OrientationInterpolator()
OrientationInterpolator1324.setDEF("R_MIDTARSAL_ANIMATOR")
OrientationInterpolator1324.setKey(x3d.doubleToFloat([0,0.22,1]))
OrientationInterpolator1324.setKeyValue(x3d.doubleToFloat([1,0,0,-0.200000002980232,0,0,1,0,1,0,0,-0.200000002980232]))

Group1311.addChild(OrientationInterpolator1324)
OrientationInterpolator1325 = x3d.OrientationInterpolator()
OrientationInterpolator1325.setDEF("R_metatarsal_ANIMATOR")
OrientationInterpolator1325.setKey(x3d.doubleToFloat([0,0.2,0.4,0.8,1]))
OrientationInterpolator1325.setKeyValue(x3d.doubleToFloat([-1,0,0,0.150000005960464,0,0,1,0,1,0,0,0.300000011920929,-1,0,0,0.300000011920929,-1,0,0,0.150000005960464]))

Group1311.addChild(OrientationInterpolator1325)
OrientationInterpolator1326 = x3d.OrientationInterpolator()
OrientationInterpolator1326.setDEF("VL5_ANIMATOR")
OrientationInterpolator1326.setKey(x3d.doubleToFloat([0,0.2083,0.375,0.75,0.8333,1]))
OrientationInterpolator1326.setKeyValue(x3d.doubleToFloat([0,1,0,0.0825999975204468,-0.0197199992835522,-0.597400009632111,0.801699995994568,0.0823099985718727,0.0092960000038147,-0.964800000190735,0.262699991464615,0.17339999973774,-0.0123800002038479,0.954900026321411,-0.29679998755455,0.0873199999332428,-0.00812499970197678,0.969099998474121,-0.246299996972084,0.158000007271767,0,1,0,0.0825999975204468]))

Group1311.addChild(OrientationInterpolator1326)
OrientationInterpolator1327 = x3d.OrientationInterpolator()
OrientationInterpolator1327.setDEF("SKULLBASE_ANIMATOR")
OrientationInterpolator1327.setKey(x3d.doubleToFloat([0,0.375,0.4167,0.5,0.5833,0.6667,0.75,0.8333,0.9167,1]))
OrientationInterpolator1327.setKeyValue(x3d.doubleToFloat([0,-1,0,0.0864000022411346,0,1,0,0.182500004768372,0,1,0,0.150499999523163,0,1,0,0.10530000180006,0,1,0,0.0439100004732609,0,-1,0,0.031190000474453,0,-1,0,0.0793600007891655,0,-1,0,0.16159999370575,0,-1,0,0.155000001192093,0,-1,0,0.0864199995994568]))

Group1311.addChild(OrientationInterpolator1327)
OrientationInterpolator1328 = x3d.OrientationInterpolator()
OrientationInterpolator1328.setDEF("L_SHOULDER_ANIMATOR")
OrientationInterpolator1328.setKey(x3d.doubleToFloat([0,0.375,0.9167,1]))
OrientationInterpolator1328.setKeyValue(x3d.doubleToFloat([1,0,0.400000005960465,0.119999997317791,-1,0,0.400000005960465,0.186000004410744,1,0,0.100000001490116,0.335999995470047,1,0,0.400000005960465,0.119999997317791]))

Group1311.addChild(OrientationInterpolator1328)
OrientationInterpolator1329 = x3d.OrientationInterpolator()
OrientationInterpolator1329.setDEF("L_ELBOW_ANIMATOR")
OrientationInterpolator1329.setKey(x3d.doubleToFloat([0,0.375,0.9167,1]))
OrientationInterpolator1329.setKeyValue(x3d.doubleToFloat([-1,0,0,0.0659999996423721,-1,0,0,0.488000005483627,-1,0,0,0.0176999997347593,-1,0,0,0.065987803041935]))

Group1311.addChild(OrientationInterpolator1329)
OrientationInterpolator1330 = x3d.OrientationInterpolator()
OrientationInterpolator1330.setDEF("L_WRIST_ANIMATOR")
OrientationInterpolator1330.setKey(x3d.doubleToFloat([0,0.375,0.9167,1]))
OrientationInterpolator1330.setKeyValue(x3d.doubleToFloat([0,-1,0,0.460999995470047,-0.330199986696243,-0.927500009536743,0.175500005483627,0.538800001144409,0.0327773988246918,-0.99931401014328,-0.0172185003757477,0.492033004760742,0,-1,0,0.46110001206398]))

Group1311.addChild(OrientationInterpolator1330)
OrientationInterpolator1331 = x3d.OrientationInterpolator()
OrientationInterpolator1331.setDEF("R_SHOULDER_ANIMATOR")
OrientationInterpolator1331.setKey(x3d.doubleToFloat([0,0.375,0.9167,1]))
OrientationInterpolator1331.setKeyValue(x3d.doubleToFloat([-1,0,-1,0.0920000001788139,1,0,-0.200000002980232,0.319700002670288,-1,0,-0.5,0.156399995088577,-1,0,-1,0.0920000001788139]))

Group1311.addChild(OrientationInterpolator1331)
OrientationInterpolator1332 = x3d.OrientationInterpolator()
OrientationInterpolator1332.setDEF("R_ELBOW_ANIMATOR")
OrientationInterpolator1332.setKey(x3d.doubleToFloat([0,0.375,0.9167,1]))
OrientationInterpolator1332.setKeyValue(x3d.doubleToFloat([-1,0,0,0.411500006914139,-1,0,0,0.0925000011920929,-1,0,0,0.572567999362946,-1,0,0,0.411507993936539]))

Group1311.addChild(OrientationInterpolator1332)
OrientationInterpolator1333 = x3d.OrientationInterpolator()
OrientationInterpolator1333.setDEF("R_WRIST_ANIMATOR")
OrientationInterpolator1333.setKey(x3d.doubleToFloat([0,0.375,0.9167,1]))
OrientationInterpolator1333.setKeyValue(x3d.doubleToFloat([-0.812900006771088,0.475899994373322,-0.335700005292892,0.13459999859333,0.153300002217293,-0.987800002098084,0.0258200000971556,0.390199989080429,-0.570100009441376,0.760399997234345,-0.310999989509583,0.36599999666214,-0.812900006771088,0.475899994373322,-0.335700005292892,0.13459999859333]))

Group1311.addChild(OrientationInterpolator1333)

Scene33.addChild(Group1311)
ROUTE1334 = x3d.ROUTE()
ROUTE1334.setFromNode("Time2")
ROUTE1334.setFromField("fraction_changed")
ROUTE1334.setToNode("vc6Yaw")
ROUTE1334.setToField("set_fraction")

Scene33.addChild(ROUTE1334)
ROUTE1335 = x3d.ROUTE()
ROUTE1335.setFromNode("vc6Yaw")
ROUTE1335.setFromField("value_changed")
ROUTE1335.setToNode("Joe_vc6")
ROUTE1335.setToField("set_rotation")

Scene33.addChild(ROUTE1335)
ROUTE1336 = x3d.ROUTE()
ROUTE1336.setFromNode("Time3")
ROUTE1336.setFromField("fraction_changed")
ROUTE1336.setToNode("EyeballsRotation")
ROUTE1336.setToField("set_fraction")

Scene33.addChild(ROUTE1336)
ROUTE1337 = x3d.ROUTE()
ROUTE1337.setFromNode("EyeballsRotation")
ROUTE1337.setFromField("value_changed")
ROUTE1337.setToNode("Joe_r_eyeball_joint")
ROUTE1337.setToField("set_rotation")

Scene33.addChild(ROUTE1337)
ROUTE1338 = x3d.ROUTE()
ROUTE1338.setFromNode("EyeballsRotation")
ROUTE1338.setFromField("value_changed")
ROUTE1338.setToNode("Joe_l_eyeball_joint")
ROUTE1338.setToField("set_rotation")

Scene33.addChild(ROUTE1338)
ROUTE1339 = x3d.ROUTE()
ROUTE1339.setFromNode("r_sternoclavicularRelax")
ROUTE1339.setFromField("value_changed")
ROUTE1339.setToNode("Joe_r_sternoclavicular")
ROUTE1339.setToField("set_rotation")

Scene33.addChild(ROUTE1339)
ROUTE1340 = x3d.ROUTE()
ROUTE1340.setFromNode("r_acromioclavicularRelax")
ROUTE1340.setFromField("value_changed")
ROUTE1340.setToNode("Joe_r_acromioclavicular")
ROUTE1340.setToField("set_rotation")

Scene33.addChild(ROUTE1340)
ROUTE1341 = x3d.ROUTE()
ROUTE1341.setFromNode("r_shoulderRelax")
ROUTE1341.setFromField("value_changed")
ROUTE1341.setToNode("Joe_r_shoulder")
ROUTE1341.setToField("set_rotation")

Scene33.addChild(ROUTE1341)
ROUTE1342 = x3d.ROUTE()
ROUTE1342.setFromNode("r_elbowRelax")
ROUTE1342.setFromField("value_changed")
ROUTE1342.setToNode("Joe_r_elbow")
ROUTE1342.setToField("set_rotation")

Scene33.addChild(ROUTE1342)
ROUTE1343 = x3d.ROUTE()
ROUTE1343.setFromNode("r_wristRelax")
ROUTE1343.setFromField("value_changed")
ROUTE1343.setToNode("Joe_r_wrist")
ROUTE1343.setToField("set_rotation")

Scene33.addChild(ROUTE1343)
ROUTE1344 = x3d.ROUTE()
ROUTE1344.setFromNode("r_thumb1Relax")
ROUTE1344.setFromField("value_changed")
ROUTE1344.setToNode("Joe_r_thumb1")
ROUTE1344.setToField("set_rotation")

Scene33.addChild(ROUTE1344)
ROUTE1345 = x3d.ROUTE()
ROUTE1345.setFromNode("r_thumb2Relax")
ROUTE1345.setFromField("value_changed")
ROUTE1345.setToNode("Joe_r_thumb2")
ROUTE1345.setToField("set_rotation")

Scene33.addChild(ROUTE1345)
ROUTE1346 = x3d.ROUTE()
ROUTE1346.setFromNode("r_thumb3Relax")
ROUTE1346.setFromField("value_changed")
ROUTE1346.setToNode("Joe_r_thumb3")
ROUTE1346.setToField("set_rotation")

Scene33.addChild(ROUTE1346)
ROUTE1347 = x3d.ROUTE()
ROUTE1347.setFromNode("r_index0Relax")
ROUTE1347.setFromField("value_changed")
ROUTE1347.setToNode("Joe_r_index0")
ROUTE1347.setToField("set_rotation")

Scene33.addChild(ROUTE1347)
ROUTE1348 = x3d.ROUTE()
ROUTE1348.setFromNode("r_index1Relax")
ROUTE1348.setFromField("value_changed")
ROUTE1348.setToNode("Joe_r_index1")
ROUTE1348.setToField("set_rotation")

Scene33.addChild(ROUTE1348)
ROUTE1349 = x3d.ROUTE()
ROUTE1349.setFromNode("r_fingers2Relax")
ROUTE1349.setFromField("value_changed")
ROUTE1349.setToNode("Joe_r_index2")
ROUTE1349.setToField("set_rotation")

Scene33.addChild(ROUTE1349)
ROUTE1350 = x3d.ROUTE()
ROUTE1350.setFromNode("r_fingers3Relax")
ROUTE1350.setFromField("value_changed")
ROUTE1350.setToNode("Joe_r_index3")
ROUTE1350.setToField("set_rotation")

Scene33.addChild(ROUTE1350)
ROUTE1351 = x3d.ROUTE()
ROUTE1351.setFromNode("r_middle0Relax")
ROUTE1351.setFromField("value_changed")
ROUTE1351.setToNode("Joe_r_middle0")
ROUTE1351.setToField("set_rotation")

Scene33.addChild(ROUTE1351)
ROUTE1352 = x3d.ROUTE()
ROUTE1352.setFromNode("r_middle1Relax")
ROUTE1352.setFromField("value_changed")
ROUTE1352.setToNode("Joe_r_middle1")
ROUTE1352.setToField("set_rotation")

Scene33.addChild(ROUTE1352)
ROUTE1353 = x3d.ROUTE()
ROUTE1353.setFromNode("r_fingers2Relax")
ROUTE1353.setFromField("value_changed")
ROUTE1353.setToNode("Joe_r_middle2")
ROUTE1353.setToField("set_rotation")

Scene33.addChild(ROUTE1353)
ROUTE1354 = x3d.ROUTE()
ROUTE1354.setFromNode("r_fingers3Relax")
ROUTE1354.setFromField("value_changed")
ROUTE1354.setToNode("Joe_r_middle3")
ROUTE1354.setToField("set_rotation")

Scene33.addChild(ROUTE1354)
ROUTE1355 = x3d.ROUTE()
ROUTE1355.setFromNode("r_ring0Relax")
ROUTE1355.setFromField("value_changed")
ROUTE1355.setToNode("Joe_r_ring0")
ROUTE1355.setToField("set_rotation")

Scene33.addChild(ROUTE1355)
ROUTE1356 = x3d.ROUTE()
ROUTE1356.setFromNode("r_ring1Relax")
ROUTE1356.setFromField("value_changed")
ROUTE1356.setToNode("Joe_r_ring1")
ROUTE1356.setToField("set_rotation")

Scene33.addChild(ROUTE1356)
ROUTE1357 = x3d.ROUTE()
ROUTE1357.setFromNode("r_fingers2Relax")
ROUTE1357.setFromField("value_changed")
ROUTE1357.setToNode("Joe_r_ring2")
ROUTE1357.setToField("set_rotation")

Scene33.addChild(ROUTE1357)
ROUTE1358 = x3d.ROUTE()
ROUTE1358.setFromNode("r_fingers3Relax")
ROUTE1358.setFromField("value_changed")
ROUTE1358.setToNode("Joe_r_ring3")
ROUTE1358.setToField("set_rotation")

Scene33.addChild(ROUTE1358)
ROUTE1359 = x3d.ROUTE()
ROUTE1359.setFromNode("r_pinky0Relax")
ROUTE1359.setFromField("value_changed")
ROUTE1359.setToNode("Joe_r_pinky0")
ROUTE1359.setToField("set_rotation")

Scene33.addChild(ROUTE1359)
ROUTE1360 = x3d.ROUTE()
ROUTE1360.setFromNode("r_pinky1Relax")
ROUTE1360.setFromField("value_changed")
ROUTE1360.setToNode("Joe_r_pinky1")
ROUTE1360.setToField("set_rotation")

Scene33.addChild(ROUTE1360)
ROUTE1361 = x3d.ROUTE()
ROUTE1361.setFromNode("r_fingers2Relax")
ROUTE1361.setFromField("value_changed")
ROUTE1361.setToNode("Joe_r_pinky2")
ROUTE1361.setToField("set_rotation")

Scene33.addChild(ROUTE1361)
ROUTE1362 = x3d.ROUTE()
ROUTE1362.setFromNode("r_fingers3Relax")
ROUTE1362.setFromField("value_changed")
ROUTE1362.setToNode("Joe_r_pinky3")
ROUTE1362.setToField("set_rotation")

Scene33.addChild(ROUTE1362)
ROUTE1363 = x3d.ROUTE()
ROUTE1363.setFromNode("Time2")
ROUTE1363.setFromField("fraction_changed")
ROUTE1363.setToNode("r_sternoclavicularRoll")
ROUTE1363.setToField("set_fraction")

Scene33.addChild(ROUTE1363)
ROUTE1364 = x3d.ROUTE()
ROUTE1364.setFromNode("Time2")
ROUTE1364.setFromField("fraction_changed")
ROUTE1364.setToNode("r_acromioclavicularRoll")
ROUTE1364.setToField("set_fraction")

Scene33.addChild(ROUTE1364)
ROUTE1365 = x3d.ROUTE()
ROUTE1365.setFromNode("Time2")
ROUTE1365.setFromField("fraction_changed")
ROUTE1365.setToNode("r_shoulderRoll")
ROUTE1365.setToField("set_fraction")

Scene33.addChild(ROUTE1365)
ROUTE1366 = x3d.ROUTE()
ROUTE1366.setFromNode("Time2")
ROUTE1366.setFromField("fraction_changed")
ROUTE1366.setToNode("r_ForeArmPitch")
ROUTE1366.setToField("set_fraction")

Scene33.addChild(ROUTE1366)
ROUTE1367 = x3d.ROUTE()
ROUTE1367.setFromNode("Time2")
ROUTE1367.setFromField("fraction_changed")
ROUTE1367.setToNode("r_wristRoll")
ROUTE1367.setToField("set_fraction")

Scene33.addChild(ROUTE1367)
ROUTE1368 = x3d.ROUTE()
ROUTE1368.setFromNode("Time2")
ROUTE1368.setFromField("fraction_changed")
ROUTE1368.setToNode("r_handPitch")
ROUTE1368.setToField("set_fraction")

Scene33.addChild(ROUTE1368)
ROUTE1369 = x3d.ROUTE()
ROUTE1369.setFromNode("Time2")
ROUTE1369.setFromField("fraction_changed")
ROUTE1369.setToNode("r_thumb1Pitch")
ROUTE1369.setToField("set_fraction")

Scene33.addChild(ROUTE1369)
ROUTE1370 = x3d.ROUTE()
ROUTE1370.setFromNode("Time2")
ROUTE1370.setFromField("fraction_changed")
ROUTE1370.setToNode("r_thumb2Pitch")
ROUTE1370.setToField("set_fraction")

Scene33.addChild(ROUTE1370)
ROUTE1371 = x3d.ROUTE()
ROUTE1371.setFromNode("r_sternoclavicularRoll")
ROUTE1371.setFromField("value_changed")
ROUTE1371.setToNode("Joe_r_sternoclavicular")
ROUTE1371.setToField("set_rotation")

Scene33.addChild(ROUTE1371)
ROUTE1372 = x3d.ROUTE()
ROUTE1372.setFromNode("r_acromioclavicularRoll")
ROUTE1372.setFromField("value_changed")
ROUTE1372.setToNode("Joe_r_acromioclavicular")
ROUTE1372.setToField("set_rotation")

Scene33.addChild(ROUTE1372)
ROUTE1373 = x3d.ROUTE()
ROUTE1373.setFromNode("r_shoulderRoll")
ROUTE1373.setFromField("value_changed")
ROUTE1373.setToNode("Joe_r_shoulder")
ROUTE1373.setToField("set_rotation")

Scene33.addChild(ROUTE1373)
ROUTE1374 = x3d.ROUTE()
ROUTE1374.setFromNode("r_ForeArmPitch")
ROUTE1374.setFromField("value_changed")
ROUTE1374.setToNode("Joe_r_elbow")
ROUTE1374.setToField("set_rotation")

Scene33.addChild(ROUTE1374)
ROUTE1375 = x3d.ROUTE()
ROUTE1375.setFromNode("r_wristRoll")
ROUTE1375.setFromField("value_changed")
ROUTE1375.setToNode("Joe_r_wrist")
ROUTE1375.setToField("set_rotation")

Scene33.addChild(ROUTE1375)
ROUTE1376 = x3d.ROUTE()
ROUTE1376.setFromNode("r_handPitch")
ROUTE1376.setFromField("value_changed")
ROUTE1376.setToNode("Joe_r_index0")
ROUTE1376.setToField("set_rotation")

Scene33.addChild(ROUTE1376)
ROUTE1377 = x3d.ROUTE()
ROUTE1377.setFromNode("r_handPitch")
ROUTE1377.setFromField("value_changed")
ROUTE1377.setToNode("Joe_r_index1")
ROUTE1377.setToField("set_rotation")

Scene33.addChild(ROUTE1377)
ROUTE1378 = x3d.ROUTE()
ROUTE1378.setFromNode("r_handPitch")
ROUTE1378.setFromField("value_changed")
ROUTE1378.setToNode("Joe_r_index2")
ROUTE1378.setToField("set_rotation")

Scene33.addChild(ROUTE1378)
ROUTE1379 = x3d.ROUTE()
ROUTE1379.setFromNode("r_handPitch")
ROUTE1379.setFromField("value_changed")
ROUTE1379.setToNode("Joe_r_index3")
ROUTE1379.setToField("set_rotation")

Scene33.addChild(ROUTE1379)
ROUTE1380 = x3d.ROUTE()
ROUTE1380.setFromNode("r_handPitch")
ROUTE1380.setFromField("value_changed")
ROUTE1380.setToNode("Joe_r_middle0")
ROUTE1380.setToField("set_rotation")

Scene33.addChild(ROUTE1380)
ROUTE1381 = x3d.ROUTE()
ROUTE1381.setFromNode("r_handPitch")
ROUTE1381.setFromField("value_changed")
ROUTE1381.setToNode("Joe_r_middle1")
ROUTE1381.setToField("set_rotation")

Scene33.addChild(ROUTE1381)
ROUTE1382 = x3d.ROUTE()
ROUTE1382.setFromNode("r_handPitch")
ROUTE1382.setFromField("value_changed")
ROUTE1382.setToNode("Joe_r_middle2")
ROUTE1382.setToField("set_rotation")

Scene33.addChild(ROUTE1382)
ROUTE1383 = x3d.ROUTE()
ROUTE1383.setFromNode("r_handPitch")
ROUTE1383.setFromField("value_changed")
ROUTE1383.setToNode("Joe_r_middle3")
ROUTE1383.setToField("set_rotation")

Scene33.addChild(ROUTE1383)
ROUTE1384 = x3d.ROUTE()
ROUTE1384.setFromNode("r_handPitch")
ROUTE1384.setFromField("value_changed")
ROUTE1384.setToNode("Joe_r_ring0")
ROUTE1384.setToField("set_rotation")

Scene33.addChild(ROUTE1384)
ROUTE1385 = x3d.ROUTE()
ROUTE1385.setFromNode("r_handPitch")
ROUTE1385.setFromField("value_changed")
ROUTE1385.setToNode("Joe_r_ring1")
ROUTE1385.setToField("set_rotation")

Scene33.addChild(ROUTE1385)
ROUTE1386 = x3d.ROUTE()
ROUTE1386.setFromNode("r_handPitch")
ROUTE1386.setFromField("value_changed")
ROUTE1386.setToNode("Joe_r_ring2")
ROUTE1386.setToField("set_rotation")

Scene33.addChild(ROUTE1386)
ROUTE1387 = x3d.ROUTE()
ROUTE1387.setFromNode("r_handPitch")
ROUTE1387.setFromField("value_changed")
ROUTE1387.setToNode("Joe_r_ring3")
ROUTE1387.setToField("set_rotation")

Scene33.addChild(ROUTE1387)
ROUTE1388 = x3d.ROUTE()
ROUTE1388.setFromNode("r_handPitch")
ROUTE1388.setFromField("value_changed")
ROUTE1388.setToNode("Joe_r_pinky0")
ROUTE1388.setToField("set_rotation")

Scene33.addChild(ROUTE1388)
ROUTE1389 = x3d.ROUTE()
ROUTE1389.setFromNode("r_handPitch")
ROUTE1389.setFromField("value_changed")
ROUTE1389.setToNode("Joe_r_pinky1")
ROUTE1389.setToField("set_rotation")

Scene33.addChild(ROUTE1389)
ROUTE1390 = x3d.ROUTE()
ROUTE1390.setFromNode("r_handPitch")
ROUTE1390.setFromField("value_changed")
ROUTE1390.setToNode("Joe_r_pinky2")
ROUTE1390.setToField("set_rotation")

Scene33.addChild(ROUTE1390)
ROUTE1391 = x3d.ROUTE()
ROUTE1391.setFromNode("r_handPitch")
ROUTE1391.setFromField("value_changed")
ROUTE1391.setToNode("Joe_r_pinky3")
ROUTE1391.setToField("set_rotation")

Scene33.addChild(ROUTE1391)
ROUTE1392 = x3d.ROUTE()
ROUTE1392.setFromNode("r_thumb1Pitch")
ROUTE1392.setFromField("value_changed")
ROUTE1392.setToNode("Joe_r_thumb1")
ROUTE1392.setToField("set_rotation")

Scene33.addChild(ROUTE1392)
ROUTE1393 = x3d.ROUTE()
ROUTE1393.setFromNode("r_thumb2Pitch")
ROUTE1393.setFromField("value_changed")
ROUTE1393.setToNode("Joe_r_thumb2")
ROUTE1393.setToField("set_rotation")

Scene33.addChild(ROUTE1393)
ROUTE1394 = x3d.ROUTE()
ROUTE1394.setFromNode("r_thumb2Pitch")
ROUTE1394.setFromField("value_changed")
ROUTE1394.setToNode("Joe_r_thumb3")
ROUTE1394.setToField("set_rotation")

Scene33.addChild(ROUTE1394)
ROUTE1395 = x3d.ROUTE()
ROUTE1395.setFromNode("l_shoulderRoll")
ROUTE1395.setFromField("value_changed")
ROUTE1395.setToNode("Joe_l_shoulder")
ROUTE1395.setToField("set_rotation")

Scene33.addChild(ROUTE1395)
ROUTE1396 = x3d.ROUTE()
ROUTE1396.setFromNode("Time1")
ROUTE1396.setFromField("fraction_changed")
ROUTE1396.setToNode("HUMANOIDROOT_POSITION_ANIMATOR")
ROUTE1396.setToField("set_fraction")

Scene33.addChild(ROUTE1396)
ROUTE1397 = x3d.ROUTE()
ROUTE1397.setFromNode("Time1")
ROUTE1397.setFromField("fraction_changed")
ROUTE1397.setToNode("HUMANOIDROOT_ANIMATOR")
ROUTE1397.setToField("set_fraction")

Scene33.addChild(ROUTE1397)
ROUTE1398 = x3d.ROUTE()
ROUTE1398.setFromNode("Time1")
ROUTE1398.setFromField("fraction_changed")
ROUTE1398.setToNode("L_HIP_ANIMATOR")
ROUTE1398.setToField("set_fraction")

Scene33.addChild(ROUTE1398)
ROUTE1399 = x3d.ROUTE()
ROUTE1399.setFromNode("Time1")
ROUTE1399.setFromField("fraction_changed")
ROUTE1399.setToNode("L_KNEE_ANIMATOR")
ROUTE1399.setToField("set_fraction")

Scene33.addChild(ROUTE1399)
ROUTE1400 = x3d.ROUTE()
ROUTE1400.setFromNode("Time1")
ROUTE1400.setFromField("fraction_changed")
ROUTE1400.setToNode("L_ANKLE_ANIMATOR")
ROUTE1400.setToField("set_fraction")

Scene33.addChild(ROUTE1400)
ROUTE1401 = x3d.ROUTE()
ROUTE1401.setFromNode("Time1")
ROUTE1401.setFromField("fraction_changed")
ROUTE1401.setToNode("L_subtalar_ANIMATOR")
ROUTE1401.setToField("set_fraction")

Scene33.addChild(ROUTE1401)
ROUTE1402 = x3d.ROUTE()
ROUTE1402.setFromNode("Time1")
ROUTE1402.setFromField("fraction_changed")
ROUTE1402.setToNode("L_MIDTARSAL_ANIMATOR")
ROUTE1402.setToField("set_fraction")

Scene33.addChild(ROUTE1402)
ROUTE1403 = x3d.ROUTE()
ROUTE1403.setFromNode("Time1")
ROUTE1403.setFromField("fraction_changed")
ROUTE1403.setToNode("L_metatarsal_ANIMATOR")
ROUTE1403.setToField("set_fraction")

Scene33.addChild(ROUTE1403)
ROUTE1404 = x3d.ROUTE()
ROUTE1404.setFromNode("Time1")
ROUTE1404.setFromField("fraction_changed")
ROUTE1404.setToNode("R_HIP_ANIMATOR")
ROUTE1404.setToField("set_fraction")

Scene33.addChild(ROUTE1404)
ROUTE1405 = x3d.ROUTE()
ROUTE1405.setFromNode("Time1")
ROUTE1405.setFromField("fraction_changed")
ROUTE1405.setToNode("R_KNEE_ANIMATOR")
ROUTE1405.setToField("set_fraction")

Scene33.addChild(ROUTE1405)
ROUTE1406 = x3d.ROUTE()
ROUTE1406.setFromNode("Time1")
ROUTE1406.setFromField("fraction_changed")
ROUTE1406.setToNode("R_ANKLE_ANIMATOR")
ROUTE1406.setToField("set_fraction")

Scene33.addChild(ROUTE1406)
ROUTE1407 = x3d.ROUTE()
ROUTE1407.setFromNode("Time1")
ROUTE1407.setFromField("fraction_changed")
ROUTE1407.setToNode("R_subtalar_ANIMATOR")
ROUTE1407.setToField("set_fraction")

Scene33.addChild(ROUTE1407)
ROUTE1408 = x3d.ROUTE()
ROUTE1408.setFromNode("Time1")
ROUTE1408.setFromField("fraction_changed")
ROUTE1408.setToNode("R_MIDTARSAL_ANIMATOR")
ROUTE1408.setToField("set_fraction")

Scene33.addChild(ROUTE1408)
ROUTE1409 = x3d.ROUTE()
ROUTE1409.setFromNode("Time1")
ROUTE1409.setFromField("fraction_changed")
ROUTE1409.setToNode("R_metatarsal_ANIMATOR")
ROUTE1409.setToField("set_fraction")

Scene33.addChild(ROUTE1409)
ROUTE1410 = x3d.ROUTE()
ROUTE1410.setFromNode("Time1")
ROUTE1410.setFromField("fraction_changed")
ROUTE1410.setToNode("VL5_ANIMATOR")
ROUTE1410.setToField("set_fraction")

Scene33.addChild(ROUTE1410)
ROUTE1411 = x3d.ROUTE()
ROUTE1411.setFromNode("Time1")
ROUTE1411.setFromField("fraction_changed")
ROUTE1411.setToNode("SKULLBASE_ANIMATOR")
ROUTE1411.setToField("set_fraction")

Scene33.addChild(ROUTE1411)
ROUTE1412 = x3d.ROUTE()
ROUTE1412.setFromNode("Time1")
ROUTE1412.setFromField("fraction_changed")
ROUTE1412.setToNode("L_SHOULDER_ANIMATOR")
ROUTE1412.setToField("set_fraction")

Scene33.addChild(ROUTE1412)
ROUTE1413 = x3d.ROUTE()
ROUTE1413.setFromNode("Time1")
ROUTE1413.setFromField("fraction_changed")
ROUTE1413.setToNode("L_ELBOW_ANIMATOR")
ROUTE1413.setToField("set_fraction")

Scene33.addChild(ROUTE1413)
ROUTE1414 = x3d.ROUTE()
ROUTE1414.setFromNode("Time1")
ROUTE1414.setFromField("fraction_changed")
ROUTE1414.setToNode("L_WRIST_ANIMATOR")
ROUTE1414.setToField("set_fraction")

Scene33.addChild(ROUTE1414)
ROUTE1415 = x3d.ROUTE()
ROUTE1415.setFromNode("HUMANOIDROOT_POSITION_ANIMATOR")
ROUTE1415.setFromField("value_changed")
ROUTE1415.setToNode("Joe_HumanoidRoot")
ROUTE1415.setToField("set_translation")

Scene33.addChild(ROUTE1415)
ROUTE1416 = x3d.ROUTE()
ROUTE1416.setFromNode("HUMANOIDROOT_ANIMATOR")
ROUTE1416.setFromField("value_changed")
ROUTE1416.setToNode("Joe_HumanoidRoot")
ROUTE1416.setToField("set_rotation")

Scene33.addChild(ROUTE1416)
ROUTE1417 = x3d.ROUTE()
ROUTE1417.setFromNode("L_HIP_ANIMATOR")
ROUTE1417.setFromField("value_changed")
ROUTE1417.setToNode("Joe_l_hip")
ROUTE1417.setToField("set_rotation")

Scene33.addChild(ROUTE1417)
ROUTE1418 = x3d.ROUTE()
ROUTE1418.setFromNode("L_KNEE_ANIMATOR")
ROUTE1418.setFromField("value_changed")
ROUTE1418.setToNode("Joe_l_knee")
ROUTE1418.setToField("set_rotation")

Scene33.addChild(ROUTE1418)
ROUTE1419 = x3d.ROUTE()
ROUTE1419.setFromNode("L_ANKLE_ANIMATOR")
ROUTE1419.setFromField("value_changed")
ROUTE1419.setToNode("Joe_l_ankle")
ROUTE1419.setToField("set_rotation")

Scene33.addChild(ROUTE1419)
ROUTE1420 = x3d.ROUTE()
ROUTE1420.setFromNode("L_MIDTARSAL_ANIMATOR")
ROUTE1420.setFromField("value_changed")
ROUTE1420.setToNode("Joe_l_midtarsal")
ROUTE1420.setToField("set_rotation")

Scene33.addChild(ROUTE1420)
ROUTE1421 = x3d.ROUTE()
ROUTE1421.setFromNode("L_subtalar_ANIMATOR")
ROUTE1421.setFromField("value_changed")
ROUTE1421.setToNode("Joe_l_subtalar")
ROUTE1421.setToField("set_rotation")

Scene33.addChild(ROUTE1421)
ROUTE1422 = x3d.ROUTE()
ROUTE1422.setFromNode("L_metatarsal_ANIMATOR")
ROUTE1422.setFromField("value_changed")
ROUTE1422.setToNode("Joe_l_metatarsal")
ROUTE1422.setToField("set_rotation")

Scene33.addChild(ROUTE1422)
ROUTE1423 = x3d.ROUTE()
ROUTE1423.setFromNode("R_HIP_ANIMATOR")
ROUTE1423.setFromField("value_changed")
ROUTE1423.setToNode("Joe_r_hip")
ROUTE1423.setToField("set_rotation")

Scene33.addChild(ROUTE1423)
ROUTE1424 = x3d.ROUTE()
ROUTE1424.setFromNode("R_KNEE_ANIMATOR")
ROUTE1424.setFromField("value_changed")
ROUTE1424.setToNode("Joe_r_knee")
ROUTE1424.setToField("set_rotation")

Scene33.addChild(ROUTE1424)
ROUTE1425 = x3d.ROUTE()
ROUTE1425.setFromNode("R_ANKLE_ANIMATOR")
ROUTE1425.setFromField("value_changed")
ROUTE1425.setToNode("Joe_r_ankle")
ROUTE1425.setToField("set_rotation")

Scene33.addChild(ROUTE1425)
ROUTE1426 = x3d.ROUTE()
ROUTE1426.setFromNode("R_subtalar_ANIMATOR")
ROUTE1426.setFromField("value_changed")
ROUTE1426.setToNode("Joe_r_subtalar")
ROUTE1426.setToField("set_rotation")

Scene33.addChild(ROUTE1426)
ROUTE1427 = x3d.ROUTE()
ROUTE1427.setFromNode("R_MIDTARSAL_ANIMATOR")
ROUTE1427.setFromField("value_changed")
ROUTE1427.setToNode("Joe_r_midtarsal")
ROUTE1427.setToField("set_rotation")

Scene33.addChild(ROUTE1427)
ROUTE1428 = x3d.ROUTE()
ROUTE1428.setFromNode("R_metatarsal_ANIMATOR")
ROUTE1428.setFromField("value_changed")
ROUTE1428.setToNode("Joe_r_metatarsal")
ROUTE1428.setToField("set_rotation")

Scene33.addChild(ROUTE1428)
ROUTE1429 = x3d.ROUTE()
ROUTE1429.setFromNode("VL5_ANIMATOR")
ROUTE1429.setFromField("value_changed")
ROUTE1429.setToNode("Joe_vl5")
ROUTE1429.setToField("set_rotation")

Scene33.addChild(ROUTE1429)
ROUTE1430 = x3d.ROUTE()
ROUTE1430.setFromNode("SKULLBASE_ANIMATOR")
ROUTE1430.setFromField("value_changed")
ROUTE1430.setToNode("Joe_skullbase")
ROUTE1430.setToField("set_rotation")

Scene33.addChild(ROUTE1430)
ROUTE1431 = x3d.ROUTE()
ROUTE1431.setFromNode("L_SHOULDER_ANIMATOR")
ROUTE1431.setFromField("value_changed")
ROUTE1431.setToNode("Joe_l_shoulder")
ROUTE1431.setToField("set_rotation")

Scene33.addChild(ROUTE1431)
ROUTE1432 = x3d.ROUTE()
ROUTE1432.setFromNode("L_ELBOW_ANIMATOR")
ROUTE1432.setFromField("value_changed")
ROUTE1432.setToNode("Joe_l_elbow")
ROUTE1432.setToField("set_rotation")

Scene33.addChild(ROUTE1432)
ROUTE1433 = x3d.ROUTE()
ROUTE1433.setFromNode("L_WRIST_ANIMATOR")
ROUTE1433.setFromField("value_changed")
ROUTE1433.setToNode("Joe_l_wrist")
ROUTE1433.setToField("set_rotation")

Scene33.addChild(ROUTE1433)
ROUTE1434 = x3d.ROUTE()
ROUTE1434.setFromNode("R_SHOULDER_ANIMATOR")
ROUTE1434.setFromField("value_changed")
ROUTE1434.setToNode("Joe_r_shoulder")
ROUTE1434.setToField("set_rotation")

Scene33.addChild(ROUTE1434)
ROUTE1435 = x3d.ROUTE()
ROUTE1435.setFromNode("R_ELBOW_ANIMATOR")
ROUTE1435.setFromField("value_changed")
ROUTE1435.setToNode("Joe_r_elbow")
ROUTE1435.setToField("set_rotation")

Scene33.addChild(ROUTE1435)
ROUTE1436 = x3d.ROUTE()
ROUTE1436.setFromNode("R_WRIST_ANIMATOR")
ROUTE1436.setFromField("value_changed")
ROUTE1436.setToNode("Joe_r_wrist")
ROUTE1436.setToField("set_rotation")

Scene33.addChild(ROUTE1436)

X3D0.setScene(Scene33)
X3D0.toFileX3D("../data/JoeSkeletonSkinSiteSaluteWalk.new.graalpy.x3d")
X3D0.toFileJSON("../data/JoeSkeletonSkinSiteSaluteWalk.new.graalpy.json")
