import x3dpsail as x3d

x3d.ConfigurationProperties.setXsltEngine(x3d.ConfigurationProperties.XSLT_ENGINE_NATIVE_JAVA)
x3d.ConfigurationProperties.setDeleteIntermediateFiles(False)
x3d.ConfigurationProperties.setStripTrailingZeroes(True)
x3d.ConfigurationProperties.setStripDefaultAttributes(True)
X3D0 = x3d.X3D()
X3D0.setProfile("Interchange")
X3D0.setVersion("4.0")
head1 = x3d.head()
meta2 = x3d.meta()
meta2.setName("title")
meta2.setContent("PathMeshTopSurface.x3d")

head1.addMeta(meta2)
meta3 = x3d.meta()
meta3.setName("description")
meta3.setContent("Pathway for HAnim scene Winter and Spring.")

head1.addMeta(meta3)
meta4 = x3d.meta()
meta4.setName("creator")
meta4.setContent("Carol McDonald")

head1.addMeta(meta4)
meta5 = x3d.meta()
meta5.setName("translator")
meta5.setContent("Joe Williams and Don Brutzman")

head1.addMeta(meta5)
meta6 = x3d.meta()
meta6.setName("created")
meta6.setContent("27 May 2023")

head1.addMeta(meta6)
meta7 = x3d.meta()
meta7.setName("modified")
meta7.setContent("Mon, 15 Sep 2025 05:20:53 GMT")

head1.addMeta(meta7)
meta8 = x3d.meta()
meta8.setName("source")
meta8.setContent("originals/PathMeshTopSurface.x3dv")

head1.addMeta(meta8)
meta9 = x3d.meta()
meta9.setName("reference")
meta9.setContent("https://sourceforge.net/p/x3d/code/HEAD/tree/www.web3d.org/x3d/content/examples/HumanoidAnimation/WinterAndSpring/originals/pathway.x3dv")

head1.addMeta(meta9)
meta10 = x3d.meta()
meta10.setName("identifier")
meta10.setContent("https://www.web3d.org/x3d/content/examples/HumanoidAnimation/WinterAndSpring/PathMeshTopSurface.x3d")

head1.addMeta(meta10)
meta11 = x3d.meta()
meta11.setName("generator")
meta11.setContent("tovrmlx3d, https://castle-engine.io/view3dscene.php#section_converting")

head1.addMeta(meta11)

X3D0.setHead(head1)
Scene12 = x3d.Scene()
NavigationInfo13 = x3d.NavigationInfo()
NavigationInfo13.setDEF("pathTop")
NavigationInfo13.setHeadlight(False)

Scene12.addChild(NavigationInfo13)
Shape14 = x3d.Shape()
Appearance15 = x3d.Appearance()
Material16 = x3d.Material()
Material16.setAmbientIntensity(0)
Material16.setDiffuseColor(x3d.doubleToFloat([0.5,0.5,0.5]))
Material16.setShininess(0)

Appearance15.setMaterial(Material16)

Shape14.setAppearance(Appearance15)
IndexedFaceSet17 = x3d.IndexedFaceSet()
IndexedFaceSet17.setTexCoordIndex([3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1])
IndexedFaceSet17.setCoordIndex([3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1])
Coordinate18 = x3d.Coordinate()
Coordinate18.setPoint(x3d.doubleToFloat([26.39594,0.075,25.67472,26.00195,0.075,25.75502,26.25982,0.075,25.00694,25.86584,0.075,25.08724,26.1237,0.075,24.33916,25.72972,0.075,24.41947]))

IndexedFaceSet17.setCoord(Coordinate18)

Shape14.setGeometry(IndexedFaceSet17)

Scene12.addChild(Shape14)
Shape19 = x3d.Shape()
Appearance20 = x3d.Appearance()
Material21 = x3d.Material()
Material21.setAmbientIntensity(0)
Material21.setDiffuseColor(x3d.doubleToFloat([0.5,0.5,0.5]))
Material21.setShininess(0)

Appearance20.setMaterial(Material21)

Shape19.setAppearance(Appearance20)
IndexedFaceSet22 = x3d.IndexedFaceSet()
IndexedFaceSet22.setSolid(False)
IndexedFaceSet22.setTexCoordIndex([3,1,0,-1,3,0,2,-1])
IndexedFaceSet22.setCoordIndex([3,1,0,-1,3,0,2,-1])
Coordinate23 = x3d.Coordinate()
Coordinate23.setPoint(x3d.doubleToFloat([26.39918,0.075,23.57728,26.53329,0.075,24.23526,25.5916,0.075,23.74189,25.72572,0.075,24.39987]))

IndexedFaceSet22.setCoord(Coordinate23)

Shape19.setGeometry(IndexedFaceSet22)

Scene12.addChild(Shape19)
Shape24 = x3d.Shape()
Appearance25 = x3d.Appearance()
Material26 = x3d.Material()
Material26.setAmbientIntensity(0)
Material26.setDiffuseColor(x3d.doubleToFloat([0.5,0.5,0.5]))
Material26.setShininess(0)

Appearance25.setMaterial(Material26)

Shape24.setAppearance(Appearance25)
IndexedFaceSet27 = x3d.IndexedFaceSet()
IndexedFaceSet27.setSolid(False)
IndexedFaceSet27.setTexCoordIndex([3,1,0,-1,3,0,2,-1])
IndexedFaceSet27.setCoordIndex([3,1,0,-1,3,0,2,-1])
Coordinate28 = x3d.Coordinate()
Coordinate28.setPoint(x3d.doubleToFloat([25.58761,0.075,23.72229,25.45349,0.075,23.06431,26.39518,0.075,23.55768,26.26106,0.075,22.8997]))

IndexedFaceSet27.setCoord(Coordinate28)

Shape24.setGeometry(IndexedFaceSet27)

Scene12.addChild(Shape24)
Shape29 = x3d.Shape()
Appearance30 = x3d.Appearance()
Material31 = x3d.Material()
Material31.setAmbientIntensity(0)
Material31.setDiffuseColor(x3d.doubleToFloat([0.5,0.5,0.5]))
Material31.setShininess(0)

Appearance30.setMaterial(Material31)

Shape29.setAppearance(Appearance30)
IndexedFaceSet32 = x3d.IndexedFaceSet()
IndexedFaceSet32.setSolid(False)
IndexedFaceSet32.setTexCoordIndex([3,1,0,-1,3,0,2,-1])
IndexedFaceSet32.setCoordIndex([3,1,0,-1,3,0,2,-1])
Coordinate33 = x3d.Coordinate()
Coordinate33.setPoint(x3d.doubleToFloat([25.84348,0.075,22.96441,25.4495,0.075,23.04472,25.57125,0.075,21.62885,25.17726,0.075,21.70916]))

IndexedFaceSet32.setCoord(Coordinate33)

Shape29.setGeometry(IndexedFaceSet32)

Scene12.addChild(Shape29)
Shape34 = x3d.Shape()
Appearance35 = x3d.Appearance()
Material36 = x3d.Material()
Material36.setAmbientIntensity(0)
Material36.setDiffuseColor(x3d.doubleToFloat([0.5,0.5,0.5]))
Material36.setShininess(0)

Appearance35.setMaterial(Material36)

Shape34.setAppearance(Appearance35)
IndexedFaceSet37 = x3d.IndexedFaceSet()
IndexedFaceSet37.setSolid(False)
IndexedFaceSet37.setTexCoordIndex([3,1,0,-1,3,0,2,-1])
IndexedFaceSet37.setCoordIndex([3,1,0,-1,3,0,2,-1])
Coordinate38 = x3d.Coordinate()
Coordinate38.setPoint(x3d.doubleToFloat([25.72724,0.075,28.63393,25.59312,0.075,27.97596,26.53481,0.075,28.46932,26.40069,0.075,27.81134]))

IndexedFaceSet37.setCoord(Coordinate38)

Shape34.setGeometry(IndexedFaceSet37)

Scene12.addChild(Shape34)
Shape39 = x3d.Shape()
Appearance40 = x3d.Appearance()
Material41 = x3d.Material()
Material41.setAmbientIntensity(0)
Material41.setDiffuseColor(x3d.doubleToFloat([0.5,0.5,0.5]))
Material41.setShininess(0)

Appearance40.setMaterial(Material41)

Shape39.setAppearance(Appearance40)
IndexedFaceSet42 = x3d.IndexedFaceSet()
IndexedFaceSet42.setSolid(False)
IndexedFaceSet42.setTexCoordIndex([3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1])
IndexedFaceSet42.setCoordIndex([3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1])
Coordinate43 = x3d.Coordinate()
Coordinate43.setPoint(x3d.doubleToFloat([26.26258,0.075,27.13377,26.3967,0.075,27.79175,25.85879,0.075,27.21607,25.99291,0.075,27.87405,25.45501,0.075,27.29838,25.58913,0.075,27.95636]))

IndexedFaceSet42.setCoord(Coordinate43)

Shape39.setGeometry(IndexedFaceSet42)

Scene12.addChild(Shape39)
Shape44 = x3d.Shape()
Appearance45 = x3d.Appearance()
Material46 = x3d.Material()
Material46.setAmbientIntensity(0)
Material46.setDiffuseColor(x3d.doubleToFloat([0.5,0.5,0.5]))
Material46.setShininess(0)

Appearance45.setMaterial(Material46)

Shape44.setAppearance(Appearance45)
IndexedFaceSet47 = x3d.IndexedFaceSet()
IndexedFaceSet47.setSolid(False)
IndexedFaceSet47.setTexCoordIndex([4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1])
IndexedFaceSet47.setCoordIndex([4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1])
Coordinate48 = x3d.Coordinate()
Coordinate48.setPoint(x3d.doubleToFloat([25.59236,0.075,25.85892,25.78936,0.075,25.81877,25.98635,0.075,25.77861,25.72848,0.075,26.5267,25.92547,0.075,26.48655,26.12247,0.075,26.44639,25.8646,0.075,27.19448,26.06159,0.075,27.15432,26.25858,0.075,27.11417]))

IndexedFaceSet47.setCoord(Coordinate48)

Shape44.setGeometry(IndexedFaceSet47)

Scene12.addChild(Shape44)
Shape49 = x3d.Shape()
Appearance50 = x3d.Appearance()
Material51 = x3d.Material()
Material51.setAmbientIntensity(0)
Material51.setDiffuseColor(x3d.doubleToFloat([0.5,0.5,0.5]))
Material51.setShininess(0)

Appearance50.setMaterial(Material51)

Shape49.setAppearance(Appearance50)
IndexedFaceSet52 = x3d.IndexedFaceSet()
IndexedFaceSet52.setSolid(False)
IndexedFaceSet52.setTexCoordIndex([3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1])
IndexedFaceSet52.setCoordIndex([3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1])
Coordinate53 = x3d.Coordinate()
Coordinate53.setPoint(x3d.doubleToFloat([25.17878,0.075,25.94323,25.57277,0.075,25.86292,25.3149,0.075,26.611,25.70888,0.075,26.53069,25.45101,0.075,27.27878,25.845,0.075,27.19847]))

IndexedFaceSet52.setCoord(Coordinate53)

Shape49.setGeometry(IndexedFaceSet52)

Scene12.addChild(Shape49)
Shape54 = x3d.Shape()
Appearance55 = x3d.Appearance()
Material56 = x3d.Material()
Material56.setAmbientIntensity(0)
Material56.setDiffuseColor(x3d.doubleToFloat([0.5,0.5,0.5]))
Material56.setShininess(0)

Appearance55.setMaterial(Material56)

Shape54.setAppearance(Appearance55)
IndexedFaceSet57 = x3d.IndexedFaceSet()
IndexedFaceSet57.setSolid(False)
IndexedFaceSet57.setTexCoordIndex([3,1,0,-1,3,0,2,-1])
IndexedFaceSet57.setCoordIndex([3,1,0,-1,3,0,2,-1])
Coordinate58 = x3d.Coordinate()
Coordinate58.setPoint(x3d.doubleToFloat([25.17478,0.075,25.92363,25.04066,0.075,25.26565,25.98236,0.075,25.75902,25.84824,0.075,25.10104]))

IndexedFaceSet57.setCoord(Coordinate58)

Shape54.setGeometry(IndexedFaceSet57)

Scene12.addChild(Shape54)
Shape59 = x3d.Shape()
Appearance60 = x3d.Appearance()
Material61 = x3d.Material()
Material61.setAmbientIntensity(0)
Material61.setDiffuseColor(x3d.doubleToFloat([0.5,0.5,0.5]))
Material61.setShininess(0)

Appearance60.setMaterial(Material61)

Shape59.setAppearance(Appearance60)
IndexedFaceSet62 = x3d.IndexedFaceSet()
IndexedFaceSet62.setSolid(False)
IndexedFaceSet62.setTexCoordIndex([3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1])
IndexedFaceSet62.setCoordIndex([3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1])
Coordinate63 = x3d.Coordinate()
Coordinate63.setPoint(x3d.doubleToFloat([25.03667,0.075,25.24605,24.90255,0.075,24.58807,25.44046,0.075,25.16375,25.30634,0.075,24.50577,25.84424,0.075,25.08144,25.71012,0.075,24.42346]))

IndexedFaceSet62.setCoord(Coordinate63)

Shape59.setGeometry(IndexedFaceSet62)

Scene12.addChild(Shape59)
Shape64 = x3d.Shape()
Appearance65 = x3d.Appearance()
Material66 = x3d.Material()
Material66.setAmbientIntensity(0)
Material66.setDiffuseColor(x3d.doubleToFloat([0.5,0.5,0.5]))
Material66.setShininess(0)

Appearance65.setMaterial(Material66)

Shape64.setAppearance(Appearance65)
IndexedFaceSet67 = x3d.IndexedFaceSet()
IndexedFaceSet67.setSolid(False)
IndexedFaceSet67.setTexCoordIndex([3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1])
IndexedFaceSet67.setCoordIndex([3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1])
Coordinate68 = x3d.Coordinate()
Coordinate68.setPoint(x3d.doubleToFloat([25.03991,0.075,23.14862,25.43389,0.075,23.06831,25.17602,0.075,23.81639,25.57001,0.075,23.73609,25.31214,0.075,24.48417,25.70613,0.075,24.40386]))

IndexedFaceSet67.setCoord(Coordinate68)

Shape64.setGeometry(IndexedFaceSet67)

Scene12.addChild(Shape64)
Shape69 = x3d.Shape()
Appearance70 = x3d.Appearance()
Material71 = x3d.Material()
Material71.setAmbientIntensity(0)
Material71.setDiffuseColor(x3d.doubleToFloat([0.5,0.5,0.5]))
Material71.setShininess(0)

Appearance70.setMaterial(Material71)

Shape69.setAppearance(Appearance70)
IndexedFaceSet72 = x3d.IndexedFaceSet()
IndexedFaceSet72.setSolid(False)
IndexedFaceSet72.setTexCoordIndex([3,1,0,-1,3,0,2,-1])
IndexedFaceSet72.setCoordIndex([3,1,0,-1,3,0,2,-1])
Coordinate73 = x3d.Coordinate()
Coordinate73.setPoint(x3d.doubleToFloat([24.62632,0.075,23.23292,25.02031,0.075,23.15261,24.89856,0.075,24.56848,25.29254,0.075,24.48817]))

IndexedFaceSet72.setCoord(Coordinate73)

Shape69.setGeometry(IndexedFaceSet72)

Scene12.addChild(Shape69)
Shape74 = x3d.Shape()
Appearance75 = x3d.Appearance()
Material76 = x3d.Material()
Material76.setAmbientIntensity(0)
Material76.setDiffuseColor(x3d.doubleToFloat([0.5,0.5,0.5]))
Material76.setShininess(0)

Appearance75.setMaterial(Material76)

Shape74.setAppearance(Appearance75)
IndexedFaceSet77 = x3d.IndexedFaceSet()
IndexedFaceSet77.setSolid(False)
IndexedFaceSet77.setTexCoordIndex([3,1,0,-1,3,0,2,-1])
IndexedFaceSet77.setCoordIndex([3,1,0,-1,3,0,2,-1])
Coordinate78 = x3d.Coordinate()
Coordinate78.setPoint(x3d.doubleToFloat([24.62233,0.075,23.21332,24.48821,0.075,22.55534,25.4299,0.075,23.04871,25.29578,0.075,22.39073]))

IndexedFaceSet77.setCoord(Coordinate78)

Shape74.setGeometry(IndexedFaceSet77)

Scene12.addChild(Shape74)
Shape79 = x3d.Shape()
Appearance80 = x3d.Appearance()
Material81 = x3d.Material()
Material81.setAmbientIntensity(0)
Material81.setDiffuseColor(x3d.doubleToFloat([0.5,0.5,0.5]))
Material81.setShininess(0)

Appearance80.setMaterial(Material81)

Shape79.setAppearance(Appearance80)
IndexedFaceSet82 = x3d.IndexedFaceSet()
IndexedFaceSet82.setSolid(False)
IndexedFaceSet82.setTexCoordIndex([3,1,0,-1,3,0,2,-1])
IndexedFaceSet82.setCoordIndex([3,1,0,-1,3,0,2,-1])
Coordinate83 = x3d.Coordinate()
Coordinate83.setPoint(x3d.doubleToFloat([24.48421,0.075,22.53575,24.3501,0.075,21.87777,25.29178,0.075,22.37114,25.15767,0.075,21.71316]))

IndexedFaceSet82.setCoord(Coordinate83)

Shape79.setGeometry(IndexedFaceSet82)

Scene12.addChild(Shape79)
Shape84 = x3d.Shape()
Appearance85 = x3d.Appearance()
Material86 = x3d.Material()
Material86.setAmbientIntensity(0)
Material86.setDiffuseColor(x3d.doubleToFloat([0.5,0.5,0.5]))
Material86.setShininess(0)

Appearance85.setMaterial(Material86)

Shape84.setAppearance(Appearance85)
IndexedFaceSet87 = x3d.IndexedFaceSet()
IndexedFaceSet87.setSolid(False)
IndexedFaceSet87.setTexCoordIndex([3,1,0,-1,3,0,2,-1])
IndexedFaceSet87.setCoordIndex([3,1,0,-1,3,0,2,-1])
Coordinate88 = x3d.Coordinate()
Coordinate88.setPoint(x3d.doubleToFloat([24.48745,0.075,20.43831,24.88144,0.075,20.358,24.75968,0.075,21.77387,25.15367,0.075,21.69356]))

IndexedFaceSet87.setCoord(Coordinate88)

Shape84.setGeometry(IndexedFaceSet87)

Scene12.addChild(Shape84)
Shape89 = x3d.Shape()
Appearance90 = x3d.Appearance()
Material91 = x3d.Material()
Material91.setAmbientIntensity(0)
Material91.setDiffuseColor(x3d.doubleToFloat([0.5,0.5,0.5]))
Material91.setShininess(0)

Appearance90.setMaterial(Material91)

Shape89.setAppearance(Appearance90)
IndexedFaceSet92 = x3d.IndexedFaceSet()
IndexedFaceSet92.setSolid(False)
IndexedFaceSet92.setTexCoordIndex([3,1,0,-1,3,0,2,-1])
IndexedFaceSet92.setCoordIndex([3,1,0,-1,3,0,2,-1])
Coordinate93 = x3d.Coordinate()
Coordinate93.setPoint(x3d.doubleToFloat([24.74009,0.075,21.77786,24.3461,0.075,21.85817,24.46785,0.075,20.44231,24.07387,0.075,20.52261]))

IndexedFaceSet92.setCoord(Coordinate93)

Shape89.setGeometry(IndexedFaceSet92)

Scene12.addChild(Shape89)
Shape94 = x3d.Shape()
Appearance95 = x3d.Appearance()
Material96 = x3d.Material()
Material96.setAmbientIntensity(0)
Material96.setDiffuseColor(x3d.doubleToFloat([0.5,0.5,0.5]))
Material96.setShininess(0)

Appearance95.setMaterial(Material96)

Shape94.setAppearance(Appearance95)
IndexedFaceSet97 = x3d.IndexedFaceSet()
IndexedFaceSet97.setSolid(False)
IndexedFaceSet97.setTexCoordIndex([3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1])
IndexedFaceSet97.setCoordIndex([3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1])
Coordinate98 = x3d.Coordinate()
Coordinate98.setPoint(x3d.doubleToFloat([25.1763,0.075,30.15769,25.04218,0.075,29.49971,25.58009,0.075,30.07539,25.44597,0.075,29.41741,25.98387,0.075,29.99308,25.84975,0.075,29.3351]))

IndexedFaceSet97.setCoord(Coordinate98)

Shape94.setGeometry(IndexedFaceSet97)

Scene12.addChild(Shape94)
Shape99 = x3d.Shape()
Appearance100 = x3d.Appearance()
Material101 = x3d.Material()
Material101.setAmbientIntensity(0)
Material101.setDiffuseColor(x3d.doubleToFloat([0.5,0.5,0.5]))
Material101.setShininess(0)

Appearance100.setMaterial(Material101)

Shape99.setAppearance(Appearance100)
IndexedFaceSet102 = x3d.IndexedFaceSet()
IndexedFaceSet102.setSolid(False)
IndexedFaceSet102.setTexCoordIndex([3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1])
IndexedFaceSet102.setCoordIndex([3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1])
Coordinate103 = x3d.Coordinate()
Coordinate103.setPoint(x3d.doubleToFloat([25.03819,0.075,29.48012,24.90407,0.075,28.82214,25.44197,0.075,29.39781,25.30785,0.075,28.73983,25.84576,0.075,29.31551,25.71164,0.075,28.65753]))

IndexedFaceSet102.setCoord(Coordinate103)

Shape99.setGeometry(IndexedFaceSet102)

Scene12.addChild(Shape99)
Shape104 = x3d.Shape()
Appearance105 = x3d.Appearance()
Material106 = x3d.Material()
Material106.setAmbientIntensity(0)
Material106.setDiffuseColor(x3d.doubleToFloat([0.5,0.5,0.5]))
Material106.setShininess(0)

Appearance105.setMaterial(Material106)

Shape104.setAppearance(Appearance105)
IndexedFaceSet107 = x3d.IndexedFaceSet()
IndexedFaceSet107.setSolid(False)
IndexedFaceSet107.setTexCoordIndex([3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1])
IndexedFaceSet107.setCoordIndex([3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1])
Coordinate108 = x3d.Coordinate()
Coordinate108.setPoint(x3d.doubleToFloat([25.04142,0.075,27.38268,25.43541,0.075,27.30237,25.17754,0.075,28.05046,25.57153,0.075,27.97015,25.31366,0.075,28.71824,25.70764,0.075,28.63793]))

IndexedFaceSet107.setCoord(Coordinate108)

Shape104.setGeometry(IndexedFaceSet107)

Scene12.addChild(Shape104)
Shape109 = x3d.Shape()
Appearance110 = x3d.Appearance()
Material111 = x3d.Material()
Material111.setAmbientIntensity(0)
Material111.setDiffuseColor(x3d.doubleToFloat([0.5,0.5,0.5]))
Material111.setShininess(0)

Appearance110.setMaterial(Material111)

Shape109.setAppearance(Appearance110)
IndexedFaceSet112 = x3d.IndexedFaceSet()
IndexedFaceSet112.setSolid(False)
IndexedFaceSet112.setTexCoordIndex([4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1])
IndexedFaceSet112.setCoordIndex([4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1])
Coordinate113 = x3d.Coordinate()
Coordinate113.setPoint(x3d.doubleToFloat([24.62784,0.075,27.46698,24.82483,0.075,27.42683,25.02183,0.075,27.38668,24.76396,0.075,28.13476,24.96095,0.075,28.09461,25.15794,0.075,28.05445,24.90007,0.075,28.80254,25.09706,0.075,28.76239,25.29406,0.075,28.72223]))

IndexedFaceSet112.setCoord(Coordinate113)

Shape109.setGeometry(IndexedFaceSet112)

Scene12.addChild(Shape109)
Shape114 = x3d.Shape()
Appearance115 = x3d.Appearance()
Material116 = x3d.Material()
Material116.setAmbientIntensity(0)
Material116.setDiffuseColor(x3d.doubleToFloat([0.5,0.5,0.5]))
Material116.setShininess(0)

Appearance115.setMaterial(Material116)

Shape114.setAppearance(Appearance115)
IndexedFaceSet117 = x3d.IndexedFaceSet()
IndexedFaceSet117.setSolid(False)
IndexedFaceSet117.setTexCoordIndex([4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1])
IndexedFaceSet117.setCoordIndex([4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1])
Coordinate118 = x3d.Coordinate()
Coordinate118.setPoint(x3d.doubleToFloat([24.62384,0.075,27.44739,24.55679,0.075,27.1184,24.48973,0.075,26.78941,25.43142,0.075,27.28278,25.36436,0.075,26.95379,25.2973,0.075,26.6248]))

IndexedFaceSet117.setCoord(Coordinate118)

Shape114.setGeometry(IndexedFaceSet117)

Scene12.addChild(Shape114)
Shape119 = x3d.Shape()
Appearance120 = x3d.Appearance()
Material121 = x3d.Material()
Material121.setAmbientIntensity(0)
Material121.setDiffuseColor(x3d.doubleToFloat([0.5,0.5,0.5]))
Material121.setShininess(0)

Appearance120.setMaterial(Material121)

Shape119.setAppearance(Appearance120)
IndexedFaceSet122 = x3d.IndexedFaceSet()
IndexedFaceSet122.setSolid(False)
IndexedFaceSet122.setTexCoordIndex([3,1,0,-1,3,0,2,-1])
IndexedFaceSet122.setCoordIndex([3,1,0,-1,3,0,2,-1])
Coordinate123 = x3d.Coordinate()
Coordinate123.setPoint(x3d.doubleToFloat([24.48573,0.075,26.76981,24.35161,0.075,26.11183,25.2933,0.075,26.6052,25.15918,0.075,25.94722]))

IndexedFaceSet122.setCoord(Coordinate123)

Shape119.setGeometry(IndexedFaceSet122)

Scene12.addChild(Shape119)
Shape124 = x3d.Shape()
Appearance125 = x3d.Appearance()
Material126 = x3d.Material()
Material126.setAmbientIntensity(0)
Material126.setDiffuseColor(x3d.doubleToFloat([0.5,0.5,0.5]))
Material126.setShininess(0)

Appearance125.setMaterial(Material126)

Shape124.setAppearance(Appearance125)
IndexedFaceSet127 = x3d.IndexedFaceSet()
IndexedFaceSet127.setSolid(False)
IndexedFaceSet127.setTexCoordIndex([3,1,0,-1,3,0,2,-1])
IndexedFaceSet127.setCoordIndex([3,1,0,-1,3,0,2,-1])
Coordinate128 = x3d.Coordinate()
Coordinate128.setPoint(x3d.doubleToFloat([25.15519,0.075,25.92762,24.7612,0.075,26.00793,24.88295,0.075,24.59207,24.48897,0.075,24.67238]))

IndexedFaceSet127.setCoord(Coordinate128)

Shape124.setGeometry(IndexedFaceSet127)

Scene12.addChild(Shape124)
Shape129 = x3d.Shape()
Appearance130 = x3d.Appearance()
Material131 = x3d.Material()
Material131.setAmbientIntensity(0)
Material131.setDiffuseColor(x3d.doubleToFloat([0.5,0.5,0.5]))
Material131.setShininess(0)

Appearance130.setMaterial(Material131)

Shape129.setAppearance(Appearance130)
IndexedFaceSet132 = x3d.IndexedFaceSet()
IndexedFaceSet132.setSolid(False)
IndexedFaceSet132.setTexCoordIndex([3,1,0,-1,3,0,2,-1])
IndexedFaceSet132.setCoordIndex([3,1,0,-1,3,0,2,-1])
Coordinate133 = x3d.Coordinate()
Coordinate133.setPoint(x3d.doubleToFloat([24.07538,0.075,24.75668,24.46937,0.075,24.67637,24.34762,0.075,26.09224,24.7416,0.075,26.01193]))

IndexedFaceSet132.setCoord(Coordinate133)

Shape129.setGeometry(IndexedFaceSet132)

Scene12.addChild(Shape129)
Shape134 = x3d.Shape()
Appearance135 = x3d.Appearance()
Material136 = x3d.Material()
Material136.setAmbientIntensity(0)
Material136.setDiffuseColor(x3d.doubleToFloat([0.5,0.5,0.5]))
Material136.setShininess(0)

Appearance135.setMaterial(Material136)

Shape134.setAppearance(Appearance135)
IndexedFaceSet137 = x3d.IndexedFaceSet()
IndexedFaceSet137.setSolid(False)
IndexedFaceSet137.setTexCoordIndex([3,1,0,-1,3,0,2,-1])
IndexedFaceSet137.setCoordIndex([3,1,0,-1,3,0,2,-1])
Coordinate138 = x3d.Coordinate()
Coordinate138.setPoint(x3d.doubleToFloat([24.07139,0.075,24.73708,23.93727,0.075,24.0791,24.87896,0.075,24.57247,24.74484,0.075,23.91449]))

IndexedFaceSet137.setCoord(Coordinate138)

Shape134.setGeometry(IndexedFaceSet137)

Scene12.addChild(Shape134)
Shape139 = x3d.Shape()
Appearance140 = x3d.Appearance()
Material141 = x3d.Material()
Material141.setAmbientIntensity(0)
Material141.setDiffuseColor(x3d.doubleToFloat([0.5,0.5,0.5]))
Material141.setShininess(0)

Appearance140.setMaterial(Material141)

Shape139.setAppearance(Appearance140)
IndexedFaceSet142 = x3d.IndexedFaceSet()
IndexedFaceSet142.setSolid(False)
IndexedFaceSet142.setTexCoordIndex([3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1])
IndexedFaceSet142.setCoordIndex([3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1])
Coordinate143 = x3d.Coordinate()
Coordinate143.setPoint(x3d.doubleToFloat([24.60673,0.075,23.23692,24.74084,0.075,23.89489,24.20294,0.075,23.31922,24.33706,0.075,23.9772,23.79915,0.075,23.40153,23.93328,0.075,24.05951]))

IndexedFaceSet142.setCoord(Coordinate143)

Shape139.setGeometry(IndexedFaceSet142)

Scene12.addChild(Shape139)
Shape144 = x3d.Shape()
Appearance145 = x3d.Appearance()
Material146 = x3d.Material()
Material146.setAmbientIntensity(0)
Material146.setDiffuseColor(x3d.doubleToFloat([0.5,0.5,0.5]))
Material146.setShininess(0)

Appearance145.setMaterial(Material146)

Shape144.setAppearance(Appearance145)
IndexedFaceSet147 = x3d.IndexedFaceSet()
IndexedFaceSet147.setSolid(False)
IndexedFaceSet147.setTexCoordIndex([4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1])
IndexedFaceSet147.setCoordIndex([4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1])
Coordinate148 = x3d.Coordinate()
Coordinate148.setPoint(x3d.doubleToFloat([24.60273,0.075,23.21732,24.40574,0.075,23.25747,24.20874,0.075,23.29763,24.46661,0.075,22.54954,24.26962,0.075,22.58969,24.07263,0.075,22.62985,24.3305,0.075,21.88176,24.1335,0.075,21.92192,23.93651,0.075,21.96207]))

IndexedFaceSet147.setCoord(Coordinate148)

Shape144.setGeometry(IndexedFaceSet147)

Scene12.addChild(Shape144)
Shape149 = x3d.Shape()
Appearance150 = x3d.Appearance()
Material151 = x3d.Material()
Material151.setAmbientIntensity(0)
Material151.setDiffuseColor(x3d.doubleToFloat([0.5,0.5,0.5]))
Material151.setShininess(0)

Appearance150.setMaterial(Material151)

Shape149.setAppearance(Appearance150)
IndexedFaceSet152 = x3d.IndexedFaceSet()
IndexedFaceSet152.setSolid(False)
IndexedFaceSet152.setTexCoordIndex([3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1])
IndexedFaceSet152.setCoordIndex([3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1])
Coordinate153 = x3d.Coordinate()
Coordinate153.setPoint(x3d.doubleToFloat([23.52293,0.075,22.04637,23.91691,0.075,21.96606,23.65904,0.075,22.71415,24.05303,0.075,22.63384,23.79516,0.075,23.38193,24.18915,0.075,23.30162]))

IndexedFaceSet152.setCoord(Coordinate153)

Shape149.setGeometry(IndexedFaceSet152)

Scene12.addChild(Shape149)
Shape154 = x3d.Shape()
Appearance155 = x3d.Appearance()
Material156 = x3d.Material()
Material156.setAmbientIntensity(0)
Material156.setDiffuseColor(x3d.doubleToFloat([0.5,0.5,0.5]))
Material156.setShininess(0)

Appearance155.setMaterial(Material156)

Shape154.setAppearance(Appearance155)
IndexedFaceSet157 = x3d.IndexedFaceSet()
IndexedFaceSet157.setSolid(False)
IndexedFaceSet157.setTexCoordIndex([3,1,0,-1,3,0,2,-1])
IndexedFaceSet157.setCoordIndex([3,1,0,-1,3,0,2,-1])
Coordinate158 = x3d.Coordinate()
Coordinate158.setPoint(x3d.doubleToFloat([23.51893,0.075,22.02678,23.38481,0.075,21.3688,24.3265,0.075,21.86217,24.19238,0.075,21.20419]))

IndexedFaceSet157.setCoord(Coordinate158)

Shape154.setGeometry(IndexedFaceSet157)

Scene12.addChild(Shape154)
Shape159 = x3d.Shape()
Appearance160 = x3d.Appearance()
Material161 = x3d.Material()
Material161.setAmbientIntensity(0)
Material161.setDiffuseColor(x3d.doubleToFloat([0.5,0.5,0.5]))
Material161.setShininess(0)

Appearance160.setMaterial(Material161)

Shape159.setAppearance(Appearance160)
IndexedFaceSet162 = x3d.IndexedFaceSet()
IndexedFaceSet162.setSolid(False)
IndexedFaceSet162.setTexCoordIndex([3,1,0,-1,3,0,2,-1])
IndexedFaceSet162.setCoordIndex([3,1,0,-1,3,0,2,-1])
Coordinate163 = x3d.Coordinate()
Coordinate163.setPoint(x3d.doubleToFloat([24.05427,0.075,20.52661,24.18839,0.075,21.18459,23.2467,0.075,20.69122,23.38082,0.075,21.3492]))

IndexedFaceSet162.setCoord(Coordinate163)

Shape159.setGeometry(IndexedFaceSet162)

Scene12.addChild(Shape159)
Shape164 = x3d.Shape()
Appearance165 = x3d.Appearance()
Material166 = x3d.Material()
Material166.setAmbientIntensity(0)
Material166.setDiffuseColor(x3d.doubleToFloat([0.5,0.5,0.5]))
Material166.setShininess(0)

Appearance165.setMaterial(Material166)

Shape164.setAppearance(Appearance165)
IndexedFaceSet167 = x3d.IndexedFaceSet()
IndexedFaceSet167.setSolid(False)
IndexedFaceSet167.setTexCoordIndex([3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1])
IndexedFaceSet167.setCoordIndex([3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1])
Coordinate168 = x3d.Coordinate()
Coordinate168.setPoint(x3d.doubleToFloat([24.05028,0.075,20.50701,23.65629,0.075,20.58732,23.91416,0.075,19.83923,23.52017,0.075,19.91954,23.77804,0.075,19.17146,23.38405,0.075,19.25176]))

IndexedFaceSet167.setCoord(Coordinate168)

Shape164.setGeometry(IndexedFaceSet167)

Scene12.addChild(Shape164)
Shape169 = x3d.Shape()
Appearance170 = x3d.Appearance()
Material171 = x3d.Material()
Material171.setAmbientIntensity(0)
Material171.setDiffuseColor(x3d.doubleToFloat([0.5,0.5,0.5]))
Material171.setShininess(0)

Appearance170.setMaterial(Material171)

Shape169.setAppearance(Appearance170)
IndexedFaceSet172 = x3d.IndexedFaceSet()
IndexedFaceSet172.setSolid(False)
IndexedFaceSet172.setTexCoordIndex([3,1,0,-1,3,0,2,-1])
IndexedFaceSet172.setCoordIndex([3,1,0,-1,3,0,2,-1])
Coordinate173 = x3d.Coordinate()
Coordinate173.setPoint(x3d.doubleToFloat([22.97047,0.075,19.33607,23.36446,0.075,19.25576,23.2427,0.075,20.67162,23.63669,0.075,20.59131]))

IndexedFaceSet172.setCoord(Coordinate173)

Shape169.setGeometry(IndexedFaceSet172)

Scene12.addChild(Shape169)
Shape174 = x3d.Shape()
Appearance175 = x3d.Appearance()
Material176 = x3d.Material()
Material176.setAmbientIntensity(0)
Material176.setDiffuseColor(x3d.doubleToFloat([0.5,0.5,0.5]))
Material176.setShininess(0)

Appearance175.setMaterial(Material176)

Shape174.setAppearance(Appearance175)
IndexedFaceSet177 = x3d.IndexedFaceSet()
IndexedFaceSet177.setSolid(False)
IndexedFaceSet177.setTexCoordIndex([3,1,0,-1,3,0,2,-1])
IndexedFaceSet177.setCoordIndex([3,1,0,-1,3,0,2,-1])
Coordinate178 = x3d.Coordinate()
Coordinate178.setPoint(x3d.doubleToFloat([24.49048,0.075,28.90644,24.88447,0.075,28.82613,24.76272,0.075,30.242,25.1567,0.075,30.16169]))

IndexedFaceSet177.setCoord(Coordinate178)

Shape174.setGeometry(IndexedFaceSet177)

Scene12.addChild(Shape174)
Shape179 = x3d.Shape()
Appearance180 = x3d.Appearance()
Material181 = x3d.Material()
Material181.setAmbientIntensity(0)
Material181.setDiffuseColor(x3d.doubleToFloat([0.5,0.5,0.5]))
Material181.setShininess(0)

Appearance180.setMaterial(Material181)

Shape179.setAppearance(Appearance180)
IndexedFaceSet182 = x3d.IndexedFaceSet()
IndexedFaceSet182.setSolid(False)
IndexedFaceSet182.setTexCoordIndex([3,1,0,-1,3,0,2,-1])
IndexedFaceSet182.setCoordIndex([3,1,0,-1,3,0,2,-1])
Coordinate183 = x3d.Coordinate()
Coordinate183.setPoint(x3d.doubleToFloat([24.0769,0.075,28.99074,24.47089,0.075,28.91043,24.34913,0.075,30.3263,24.74312,0.075,30.24599]))

IndexedFaceSet182.setCoord(Coordinate183)

Shape179.setGeometry(IndexedFaceSet182)

Scene12.addChild(Shape179)
Shape184 = x3d.Shape()
Appearance185 = x3d.Appearance()
Material186 = x3d.Material()
Material186.setAmbientIntensity(0)
Material186.setDiffuseColor(x3d.doubleToFloat([0.5,0.5,0.5]))
Material186.setShininess(0)

Appearance185.setMaterial(Material186)

Shape184.setAppearance(Appearance185)
IndexedFaceSet187 = x3d.IndexedFaceSet()
IndexedFaceSet187.setSolid(False)
IndexedFaceSet187.setTexCoordIndex([4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1])
IndexedFaceSet187.setCoordIndex([4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1])
Coordinate188 = x3d.Coordinate()
Coordinate188.setPoint(x3d.doubleToFloat([24.0729,0.075,28.97115,24.00584,0.075,28.64216,23.93879,0.075,28.31317,24.47669,0.075,28.88884,24.40963,0.075,28.55985,24.34257,0.075,28.23086,24.88048,0.075,28.80654,24.81342,0.075,28.47754,24.74636,0.075,28.14856]))

IndexedFaceSet187.setCoord(Coordinate188)

Shape184.setGeometry(IndexedFaceSet187)

Scene12.addChild(Shape184)
Shape189 = x3d.Shape()
Appearance190 = x3d.Appearance()
Material191 = x3d.Material()
Material191.setAmbientIntensity(0)
Material191.setDiffuseColor(x3d.doubleToFloat([0.5,0.5,0.5]))
Material191.setShininess(0)

Appearance190.setMaterial(Material191)

Shape189.setAppearance(Appearance190)
IndexedFaceSet192 = x3d.IndexedFaceSet()
IndexedFaceSet192.setSolid(False)
IndexedFaceSet192.setTexCoordIndex([3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1])
IndexedFaceSet192.setCoordIndex([3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1])
Coordinate193 = x3d.Coordinate()
Coordinate193.setPoint(x3d.doubleToFloat([23.93479,0.075,28.29357,23.80067,0.075,27.63559,24.33858,0.075,28.21126,24.20446,0.075,27.55329,24.74236,0.075,28.12896,24.60824,0.075,27.47098]))

IndexedFaceSet192.setCoord(Coordinate193)

Shape189.setGeometry(IndexedFaceSet192)

Scene12.addChild(Shape189)
Shape194 = x3d.Shape()
Appearance195 = x3d.Appearance()
Material196 = x3d.Material()
Material196.setAmbientIntensity(0)
Material196.setDiffuseColor(x3d.doubleToFloat([0.5,0.5,0.5]))
Material196.setShininess(0)

Appearance195.setMaterial(Material196)

Shape194.setAppearance(Appearance195)
IndexedFaceSet197 = x3d.IndexedFaceSet()
IndexedFaceSet197.setSolid(False)
IndexedFaceSet197.setTexCoordIndex([4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1])
IndexedFaceSet197.setCoordIndex([4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1])
Coordinate198 = x3d.Coordinate()
Coordinate198.setPoint(x3d.doubleToFloat([23.93803,0.075,26.19613,24.13502,0.075,26.15598,24.33201,0.075,26.11583,24.07414,0.075,26.86391,24.27114,0.075,26.82376,24.46813,0.075,26.7836,24.21026,0.075,27.53169,24.40725,0.075,27.49154,24.60425,0.075,27.45138]))

IndexedFaceSet197.setCoord(Coordinate198)

Shape194.setGeometry(IndexedFaceSet197)

Scene12.addChild(Shape194)
Shape199 = x3d.Shape()
Appearance200 = x3d.Appearance()
Material201 = x3d.Material()
Material201.setAmbientIntensity(0)
Material201.setDiffuseColor(x3d.doubleToFloat([0.5,0.5,0.5]))
Material201.setShininess(0)

Appearance200.setMaterial(Material201)

Shape199.setAppearance(Appearance200)
IndexedFaceSet202 = x3d.IndexedFaceSet()
IndexedFaceSet202.setSolid(False)
IndexedFaceSet202.setTexCoordIndex([4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1])
IndexedFaceSet202.setCoordIndex([4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1])
Coordinate203 = x3d.Coordinate()
Coordinate203.setPoint(x3d.doubleToFloat([23.52444,0.075,26.28044,23.72144,0.075,26.24028,23.91843,0.075,26.20013,23.66056,0.075,26.94822,23.85755,0.075,26.90806,24.05455,0.075,26.86791,23.79668,0.075,27.61599,23.99367,0.075,27.57584,24.19066,0.075,27.53568]))

IndexedFaceSet202.setCoord(Coordinate203)

Shape199.setGeometry(IndexedFaceSet202)

Scene12.addChild(Shape199)
Shape204 = x3d.Shape()
Appearance205 = x3d.Appearance()
Material206 = x3d.Material()
Material206.setAmbientIntensity(0)
Material206.setDiffuseColor(x3d.doubleToFloat([0.5,0.5,0.5]))
Material206.setShininess(0)

Appearance205.setMaterial(Material206)

Shape204.setAppearance(Appearance205)
IndexedFaceSet207 = x3d.IndexedFaceSet()
IndexedFaceSet207.setSolid(False)
IndexedFaceSet207.setTexCoordIndex([3,1,0,-1,3,0,2,-1])
IndexedFaceSet207.setCoordIndex([3,1,0,-1,3,0,2,-1])
Coordinate208 = x3d.Coordinate()
Coordinate208.setPoint(x3d.doubleToFloat([23.52045,0.075,26.26084,23.38633,0.075,25.60286,24.32802,0.075,26.09623,24.1939,0.075,25.43825]))

IndexedFaceSet207.setCoord(Coordinate208)

Shape204.setGeometry(IndexedFaceSet207)

Scene12.addChild(Shape204)
Shape209 = x3d.Shape()
Appearance210 = x3d.Appearance()
Material211 = x3d.Material()
Material211.setAmbientIntensity(0)
Material211.setDiffuseColor(x3d.doubleToFloat([0.5,0.5,0.5]))
Material211.setShininess(0)

Appearance210.setMaterial(Material211)

Shape209.setAppearance(Appearance210)
IndexedFaceSet212 = x3d.IndexedFaceSet()
IndexedFaceSet212.setSolid(False)
IndexedFaceSet212.setTexCoordIndex([3,1,0,-1,3,0,2,-1])
IndexedFaceSet212.setCoordIndex([3,1,0,-1,3,0,2,-1])
Coordinate213 = x3d.Coordinate()
Coordinate213.setPoint(x3d.doubleToFloat([23.38233,0.075,25.58327,23.24821,0.075,24.92529,24.18991,0.075,25.41865,24.05579,0.075,24.76067]))

IndexedFaceSet212.setCoord(Coordinate213)

Shape209.setGeometry(IndexedFaceSet212)

Scene12.addChild(Shape209)
Shape214 = x3d.Shape()
Appearance215 = x3d.Appearance()
Material216 = x3d.Material()
Material216.setAmbientIntensity(0)
Material216.setDiffuseColor(x3d.doubleToFloat([0.5,0.5,0.5]))
Material216.setShininess(0)

Appearance215.setMaterial(Material216)

Shape214.setAppearance(Appearance215)
IndexedFaceSet217 = x3d.IndexedFaceSet()
IndexedFaceSet217.setSolid(False)
IndexedFaceSet217.setTexCoordIndex([3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1])
IndexedFaceSet217.setCoordIndex([3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1])
Coordinate218 = x3d.Coordinate()
Coordinate218.setPoint(x3d.doubleToFloat([23.38557,0.075,23.48583,23.77956,0.075,23.40552,23.52169,0.075,24.15361,23.91567,0.075,24.0733,23.6578,0.075,24.82138,24.05179,0.075,24.74108]))

IndexedFaceSet217.setCoord(Coordinate218)

Shape214.setGeometry(IndexedFaceSet217)

Scene12.addChild(Shape214)
Shape219 = x3d.Shape()
Appearance220 = x3d.Appearance()
Material221 = x3d.Material()
Material221.setAmbientIntensity(0)
Material221.setDiffuseColor(x3d.doubleToFloat([0.5,0.5,0.5]))
Material221.setShininess(0)

Appearance220.setMaterial(Material221)

Shape219.setAppearance(Appearance220)
IndexedFaceSet222 = x3d.IndexedFaceSet()
IndexedFaceSet222.setSolid(False)
IndexedFaceSet222.setTexCoordIndex([3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1])
IndexedFaceSet222.setCoordIndex([3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1])
Coordinate223 = x3d.Coordinate()
Coordinate223.setPoint(x3d.doubleToFloat([22.97199,0.075,23.57013,23.36597,0.075,23.48982,23.1081,0.075,24.23791,23.50209,0.075,24.1576,23.24422,0.075,24.90569,23.63821,0.075,24.82538]))

IndexedFaceSet222.setCoord(Coordinate223)

Shape219.setGeometry(IndexedFaceSet222)

Scene12.addChild(Shape219)
Shape224 = x3d.Shape()
Appearance225 = x3d.Appearance()
Material226 = x3d.Material()
Material226.setAmbientIntensity(0)
Material226.setDiffuseColor(x3d.doubleToFloat([0.5,0.5,0.5]))
Material226.setShininess(0)

Appearance225.setMaterial(Material226)

Shape224.setAppearance(Appearance225)
IndexedFaceSet227 = x3d.IndexedFaceSet()
IndexedFaceSet227.setSolid(False)
IndexedFaceSet227.setTexCoordIndex([3,1,0,-1,3,0,2,-1])
IndexedFaceSet227.setCoordIndex([3,1,0,-1,3,0,2,-1])
Coordinate228 = x3d.Coordinate()
Coordinate228.setPoint(x3d.doubleToFloat([22.96799,0.075,23.55054,22.83387,0.075,22.89256,23.77556,0.075,23.38592,23.64144,0.075,22.72794]))

IndexedFaceSet227.setCoord(Coordinate228)

Shape224.setGeometry(IndexedFaceSet227)

Scene12.addChild(Shape224)
Shape229 = x3d.Shape()
Appearance230 = x3d.Appearance()
Material231 = x3d.Material()
Material231.setAmbientIntensity(0)
Material231.setDiffuseColor(x3d.doubleToFloat([0.5,0.5,0.5]))
Material231.setShininess(0)

Appearance230.setMaterial(Material231)

Shape229.setAppearance(Appearance230)
IndexedFaceSet232 = x3d.IndexedFaceSet()
IndexedFaceSet232.setSolid(False)
IndexedFaceSet232.setTexCoordIndex([3,1,0,-1,3,0,2,-1])
IndexedFaceSet232.setCoordIndex([3,1,0,-1,3,0,2,-1])
Coordinate233 = x3d.Coordinate()
Coordinate233.setPoint(x3d.doubleToFloat([22.82988,0.075,22.87296,22.69576,0.075,22.21498,23.63745,0.075,22.70835,23.50333,0.075,22.05037]))

IndexedFaceSet232.setCoord(Coordinate233)

Shape229.setGeometry(IndexedFaceSet232)

Scene12.addChild(Shape229)
Shape234 = x3d.Shape()
Appearance235 = x3d.Appearance()
Material236 = x3d.Material()
Material236.setAmbientIntensity(0)
Material236.setDiffuseColor(x3d.doubleToFloat([0.5,0.5,0.5]))
Material236.setShininess(0)

Appearance235.setMaterial(Material236)

Shape234.setAppearance(Appearance235)
IndexedFaceSet237 = x3d.IndexedFaceSet()
IndexedFaceSet237.setSolid(False)
IndexedFaceSet237.setTexCoordIndex([3,1,0,-1,3,0,2,-1])
IndexedFaceSet237.setCoordIndex([3,1,0,-1,3,0,2,-1])
Coordinate238 = x3d.Coordinate()
Coordinate238.setPoint(x3d.doubleToFloat([22.83311,0.075,20.77552,23.2271,0.075,20.69522,23.10535,0.075,22.11108,23.49934,0.075,22.03077]))

IndexedFaceSet237.setCoord(Coordinate238)

Shape234.setGeometry(IndexedFaceSet237)

Scene12.addChild(Shape234)
Shape239 = x3d.Shape()
Appearance240 = x3d.Appearance()
Material241 = x3d.Material()
Material241.setAmbientIntensity(0)
Material241.setDiffuseColor(x3d.doubleToFloat([0.5,0.5,0.5]))
Material241.setShininess(0)

Appearance240.setMaterial(Material241)

Shape239.setAppearance(Appearance240)
IndexedFaceSet242 = x3d.IndexedFaceSet()
IndexedFaceSet242.setSolid(False)
IndexedFaceSet242.setTexCoordIndex([3,1,0,-1,3,0,2,-1])
IndexedFaceSet242.setCoordIndex([3,1,0,-1,3,0,2,-1])
Coordinate243 = x3d.Coordinate()
Coordinate243.setPoint(x3d.doubleToFloat([22.41953,0.075,20.85983,22.81352,0.075,20.77952,22.69176,0.075,22.19538,23.08575,0.075,22.11507]))

IndexedFaceSet242.setCoord(Coordinate243)

Shape239.setGeometry(IndexedFaceSet242)

Scene12.addChild(Shape239)
Shape244 = x3d.Shape()
Appearance245 = x3d.Appearance()
Material246 = x3d.Material()
Material246.setAmbientIntensity(0)
Material246.setDiffuseColor(x3d.doubleToFloat([0.5,0.5,0.5]))
Material246.setShininess(0)

Appearance245.setMaterial(Material246)

Shape244.setAppearance(Appearance245)
IndexedFaceSet247 = x3d.IndexedFaceSet()
IndexedFaceSet247.setSolid(False)
IndexedFaceSet247.setTexCoordIndex([3,1,0,-1,3,0,2,-1])
IndexedFaceSet247.setCoordIndex([3,1,0,-1,3,0,2,-1])
Coordinate248 = x3d.Coordinate()
Coordinate248.setPoint(x3d.doubleToFloat([22.41554,0.075,20.84023,22.28142,0.075,20.18225,23.22311,0.075,20.67562,23.08899,0.075,20.01764]))

IndexedFaceSet247.setCoord(Coordinate248)

Shape244.setGeometry(IndexedFaceSet247)

Scene12.addChild(Shape244)
Shape249 = x3d.Shape()
Appearance250 = x3d.Appearance()
Material251 = x3d.Material()
Material251.setAmbientIntensity(0)
Material251.setDiffuseColor(x3d.doubleToFloat([0.5,0.5,0.5]))
Material251.setShininess(0)

Appearance250.setMaterial(Material251)

Shape249.setAppearance(Appearance250)
IndexedFaceSet252 = x3d.IndexedFaceSet()
IndexedFaceSet252.setSolid(False)
IndexedFaceSet252.setTexCoordIndex([3,1,0,-1,3,0,2,-1])
IndexedFaceSet252.setCoordIndex([3,1,0,-1,3,0,2,-1])
Coordinate253 = x3d.Coordinate()
Coordinate253.setPoint(x3d.doubleToFloat([22.27742,0.075,20.16265,22.1433,0.075,19.50467,23.08499,0.075,19.99804,22.95087,0.075,19.34006]))

IndexedFaceSet252.setCoord(Coordinate253)

Shape249.setGeometry(IndexedFaceSet252)

Scene12.addChild(Shape249)
Shape254 = x3d.Shape()
Appearance255 = x3d.Appearance()
Material256 = x3d.Material()
Material256.setAmbientIntensity(0)
Material256.setDiffuseColor(x3d.doubleToFloat([0.5,0.5,0.5]))
Material256.setShininess(0)

Appearance255.setMaterial(Material256)

Shape254.setAppearance(Appearance255)
IndexedFaceSet257 = x3d.IndexedFaceSet()
IndexedFaceSet257.setSolid(False)
IndexedFaceSet257.setTexCoordIndex([3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1])
IndexedFaceSet257.setCoordIndex([3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1])
Coordinate258 = x3d.Coordinate()
Coordinate258.setPoint(x3d.doubleToFloat([22.28066,0.075,18.06522,22.67465,0.075,17.98491,22.41678,0.075,18.733,22.81076,0.075,18.65269,22.55289,0.075,19.40077,22.94688,0.075,19.32047]))

IndexedFaceSet257.setCoord(Coordinate258)

Shape254.setGeometry(IndexedFaceSet257)

Scene12.addChild(Shape254)
Shape259 = x3d.Shape()
Appearance260 = x3d.Appearance()
Material261 = x3d.Material()
Material261.setAmbientIntensity(0)
Material261.setDiffuseColor(x3d.doubleToFloat([0.5,0.5,0.5]))
Material261.setShininess(0)

Appearance260.setMaterial(Material261)

Shape259.setAppearance(Appearance260)
IndexedFaceSet262 = x3d.IndexedFaceSet()
IndexedFaceSet262.setSolid(False)
IndexedFaceSet262.setTexCoordIndex([3,1,0,-1,3,0,2,-1])
IndexedFaceSet262.setCoordIndex([3,1,0,-1,3,0,2,-1])
Coordinate263 = x3d.Coordinate()
Coordinate263.setPoint(x3d.doubleToFloat([21.86707,0.075,18.14952,22.26106,0.075,18.06921,22.13931,0.075,19.48508,22.53329,0.075,19.40477]))

IndexedFaceSet262.setCoord(Coordinate263)

Shape259.setGeometry(IndexedFaceSet262)

Scene12.addChild(Shape259)
Shape264 = x3d.Shape()
Appearance265 = x3d.Appearance()
Material266 = x3d.Material()
Material266.setAmbientIntensity(0)
Material266.setDiffuseColor(x3d.doubleToFloat([0.5,0.5,0.5]))
Material266.setShininess(0)

Appearance265.setMaterial(Material266)

Shape264.setAppearance(Appearance265)
IndexedFaceSet267 = x3d.IndexedFaceSet()
IndexedFaceSet267.setSolid(False)
IndexedFaceSet267.setTexCoordIndex([3,1,0,-1,3,0,2,-1])
IndexedFaceSet267.setCoordIndex([3,1,0,-1,3,0,2,-1])
Coordinate268 = x3d.Coordinate()
Coordinate268.setPoint(x3d.doubleToFloat([24.0573,0.075,28.99474,24.19142,0.075,29.65272,23.24973,0.075,29.15935,23.38385,0.075,29.81733]))

IndexedFaceSet267.setCoord(Coordinate268)

Shape264.setGeometry(IndexedFaceSet267)

Scene12.addChild(Shape264)
Shape269 = x3d.Shape()
Appearance270 = x3d.Appearance()
Material271 = x3d.Material()
Material271.setAmbientIntensity(0)
Material271.setDiffuseColor(x3d.doubleToFloat([0.5,0.5,0.5]))
Material271.setShininess(0)

Appearance270.setMaterial(Material271)

Shape269.setAppearance(Appearance270)
IndexedFaceSet272 = x3d.IndexedFaceSet()
IndexedFaceSet272.setSolid(False)
IndexedFaceSet272.setTexCoordIndex([4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1])
IndexedFaceSet272.setCoordIndex([4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1])
Coordinate273 = x3d.Coordinate()
Coordinate273.setPoint(x3d.doubleToFloat([24.05331,0.075,28.97514,23.85631,0.075,29.0153,23.65932,0.075,29.05545,23.91719,0.075,28.30736,23.7202,0.075,28.34752,23.5232,0.075,28.38767,23.78107,0.075,27.63959,23.58408,0.075,27.67974,23.38709,0.075,27.71989]))

IndexedFaceSet272.setCoord(Coordinate273)

Shape269.setGeometry(IndexedFaceSet272)

Scene12.addChild(Shape269)
Shape274 = x3d.Shape()
Appearance275 = x3d.Appearance()
Material276 = x3d.Material()
Material276.setAmbientIntensity(0)
Material276.setDiffuseColor(x3d.doubleToFloat([0.5,0.5,0.5]))
Material276.setShininess(0)

Appearance275.setMaterial(Material276)

Shape274.setAppearance(Appearance275)
IndexedFaceSet277 = x3d.IndexedFaceSet()
IndexedFaceSet277.setSolid(False)
IndexedFaceSet277.setTexCoordIndex([3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1])
IndexedFaceSet277.setCoordIndex([3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1])
Coordinate278 = x3d.Coordinate()
Coordinate278.setPoint(x3d.doubleToFloat([23.63972,0.075,29.05944,23.24574,0.075,29.13975,23.50361,0.075,28.39167,23.10962,0.075,28.47198,23.36749,0.075,27.72389,22.9735,0.075,27.8042]))

IndexedFaceSet277.setCoord(Coordinate278)

Shape274.setGeometry(IndexedFaceSet277)

Scene12.addChild(Shape274)
Shape279 = x3d.Shape()
Appearance280 = x3d.Appearance()
Material281 = x3d.Material()
Material281.setAmbientIntensity(0)
Material281.setDiffuseColor(x3d.doubleToFloat([0.5,0.5,0.5]))
Material281.setShininess(0)

Appearance280.setMaterial(Material281)

Shape279.setAppearance(Appearance280)
IndexedFaceSet282 = x3d.IndexedFaceSet()
IndexedFaceSet282.setSolid(False)
IndexedFaceSet282.setTexCoordIndex([3,1,0,-1,3,0,2,-1])
IndexedFaceSet282.setCoordIndex([3,1,0,-1,3,0,2,-1])
Coordinate283 = x3d.Coordinate()
Coordinate283.setPoint(x3d.doubleToFloat([23.64296,0.075,26.96201,23.77708,0.075,27.61999,22.83539,0.075,27.12662,22.96951,0.075,27.7846]))

IndexedFaceSet282.setCoord(Coordinate283)

Shape279.setGeometry(IndexedFaceSet282)

Scene12.addChild(Shape279)
Shape284 = x3d.Shape()
Appearance285 = x3d.Appearance()
Material286 = x3d.Material()
Material286.setAmbientIntensity(0)
Material286.setDiffuseColor(x3d.doubleToFloat([0.5,0.5,0.5]))
Material286.setShininess(0)

Appearance285.setMaterial(Material286)

Shape284.setAppearance(Appearance285)
IndexedFaceSet287 = x3d.IndexedFaceSet()
IndexedFaceSet287.setSolid(False)
IndexedFaceSet287.setTexCoordIndex([3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1])
IndexedFaceSet287.setCoordIndex([3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1])
Coordinate288 = x3d.Coordinate()
Coordinate288.setPoint(x3d.doubleToFloat([22.83139,0.075,27.10702,22.69728,0.075,26.44904,23.23518,0.075,27.02472,23.10106,0.075,26.36674,23.63897,0.075,26.94241,23.50485,0.075,26.28443]))

IndexedFaceSet287.setCoord(Coordinate288)

Shape284.setGeometry(IndexedFaceSet287)

Scene12.addChild(Shape284)
Shape289 = x3d.Shape()
Appearance290 = x3d.Appearance()
Material291 = x3d.Material()
Material291.setAmbientIntensity(0)
Material291.setDiffuseColor(x3d.doubleToFloat([0.5,0.5,0.5]))
Material291.setShininess(0)

Appearance290.setMaterial(Material291)

Shape289.setAppearance(Appearance290)
IndexedFaceSet292 = x3d.IndexedFaceSet()
IndexedFaceSet292.setSolid(False)
IndexedFaceSet292.setTexCoordIndex([3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1])
IndexedFaceSet292.setCoordIndex([3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1])
Coordinate293 = x3d.Coordinate()
Coordinate293.setPoint(x3d.doubleToFloat([22.83463,0.075,25.00959,23.22862,0.075,24.92928,22.97075,0.075,25.67737,23.36473,0.075,25.59706,23.10686,0.075,26.34514,23.50085,0.075,26.26484]))

IndexedFaceSet292.setCoord(Coordinate293)

Shape289.setGeometry(IndexedFaceSet292)

Scene12.addChild(Shape289)
Shape294 = x3d.Shape()
Appearance295 = x3d.Appearance()
Material296 = x3d.Material()
Material296.setAmbientIntensity(0)
Material296.setDiffuseColor(x3d.doubleToFloat([0.5,0.5,0.5]))
Material296.setShininess(0)

Appearance295.setMaterial(Material296)

Shape294.setAppearance(Appearance295)
IndexedFaceSet297 = x3d.IndexedFaceSet()
IndexedFaceSet297.setSolid(False)
IndexedFaceSet297.setTexCoordIndex([3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1])
IndexedFaceSet297.setCoordIndex([3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1])
Coordinate298 = x3d.Coordinate()
Coordinate298.setPoint(x3d.doubleToFloat([23.08727,0.075,26.34914,22.69328,0.075,26.42945,22.95115,0.075,25.68136,22.55716,0.075,25.76167,22.81503,0.075,25.01358,22.42105,0.075,25.09389]))

IndexedFaceSet297.setCoord(Coordinate298)

Shape294.setGeometry(IndexedFaceSet297)

Scene12.addChild(Shape294)
Shape299 = x3d.Shape()
Appearance300 = x3d.Appearance()
Material301 = x3d.Material()
Material301.setAmbientIntensity(0)
Material301.setDiffuseColor(x3d.doubleToFloat([0.5,0.5,0.5]))
Material301.setShininess(0)

Appearance300.setMaterial(Material301)

Shape299.setAppearance(Appearance300)
IndexedFaceSet302 = x3d.IndexedFaceSet()
IndexedFaceSet302.setSolid(False)
IndexedFaceSet302.setTexCoordIndex([3,1,0,-1,3,0,2,-1])
IndexedFaceSet302.setCoordIndex([3,1,0,-1,3,0,2,-1])
Coordinate303 = x3d.Coordinate()
Coordinate303.setPoint(x3d.doubleToFloat([23.0905,0.075,24.2517,23.22462,0.075,24.90968,22.28293,0.075,24.41632,22.41705,0.075,25.07429]))

IndexedFaceSet302.setCoord(Coordinate303)

Shape299.setGeometry(IndexedFaceSet302)

Scene12.addChild(Shape299)
Shape304 = x3d.Shape()
Appearance305 = x3d.Appearance()
Material306 = x3d.Material()
Material306.setAmbientIntensity(0)
Material306.setDiffuseColor(x3d.doubleToFloat([0.5,0.5,0.5]))
Material306.setShininess(0)

Appearance305.setMaterial(Material306)

Shape304.setAppearance(Appearance305)
IndexedFaceSet307 = x3d.IndexedFaceSet()
IndexedFaceSet307.setSolid(False)
IndexedFaceSet307.setTexCoordIndex([3,1,0,-1,3,0,2,-1])
IndexedFaceSet307.setCoordIndex([3,1,0,-1,3,0,2,-1])
Coordinate308 = x3d.Coordinate()
Coordinate308.setPoint(x3d.doubleToFloat([22.27894,0.075,24.39672,22.14482,0.075,23.73874,23.08651,0.075,24.23211,22.95239,0.075,23.57413]))

IndexedFaceSet307.setCoord(Coordinate308)

Shape304.setGeometry(IndexedFaceSet307)

Scene12.addChild(Shape304)
Shape309 = x3d.Shape()
Appearance310 = x3d.Appearance()
Material311 = x3d.Material()
Material311.setAmbientIntensity(0)
Material311.setDiffuseColor(x3d.doubleToFloat([0.5,0.5,0.5]))
Material311.setShininess(0)

Appearance310.setMaterial(Material311)

Shape309.setAppearance(Appearance310)
IndexedFaceSet312 = x3d.IndexedFaceSet()
IndexedFaceSet312.setSolid(False)
IndexedFaceSet312.setTexCoordIndex([3,1,0,-1,3,0,2,-1])
IndexedFaceSet312.setCoordIndex([3,1,0,-1,3,0,2,-1])
Coordinate313 = x3d.Coordinate()
Coordinate313.setPoint(x3d.doubleToFloat([22.28218,0.075,22.29928,22.67616,0.075,22.21897,22.55441,0.075,23.63484,22.94839,0.075,23.55453]))

IndexedFaceSet312.setCoord(Coordinate313)

Shape309.setGeometry(IndexedFaceSet312)

Scene12.addChild(Shape309)
Shape314 = x3d.Shape()
Appearance315 = x3d.Appearance()
Material316 = x3d.Material()
Material316.setAmbientIntensity(0)
Material316.setDiffuseColor(x3d.doubleToFloat([0.5,0.5,0.5]))
Material316.setShininess(0)

Appearance315.setMaterial(Material316)

Shape314.setAppearance(Appearance315)
IndexedFaceSet317 = x3d.IndexedFaceSet()
IndexedFaceSet317.setSolid(False)
IndexedFaceSet317.setTexCoordIndex([4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1])
IndexedFaceSet317.setCoordIndex([4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1])
Coordinate318 = x3d.Coordinate()
Coordinate318.setPoint(x3d.doubleToFloat([22.53481,0.075,23.63883,22.33782,0.075,23.67899,22.14083,0.075,23.71914,22.39869,0.075,22.97105,22.2017,0.075,23.01121,22.00471,0.075,23.05136,22.26258,0.075,22.30328,22.06558,0.075,22.34343,21.86859,0.075,22.38358]))

IndexedFaceSet317.setCoord(Coordinate318)

Shape314.setGeometry(IndexedFaceSet317)

Scene12.addChild(Shape314)
Shape319 = x3d.Shape()
Appearance320 = x3d.Appearance()
Material321 = x3d.Material()
Material321.setAmbientIntensity(0)
Material321.setDiffuseColor(x3d.doubleToFloat([0.5,0.5,0.5]))
Material321.setShininess(0)

Appearance320.setMaterial(Material321)

Shape319.setAppearance(Appearance320)
IndexedFaceSet322 = x3d.IndexedFaceSet()
IndexedFaceSet322.setSolid(False)
IndexedFaceSet322.setTexCoordIndex([3,1,0,-1,3,0,2,-1])
IndexedFaceSet322.setCoordIndex([3,1,0,-1,3,0,2,-1])
Coordinate323 = x3d.Coordinate()
Coordinate323.setPoint(x3d.doubleToFloat([22.53805,0.075,21.5414,22.67217,0.075,22.19938,21.73048,0.075,21.70601,21.8646,0.075,22.36399]))

IndexedFaceSet322.setCoord(Coordinate323)

Shape319.setGeometry(IndexedFaceSet322)

Scene12.addChild(Shape319)
Shape324 = x3d.Shape()
Appearance325 = x3d.Appearance()
Material326 = x3d.Material()
Material326.setAmbientIntensity(0)
Material326.setDiffuseColor(x3d.doubleToFloat([0.5,0.5,0.5]))
Material326.setShininess(0)

Appearance325.setMaterial(Material326)

Shape324.setAppearance(Appearance325)
IndexedFaceSet327 = x3d.IndexedFaceSet()
IndexedFaceSet327.setSolid(False)
IndexedFaceSet327.setTexCoordIndex([3,1,0,-1,3,0,2,-1])
IndexedFaceSet327.setCoordIndex([3,1,0,-1,3,0,2,-1])
Coordinate328 = x3d.Coordinate()
Coordinate328.setPoint(x3d.doubleToFloat([21.72648,0.075,21.68641,21.59236,0.075,21.02843,22.53405,0.075,21.5218,22.39993,0.075,20.86382]))

IndexedFaceSet327.setCoord(Coordinate328)

Shape324.setGeometry(IndexedFaceSet327)

Scene12.addChild(Shape324)
Shape329 = x3d.Shape()
Appearance330 = x3d.Appearance()
Material331 = x3d.Material()
Material331.setAmbientIntensity(0)
Material331.setDiffuseColor(x3d.doubleToFloat([0.5,0.5,0.5]))
Material331.setShininess(0)

Appearance330.setMaterial(Material331)

Shape329.setAppearance(Appearance330)
IndexedFaceSet332 = x3d.IndexedFaceSet()
IndexedFaceSet332.setSolid(False)
IndexedFaceSet332.setTexCoordIndex([3,1,0,-1,3,0,2,-1])
IndexedFaceSet332.setCoordIndex([3,1,0,-1,3,0,2,-1])
Coordinate333 = x3d.Coordinate()
Coordinate333.setPoint(x3d.doubleToFloat([21.72972,0.075,19.58898,22.12371,0.075,19.50867,22.00195,0.075,20.92453,22.39594,0.075,20.84422]))

IndexedFaceSet332.setCoord(Coordinate333)

Shape329.setGeometry(IndexedFaceSet332)

Scene12.addChild(Shape329)
Shape334 = x3d.Shape()
Appearance335 = x3d.Appearance()
Material336 = x3d.Material()
Material336.setAmbientIntensity(0)
Material336.setDiffuseColor(x3d.doubleToFloat([0.5,0.5,0.5]))
Material336.setShininess(0)

Appearance335.setMaterial(Material336)

Shape334.setAppearance(Appearance335)
IndexedFaceSet337 = x3d.IndexedFaceSet()
IndexedFaceSet337.setSolid(False)
IndexedFaceSet337.setTexCoordIndex([3,1,0,-1,3,0,2,-1])
IndexedFaceSet337.setCoordIndex([3,1,0,-1,3,0,2,-1])
Coordinate338 = x3d.Coordinate()
Coordinate338.setPoint(x3d.doubleToFloat([21.98236,0.075,20.92853,21.58837,0.075,21.00883,21.71012,0.075,19.59297,21.31614,0.075,19.67328]))

IndexedFaceSet337.setCoord(Coordinate338)

Shape334.setGeometry(IndexedFaceSet337)

Scene12.addChild(Shape334)
Shape339 = x3d.Shape()
Appearance340 = x3d.Appearance()
Material341 = x3d.Material()
Material341.setAmbientIntensity(0)
Material341.setDiffuseColor(x3d.doubleToFloat([0.5,0.5,0.5]))
Material341.setShininess(0)

Appearance340.setMaterial(Material341)

Shape339.setAppearance(Appearance340)
IndexedFaceSet342 = x3d.IndexedFaceSet()
IndexedFaceSet342.setSolid(False)
IndexedFaceSet342.setTexCoordIndex([3,1,0,-1,3,0,2,-1])
IndexedFaceSet342.setCoordIndex([3,1,0,-1,3,0,2,-1])
Coordinate343 = x3d.Coordinate()
Coordinate343.setPoint(x3d.doubleToFloat([21.31214,0.075,19.65368,21.17802,0.075,18.9957,22.11971,0.075,19.48907,21.98559,0.075,18.83109]))

IndexedFaceSet342.setCoord(Coordinate343)

Shape339.setGeometry(IndexedFaceSet342)

Scene12.addChild(Shape339)
Shape344 = x3d.Shape()
Appearance345 = x3d.Appearance()
Material346 = x3d.Material()
Material346.setAmbientIntensity(0)
Material346.setDiffuseColor(x3d.doubleToFloat([0.5,0.5,0.5]))
Material346.setShininess(0)

Appearance345.setMaterial(Material346)

Shape344.setAppearance(Appearance345)
IndexedFaceSet347 = x3d.IndexedFaceSet()
IndexedFaceSet347.setSolid(False)
IndexedFaceSet347.setTexCoordIndex([3,1,0,-1,3,0,2,-1])
IndexedFaceSet347.setCoordIndex([3,1,0,-1,3,0,2,-1])
Coordinate348 = x3d.Coordinate()
Coordinate348.setPoint(x3d.doubleToFloat([21.17403,0.075,18.97611,21.03991,0.075,18.31813,21.9816,0.075,18.81149,21.84748,0.075,18.15351]))

IndexedFaceSet347.setCoord(Coordinate348)

Shape344.setGeometry(IndexedFaceSet347)

Scene12.addChild(Shape344)
Shape349 = x3d.Shape()
Appearance350 = x3d.Appearance()
Material351 = x3d.Material()
Material351.setAmbientIntensity(0)
Material351.setDiffuseColor(x3d.doubleToFloat([0.5,0.5,0.5]))
Material351.setShininess(0)

Appearance350.setMaterial(Material351)

Shape349.setAppearance(Appearance350)
IndexedFaceSet352 = x3d.IndexedFaceSet()
IndexedFaceSet352.setSolid(False)
IndexedFaceSet352.setTexCoordIndex([3,1,0,-1,3,0,2,-1])
IndexedFaceSet352.setCoordIndex([3,1,0,-1,3,0,2,-1])
Coordinate353 = x3d.Coordinate()
Coordinate353.setPoint(x3d.doubleToFloat([21.17726,0.075,16.87867,21.57125,0.075,16.79836,21.4495,0.075,18.21423,21.84348,0.075,18.13392]))

IndexedFaceSet352.setCoord(Coordinate353)

Shape349.setGeometry(IndexedFaceSet352)

Scene12.addChild(Shape349)
Shape354 = x3d.Shape()
Appearance355 = x3d.Appearance()
Material356 = x3d.Material()
Material356.setAmbientIntensity(0)
Material356.setDiffuseColor(x3d.doubleToFloat([0.5,0.5,0.5]))
Material356.setShininess(0)

Appearance355.setMaterial(Material356)

Shape354.setAppearance(Appearance355)
IndexedFaceSet357 = x3d.IndexedFaceSet()
IndexedFaceSet357.setSolid(False)
IndexedFaceSet357.setTexCoordIndex([4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1])
IndexedFaceSet357.setCoordIndex([4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1])
Coordinate358 = x3d.Coordinate()
Coordinate358.setPoint(x3d.doubleToFloat([20.76368,0.075,16.96297,20.96067,0.075,16.92282,21.15767,0.075,16.88267,20.8998,0.075,17.63075,21.09679,0.075,17.5906,21.29378,0.075,17.55044,21.03591,0.075,18.29853,21.23291,0.075,18.25838,21.4299,0.075,18.21822]))

IndexedFaceSet357.setCoord(Coordinate358)

Shape354.setGeometry(IndexedFaceSet357)

Scene12.addChild(Shape354)
Shape359 = x3d.Shape()
Appearance360 = x3d.Appearance()
Material361 = x3d.Material()
Material361.setAmbientIntensity(0)
Material361.setDiffuseColor(x3d.doubleToFloat([0.5,0.5,0.5]))
Material361.setShininess(0)

Appearance360.setMaterial(Material361)

Shape359.setAppearance(Appearance360)
IndexedFaceSet362 = x3d.IndexedFaceSet()
IndexedFaceSet362.setSolid(False)
IndexedFaceSet362.setTexCoordIndex([3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1])
IndexedFaceSet362.setCoordIndex([3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1])
Coordinate363 = x3d.Coordinate()
Coordinate363.setPoint(x3d.doubleToFloat([19.65877,0.075,11.54236,20.05275,0.075,11.46205,19.79488,0.075,12.21014,20.18887,0.075,12.12983,19.931,0.075,12.87792,20.32499,0.075,12.79761]))

IndexedFaceSet362.setCoord(Coordinate363)

Shape359.setGeometry(IndexedFaceSet362)

Scene12.addChild(Shape359)
Shape364 = x3d.Shape()
Appearance365 = x3d.Appearance()
Material366 = x3d.Material()
Material366.setAmbientIntensity(0)
Material366.setDiffuseColor(x3d.doubleToFloat([0.5,0.5,0.5]))
Material366.setShininess(0)

Appearance365.setMaterial(Material366)

Shape364.setAppearance(Appearance365)
IndexedFaceSet367 = x3d.IndexedFaceSet()
IndexedFaceSet367.setSolid(False)
IndexedFaceSet367.setTexCoordIndex([3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1])
IndexedFaceSet367.setCoordIndex([3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1])
Coordinate368 = x3d.Coordinate()
Coordinate368.setPoint(x3d.doubleToFloat([19.65477,0.075,11.52277,19.52065,0.075,10.86479,20.05856,0.075,11.44046,19.92444,0.075,10.78248,20.46234,0.075,11.35815,20.32822,0.075,10.70017]))

IndexedFaceSet367.setCoord(Coordinate368)

Shape364.setGeometry(IndexedFaceSet367)

Scene12.addChild(Shape364)
Shape369 = x3d.Shape()
Appearance370 = x3d.Appearance()
Material371 = x3d.Material()
Material371.setAmbientIntensity(0)
Material371.setDiffuseColor(x3d.doubleToFloat([0.5,0.5,0.5]))
Material371.setShininess(0)

Appearance370.setMaterial(Material371)

Shape369.setAppearance(Appearance370)
IndexedFaceSet372 = x3d.IndexedFaceSet()
IndexedFaceSet372.setSolid(False)
IndexedFaceSet372.setTexCoordIndex([3,1,0,-1,3,0,2,-1])
IndexedFaceSet372.setCoordIndex([3,1,0,-1,3,0,2,-1])
Coordinate373 = x3d.Coordinate()
Coordinate373.setPoint(x3d.doubleToFloat([20.19011,0.075,10.0226,20.32423,0.075,10.68058,19.38254,0.075,10.18721,19.51666,0.075,10.84519]))

IndexedFaceSet372.setCoord(Coordinate373)

Shape369.setGeometry(IndexedFaceSet372)

Scene12.addChild(Shape369)
Shape374 = x3d.Shape()
Appearance375 = x3d.Appearance()
Material376 = x3d.Material()
Material376.setAmbientIntensity(0)
Material376.setDiffuseColor(x3d.doubleToFloat([0.5,0.5,0.5]))
Material376.setShininess(0)

Appearance375.setMaterial(Material376)

Shape374.setAppearance(Appearance375)
IndexedFaceSet377 = x3d.IndexedFaceSet()
IndexedFaceSet377.setSolid(False)
IndexedFaceSet377.setTexCoordIndex([3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1])
IndexedFaceSet377.setCoordIndex([3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1])
Coordinate378 = x3d.Coordinate()
Coordinate378.setPoint(x3d.doubleToFloat([19.5199,0.075,8.747754,19.91388,0.075,8.667445,19.65601,0.075,9.415531,20.05,0.075,9.335223,19.79213,0.075,10.08331,20.18612,0.075,10.003]))

IndexedFaceSet377.setCoord(Coordinate378)

Shape374.setGeometry(IndexedFaceSet377)

Scene12.addChild(Shape374)
Shape379 = x3d.Shape()
Appearance380 = x3d.Appearance()
Material381 = x3d.Material()
Material381.setAmbientIntensity(0)
Material381.setDiffuseColor(x3d.doubleToFloat([0.5,0.5,0.5]))
Material381.setShininess(0)

Appearance380.setMaterial(Material381)

Shape379.setAppearance(Appearance380)
IndexedFaceSet382 = x3d.IndexedFaceSet()
IndexedFaceSet382.setSolid(False)
IndexedFaceSet382.setTexCoordIndex([4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1])
IndexedFaceSet382.setCoordIndex([4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1])
Coordinate383 = x3d.Coordinate()
Coordinate383.setPoint(x3d.doubleToFloat([19.77253,0.075,10.0873,19.57554,0.075,10.12746,19.37854,0.075,10.16761,19.63642,0.075,9.419526,19.43942,0.075,9.459681,19.24243,0.075,9.499835,19.5003,0.075,8.751748,19.3033,0.075,8.791903,19.10631,0.075,8.832057]))

IndexedFaceSet382.setCoord(Coordinate383)

Shape379.setGeometry(IndexedFaceSet382)

Scene12.addChild(Shape379)
Shape384 = x3d.Shape()
Appearance385 = x3d.Appearance()
Material386 = x3d.Material()
Material386.setAmbientIntensity(0)
Material386.setDiffuseColor(x3d.doubleToFloat([0.5,0.5,0.5]))
Material386.setShininess(0)

Appearance385.setMaterial(Material386)

Shape384.setAppearance(Appearance385)
IndexedFaceSet387 = x3d.IndexedFaceSet()
IndexedFaceSet387.setSolid(False)
IndexedFaceSet387.setTexCoordIndex([4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1])
IndexedFaceSet387.setCoordIndex([4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1])
Coordinate388 = x3d.Coordinate()
Coordinate388.setPoint(x3d.doubleToFloat([19.77577,0.075,7.989869,19.84283,0.075,8.318858,19.90989,0.075,8.647848,18.9682,0.075,8.15448,19.03526,0.075,8.48347,19.10232,0.075,8.81246]))

IndexedFaceSet387.setCoord(Coordinate388)

Shape384.setGeometry(IndexedFaceSet387)

Scene12.addChild(Shape384)
Shape389 = x3d.Shape()
Appearance390 = x3d.Appearance()
Material391 = x3d.Material()
Material391.setAmbientIntensity(0)
Material391.setDiffuseColor(x3d.doubleToFloat([0.5,0.5,0.5]))
Material391.setShininess(0)

Appearance390.setMaterial(Material391)

Shape389.setAppearance(Appearance390)
IndexedFaceSet392 = x3d.IndexedFaceSet()
IndexedFaceSet392.setSolid(False)
IndexedFaceSet392.setTexCoordIndex([3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1])
IndexedFaceSet392.setCoordIndex([3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1])
Coordinate393 = x3d.Coordinate()
Coordinate393.setPoint(x3d.doubleToFloat([18.9642,0.075,8.134883,18.83008,0.075,7.476904,19.36799,0.075,8.052578,19.23387,0.075,7.394598,19.77177,0.075,7.970272,19.63765,0.075,7.312293]))

IndexedFaceSet392.setCoord(Coordinate393)

Shape389.setGeometry(IndexedFaceSet392)

Scene12.addChild(Shape389)
Shape394 = x3d.Shape()
Appearance395 = x3d.Appearance()
Material396 = x3d.Material()
Material396.setAmbientIntensity(0)
Material396.setDiffuseColor(x3d.doubleToFloat([0.5,0.5,0.5]))
Material396.setShininess(0)

Appearance395.setMaterial(Material396)

Shape394.setAppearance(Appearance395)
IndexedFaceSet397 = x3d.IndexedFaceSet()
IndexedFaceSet397.setSolid(False)
IndexedFaceSet397.setTexCoordIndex([4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1])
IndexedFaceSet397.setCoordIndex([4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1])
Coordinate398 = x3d.Coordinate()
Coordinate398.setPoint(x3d.doubleToFloat([18.96744,0.075,6.037448,19.16443,0.075,5.997294,19.36143,0.075,5.957139,19.10356,0.075,6.705226,19.30055,0.075,6.665071,19.49754,0.075,6.624918,19.23967,0.075,7.373004,19.43667,0.075,7.33285,19.63366,0.075,7.292696]))

IndexedFaceSet397.setCoord(Coordinate398)

Shape394.setGeometry(IndexedFaceSet397)

Scene12.addChild(Shape394)
Shape399 = x3d.Shape()
Appearance400 = x3d.Appearance()
Material401 = x3d.Material()
Material401.setAmbientIntensity(0)
Material401.setDiffuseColor(x3d.doubleToFloat([0.5,0.5,0.5]))
Material401.setShininess(0)

Appearance400.setMaterial(Material401)

Shape399.setAppearance(Appearance400)
IndexedFaceSet402 = x3d.IndexedFaceSet()
IndexedFaceSet402.setSolid(False)
IndexedFaceSet402.setTexCoordIndex([3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1])
IndexedFaceSet402.setCoordIndex([3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1])
Coordinate403 = x3d.Coordinate()
Coordinate403.setPoint(x3d.doubleToFloat([18.55386,0.075,6.121751,18.94784,0.075,6.041442,18.68997,0.075,6.789529,19.08396,0.075,6.70922,18.82609,0.075,7.457307,19.22008,0.075,7.376998]))

IndexedFaceSet402.setCoord(Coordinate403)

Shape399.setGeometry(IndexedFaceSet402)

Scene12.addChild(Shape399)
Shape404 = x3d.Shape()
Appearance405 = x3d.Appearance()
Material406 = x3d.Material()
Material406.setAmbientIntensity(0)
Material406.setDiffuseColor(x3d.doubleToFloat([0.5,0.5,0.5]))
Material406.setShininess(0)

Appearance405.setMaterial(Material406)

Shape404.setAppearance(Appearance405)
IndexedFaceSet407 = x3d.IndexedFaceSet()
IndexedFaceSet407.setSolid(False)
IndexedFaceSet407.setTexCoordIndex([3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1])
IndexedFaceSet407.setCoordIndex([3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1])
Coordinate408 = x3d.Coordinate()
Coordinate408.setPoint(x3d.doubleToFloat([18.54986,0.075,6.102154,18.41574,0.075,5.444175,18.95365,0.075,6.019848,18.81953,0.075,5.361869,19.35743,0.075,5.937542,19.22331,0.075,5.279563]))

IndexedFaceSet407.setCoord(Coordinate408)

Shape404.setGeometry(IndexedFaceSet407)

Scene12.addChild(Shape404)
Shape409 = x3d.Shape()
Appearance410 = x3d.Appearance()
Material411 = x3d.Material()
Material411.setAmbientIntensity(0)
Material411.setDiffuseColor(x3d.doubleToFloat([0.5,0.5,0.5]))
Material411.setShininess(0)

Appearance410.setMaterial(Material411)

Shape409.setAppearance(Appearance410)
IndexedFaceSet412 = x3d.IndexedFaceSet()
IndexedFaceSet412.setSolid(False)
IndexedFaceSet412.setTexCoordIndex([3,1,0,-1,3,0,2,-1])
IndexedFaceSet412.setCoordIndex([3,1,0,-1,3,0,2,-1])
Coordinate413 = x3d.Coordinate()
Coordinate413.setPoint(x3d.doubleToFloat([22.83615,0.075,29.24365,23.23013,0.075,29.16334,23.10838,0.075,30.57921,23.50237,0.075,30.4989]))

IndexedFaceSet412.setCoord(Coordinate413)

Shape409.setGeometry(IndexedFaceSet412)

Scene12.addChild(Shape409)
Shape414 = x3d.Shape()
Appearance415 = x3d.Appearance()
Material416 = x3d.Material()
Material416.setAmbientIntensity(0)
Material416.setDiffuseColor(x3d.doubleToFloat([0.5,0.5,0.5]))
Material416.setShininess(0)

Appearance415.setMaterial(Material416)

Shape414.setAppearance(Appearance415)
IndexedFaceSet417 = x3d.IndexedFaceSet()
IndexedFaceSet417.setSolid(False)
IndexedFaceSet417.setTexCoordIndex([4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1])
IndexedFaceSet417.setCoordIndex([4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1])
Coordinate418 = x3d.Coordinate()
Coordinate418.setPoint(x3d.doubleToFloat([23.08878,0.075,30.5832,22.89179,0.075,30.62336,22.6948,0.075,30.66351,22.95267,0.075,29.91542,22.75567,0.075,29.95558,22.55868,0.075,29.99573,22.81655,0.075,29.24765,22.61956,0.075,29.2878,22.42256,0.075,29.32796]))

IndexedFaceSet417.setCoord(Coordinate418)

Shape414.setGeometry(IndexedFaceSet417)

Scene12.addChild(Shape414)
Shape419 = x3d.Shape()
Appearance420 = x3d.Appearance()
Material421 = x3d.Material()
Material421.setAmbientIntensity(0)
Material421.setDiffuseColor(x3d.doubleToFloat([0.5,0.5,0.5]))
Material421.setShininess(0)

Appearance420.setMaterial(Material421)

Shape419.setAppearance(Appearance420)
IndexedFaceSet422 = x3d.IndexedFaceSet()
IndexedFaceSet422.setSolid(False)
IndexedFaceSet422.setTexCoordIndex([3,1,0,-1,3,0,2,-1])
IndexedFaceSet422.setCoordIndex([3,1,0,-1,3,0,2,-1])
Coordinate423 = x3d.Coordinate()
Coordinate423.setPoint(x3d.doubleToFloat([23.09202,0.075,28.48577,23.22614,0.075,29.14375,22.28445,0.075,28.65038,22.41857,0.075,29.30836]))

IndexedFaceSet422.setCoord(Coordinate423)

Shape419.setGeometry(IndexedFaceSet422)

Scene12.addChild(Shape419)
Shape424 = x3d.Shape()
Appearance425 = x3d.Appearance()
Material426 = x3d.Material()
Material426.setAmbientIntensity(0)
Material426.setDiffuseColor(x3d.doubleToFloat([0.5,0.5,0.5]))
Material426.setShininess(0)

Appearance425.setMaterial(Material426)

Shape424.setAppearance(Appearance425)
IndexedFaceSet427 = x3d.IndexedFaceSet()
IndexedFaceSet427.setSolid(False)
IndexedFaceSet427.setTexCoordIndex([3,1,0,-1,3,0,2,-1])
IndexedFaceSet427.setCoordIndex([3,1,0,-1,3,0,2,-1])
Coordinate428 = x3d.Coordinate()
Coordinate428.setPoint(x3d.doubleToFloat([22.28045,0.075,28.63078,22.14634,0.075,27.9728,23.08803,0.075,28.46617,22.95391,0.075,27.80819]))

IndexedFaceSet427.setCoord(Coordinate428)

Shape424.setGeometry(IndexedFaceSet427)

Scene12.addChild(Shape424)
Shape429 = x3d.Shape()
Appearance430 = x3d.Appearance()
Material431 = x3d.Material()
Material431.setAmbientIntensity(0)
Material431.setDiffuseColor(x3d.doubleToFloat([0.5,0.5,0.5]))
Material431.setShininess(0)

Appearance430.setMaterial(Material431)

Shape429.setAppearance(Appearance430)
IndexedFaceSet432 = x3d.IndexedFaceSet()
IndexedFaceSet432.setSolid(False)
IndexedFaceSet432.setTexCoordIndex([3,1,0,-1,3,0,2,-1])
IndexedFaceSet432.setCoordIndex([3,1,0,-1,3,0,2,-1])
Coordinate433 = x3d.Coordinate()
Coordinate433.setPoint(x3d.doubleToFloat([22.94991,0.075,27.7886,22.55593,0.075,27.8689,22.67768,0.075,26.45304,22.28369,0.075,26.53335]))

IndexedFaceSet432.setCoord(Coordinate433)

Shape429.setGeometry(IndexedFaceSet432)

Scene12.addChild(Shape429)
Shape434 = x3d.Shape()
Appearance435 = x3d.Appearance()
Material436 = x3d.Material()
Material436.setAmbientIntensity(0)
Material436.setDiffuseColor(x3d.doubleToFloat([0.5,0.5,0.5]))
Material436.setShininess(0)

Appearance435.setMaterial(Material436)

Shape434.setAppearance(Appearance435)
IndexedFaceSet437 = x3d.IndexedFaceSet()
IndexedFaceSet437.setSolid(False)
IndexedFaceSet437.setTexCoordIndex([4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1])
IndexedFaceSet437.setCoordIndex([4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1])
Coordinate438 = x3d.Coordinate()
Coordinate438.setPoint(x3d.doubleToFloat([21.87011,0.075,26.61765,22.0671,0.075,26.5775,22.26409,0.075,26.53734,22.00622,0.075,27.28543,22.20322,0.075,27.24527,22.40021,0.075,27.20512,22.14234,0.075,27.95321,22.33933,0.075,27.91305,22.53633,0.075,27.8729]))

IndexedFaceSet437.setCoord(Coordinate438)

Shape434.setGeometry(IndexedFaceSet437)

Scene12.addChild(Shape434)
Shape439 = x3d.Shape()
Appearance440 = x3d.Appearance()
Material441 = x3d.Material()
Material441.setAmbientIntensity(0)
Material441.setDiffuseColor(x3d.doubleToFloat([0.5,0.5,0.5]))
Material441.setShininess(0)

Appearance440.setMaterial(Material441)

Shape439.setAppearance(Appearance440)
IndexedFaceSet442 = x3d.IndexedFaceSet()
IndexedFaceSet442.setSolid(False)
IndexedFaceSet442.setTexCoordIndex([3,1,0,-1,3,0,2,-1])
IndexedFaceSet442.setCoordIndex([3,1,0,-1,3,0,2,-1])
Coordinate443 = x3d.Coordinate()
Coordinate443.setPoint(x3d.doubleToFloat([22.53956,0.075,25.77546,22.67368,0.075,26.43344,21.73199,0.075,25.94007,21.86611,0.075,26.59805]))

IndexedFaceSet442.setCoord(Coordinate443)

Shape439.setGeometry(IndexedFaceSet442)

Scene12.addChild(Shape439)
Shape444 = x3d.Shape()
Appearance445 = x3d.Appearance()
Material446 = x3d.Material()
Material446.setAmbientIntensity(0)
Material446.setDiffuseColor(x3d.doubleToFloat([0.5,0.5,0.5]))
Material446.setShininess(0)

Appearance445.setMaterial(Material446)

Shape444.setAppearance(Appearance445)
IndexedFaceSet447 = x3d.IndexedFaceSet()
IndexedFaceSet447.setSolid(False)
IndexedFaceSet447.setTexCoordIndex([4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1])
IndexedFaceSet447.setCoordIndex([4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1])
Coordinate448 = x3d.Coordinate()
Coordinate448.setPoint(x3d.doubleToFloat([21.728,0.075,25.92048,21.66094,0.075,25.59149,21.59388,0.075,25.2625,22.53557,0.075,25.75587,22.46851,0.075,25.42688,22.40145,0.075,25.09789]))

IndexedFaceSet447.setCoord(Coordinate448)

Shape444.setGeometry(IndexedFaceSet447)

Scene12.addChild(Shape444)
Shape449 = x3d.Shape()
Appearance450 = x3d.Appearance()
Material451 = x3d.Material()
Material451.setAmbientIntensity(0)
Material451.setDiffuseColor(x3d.doubleToFloat([0.5,0.5,0.5]))
Material451.setShininess(0)

Appearance450.setMaterial(Material451)

Shape449.setAppearance(Appearance450)
IndexedFaceSet452 = x3d.IndexedFaceSet()
IndexedFaceSet452.setSolid(False)
IndexedFaceSet452.setTexCoordIndex([4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1])
IndexedFaceSet452.setCoordIndex([4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1])
Coordinate453 = x3d.Coordinate()
Coordinate453.setPoint(x3d.doubleToFloat([22.39746,0.075,25.07829,22.20046,0.075,25.11844,22.00347,0.075,25.1586,22.26134,0.075,24.41051,22.06435,0.075,24.45066,21.86735,0.075,24.49082,22.12522,0.075,23.74273,21.92823,0.075,23.78289,21.73124,0.075,23.82304]))

IndexedFaceSet452.setCoord(Coordinate453)

Shape449.setGeometry(IndexedFaceSet452)

Scene12.addChild(Shape449)
Shape454 = x3d.Shape()
Appearance455 = x3d.Appearance()
Material456 = x3d.Material()
Material456.setAmbientIntensity(0)
Material456.setDiffuseColor(x3d.doubleToFloat([0.5,0.5,0.5]))
Material456.setShininess(0)

Appearance455.setMaterial(Material456)

Shape454.setAppearance(Appearance455)
IndexedFaceSet457 = x3d.IndexedFaceSet()
IndexedFaceSet457.setSolid(False)
IndexedFaceSet457.setTexCoordIndex([3,1,0,-1,3,0,2,-1])
IndexedFaceSet457.setCoordIndex([3,1,0,-1,3,0,2,-1])
Coordinate458 = x3d.Coordinate()
Coordinate458.setPoint(x3d.doubleToFloat([21.31765,0.075,23.90734,21.71164,0.075,23.82704,21.58988,0.075,25.2429,21.98387,0.075,25.16259]))

IndexedFaceSet457.setCoord(Coordinate458)

Shape454.setGeometry(IndexedFaceSet457)

Scene12.addChild(Shape454)
Shape459 = x3d.Shape()
Appearance460 = x3d.Appearance()
Material461 = x3d.Material()
Material461.setAmbientIntensity(0)
Material461.setDiffuseColor(x3d.doubleToFloat([0.5,0.5,0.5]))
Material461.setShininess(0)

Appearance460.setMaterial(Material461)

Shape459.setAppearance(Appearance460)
IndexedFaceSet462 = x3d.IndexedFaceSet()
IndexedFaceSet462.setSolid(False)
IndexedFaceSet462.setTexCoordIndex([3,1,0,-1,3,0,2,-1])
IndexedFaceSet462.setCoordIndex([3,1,0,-1,3,0,2,-1])
Coordinate463 = x3d.Coordinate()
Coordinate463.setPoint(x3d.doubleToFloat([21.31366,0.075,23.88775,21.17954,0.075,23.22977,22.12123,0.075,23.72313,21.98711,0.075,23.06516]))

IndexedFaceSet462.setCoord(Coordinate463)

Shape459.setGeometry(IndexedFaceSet462)

Scene12.addChild(Shape459)
Shape464 = x3d.Shape()
Appearance465 = x3d.Appearance()
Material466 = x3d.Material()
Material466.setAmbientIntensity(0)
Material466.setDiffuseColor(x3d.doubleToFloat([0.5,0.5,0.5]))
Material466.setShininess(0)

Appearance465.setMaterial(Material466)

Shape464.setAppearance(Appearance465)
IndexedFaceSet467 = x3d.IndexedFaceSet()
IndexedFaceSet467.setSolid(False)
IndexedFaceSet467.setTexCoordIndex([3,1,0,-1,3,0,2,-1])
IndexedFaceSet467.setCoordIndex([3,1,0,-1,3,0,2,-1])
Coordinate468 = x3d.Coordinate()
Coordinate468.setPoint(x3d.doubleToFloat([21.17554,0.075,23.21017,21.04142,0.075,22.55219,21.98311,0.075,23.04556,21.84899,0.075,22.38758]))

IndexedFaceSet467.setCoord(Coordinate468)

Shape464.setGeometry(IndexedFaceSet467)

Scene12.addChild(Shape464)
Shape469 = x3d.Shape()
Appearance470 = x3d.Appearance()
Material471 = x3d.Material()
Material471.setAmbientIntensity(0)
Material471.setDiffuseColor(x3d.doubleToFloat([0.5,0.5,0.5]))
Material471.setShininess(0)

Appearance470.setMaterial(Material471)

Shape469.setAppearance(Appearance470)
IndexedFaceSet472 = x3d.IndexedFaceSet()
IndexedFaceSet472.setSolid(False)
IndexedFaceSet472.setTexCoordIndex([3,1,0,-1,3,0,2,-1])
IndexedFaceSet472.setCoordIndex([3,1,0,-1,3,0,2,-1])
Coordinate473 = x3d.Coordinate()
Coordinate473.setPoint(x3d.doubleToFloat([21.845,0.075,22.36798,21.45101,0.075,22.44829,21.57277,0.075,21.03243,21.17878,0.075,21.11274]))

IndexedFaceSet472.setCoord(Coordinate473)

Shape469.setGeometry(IndexedFaceSet472)

Scene12.addChild(Shape469)
Shape474 = x3d.Shape()
Appearance475 = x3d.Appearance()
Material476 = x3d.Material()
Material476.setAmbientIntensity(0)
Material476.setDiffuseColor(x3d.doubleToFloat([0.5,0.5,0.5]))
Material476.setShininess(0)

Appearance475.setMaterial(Material476)

Shape474.setAppearance(Appearance475)
IndexedFaceSet477 = x3d.IndexedFaceSet()
IndexedFaceSet477.setSolid(False)
IndexedFaceSet477.setTexCoordIndex([3,1,0,-1,3,0,2,-1])
IndexedFaceSet477.setCoordIndex([3,1,0,-1,3,0,2,-1])
Coordinate478 = x3d.Coordinate()
Coordinate478.setPoint(x3d.doubleToFloat([20.7652,0.075,21.19704,21.15918,0.075,21.11673,21.03743,0.075,22.53259,21.43142,0.075,22.45229]))

IndexedFaceSet477.setCoord(Coordinate478)

Shape474.setGeometry(IndexedFaceSet477)

Scene12.addChild(Shape474)
Shape479 = x3d.Shape()
Appearance480 = x3d.Appearance()
Material481 = x3d.Material()
Material481.setAmbientIntensity(0)
Material481.setDiffuseColor(x3d.doubleToFloat([0.5,0.5,0.5]))
Material481.setShininess(0)

Appearance480.setMaterial(Material481)

Shape479.setAppearance(Appearance480)
IndexedFaceSet482 = x3d.IndexedFaceSet()
IndexedFaceSet482.setSolid(False)
IndexedFaceSet482.setTexCoordIndex([3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1])
IndexedFaceSet482.setCoordIndex([3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1])
Coordinate483 = x3d.Coordinate()
Coordinate483.setPoint(x3d.doubleToFloat([20.7612,0.075,21.17744,20.62708,0.075,20.51946,21.16499,0.075,21.09514,21.03087,0.075,20.43716,21.56877,0.075,21.01283,21.43465,0.075,20.35485]))

IndexedFaceSet482.setCoord(Coordinate483)

Shape479.setGeometry(IndexedFaceSet482)

Scene12.addChild(Shape479)
Shape484 = x3d.Shape()
Appearance485 = x3d.Appearance()
Material486 = x3d.Material()
Material486.setAmbientIntensity(0)
Material486.setDiffuseColor(x3d.doubleToFloat([0.5,0.5,0.5]))
Material486.setShininess(0)

Appearance485.setMaterial(Material486)

Shape484.setAppearance(Appearance485)
IndexedFaceSet487 = x3d.IndexedFaceSet()
IndexedFaceSet487.setSolid(False)
IndexedFaceSet487.setTexCoordIndex([3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1])
IndexedFaceSet487.setCoordIndex([3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1])
Coordinate488 = x3d.Coordinate()
Coordinate488.setPoint(x3d.doubleToFloat([20.62309,0.075,20.49986,20.48897,0.075,19.84189,21.02687,0.075,20.41756,20.89275,0.075,19.75958,21.43066,0.075,20.33525,21.29654,0.075,19.67727]))

IndexedFaceSet487.setCoord(Coordinate488)

Shape484.setGeometry(IndexedFaceSet487)

Scene12.addChild(Shape484)
Shape489 = x3d.Shape()
Appearance490 = x3d.Appearance()
Material491 = x3d.Material()
Material491.setAmbientIntensity(0)
Material491.setDiffuseColor(x3d.doubleToFloat([0.5,0.5,0.5]))
Material491.setShininess(0)

Appearance490.setMaterial(Material491)

Shape489.setAppearance(Appearance490)
IndexedFaceSet492 = x3d.IndexedFaceSet()
IndexedFaceSet492.setSolid(False)
IndexedFaceSet492.setTexCoordIndex([4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1])
IndexedFaceSet492.setCoordIndex([4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1])
Coordinate493 = x3d.Coordinate()
Coordinate493.setPoint(x3d.doubleToFloat([20.62632,0.075,18.40243,20.82332,0.075,18.36228,21.02031,0.075,18.32212,20.76244,0.075,19.07021,20.95943,0.075,19.03005,21.15643,0.075,18.9899,20.89856,0.075,19.73799,21.09555,0.075,19.69783,21.29254,0.075,19.65768]))

IndexedFaceSet492.setCoord(Coordinate493)

Shape489.setGeometry(IndexedFaceSet492)

Scene12.addChild(Shape489)
Shape494 = x3d.Shape()
Appearance495 = x3d.Appearance()
Material496 = x3d.Material()
Material496.setAmbientIntensity(0)
Material496.setDiffuseColor(x3d.doubleToFloat([0.5,0.5,0.5]))
Material496.setShininess(0)

Appearance495.setMaterial(Material496)

Shape494.setAppearance(Appearance495)
IndexedFaceSet497 = x3d.IndexedFaceSet()
IndexedFaceSet497.setSolid(False)
IndexedFaceSet497.setTexCoordIndex([4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1])
IndexedFaceSet497.setCoordIndex([4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1])
Coordinate498 = x3d.Coordinate()
Coordinate498.setPoint(x3d.doubleToFloat([20.21274,0.075,18.48673,20.40973,0.075,18.44658,20.60673,0.075,18.40642,20.34886,0.075,19.15451,20.54585,0.075,19.11436,20.74284,0.075,19.0742,20.48497,0.075,19.82229,20.68197,0.075,19.78214,20.87896,0.075,19.74198]))

IndexedFaceSet497.setCoord(Coordinate498)

Shape494.setGeometry(IndexedFaceSet497)

Scene12.addChild(Shape494)
Shape499 = x3d.Shape()
Appearance500 = x3d.Appearance()
Material501 = x3d.Material()
Material501.setAmbientIntensity(0)
Material501.setDiffuseColor(x3d.doubleToFloat([0.5,0.5,0.5]))
Material501.setShininess(0)

Appearance500.setMaterial(Material501)

Shape499.setAppearance(Appearance500)
IndexedFaceSet502 = x3d.IndexedFaceSet()
IndexedFaceSet502.setSolid(False)
IndexedFaceSet502.setTexCoordIndex([3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1])
IndexedFaceSet502.setCoordIndex([3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1])
Coordinate503 = x3d.Coordinate()
Coordinate503.setPoint(x3d.doubleToFloat([20.20874,0.075,18.46714,20.07463,0.075,17.80916,20.61253,0.075,18.38483,20.47841,0.075,17.72685,21.01632,0.075,18.30252,20.8822,0.075,17.64454]))

IndexedFaceSet502.setCoord(Coordinate503)

Shape499.setGeometry(IndexedFaceSet502)

Scene12.addChild(Shape499)
Shape504 = x3d.Shape()
Appearance505 = x3d.Appearance()
Material506 = x3d.Material()
Material506.setAmbientIntensity(0)
Material506.setDiffuseColor(x3d.doubleToFloat([0.5,0.5,0.5]))
Material506.setShininess(0)

Appearance505.setMaterial(Material506)

Shape504.setAppearance(Appearance505)
IndexedFaceSet507 = x3d.IndexedFaceSet()
IndexedFaceSet507.setSolid(False)
IndexedFaceSet507.setTexCoordIndex([3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1])
IndexedFaceSet507.setCoordIndex([3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1])
Coordinate508 = x3d.Coordinate()
Coordinate508.setPoint(x3d.doubleToFloat([20.74408,0.075,16.96697,20.8782,0.075,17.62495,20.3403,0.075,17.04927,20.47442,0.075,17.70725,19.93651,0.075,17.13158,20.07063,0.075,17.78956]))

IndexedFaceSet507.setCoord(Coordinate508)

Shape504.setGeometry(IndexedFaceSet507)

Scene12.addChild(Shape504)
Shape509 = x3d.Shape()
Appearance510 = x3d.Appearance()
Material511 = x3d.Material()
Material511.setAmbientIntensity(0)
Material511.setDiffuseColor(x3d.doubleToFloat([0.5,0.5,0.5]))
Material511.setShininess(0)

Appearance510.setMaterial(Material511)

Shape509.setAppearance(Appearance510)
IndexedFaceSet512 = x3d.IndexedFaceSet()
IndexedFaceSet512.setSolid(False)
IndexedFaceSet512.setTexCoordIndex([3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1])
IndexedFaceSet512.setCoordIndex([3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1])
Coordinate513 = x3d.Coordinate()
Coordinate513.setPoint(x3d.doubleToFloat([20.74009,0.075,16.94737,20.3461,0.075,17.02768,20.60397,0.075,16.27959,20.20998,0.075,16.3599,20.46785,0.075,15.61182,20.07387,0.075,15.69212]))

IndexedFaceSet512.setCoord(Coordinate513)

Shape509.setGeometry(IndexedFaceSet512)

Scene12.addChild(Shape509)
Shape514 = x3d.Shape()
Appearance515 = x3d.Appearance()
Material516 = x3d.Material()
Material516.setAmbientIntensity(0)
Material516.setDiffuseColor(x3d.doubleToFloat([0.5,0.5,0.5]))
Material516.setShininess(0)

Appearance515.setMaterial(Material516)

Shape514.setAppearance(Appearance515)
IndexedFaceSet517 = x3d.IndexedFaceSet()
IndexedFaceSet517.setSolid(False)
IndexedFaceSet517.setTexCoordIndex([4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1])
IndexedFaceSet517.setCoordIndex([4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1])
Coordinate518 = x3d.Coordinate()
Coordinate518.setPoint(x3d.doubleToFloat([19.66028,0.075,15.77643,19.85728,0.075,15.73627,20.05427,0.075,15.69612,19.7964,0.075,16.4442,19.99339,0.075,16.40405,20.19039,0.075,16.3639,19.93252,0.075,17.11198,20.12951,0.075,17.07183,20.3265,0.075,17.03168]))

IndexedFaceSet517.setCoord(Coordinate518)

Shape514.setGeometry(IndexedFaceSet517)

Scene12.addChild(Shape514)
Shape519 = x3d.Shape()
Appearance520 = x3d.Appearance()
Material521 = x3d.Material()
Material521.setAmbientIntensity(0)
Material521.setDiffuseColor(x3d.doubleToFloat([0.5,0.5,0.5]))
Material521.setShininess(0)

Appearance520.setMaterial(Material521)

Shape519.setAppearance(Appearance520)
IndexedFaceSet522 = x3d.IndexedFaceSet()
IndexedFaceSet522.setSolid(False)
IndexedFaceSet522.setTexCoordIndex([4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1])
IndexedFaceSet522.setCoordIndex([4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1])
Coordinate523 = x3d.Coordinate()
Coordinate523.setPoint(x3d.doubleToFloat([19.65629,0.075,15.75683,19.58923,0.075,15.42784,19.52217,0.075,15.09885,20.06007,0.075,15.67452,19.99302,0.075,15.34553,19.92595,0.075,15.01655,20.46386,0.075,15.59222,20.3968,0.075,15.26323,20.32974,0.075,14.93424]))

IndexedFaceSet522.setCoord(Coordinate523)

Shape519.setGeometry(IndexedFaceSet522)

Scene12.addChild(Shape519)
Shape524 = x3d.Shape()
Appearance525 = x3d.Appearance()
Material526 = x3d.Material()
Material526.setAmbientIntensity(0)
Material526.setDiffuseColor(x3d.doubleToFloat([0.5,0.5,0.5]))
Material526.setShininess(0)

Appearance525.setMaterial(Material526)

Shape524.setAppearance(Appearance525)
IndexedFaceSet527 = x3d.IndexedFaceSet()
IndexedFaceSet527.setSolid(False)
IndexedFaceSet527.setTexCoordIndex([3,1,0,-1,3,0,2,-1])
IndexedFaceSet527.setCoordIndex([3,1,0,-1,3,0,2,-1])
Coordinate528 = x3d.Coordinate()
Coordinate528.setPoint(x3d.doubleToFloat([20.19163,0.075,14.25666,20.32575,0.075,14.91464,19.38406,0.075,14.42127,19.51818,0.075,15.07925]))

IndexedFaceSet527.setCoord(Coordinate528)

Shape524.setGeometry(IndexedFaceSet527)

Scene12.addChild(Shape524)
Shape529 = x3d.Shape()
Appearance530 = x3d.Appearance()
Material531 = x3d.Material()
Material531.setAmbientIntensity(0)
Material531.setDiffuseColor(x3d.doubleToFloat([0.5,0.5,0.5]))
Material531.setShininess(0)

Appearance530.setMaterial(Material531)

Shape529.setAppearance(Appearance530)
IndexedFaceSet532 = x3d.IndexedFaceSet()
IndexedFaceSet532.setSolid(False)
IndexedFaceSet532.setTexCoordIndex([3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1])
IndexedFaceSet532.setCoordIndex([3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1])
Coordinate533 = x3d.Coordinate()
Coordinate533.setPoint(x3d.doubleToFloat([19.52141,0.075,12.98182,19.9154,0.075,12.90151,19.65753,0.075,13.6496,20.05152,0.075,13.56929,19.79364,0.075,14.31737,20.18763,0.075,14.23707]))

IndexedFaceSet532.setCoord(Coordinate533)

Shape529.setGeometry(IndexedFaceSet532)

Scene12.addChild(Shape529)
Shape534 = x3d.Shape()
Appearance535 = x3d.Appearance()
Material536 = x3d.Material()
Material536.setAmbientIntensity(0)
Material536.setDiffuseColor(x3d.doubleToFloat([0.5,0.5,0.5]))
Material536.setShininess(0)

Appearance535.setMaterial(Material536)

Shape534.setAppearance(Appearance535)
IndexedFaceSet537 = x3d.IndexedFaceSet()
IndexedFaceSet537.setSolid(False)
IndexedFaceSet537.setTexCoordIndex([3,1,0,-1,3,0,2,-1])
IndexedFaceSet537.setCoordIndex([3,1,0,-1,3,0,2,-1])
Coordinate538 = x3d.Coordinate()
Coordinate538.setPoint(x3d.doubleToFloat([19.10783,0.075,13.06612,19.50181,0.075,12.98581,19.38006,0.075,14.40168,19.77405,0.075,14.32137]))

IndexedFaceSet537.setCoord(Coordinate538)

Shape534.setGeometry(IndexedFaceSet537)

Scene12.addChild(Shape534)
Shape539 = x3d.Shape()
Appearance540 = x3d.Appearance()
Material541 = x3d.Material()
Material541.setAmbientIntensity(0)
Material541.setDiffuseColor(x3d.doubleToFloat([0.5,0.5,0.5]))
Material541.setShininess(0)

Appearance540.setMaterial(Material541)

Shape539.setAppearance(Appearance540)
IndexedFaceSet542 = x3d.IndexedFaceSet()
IndexedFaceSet542.setSolid(False)
IndexedFaceSet542.setTexCoordIndex([3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1])
IndexedFaceSet542.setCoordIndex([3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1])
Coordinate543 = x3d.Coordinate()
Coordinate543.setPoint(x3d.doubleToFloat([19.10383,0.075,13.04652,18.96971,0.075,12.38855,19.50762,0.075,12.96422,19.3735,0.075,12.30624,19.9114,0.075,12.88191,19.77728,0.075,12.22393]))

IndexedFaceSet542.setCoord(Coordinate543)

Shape539.setGeometry(IndexedFaceSet542)

Scene12.addChild(Shape539)
Shape544 = x3d.Shape()
Appearance545 = x3d.Appearance()
Material546 = x3d.Material()
Material546.setAmbientIntensity(0)
Material546.setDiffuseColor(x3d.doubleToFloat([0.5,0.5,0.5]))
Material546.setShininess(0)

Appearance545.setMaterial(Material546)

Shape544.setAppearance(Appearance545)
IndexedFaceSet547 = x3d.IndexedFaceSet()
IndexedFaceSet547.setSolid(False)
IndexedFaceSet547.setTexCoordIndex([3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1])
IndexedFaceSet547.setCoordIndex([3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1])
Coordinate548 = x3d.Coordinate()
Coordinate548.setPoint(x3d.doubleToFloat([18.96572,0.075,12.36895,18.8316,0.075,11.71097,19.3695,0.075,12.28664,19.23538,0.075,11.62866,19.77329,0.075,12.20434,19.63917,0.075,11.54636]))

IndexedFaceSet547.setCoord(Coordinate548)

Shape544.setGeometry(IndexedFaceSet547)

Scene12.addChild(Shape544)
Shape549 = x3d.Shape()
Appearance550 = x3d.Appearance()
Material551 = x3d.Material()
Material551.setAmbientIntensity(0)
Material551.setDiffuseColor(x3d.doubleToFloat([0.5,0.5,0.5]))
Material551.setShininess(0)

Appearance550.setMaterial(Material551)

Shape549.setAppearance(Appearance550)
IndexedFaceSet552 = x3d.IndexedFaceSet()
IndexedFaceSet552.setSolid(False)
IndexedFaceSet552.setTexCoordIndex([3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1])
IndexedFaceSet552.setCoordIndex([3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1])
Coordinate553 = x3d.Coordinate()
Coordinate553.setPoint(x3d.doubleToFloat([18.96896,0.075,10.27151,19.36294,0.075,10.1912,19.10507,0.075,10.93929,19.49906,0.075,10.85898,19.24119,0.075,11.60707,19.63518,0.075,11.52676]))

IndexedFaceSet552.setCoord(Coordinate553)

Shape549.setGeometry(IndexedFaceSet552)

Scene12.addChild(Shape549)
Shape554 = x3d.Shape()
Appearance555 = x3d.Appearance()
Material556 = x3d.Material()
Material556.setAmbientIntensity(0)
Material556.setDiffuseColor(x3d.doubleToFloat([0.5,0.5,0.5]))
Material556.setShininess(0)

Appearance555.setMaterial(Material556)

Shape554.setAppearance(Appearance555)
IndexedFaceSet557 = x3d.IndexedFaceSet()
IndexedFaceSet557.setSolid(False)
IndexedFaceSet557.setTexCoordIndex([4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1])
IndexedFaceSet557.setCoordIndex([4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1])
Coordinate558 = x3d.Coordinate()
Coordinate558.setPoint(x3d.doubleToFloat([18.55537,0.075,10.35582,18.75237,0.075,10.31566,18.94936,0.075,10.27551,18.69149,0.075,11.02359,18.88848,0.075,10.98344,19.08548,0.075,10.94328,18.8276,0.075,11.69137,19.0246,0.075,11.65122,19.22159,0.075,11.61106]))

IndexedFaceSet557.setCoord(Coordinate558)

Shape554.setGeometry(IndexedFaceSet557)

Scene12.addChild(Shape554)
Shape559 = x3d.Shape()
Appearance560 = x3d.Appearance()
Material561 = x3d.Material()
Material561.setAmbientIntensity(0)
Material561.setDiffuseColor(x3d.doubleToFloat([0.5,0.5,0.5]))
Material561.setShininess(0)

Appearance560.setMaterial(Material561)

Shape559.setAppearance(Appearance560)
IndexedFaceSet562 = x3d.IndexedFaceSet()
IndexedFaceSet562.setSolid(False)
IndexedFaceSet562.setTexCoordIndex([4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1])
IndexedFaceSet562.setCoordIndex([4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1])
Coordinate563 = x3d.Coordinate()
Coordinate563.setPoint(x3d.doubleToFloat([19.22483,0.075,9.513628,19.29189,0.075,9.842617,19.35895,0.075,10.17161,18.82104,0.075,9.595933,18.8881,0.075,9.924923,18.95516,0.075,10.25391,18.41726,0.075,9.678239,18.48432,0.075,10.00723,18.55138,0.075,10.33622]))

IndexedFaceSet562.setCoord(Coordinate563)

Shape559.setGeometry(IndexedFaceSet562)

Scene12.addChild(Shape559)
Shape564 = x3d.Shape()
Appearance565 = x3d.Appearance()
Material566 = x3d.Material()
Material566.setAmbientIntensity(0)
Material566.setDiffuseColor(x3d.doubleToFloat([0.5,0.5,0.5]))
Material566.setShininess(0)

Appearance565.setMaterial(Material566)

Shape564.setAppearance(Appearance565)
IndexedFaceSet567 = x3d.IndexedFaceSet()
IndexedFaceSet567.setSolid(False)
IndexedFaceSet567.setTexCoordIndex([3,1,0,-1,3,0,2,-1])
IndexedFaceSet567.setCoordIndex([3,1,0,-1,3,0,2,-1])
Coordinate568 = x3d.Coordinate()
Coordinate568.setPoint(x3d.doubleToFloat([18.41326,0.075,9.658642,18.27914,0.075,9.000663,19.22083,0.075,9.494031,19.08671,0.075,8.836051]))

IndexedFaceSet567.setCoord(Coordinate568)

Shape564.setGeometry(IndexedFaceSet567)

Scene12.addChild(Shape564)
Shape569 = x3d.Shape()
Appearance570 = x3d.Appearance()
Material571 = x3d.Material()
Material571.setAmbientIntensity(0)
Material571.setDiffuseColor(x3d.doubleToFloat([0.5,0.5,0.5]))
Material571.setShininess(0)

Appearance570.setMaterial(Material571)

Shape569.setAppearance(Appearance570)
IndexedFaceSet572 = x3d.IndexedFaceSet()
IndexedFaceSet572.setSolid(False)
IndexedFaceSet572.setTexCoordIndex([3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1])
IndexedFaceSet572.setCoordIndex([3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1])
Coordinate573 = x3d.Coordinate()
Coordinate573.setPoint(x3d.doubleToFloat([19.08272,0.075,8.816454,18.68873,0.075,8.896763,18.9466,0.075,8.148676,18.55262,0.075,8.228985,18.81049,0.075,7.480898,18.4165,0.075,7.561207]))

IndexedFaceSet572.setCoord(Coordinate573)

Shape569.setGeometry(IndexedFaceSet572)

Scene12.addChild(Shape569)
Shape574 = x3d.Shape()
Appearance575 = x3d.Appearance()
Material576 = x3d.Material()
Material576.setAmbientIntensity(0)
Material576.setDiffuseColor(x3d.doubleToFloat([0.5,0.5,0.5]))
Material576.setShininess(0)

Appearance575.setMaterial(Material576)

Shape574.setAppearance(Appearance575)
IndexedFaceSet577 = x3d.IndexedFaceSet()
IndexedFaceSet577.setSolid(False)
IndexedFaceSet577.setTexCoordIndex([4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1])
IndexedFaceSet577.setCoordIndex([4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1])
Coordinate578 = x3d.Coordinate()
Coordinate578.setPoint(x3d.doubleToFloat([18.00292,0.075,7.64551,18.19991,0.075,7.605356,18.3969,0.075,7.565201,18.13903,0.075,8.313288,18.33603,0.075,8.273133,18.53302,0.075,8.23298,18.27515,0.075,8.981066,18.47214,0.075,8.940911,18.66914,0.075,8.900757]))

IndexedFaceSet577.setCoord(Coordinate578)

Shape574.setGeometry(IndexedFaceSet577)

Scene12.addChild(Shape574)
Shape579 = x3d.Shape()
Appearance580 = x3d.Appearance()
Material581 = x3d.Material()
Material581.setAmbientIntensity(0)
Material581.setDiffuseColor(x3d.doubleToFloat([0.5,0.5,0.5]))
Material581.setShininess(0)

Appearance580.setMaterial(Material581)

Shape579.setAppearance(Appearance580)
IndexedFaceSet582 = x3d.IndexedFaceSet()
IndexedFaceSet582.setSolid(False)
IndexedFaceSet582.setTexCoordIndex([3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1])
IndexedFaceSet582.setCoordIndex([3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1])
Coordinate583 = x3d.Coordinate()
Coordinate583.setPoint(x3d.doubleToFloat([17.99892,0.075,7.625913,17.8648,0.075,6.967933,18.40271,0.075,7.543607,18.26859,0.075,6.885628,18.80649,0.075,7.461301,18.67237,0.075,6.803322]))

IndexedFaceSet582.setCoord(Coordinate583)

Shape579.setGeometry(IndexedFaceSet582)

Scene12.addChild(Shape579)
Shape584 = x3d.Shape()
Appearance585 = x3d.Appearance()
Material586 = x3d.Material()
Material586.setAmbientIntensity(0)
Material586.setDiffuseColor(x3d.doubleToFloat([0.5,0.5,0.5]))
Material586.setShininess(0)

Appearance585.setMaterial(Material586)

Shape584.setAppearance(Appearance585)
IndexedFaceSet587 = x3d.IndexedFaceSet()
IndexedFaceSet587.setSolid(False)
IndexedFaceSet587.setTexCoordIndex([3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1])
IndexedFaceSet587.setCoordIndex([3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1])
Coordinate588 = x3d.Coordinate()
Coordinate588.setPoint(x3d.doubleToFloat([17.86081,0.075,6.948337,17.72669,0.075,6.290357,18.26459,0.075,6.866031,18.13047,0.075,6.208051,18.66838,0.075,6.783725,18.53426,0.075,6.125745]))

IndexedFaceSet587.setCoord(Coordinate588)

Shape584.setGeometry(IndexedFaceSet587)

Scene12.addChild(Shape584)
Shape589 = x3d.Shape()
Appearance590 = x3d.Appearance()
Material591 = x3d.Material()
Material591.setAmbientIntensity(0)
Material591.setDiffuseColor(x3d.doubleToFloat([0.5,0.5,0.5]))
Material591.setShininess(0)

Appearance590.setMaterial(Material591)

Shape589.setAppearance(Appearance590)
IndexedFaceSet592 = x3d.IndexedFaceSet()
IndexedFaceSet592.setSolid(False)
IndexedFaceSet592.setTexCoordIndex([3,1,0,-1,3,0,2,-1])
IndexedFaceSet592.setCoordIndex([3,1,0,-1,3,0,2,-1])
Coordinate593 = x3d.Coordinate()
Coordinate593.setPoint(x3d.doubleToFloat([17.86404,0.075,4.850901,18.25803,0.075,4.770593,18.13628,0.075,6.186457,18.53026,0.075,6.106149]))

IndexedFaceSet592.setCoord(Coordinate593)

Shape589.setGeometry(IndexedFaceSet592)

Scene12.addChild(Shape589)
Shape594 = x3d.Shape()
Appearance595 = x3d.Appearance()
Material596 = x3d.Material()
Material596.setAmbientIntensity(0)
Material596.setDiffuseColor(x3d.doubleToFloat([0.5,0.5,0.5]))
Material596.setShininess(0)

Appearance595.setMaterial(Material596)

Shape594.setAppearance(Appearance595)
IndexedFaceSet597 = x3d.IndexedFaceSet()
IndexedFaceSet597.setSolid(False)
IndexedFaceSet597.setTexCoordIndex([3,1,0,-1,3,0,2,-1])
IndexedFaceSet597.setCoordIndex([3,1,0,-1,3,0,2,-1])
Coordinate598 = x3d.Coordinate()
Coordinate598.setPoint(x3d.doubleToFloat([17.45046,0.075,4.935204,17.84445,0.075,4.854896,17.72269,0.075,6.27076,18.11668,0.075,6.190452]))

IndexedFaceSet597.setCoord(Coordinate598)

Shape594.setGeometry(IndexedFaceSet597)

Scene12.addChild(Shape594)
Shape599 = x3d.Shape()
Appearance600 = x3d.Appearance()
Material601 = x3d.Material()
Material601.setAmbientIntensity(0)
Material601.setDiffuseColor(x3d.doubleToFloat([0.5,0.5,0.5]))
Material601.setShininess(0)

Appearance600.setMaterial(Material601)

Shape599.setAppearance(Appearance600)
IndexedFaceSet602 = x3d.IndexedFaceSet()
IndexedFaceSet602.setSolid(False)
IndexedFaceSet602.setTexCoordIndex([3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1])
IndexedFaceSet602.setCoordIndex([3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1])
Coordinate603 = x3d.Coordinate()
Coordinate603.setPoint(x3d.doubleToFloat([17.44646,0.075,4.915607,17.31235,0.075,4.257627,17.85025,0.075,4.833302,17.71613,0.075,4.175322,18.25404,0.075,4.750996,18.11992,0.075,4.093016]))

IndexedFaceSet602.setCoord(Coordinate603)

Shape599.setGeometry(IndexedFaceSet602)

Scene12.addChild(Shape599)
Shape604 = x3d.Shape()
Appearance605 = x3d.Appearance()
Material606 = x3d.Material()
Material606.setAmbientIntensity(0)
Material606.setDiffuseColor(x3d.doubleToFloat([0.5,0.5,0.5]))
Material606.setShininess(0)

Appearance605.setMaterial(Material606)

Shape604.setAppearance(Appearance605)
IndexedFaceSet607 = x3d.IndexedFaceSet()
IndexedFaceSet607.setSolid(False)
IndexedFaceSet607.setTexCoordIndex([3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1])
IndexedFaceSet607.setCoordIndex([3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1])
Coordinate608 = x3d.Coordinate()
Coordinate608.setPoint(x3d.doubleToFloat([17.9818,0.075,3.41544,18.11592,0.075,4.073419,17.57802,0.075,3.497746,17.71214,0.075,4.155725,17.17423,0.075,3.580051,17.30835,0.075,4.23803]))

IndexedFaceSet607.setCoord(Coordinate608)

Shape604.setGeometry(IndexedFaceSet607)

Scene12.addChild(Shape604)
Shape609 = x3d.Shape()
Appearance610 = x3d.Appearance()
Material611 = x3d.Material()
Material611.setAmbientIntensity(0)
Material611.setDiffuseColor(x3d.doubleToFloat([0.5,0.5,0.5]))
Material611.setShininess(0)

Appearance610.setMaterial(Material611)

Shape609.setAppearance(Appearance610)
IndexedFaceSet612 = x3d.IndexedFaceSet()
IndexedFaceSet612.setSolid(False)
IndexedFaceSet612.setTexCoordIndex([3,1,0,-1,3,0,2,-1])
IndexedFaceSet612.setCoordIndex([3,1,0,-1,3,0,2,-1])
Coordinate613 = x3d.Coordinate()
Coordinate613.setPoint(x3d.doubleToFloat([22.40297,0.075,29.33195,22.53709,0.075,29.98993,21.5954,0.075,29.49656,21.72952,0.075,30.15454]))

IndexedFaceSet612.setCoord(Coordinate613)

Shape609.setGeometry(IndexedFaceSet612)

Scene12.addChild(Shape609)
Shape614 = x3d.Shape()
Appearance615 = x3d.Appearance()
Material616 = x3d.Material()
Material616.setAmbientIntensity(0)
Material616.setDiffuseColor(x3d.doubleToFloat([0.5,0.5,0.5]))
Material616.setShininess(0)

Appearance615.setMaterial(Material616)

Shape614.setAppearance(Appearance615)
IndexedFaceSet617 = x3d.IndexedFaceSet()
IndexedFaceSet617.setSolid(False)
IndexedFaceSet617.setTexCoordIndex([3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1])
IndexedFaceSet617.setCoordIndex([3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1])
Coordinate618 = x3d.Coordinate()
Coordinate618.setPoint(x3d.doubleToFloat([21.73275,0.075,28.05711,22.12674,0.075,27.9768,21.86887,0.075,28.72488,22.26286,0.075,28.64458,22.00498,0.075,29.39266,22.39897,0.075,29.31235]))

IndexedFaceSet617.setCoord(Coordinate618)

Shape614.setGeometry(IndexedFaceSet617)

Scene12.addChild(Shape614)
Shape619 = x3d.Shape()
Appearance620 = x3d.Appearance()
Material621 = x3d.Material()
Material621.setAmbientIntensity(0)
Material621.setDiffuseColor(x3d.doubleToFloat([0.5,0.5,0.5]))
Material621.setShininess(0)

Appearance620.setMaterial(Material621)

Shape619.setAppearance(Appearance620)
IndexedFaceSet622 = x3d.IndexedFaceSet()
IndexedFaceSet622.setSolid(False)
IndexedFaceSet622.setTexCoordIndex([3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1])
IndexedFaceSet622.setCoordIndex([3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1])
Coordinate623 = x3d.Coordinate()
Coordinate623.setPoint(x3d.doubleToFloat([21.98539,0.075,29.39666,21.5914,0.075,29.47696,21.84927,0.075,28.72888,21.45528,0.075,28.80919,21.71315,0.075,28.0611,21.31917,0.075,28.14141]))

IndexedFaceSet622.setCoord(Coordinate623)

Shape619.setGeometry(IndexedFaceSet622)

Scene12.addChild(Shape619)
Shape624 = x3d.Shape()
Appearance625 = x3d.Appearance()
Material626 = x3d.Material()
Material626.setAmbientIntensity(0)
Material626.setDiffuseColor(x3d.doubleToFloat([0.5,0.5,0.5]))
Material626.setShininess(0)

Appearance625.setMaterial(Material626)

Shape624.setAppearance(Appearance625)
IndexedFaceSet627 = x3d.IndexedFaceSet()
IndexedFaceSet627.setSolid(False)
IndexedFaceSet627.setTexCoordIndex([3,1,0,-1,3,0,2,-1])
IndexedFaceSet627.setCoordIndex([3,1,0,-1,3,0,2,-1])
Coordinate628 = x3d.Coordinate()
Coordinate628.setPoint(x3d.doubleToFloat([21.98862,0.075,27.29922,22.12274,0.075,27.9572,21.18105,0.075,27.46383,21.31517,0.075,28.12181]))

IndexedFaceSet627.setCoord(Coordinate628)

Shape624.setGeometry(IndexedFaceSet627)

Scene12.addChild(Shape624)
Shape629 = x3d.Shape()
Appearance630 = x3d.Appearance()
Material631 = x3d.Material()
Material631.setAmbientIntensity(0)
Material631.setDiffuseColor(x3d.doubleToFloat([0.5,0.5,0.5]))
Material631.setShininess(0)

Appearance630.setMaterial(Material631)

Shape629.setAppearance(Appearance630)
IndexedFaceSet632 = x3d.IndexedFaceSet()
IndexedFaceSet632.setSolid(False)
IndexedFaceSet632.setTexCoordIndex([3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1])
IndexedFaceSet632.setCoordIndex([3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1])
Coordinate633 = x3d.Coordinate()
Coordinate633.setPoint(x3d.doubleToFloat([21.17706,0.075,27.44423,21.04294,0.075,26.78626,21.58084,0.075,27.36193,21.44672,0.075,26.70395,21.98463,0.075,27.27962,21.85051,0.075,26.62164]))

IndexedFaceSet632.setCoord(Coordinate633)

Shape629.setGeometry(IndexedFaceSet632)

Scene12.addChild(Shape629)
Shape634 = x3d.Shape()
Appearance635 = x3d.Appearance()
Material636 = x3d.Material()
Material636.setAmbientIntensity(0)
Material636.setDiffuseColor(x3d.doubleToFloat([0.5,0.5,0.5]))
Material636.setShininess(0)

Appearance635.setMaterial(Material636)

Shape634.setAppearance(Appearance635)
IndexedFaceSet637 = x3d.IndexedFaceSet()
IndexedFaceSet637.setSolid(False)
IndexedFaceSet637.setTexCoordIndex([3,1,0,-1,3,0,2,-1])
IndexedFaceSet637.setCoordIndex([3,1,0,-1,3,0,2,-1])
Coordinate638 = x3d.Coordinate()
Coordinate638.setPoint(x3d.doubleToFloat([21.1803,0.075,25.3468,21.57428,0.075,25.26649,21.45253,0.075,26.68236,21.84652,0.075,26.60205]))

IndexedFaceSet637.setCoord(Coordinate638)

Shape634.setGeometry(IndexedFaceSet637)

Scene12.addChild(Shape634)
Shape639 = x3d.Shape()
Appearance640 = x3d.Appearance()
Material641 = x3d.Material()
Material641.setAmbientIntensity(0)
Material641.setDiffuseColor(x3d.doubleToFloat([0.5,0.5,0.5]))
Material641.setShininess(0)

Appearance640.setMaterial(Material641)

Shape639.setAppearance(Appearance640)
IndexedFaceSet642 = x3d.IndexedFaceSet()
IndexedFaceSet642.setSolid(False)
IndexedFaceSet642.setTexCoordIndex([4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1])
IndexedFaceSet642.setCoordIndex([4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1])
Coordinate643 = x3d.Coordinate()
Coordinate643.setPoint(x3d.doubleToFloat([21.43293,0.075,26.68635,21.23594,0.075,26.72651,21.03894,0.075,26.76666,21.29682,0.075,26.01857,21.09982,0.075,26.05873,20.90283,0.075,26.09888,21.1607,0.075,25.35079,20.96371,0.075,25.39095,20.76671,0.075,25.4311]))

IndexedFaceSet642.setCoord(Coordinate643)

Shape639.setGeometry(IndexedFaceSet642)

Scene12.addChild(Shape639)
Shape644 = x3d.Shape()
Appearance645 = x3d.Appearance()
Material646 = x3d.Material()
Material646.setAmbientIntensity(0)
Material646.setDiffuseColor(x3d.doubleToFloat([0.5,0.5,0.5]))
Material646.setShininess(0)

Appearance645.setMaterial(Material646)

Shape644.setAppearance(Appearance645)
IndexedFaceSet647 = x3d.IndexedFaceSet()
IndexedFaceSet647.setSolid(False)
IndexedFaceSet647.setTexCoordIndex([3,1,0,-1,3,0,2,-1])
IndexedFaceSet647.setCoordIndex([3,1,0,-1,3,0,2,-1])
Coordinate648 = x3d.Coordinate()
Coordinate648.setPoint(x3d.doubleToFloat([21.43617,0.075,24.58891,21.57029,0.075,25.24689,20.6286,0.075,24.75353,20.76272,0.075,25.41151]))

IndexedFaceSet647.setCoord(Coordinate648)

Shape644.setGeometry(IndexedFaceSet647)

Scene12.addChild(Shape644)
Shape649 = x3d.Shape()
Appearance650 = x3d.Appearance()
Material651 = x3d.Material()
Material651.setAmbientIntensity(0)
Material651.setDiffuseColor(x3d.doubleToFloat([0.5,0.5,0.5]))
Material651.setShininess(0)

Appearance650.setMaterial(Material651)

Shape649.setAppearance(Appearance650)
IndexedFaceSet652 = x3d.IndexedFaceSet()
IndexedFaceSet652.setSolid(False)
IndexedFaceSet652.setTexCoordIndex([3,1,0,-1,3,0,2,-1])
IndexedFaceSet652.setCoordIndex([3,1,0,-1,3,0,2,-1])
Coordinate653 = x3d.Coordinate()
Coordinate653.setPoint(x3d.doubleToFloat([20.6246,0.075,24.73393,20.49048,0.075,24.07595,21.43217,0.075,24.56932,21.29805,0.075,23.91134]))

IndexedFaceSet652.setCoord(Coordinate653)

Shape649.setGeometry(IndexedFaceSet652)

Scene12.addChild(Shape649)
Shape654 = x3d.Shape()
Appearance655 = x3d.Appearance()
Material656 = x3d.Material()
Material656.setAmbientIntensity(0)
Material656.setDiffuseColor(x3d.doubleToFloat([0.5,0.5,0.5]))
Material656.setShininess(0)

Appearance655.setMaterial(Material656)

Shape654.setAppearance(Appearance655)
IndexedFaceSet657 = x3d.IndexedFaceSet()
IndexedFaceSet657.setSolid(False)
IndexedFaceSet657.setTexCoordIndex([3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1])
IndexedFaceSet657.setCoordIndex([3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1])
Coordinate658 = x3d.Coordinate()
Coordinate658.setPoint(x3d.doubleToFloat([20.62784,0.075,22.63649,21.02183,0.075,22.55619,20.76396,0.075,23.30427,21.15794,0.075,23.22396,20.90007,0.075,23.97205,21.29406,0.075,23.89174]))

IndexedFaceSet657.setCoord(Coordinate658)

Shape654.setGeometry(IndexedFaceSet657)

Scene12.addChild(Shape654)
Shape659 = x3d.Shape()
Appearance660 = x3d.Appearance()
Material661 = x3d.Material()
Material661.setAmbientIntensity(0)
Material661.setDiffuseColor(x3d.doubleToFloat([0.5,0.5,0.5]))
Material661.setShininess(0)

Appearance660.setMaterial(Material661)

Shape659.setAppearance(Appearance660)
IndexedFaceSet662 = x3d.IndexedFaceSet()
IndexedFaceSet662.setSolid(False)
IndexedFaceSet662.setTexCoordIndex([4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1])
IndexedFaceSet662.setCoordIndex([4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1])
Coordinate663 = x3d.Coordinate()
Coordinate663.setPoint(x3d.doubleToFloat([20.21426,0.075,22.7208,20.41125,0.075,22.68064,20.60824,0.075,22.64049,20.35037,0.075,23.38857,20.54737,0.075,23.34842,20.74436,0.075,23.30827,20.48649,0.075,24.05635,20.68348,0.075,24.0162,20.88048,0.075,23.97605]))

IndexedFaceSet662.setCoord(Coordinate663)

Shape659.setGeometry(IndexedFaceSet662)

Scene12.addChild(Shape659)
Shape664 = x3d.Shape()
Appearance665 = x3d.Appearance()
Material666 = x3d.Material()
Material666.setAmbientIntensity(0)
Material666.setDiffuseColor(x3d.doubleToFloat([0.5,0.5,0.5]))
Material666.setShininess(0)

Appearance665.setMaterial(Material666)

Shape664.setAppearance(Appearance665)
IndexedFaceSet667 = x3d.IndexedFaceSet()
IndexedFaceSet667.setSolid(False)
IndexedFaceSet667.setTexCoordIndex([3,1,0,-1,3,0,2,-1])
IndexedFaceSet667.setCoordIndex([3,1,0,-1,3,0,2,-1])
Coordinate668 = x3d.Coordinate()
Coordinate668.setPoint(x3d.doubleToFloat([20.21026,0.075,22.7012,20.07614,0.075,22.04322,21.01783,0.075,22.53659,20.88371,0.075,21.87861]))

IndexedFaceSet667.setCoord(Coordinate668)

Shape664.setGeometry(IndexedFaceSet667)

Scene12.addChild(Shape664)
Shape669 = x3d.Shape()
Appearance670 = x3d.Appearance()
Material671 = x3d.Material()
Material671.setAmbientIntensity(0)
Material671.setDiffuseColor(x3d.doubleToFloat([0.5,0.5,0.5]))
Material671.setShininess(0)

Appearance670.setMaterial(Material671)

Shape669.setAppearance(Appearance670)
IndexedFaceSet672 = x3d.IndexedFaceSet()
IndexedFaceSet672.setSolid(False)
IndexedFaceSet672.setTexCoordIndex([3,1,0,-1,3,0,2,-1])
IndexedFaceSet672.setCoordIndex([3,1,0,-1,3,0,2,-1])
Coordinate673 = x3d.Coordinate()
Coordinate673.setPoint(x3d.doubleToFloat([20.07215,0.075,22.02362,19.93803,0.075,21.36564,20.87972,0.075,21.85901,20.7456,0.075,21.20103]))

IndexedFaceSet672.setCoord(Coordinate673)

Shape669.setGeometry(IndexedFaceSet672)

Scene12.addChild(Shape669)
Shape674 = x3d.Shape()
Appearance675 = x3d.Appearance()
Material676 = x3d.Material()
Material676.setAmbientIntensity(0)
Material676.setDiffuseColor(x3d.doubleToFloat([0.5,0.5,0.5]))
Material676.setShininess(0)

Appearance675.setMaterial(Material676)

Shape674.setAppearance(Appearance675)
IndexedFaceSet677 = x3d.IndexedFaceSet()
IndexedFaceSet677.setSolid(False)
IndexedFaceSet677.setTexCoordIndex([4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1])
IndexedFaceSet677.setCoordIndex([4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1])
Coordinate678 = x3d.Coordinate()
Coordinate678.setPoint(x3d.doubleToFloat([20.07538,0.075,19.92619,20.27238,0.075,19.88603,20.46937,0.075,19.84588,20.2115,0.075,20.59397,20.40849,0.075,20.55381,20.60549,0.075,20.51366,20.34762,0.075,21.26174,20.54461,0.075,21.22159,20.7416,0.075,21.18144]))

IndexedFaceSet677.setCoord(Coordinate678)

Shape674.setGeometry(IndexedFaceSet677)

Scene12.addChild(Shape674)
Shape679 = x3d.Shape()
Appearance680 = x3d.Appearance()
Material681 = x3d.Material()
Material681.setAmbientIntensity(0)
Material681.setDiffuseColor(x3d.doubleToFloat([0.5,0.5,0.5]))
Material681.setShininess(0)

Appearance680.setMaterial(Material681)

Shape679.setAppearance(Appearance680)
IndexedFaceSet682 = x3d.IndexedFaceSet()
IndexedFaceSet682.setSolid(False)
IndexedFaceSet682.setTexCoordIndex([4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1])
IndexedFaceSet682.setCoordIndex([4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1])
Coordinate683 = x3d.Coordinate()
Coordinate683.setPoint(x3d.doubleToFloat([19.6618,0.075,20.01049,19.85879,0.075,19.97034,20.05579,0.075,19.93018,19.79792,0.075,20.67827,19.99491,0.075,20.63811,20.1919,0.075,20.59796,19.93403,0.075,21.34605,20.13103,0.075,21.30589,20.32802,0.075,21.26574]))

IndexedFaceSet682.setCoord(Coordinate683)

Shape679.setGeometry(IndexedFaceSet682)

Scene12.addChild(Shape679)
Shape684 = x3d.Shape()
Appearance685 = x3d.Appearance()
Material686 = x3d.Material()
Material686.setAmbientIntensity(0)
Material686.setDiffuseColor(x3d.doubleToFloat([0.5,0.5,0.5]))
Material686.setShininess(0)

Appearance685.setMaterial(Material686)

Shape684.setAppearance(Appearance685)
IndexedFaceSet687 = x3d.IndexedFaceSet()
IndexedFaceSet687.setSolid(False)
IndexedFaceSet687.setTexCoordIndex([3,1,0,-1,3,0,2,-1])
IndexedFaceSet687.setCoordIndex([3,1,0,-1,3,0,2,-1])
Coordinate688 = x3d.Coordinate()
Coordinate688.setPoint(x3d.doubleToFloat([19.6578,0.075,19.99089,19.52369,0.075,19.33291,20.46538,0.075,19.82628,20.33126,0.075,19.1683]))

IndexedFaceSet687.setCoord(Coordinate688)

Shape684.setGeometry(IndexedFaceSet687)

Scene12.addChild(Shape684)
Shape689 = x3d.Shape()
Appearance690 = x3d.Appearance()
Material691 = x3d.Material()
Material691.setAmbientIntensity(0)
Material691.setDiffuseColor(x3d.doubleToFloat([0.5,0.5,0.5]))
Material691.setShininess(0)

Appearance690.setMaterial(Material691)

Shape689.setAppearance(Appearance690)
IndexedFaceSet692 = x3d.IndexedFaceSet()
IndexedFaceSet692.setSolid(False)
IndexedFaceSet692.setTexCoordIndex([3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1])
IndexedFaceSet692.setCoordIndex([3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1])
Coordinate693 = x3d.Coordinate()
Coordinate693.setPoint(x3d.doubleToFloat([19.51969,0.075,19.31332,19.38557,0.075,18.65534,19.92348,0.075,19.23101,19.78936,0.075,18.57303,20.32726,0.075,19.14871,20.19314,0.075,18.49073]))

IndexedFaceSet692.setCoord(Coordinate693)

Shape689.setGeometry(IndexedFaceSet692)

Scene12.addChild(Shape689)
Shape694 = x3d.Shape()
Appearance695 = x3d.Appearance()
Material696 = x3d.Material()
Material696.setAmbientIntensity(0)
Material696.setDiffuseColor(x3d.doubleToFloat([0.5,0.5,0.5]))
Material696.setShininess(0)

Appearance695.setMaterial(Material696)

Shape694.setAppearance(Appearance695)
IndexedFaceSet697 = x3d.IndexedFaceSet()
IndexedFaceSet697.setSolid(False)
IndexedFaceSet697.setTexCoordIndex([3,1,0,-1,3,0,2,-1])
IndexedFaceSet697.setCoordIndex([3,1,0,-1,3,0,2,-1])
Coordinate698 = x3d.Coordinate()
Coordinate698.setPoint(x3d.doubleToFloat([19.52293,0.075,17.21588,19.91691,0.075,17.13557,19.79516,0.075,18.55144,20.18915,0.075,18.47113]))

IndexedFaceSet697.setCoord(Coordinate698)

Shape694.setGeometry(IndexedFaceSet697)

Scene12.addChild(Shape694)
Shape699 = x3d.Shape()
Appearance700 = x3d.Appearance()
Material701 = x3d.Material()
Material701.setAmbientIntensity(0)
Material701.setDiffuseColor(x3d.doubleToFloat([0.5,0.5,0.5]))
Material701.setShininess(0)

Appearance700.setMaterial(Material701)

Shape699.setAppearance(Appearance700)
IndexedFaceSet702 = x3d.IndexedFaceSet()
IndexedFaceSet702.setSolid(False)
IndexedFaceSet702.setTexCoordIndex([4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1])
IndexedFaceSet702.setCoordIndex([4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1])
Coordinate703 = x3d.Coordinate()
Coordinate703.setPoint(x3d.doubleToFloat([19.10934,0.075,17.30019,19.30634,0.075,17.26003,19.50333,0.075,17.21988,19.24546,0.075,17.96796,19.44245,0.075,17.92781,19.63945,0.075,17.88766,19.38158,0.075,18.63574,19.57857,0.075,18.59559,19.77556,0.075,18.55543]))

IndexedFaceSet702.setCoord(Coordinate703)

Shape699.setGeometry(IndexedFaceSet702)

Scene12.addChild(Shape699)
Shape704 = x3d.Shape()
Appearance705 = x3d.Appearance()
Material706 = x3d.Material()
Material706.setAmbientIntensity(0)
Material706.setDiffuseColor(x3d.doubleToFloat([0.5,0.5,0.5]))
Material706.setShininess(0)

Appearance705.setMaterial(Material706)

Shape704.setAppearance(Appearance705)
IndexedFaceSet707 = x3d.IndexedFaceSet()
IndexedFaceSet707.setSolid(False)
IndexedFaceSet707.setTexCoordIndex([3,1,0,-1,3,0,2,-1])
IndexedFaceSet707.setCoordIndex([3,1,0,-1,3,0,2,-1])
Coordinate708 = x3d.Coordinate()
Coordinate708.setPoint(x3d.doubleToFloat([19.10535,0.075,17.28059,18.97123,0.075,16.62261,19.91292,0.075,17.11598,19.7788,0.075,16.458]))

IndexedFaceSet707.setCoord(Coordinate708)

Shape704.setGeometry(IndexedFaceSet707)

Scene12.addChild(Shape704)
Shape709 = x3d.Shape()
Appearance710 = x3d.Appearance()
Material711 = x3d.Material()
Material711.setAmbientIntensity(0)
Material711.setDiffuseColor(x3d.doubleToFloat([0.5,0.5,0.5]))
Material711.setShininess(0)

Appearance710.setMaterial(Material711)

Shape709.setAppearance(Appearance710)
IndexedFaceSet712 = x3d.IndexedFaceSet()
IndexedFaceSet712.setSolid(False)
IndexedFaceSet712.setTexCoordIndex([3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1])
IndexedFaceSet712.setCoordIndex([3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1])
Coordinate713 = x3d.Coordinate()
Coordinate713.setPoint(x3d.doubleToFloat([19.64069,0.075,15.78042,19.77481,0.075,16.4384,19.2369,0.075,15.86273,19.37102,0.075,16.52071,18.83311,0.075,15.94503,18.96724,0.075,16.60301]))

IndexedFaceSet712.setCoord(Coordinate713)

Shape709.setGeometry(IndexedFaceSet712)

Scene12.addChild(Shape709)
Shape714 = x3d.Shape()
Appearance715 = x3d.Appearance()
Material716 = x3d.Material()
Material716.setAmbientIntensity(0)
Material716.setDiffuseColor(x3d.doubleToFloat([0.5,0.5,0.5]))
Material716.setShininess(0)

Appearance715.setMaterial(Material716)

Shape714.setAppearance(Appearance715)
IndexedFaceSet717 = x3d.IndexedFaceSet()
IndexedFaceSet717.setSolid(False)
IndexedFaceSet717.setTexCoordIndex([3,1,0,-1,3,0,2,-1])
IndexedFaceSet717.setCoordIndex([3,1,0,-1,3,0,2,-1])
Coordinate718 = x3d.Coordinate()
Coordinate718.setPoint(x3d.doubleToFloat([19.63669,0.075,15.76082,19.2427,0.075,15.84113,19.36446,0.075,14.42527,18.97047,0.075,14.50558]))

IndexedFaceSet717.setCoord(Coordinate718)

Shape714.setGeometry(IndexedFaceSet717)

Scene12.addChild(Shape714)
Shape719 = x3d.Shape()
Appearance720 = x3d.Appearance()
Material721 = x3d.Material()
Material721.setAmbientIntensity(0)
Material721.setDiffuseColor(x3d.doubleToFloat([0.5,0.5,0.5]))
Material721.setShininess(0)

Appearance720.setMaterial(Material721)

Shape719.setAppearance(Appearance720)
IndexedFaceSet722 = x3d.IndexedFaceSet()
IndexedFaceSet722.setSolid(False)
IndexedFaceSet722.setTexCoordIndex([4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1])
IndexedFaceSet722.setCoordIndex([4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1])
Coordinate723 = x3d.Coordinate()
Coordinate723.setPoint(x3d.doubleToFloat([18.55689,0.075,14.58988,18.75388,0.075,14.54973,18.95087,0.075,14.50957,18.693,0.075,15.25766,18.89,0.075,15.2175,19.08699,0.075,15.17735,18.82912,0.075,15.92544,19.02611,0.075,15.88528,19.22311,0.075,15.84513]))

IndexedFaceSet722.setCoord(Coordinate723)

Shape719.setGeometry(IndexedFaceSet722)

Scene12.addChild(Shape719)
Shape724 = x3d.Shape()
Appearance725 = x3d.Appearance()
Material726 = x3d.Material()
Material726.setAmbientIntensity(0)
Material726.setDiffuseColor(x3d.doubleToFloat([0.5,0.5,0.5]))
Material726.setShininess(0)

Appearance725.setMaterial(Material726)

Shape724.setAppearance(Appearance725)
IndexedFaceSet727 = x3d.IndexedFaceSet()
IndexedFaceSet727.setSolid(False)
IndexedFaceSet727.setTexCoordIndex([3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1])
IndexedFaceSet727.setCoordIndex([3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1])
Coordinate728 = x3d.Coordinate()
Coordinate728.setPoint(x3d.doubleToFloat([18.55289,0.075,14.57028,18.41877,0.075,13.9123,18.95668,0.075,14.48798,18.82256,0.075,13.83,19.36046,0.075,14.40567,19.22635,0.075,13.74769]))

IndexedFaceSet727.setCoord(Coordinate728)

Shape724.setGeometry(IndexedFaceSet727)

Scene12.addChild(Shape724)
Shape729 = x3d.Shape()
Appearance730 = x3d.Appearance()
Material731 = x3d.Material()
Material731.setAmbientIntensity(0)
Material731.setDiffuseColor(x3d.doubleToFloat([0.5,0.5,0.5]))
Material731.setShininess(0)

Appearance730.setMaterial(Material731)

Shape729.setAppearance(Appearance730)
IndexedFaceSet732 = x3d.IndexedFaceSet()
IndexedFaceSet732.setSolid(False)
IndexedFaceSet732.setTexCoordIndex([3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1])
IndexedFaceSet732.setCoordIndex([3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1])
Coordinate733 = x3d.Coordinate()
Coordinate733.setPoint(x3d.doubleToFloat([19.08823,0.075,13.07012,19.22235,0.075,13.7281,18.68444,0.075,13.15242,18.81856,0.075,13.8104,18.28066,0.075,13.23473,18.41478,0.075,13.89271]))

IndexedFaceSet732.setCoord(Coordinate733)

Shape729.setGeometry(IndexedFaceSet732)

Scene12.addChild(Shape729)
Shape734 = x3d.Shape()
Appearance735 = x3d.Appearance()
Material736 = x3d.Material()
Material736.setAmbientIntensity(0)
Material736.setDiffuseColor(x3d.doubleToFloat([0.5,0.5,0.5]))
Material736.setShininess(0)

Appearance735.setMaterial(Material736)

Shape734.setAppearance(Appearance735)
IndexedFaceSet737 = x3d.IndexedFaceSet()
IndexedFaceSet737.setSolid(False)
IndexedFaceSet737.setTexCoordIndex([3,1,0,-1,3,0,2,-1])
IndexedFaceSet737.setCoordIndex([3,1,0,-1,3,0,2,-1])
Coordinate738 = x3d.Coordinate()
Coordinate738.setPoint(x3d.doubleToFloat([19.08424,0.075,13.05052,18.69025,0.075,13.13083,18.812,0.075,11.71496,18.41801,0.075,11.79527]))

IndexedFaceSet737.setCoord(Coordinate738)

Shape734.setGeometry(IndexedFaceSet737)

Scene12.addChild(Shape734)
Shape739 = x3d.Shape()
Appearance740 = x3d.Appearance()
Material741 = x3d.Material()
Material741.setAmbientIntensity(0)
Material741.setDiffuseColor(x3d.doubleToFloat([0.5,0.5,0.5]))
Material741.setShininess(0)

Appearance740.setMaterial(Material741)

Shape739.setAppearance(Appearance740)
IndexedFaceSet742 = x3d.IndexedFaceSet()
IndexedFaceSet742.setSolid(False)
IndexedFaceSet742.setTexCoordIndex([4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1])
IndexedFaceSet742.setCoordIndex([4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1])
Coordinate743 = x3d.Coordinate()
Coordinate743.setPoint(x3d.doubleToFloat([18.00443,0.075,11.87957,18.20143,0.075,11.83942,18.39842,0.075,11.79927,18.14055,0.075,12.54735,18.33754,0.075,12.5072,18.53453,0.075,12.46704,18.27666,0.075,13.21513,18.47366,0.075,13.17498,18.67065,0.075,13.13482]))

IndexedFaceSet742.setCoord(Coordinate743)

Shape739.setGeometry(IndexedFaceSet742)

Scene12.addChild(Shape739)
Shape744 = x3d.Shape()
Appearance745 = x3d.Appearance()
Material746 = x3d.Material()
Material746.setAmbientIntensity(0)
Material746.setDiffuseColor(x3d.doubleToFloat([0.5,0.5,0.5]))
Material746.setShininess(0)

Appearance745.setMaterial(Material746)

Shape744.setAppearance(Appearance745)
IndexedFaceSet747 = x3d.IndexedFaceSet()
IndexedFaceSet747.setSolid(False)
IndexedFaceSet747.setTexCoordIndex([3,1,0,-1,3,0,2,-1])
IndexedFaceSet747.setCoordIndex([3,1,0,-1,3,0,2,-1])
Coordinate748 = x3d.Coordinate()
Coordinate748.setPoint(x3d.doubleToFloat([18.00044,0.075,11.85998,17.86632,0.075,11.202,18.80801,0.075,11.69537,18.67389,0.075,11.03739]))

IndexedFaceSet747.setCoord(Coordinate748)

Shape744.setGeometry(IndexedFaceSet747)

Scene12.addChild(Shape744)
Shape749 = x3d.Shape()
Appearance750 = x3d.Appearance()
Material751 = x3d.Material()
Material751.setAmbientIntensity(0)
Material751.setDiffuseColor(x3d.doubleToFloat([0.5,0.5,0.5]))
Material751.setShininess(0)

Appearance750.setMaterial(Material751)

Shape749.setAppearance(Appearance750)
IndexedFaceSet752 = x3d.IndexedFaceSet()
IndexedFaceSet752.setSolid(False)
IndexedFaceSet752.setTexCoordIndex([4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1])
IndexedFaceSet752.setCoordIndex([4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1])
Coordinate753 = x3d.Coordinate()
Coordinate753.setPoint(x3d.doubleToFloat([17.86232,0.075,11.1824,17.79526,0.075,10.85341,17.7282,0.075,10.52442,18.66989,0.075,11.01779,18.60283,0.075,10.6888,18.53577,0.075,10.35981]))

IndexedFaceSet752.setCoord(Coordinate753)

Shape749.setGeometry(IndexedFaceSet752)

Scene12.addChild(Shape749)
Shape754 = x3d.Shape()
Appearance755 = x3d.Appearance()
Material756 = x3d.Material()
Material756.setAmbientIntensity(0)
Material756.setDiffuseColor(x3d.doubleToFloat([0.5,0.5,0.5]))
Material756.setShininess(0)

Appearance755.setMaterial(Material756)

Shape754.setAppearance(Appearance755)
IndexedFaceSet757 = x3d.IndexedFaceSet()
IndexedFaceSet757.setSolid(False)
IndexedFaceSet757.setTexCoordIndex([3,1,0,-1,3,0,2,-1])
IndexedFaceSet757.setCoordIndex([3,1,0,-1,3,0,2,-1])
Coordinate758 = x3d.Coordinate()
Coordinate758.setPoint(x3d.doubleToFloat([17.86556,0.075,9.084966,18.25955,0.075,9.004658,18.13779,0.075,10.42052,18.53178,0.075,10.34021]))

IndexedFaceSet757.setCoord(Coordinate758)

Shape754.setGeometry(IndexedFaceSet757)

Scene12.addChild(Shape754)
Shape759 = x3d.Shape()
Appearance760 = x3d.Appearance()
Material761 = x3d.Material()
Material761.setAmbientIntensity(0)
Material761.setDiffuseColor(x3d.doubleToFloat([0.5,0.5,0.5]))
Material761.setShininess(0)

Appearance760.setMaterial(Material761)

Shape759.setAppearance(Appearance760)
IndexedFaceSet762 = x3d.IndexedFaceSet()
IndexedFaceSet762.setSolid(False)
IndexedFaceSet762.setTexCoordIndex([4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1])
IndexedFaceSet762.setCoordIndex([4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1])
Coordinate763 = x3d.Coordinate()
Coordinate763.setPoint(x3d.doubleToFloat([18.1182,0.075,10.42452,17.9212,0.075,10.46467,17.72421,0.075,10.50482,17.98208,0.075,9.756739,17.78509,0.075,9.796892,17.58809,0.075,9.837047,17.84596,0.075,9.088961,17.64897,0.075,9.129114,17.45197,0.075,9.169269]))

IndexedFaceSet762.setCoord(Coordinate763)

Shape759.setGeometry(IndexedFaceSet762)

Scene12.addChild(Shape759)
Shape764 = x3d.Shape()
Appearance765 = x3d.Appearance()
Material766 = x3d.Material()
Material766.setAmbientIntensity(0)
Material766.setDiffuseColor(x3d.doubleToFloat([0.5,0.5,0.5]))
Material766.setShininess(0)

Appearance765.setMaterial(Material766)

Shape764.setAppearance(Appearance765)
IndexedFaceSet767 = x3d.IndexedFaceSet()
IndexedFaceSet767.setSolid(False)
IndexedFaceSet767.setTexCoordIndex([3,1,0,-1,3,0,2,-1])
IndexedFaceSet767.setCoordIndex([3,1,0,-1,3,0,2,-1])
Coordinate768 = x3d.Coordinate()
Coordinate768.setPoint(x3d.doubleToFloat([18.12143,0.075,8.327081,18.25555,0.075,8.985061,17.31386,0.075,8.491693,17.44798,0.075,9.149672]))

IndexedFaceSet767.setCoord(Coordinate768)

Shape764.setGeometry(IndexedFaceSet767)

Scene12.addChild(Shape764)
Shape769 = x3d.Shape()
Appearance770 = x3d.Appearance()
Material771 = x3d.Material()
Material771.setAmbientIntensity(0)
Material771.setDiffuseColor(x3d.doubleToFloat([0.5,0.5,0.5]))
Material771.setShininess(0)

Appearance770.setMaterial(Material771)

Shape769.setAppearance(Appearance770)
IndexedFaceSet772 = x3d.IndexedFaceSet()
IndexedFaceSet772.setSolid(False)
IndexedFaceSet772.setTexCoordIndex([4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1])
IndexedFaceSet772.setCoordIndex([4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1])
Coordinate773 = x3d.Coordinate()
Coordinate773.setPoint(x3d.doubleToFloat([17.30987,0.075,8.472095,17.24281,0.075,8.143106,17.17575,0.075,7.814116,17.71365,0.075,8.38979,17.64659,0.075,8.0608,17.57953,0.075,7.73181,18.11744,0.075,8.307484,18.05038,0.075,7.978494,17.98332,0.075,7.649504]))

IndexedFaceSet772.setCoord(Coordinate773)

Shape769.setGeometry(IndexedFaceSet772)

Scene12.addChild(Shape769)
Shape774 = x3d.Shape()
Appearance775 = x3d.Appearance()
Material776 = x3d.Material()
Material776.setAmbientIntensity(0)
Material776.setDiffuseColor(x3d.doubleToFloat([0.5,0.5,0.5]))
Material776.setShininess(0)

Appearance775.setMaterial(Material776)

Shape774.setAppearance(Appearance775)
IndexedFaceSet777 = x3d.IndexedFaceSet()
IndexedFaceSet777.setSolid(False)
IndexedFaceSet777.setTexCoordIndex([4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1])
IndexedFaceSet777.setCoordIndex([4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1])
Coordinate778 = x3d.Coordinate()
Coordinate778.setPoint(x3d.doubleToFloat([17.3131,0.075,6.37466,17.5101,0.075,6.334506,17.70709,0.075,6.294352,17.44922,0.075,7.042438,17.64621,0.075,7.002284,17.84321,0.075,6.96213,17.58534,0.075,7.710216,17.78233,0.075,7.670062,17.97932,0.075,7.629908]))

IndexedFaceSet777.setCoord(Coordinate778)

Shape774.setGeometry(IndexedFaceSet777)

Scene12.addChild(Shape774)
Shape779 = x3d.Shape()
Appearance780 = x3d.Appearance()
Material781 = x3d.Material()
Material781.setAmbientIntensity(0)
Material781.setDiffuseColor(x3d.doubleToFloat([0.5,0.5,0.5]))
Material781.setShininess(0)

Appearance780.setMaterial(Material781)

Shape779.setAppearance(Appearance780)
IndexedFaceSet782 = x3d.IndexedFaceSet()
IndexedFaceSet782.setSolid(False)
IndexedFaceSet782.setTexCoordIndex([3,1,0,-1,3,0,2,-1])
IndexedFaceSet782.setCoordIndex([3,1,0,-1,3,0,2,-1])
Coordinate783 = x3d.Coordinate()
Coordinate783.setPoint(x3d.doubleToFloat([16.89952,0.075,6.458963,17.29351,0.075,6.378654,17.17175,0.075,7.794519,17.56574,0.075,7.714211]))

IndexedFaceSet782.setCoord(Coordinate783)

Shape779.setGeometry(IndexedFaceSet782)

Scene12.addChild(Shape779)
Shape784 = x3d.Shape()
Appearance785 = x3d.Appearance()
Material786 = x3d.Material()
Material786.setAmbientIntensity(0)
Material786.setDiffuseColor(x3d.doubleToFloat([0.5,0.5,0.5]))
Material786.setShininess(0)

Appearance785.setMaterial(Material786)

Shape784.setAppearance(Appearance785)
IndexedFaceSet787 = x3d.IndexedFaceSet()
IndexedFaceSet787.setSolid(False)
IndexedFaceSet787.setTexCoordIndex([3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1])
IndexedFaceSet787.setCoordIndex([3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1])
Coordinate788 = x3d.Coordinate()
Coordinate788.setPoint(x3d.doubleToFloat([16.89552,0.075,6.439366,16.76141,0.075,5.781386,17.29931,0.075,6.35706,17.16519,0.075,5.699081,17.7031,0.075,6.274755,17.56898,0.075,5.616775]))

IndexedFaceSet787.setCoord(Coordinate788)

Shape784.setGeometry(IndexedFaceSet787)

Scene12.addChild(Shape784)
Shape789 = x3d.Shape()
Appearance790 = x3d.Appearance()
Material791 = x3d.Material()
Material791.setAmbientIntensity(0)
Material791.setDiffuseColor(x3d.doubleToFloat([0.5,0.5,0.5]))
Material791.setShininess(0)

Appearance790.setMaterial(Material791)

Shape789.setAppearance(Appearance790)
IndexedFaceSet792 = x3d.IndexedFaceSet()
IndexedFaceSet792.setSolid(False)
IndexedFaceSet792.setTexCoordIndex([3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1])
IndexedFaceSet792.setCoordIndex([3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1])
Coordinate793 = x3d.Coordinate()
Coordinate793.setPoint(x3d.doubleToFloat([16.75741,0.075,5.761789,16.62329,0.075,5.10381,17.1612,0.075,5.679484,17.02708,0.075,5.021504,17.56498,0.075,5.597178,17.43086,0.075,4.939198]))

IndexedFaceSet792.setCoord(Coordinate793)

Shape789.setGeometry(IndexedFaceSet792)

Scene12.addChild(Shape789)
Shape794 = x3d.Shape()
Appearance795 = x3d.Appearance()
Material796 = x3d.Material()
Material796.setAmbientIntensity(0)
Material796.setDiffuseColor(x3d.doubleToFloat([0.5,0.5,0.5]))
Material796.setShininess(0)

Appearance795.setMaterial(Material796)

Shape794.setAppearance(Appearance795)
IndexedFaceSet797 = x3d.IndexedFaceSet()
IndexedFaceSet797.setSolid(False)
IndexedFaceSet797.setTexCoordIndex([3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1])
IndexedFaceSet797.setCoordIndex([3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1])
Coordinate798 = x3d.Coordinate()
Coordinate798.setPoint(x3d.doubleToFloat([17.42687,0.075,4.919601,17.03288,0.075,4.99991,17.29075,0.075,4.251824,16.89676,0.075,4.332132,17.15463,0.075,3.584046,16.76065,0.075,3.664354]))

IndexedFaceSet797.setCoord(Coordinate798)

Shape794.setGeometry(IndexedFaceSet797)

Scene12.addChild(Shape794)
Shape799 = x3d.Shape()
Appearance800 = x3d.Appearance()
Material801 = x3d.Material()
Material801.setAmbientIntensity(0)
Material801.setDiffuseColor(x3d.doubleToFloat([0.5,0.5,0.5]))
Material801.setShininess(0)

Appearance800.setMaterial(Material801)

Shape799.setAppearance(Appearance800)
IndexedFaceSet802 = x3d.IndexedFaceSet()
IndexedFaceSet802.setSolid(False)
IndexedFaceSet802.setTexCoordIndex([3,1,0,-1,3,0,2,-1])
IndexedFaceSet802.setCoordIndex([3,1,0,-1,3,0,2,-1])
Coordinate803 = x3d.Coordinate()
Coordinate803.setPoint(x3d.doubleToFloat([16.34706,0.075,3.748657,16.74105,0.075,3.668349,16.6193,0.075,5.084213,17.01328,0.075,5.003905]))

IndexedFaceSet802.setCoord(Coordinate803)

Shape799.setGeometry(IndexedFaceSet802)

Scene12.addChild(Shape799)
Shape804 = x3d.Shape()
Appearance805 = x3d.Appearance()
Material806 = x3d.Material()
Material806.setAmbientIntensity(0)
Material806.setDiffuseColor(x3d.doubleToFloat([0.5,0.5,0.5]))
Material806.setShininess(0)

Appearance805.setMaterial(Material806)

Shape804.setAppearance(Appearance805)
IndexedFaceSet807 = x3d.IndexedFaceSet()
IndexedFaceSet807.setSolid(False)
IndexedFaceSet807.setTexCoordIndex([3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1])
IndexedFaceSet807.setCoordIndex([3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1])
Coordinate808 = x3d.Coordinate()
Coordinate808.setPoint(x3d.doubleToFloat([16.34307,0.075,3.72906,16.20895,0.075,3.071081,16.74685,0.075,3.646755,16.61274,0.075,2.988775,17.15064,0.075,3.564449,17.01652,0.075,2.906469]))

IndexedFaceSet807.setCoord(Coordinate808)

Shape804.setGeometry(IndexedFaceSet807)

Scene12.addChild(Shape804)
Shape809 = x3d.Shape()
Appearance810 = x3d.Appearance()
Material811 = x3d.Material()
Material811.setAmbientIntensity(0)
Material811.setDiffuseColor(x3d.doubleToFloat([0.5,0.5,0.5]))
Material811.setShininess(0)

Appearance810.setMaterial(Material811)

Shape809.setAppearance(Appearance810)
IndexedFaceSet812 = x3d.IndexedFaceSet()
IndexedFaceSet812.setSolid(False)
IndexedFaceSet812.setTexCoordIndex([3,1,0,-1,3,0,2,-1])
IndexedFaceSet812.setCoordIndex([3,1,0,-1,3,0,2,-1])
Coordinate813 = x3d.Coordinate()
Coordinate813.setPoint(x3d.doubleToFloat([20.76423,0.075,29.64557,20.63011,0.075,28.98759,21.5718,0.075,29.48096,21.43769,0.075,28.82298]))

IndexedFaceSet812.setCoord(Coordinate813)

Shape809.setGeometry(IndexedFaceSet812)

Scene12.addChild(Shape809)
Shape814 = x3d.Shape()
Appearance815 = x3d.Appearance()
Material816 = x3d.Material()
Material816.setAmbientIntensity(0)
Material816.setDiffuseColor(x3d.doubleToFloat([0.5,0.5,0.5]))
Material816.setShininess(0)

Appearance815.setMaterial(Material816)

Shape814.setAppearance(Appearance815)
IndexedFaceSet817 = x3d.IndexedFaceSet()
IndexedFaceSet817.setSolid(False)
IndexedFaceSet817.setTexCoordIndex([3,1,0,-1,3,0,2,-1])
IndexedFaceSet817.setCoordIndex([3,1,0,-1,3,0,2,-1])
Coordinate818 = x3d.Coordinate()
Coordinate818.setPoint(x3d.doubleToFloat([21.29957,0.075,28.1454,21.43369,0.075,28.80338,20.492,0.075,28.31001,20.62612,0.075,28.96799]))

IndexedFaceSet817.setCoord(Coordinate818)

Shape814.setGeometry(IndexedFaceSet817)

Scene12.addChild(Shape814)
Shape819 = x3d.Shape()
Appearance820 = x3d.Appearance()
Material821 = x3d.Material()
Material821.setAmbientIntensity(0)
Material821.setDiffuseColor(x3d.doubleToFloat([0.5,0.5,0.5]))
Material821.setShininess(0)

Appearance820.setMaterial(Material821)

Shape819.setAppearance(Appearance820)
IndexedFaceSet822 = x3d.IndexedFaceSet()
IndexedFaceSet822.setSolid(False)
IndexedFaceSet822.setTexCoordIndex([3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1])
IndexedFaceSet822.setCoordIndex([3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1])
Coordinate823 = x3d.Coordinate()
Coordinate823.setPoint(x3d.doubleToFloat([20.62935,0.075,26.87056,21.02334,0.075,26.79025,20.76547,0.075,27.53834,21.15946,0.075,27.45803,20.90159,0.075,28.20612,21.29558,0.075,28.12581]))

IndexedFaceSet822.setCoord(Coordinate823)

Shape819.setGeometry(IndexedFaceSet822)

Scene12.addChild(Shape819)
Shape824 = x3d.Shape()
Appearance825 = x3d.Appearance()
Material826 = x3d.Material()
Material826.setAmbientIntensity(0)
Material826.setDiffuseColor(x3d.doubleToFloat([0.5,0.5,0.5]))
Material826.setShininess(0)

Appearance825.setMaterial(Material826)

Shape824.setAppearance(Appearance825)
IndexedFaceSet827 = x3d.IndexedFaceSet()
IndexedFaceSet827.setSolid(False)
IndexedFaceSet827.setTexCoordIndex([4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1])
IndexedFaceSet827.setCoordIndex([4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1])
Coordinate828 = x3d.Coordinate()
Coordinate828.setPoint(x3d.doubleToFloat([20.21577,0.075,26.95486,20.41277,0.075,26.91471,20.60976,0.075,26.87455,20.35189,0.075,27.62264,20.54888,0.075,27.58249,20.74587,0.075,27.54233,20.488,0.075,28.29042,20.685,0.075,28.25026,20.88199,0.075,28.21011]))

IndexedFaceSet827.setCoord(Coordinate828)

Shape824.setGeometry(IndexedFaceSet827)

Scene12.addChild(Shape824)
Shape829 = x3d.Shape()
Appearance830 = x3d.Appearance()
Material831 = x3d.Material()
Material831.setAmbientIntensity(0)
Material831.setDiffuseColor(x3d.doubleToFloat([0.5,0.5,0.5]))
Material831.setShininess(0)

Appearance830.setMaterial(Material831)

Shape829.setAppearance(Appearance830)
IndexedFaceSet832 = x3d.IndexedFaceSet()
IndexedFaceSet832.setSolid(False)
IndexedFaceSet832.setTexCoordIndex([3,1,0,-1,3,0,2,-1])
IndexedFaceSet832.setCoordIndex([3,1,0,-1,3,0,2,-1])
Coordinate833 = x3d.Coordinate()
Coordinate833.setPoint(x3d.doubleToFloat([20.21178,0.075,26.93526,20.07766,0.075,26.27728,21.01935,0.075,26.77065,20.88523,0.075,26.11267]))

IndexedFaceSet832.setCoord(Coordinate833)

Shape829.setGeometry(IndexedFaceSet832)

Scene12.addChild(Shape829)
Shape834 = x3d.Shape()
Appearance835 = x3d.Appearance()
Material836 = x3d.Material()
Material836.setAmbientIntensity(0)
Material836.setDiffuseColor(x3d.doubleToFloat([0.5,0.5,0.5]))
Material836.setShininess(0)

Appearance835.setMaterial(Material836)

Shape834.setAppearance(Appearance835)
IndexedFaceSet837 = x3d.IndexedFaceSet()
IndexedFaceSet837.setSolid(False)
IndexedFaceSet837.setTexCoordIndex([3,1,0,-1,3,0,2,-1])
IndexedFaceSet837.setCoordIndex([3,1,0,-1,3,0,2,-1])
Coordinate838 = x3d.Coordinate()
Coordinate838.setPoint(x3d.doubleToFloat([20.07366,0.075,26.25769,19.93954,0.075,25.59971,20.88123,0.075,26.09308,20.74711,0.075,25.4351]))

IndexedFaceSet837.setCoord(Coordinate838)

Shape834.setGeometry(IndexedFaceSet837)

Scene12.addChild(Shape834)
Shape839 = x3d.Shape()
Appearance840 = x3d.Appearance()
Material841 = x3d.Material()
Material841.setAmbientIntensity(0)
Material841.setDiffuseColor(x3d.doubleToFloat([0.5,0.5,0.5]))
Material841.setShininess(0)

Appearance840.setMaterial(Material841)

Shape839.setAppearance(Appearance840)
IndexedFaceSet842 = x3d.IndexedFaceSet()
IndexedFaceSet842.setSolid(False)
IndexedFaceSet842.setTexCoordIndex([3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1])
IndexedFaceSet842.setCoordIndex([3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1])
Coordinate843 = x3d.Coordinate()
Coordinate843.setPoint(x3d.doubleToFloat([20.0769,0.075,24.16025,20.47089,0.075,24.07994,20.21302,0.075,24.82803,20.607,0.075,24.74772,20.34913,0.075,25.49581,20.74312,0.075,25.4155]))

IndexedFaceSet842.setCoord(Coordinate843)

Shape839.setGeometry(IndexedFaceSet842)

Scene12.addChild(Shape839)
Shape844 = x3d.Shape()
Appearance845 = x3d.Appearance()
Material846 = x3d.Material()
Material846.setAmbientIntensity(0)
Material846.setDiffuseColor(x3d.doubleToFloat([0.5,0.5,0.5]))
Material846.setShininess(0)

Appearance845.setMaterial(Material846)

Shape844.setAppearance(Appearance845)
IndexedFaceSet847 = x3d.IndexedFaceSet()
IndexedFaceSet847.setSolid(False)
IndexedFaceSet847.setTexCoordIndex([4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1])
IndexedFaceSet847.setCoordIndex([4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1])
Coordinate848 = x3d.Coordinate()
Coordinate848.setPoint(x3d.doubleToFloat([20.32954,0.075,25.4998,20.13254,0.075,25.53996,19.93555,0.075,25.58011,20.19342,0.075,24.83203,19.99643,0.075,24.87218,19.79943,0.075,24.91233,20.0573,0.075,24.16425,19.86031,0.075,24.2044,19.66331,0.075,24.24456]))

IndexedFaceSet847.setCoord(Coordinate848)

Shape844.setGeometry(IndexedFaceSet847)

Scene12.addChild(Shape844)
Shape849 = x3d.Shape()
Appearance850 = x3d.Appearance()
Material851 = x3d.Material()
Material851.setAmbientIntensity(0)
Material851.setDiffuseColor(x3d.doubleToFloat([0.5,0.5,0.5]))
Material851.setShininess(0)

Appearance850.setMaterial(Material851)

Shape849.setAppearance(Appearance850)
IndexedFaceSet852 = x3d.IndexedFaceSet()
IndexedFaceSet852.setSolid(False)
IndexedFaceSet852.setTexCoordIndex([3,1,0,-1,3,0,2,-1])
IndexedFaceSet852.setCoordIndex([3,1,0,-1,3,0,2,-1])
Coordinate853 = x3d.Coordinate()
Coordinate853.setPoint(x3d.doubleToFloat([20.33277,0.075,23.40237,20.46689,0.075,24.06035,19.5252,0.075,23.56698,19.65932,0.075,24.22496]))

IndexedFaceSet852.setCoord(Coordinate853)

Shape849.setGeometry(IndexedFaceSet852)

Scene12.addChild(Shape849)
Shape854 = x3d.Shape()
Appearance855 = x3d.Appearance()
Material856 = x3d.Material()
Material856.setAmbientIntensity(0)
Material856.setDiffuseColor(x3d.doubleToFloat([0.5,0.5,0.5]))
Material856.setShininess(0)

Appearance855.setMaterial(Material856)

Shape854.setAppearance(Appearance855)
IndexedFaceSet857 = x3d.IndexedFaceSet()
IndexedFaceSet857.setSolid(False)
IndexedFaceSet857.setTexCoordIndex([3,1,0,-1,3,0,2,-1])
IndexedFaceSet857.setCoordIndex([3,1,0,-1,3,0,2,-1])
Coordinate858 = x3d.Coordinate()
Coordinate858.setPoint(x3d.doubleToFloat([19.52121,0.075,23.54738,19.38709,0.075,22.8894,20.32878,0.075,23.38277,20.19466,0.075,22.72479]))

IndexedFaceSet857.setCoord(Coordinate858)

Shape854.setGeometry(IndexedFaceSet857)

Scene12.addChild(Shape854)
Shape859 = x3d.Shape()
Appearance860 = x3d.Appearance()
Material861 = x3d.Material()
Material861.setAmbientIntensity(0)
Material861.setDiffuseColor(x3d.doubleToFloat([0.5,0.5,0.5]))
Material861.setShininess(0)

Appearance860.setMaterial(Material861)

Shape859.setAppearance(Appearance860)
IndexedFaceSet862 = x3d.IndexedFaceSet()
IndexedFaceSet862.setSolid(False)
IndexedFaceSet862.setTexCoordIndex([4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1])
IndexedFaceSet862.setCoordIndex([4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1])
Coordinate863 = x3d.Coordinate()
Coordinate863.setPoint(x3d.doubleToFloat([19.52444,0.075,21.44995,19.72144,0.075,21.40979,19.91843,0.075,21.36964,19.66056,0.075,22.11773,19.85755,0.075,22.07757,20.05455,0.075,22.03742,19.79668,0.075,22.7855,19.99367,0.075,22.74535,20.19066,0.075,22.70519]))

IndexedFaceSet862.setCoord(Coordinate863)

Shape859.setGeometry(IndexedFaceSet862)

Scene12.addChild(Shape859)
Shape864 = x3d.Shape()
Appearance865 = x3d.Appearance()
Material866 = x3d.Material()
Material866.setAmbientIntensity(0)
Material866.setDiffuseColor(x3d.doubleToFloat([0.5,0.5,0.5]))
Material866.setShininess(0)

Appearance865.setMaterial(Material866)

Shape864.setAppearance(Appearance865)
IndexedFaceSet867 = x3d.IndexedFaceSet()
IndexedFaceSet867.setSolid(False)
IndexedFaceSet867.setTexCoordIndex([3,1,0,-1,3,0,2,-1])
IndexedFaceSet867.setCoordIndex([3,1,0,-1,3,0,2,-1])
Coordinate868 = x3d.Coordinate()
Coordinate868.setPoint(x3d.doubleToFloat([19.77708,0.075,22.7895,19.38309,0.075,22.86981,19.50485,0.075,21.45394,19.11086,0.075,21.53425]))

IndexedFaceSet867.setCoord(Coordinate868)

Shape864.setGeometry(IndexedFaceSet867)

Scene12.addChild(Shape864)
Shape869 = x3d.Shape()
Appearance870 = x3d.Appearance()
Material871 = x3d.Material()
Material871.setAmbientIntensity(0)
Material871.setDiffuseColor(x3d.doubleToFloat([0.5,0.5,0.5]))
Material871.setShininess(0)

Appearance870.setMaterial(Material871)

Shape869.setAppearance(Appearance870)
IndexedFaceSet872 = x3d.IndexedFaceSet()
IndexedFaceSet872.setSolid(False)
IndexedFaceSet872.setTexCoordIndex([3,1,0,-1,3,0,2,-1])
IndexedFaceSet872.setCoordIndex([3,1,0,-1,3,0,2,-1])
Coordinate873 = x3d.Coordinate()
Coordinate873.setPoint(x3d.doubleToFloat([19.78032,0.075,20.69206,19.91444,0.075,21.35004,18.97275,0.075,20.85667,19.10686,0.075,21.51465]))

IndexedFaceSet872.setCoord(Coordinate873)

Shape869.setGeometry(IndexedFaceSet872)

Scene12.addChild(Shape869)
Shape874 = x3d.Shape()
Appearance875 = x3d.Appearance()
Material876 = x3d.Material()
Material876.setAmbientIntensity(0)
Material876.setDiffuseColor(x3d.doubleToFloat([0.5,0.5,0.5]))
Material876.setShininess(0)

Appearance875.setMaterial(Material876)

Shape874.setAppearance(Appearance875)
IndexedFaceSet877 = x3d.IndexedFaceSet()
IndexedFaceSet877.setSolid(False)
IndexedFaceSet877.setTexCoordIndex([3,1,0,-1,3,0,2,-1])
IndexedFaceSet877.setCoordIndex([3,1,0,-1,3,0,2,-1])
Coordinate878 = x3d.Coordinate()
Coordinate878.setPoint(x3d.doubleToFloat([18.96875,0.075,20.83708,18.83463,0.075,20.1791,19.77632,0.075,20.67247,19.6422,0.075,20.01449]))

IndexedFaceSet877.setCoord(Coordinate878)

Shape874.setGeometry(IndexedFaceSet877)

Scene12.addChild(Shape874)
Shape879 = x3d.Shape()
Appearance880 = x3d.Appearance()
Material881 = x3d.Material()
Material881.setAmbientIntensity(0)
Material881.setDiffuseColor(x3d.doubleToFloat([0.5,0.5,0.5]))
Material881.setShininess(0)

Appearance880.setMaterial(Material881)

Shape879.setAppearance(Appearance880)
IndexedFaceSet882 = x3d.IndexedFaceSet()
IndexedFaceSet882.setSolid(False)
IndexedFaceSet882.setTexCoordIndex([4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1])
IndexedFaceSet882.setCoordIndex([4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1])
Coordinate883 = x3d.Coordinate()
Coordinate883.setPoint(x3d.doubleToFloat([18.97199,0.075,18.73964,19.16898,0.075,18.69949,19.36597,0.075,18.65933,19.1081,0.075,19.40742,19.3051,0.075,19.36727,19.50209,0.075,19.32711,19.24422,0.075,20.0752,19.44121,0.075,20.03504,19.63821,0.075,19.99489]))

IndexedFaceSet882.setCoord(Coordinate883)

Shape879.setGeometry(IndexedFaceSet882)

Scene12.addChild(Shape879)
Shape884 = x3d.Shape()
Appearance885 = x3d.Appearance()
Material886 = x3d.Material()
Material886.setAmbientIntensity(0)
Material886.setDiffuseColor(x3d.doubleToFloat([0.5,0.5,0.5]))
Material886.setShininess(0)

Appearance885.setMaterial(Material886)

Shape884.setAppearance(Appearance885)
IndexedFaceSet887 = x3d.IndexedFaceSet()
IndexedFaceSet887.setSolid(False)
IndexedFaceSet887.setTexCoordIndex([4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1])
IndexedFaceSet887.setCoordIndex([4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1])
Coordinate888 = x3d.Coordinate()
Coordinate888.setPoint(x3d.doubleToFloat([18.5584,0.075,18.82394,18.7554,0.075,18.78379,18.95239,0.075,18.74364,18.69452,0.075,19.49172,18.89151,0.075,19.45157,19.08851,0.075,19.41142,18.83064,0.075,20.1595,19.02763,0.075,20.11935,19.22462,0.075,20.07919]))

IndexedFaceSet887.setCoord(Coordinate888)

Shape884.setGeometry(IndexedFaceSet887)

Scene12.addChild(Shape884)
Shape889 = x3d.Shape()
Appearance890 = x3d.Appearance()
Material891 = x3d.Material()
Material891.setAmbientIntensity(0)
Material891.setDiffuseColor(x3d.doubleToFloat([0.5,0.5,0.5]))
Material891.setShininess(0)

Appearance890.setMaterial(Material891)

Shape889.setAppearance(Appearance890)
IndexedFaceSet892 = x3d.IndexedFaceSet()
IndexedFaceSet892.setSolid(False)
IndexedFaceSet892.setTexCoordIndex([3,1,0,-1,3,0,2,-1])
IndexedFaceSet892.setCoordIndex([3,1,0,-1,3,0,2,-1])
Coordinate893 = x3d.Coordinate()
Coordinate893.setPoint(x3d.doubleToFloat([18.55441,0.075,18.80435,18.42029,0.075,18.14637,19.36198,0.075,18.63974,19.22786,0.075,17.98176]))

IndexedFaceSet892.setCoord(Coordinate893)

Shape889.setGeometry(IndexedFaceSet892)

Scene12.addChild(Shape889)
Shape894 = x3d.Shape()
Appearance895 = x3d.Appearance()
Material896 = x3d.Material()
Material896.setAmbientIntensity(0)
Material896.setDiffuseColor(x3d.doubleToFloat([0.5,0.5,0.5]))
Material896.setShininess(0)

Appearance895.setMaterial(Material896)

Shape894.setAppearance(Appearance895)
IndexedFaceSet897 = x3d.IndexedFaceSet()
IndexedFaceSet897.setSolid(False)
IndexedFaceSet897.setTexCoordIndex([3,1,0,-1,3,0,2,-1])
IndexedFaceSet897.setCoordIndex([3,1,0,-1,3,0,2,-1])
Coordinate898 = x3d.Coordinate()
Coordinate898.setPoint(x3d.doubleToFloat([18.41629,0.075,18.12677,18.28218,0.075,17.46879,19.22387,0.075,17.96216,19.08975,0.075,17.30418]))

IndexedFaceSet897.setCoord(Coordinate898)

Shape894.setGeometry(IndexedFaceSet897)

Scene12.addChild(Shape894)
Shape899 = x3d.Shape()
Appearance900 = x3d.Appearance()
Material901 = x3d.Material()
Material901.setAmbientIntensity(0)
Material901.setDiffuseColor(x3d.doubleToFloat([0.5,0.5,0.5]))
Material901.setShininess(0)

Appearance900.setMaterial(Material901)

Shape899.setAppearance(Appearance900)
IndexedFaceSet902 = x3d.IndexedFaceSet()
IndexedFaceSet902.setSolid(False)
IndexedFaceSet902.setTexCoordIndex([3,1,0,-1,3,0,2,-1])
IndexedFaceSet902.setCoordIndex([3,1,0,-1,3,0,2,-1])
Coordinate903 = x3d.Coordinate()
Coordinate903.setPoint(x3d.doubleToFloat([19.08575,0.075,17.28458,18.69176,0.075,17.36489,18.81352,0.075,15.94903,18.41953,0.075,16.02934]))

IndexedFaceSet902.setCoord(Coordinate903)

Shape899.setGeometry(IndexedFaceSet902)

Scene12.addChild(Shape899)
Shape904 = x3d.Shape()
Appearance905 = x3d.Appearance()
Material906 = x3d.Material()
Material906.setAmbientIntensity(0)
Material906.setDiffuseColor(x3d.doubleToFloat([0.5,0.5,0.5]))
Material906.setShininess(0)

Appearance905.setMaterial(Material906)

Shape904.setAppearance(Appearance905)
IndexedFaceSet907 = x3d.IndexedFaceSet()
IndexedFaceSet907.setSolid(False)
IndexedFaceSet907.setTexCoordIndex([3,1,0,-1,3,0,2,-1])
IndexedFaceSet907.setCoordIndex([3,1,0,-1,3,0,2,-1])
Coordinate908 = x3d.Coordinate()
Coordinate908.setPoint(x3d.doubleToFloat([18.00595,0.075,16.11364,18.39993,0.075,16.03333,18.27818,0.075,17.44919,18.67217,0.075,17.36889]))

IndexedFaceSet907.setCoord(Coordinate908)

Shape904.setGeometry(IndexedFaceSet907)

Scene12.addChild(Shape904)
Shape909 = x3d.Shape()
Appearance910 = x3d.Appearance()
Material911 = x3d.Material()
Material911.setAmbientIntensity(0)
Material911.setDiffuseColor(x3d.doubleToFloat([0.5,0.5,0.5]))
Material911.setShininess(0)

Appearance910.setMaterial(Material911)

Shape909.setAppearance(Appearance910)
IndexedFaceSet912 = x3d.IndexedFaceSet()
IndexedFaceSet912.setSolid(False)
IndexedFaceSet912.setTexCoordIndex([3,1,0,-1,3,0,2,-1])
IndexedFaceSet912.setCoordIndex([3,1,0,-1,3,0,2,-1])
Coordinate913 = x3d.Coordinate()
Coordinate913.setPoint(x3d.doubleToFloat([18.00195,0.075,16.09404,17.86783,0.075,15.43606,18.80952,0.075,15.92943,18.6754,0.075,15.27145]))

IndexedFaceSet912.setCoord(Coordinate913)

Shape909.setGeometry(IndexedFaceSet912)

Scene12.addChild(Shape909)
Shape914 = x3d.Shape()
Appearance915 = x3d.Appearance()
Material916 = x3d.Material()
Material916.setAmbientIntensity(0)
Material916.setDiffuseColor(x3d.doubleToFloat([0.5,0.5,0.5]))
Material916.setShininess(0)

Appearance915.setMaterial(Material916)

Shape914.setAppearance(Appearance915)
IndexedFaceSet917 = x3d.IndexedFaceSet()
IndexedFaceSet917.setSolid(False)
IndexedFaceSet917.setTexCoordIndex([3,1,0,-1,3,0,2,-1])
IndexedFaceSet917.setCoordIndex([3,1,0,-1,3,0,2,-1])
Coordinate918 = x3d.Coordinate()
Coordinate918.setPoint(x3d.doubleToFloat([17.86384,0.075,15.41647,17.72972,0.075,14.75849,18.67141,0.075,15.25185,18.53729,0.075,14.59387]))

IndexedFaceSet917.setCoord(Coordinate918)

Shape914.setGeometry(IndexedFaceSet917)

Scene12.addChild(Shape914)
Shape919 = x3d.Shape()
Appearance920 = x3d.Appearance()
Material921 = x3d.Material()
Material921.setAmbientIntensity(0)
Material921.setDiffuseColor(x3d.doubleToFloat([0.5,0.5,0.5]))
Material921.setShininess(0)

Appearance920.setMaterial(Material921)

Shape919.setAppearance(Appearance920)
IndexedFaceSet922 = x3d.IndexedFaceSet()
IndexedFaceSet922.setSolid(False)
IndexedFaceSet922.setTexCoordIndex([3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1])
IndexedFaceSet922.setCoordIndex([3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1])
Coordinate923 = x3d.Coordinate()
Coordinate923.setPoint(x3d.doubleToFloat([18.5333,0.075,14.57428,18.13931,0.075,14.65459,18.39718,0.075,13.9065,18.00319,0.075,13.98681,18.26106,0.075,13.23872,17.86707,0.075,13.31903]))

IndexedFaceSet922.setCoord(Coordinate923)

Shape919.setGeometry(IndexedFaceSet922)

Scene12.addChild(Shape919)
Shape924 = x3d.Shape()
Appearance925 = x3d.Appearance()
Material926 = x3d.Material()
Material926.setAmbientIntensity(0)
Material926.setDiffuseColor(x3d.doubleToFloat([0.5,0.5,0.5]))
Material926.setShininess(0)

Appearance925.setMaterial(Material926)

Shape924.setAppearance(Appearance925)
IndexedFaceSet927 = x3d.IndexedFaceSet()
IndexedFaceSet927.setSolid(False)
IndexedFaceSet927.setTexCoordIndex([3,1,0,-1,3,0,2,-1])
IndexedFaceSet927.setCoordIndex([3,1,0,-1,3,0,2,-1])
Coordinate928 = x3d.Coordinate()
Coordinate928.setPoint(x3d.doubleToFloat([17.45349,0.075,13.40333,17.84748,0.075,13.32302,17.72573,0.075,14.73889,18.11971,0.075,14.65858]))

IndexedFaceSet927.setCoord(Coordinate928)

Shape924.setGeometry(IndexedFaceSet927)

Scene12.addChild(Shape924)
Shape929 = x3d.Shape()
Appearance930 = x3d.Appearance()
Material931 = x3d.Material()
Material931.setAmbientIntensity(0)
Material931.setDiffuseColor(x3d.doubleToFloat([0.5,0.5,0.5]))
Material931.setShininess(0)

Appearance930.setMaterial(Material931)

Shape929.setAppearance(Appearance930)
IndexedFaceSet932 = x3d.IndexedFaceSet()
IndexedFaceSet932.setSolid(False)
IndexedFaceSet932.setTexCoordIndex([3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1])
IndexedFaceSet932.setCoordIndex([3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1])
Coordinate933 = x3d.Coordinate()
Coordinate933.setPoint(x3d.doubleToFloat([17.4495,0.075,13.38374,17.31538,0.075,12.72576,17.85328,0.075,13.30143,17.71916,0.075,12.64345,18.25707,0.075,13.21912,18.12295,0.075,12.56115]))

IndexedFaceSet932.setCoord(Coordinate933)

Shape929.setGeometry(IndexedFaceSet932)

Scene12.addChild(Shape929)
Shape934 = x3d.Shape()
Appearance935 = x3d.Appearance()
Material936 = x3d.Material()
Material936.setAmbientIntensity(0)
Material936.setDiffuseColor(x3d.doubleToFloat([0.5,0.5,0.5]))
Material936.setShininess(0)

Appearance935.setMaterial(Material936)

Shape934.setAppearance(Appearance935)
IndexedFaceSet937 = x3d.IndexedFaceSet()
IndexedFaceSet937.setSolid(False)
IndexedFaceSet937.setTexCoordIndex([3,1,0,-1,3,0,2,-1])
IndexedFaceSet937.setCoordIndex([3,1,0,-1,3,0,2,-1])
Coordinate938 = x3d.Coordinate()
Coordinate938.setPoint(x3d.doubleToFloat([17.98483,0.075,11.88357,18.11895,0.075,12.54155,17.17726,0.075,12.04818,17.31138,0.075,12.70616]))

IndexedFaceSet937.setCoord(Coordinate938)

Shape934.setGeometry(IndexedFaceSet937)

Scene12.addChild(Shape934)
Shape939 = x3d.Shape()
Appearance940 = x3d.Appearance()
Material941 = x3d.Material()
Material941.setAmbientIntensity(0)
Material941.setDiffuseColor(x3d.doubleToFloat([0.5,0.5,0.5]))
Material941.setShininess(0)

Appearance940.setMaterial(Material941)

Shape939.setAppearance(Appearance940)
IndexedFaceSet942 = x3d.IndexedFaceSet()
IndexedFaceSet942.setSolid(False)
IndexedFaceSet942.setTexCoordIndex([3,1,0,-1,3,0,2,-1])
IndexedFaceSet942.setCoordIndex([3,1,0,-1,3,0,2,-1])
Coordinate943 = x3d.Coordinate()
Coordinate943.setPoint(x3d.doubleToFloat([17.98084,0.075,11.86397,17.58685,0.075,11.94428,17.70861,0.075,10.52842,17.31462,0.075,10.60872]))

IndexedFaceSet942.setCoord(Coordinate943)

Shape939.setGeometry(IndexedFaceSet942)

Scene12.addChild(Shape939)
Shape944 = x3d.Shape()
Appearance945 = x3d.Appearance()
Material946 = x3d.Material()
Material946.setAmbientIntensity(0)
Material946.setDiffuseColor(x3d.doubleToFloat([0.5,0.5,0.5]))
Material946.setShininess(0)

Appearance945.setMaterial(Material946)

Shape944.setAppearance(Appearance945)
IndexedFaceSet947 = x3d.IndexedFaceSet()
IndexedFaceSet947.setSolid(False)
IndexedFaceSet947.setTexCoordIndex([4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1])
IndexedFaceSet947.setCoordIndex([4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1])
Coordinate948 = x3d.Coordinate()
Coordinate948.setPoint(x3d.doubleToFloat([16.90104,0.075,10.69303,17.09803,0.075,10.65287,17.29502,0.075,10.61272,17.03715,0.075,11.36081,17.23415,0.075,11.32065,17.43114,0.075,11.2805,17.17327,0.075,12.02858,17.37026,0.075,11.98843,17.56726,0.075,11.94827]))

IndexedFaceSet947.setCoord(Coordinate948)

Shape944.setGeometry(IndexedFaceSet947)

Scene12.addChild(Shape944)
Shape949 = x3d.Shape()
Appearance950 = x3d.Appearance()
Material951 = x3d.Material()
Material951.setAmbientIntensity(0)
Material951.setDiffuseColor(x3d.doubleToFloat([0.5,0.5,0.5]))
Material951.setShininess(0)

Appearance950.setMaterial(Material951)

Shape949.setAppearance(Appearance950)
IndexedFaceSet952 = x3d.IndexedFaceSet()
IndexedFaceSet952.setSolid(False)
IndexedFaceSet952.setTexCoordIndex([3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1])
IndexedFaceSet952.setCoordIndex([3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1])
Coordinate953 = x3d.Coordinate()
Coordinate953.setPoint(x3d.doubleToFloat([16.89704,0.075,10.67343,16.76292,0.075,10.01545,17.30083,0.075,10.59112,17.16671,0.075,9.933146,17.70461,0.075,10.50882,17.57049,0.075,9.85084]))

IndexedFaceSet952.setCoord(Coordinate953)

Shape949.setGeometry(IndexedFaceSet952)

Scene12.addChild(Shape949)
Shape954 = x3d.Shape()
Appearance955 = x3d.Appearance()
Material956 = x3d.Material()
Material956.setAmbientIntensity(0)
Material956.setDiffuseColor(x3d.doubleToFloat([0.5,0.5,0.5]))
Material956.setShininess(0)

Appearance955.setMaterial(Material956)

Shape954.setAppearance(Appearance955)
IndexedFaceSet957 = x3d.IndexedFaceSet()
IndexedFaceSet957.setSolid(False)
IndexedFaceSet957.setTexCoordIndex([3,1,0,-1,3,0,2,-1])
IndexedFaceSet957.setCoordIndex([3,1,0,-1,3,0,2,-1])
Coordinate958 = x3d.Coordinate()
Coordinate958.setPoint(x3d.doubleToFloat([17.43238,0.075,9.173264,17.5665,0.075,9.831243,16.62481,0.075,9.337874,16.75893,0.075,9.995854]))

IndexedFaceSet957.setCoord(Coordinate958)

Shape954.setGeometry(IndexedFaceSet957)

Scene12.addChild(Shape954)
Shape959 = x3d.Shape()
Appearance960 = x3d.Appearance()
Material961 = x3d.Material()
Material961.setAmbientIntensity(0)
Material961.setDiffuseColor(x3d.doubleToFloat([0.5,0.5,0.5]))
Material961.setShininess(0)

Appearance960.setMaterial(Material961)

Shape959.setAppearance(Appearance960)
IndexedFaceSet962 = x3d.IndexedFaceSet()
IndexedFaceSet962.setSolid(False)
IndexedFaceSet962.setTexCoordIndex([3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1])
IndexedFaceSet962.setCoordIndex([3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1])
Coordinate963 = x3d.Coordinate()
Coordinate963.setPoint(x3d.doubleToFloat([16.76216,0.075,7.898419,17.15615,0.075,7.81811,16.89828,0.075,8.566196,17.29227,0.075,8.485888,17.0344,0.075,9.233974,17.42838,0.075,9.153666]))

IndexedFaceSet962.setCoord(Coordinate963)

Shape959.setGeometry(IndexedFaceSet962)

Scene12.addChild(Shape959)
Shape964 = x3d.Shape()
Appearance965 = x3d.Appearance()
Material966 = x3d.Material()
Material966.setAmbientIntensity(0)
Material966.setDiffuseColor(x3d.doubleToFloat([0.5,0.5,0.5]))
Material966.setShininess(0)

Appearance965.setMaterial(Material966)

Shape964.setAppearance(Appearance965)
IndexedFaceSet967 = x3d.IndexedFaceSet()
IndexedFaceSet967.setSolid(False)
IndexedFaceSet967.setTexCoordIndex([3,1,0,-1,3,0,2,-1])
IndexedFaceSet967.setCoordIndex([3,1,0,-1,3,0,2,-1])
Coordinate968 = x3d.Coordinate()
Coordinate968.setPoint(x3d.doubleToFloat([16.34858,0.075,7.982722,16.74257,0.075,7.902413,16.62081,0.075,9.318277,17.0148,0.075,9.237969]))

IndexedFaceSet967.setCoord(Coordinate968)

Shape964.setGeometry(IndexedFaceSet967)

Scene12.addChild(Shape964)
Shape969 = x3d.Shape()
Appearance970 = x3d.Appearance()
Material971 = x3d.Material()
Material971.setAmbientIntensity(0)
Material971.setDiffuseColor(x3d.doubleToFloat([0.5,0.5,0.5]))
Material971.setShininess(0)

Appearance970.setMaterial(Material971)

Shape969.setAppearance(Appearance970)
IndexedFaceSet972 = x3d.IndexedFaceSet()
IndexedFaceSet972.setSolid(False)
IndexedFaceSet972.setTexCoordIndex([3,1,0,-1,3,0,2,-1])
IndexedFaceSet972.setCoordIndex([3,1,0,-1,3,0,2,-1])
Coordinate973 = x3d.Coordinate()
Coordinate973.setPoint(x3d.doubleToFloat([17.01804,0.075,7.140534,17.15216,0.075,7.798513,16.21047,0.075,7.305145,16.34459,0.075,7.963125]))

IndexedFaceSet972.setCoord(Coordinate973)

Shape969.setGeometry(IndexedFaceSet972)

Scene12.addChild(Shape969)
Shape974 = x3d.Shape()
Appearance975 = x3d.Appearance()
Material976 = x3d.Material()
Material976.setAmbientIntensity(0)
Material976.setDiffuseColor(x3d.doubleToFloat([0.5,0.5,0.5]))
Material976.setShininess(0)

Appearance975.setMaterial(Material976)

Shape974.setAppearance(Appearance975)
IndexedFaceSet977 = x3d.IndexedFaceSet()
IndexedFaceSet977.setSolid(False)
IndexedFaceSet977.setTexCoordIndex([3,1,0,-1,3,0,2,-1])
IndexedFaceSet977.setCoordIndex([3,1,0,-1,3,0,2,-1])
Coordinate978 = x3d.Coordinate()
Coordinate978.setPoint(x3d.doubleToFloat([16.20647,0.075,7.285548,16.07235,0.075,6.627569,17.01404,0.075,7.120937,16.87992,0.075,6.462957]))

IndexedFaceSet977.setCoord(Coordinate978)

Shape974.setGeometry(IndexedFaceSet977)

Scene12.addChild(Shape974)
Shape979 = x3d.Shape()
Appearance980 = x3d.Appearance()
Material981 = x3d.Material()
Material981.setAmbientIntensity(0)
Material981.setDiffuseColor(x3d.doubleToFloat([0.5,0.5,0.5]))
Material981.setShininess(0)

Appearance980.setMaterial(Material981)

Shape979.setAppearance(Appearance980)
IndexedFaceSet982 = x3d.IndexedFaceSet()
IndexedFaceSet982.setSolid(False)
IndexedFaceSet982.setTexCoordIndex([4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1])
IndexedFaceSet982.setCoordIndex([4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1])
Coordinate983 = x3d.Coordinate()
Coordinate983.setPoint(x3d.doubleToFloat([16.20971,0.075,5.188113,16.4067,0.075,5.147959,16.60369,0.075,5.107805,16.34583,0.075,5.855891,16.54282,0.075,5.815737,16.73981,0.075,5.775583,16.48194,0.075,6.523669,16.67893,0.075,6.483515,16.87593,0.075,6.44336]))

IndexedFaceSet982.setCoord(Coordinate983)

Shape979.setGeometry(IndexedFaceSet982)

Scene12.addChild(Shape979)
Shape984 = x3d.Shape()
Appearance985 = x3d.Appearance()
Material986 = x3d.Material()
Material986.setAmbientIntensity(0)
Material986.setDiffuseColor(x3d.doubleToFloat([0.5,0.5,0.5]))
Material986.setShininess(0)

Appearance985.setMaterial(Material986)

Shape984.setAppearance(Appearance985)
IndexedFaceSet987 = x3d.IndexedFaceSet()
IndexedFaceSet987.setSolid(False)
IndexedFaceSet987.setTexCoordIndex([4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1])
IndexedFaceSet987.setCoordIndex([4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1])
Coordinate988 = x3d.Coordinate()
Coordinate988.setPoint(x3d.doubleToFloat([15.79612,0.075,5.272416,15.99312,0.075,5.232262,16.19011,0.075,5.192108,15.93224,0.075,5.940194,16.12923,0.075,5.90004,16.32623,0.075,5.859886,16.06836,0.075,6.607972,16.26535,0.075,6.567818,16.46234,0.075,6.527664]))

IndexedFaceSet987.setCoord(Coordinate988)

Shape984.setGeometry(IndexedFaceSet987)

Scene12.addChild(Shape984)
Shape989 = x3d.Shape()
Appearance990 = x3d.Appearance()
Material991 = x3d.Material()
Material991.setAmbientIntensity(0)
Material991.setDiffuseColor(x3d.doubleToFloat([0.5,0.5,0.5]))
Material991.setShininess(0)

Appearance990.setMaterial(Material991)

Shape989.setAppearance(Appearance990)
IndexedFaceSet992 = x3d.IndexedFaceSet()
IndexedFaceSet992.setSolid(False)
IndexedFaceSet992.setTexCoordIndex([3,1,0,-1,3,0,2,-1])
IndexedFaceSet992.setCoordIndex([3,1,0,-1,3,0,2,-1])
Coordinate993 = x3d.Coordinate()
Coordinate993.setPoint(x3d.doubleToFloat([15.79213,0.075,5.252819,15.65801,0.075,4.59484,16.5997,0.075,5.088208,16.46558,0.075,4.430228]))

IndexedFaceSet992.setCoord(Coordinate993)

Shape989.setGeometry(IndexedFaceSet992)

Scene12.addChild(Shape989)
Shape994 = x3d.Shape()
Appearance995 = x3d.Appearance()
Material996 = x3d.Material()
Material996.setAmbientIntensity(0)
Material996.setDiffuseColor(x3d.doubleToFloat([0.5,0.5,0.5]))
Material996.setShininess(0)

Appearance995.setMaterial(Material996)

Shape994.setAppearance(Appearance995)
IndexedFaceSet997 = x3d.IndexedFaceSet()
IndexedFaceSet997.setSolid(False)
IndexedFaceSet997.setTexCoordIndex([3,1,0,-1,3,0,2,-1])
IndexedFaceSet997.setCoordIndex([3,1,0,-1,3,0,2,-1])
Coordinate998 = x3d.Coordinate()
Coordinate998.setPoint(x3d.doubleToFloat([16.32747,0.075,3.752652,16.46159,0.075,4.410631,15.5199,0.075,3.917263,15.65402,0.075,4.575243]))

IndexedFaceSet997.setCoord(Coordinate998)

Shape994.setGeometry(IndexedFaceSet997)

Scene12.addChild(Shape994)
Shape999 = x3d.Shape()
Appearance1000 = x3d.Appearance()
Material1001 = x3d.Material()
Material1001.setAmbientIntensity(0)
Material1001.setDiffuseColor(x3d.doubleToFloat([0.5,0.5,0.5]))
Material1001.setShininess(0)

Appearance1000.setMaterial(Material1001)

Shape999.setAppearance(Appearance1000)
IndexedFaceSet1002 = x3d.IndexedFaceSet()
IndexedFaceSet1002.setSolid(False)
IndexedFaceSet1002.setTexCoordIndex([3,1,0,-1,3,0,2,-1])
IndexedFaceSet1002.setCoordIndex([3,1,0,-1,3,0,2,-1])
Coordinate1003 = x3d.Coordinate()
Coordinate1003.setPoint(x3d.doubleToFloat([15.65725,0.075,2.477808,16.05124,0.075,2.397499,15.92949,0.075,3.813363,16.32347,0.075,3.733055]))

IndexedFaceSet1002.setCoord(Coordinate1003)

Shape999.setGeometry(IndexedFaceSet1002)

Scene12.addChild(Shape999)
Shape1004 = x3d.Shape()
Appearance1005 = x3d.Appearance()
Material1006 = x3d.Material()
Material1006.setAmbientIntensity(0)
Material1006.setDiffuseColor(x3d.doubleToFloat([0.5,0.5,0.5]))
Material1006.setShininess(0)

Appearance1005.setMaterial(Material1006)

Shape1004.setAppearance(Appearance1005)
IndexedFaceSet1007 = x3d.IndexedFaceSet()
IndexedFaceSet1007.setSolid(False)
IndexedFaceSet1007.setTexCoordIndex([3,1,0,-1,3,0,2,-1])
IndexedFaceSet1007.setCoordIndex([3,1,0,-1,3,0,2,-1])
Coordinate1008 = x3d.Coordinate()
Coordinate1008.setPoint(x3d.doubleToFloat([15.24367,0.075,2.56211,15.63765,0.075,2.481802,15.5159,0.075,3.897666,15.90989,0.075,3.817358]))

IndexedFaceSet1007.setCoord(Coordinate1008)

Shape1004.setGeometry(IndexedFaceSet1007)

Scene12.addChild(Shape1004)
Shape1009 = x3d.Shape()
Appearance1010 = x3d.Appearance()
Material1011 = x3d.Material()
Material1011.setAmbientIntensity(0)
Material1011.setDiffuseColor(x3d.doubleToFloat([0.5,0.5,0.5]))
Material1011.setShininess(0)

Appearance1010.setMaterial(Material1011)

Shape1009.setAppearance(Appearance1010)
IndexedFaceSet1012 = x3d.IndexedFaceSet()
IndexedFaceSet1012.setSolid(False)
IndexedFaceSet1012.setTexCoordIndex([4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1])
IndexedFaceSet1012.setCoordIndex([4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1])
Coordinate1013 = x3d.Coordinate()
Coordinate1013.setPoint(x3d.doubleToFloat([20.07841,0.075,28.39432,20.27541,0.075,28.35416,20.4724,0.075,28.31401,20.21453,0.075,29.0621,20.41153,0.075,29.02194,20.60852,0.075,28.98179,20.35065,0.075,29.72987,20.54764,0.075,29.68972,20.74464,0.075,29.64956]))

IndexedFaceSet1012.setCoord(Coordinate1013)

Shape1009.setGeometry(IndexedFaceSet1012)

Scene12.addChild(Shape1009)
Shape1014 = x3d.Shape()
Appearance1015 = x3d.Appearance()
Material1016 = x3d.Material()
Material1016.setAmbientIntensity(0)
Material1016.setDiffuseColor(x3d.doubleToFloat([0.5,0.5,0.5]))
Material1016.setShininess(0)

Appearance1015.setMaterial(Material1016)

Shape1014.setAppearance(Appearance1015)
IndexedFaceSet1017 = x3d.IndexedFaceSet()
IndexedFaceSet1017.setSolid(False)
IndexedFaceSet1017.setTexCoordIndex([3,1,0,-1,3,0,2,-1])
IndexedFaceSet1017.setCoordIndex([3,1,0,-1,3,0,2,-1])
Coordinate1018 = x3d.Coordinate()
Coordinate1018.setPoint(x3d.doubleToFloat([20.19218,0.075,26.93926,19.79819,0.075,27.01957,19.91995,0.075,25.6037,19.52596,0.075,25.68401]))

IndexedFaceSet1017.setCoord(Coordinate1018)

Shape1014.setGeometry(IndexedFaceSet1017)

Scene12.addChild(Shape1014)
Shape1019 = x3d.Shape()
Appearance1020 = x3d.Appearance()
Material1021 = x3d.Material()
Material1021.setAmbientIntensity(0)
Material1021.setDiffuseColor(x3d.doubleToFloat([0.5,0.5,0.5]))
Material1021.setShininess(0)

Appearance1020.setMaterial(Material1021)

Shape1019.setAppearance(Appearance1020)
IndexedFaceSet1022 = x3d.IndexedFaceSet()
IndexedFaceSet1022.setSolid(False)
IndexedFaceSet1022.setTexCoordIndex([3,1,0,-1,3,0,2,-1])
IndexedFaceSet1022.setCoordIndex([3,1,0,-1,3,0,2,-1])
Coordinate1023 = x3d.Coordinate()
Coordinate1023.setPoint(x3d.doubleToFloat([19.10838,0.075,25.74872,18.97426,0.075,25.09074,19.91595,0.075,25.58411,19.78183,0.075,24.92613]))

IndexedFaceSet1022.setCoord(Coordinate1023)

Shape1019.setGeometry(IndexedFaceSet1022)

Scene12.addChild(Shape1019)
Shape1024 = x3d.Shape()
Appearance1025 = x3d.Appearance()
Material1026 = x3d.Material()
Material1026.setAmbientIntensity(0)
Material1026.setDiffuseColor(x3d.doubleToFloat([0.5,0.5,0.5]))
Material1026.setShininess(0)

Appearance1025.setMaterial(Material1026)

Shape1024.setAppearance(Appearance1025)
IndexedFaceSet1027 = x3d.IndexedFaceSet()
IndexedFaceSet1027.setSolid(False)
IndexedFaceSet1027.setTexCoordIndex([3,1,0,-1,3,0,2,-1])
IndexedFaceSet1027.setCoordIndex([3,1,0,-1,3,0,2,-1])
Coordinate1028 = x3d.Coordinate()
Coordinate1028.setPoint(x3d.doubleToFloat([19.64372,0.075,24.24855,19.77784,0.075,24.90653,18.83615,0.075,24.41316,18.97027,0.075,25.07114]))

IndexedFaceSet1027.setCoord(Coordinate1028)

Shape1024.setGeometry(IndexedFaceSet1027)

Scene12.addChild(Shape1024)
Shape1029 = x3d.Shape()
Appearance1030 = x3d.Appearance()
Material1031 = x3d.Material()
Material1031.setAmbientIntensity(0)
Material1031.setDiffuseColor(x3d.doubleToFloat([0.5,0.5,0.5]))
Material1031.setShininess(0)

Appearance1030.setMaterial(Material1031)

Shape1029.setAppearance(Appearance1030)
IndexedFaceSet1032 = x3d.IndexedFaceSet()
IndexedFaceSet1032.setSolid(False)
IndexedFaceSet1032.setTexCoordIndex([3,1,0,-1,3,0,2,-1])
IndexedFaceSet1032.setCoordIndex([3,1,0,-1,3,0,2,-1])
Coordinate1033 = x3d.Coordinate()
Coordinate1033.setPoint(x3d.doubleToFloat([19.63972,0.075,24.22895,19.24574,0.075,24.30926,19.36749,0.075,22.8934,18.9735,0.075,22.97371]))

IndexedFaceSet1032.setCoord(Coordinate1033)

Shape1029.setGeometry(IndexedFaceSet1032)

Scene12.addChild(Shape1029)
Shape1034 = x3d.Shape()
Appearance1035 = x3d.Appearance()
Material1036 = x3d.Material()
Material1036.setAmbientIntensity(0)
Material1036.setDiffuseColor(x3d.doubleToFloat([0.5,0.5,0.5]))
Material1036.setShininess(0)

Appearance1035.setMaterial(Material1036)

Shape1034.setAppearance(Appearance1035)
IndexedFaceSet1037 = x3d.IndexedFaceSet()
IndexedFaceSet1037.setSolid(False)
IndexedFaceSet1037.setTexCoordIndex([4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1])
IndexedFaceSet1037.setCoordIndex([4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1])
Coordinate1038 = x3d.Coordinate()
Coordinate1038.setPoint(x3d.doubleToFloat([18.55992,0.075,23.05801,18.75691,0.075,23.01785,18.95391,0.075,22.9777,18.69604,0.075,23.72579,18.89303,0.075,23.68563,19.09002,0.075,23.64548,18.83215,0.075,24.39357,19.02915,0.075,24.35341,19.22614,0.075,24.31326]))

IndexedFaceSet1037.setCoord(Coordinate1038)

Shape1034.setGeometry(IndexedFaceSet1037)

Scene12.addChild(Shape1034)
Shape1039 = x3d.Shape()
Appearance1040 = x3d.Appearance()
Material1041 = x3d.Material()
Material1041.setAmbientIntensity(0)
Material1041.setDiffuseColor(x3d.doubleToFloat([0.5,0.5,0.5]))
Material1041.setShininess(0)

Appearance1040.setMaterial(Material1041)

Shape1039.setAppearance(Appearance1040)
IndexedFaceSet1042 = x3d.IndexedFaceSet()
IndexedFaceSet1042.setSolid(False)
IndexedFaceSet1042.setTexCoordIndex([3,1,0,-1,3,0,2,-1])
IndexedFaceSet1042.setCoordIndex([3,1,0,-1,3,0,2,-1])
Coordinate1043 = x3d.Coordinate()
Coordinate1043.setPoint(x3d.doubleToFloat([18.55593,0.075,23.03841,18.42181,0.075,22.38043,19.3635,0.075,22.8738,19.22938,0.075,22.21582]))

IndexedFaceSet1042.setCoord(Coordinate1043)

Shape1039.setGeometry(IndexedFaceSet1042)

Scene12.addChild(Shape1039)
Shape1044 = x3d.Shape()
Appearance1045 = x3d.Appearance()
Material1046 = x3d.Material()
Material1046.setAmbientIntensity(0)
Material1046.setDiffuseColor(x3d.doubleToFloat([0.5,0.5,0.5]))
Material1046.setShininess(0)

Appearance1045.setMaterial(Material1046)

Shape1044.setAppearance(Appearance1045)
IndexedFaceSet1047 = x3d.IndexedFaceSet()
IndexedFaceSet1047.setSolid(False)
IndexedFaceSet1047.setTexCoordIndex([3,1,0,-1,3,0,2,-1])
IndexedFaceSet1047.setCoordIndex([3,1,0,-1,3,0,2,-1])
Coordinate1048 = x3d.Coordinate()
Coordinate1048.setPoint(x3d.doubleToFloat([19.09126,0.075,21.53824,19.22538,0.075,22.19622,18.28369,0.075,21.70286,18.41781,0.075,22.36084]))

IndexedFaceSet1047.setCoord(Coordinate1048)

Shape1044.setGeometry(IndexedFaceSet1047)

Scene12.addChild(Shape1044)
Shape1049 = x3d.Shape()
Appearance1050 = x3d.Appearance()
Material1051 = x3d.Material()
Material1051.setAmbientIntensity(0)
Material1051.setDiffuseColor(x3d.doubleToFloat([0.5,0.5,0.5]))
Material1051.setShininess(0)

Appearance1050.setMaterial(Material1051)

Shape1049.setAppearance(Appearance1050)
IndexedFaceSet1052 = x3d.IndexedFaceSet()
IndexedFaceSet1052.setSolid(False)
IndexedFaceSet1052.setTexCoordIndex([3,1,0,-1,3,0,2,-1])
IndexedFaceSet1052.setCoordIndex([3,1,0,-1,3,0,2,-1])
Coordinate1053 = x3d.Coordinate()
Coordinate1053.setPoint(x3d.doubleToFloat([18.42105,0.075,20.2634,18.81503,0.075,20.18309,18.69328,0.075,21.59896,19.08727,0.075,21.51865]))

IndexedFaceSet1052.setCoord(Coordinate1053)

Shape1049.setGeometry(IndexedFaceSet1052)

Scene12.addChild(Shape1049)
Shape1054 = x3d.Shape()
Appearance1055 = x3d.Appearance()
Material1056 = x3d.Material()
Material1056.setAmbientIntensity(0)
Material1056.setDiffuseColor(x3d.doubleToFloat([0.5,0.5,0.5]))
Material1056.setShininess(0)

Appearance1055.setMaterial(Material1056)

Shape1054.setAppearance(Appearance1055)
IndexedFaceSet1057 = x3d.IndexedFaceSet()
IndexedFaceSet1057.setSolid(False)
IndexedFaceSet1057.setTexCoordIndex([3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1])
IndexedFaceSet1057.setCoordIndex([3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1])
Coordinate1058 = x3d.Coordinate()
Coordinate1058.setPoint(x3d.doubleToFloat([18.00746,0.075,20.3477,18.40145,0.075,20.2674,18.14358,0.075,21.01548,18.53757,0.075,20.93517,18.2797,0.075,21.68326,18.67368,0.075,21.60295]))

IndexedFaceSet1057.setCoord(Coordinate1058)

Shape1054.setGeometry(IndexedFaceSet1057)

Scene12.addChild(Shape1054)
Shape1059 = x3d.Shape()
Appearance1060 = x3d.Appearance()
Material1061 = x3d.Material()
Material1061.setAmbientIntensity(0)
Material1061.setDiffuseColor(x3d.doubleToFloat([0.5,0.5,0.5]))
Material1061.setShininess(0)

Appearance1060.setMaterial(Material1061)

Shape1059.setAppearance(Appearance1060)
IndexedFaceSet1062 = x3d.IndexedFaceSet()
IndexedFaceSet1062.setSolid(False)
IndexedFaceSet1062.setTexCoordIndex([3,1,0,-1,3,0,2,-1])
IndexedFaceSet1062.setCoordIndex([3,1,0,-1,3,0,2,-1])
Coordinate1063 = x3d.Coordinate()
Coordinate1063.setPoint(x3d.doubleToFloat([18.00347,0.075,20.32811,17.86935,0.075,19.67013,18.81104,0.075,20.1635,18.67692,0.075,19.50552]))

IndexedFaceSet1062.setCoord(Coordinate1063)

Shape1059.setGeometry(IndexedFaceSet1062)

Scene12.addChild(Shape1059)
Shape1064 = x3d.Shape()
Appearance1065 = x3d.Appearance()
Material1066 = x3d.Material()
Material1066.setAmbientIntensity(0)
Material1066.setDiffuseColor(x3d.doubleToFloat([0.5,0.5,0.5]))
Material1066.setShininess(0)

Appearance1065.setMaterial(Material1066)

Shape1064.setAppearance(Appearance1065)
IndexedFaceSet1067 = x3d.IndexedFaceSet()
IndexedFaceSet1067.setSolid(False)
IndexedFaceSet1067.setTexCoordIndex([3,1,0,-1,3,0,2,-1])
IndexedFaceSet1067.setCoordIndex([3,1,0,-1,3,0,2,-1])
Coordinate1068 = x3d.Coordinate()
Coordinate1068.setPoint(x3d.doubleToFloat([17.86535,0.075,19.65053,17.73124,0.075,18.99255,18.67293,0.075,19.48592,18.53881,0.075,18.82794]))

IndexedFaceSet1067.setCoord(Coordinate1068)

Shape1064.setGeometry(IndexedFaceSet1067)

Scene12.addChild(Shape1064)
Shape1069 = x3d.Shape()
Appearance1070 = x3d.Appearance()
Material1071 = x3d.Material()
Material1071.setAmbientIntensity(0)
Material1071.setDiffuseColor(x3d.doubleToFloat([0.5,0.5,0.5]))
Material1071.setShininess(0)

Appearance1070.setMaterial(Material1071)

Shape1069.setAppearance(Appearance1070)
IndexedFaceSet1072 = x3d.IndexedFaceSet()
IndexedFaceSet1072.setSolid(False)
IndexedFaceSet1072.setTexCoordIndex([4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1])
IndexedFaceSet1072.setCoordIndex([4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1])
Coordinate1073 = x3d.Coordinate()
Coordinate1073.setPoint(x3d.doubleToFloat([17.86859,0.075,17.55309,18.06558,0.075,17.51294,18.26258,0.075,17.47279,18.00471,0.075,18.22087,18.2017,0.075,18.18072,18.39869,0.075,18.14056,18.14083,0.075,18.88865,18.33782,0.075,18.8485,18.53481,0.075,18.80834]))

IndexedFaceSet1072.setCoord(Coordinate1073)

Shape1069.setGeometry(IndexedFaceSet1072)

Scene12.addChild(Shape1069)
Shape1074 = x3d.Shape()
Appearance1075 = x3d.Appearance()
Material1076 = x3d.Material()
Material1076.setAmbientIntensity(0)
Material1076.setDiffuseColor(x3d.doubleToFloat([0.5,0.5,0.5]))
Material1076.setShininess(0)

Appearance1075.setMaterial(Material1076)

Shape1074.setAppearance(Appearance1075)
IndexedFaceSet1077 = x3d.IndexedFaceSet()
IndexedFaceSet1077.setSolid(False)
IndexedFaceSet1077.setTexCoordIndex([3,1,0,-1,3,0,2,-1])
IndexedFaceSet1077.setCoordIndex([3,1,0,-1,3,0,2,-1])
Coordinate1078 = x3d.Coordinate()
Coordinate1078.setPoint(x3d.doubleToFloat([18.12123,0.075,18.89264,17.72724,0.075,18.97295,17.849,0.075,17.55709,17.45501,0.075,17.6374]))

IndexedFaceSet1077.setCoord(Coordinate1078)

Shape1074.setGeometry(IndexedFaceSet1077)

Scene12.addChild(Shape1074)
Shape1079 = x3d.Shape()
Appearance1080 = x3d.Appearance()
Material1081 = x3d.Material()
Material1081.setAmbientIntensity(0)
Material1081.setDiffuseColor(x3d.doubleToFloat([0.5,0.5,0.5]))
Material1081.setShininess(0)

Appearance1080.setMaterial(Material1081)

Shape1079.setAppearance(Appearance1080)
IndexedFaceSet1082 = x3d.IndexedFaceSet()
IndexedFaceSet1082.setSolid(False)
IndexedFaceSet1082.setTexCoordIndex([3,1,0,-1,3,0,2,-1])
IndexedFaceSet1082.setCoordIndex([3,1,0,-1,3,0,2,-1])
Coordinate1083 = x3d.Coordinate()
Coordinate1083.setPoint(x3d.doubleToFloat([18.12446,0.075,16.79521,18.25858,0.075,17.45319,17.31689,0.075,16.95982,17.45101,0.075,17.6178]))

IndexedFaceSet1082.setCoord(Coordinate1083)

Shape1079.setGeometry(IndexedFaceSet1082)

Scene12.addChild(Shape1079)
Shape1084 = x3d.Shape()
Appearance1085 = x3d.Appearance()
Material1086 = x3d.Material()
Material1086.setAmbientIntensity(0)
Material1086.setDiffuseColor(x3d.doubleToFloat([0.5,0.5,0.5]))
Material1086.setShininess(0)

Appearance1085.setMaterial(Material1086)

Shape1084.setAppearance(Appearance1085)
IndexedFaceSet1087 = x3d.IndexedFaceSet()
IndexedFaceSet1087.setSolid(False)
IndexedFaceSet1087.setTexCoordIndex([3,1,0,-1,3,0,2,-1])
IndexedFaceSet1087.setCoordIndex([3,1,0,-1,3,0,2,-1])
Coordinate1088 = x3d.Coordinate()
Coordinate1088.setPoint(x3d.doubleToFloat([17.3129,0.075,16.94022,17.17878,0.075,16.28225,18.12047,0.075,16.77561,17.98635,0.075,16.11763]))

IndexedFaceSet1087.setCoord(Coordinate1088)

Shape1084.setGeometry(IndexedFaceSet1087)

Scene12.addChild(Shape1084)
Shape1089 = x3d.Shape()
Appearance1090 = x3d.Appearance()
Material1091 = x3d.Material()
Material1091.setAmbientIntensity(0)
Material1091.setDiffuseColor(x3d.doubleToFloat([0.5,0.5,0.5]))
Material1091.setShininess(0)

Appearance1090.setMaterial(Material1091)

Shape1089.setAppearance(Appearance1090)
IndexedFaceSet1092 = x3d.IndexedFaceSet()
IndexedFaceSet1092.setSolid(False)
IndexedFaceSet1092.setTexCoordIndex([3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1])
IndexedFaceSet1092.setCoordIndex([3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1])
Coordinate1093 = x3d.Coordinate()
Coordinate1093.setPoint(x3d.doubleToFloat([17.98236,0.075,16.09804,17.58837,0.075,16.17834,17.84624,0.075,15.43026,17.45225,0.075,15.51057,17.71012,0.075,14.76248,17.31614,0.075,14.84279]))

IndexedFaceSet1092.setCoord(Coordinate1093)

Shape1089.setGeometry(IndexedFaceSet1092)

Scene12.addChild(Shape1089)
Shape1094 = x3d.Shape()
Appearance1095 = x3d.Appearance()
Material1096 = x3d.Material()
Material1096.setAmbientIntensity(0)
Material1096.setDiffuseColor(x3d.doubleToFloat([0.5,0.5,0.5]))
Material1096.setShininess(0)

Appearance1095.setMaterial(Material1096)

Shape1094.setAppearance(Appearance1095)
IndexedFaceSet1097 = x3d.IndexedFaceSet()
IndexedFaceSet1097.setSolid(False)
IndexedFaceSet1097.setTexCoordIndex([4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1])
IndexedFaceSet1097.setCoordIndex([4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1])
Coordinate1098 = x3d.Coordinate()
Coordinate1098.setPoint(x3d.doubleToFloat([17.56877,0.075,16.18234,17.37178,0.075,16.22249,17.17479,0.075,16.26265,17.43266,0.075,15.51456,17.23566,0.075,15.55472,17.03867,0.075,15.59487,17.29654,0.075,14.84678,17.09954,0.075,14.88694,16.90255,0.075,14.92709]))

IndexedFaceSet1097.setCoord(Coordinate1098)

Shape1094.setGeometry(IndexedFaceSet1097)

Scene12.addChild(Shape1094)
Shape1099 = x3d.Shape()
Appearance1100 = x3d.Appearance()
Material1101 = x3d.Material()
Material1101.setAmbientIntensity(0)
Material1101.setDiffuseColor(x3d.doubleToFloat([0.5,0.5,0.5]))
Material1101.setShininess(0)

Appearance1100.setMaterial(Material1101)

Shape1099.setAppearance(Appearance1100)
IndexedFaceSet1102 = x3d.IndexedFaceSet()
IndexedFaceSet1102.setSolid(False)
IndexedFaceSet1102.setTexCoordIndex([3,1,0,-1,3,0,2,-1])
IndexedFaceSet1102.setCoordIndex([3,1,0,-1,3,0,2,-1])
Coordinate1103 = x3d.Coordinate()
Coordinate1103.setPoint(x3d.doubleToFloat([17.57201,0.075,14.0849,17.70613,0.075,14.74288,16.76444,0.075,14.24952,16.89856,0.075,14.9075]))

IndexedFaceSet1102.setCoord(Coordinate1103)

Shape1099.setGeometry(IndexedFaceSet1102)

Scene12.addChild(Shape1099)
Shape1104 = x3d.Shape()
Appearance1105 = x3d.Appearance()
Material1106 = x3d.Material()
Material1106.setAmbientIntensity(0)
Material1106.setDiffuseColor(x3d.doubleToFloat([0.5,0.5,0.5]))
Material1106.setShininess(0)

Appearance1105.setMaterial(Material1106)

Shape1104.setAppearance(Appearance1105)
IndexedFaceSet1107 = x3d.IndexedFaceSet()
IndexedFaceSet1107.setSolid(False)
IndexedFaceSet1107.setTexCoordIndex([3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1])
IndexedFaceSet1107.setCoordIndex([3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1])
Coordinate1108 = x3d.Coordinate()
Coordinate1108.setPoint(x3d.doubleToFloat([16.76044,0.075,14.22992,16.62632,0.075,13.57194,17.16423,0.075,14.14761,17.03011,0.075,13.48963,17.56801,0.075,14.06531,17.4339,0.075,13.40733]))

IndexedFaceSet1107.setCoord(Coordinate1108)

Shape1104.setGeometry(IndexedFaceSet1107)

Scene12.addChild(Shape1104)
Shape1109 = x3d.Shape()
Appearance1110 = x3d.Appearance()
Material1111 = x3d.Material()
Material1111.setAmbientIntensity(0)
Material1111.setDiffuseColor(x3d.doubleToFloat([0.5,0.5,0.5]))
Material1111.setShininess(0)

Appearance1110.setMaterial(Material1111)

Shape1109.setAppearance(Appearance1110)
IndexedFaceSet1112 = x3d.IndexedFaceSet()
IndexedFaceSet1112.setSolid(False)
IndexedFaceSet1112.setTexCoordIndex([3,1,0,-1,3,0,2,-1])
IndexedFaceSet1112.setCoordIndex([3,1,0,-1,3,0,2,-1])
Coordinate1113 = x3d.Coordinate()
Coordinate1113.setPoint(x3d.doubleToFloat([16.76368,0.075,12.13248,17.15767,0.075,12.05217,17.03591,0.075,13.46804,17.4299,0.075,13.38773]))

IndexedFaceSet1112.setCoord(Coordinate1113)

Shape1109.setGeometry(IndexedFaceSet1112)

Scene12.addChild(Shape1109)
Shape1114 = x3d.Shape()
Appearance1115 = x3d.Appearance()
Material1116 = x3d.Material()
Material1116.setAmbientIntensity(0)
Material1116.setDiffuseColor(x3d.doubleToFloat([0.5,0.5,0.5]))
Material1116.setShininess(0)

Appearance1115.setMaterial(Material1116)

Shape1114.setAppearance(Appearance1115)
IndexedFaceSet1117 = x3d.IndexedFaceSet()
IndexedFaceSet1117.setSolid(False)
IndexedFaceSet1117.setTexCoordIndex([4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1])
IndexedFaceSet1117.setCoordIndex([4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1])
Coordinate1118 = x3d.Coordinate()
Coordinate1118.setPoint(x3d.doubleToFloat([16.3501,0.075,12.21679,16.54709,0.075,12.17663,16.74408,0.075,12.13648,16.48621,0.075,12.88456,16.68321,0.075,12.84441,16.8802,0.075,12.80426,16.62233,0.075,13.55234,16.81932,0.075,13.51219,17.01632,0.075,13.47203]))

IndexedFaceSet1117.setCoord(Coordinate1118)

Shape1114.setGeometry(IndexedFaceSet1117)

Scene12.addChild(Shape1114)
Shape1119 = x3d.Shape()
Appearance1120 = x3d.Appearance()
Material1121 = x3d.Material()
Material1121.setAmbientIntensity(0)
Material1121.setDiffuseColor(x3d.doubleToFloat([0.5,0.5,0.5]))
Material1121.setShininess(0)

Appearance1120.setMaterial(Material1121)

Shape1119.setAppearance(Appearance1120)
IndexedFaceSet1122 = x3d.IndexedFaceSet()
IndexedFaceSet1122.setSolid(False)
IndexedFaceSet1122.setTexCoordIndex([3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1])
IndexedFaceSet1122.setCoordIndex([3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1])
Coordinate1123 = x3d.Coordinate()
Coordinate1123.setPoint(x3d.doubleToFloat([16.3461,0.075,12.19719,16.21198,0.075,11.53921,16.74989,0.075,12.11488,16.61577,0.075,11.4569,17.15367,0.075,12.03258,17.01955,0.075,11.3746]))

IndexedFaceSet1122.setCoord(Coordinate1123)

Shape1119.setGeometry(IndexedFaceSet1122)

Scene12.addChild(Shape1119)
Shape1124 = x3d.Shape()
Appearance1125 = x3d.Appearance()
Material1126 = x3d.Material()
Material1126.setAmbientIntensity(0)
Material1126.setDiffuseColor(x3d.doubleToFloat([0.5,0.5,0.5]))
Material1126.setShininess(0)

Appearance1125.setMaterial(Material1126)

Shape1124.setAppearance(Appearance1125)
IndexedFaceSet1127 = x3d.IndexedFaceSet()
IndexedFaceSet1127.setSolid(False)
IndexedFaceSet1127.setTexCoordIndex([3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1])
IndexedFaceSet1127.setCoordIndex([3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1])
Coordinate1128 = x3d.Coordinate()
Coordinate1128.setPoint(x3d.doubleToFloat([16.20799,0.075,11.51961,16.07387,0.075,10.86163,16.61177,0.075,11.43731,16.47765,0.075,10.77933,17.01556,0.075,11.355,16.88144,0.075,10.69702]))

IndexedFaceSet1127.setCoord(Coordinate1128)

Shape1124.setGeometry(IndexedFaceSet1127)

Scene12.addChild(Shape1124)
Shape1129 = x3d.Shape()
Appearance1130 = x3d.Appearance()
Material1131 = x3d.Material()
Material1131.setAmbientIntensity(0)
Material1131.setDiffuseColor(x3d.doubleToFloat([0.5,0.5,0.5]))
Material1131.setShininess(0)

Appearance1130.setMaterial(Material1131)

Shape1129.setAppearance(Appearance1130)
IndexedFaceSet1132 = x3d.IndexedFaceSet()
IndexedFaceSet1132.setSolid(False)
IndexedFaceSet1132.setTexCoordIndex([3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1])
IndexedFaceSet1132.setCoordIndex([3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1])
Coordinate1133 = x3d.Coordinate()
Coordinate1133.setPoint(x3d.doubleToFloat([16.87744,0.075,10.67743,16.48346,0.075,10.75773,16.74133,0.075,10.00965,16.34734,0.075,10.08996,16.60521,0.075,9.341869,16.21122,0.075,9.422177]))

IndexedFaceSet1132.setCoord(Coordinate1133)

Shape1129.setGeometry(IndexedFaceSet1132)

Scene12.addChild(Shape1129)
Shape1134 = x3d.Shape()
Appearance1135 = x3d.Appearance()
Material1136 = x3d.Material()
Material1136.setAmbientIntensity(0)
Material1136.setDiffuseColor(x3d.doubleToFloat([0.5,0.5,0.5]))
Material1136.setShininess(0)

Appearance1135.setMaterial(Material1136)

Shape1134.setAppearance(Appearance1135)
IndexedFaceSet1137 = x3d.IndexedFaceSet()
IndexedFaceSet1137.setSolid(False)
IndexedFaceSet1137.setTexCoordIndex([3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1])
IndexedFaceSet1137.setCoordIndex([3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1])
Coordinate1138 = x3d.Coordinate()
Coordinate1138.setPoint(x3d.doubleToFloat([15.79764,0.075,9.506481,16.19163,0.075,9.426172,15.93376,0.075,10.17426,16.32774,0.075,10.09395,16.06987,0.075,10.84204,16.46386,0.075,10.76173]))

IndexedFaceSet1137.setCoord(Coordinate1138)

Shape1134.setGeometry(IndexedFaceSet1137)

Scene12.addChild(Shape1134)
Shape1139 = x3d.Shape()
Appearance1140 = x3d.Appearance()
Material1141 = x3d.Material()
Material1141.setAmbientIntensity(0)
Material1141.setDiffuseColor(x3d.doubleToFloat([0.5,0.5,0.5]))
Material1141.setShininess(0)

Appearance1140.setMaterial(Material1141)

Shape1139.setAppearance(Appearance1140)
IndexedFaceSet1142 = x3d.IndexedFaceSet()
IndexedFaceSet1142.setSolid(False)
IndexedFaceSet1142.setTexCoordIndex([3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1])
IndexedFaceSet1142.setCoordIndex([3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1])
Coordinate1143 = x3d.Coordinate()
Coordinate1143.setPoint(x3d.doubleToFloat([16.4671,0.075,8.664293,16.60122,0.075,9.322272,16.06331,0.075,8.746598,16.19743,0.075,9.404578,15.65953,0.075,8.828904,15.79364,0.075,9.486884]))

IndexedFaceSet1142.setCoord(Coordinate1143)

Shape1139.setGeometry(IndexedFaceSet1142)

Scene12.addChild(Shape1139)
Shape1144 = x3d.Shape()
Appearance1145 = x3d.Appearance()
Material1146 = x3d.Material()
Material1146.setAmbientIntensity(0)
Material1146.setDiffuseColor(x3d.doubleToFloat([0.5,0.5,0.5]))
Material1146.setShininess(0)

Appearance1145.setMaterial(Material1146)

Shape1144.setAppearance(Appearance1145)
IndexedFaceSet1147 = x3d.IndexedFaceSet()
IndexedFaceSet1147.setSolid(False)
IndexedFaceSet1147.setTexCoordIndex([3,1,0,-1,3,0,2,-1])
IndexedFaceSet1147.setCoordIndex([3,1,0,-1,3,0,2,-1])
Coordinate1148 = x3d.Coordinate()
Coordinate1148.setPoint(x3d.doubleToFloat([16.32898,0.075,7.986716,16.4631,0.075,8.644696,15.52141,0.075,8.151328,15.65553,0.075,8.809307]))

IndexedFaceSet1147.setCoord(Coordinate1148)

Shape1144.setGeometry(IndexedFaceSet1147)

Scene12.addChild(Shape1144)
Shape1149 = x3d.Shape()
Appearance1150 = x3d.Appearance()
Material1151 = x3d.Material()
Material1151.setAmbientIntensity(0)
Material1151.setDiffuseColor(x3d.doubleToFloat([0.5,0.5,0.5]))
Material1151.setShininess(0)

Appearance1150.setMaterial(Material1151)

Shape1149.setAppearance(Appearance1150)
IndexedFaceSet1152 = x3d.IndexedFaceSet()
IndexedFaceSet1152.setSolid(False)
IndexedFaceSet1152.setTexCoordIndex([3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1])
IndexedFaceSet1152.setCoordIndex([3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1])
Coordinate1153 = x3d.Coordinate()
Coordinate1153.setPoint(x3d.doubleToFloat([15.65877,0.075,6.711872,16.05276,0.075,6.631564,15.79488,0.075,7.37965,16.18887,0.075,7.299342,15.931,0.075,8.047428,16.32499,0.075,7.967119]))

IndexedFaceSet1152.setCoord(Coordinate1153)

Shape1149.setGeometry(IndexedFaceSet1152)

Scene12.addChild(Shape1149)
Shape1154 = x3d.Shape()
Appearance1155 = x3d.Appearance()
Material1156 = x3d.Material()
Material1156.setAmbientIntensity(0)
Material1156.setDiffuseColor(x3d.doubleToFloat([0.5,0.5,0.5]))
Material1156.setShininess(0)

Appearance1155.setMaterial(Material1156)

Shape1154.setAppearance(Appearance1155)
IndexedFaceSet1157 = x3d.IndexedFaceSet()
IndexedFaceSet1157.setSolid(False)
IndexedFaceSet1157.setTexCoordIndex([4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1])
IndexedFaceSet1157.setCoordIndex([4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1])
Coordinate1158 = x3d.Coordinate()
Coordinate1158.setPoint(x3d.doubleToFloat([15.24518,0.075,6.796175,15.44218,0.075,6.756021,15.63917,0.075,6.715867,15.3813,0.075,7.463953,15.57829,0.075,7.423799,15.77529,0.075,7.383645,15.51742,0.075,8.131731,15.71441,0.075,8.091577,15.9114,0.075,8.051422]))

IndexedFaceSet1157.setCoord(Coordinate1158)

Shape1154.setGeometry(IndexedFaceSet1157)

Scene12.addChild(Shape1154)
Shape1159 = x3d.Shape()
Appearance1160 = x3d.Appearance()
Material1161 = x3d.Material()
Material1161.setAmbientIntensity(0)
Material1161.setDiffuseColor(x3d.doubleToFloat([0.5,0.5,0.5]))
Material1161.setShininess(0)

Appearance1160.setMaterial(Material1161)

Shape1159.setAppearance(Appearance1160)
IndexedFaceSet1162 = x3d.IndexedFaceSet()
IndexedFaceSet1162.setSolid(False)
IndexedFaceSet1162.setTexCoordIndex([3,1,0,-1,3,0,2,-1])
IndexedFaceSet1162.setCoordIndex([3,1,0,-1,3,0,2,-1])
Coordinate1163 = x3d.Coordinate()
Coordinate1163.setPoint(x3d.doubleToFloat([15.91464,0.075,5.953987,16.04876,0.075,6.611967,15.10707,0.075,6.118598,15.24119,0.075,6.776578]))

IndexedFaceSet1162.setCoord(Coordinate1163)

Shape1159.setGeometry(IndexedFaceSet1162)

Scene12.addChild(Shape1159)
Shape1164 = x3d.Shape()
Appearance1165 = x3d.Appearance()
Material1166 = x3d.Material()
Material1166.setAmbientIntensity(0)
Material1166.setDiffuseColor(x3d.doubleToFloat([0.5,0.5,0.5]))
Material1166.setShininess(0)

Appearance1165.setMaterial(Material1166)

Shape1164.setAppearance(Appearance1165)
IndexedFaceSet1167 = x3d.IndexedFaceSet()
IndexedFaceSet1167.setSolid(False)
IndexedFaceSet1167.setTexCoordIndex([4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1])
IndexedFaceSet1167.setCoordIndex([4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1])
Coordinate1168 = x3d.Coordinate()
Coordinate1168.setPoint(x3d.doubleToFloat([15.10308,0.075,6.099001,15.03602,0.075,5.770012,14.96896,0.075,5.441022,15.91065,0.075,5.93439,15.84359,0.075,5.605401,15.77653,0.075,5.276411]))

IndexedFaceSet1167.setCoord(Coordinate1168)

Shape1164.setGeometry(IndexedFaceSet1167)

Scene12.addChild(Shape1164)
Shape1169 = x3d.Shape()
Appearance1170 = x3d.Appearance()
Material1171 = x3d.Material()
Material1171.setAmbientIntensity(0)
Material1171.setDiffuseColor(x3d.doubleToFloat([0.5,0.5,0.5]))
Material1171.setShininess(0)

Appearance1170.setMaterial(Material1171)

Shape1169.setAppearance(Appearance1170)
IndexedFaceSet1172 = x3d.IndexedFaceSet()
IndexedFaceSet1172.setSolid(False)
IndexedFaceSet1172.setTexCoordIndex([3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1])
IndexedFaceSet1172.setCoordIndex([3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1])
Coordinate1173 = x3d.Coordinate()
Coordinate1173.setPoint(x3d.doubleToFloat([15.77253,0.075,5.256814,15.37854,0.075,5.337122,15.63642,0.075,4.589036,15.24243,0.075,4.669344,15.5003,0.075,3.921258,15.10631,0.075,4.001566]))

IndexedFaceSet1172.setCoord(Coordinate1173)

Shape1169.setGeometry(IndexedFaceSet1172)

Scene12.addChild(Shape1169)
Shape1174 = x3d.Shape()
Appearance1175 = x3d.Appearance()
Material1176 = x3d.Material()
Material1176.setAmbientIntensity(0)
Material1176.setDiffuseColor(x3d.doubleToFloat([0.5,0.5,0.5]))
Material1176.setShininess(0)

Appearance1175.setMaterial(Material1176)

Shape1174.setAppearance(Appearance1175)
IndexedFaceSet1177 = x3d.IndexedFaceSet()
IndexedFaceSet1177.setSolid(False)
IndexedFaceSet1177.setTexCoordIndex([4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1])
IndexedFaceSet1177.setCoordIndex([4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1])
Coordinate1178 = x3d.Coordinate()
Coordinate1178.setPoint(x3d.doubleToFloat([14.69273,0.075,4.085869,14.88972,0.075,4.045715,15.08671,0.075,4.005561,14.82884,0.075,4.753647,15.02584,0.075,4.713493,15.22283,0.075,4.673339,14.96496,0.075,5.421425,15.16195,0.075,5.381271,15.35895,0.075,5.341117]))

IndexedFaceSet1177.setCoord(Coordinate1178)

Shape1174.setGeometry(IndexedFaceSet1177)

Scene12.addChild(Shape1174)
Shape1179 = x3d.Shape()
Appearance1180 = x3d.Appearance()
Material1181 = x3d.Material()
Material1181.setAmbientIntensity(0)
Material1181.setDiffuseColor(x3d.doubleToFloat([0.5,0.5,0.5]))
Material1181.setShininess(0)

Appearance1180.setMaterial(Material1181)

Shape1179.setAppearance(Appearance1180)
IndexedFaceSet1182 = x3d.IndexedFaceSet()
IndexedFaceSet1182.setSolid(False)
IndexedFaceSet1182.setTexCoordIndex([3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1])
IndexedFaceSet1182.setCoordIndex([3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1])
Coordinate1183 = x3d.Coordinate()
Coordinate1183.setPoint(x3d.doubleToFloat([15.36218,0.075,3.243681,15.4963,0.075,3.901661,14.9584,0.075,3.325987,15.09252,0.075,3.983967,14.55461,0.075,3.408293,14.68873,0.075,4.066272]))

IndexedFaceSet1182.setCoord(Coordinate1183)

Shape1179.setGeometry(IndexedFaceSet1182)

Scene12.addChild(Shape1179)
Shape1184 = x3d.Shape()
Appearance1185 = x3d.Appearance()
Material1186 = x3d.Material()
Material1186.setAmbientIntensity(0)
Material1186.setDiffuseColor(x3d.doubleToFloat([0.5,0.5,0.5]))
Material1186.setShininess(0)

Appearance1185.setMaterial(Material1186)

Shape1184.setAppearance(Appearance1185)
IndexedFaceSet1187 = x3d.IndexedFaceSet()
IndexedFaceSet1187.setSolid(False)
IndexedFaceSet1187.setTexCoordIndex([3,1,0,-1,3,0,2,-1])
IndexedFaceSet1187.setCoordIndex([3,1,0,-1,3,0,2,-1])
Coordinate1188 = x3d.Coordinate()
Coordinate1188.setPoint(x3d.doubleToFloat([14.55062,0.075,3.388696,14.4165,0.075,2.730716,15.35819,0.075,3.224084,15.22407,0.075,2.566105]))

IndexedFaceSet1187.setCoord(Coordinate1188)

Shape1184.setGeometry(IndexedFaceSet1187)

Scene12.addChild(Shape1184)
Shape1189 = x3d.Shape()
Appearance1190 = x3d.Appearance()
Material1191 = x3d.Material()
Material1191.setAmbientIntensity(0)
Material1191.setDiffuseColor(x3d.doubleToFloat([0.5,0.5,0.5]))
Material1191.setShininess(0)

Appearance1190.setMaterial(Material1191)

Shape1189.setAppearance(Appearance1190)
IndexedFaceSet1192 = x3d.IndexedFaceSet()
IndexedFaceSet1192.setSolid(False)
IndexedFaceSet1192.setTexCoordIndex([3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1])
IndexedFaceSet1192.setCoordIndex([3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1])
Coordinate1193 = x3d.Coordinate()
Coordinate1193.setPoint(x3d.doubleToFloat([17.86687,0.075,23.88459,17.73275,0.075,23.22662,18.27066,0.075,23.80229,18.13654,0.075,23.14431,18.67444,0.075,23.71998,18.54032,0.075,23.062]))

IndexedFaceSet1192.setCoord(Coordinate1193)

Shape1189.setGeometry(IndexedFaceSet1192)

Scene12.addChild(Shape1189)
Shape1194 = x3d.Shape()
Appearance1195 = x3d.Appearance()
Material1196 = x3d.Material()
Material1196.setAmbientIntensity(0)
Material1196.setDiffuseColor(x3d.doubleToFloat([0.5,0.5,0.5]))
Material1196.setShininess(0)

Appearance1195.setMaterial(Material1196)

Shape1194.setAppearance(Appearance1195)
IndexedFaceSet1197 = x3d.IndexedFaceSet()
IndexedFaceSet1197.setSolid(False)
IndexedFaceSet1197.setTexCoordIndex([4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1])
IndexedFaceSet1197.setCoordIndex([4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1])
Coordinate1198 = x3d.Coordinate()
Coordinate1198.setPoint(x3d.doubleToFloat([17.87011,0.075,21.78716,18.0671,0.075,21.74701,18.2641,0.075,21.70685,18.00622,0.075,22.45494,18.20322,0.075,22.41478,18.40021,0.075,22.37463,18.14234,0.075,23.12271,18.33933,0.075,23.08256,18.53633,0.075,23.04241]))

IndexedFaceSet1197.setCoord(Coordinate1198)

Shape1194.setGeometry(IndexedFaceSet1197)

Scene12.addChild(Shape1194)
Shape1199 = x3d.Shape()
Appearance1200 = x3d.Appearance()
Material1201 = x3d.Material()
Material1201.setAmbientIntensity(0)
Material1201.setDiffuseColor(x3d.doubleToFloat([0.5,0.5,0.5]))
Material1201.setShininess(0)

Appearance1200.setMaterial(Material1201)

Shape1199.setAppearance(Appearance1200)
IndexedFaceSet1202 = x3d.IndexedFaceSet()
IndexedFaceSet1202.setSolid(False)
IndexedFaceSet1202.setTexCoordIndex([4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1])
IndexedFaceSet1202.setCoordIndex([4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1])
Coordinate1203 = x3d.Coordinate()
Coordinate1203.setPoint(x3d.doubleToFloat([18.12274,0.075,23.12671,17.92575,0.075,23.16686,17.72876,0.075,23.20702,17.98663,0.075,22.45893,17.78963,0.075,22.49909,17.59264,0.075,22.53924,17.85051,0.075,21.79115,17.65352,0.075,21.83131,17.45652,0.075,21.87146]))

IndexedFaceSet1202.setCoord(Coordinate1203)

Shape1199.setGeometry(IndexedFaceSet1202)

Scene12.addChild(Shape1199)
Shape1204 = x3d.Shape()
Appearance1205 = x3d.Appearance()
Material1206 = x3d.Material()
Material1206.setAmbientIntensity(0)
Material1206.setDiffuseColor(x3d.doubleToFloat([0.5,0.5,0.5]))
Material1206.setShininess(0)

Appearance1205.setMaterial(Material1206)

Shape1204.setAppearance(Appearance1205)
IndexedFaceSet1207 = x3d.IndexedFaceSet()
IndexedFaceSet1207.setSolid(False)
IndexedFaceSet1207.setTexCoordIndex([3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1])
IndexedFaceSet1207.setCoordIndex([3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1])
Coordinate1208 = x3d.Coordinate()
Coordinate1208.setPoint(x3d.doubleToFloat([17.45253,0.075,21.85187,17.31841,0.075,21.19389,17.85631,0.075,21.76956,17.72219,0.075,21.11158,18.2601,0.075,21.68725,18.12598,0.075,21.02927]))

IndexedFaceSet1207.setCoord(Coordinate1208)

Shape1204.setGeometry(IndexedFaceSet1207)

Scene12.addChild(Shape1204)
Shape1209 = x3d.Shape()
Appearance1210 = x3d.Appearance()
Material1211 = x3d.Material()
Material1211.setAmbientIntensity(0)
Material1211.setDiffuseColor(x3d.doubleToFloat([0.5,0.5,0.5]))
Material1211.setShininess(0)

Appearance1210.setMaterial(Material1211)

Shape1209.setAppearance(Appearance1210)
IndexedFaceSet1212 = x3d.IndexedFaceSet()
IndexedFaceSet1212.setSolid(False)
IndexedFaceSet1212.setTexCoordIndex([3,1,0,-1,3,0,2,-1])
IndexedFaceSet1212.setCoordIndex([3,1,0,-1,3,0,2,-1])
Coordinate1213 = x3d.Coordinate()
Coordinate1213.setPoint(x3d.doubleToFloat([17.98787,0.075,20.3517,18.12199,0.075,21.00968,17.1803,0.075,20.51631,17.31441,0.075,21.17429]))

IndexedFaceSet1212.setCoord(Coordinate1213)

Shape1209.setGeometry(IndexedFaceSet1212)

Scene12.addChild(Shape1209)
Shape1214 = x3d.Shape()
Appearance1215 = x3d.Appearance()
Material1216 = x3d.Material()
Material1216.setAmbientIntensity(0)
Material1216.setDiffuseColor(x3d.doubleToFloat([0.5,0.5,0.5]))
Material1216.setShininess(0)

Appearance1215.setMaterial(Material1216)

Shape1214.setAppearance(Appearance1215)
IndexedFaceSet1217 = x3d.IndexedFaceSet()
IndexedFaceSet1217.setSolid(False)
IndexedFaceSet1217.setTexCoordIndex([4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1])
IndexedFaceSet1217.setCoordIndex([4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1])
Coordinate1218 = x3d.Coordinate()
Coordinate1218.setPoint(x3d.doubleToFloat([17.98387,0.075,20.3321,17.78688,0.075,20.37226,17.58989,0.075,20.41241,17.84776,0.075,19.66432,17.65076,0.075,19.70448,17.45377,0.075,19.74463,17.71164,0.075,18.99655,17.51464,0.075,19.0367,17.31765,0.075,19.07685]))

IndexedFaceSet1217.setCoord(Coordinate1218)

Shape1214.setGeometry(IndexedFaceSet1217)

Scene12.addChild(Shape1214)
Shape1219 = x3d.Shape()
Appearance1220 = x3d.Appearance()
Material1221 = x3d.Material()
Material1221.setAmbientIntensity(0)
Material1221.setDiffuseColor(x3d.doubleToFloat([0.5,0.5,0.5]))
Material1221.setShininess(0)

Appearance1220.setMaterial(Material1221)

Shape1219.setAppearance(Appearance1220)
IndexedFaceSet1222 = x3d.IndexedFaceSet()
IndexedFaceSet1222.setSolid(False)
IndexedFaceSet1222.setTexCoordIndex([4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1])
IndexedFaceSet1222.setCoordIndex([4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1])
Coordinate1223 = x3d.Coordinate()
Coordinate1223.setPoint(x3d.doubleToFloat([16.90407,0.075,19.16116,17.10106,0.075,19.121,17.29805,0.075,19.08085,17.04018,0.075,19.82894,17.23718,0.075,19.78878,17.43417,0.075,19.74863,17.1763,0.075,20.49671,17.37329,0.075,20.45656,17.57029,0.075,20.4164]))

IndexedFaceSet1222.setCoord(Coordinate1223)

Shape1219.setGeometry(IndexedFaceSet1222)

Scene12.addChild(Shape1219)
Shape1224 = x3d.Shape()
Appearance1225 = x3d.Appearance()
Material1226 = x3d.Material()
Material1226.setAmbientIntensity(0)
Material1226.setDiffuseColor(x3d.doubleToFloat([0.5,0.5,0.5]))
Material1226.setShininess(0)

Appearance1225.setMaterial(Material1226)

Shape1224.setAppearance(Appearance1225)
IndexedFaceSet1227 = x3d.IndexedFaceSet()
IndexedFaceSet1227.setSolid(False)
IndexedFaceSet1227.setTexCoordIndex([3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1])
IndexedFaceSet1227.setCoordIndex([3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1])
Coordinate1228 = x3d.Coordinate()
Coordinate1228.setPoint(x3d.doubleToFloat([17.57352,0.075,18.31897,17.70764,0.075,18.97695,17.16974,0.075,18.40127,17.30386,0.075,19.05925,16.76595,0.075,18.48358,16.90007,0.075,19.14156]))

IndexedFaceSet1227.setCoord(Coordinate1228)

Shape1224.setGeometry(IndexedFaceSet1227)

Scene12.addChild(Shape1224)
Shape1229 = x3d.Shape()
Appearance1230 = x3d.Appearance()
Material1231 = x3d.Material()
Material1231.setAmbientIntensity(0)
Material1231.setDiffuseColor(x3d.doubleToFloat([0.5,0.5,0.5]))
Material1231.setShininess(0)

Appearance1230.setMaterial(Material1231)

Shape1229.setAppearance(Appearance1230)
IndexedFaceSet1232 = x3d.IndexedFaceSet()
IndexedFaceSet1232.setSolid(False)
IndexedFaceSet1232.setTexCoordIndex([3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1])
IndexedFaceSet1232.setCoordIndex([3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1])
Coordinate1233 = x3d.Coordinate()
Coordinate1233.setPoint(x3d.doubleToFloat([17.43541,0.075,17.64139,17.56953,0.075,18.29937,17.03163,0.075,17.7237,17.16574,0.075,18.38168,16.62784,0.075,17.806,16.76196,0.075,18.46398]))

IndexedFaceSet1232.setCoord(Coordinate1233)

Shape1229.setGeometry(IndexedFaceSet1232)

Scene12.addChild(Shape1229)
Shape1234 = x3d.Shape()
Appearance1235 = x3d.Appearance()
Material1236 = x3d.Material()
Material1236.setAmbientIntensity(0)
Material1236.setDiffuseColor(x3d.doubleToFloat([0.5,0.5,0.5]))
Material1236.setShininess(0)

Appearance1235.setMaterial(Material1236)

Shape1234.setAppearance(Appearance1235)
IndexedFaceSet1237 = x3d.IndexedFaceSet()
IndexedFaceSet1237.setSolid(False)
IndexedFaceSet1237.setTexCoordIndex([4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1])
IndexedFaceSet1237.setCoordIndex([4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1])
Coordinate1238 = x3d.Coordinate()
Coordinate1238.setPoint(x3d.doubleToFloat([16.7652,0.075,16.36655,16.96219,0.075,16.32639,17.15918,0.075,16.28624,16.90131,0.075,17.03433,17.09831,0.075,16.99417,17.2953,0.075,16.95402,17.03743,0.075,17.7021,17.23442,0.075,17.66195,17.43142,0.075,17.6218]))

IndexedFaceSet1237.setCoord(Coordinate1238)

Shape1234.setGeometry(IndexedFaceSet1237)

Scene12.addChild(Shape1234)
Shape1239 = x3d.Shape()
Appearance1240 = x3d.Appearance()
Material1241 = x3d.Material()
Material1241.setAmbientIntensity(0)
Material1241.setDiffuseColor(x3d.doubleToFloat([0.5,0.5,0.5]))
Material1241.setShininess(0)

Appearance1240.setMaterial(Material1241)

Shape1239.setAppearance(Appearance1240)
IndexedFaceSet1242 = x3d.IndexedFaceSet()
IndexedFaceSet1242.setSolid(False)
IndexedFaceSet1242.setTexCoordIndex([3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1])
IndexedFaceSet1242.setCoordIndex([3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1])
Coordinate1243 = x3d.Coordinate()
Coordinate1243.setPoint(x3d.doubleToFloat([16.35161,0.075,16.45085,16.7456,0.075,16.37054,16.48773,0.075,17.11863,16.88172,0.075,17.03832,16.62385,0.075,17.78641,17.01783,0.075,17.7061]))

IndexedFaceSet1242.setCoord(Coordinate1243)

Shape1239.setGeometry(IndexedFaceSet1242)

Scene12.addChild(Shape1239)
Shape1244 = x3d.Shape()
Appearance1245 = x3d.Appearance()
Material1246 = x3d.Material()
Material1246.setAmbientIntensity(0)
Material1246.setDiffuseColor(x3d.doubleToFloat([0.5,0.5,0.5]))
Material1246.setShininess(0)

Appearance1245.setMaterial(Material1246)

Shape1244.setAppearance(Appearance1245)
IndexedFaceSet1247 = x3d.IndexedFaceSet()
IndexedFaceSet1247.setSolid(False)
IndexedFaceSet1247.setTexCoordIndex([3,1,0,-1,3,0,2,-1])
IndexedFaceSet1247.setCoordIndex([3,1,0,-1,3,0,2,-1])
Coordinate1248 = x3d.Coordinate()
Coordinate1248.setPoint(x3d.doubleToFloat([17.02107,0.075,15.60866,17.15519,0.075,16.26664,16.2135,0.075,15.77327,16.34762,0.075,16.43125]))

IndexedFaceSet1247.setCoord(Coordinate1248)

Shape1244.setGeometry(IndexedFaceSet1247)

Scene12.addChild(Shape1244)
Shape1249 = x3d.Shape()
Appearance1250 = x3d.Appearance()
Material1251 = x3d.Material()
Material1251.setAmbientIntensity(0)
Material1251.setDiffuseColor(x3d.doubleToFloat([0.5,0.5,0.5]))
Material1251.setShininess(0)

Appearance1250.setMaterial(Material1251)

Shape1249.setAppearance(Appearance1250)
IndexedFaceSet1252 = x3d.IndexedFaceSet()
IndexedFaceSet1252.setSolid(False)
IndexedFaceSet1252.setTexCoordIndex([3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1])
IndexedFaceSet1252.setCoordIndex([3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1])
Coordinate1253 = x3d.Coordinate()
Coordinate1253.setPoint(x3d.doubleToFloat([16.2095,0.075,15.75368,16.07538,0.075,15.0957,16.61329,0.075,15.67137,16.47917,0.075,15.01339,17.01707,0.075,15.58907,16.88296,0.075,14.93109]))

IndexedFaceSet1252.setCoord(Coordinate1253)

Shape1249.setGeometry(IndexedFaceSet1252)

Scene12.addChild(Shape1249)
Shape1254 = x3d.Shape()
Appearance1255 = x3d.Appearance()
Material1256 = x3d.Material()
Material1256.setAmbientIntensity(0)
Material1256.setDiffuseColor(x3d.doubleToFloat([0.5,0.5,0.5]))
Material1256.setShininess(0)

Appearance1255.setMaterial(Material1256)

Shape1254.setAppearance(Appearance1255)
IndexedFaceSet1257 = x3d.IndexedFaceSet()
IndexedFaceSet1257.setSolid(False)
IndexedFaceSet1257.setTexCoordIndex([3,1,0,-1,3,0,2,-1])
IndexedFaceSet1257.setCoordIndex([3,1,0,-1,3,0,2,-1])
Coordinate1258 = x3d.Coordinate()
Coordinate1258.setPoint(x3d.doubleToFloat([16.87896,0.075,14.91149,16.48497,0.075,14.9918,16.60673,0.075,13.57593,16.21274,0.075,13.65624]))

IndexedFaceSet1257.setCoord(Coordinate1258)

Shape1254.setGeometry(IndexedFaceSet1257)

Scene12.addChild(Shape1254)
Shape1259 = x3d.Shape()
Appearance1260 = x3d.Appearance()
Material1261 = x3d.Material()
Material1261.setAmbientIntensity(0)
Material1261.setDiffuseColor(x3d.doubleToFloat([0.5,0.5,0.5]))
Material1261.setShininess(0)

Appearance1260.setMaterial(Material1261)

Shape1259.setAppearance(Appearance1260)
IndexedFaceSet1262 = x3d.IndexedFaceSet()
IndexedFaceSet1262.setSolid(False)
IndexedFaceSet1262.setTexCoordIndex([3,1,0,-1,3,0,2,-1])
IndexedFaceSet1262.setCoordIndex([3,1,0,-1,3,0,2,-1])
Coordinate1263 = x3d.Coordinate()
Coordinate1263.setPoint(x3d.doubleToFloat([16.46538,0.075,14.99579,16.07139,0.075,15.0761,16.19314,0.075,13.66024,15.79916,0.075,13.74055]))

IndexedFaceSet1262.setCoord(Coordinate1263)

Shape1259.setGeometry(IndexedFaceSet1262)

Scene12.addChild(Shape1259)
Shape1264 = x3d.Shape()
Appearance1265 = x3d.Appearance()
Material1266 = x3d.Material()
Material1266.setAmbientIntensity(0)
Material1266.setDiffuseColor(x3d.doubleToFloat([0.5,0.5,0.5]))
Material1266.setShininess(0)

Appearance1265.setMaterial(Material1266)

Shape1264.setAppearance(Appearance1265)
IndexedFaceSet1267 = x3d.IndexedFaceSet()
IndexedFaceSet1267.setSolid(False)
IndexedFaceSet1267.setTexCoordIndex([3,1,0,-1,3,0,2,-1])
IndexedFaceSet1267.setCoordIndex([3,1,0,-1,3,0,2,-1])
Coordinate1268 = x3d.Coordinate()
Coordinate1268.setPoint(x3d.doubleToFloat([16.46861,0.075,12.89836,16.60273,0.075,13.55634,15.66104,0.075,13.06297,15.79516,0.075,13.72095]))

IndexedFaceSet1267.setCoord(Coordinate1268)

Shape1264.setGeometry(IndexedFaceSet1267)

Scene12.addChild(Shape1264)
Shape1269 = x3d.Shape()
Appearance1270 = x3d.Appearance()
Material1271 = x3d.Material()
Material1271.setAmbientIntensity(0)
Material1271.setDiffuseColor(x3d.doubleToFloat([0.5,0.5,0.5]))
Material1271.setShininess(0)

Appearance1270.setMaterial(Material1271)

Shape1269.setAppearance(Appearance1270)
IndexedFaceSet1272 = x3d.IndexedFaceSet()
IndexedFaceSet1272.setSolid(False)
IndexedFaceSet1272.setTexCoordIndex([3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1])
IndexedFaceSet1272.setCoordIndex([3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1])
Coordinate1273 = x3d.Coordinate()
Coordinate1273.setPoint(x3d.doubleToFloat([15.65705,0.075,13.04337,15.52293,0.075,12.38539,16.06083,0.075,12.96107,15.92671,0.075,12.30309,16.46462,0.075,12.87876,16.3305,0.075,12.22078]))

IndexedFaceSet1272.setCoord(Coordinate1273)

Shape1269.setGeometry(IndexedFaceSet1272)

Scene12.addChild(Shape1269)
Shape1274 = x3d.Shape()
Appearance1275 = x3d.Appearance()
Material1276 = x3d.Material()
Material1276.setAmbientIntensity(0)
Material1276.setDiffuseColor(x3d.doubleToFloat([0.5,0.5,0.5]))
Material1276.setShininess(0)

Appearance1275.setMaterial(Material1276)

Shape1274.setAppearance(Appearance1275)
IndexedFaceSet1277 = x3d.IndexedFaceSet()
IndexedFaceSet1277.setSolid(False)
IndexedFaceSet1277.setTexCoordIndex([3,1,0,-1,3,0,2,-1])
IndexedFaceSet1277.setCoordIndex([3,1,0,-1,3,0,2,-1])
Coordinate1278 = x3d.Coordinate()
Coordinate1278.setPoint(x3d.doubleToFloat([16.3265,0.075,12.20118,15.93252,0.075,12.28149,16.05427,0.075,10.86563,15.66028,0.075,10.94594]))

IndexedFaceSet1277.setCoord(Coordinate1278)

Shape1274.setGeometry(IndexedFaceSet1277)

Scene12.addChild(Shape1274)
Shape1279 = x3d.Shape()
Appearance1280 = x3d.Appearance()
Material1281 = x3d.Material()
Material1281.setAmbientIntensity(0)
Material1281.setDiffuseColor(x3d.doubleToFloat([0.5,0.5,0.5]))
Material1281.setShininess(0)

Appearance1280.setMaterial(Material1281)

Shape1279.setAppearance(Appearance1280)
IndexedFaceSet1282 = x3d.IndexedFaceSet()
IndexedFaceSet1282.setSolid(False)
IndexedFaceSet1282.setTexCoordIndex([3,1,0,-1,3,0,2,-1])
IndexedFaceSet1282.setCoordIndex([3,1,0,-1,3,0,2,-1])
Coordinate1283 = x3d.Coordinate()
Coordinate1283.setPoint(x3d.doubleToFloat([15.91292,0.075,12.28549,15.51893,0.075,12.3658,15.64069,0.075,10.94993,15.2467,0.075,11.03024]))

IndexedFaceSet1282.setCoord(Coordinate1283)

Shape1279.setGeometry(IndexedFaceSet1282)

Scene12.addChild(Shape1279)
Shape1284 = x3d.Shape()
Appearance1285 = x3d.Appearance()
Material1286 = x3d.Material()
Material1286.setAmbientIntensity(0)
Material1286.setDiffuseColor(x3d.doubleToFloat([0.5,0.5,0.5]))
Material1286.setShininess(0)

Appearance1285.setMaterial(Material1286)

Shape1284.setAppearance(Appearance1285)
IndexedFaceSet1287 = x3d.IndexedFaceSet()
IndexedFaceSet1287.setSolid(False)
IndexedFaceSet1287.setTexCoordIndex([3,1,0,-1,3,0,2,-1])
IndexedFaceSet1287.setCoordIndex([3,1,0,-1,3,0,2,-1])
Coordinate1288 = x3d.Coordinate()
Coordinate1288.setPoint(x3d.doubleToFloat([15.24271,0.075,11.01064,15.10859,0.075,10.35266,16.05028,0.075,10.84603,15.91616,0.075,10.18805]))

IndexedFaceSet1287.setCoord(Coordinate1288)

Shape1284.setGeometry(IndexedFaceSet1287)

Scene12.addChild(Shape1284)
Shape1289 = x3d.Shape()
Appearance1290 = x3d.Appearance()
Material1291 = x3d.Material()
Material1291.setAmbientIntensity(0)
Material1291.setDiffuseColor(x3d.doubleToFloat([0.5,0.5,0.5]))
Material1291.setShininess(0)

Appearance1290.setMaterial(Material1291)

Shape1289.setAppearance(Appearance1290)
IndexedFaceSet1292 = x3d.IndexedFaceSet()
IndexedFaceSet1292.setSolid(False)
IndexedFaceSet1292.setTexCoordIndex([3,1,0,-1,3,0,2,-1])
IndexedFaceSet1292.setCoordIndex([3,1,0,-1,3,0,2,-1])
Coordinate1293 = x3d.Coordinate()
Coordinate1293.setPoint(x3d.doubleToFloat([15.10459,0.075,10.33307,14.97047,0.075,9.675087,15.91216,0.075,10.16846,15.77804,0.075,9.510475]))

IndexedFaceSet1292.setCoord(Coordinate1293)

Shape1289.setGeometry(IndexedFaceSet1292)

Scene12.addChild(Shape1289)
Shape1294 = x3d.Shape()
Appearance1295 = x3d.Appearance()
Material1296 = x3d.Material()
Material1296.setAmbientIntensity(0)
Material1296.setDiffuseColor(x3d.doubleToFloat([0.5,0.5,0.5]))
Material1296.setShininess(0)

Appearance1295.setMaterial(Material1296)

Shape1294.setAppearance(Appearance1295)
IndexedFaceSet1297 = x3d.IndexedFaceSet()
IndexedFaceSet1297.setSolid(False)
IndexedFaceSet1297.setTexCoordIndex([3,1,0,-1,3,0,2,-1])
IndexedFaceSet1297.setCoordIndex([3,1,0,-1,3,0,2,-1])
Coordinate1298 = x3d.Coordinate()
Coordinate1298.setPoint(x3d.doubleToFloat([15.77405,0.075,9.490878,15.38006,0.075,9.571187,15.50181,0.075,8.155322,15.10783,0.075,8.235631]))

IndexedFaceSet1297.setCoord(Coordinate1298)

Shape1294.setGeometry(IndexedFaceSet1297)

Scene12.addChild(Shape1294)
Shape1299 = x3d.Shape()
Appearance1300 = x3d.Appearance()
Material1301 = x3d.Material()
Material1301.setAmbientIntensity(0)
Material1301.setDiffuseColor(x3d.doubleToFloat([0.5,0.5,0.5]))
Material1301.setShininess(0)

Appearance1300.setMaterial(Material1301)

Shape1299.setAppearance(Appearance1300)
IndexedFaceSet1302 = x3d.IndexedFaceSet()
IndexedFaceSet1302.setSolid(False)
IndexedFaceSet1302.setTexCoordIndex([4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1])
IndexedFaceSet1302.setCoordIndex([4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1])
Coordinate1303 = x3d.Coordinate()
Coordinate1303.setPoint(x3d.doubleToFloat([15.36046,0.075,9.575181,15.16347,0.075,9.615335,14.96648,0.075,9.65549,15.22435,0.075,8.907403,15.02735,0.075,8.947557,14.83036,0.075,8.987712,15.08823,0.075,8.239626,14.89124,0.075,8.279779,14.69424,0.075,8.319934]))

IndexedFaceSet1302.setCoord(Coordinate1303)

Shape1299.setGeometry(IndexedFaceSet1302)

Scene12.addChild(Shape1299)
Shape1304 = x3d.Shape()
Appearance1305 = x3d.Appearance()
Material1306 = x3d.Material()
Material1306.setAmbientIntensity(0)
Material1306.setDiffuseColor(x3d.doubleToFloat([0.5,0.5,0.5]))
Material1306.setShininess(0)

Appearance1305.setMaterial(Material1306)

Shape1304.setAppearance(Appearance1305)
IndexedFaceSet1307 = x3d.IndexedFaceSet()
IndexedFaceSet1307.setSolid(False)
IndexedFaceSet1307.setTexCoordIndex([3,1,0,-1,3,0,2,-1])
IndexedFaceSet1307.setCoordIndex([3,1,0,-1,3,0,2,-1])
Coordinate1308 = x3d.Coordinate()
Coordinate1308.setPoint(x3d.doubleToFloat([14.69025,0.075,8.300337,14.55613,0.075,7.642357,15.49782,0.075,8.135725,15.3637,0.075,7.477746]))

IndexedFaceSet1307.setCoord(Coordinate1308)

Shape1304.setGeometry(IndexedFaceSet1307)

Scene12.addChild(Shape1304)
Shape1309 = x3d.Shape()
Appearance1310 = x3d.Appearance()
Material1311 = x3d.Material()
Material1311.setAmbientIntensity(0)
Material1311.setDiffuseColor(x3d.doubleToFloat([0.5,0.5,0.5]))
Material1311.setShininess(0)

Appearance1310.setMaterial(Material1311)

Shape1309.setAppearance(Appearance1310)
IndexedFaceSet1312 = x3d.IndexedFaceSet()
IndexedFaceSet1312.setSolid(False)
IndexedFaceSet1312.setTexCoordIndex([3,1,0,-1,3,0,2,-1])
IndexedFaceSet1312.setCoordIndex([3,1,0,-1,3,0,2,-1])
Coordinate1313 = x3d.Coordinate()
Coordinate1313.setPoint(x3d.doubleToFloat([14.55214,0.075,7.62276,14.41802,0.075,6.964781,15.35971,0.075,7.458149,15.22559,0.075,6.800169]))

IndexedFaceSet1312.setCoord(Coordinate1313)

Shape1309.setGeometry(IndexedFaceSet1312)

Scene12.addChild(Shape1309)
Shape1314 = x3d.Shape()
Appearance1315 = x3d.Appearance()
Material1316 = x3d.Material()
Material1316.setAmbientIntensity(0)
Material1316.setDiffuseColor(x3d.doubleToFloat([0.5,0.5,0.5]))
Material1316.setShininess(0)

Appearance1315.setMaterial(Material1316)

Shape1314.setAppearance(Appearance1315)
IndexedFaceSet1317 = x3d.IndexedFaceSet()
IndexedFaceSet1317.setSolid(False)
IndexedFaceSet1317.setTexCoordIndex([3,1,0,-1,3,0,2,-1])
IndexedFaceSet1317.setCoordIndex([3,1,0,-1,3,0,2,-1])
Coordinate1318 = x3d.Coordinate()
Coordinate1318.setPoint(x3d.doubleToFloat([14.55537,0.075,5.525325,14.94936,0.075,5.445017,14.82761,0.075,6.860881,15.22159,0.075,6.780572]))

IndexedFaceSet1317.setCoord(Coordinate1318)

Shape1314.setGeometry(IndexedFaceSet1317)

Scene12.addChild(Shape1314)
Shape1319 = x3d.Shape()
Appearance1320 = x3d.Appearance()
Material1321 = x3d.Material()
Material1321.setAmbientIntensity(0)
Material1321.setDiffuseColor(x3d.doubleToFloat([0.5,0.5,0.5]))
Material1321.setShininess(0)

Appearance1320.setMaterial(Material1321)

Shape1319.setAppearance(Appearance1320)
IndexedFaceSet1322 = x3d.IndexedFaceSet()
IndexedFaceSet1322.setSolid(False)
IndexedFaceSet1322.setTexCoordIndex([3,1,0,-1,3,0,2,-1])
IndexedFaceSet1322.setCoordIndex([3,1,0,-1,3,0,2,-1])
Coordinate1323 = x3d.Coordinate()
Coordinate1323.setPoint(x3d.doubleToFloat([14.14179,0.075,5.609628,14.53578,0.075,5.52932,14.41402,0.075,6.945184,14.80801,0.075,6.864876]))

IndexedFaceSet1322.setCoord(Coordinate1323)

Shape1319.setGeometry(IndexedFaceSet1322)

Scene12.addChild(Shape1319)
Shape1324 = x3d.Shape()
Appearance1325 = x3d.Appearance()
Material1326 = x3d.Material()
Material1326.setAmbientIntensity(0)
Material1326.setDiffuseColor(x3d.doubleToFloat([0.5,0.5,0.5]))
Material1326.setShininess(0)

Appearance1325.setMaterial(Material1326)

Shape1324.setAppearance(Appearance1325)
IndexedFaceSet1327 = x3d.IndexedFaceSet()
IndexedFaceSet1327.setSolid(False)
IndexedFaceSet1327.setTexCoordIndex([3,1,0,-1,3,0,2,-1])
IndexedFaceSet1327.setCoordIndex([3,1,0,-1,3,0,2,-1])
Coordinate1328 = x3d.Coordinate()
Coordinate1328.setPoint(x3d.doubleToFloat([14.13779,0.075,5.590031,14.00367,0.075,4.932052,14.94536,0.075,5.42542,14.81124,0.075,4.76744]))

IndexedFaceSet1327.setCoord(Coordinate1328)

Shape1324.setGeometry(IndexedFaceSet1327)

Scene12.addChild(Shape1324)
Shape1329 = x3d.Shape()
Appearance1330 = x3d.Appearance()
Material1331 = x3d.Material()
Material1331.setAmbientIntensity(0)
Material1331.setDiffuseColor(x3d.doubleToFloat([0.5,0.5,0.5]))
Material1331.setShininess(0)

Appearance1330.setMaterial(Material1331)

Shape1329.setAppearance(Appearance1330)
IndexedFaceSet1332 = x3d.IndexedFaceSet()
IndexedFaceSet1332.setSolid(False)
IndexedFaceSet1332.setTexCoordIndex([3,1,0,-1,3,0,2,-1])
IndexedFaceSet1332.setCoordIndex([3,1,0,-1,3,0,2,-1])
Coordinate1333 = x3d.Coordinate()
Coordinate1333.setPoint(x3d.doubleToFloat([13.99968,0.075,4.912455,13.86556,0.075,4.254475,14.80725,0.075,4.747843,14.67313,0.075,4.089864]))

IndexedFaceSet1332.setCoord(Coordinate1333)

Shape1329.setGeometry(IndexedFaceSet1332)

Scene12.addChild(Shape1329)
Shape1334 = x3d.Shape()
Appearance1335 = x3d.Appearance()
Material1336 = x3d.Material()
Material1336.setAmbientIntensity(0)
Material1336.setDiffuseColor(x3d.doubleToFloat([0.5,0.5,0.5]))
Material1336.setShininess(0)

Appearance1335.setMaterial(Material1336)

Shape1334.setAppearance(Appearance1335)
IndexedFaceSet1337 = x3d.IndexedFaceSet()
IndexedFaceSet1337.setSolid(False)
IndexedFaceSet1337.setTexCoordIndex([3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1])
IndexedFaceSet1337.setCoordIndex([3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1])
Coordinate1338 = x3d.Coordinate()
Coordinate1338.setPoint(x3d.doubleToFloat([14.00292,0.075,2.815019,14.3969,0.075,2.734711,14.13903,0.075,3.482797,14.53302,0.075,3.402489,14.27515,0.075,4.150575,14.66914,0.075,4.070267]))

IndexedFaceSet1337.setCoord(Coordinate1338)

Shape1334.setGeometry(IndexedFaceSet1337)

Scene12.addChild(Shape1334)
Shape1339 = x3d.Shape()
Appearance1340 = x3d.Appearance()
Material1341 = x3d.Material()
Material1341.setAmbientIntensity(0)
Material1341.setDiffuseColor(x3d.doubleToFloat([0.5,0.5,0.5]))
Material1341.setShininess(0)

Appearance1340.setMaterial(Material1341)

Shape1339.setAppearance(Appearance1340)
IndexedFaceSet1342 = x3d.IndexedFaceSet()
IndexedFaceSet1342.setSolid(False)
IndexedFaceSet1342.setTexCoordIndex([3,1,0,-1,3,0,2,-1])
IndexedFaceSet1342.setCoordIndex([3,1,0,-1,3,0,2,-1])
Coordinate1343 = x3d.Coordinate()
Coordinate1343.setPoint(x3d.doubleToFloat([13.58933,0.075,2.899323,13.98332,0.075,2.819014,13.86157,0.075,4.234878,14.25555,0.075,4.15457]))

IndexedFaceSet1342.setCoord(Coordinate1343)

Shape1339.setGeometry(IndexedFaceSet1342)

Scene12.addChild(Shape1339)
Shape1344 = x3d.Shape()
Appearance1345 = x3d.Appearance()
Material1346 = x3d.Material()
Material1346.setAmbientIntensity(0)
Material1346.setDiffuseColor(x3d.doubleToFloat([0.5,0.5,0.5]))
Material1346.setShininess(0)

Appearance1345.setMaterial(Material1346)

Shape1344.setAppearance(Appearance1345)
IndexedFaceSet1347 = x3d.IndexedFaceSet()
IndexedFaceSet1347.setSolid(False)
IndexedFaceSet1347.setTexCoordIndex([3,1,0,-1,3,0,2,-1])
IndexedFaceSet1347.setCoordIndex([3,1,0,-1,3,0,2,-1])
Coordinate1348 = x3d.Coordinate()
Coordinate1348.setPoint(x3d.doubleToFloat([16.90159,0.075,23.37562,16.76747,0.075,22.71765,17.70916,0.075,23.21101,17.57504,0.075,22.55303]))

IndexedFaceSet1347.setCoord(Coordinate1348)

Shape1344.setGeometry(IndexedFaceSet1347)

Scene12.addChild(Shape1344)
Shape1349 = x3d.Shape()
Appearance1350 = x3d.Appearance()
Material1351 = x3d.Material()
Material1351.setAmbientIntensity(0)
Material1351.setDiffuseColor(x3d.doubleToFloat([0.5,0.5,0.5]))
Material1351.setShininess(0)

Appearance1350.setMaterial(Material1351)

Shape1349.setAppearance(Appearance1350)
IndexedFaceSet1352 = x3d.IndexedFaceSet()
IndexedFaceSet1352.setSolid(False)
IndexedFaceSet1352.setTexCoordIndex([4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1])
IndexedFaceSet1352.setCoordIndex([4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1])
Coordinate1353 = x3d.Coordinate()
Coordinate1353.setPoint(x3d.doubleToFloat([16.76348,0.075,22.69805,16.69641,0.075,22.36906,16.62936,0.075,22.04007,17.16726,0.075,22.61574,17.1002,0.075,22.28675,17.03314,0.075,21.95776,17.57105,0.075,22.53344,17.50399,0.075,22.20445,17.43693,0.075,21.87546]))

IndexedFaceSet1352.setCoord(Coordinate1353)

Shape1349.setGeometry(IndexedFaceSet1352)

Scene12.addChild(Shape1349)
Shape1354 = x3d.Shape()
Appearance1355 = x3d.Appearance()
Material1356 = x3d.Material()
Material1356.setAmbientIntensity(0)
Material1356.setDiffuseColor(x3d.doubleToFloat([0.5,0.5,0.5]))
Material1356.setShininess(0)

Appearance1355.setMaterial(Material1356)

Shape1354.setAppearance(Appearance1355)
IndexedFaceSet1357 = x3d.IndexedFaceSet()
IndexedFaceSet1357.setSolid(False)
IndexedFaceSet1357.setTexCoordIndex([4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1])
IndexedFaceSet1357.setCoordIndex([4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1])
Coordinate1358 = x3d.Coordinate()
Coordinate1358.setPoint(x3d.doubleToFloat([16.76671,0.075,20.60061,16.96371,0.075,20.56046,17.1607,0.075,20.5203,16.90283,0.075,21.26839,17.09982,0.075,21.22824,17.29682,0.075,21.18808,17.03895,0.075,21.93617,17.23594,0.075,21.89602,17.43293,0.075,21.85586]))

IndexedFaceSet1357.setCoord(Coordinate1358)

Shape1354.setGeometry(IndexedFaceSet1357)

Scene12.addChild(Shape1354)
Shape1359 = x3d.Shape()
Appearance1360 = x3d.Appearance()
Material1361 = x3d.Material()
Material1361.setAmbientIntensity(0)
Material1361.setDiffuseColor(x3d.doubleToFloat([0.5,0.5,0.5]))
Material1361.setShininess(0)

Appearance1360.setMaterial(Material1361)

Shape1359.setAppearance(Appearance1360)
IndexedFaceSet1362 = x3d.IndexedFaceSet()
IndexedFaceSet1362.setSolid(False)
IndexedFaceSet1362.setTexCoordIndex([3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1])
IndexedFaceSet1362.setCoordIndex([3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1])
Coordinate1363 = x3d.Coordinate()
Coordinate1363.setPoint(x3d.doubleToFloat([16.35313,0.075,20.68492,16.74711,0.075,20.60461,16.48924,0.075,21.35269,16.88323,0.075,21.27238,16.62536,0.075,22.02047,17.01935,0.075,21.94016]))

IndexedFaceSet1362.setCoord(Coordinate1363)

Shape1359.setGeometry(IndexedFaceSet1362)

Scene12.addChild(Shape1359)
Shape1364 = x3d.Shape()
Appearance1365 = x3d.Appearance()
Material1366 = x3d.Material()
Material1366.setAmbientIntensity(0)
Material1366.setDiffuseColor(x3d.doubleToFloat([0.5,0.5,0.5]))
Material1366.setShininess(0)

Appearance1365.setMaterial(Material1366)

Shape1364.setAppearance(Appearance1365)
IndexedFaceSet1367 = x3d.IndexedFaceSet()
IndexedFaceSet1367.setSolid(False)
IndexedFaceSet1367.setTexCoordIndex([3,1,0,-1,3,0,2,-1])
IndexedFaceSet1367.setCoordIndex([3,1,0,-1,3,0,2,-1])
Coordinate1368 = x3d.Coordinate()
Coordinate1368.setPoint(x3d.doubleToFloat([16.34913,0.075,20.66532,16.21501,0.075,20.00734,17.1567,0.075,20.50071,17.02258,0.075,19.84273]))

IndexedFaceSet1367.setCoord(Coordinate1368)

Shape1364.setGeometry(IndexedFaceSet1367)

Scene12.addChild(Shape1364)
Shape1369 = x3d.Shape()
Appearance1370 = x3d.Appearance()
Material1371 = x3d.Material()
Material1371.setAmbientIntensity(0)
Material1371.setDiffuseColor(x3d.doubleToFloat([0.5,0.5,0.5]))
Material1371.setShininess(0)

Appearance1370.setMaterial(Material1371)

Shape1369.setAppearance(Appearance1370)
IndexedFaceSet1372 = x3d.IndexedFaceSet()
IndexedFaceSet1372.setSolid(False)
IndexedFaceSet1372.setTexCoordIndex([3,1,0,-1,3,0,2,-1])
IndexedFaceSet1372.setCoordIndex([3,1,0,-1,3,0,2,-1])
Coordinate1373 = x3d.Coordinate()
Coordinate1373.setPoint(x3d.doubleToFloat([16.21102,0.075,19.98774,16.0769,0.075,19.32976,17.01859,0.075,19.82313,16.88447,0.075,19.16515]))

IndexedFaceSet1372.setCoord(Coordinate1373)

Shape1369.setGeometry(IndexedFaceSet1372)

Scene12.addChild(Shape1369)
Shape1374 = x3d.Shape()
Appearance1375 = x3d.Appearance()
Material1376 = x3d.Material()
Material1376.setAmbientIntensity(0)
Material1376.setDiffuseColor(x3d.doubleToFloat([0.5,0.5,0.5]))
Material1376.setShininess(0)

Appearance1375.setMaterial(Material1376)

Shape1374.setAppearance(Appearance1375)
IndexedFaceSet1377 = x3d.IndexedFaceSet()
IndexedFaceSet1377.setSolid(False)
IndexedFaceSet1377.setTexCoordIndex([3,1,0,-1,3,0,2,-1])
IndexedFaceSet1377.setCoordIndex([3,1,0,-1,3,0,2,-1])
Coordinate1378 = x3d.Coordinate()
Coordinate1378.setPoint(x3d.doubleToFloat([16.21426,0.075,17.89031,16.60824,0.075,17.81,16.48649,0.075,19.22586,16.88048,0.075,19.14555]))

IndexedFaceSet1377.setCoord(Coordinate1378)

Shape1374.setGeometry(IndexedFaceSet1377)

Scene12.addChild(Shape1374)
Shape1379 = x3d.Shape()
Appearance1380 = x3d.Appearance()
Material1381 = x3d.Material()
Material1381.setAmbientIntensity(0)
Material1381.setDiffuseColor(x3d.doubleToFloat([0.5,0.5,0.5]))
Material1381.setShininess(0)

Appearance1380.setMaterial(Material1381)

Shape1379.setAppearance(Appearance1380)
IndexedFaceSet1382 = x3d.IndexedFaceSet()
IndexedFaceSet1382.setSolid(False)
IndexedFaceSet1382.setTexCoordIndex([3,1,0,-1,3,0,2,-1])
IndexedFaceSet1382.setCoordIndex([3,1,0,-1,3,0,2,-1])
Coordinate1383 = x3d.Coordinate()
Coordinate1383.setPoint(x3d.doubleToFloat([15.80067,0.075,17.97461,16.19466,0.075,17.8943,16.0729,0.075,19.31017,16.46689,0.075,19.22986]))

IndexedFaceSet1382.setCoord(Coordinate1383)

Shape1379.setGeometry(IndexedFaceSet1382)

Scene12.addChild(Shape1379)
Shape1384 = x3d.Shape()
Appearance1385 = x3d.Appearance()
Material1386 = x3d.Material()
Material1386.setAmbientIntensity(0)
Material1386.setDiffuseColor(x3d.doubleToFloat([0.5,0.5,0.5]))
Material1386.setShininess(0)

Appearance1385.setMaterial(Material1386)

Shape1384.setAppearance(Appearance1385)
IndexedFaceSet1387 = x3d.IndexedFaceSet()
IndexedFaceSet1387.setSolid(False)
IndexedFaceSet1387.setTexCoordIndex([3,1,0,-1,3,0,2,-1])
IndexedFaceSet1387.setCoordIndex([3,1,0,-1,3,0,2,-1])
Coordinate1388 = x3d.Coordinate()
Coordinate1388.setPoint(x3d.doubleToFloat([15.79668,0.075,17.95501,15.66256,0.075,17.29703,16.60425,0.075,17.7904,16.47013,0.075,17.13242]))

IndexedFaceSet1387.setCoord(Coordinate1388)

Shape1384.setGeometry(IndexedFaceSet1387)

Scene12.addChild(Shape1384)
Shape1389 = x3d.Shape()
Appearance1390 = x3d.Appearance()
Material1391 = x3d.Material()
Material1391.setAmbientIntensity(0)
Material1391.setDiffuseColor(x3d.doubleToFloat([0.5,0.5,0.5]))
Material1391.setShininess(0)

Appearance1390.setMaterial(Material1391)

Shape1389.setAppearance(Appearance1390)
IndexedFaceSet1392 = x3d.IndexedFaceSet()
IndexedFaceSet1392.setSolid(False)
IndexedFaceSet1392.setTexCoordIndex([3,1,0,-1,3,0,2,-1])
IndexedFaceSet1392.setCoordIndex([3,1,0,-1,3,0,2,-1])
Coordinate1393 = x3d.Coordinate()
Coordinate1393.setPoint(x3d.doubleToFloat([16.33201,0.075,16.45485,16.46614,0.075,17.11283,15.52444,0.075,16.61946,15.65856,0.075,17.27744]))

IndexedFaceSet1392.setCoord(Coordinate1393)

Shape1389.setGeometry(IndexedFaceSet1392)

Scene12.addChild(Shape1389)
Shape1394 = x3d.Shape()
Appearance1395 = x3d.Appearance()
Material1396 = x3d.Material()
Material1396.setAmbientIntensity(0)
Material1396.setDiffuseColor(x3d.doubleToFloat([0.5,0.5,0.5]))
Material1396.setShininess(0)

Appearance1395.setMaterial(Material1396)

Shape1394.setAppearance(Appearance1395)
IndexedFaceSet1397 = x3d.IndexedFaceSet()
IndexedFaceSet1397.setSolid(False)
IndexedFaceSet1397.setTexCoordIndex([4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1])
IndexedFaceSet1397.setCoordIndex([4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1])
Coordinate1398 = x3d.Coordinate()
Coordinate1398.setPoint(x3d.doubleToFloat([16.32802,0.075,16.43525,16.13103,0.075,16.4754,15.93403,0.075,16.51556,16.1919,0.075,15.76747,15.99491,0.075,15.80762,15.79792,0.075,15.84778,16.05579,0.075,15.09969,15.85879,0.075,15.13985,15.6618,0.075,15.18]))

IndexedFaceSet1397.setCoord(Coordinate1398)

Shape1394.setGeometry(IndexedFaceSet1397)

Scene12.addChild(Shape1394)
Shape1399 = x3d.Shape()
Appearance1400 = x3d.Appearance()
Material1401 = x3d.Material()
Material1401.setAmbientIntensity(0)
Material1401.setDiffuseColor(x3d.doubleToFloat([0.5,0.5,0.5]))
Material1401.setShininess(0)

Appearance1400.setMaterial(Material1401)

Shape1399.setAppearance(Appearance1400)
IndexedFaceSet1402 = x3d.IndexedFaceSet()
IndexedFaceSet1402.setSolid(False)
IndexedFaceSet1402.setTexCoordIndex([3,1,0,-1,3,0,2,-1])
IndexedFaceSet1402.setCoordIndex([3,1,0,-1,3,0,2,-1])
Coordinate1403 = x3d.Coordinate()
Coordinate1403.setPoint(x3d.doubleToFloat([15.91444,0.075,16.51955,15.52045,0.075,16.59986,15.6422,0.075,15.184,15.24822,0.075,15.2643]))

IndexedFaceSet1402.setCoord(Coordinate1403)

Shape1399.setGeometry(IndexedFaceSet1402)

Scene12.addChild(Shape1399)
Shape1404 = x3d.Shape()
Appearance1405 = x3d.Appearance()
Material1406 = x3d.Material()
Material1406.setAmbientIntensity(0)
Material1406.setDiffuseColor(x3d.doubleToFloat([0.5,0.5,0.5]))
Material1406.setShininess(0)

Appearance1405.setMaterial(Material1406)

Shape1404.setAppearance(Appearance1405)
IndexedFaceSet1407 = x3d.IndexedFaceSet()
IndexedFaceSet1407.setSolid(False)
IndexedFaceSet1407.setTexCoordIndex([3,1,0,-1,3,0,2,-1])
IndexedFaceSet1407.setCoordIndex([3,1,0,-1,3,0,2,-1])
Coordinate1408 = x3d.Coordinate()
Coordinate1408.setPoint(x3d.doubleToFloat([15.91767,0.075,14.42212,16.05179,0.075,15.0801,15.1101,0.075,14.58673,15.24422,0.075,15.24471]))

IndexedFaceSet1407.setCoord(Coordinate1408)

Shape1404.setGeometry(IndexedFaceSet1407)

Scene12.addChild(Shape1404)
Shape1409 = x3d.Shape()
Appearance1410 = x3d.Appearance()
Material1411 = x3d.Material()
Material1411.setAmbientIntensity(0)
Material1411.setDiffuseColor(x3d.doubleToFloat([0.5,0.5,0.5]))
Material1411.setShininess(0)

Appearance1410.setMaterial(Material1411)

Shape1409.setAppearance(Appearance1410)
IndexedFaceSet1412 = x3d.IndexedFaceSet()
IndexedFaceSet1412.setSolid(False)
IndexedFaceSet1412.setTexCoordIndex([3,1,0,-1,3,0,2,-1])
IndexedFaceSet1412.setCoordIndex([3,1,0,-1,3,0,2,-1])
Coordinate1413 = x3d.Coordinate()
Coordinate1413.setPoint(x3d.doubleToFloat([15.77956,0.075,13.74454,15.91368,0.075,14.40252,14.97199,0.075,13.90915,15.10611,0.075,14.56713]))

IndexedFaceSet1412.setCoord(Coordinate1413)

Shape1409.setGeometry(IndexedFaceSet1412)

Scene12.addChild(Shape1409)
Shape1414 = x3d.Shape()
Appearance1415 = x3d.Appearance()
Material1416 = x3d.Material()
Material1416.setAmbientIntensity(0)
Material1416.setDiffuseColor(x3d.doubleToFloat([0.5,0.5,0.5]))
Material1416.setShininess(0)

Appearance1415.setMaterial(Material1416)

Shape1414.setAppearance(Appearance1415)
IndexedFaceSet1417 = x3d.IndexedFaceSet()
IndexedFaceSet1417.setSolid(False)
IndexedFaceSet1417.setTexCoordIndex([3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1])
IndexedFaceSet1417.setCoordIndex([3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1])
Coordinate1418 = x3d.Coordinate()
Coordinate1418.setPoint(x3d.doubleToFloat([15.77556,0.075,13.72494,15.38158,0.075,13.80525,15.63945,0.075,13.05717,15.24546,0.075,13.13747,15.50333,0.075,12.38939,15.10934,0.075,12.4697]))

IndexedFaceSet1417.setCoord(Coordinate1418)

Shape1414.setGeometry(IndexedFaceSet1417)

Scene12.addChild(Shape1414)
Shape1419 = x3d.Shape()
Appearance1420 = x3d.Appearance()
Material1421 = x3d.Material()
Material1421.setAmbientIntensity(0)
Material1421.setDiffuseColor(x3d.doubleToFloat([0.5,0.5,0.5]))
Material1421.setShininess(0)

Appearance1420.setMaterial(Material1421)

Shape1419.setAppearance(Appearance1420)
IndexedFaceSet1422 = x3d.IndexedFaceSet()
IndexedFaceSet1422.setSolid(False)
IndexedFaceSet1422.setTexCoordIndex([3,1,0,-1,3,0,2,-1])
IndexedFaceSet1422.setCoordIndex([3,1,0,-1,3,0,2,-1])
Coordinate1423 = x3d.Coordinate()
Coordinate1423.setPoint(x3d.doubleToFloat([14.69576,0.075,12.554,15.08975,0.075,12.47369,14.96799,0.075,13.88955,15.36198,0.075,13.80925]))

IndexedFaceSet1422.setCoord(Coordinate1423)

Shape1419.setGeometry(IndexedFaceSet1422)

Scene12.addChild(Shape1419)
Shape1424 = x3d.Shape()
Appearance1425 = x3d.Appearance()
Material1426 = x3d.Material()
Material1426.setAmbientIntensity(0)
Material1426.setDiffuseColor(x3d.doubleToFloat([0.5,0.5,0.5]))
Material1426.setShininess(0)

Appearance1425.setMaterial(Material1426)

Shape1424.setAppearance(Appearance1425)
IndexedFaceSet1427 = x3d.IndexedFaceSet()
IndexedFaceSet1427.setSolid(False)
IndexedFaceSet1427.setTexCoordIndex([4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1])
IndexedFaceSet1427.setCoordIndex([4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1])
Coordinate1428 = x3d.Coordinate()
Coordinate1428.setPoint(x3d.doubleToFloat([15.36522,0.075,11.71181,15.43228,0.075,12.0408,15.49934,0.075,12.36979,14.55765,0.075,11.87642,14.62471,0.075,12.20541,14.69177,0.075,12.5344]))

IndexedFaceSet1427.setCoord(Coordinate1428)

Shape1424.setGeometry(IndexedFaceSet1427)

Scene12.addChild(Shape1424)
Shape1429 = x3d.Shape()
Appearance1430 = x3d.Appearance()
Material1431 = x3d.Material()
Material1431.setAmbientIntensity(0)
Material1431.setDiffuseColor(x3d.doubleToFloat([0.5,0.5,0.5]))
Material1431.setShininess(0)

Appearance1430.setMaterial(Material1431)

Shape1429.setAppearance(Appearance1430)
IndexedFaceSet1432 = x3d.IndexedFaceSet()
IndexedFaceSet1432.setSolid(False)
IndexedFaceSet1432.setTexCoordIndex([3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1])
IndexedFaceSet1432.setCoordIndex([3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1])
Coordinate1433 = x3d.Coordinate()
Coordinate1433.setPoint(x3d.doubleToFloat([14.55365,0.075,11.85682,14.41953,0.075,11.19885,14.95744,0.075,11.77452,14.82332,0.075,11.11654,15.36122,0.075,11.69221,15.2271,0.075,11.03423]))

IndexedFaceSet1432.setCoord(Coordinate1433)

Shape1429.setGeometry(IndexedFaceSet1432)

Scene12.addChild(Shape1429)
Shape1434 = x3d.Shape()
Appearance1435 = x3d.Appearance()
Material1436 = x3d.Material()
Material1436.setAmbientIntensity(0)
Material1436.setDiffuseColor(x3d.doubleToFloat([0.5,0.5,0.5]))
Material1436.setShininess(0)

Appearance1435.setMaterial(Material1436)

Shape1434.setAppearance(Appearance1435)
IndexedFaceSet1437 = x3d.IndexedFaceSet()
IndexedFaceSet1437.setSolid(False)
IndexedFaceSet1437.setTexCoordIndex([3,1,0,-1,3,0,2,-1])
IndexedFaceSet1437.setCoordIndex([3,1,0,-1,3,0,2,-1])
Coordinate1438 = x3d.Coordinate()
Coordinate1438.setPoint(x3d.doubleToFloat([15.22311,0.075,11.01464,14.82912,0.075,11.09495,14.95088,0.075,9.679081,14.55689,0.075,9.75939]))

IndexedFaceSet1437.setCoord(Coordinate1438)

Shape1434.setGeometry(IndexedFaceSet1437)

Scene12.addChild(Shape1434)
Shape1439 = x3d.Shape()
Appearance1440 = x3d.Appearance()
Material1441 = x3d.Material()
Material1441.setAmbientIntensity(0)
Material1441.setDiffuseColor(x3d.doubleToFloat([0.5,0.5,0.5]))
Material1441.setShininess(0)

Appearance1440.setMaterial(Material1441)

Shape1439.setAppearance(Appearance1440)
IndexedFaceSet1442 = x3d.IndexedFaceSet()
IndexedFaceSet1442.setSolid(False)
IndexedFaceSet1442.setTexCoordIndex([3,1,0,-1,3,0,2,-1])
IndexedFaceSet1442.setCoordIndex([3,1,0,-1,3,0,2,-1])
Coordinate1443 = x3d.Coordinate()
Coordinate1443.setPoint(x3d.doubleToFloat([14.1433,0.075,9.843693,14.53729,0.075,9.763384,14.41554,0.075,11.17925,14.80952,0.075,11.09894]))

IndexedFaceSet1442.setCoord(Coordinate1443)

Shape1439.setGeometry(IndexedFaceSet1442)

Scene12.addChild(Shape1439)
Shape1444 = x3d.Shape()
Appearance1445 = x3d.Appearance()
Material1446 = x3d.Material()
Material1446.setAmbientIntensity(0)
Material1446.setDiffuseColor(x3d.doubleToFloat([0.5,0.5,0.5]))
Material1446.setShininess(0)

Appearance1445.setMaterial(Material1446)

Shape1444.setAppearance(Appearance1445)
IndexedFaceSet1447 = x3d.IndexedFaceSet()
IndexedFaceSet1447.setSolid(False)
IndexedFaceSet1447.setTexCoordIndex([4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1])
IndexedFaceSet1447.setCoordIndex([4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1])
Coordinate1448 = x3d.Coordinate()
Coordinate1448.setPoint(x3d.doubleToFloat([14.13931,0.075,9.824096,14.07225,0.075,9.495106,14.00519,0.075,9.166117,14.94688,0.075,9.659484,14.87982,0.075,9.330495,14.81276,0.075,9.001505]))

IndexedFaceSet1447.setCoord(Coordinate1448)

Shape1444.setGeometry(IndexedFaceSet1447)

Scene12.addChild(Shape1444)
Shape1449 = x3d.Shape()
Appearance1450 = x3d.Appearance()
Material1451 = x3d.Material()
Material1451.setAmbientIntensity(0)
Material1451.setDiffuseColor(x3d.doubleToFloat([0.5,0.5,0.5]))
Material1451.setShininess(0)

Appearance1450.setMaterial(Material1451)

Shape1449.setAppearance(Appearance1450)
IndexedFaceSet1452 = x3d.IndexedFaceSet()
IndexedFaceSet1452.setSolid(False)
IndexedFaceSet1452.setTexCoordIndex([4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1])
IndexedFaceSet1452.setCoordIndex([4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1])
Coordinate1453 = x3d.Coordinate()
Coordinate1453.setPoint(x3d.doubleToFloat([14.67465,0.075,8.323929,14.74171,0.075,8.652918,14.80877,0.075,8.981908,14.27086,0.075,8.406234,14.33792,0.075,8.735224,14.40498,0.075,9.064214,13.86708,0.075,8.48854,13.93414,0.075,8.81753,14.00119,0.075,9.14652]))

IndexedFaceSet1452.setCoord(Coordinate1453)

Shape1449.setGeometry(IndexedFaceSet1452)

Scene12.addChild(Shape1449)
Shape1454 = x3d.Shape()
Appearance1455 = x3d.Appearance()
Material1456 = x3d.Material()
Material1456.setAmbientIntensity(0)
Material1456.setDiffuseColor(x3d.doubleToFloat([0.5,0.5,0.5]))
Material1456.setShininess(0)

Appearance1455.setMaterial(Material1456)

Shape1454.setAppearance(Appearance1455)
IndexedFaceSet1457 = x3d.IndexedFaceSet()
IndexedFaceSet1457.setSolid(False)
IndexedFaceSet1457.setTexCoordIndex([3,1,0,-1,3,0,2,-1])
IndexedFaceSet1457.setCoordIndex([3,1,0,-1,3,0,2,-1])
Coordinate1458 = x3d.Coordinate()
Coordinate1458.setPoint(x3d.doubleToFloat([14.67065,0.075,8.304332,14.27667,0.075,8.38464,14.39842,0.075,6.968776,14.00443,0.075,7.049084]))

IndexedFaceSet1457.setCoord(Coordinate1458)

Shape1454.setGeometry(IndexedFaceSet1457)

Scene12.addChild(Shape1454)
Shape1459 = x3d.Shape()
Appearance1460 = x3d.Appearance()
Material1461 = x3d.Material()
Material1461.setAmbientIntensity(0)
Material1461.setDiffuseColor(x3d.doubleToFloat([0.5,0.5,0.5]))
Material1461.setShininess(0)

Appearance1460.setMaterial(Material1461)

Shape1459.setAppearance(Appearance1460)
IndexedFaceSet1462 = x3d.IndexedFaceSet()
IndexedFaceSet1462.setSolid(False)
IndexedFaceSet1462.setTexCoordIndex([3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1])
IndexedFaceSet1462.setCoordIndex([3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1])
Coordinate1463 = x3d.Coordinate()
Coordinate1463.setPoint(x3d.doubleToFloat([13.59085,0.075,7.133387,13.98483,0.075,7.053079,13.72696,0.075,7.801165,14.12095,0.075,7.720857,13.86308,0.075,8.468943,14.25707,0.075,8.388635]))

IndexedFaceSet1462.setCoord(Coordinate1463)

Shape1459.setGeometry(IndexedFaceSet1462)

Scene12.addChild(Shape1459)
Shape1464 = x3d.Shape()
Appearance1465 = x3d.Appearance()
Material1466 = x3d.Material()
Material1466.setAmbientIntensity(0)
Material1466.setDiffuseColor(x3d.doubleToFloat([0.5,0.5,0.5]))
Material1466.setShininess(0)

Appearance1465.setMaterial(Material1466)

Shape1464.setAppearance(Appearance1465)
IndexedFaceSet1467 = x3d.IndexedFaceSet()
IndexedFaceSet1467.setSolid(False)
IndexedFaceSet1467.setTexCoordIndex([3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1])
IndexedFaceSet1467.setCoordIndex([3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1])
Coordinate1468 = x3d.Coordinate()
Coordinate1468.setPoint(x3d.doubleToFloat([14.2603,0.075,6.291199,14.39442,0.075,6.949179,13.85652,0.075,6.373505,13.99064,0.075,7.031484,13.45273,0.075,6.455811,13.58685,0.075,7.11379]))

IndexedFaceSet1467.setCoord(Coordinate1468)

Shape1464.setGeometry(IndexedFaceSet1467)

Scene12.addChild(Shape1464)
Shape1469 = x3d.Shape()
Appearance1470 = x3d.Appearance()
Material1471 = x3d.Material()
Material1471.setAmbientIntensity(0)
Material1471.setDiffuseColor(x3d.doubleToFloat([0.5,0.5,0.5]))
Material1471.setShininess(0)

Appearance1470.setMaterial(Material1471)

Shape1469.setAppearance(Appearance1470)
IndexedFaceSet1472 = x3d.IndexedFaceSet()
IndexedFaceSet1472.setSolid(False)
IndexedFaceSet1472.setTexCoordIndex([3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1])
IndexedFaceSet1472.setCoordIndex([3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1])
Coordinate1473 = x3d.Coordinate()
Coordinate1473.setPoint(x3d.doubleToFloat([13.44874,0.075,6.436213,13.31462,0.075,5.778234,13.85252,0.075,6.353908,13.71841,0.075,5.695929,14.25631,0.075,6.271602,14.12219,0.075,5.613623]))

IndexedFaceSet1472.setCoord(Coordinate1473)

Shape1469.setGeometry(IndexedFaceSet1472)

Scene12.addChild(Shape1469)
Shape1474 = x3d.Shape()
Appearance1475 = x3d.Appearance()
Material1476 = x3d.Material()
Material1476.setAmbientIntensity(0)
Material1476.setDiffuseColor(x3d.doubleToFloat([0.5,0.5,0.5]))
Material1476.setShininess(0)

Appearance1475.setMaterial(Material1476)

Shape1474.setAppearance(Appearance1475)
IndexedFaceSet1477 = x3d.IndexedFaceSet()
IndexedFaceSet1477.setSolid(False)
IndexedFaceSet1477.setTexCoordIndex([3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1])
IndexedFaceSet1477.setCoordIndex([3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1])
Coordinate1478 = x3d.Coordinate()
Coordinate1478.setPoint(x3d.doubleToFloat([14.1182,0.075,5.594026,13.72421,0.075,5.674334,13.98208,0.075,4.926248,13.58809,0.075,5.006556,13.84596,0.075,4.25847,13.45198,0.075,4.338778]))

IndexedFaceSet1477.setCoord(Coordinate1478)

Shape1474.setGeometry(IndexedFaceSet1477)

Scene12.addChild(Shape1474)
Shape1479 = x3d.Shape()
Appearance1480 = x3d.Appearance()
Material1481 = x3d.Material()
Material1481.setAmbientIntensity(0)
Material1481.setDiffuseColor(x3d.doubleToFloat([0.5,0.5,0.5]))
Material1481.setShininess(0)

Appearance1480.setMaterial(Material1481)

Shape1479.setAppearance(Appearance1480)
IndexedFaceSet1482 = x3d.IndexedFaceSet()
IndexedFaceSet1482.setSolid(False)
IndexedFaceSet1482.setTexCoordIndex([3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1])
IndexedFaceSet1482.setCoordIndex([3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1])
Coordinate1483 = x3d.Coordinate()
Coordinate1483.setPoint(x3d.doubleToFloat([13.03839,0.075,4.423081,13.43238,0.075,4.342773,13.17451,0.075,5.090859,13.5685,0.075,5.010551,13.31063,0.075,5.758637,13.70461,0.075,5.678329]))

IndexedFaceSet1482.setCoord(Coordinate1483)

Shape1479.setGeometry(IndexedFaceSet1482)

Scene12.addChild(Shape1479)
Shape1484 = x3d.Shape()
Appearance1485 = x3d.Appearance()
Material1486 = x3d.Material()
Material1486.setAmbientIntensity(0)
Material1486.setDiffuseColor(x3d.doubleToFloat([0.5,0.5,0.5]))
Material1486.setShininess(0)

Appearance1485.setMaterial(Material1486)

Shape1484.setAppearance(Appearance1485)
IndexedFaceSet1487 = x3d.IndexedFaceSet()
IndexedFaceSet1487.setSolid(False)
IndexedFaceSet1487.setTexCoordIndex([3,1,0,-1,3,0,2,-1])
IndexedFaceSet1487.setCoordIndex([3,1,0,-1,3,0,2,-1])
Coordinate1488 = x3d.Coordinate()
Coordinate1488.setPoint(x3d.doubleToFloat([13.0344,0.075,4.403484,12.90028,0.075,3.745505,13.84197,0.075,4.238873,13.70785,0.075,3.580894]))

IndexedFaceSet1487.setCoord(Coordinate1488)

Shape1484.setGeometry(IndexedFaceSet1487)

Scene12.addChild(Shape1484)
Shape1489 = x3d.Shape()
Appearance1490 = x3d.Appearance()
Material1491 = x3d.Material()
Material1491.setAmbientIntensity(0)
Material1491.setDiffuseColor(x3d.doubleToFloat([0.5,0.5,0.5]))
Material1491.setShininess(0)

Appearance1490.setMaterial(Material1491)

Shape1489.setAppearance(Appearance1490)
IndexedFaceSet1492 = x3d.IndexedFaceSet()
IndexedFaceSet1492.setSolid(False)
IndexedFaceSet1492.setTexCoordIndex([3,1,0,-1,3,0,2,-1])
IndexedFaceSet1492.setCoordIndex([3,1,0,-1,3,0,2,-1])
Coordinate1493 = x3d.Coordinate()
Coordinate1493.setPoint(x3d.doubleToFloat([13.56973,0.075,2.903317,13.70385,0.075,3.561296,12.76216,0.075,3.067929,12.89628,0.075,3.725908]))

IndexedFaceSet1492.setCoord(Coordinate1493)

Shape1489.setGeometry(IndexedFaceSet1492)

Scene12.addChild(Shape1489)
Shape1494 = x3d.Shape()
Appearance1495 = x3d.Appearance()
Material1496 = x3d.Material()
Material1496.setAmbientIntensity(0)
Material1496.setDiffuseColor(x3d.doubleToFloat([0.5,0.5,0.5]))
Material1496.setShininess(0)

Appearance1495.setMaterial(Material1496)

Shape1494.setAppearance(Appearance1495)
IndexedFaceSet1497 = x3d.IndexedFaceSet()
IndexedFaceSet1497.setSolid(False)
IndexedFaceSet1497.setTexCoordIndex([3,1,0,-1,3,0,2,-1])
IndexedFaceSet1497.setCoordIndex([3,1,0,-1,3,0,2,-1])
Coordinate1498 = x3d.Coordinate()
Coordinate1498.setPoint(x3d.doubleToFloat([16.47165,0.075,21.36649,16.60576,0.075,22.02447,15.66407,0.075,21.5311,15.79819,0.075,22.18908]))

IndexedFaceSet1497.setCoord(Coordinate1498)

Shape1494.setGeometry(IndexedFaceSet1497)

Scene12.addChild(Shape1494)
Shape1499 = x3d.Shape()
Appearance1500 = x3d.Appearance()
Material1501 = x3d.Material()
Material1501.setAmbientIntensity(0)
Material1501.setDiffuseColor(x3d.doubleToFloat([0.5,0.5,0.5]))
Material1501.setShininess(0)

Appearance1500.setMaterial(Material1501)

Shape1499.setAppearance(Appearance1500)
IndexedFaceSet1502 = x3d.IndexedFaceSet()
IndexedFaceSet1502.setSolid(False)
IndexedFaceSet1502.setTexCoordIndex([3,1,0,-1,3,0,2,-1])
IndexedFaceSet1502.setCoordIndex([3,1,0,-1,3,0,2,-1])
Coordinate1503 = x3d.Coordinate()
Coordinate1503.setPoint(x3d.doubleToFloat([15.66008,0.075,21.5115,15.52596,0.075,20.85352,16.46765,0.075,21.34689,16.33353,0.075,20.68891]))

IndexedFaceSet1502.setCoord(Coordinate1503)

Shape1499.setGeometry(IndexedFaceSet1502)

Scene12.addChild(Shape1499)
Shape1504 = x3d.Shape()
Appearance1505 = x3d.Appearance()
Material1506 = x3d.Material()
Material1506.setAmbientIntensity(0)
Material1506.setDiffuseColor(x3d.doubleToFloat([0.5,0.5,0.5]))
Material1506.setShininess(0)

Appearance1505.setMaterial(Material1506)

Shape1504.setAppearance(Appearance1505)
IndexedFaceSet1507 = x3d.IndexedFaceSet()
IndexedFaceSet1507.setSolid(False)
IndexedFaceSet1507.setTexCoordIndex([4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1])
IndexedFaceSet1507.setCoordIndex([4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1])
Coordinate1508 = x3d.Coordinate()
Coordinate1508.setPoint(x3d.doubleToFloat([15.66332,0.075,19.41407,15.86031,0.075,19.37391,16.0573,0.075,19.33376,15.79943,0.075,20.08184,15.99643,0.075,20.04169,16.19342,0.075,20.00154,15.93555,0.075,20.74962,16.13254,0.075,20.70947,16.32954,0.075,20.66931]))

IndexedFaceSet1507.setCoord(Coordinate1508)

Shape1504.setGeometry(IndexedFaceSet1507)

Scene12.addChild(Shape1504)
Shape1509 = x3d.Shape()
Appearance1510 = x3d.Appearance()
Material1511 = x3d.Material()
Material1511.setAmbientIntensity(0)
Material1511.setDiffuseColor(x3d.doubleToFloat([0.5,0.5,0.5]))
Material1511.setShininess(0)

Appearance1510.setMaterial(Material1511)

Shape1509.setAppearance(Appearance1510)
IndexedFaceSet1512 = x3d.IndexedFaceSet()
IndexedFaceSet1512.setSolid(False)
IndexedFaceSet1512.setTexCoordIndex([3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1])
IndexedFaceSet1512.setCoordIndex([3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1])
Coordinate1513 = x3d.Coordinate()
Coordinate1513.setPoint(x3d.doubleToFloat([15.24973,0.075,19.49837,15.64372,0.075,19.41806,15.38585,0.075,20.16615,15.77984,0.075,20.08584,15.52197,0.075,20.83393,15.91595,0.075,20.75362]))

IndexedFaceSet1512.setCoord(Coordinate1513)

Shape1509.setGeometry(IndexedFaceSet1512)

Scene12.addChild(Shape1509)
Shape1514 = x3d.Shape()
Appearance1515 = x3d.Appearance()
Material1516 = x3d.Material()
Material1516.setAmbientIntensity(0)
Material1516.setDiffuseColor(x3d.doubleToFloat([0.5,0.5,0.5]))
Material1516.setShininess(0)

Appearance1515.setMaterial(Material1516)

Shape1514.setAppearance(Appearance1515)
IndexedFaceSet1517 = x3d.IndexedFaceSet()
IndexedFaceSet1517.setSolid(False)
IndexedFaceSet1517.setTexCoordIndex([3,1,0,-1,3,0,2,-1])
IndexedFaceSet1517.setCoordIndex([3,1,0,-1,3,0,2,-1])
Coordinate1518 = x3d.Coordinate()
Coordinate1518.setPoint(x3d.doubleToFloat([15.91919,0.075,18.65618,16.05331,0.075,19.31416,15.11162,0.075,18.82079,15.24574,0.075,19.47877]))

IndexedFaceSet1517.setCoord(Coordinate1518)

Shape1514.setGeometry(IndexedFaceSet1517)

Scene12.addChild(Shape1514)
Shape1519 = x3d.Shape()
Appearance1520 = x3d.Appearance()
Material1521 = x3d.Material()
Material1521.setAmbientIntensity(0)
Material1521.setDiffuseColor(x3d.doubleToFloat([0.5,0.5,0.5]))
Material1521.setShininess(0)

Appearance1520.setMaterial(Material1521)

Shape1519.setAppearance(Appearance1520)
IndexedFaceSet1522 = x3d.IndexedFaceSet()
IndexedFaceSet1522.setSolid(False)
IndexedFaceSet1522.setTexCoordIndex([3,1,0,-1,3,0,2,-1])
IndexedFaceSet1522.setCoordIndex([3,1,0,-1,3,0,2,-1])
Coordinate1523 = x3d.Coordinate()
Coordinate1523.setPoint(x3d.doubleToFloat([15.10762,0.075,18.8012,14.9735,0.075,18.14322,15.91519,0.075,18.63658,15.78107,0.075,17.97861]))

IndexedFaceSet1522.setCoord(Coordinate1523)

Shape1519.setGeometry(IndexedFaceSet1522)

Scene12.addChild(Shape1519)
Shape1524 = x3d.Shape()
Appearance1525 = x3d.Appearance()
Material1526 = x3d.Material()
Material1526.setAmbientIntensity(0)
Material1526.setDiffuseColor(x3d.doubleToFloat([0.5,0.5,0.5]))
Material1526.setShininess(0)

Appearance1525.setMaterial(Material1526)

Shape1524.setAppearance(Appearance1525)
IndexedFaceSet1527 = x3d.IndexedFaceSet()
IndexedFaceSet1527.setSolid(False)
IndexedFaceSet1527.setTexCoordIndex([3,1,0,-1,3,0,2,-1])
IndexedFaceSet1527.setCoordIndex([3,1,0,-1,3,0,2,-1])
Coordinate1528 = x3d.Coordinate()
Coordinate1528.setPoint(x3d.doubleToFloat([15.11086,0.075,16.70376,15.50485,0.075,16.62345,15.38309,0.075,18.03932,15.77708,0.075,17.95901]))

IndexedFaceSet1527.setCoord(Coordinate1528)

Shape1524.setGeometry(IndexedFaceSet1527)

Scene12.addChild(Shape1524)
Shape1529 = x3d.Shape()
Appearance1530 = x3d.Appearance()
Material1531 = x3d.Material()
Material1531.setAmbientIntensity(0)
Material1531.setDiffuseColor(x3d.doubleToFloat([0.5,0.5,0.5]))
Material1531.setShininess(0)

Appearance1530.setMaterial(Material1531)

Shape1529.setAppearance(Appearance1530)
IndexedFaceSet1532 = x3d.IndexedFaceSet()
IndexedFaceSet1532.setSolid(False)
IndexedFaceSet1532.setTexCoordIndex([3,1,0,-1,3,0,2,-1])
IndexedFaceSet1532.setCoordIndex([3,1,0,-1,3,0,2,-1])
Coordinate1533 = x3d.Coordinate()
Coordinate1533.setPoint(x3d.doubleToFloat([14.69728,0.075,16.78806,15.09126,0.075,16.70775,14.96951,0.075,18.12362,15.3635,0.075,18.04331]))

IndexedFaceSet1532.setCoord(Coordinate1533)

Shape1529.setGeometry(IndexedFaceSet1532)

Scene12.addChild(Shape1529)
Shape1534 = x3d.Shape()
Appearance1535 = x3d.Appearance()
Material1536 = x3d.Material()
Material1536.setAmbientIntensity(0)
Material1536.setDiffuseColor(x3d.doubleToFloat([0.5,0.5,0.5]))
Material1536.setShininess(0)

Appearance1535.setMaterial(Material1536)

Shape1534.setAppearance(Appearance1535)
IndexedFaceSet1537 = x3d.IndexedFaceSet()
IndexedFaceSet1537.setSolid(False)
IndexedFaceSet1537.setTexCoordIndex([4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1])
IndexedFaceSet1537.setCoordIndex([4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1])
Coordinate1538 = x3d.Coordinate()
Coordinate1538.setPoint(x3d.doubleToFloat([15.36673,0.075,15.94588,15.43379,0.075,16.27486,15.50085,0.075,16.60386,14.96295,0.075,16.02818,15.03001,0.075,16.35717,15.09707,0.075,16.68616,14.55916,0.075,16.11049,14.62622,0.075,16.43948,14.69328,0.075,16.76847]))

IndexedFaceSet1537.setCoord(Coordinate1538)

Shape1534.setGeometry(IndexedFaceSet1537)

Scene12.addChild(Shape1534)
Shape1539 = x3d.Shape()
Appearance1540 = x3d.Appearance()
Material1541 = x3d.Material()
Material1541.setAmbientIntensity(0)
Material1541.setDiffuseColor(x3d.doubleToFloat([0.5,0.5,0.5]))
Material1541.setShininess(0)

Appearance1540.setMaterial(Material1541)

Shape1539.setAppearance(Appearance1540)
IndexedFaceSet1542 = x3d.IndexedFaceSet()
IndexedFaceSet1542.setSolid(False)
IndexedFaceSet1542.setTexCoordIndex([3,1,0,-1,3,0,2,-1])
IndexedFaceSet1542.setCoordIndex([3,1,0,-1,3,0,2,-1])
Coordinate1543 = x3d.Coordinate()
Coordinate1543.setPoint(x3d.doubleToFloat([14.55517,0.075,16.09089,14.42105,0.075,15.43291,15.36274,0.075,15.92628,15.22862,0.075,15.2683]))

IndexedFaceSet1542.setCoord(Coordinate1543)

Shape1539.setGeometry(IndexedFaceSet1542)

Scene12.addChild(Shape1539)
Shape1544 = x3d.Shape()
Appearance1545 = x3d.Appearance()
Material1546 = x3d.Material()
Material1546.setAmbientIntensity(0)
Material1546.setDiffuseColor(x3d.doubleToFloat([0.5,0.5,0.5]))
Material1546.setShininess(0)

Appearance1545.setMaterial(Material1546)

Shape1544.setAppearance(Appearance1545)
IndexedFaceSet1547 = x3d.IndexedFaceSet()
IndexedFaceSet1547.setSolid(False)
IndexedFaceSet1547.setTexCoordIndex([3,1,0,-1,3,0,2,-1])
IndexedFaceSet1547.setCoordIndex([3,1,0,-1,3,0,2,-1])
Coordinate1548 = x3d.Coordinate()
Coordinate1548.setPoint(x3d.doubleToFloat([14.5584,0.075,13.99345,14.95239,0.075,13.91315,14.83064,0.075,15.32901,15.22462,0.075,15.2487]))

IndexedFaceSet1547.setCoord(Coordinate1548)

Shape1544.setGeometry(IndexedFaceSet1547)

Scene12.addChild(Shape1544)
Shape1549 = x3d.Shape()
Appearance1550 = x3d.Appearance()
Material1551 = x3d.Material()
Material1551.setAmbientIntensity(0)
Material1551.setDiffuseColor(x3d.doubleToFloat([0.5,0.5,0.5]))
Material1551.setShininess(0)

Appearance1550.setMaterial(Material1551)

Shape1549.setAppearance(Appearance1550)
IndexedFaceSet1552 = x3d.IndexedFaceSet()
IndexedFaceSet1552.setSolid(False)
IndexedFaceSet1552.setTexCoordIndex([3,1,0,-1,3,0,2,-1])
IndexedFaceSet1552.setCoordIndex([3,1,0,-1,3,0,2,-1])
Coordinate1553 = x3d.Coordinate()
Coordinate1553.setPoint(x3d.doubleToFloat([14.14482,0.075,14.07776,14.53881,0.075,13.99745,14.41705,0.075,15.41331,14.81104,0.075,15.333]))

IndexedFaceSet1552.setCoord(Coordinate1553)

Shape1549.setGeometry(IndexedFaceSet1552)

Scene12.addChild(Shape1549)
Shape1554 = x3d.Shape()
Appearance1555 = x3d.Appearance()
Material1556 = x3d.Material()
Material1556.setAmbientIntensity(0)
Material1556.setDiffuseColor(x3d.doubleToFloat([0.5,0.5,0.5]))
Material1556.setShininess(0)

Appearance1555.setMaterial(Material1556)

Shape1554.setAppearance(Appearance1555)
IndexedFaceSet1557 = x3d.IndexedFaceSet()
IndexedFaceSet1557.setSolid(False)
IndexedFaceSet1557.setTexCoordIndex([4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1])
IndexedFaceSet1557.setCoordIndex([4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1])
Coordinate1558 = x3d.Coordinate()
Coordinate1558.setPoint(x3d.doubleToFloat([14.14083,0.075,14.05816,14.07377,0.075,13.72917,14.00671,0.075,13.40018,14.54461,0.075,13.97585,14.47755,0.075,13.64686,14.41049,0.075,13.31787,14.9484,0.075,13.89355,14.88134,0.075,13.56456,14.81428,0.075,13.23557]))

IndexedFaceSet1557.setCoord(Coordinate1558)

Shape1554.setGeometry(IndexedFaceSet1557)

Scene12.addChild(Shape1554)
Shape1559 = x3d.Shape()
Appearance1560 = x3d.Appearance()
Material1561 = x3d.Material()
Material1561.setAmbientIntensity(0)
Material1561.setDiffuseColor(x3d.doubleToFloat([0.5,0.5,0.5]))
Material1561.setShininess(0)

Appearance1560.setMaterial(Material1561)

Shape1559.setAppearance(Appearance1560)
IndexedFaceSet1562 = x3d.IndexedFaceSet()
IndexedFaceSet1562.setSolid(False)
IndexedFaceSet1562.setTexCoordIndex([3,1,0,-1,3,0,2,-1])
IndexedFaceSet1562.setCoordIndex([3,1,0,-1,3,0,2,-1])
Coordinate1563 = x3d.Coordinate()
Coordinate1563.setPoint(x3d.doubleToFloat([14.67616,0.075,12.55799,14.81028,0.075,13.21597,13.86859,0.075,12.7226,14.00271,0.075,13.38058]))

IndexedFaceSet1562.setCoord(Coordinate1563)

Shape1559.setGeometry(IndexedFaceSet1562)

Scene12.addChild(Shape1559)
Shape1564 = x3d.Shape()
Appearance1565 = x3d.Appearance()
Material1566 = x3d.Material()
Material1566.setAmbientIntensity(0)
Material1566.setDiffuseColor(x3d.doubleToFloat([0.5,0.5,0.5]))
Material1566.setShininess(0)

Appearance1565.setMaterial(Material1566)

Shape1564.setAppearance(Appearance1565)
IndexedFaceSet1567 = x3d.IndexedFaceSet()
IndexedFaceSet1567.setSolid(False)
IndexedFaceSet1567.setTexCoordIndex([4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1])
IndexedFaceSet1567.setCoordIndex([4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1])
Coordinate1568 = x3d.Coordinate()
Coordinate1568.setPoint(x3d.doubleToFloat([14.00595,0.075,11.28315,14.20294,0.075,11.24299,14.39993,0.075,11.20284,14.14207,0.075,11.95093,14.33906,0.075,11.91077,14.53605,0.075,11.87062,14.27818,0.075,12.6187,14.47517,0.075,12.57855,14.67217,0.075,12.5384]))

IndexedFaceSet1567.setCoord(Coordinate1568)

Shape1564.setGeometry(IndexedFaceSet1567)

Scene12.addChild(Shape1564)
Shape1569 = x3d.Shape()
Appearance1570 = x3d.Appearance()
Material1571 = x3d.Material()
Material1571.setAmbientIntensity(0)
Material1571.setDiffuseColor(x3d.doubleToFloat([0.5,0.5,0.5]))
Material1571.setShininess(0)

Appearance1570.setMaterial(Material1571)

Shape1569.setAppearance(Appearance1570)
IndexedFaceSet1572 = x3d.IndexedFaceSet()
IndexedFaceSet1572.setSolid(False)
IndexedFaceSet1572.setTexCoordIndex([3,1,0,-1,3,0,2,-1])
IndexedFaceSet1572.setCoordIndex([3,1,0,-1,3,0,2,-1])
Coordinate1573 = x3d.Coordinate()
Coordinate1573.setPoint(x3d.doubleToFloat([13.59236,0.075,11.36745,13.98635,0.075,11.28714,13.8646,0.075,12.70301,14.25858,0.075,12.6227]))

IndexedFaceSet1572.setCoord(Coordinate1573)

Shape1569.setGeometry(IndexedFaceSet1572)

Scene12.addChild(Shape1569)
Shape1574 = x3d.Shape()
Appearance1575 = x3d.Appearance()
Material1576 = x3d.Material()
Material1576.setAmbientIntensity(0)
Material1576.setDiffuseColor(x3d.doubleToFloat([0.5,0.5,0.5]))
Material1576.setShininess(0)

Appearance1575.setMaterial(Material1576)

Shape1574.setAppearance(Appearance1575)
IndexedFaceSet1577 = x3d.IndexedFaceSet()
IndexedFaceSet1577.setSolid(False)
IndexedFaceSet1577.setTexCoordIndex([3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1])
IndexedFaceSet1577.setCoordIndex([3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1])
Coordinate1578 = x3d.Coordinate()
Coordinate1578.setPoint(x3d.doubleToFloat([13.58837,0.075,11.34785,13.45425,0.075,10.68988,13.99216,0.075,11.26555,13.85804,0.075,10.60757,14.39594,0.075,11.18324,14.26182,0.075,10.52526]))

IndexedFaceSet1577.setCoord(Coordinate1578)

Shape1574.setGeometry(IndexedFaceSet1577)

Scene12.addChild(Shape1574)
Shape1579 = x3d.Shape()
Appearance1580 = x3d.Appearance()
Material1581 = x3d.Material()
Material1581.setAmbientIntensity(0)
Material1581.setDiffuseColor(x3d.doubleToFloat([0.5,0.5,0.5]))
Material1581.setShininess(0)

Appearance1580.setMaterial(Material1581)

Shape1579.setAppearance(Appearance1580)
IndexedFaceSet1582 = x3d.IndexedFaceSet()
IndexedFaceSet1582.setSolid(False)
IndexedFaceSet1582.setTexCoordIndex([4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1])
IndexedFaceSet1582.setCoordIndex([4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1])
Coordinate1583 = x3d.Coordinate()
Coordinate1583.setPoint(x3d.doubleToFloat([13.45026,0.075,10.67028,13.3832,0.075,10.34129,13.31614,0.075,10.0123,14.25783,0.075,10.50567,14.19077,0.075,10.17668,14.12371,0.075,9.847688]))

IndexedFaceSet1582.setCoord(Coordinate1583)

Shape1579.setGeometry(IndexedFaceSet1582)

Scene12.addChild(Shape1579)
Shape1584 = x3d.Shape()
Appearance1585 = x3d.Appearance()
Material1586 = x3d.Material()
Material1586.setAmbientIntensity(0)
Material1586.setDiffuseColor(x3d.doubleToFloat([0.5,0.5,0.5]))
Material1586.setShininess(0)

Appearance1585.setMaterial(Material1586)

Shape1584.setAppearance(Appearance1585)
IndexedFaceSet1587 = x3d.IndexedFaceSet()
IndexedFaceSet1587.setSolid(False)
IndexedFaceSet1587.setTexCoordIndex([3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1])
IndexedFaceSet1587.setCoordIndex([3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1])
Coordinate1588 = x3d.Coordinate()
Coordinate1588.setPoint(x3d.doubleToFloat([14.11971,0.075,9.828091,13.72573,0.075,9.908399,13.9836,0.075,9.160313,13.58961,0.075,9.240621,13.84748,0.075,8.492535,13.45349,0.075,8.572843]))

IndexedFaceSet1587.setCoord(Coordinate1588)

Shape1584.setGeometry(IndexedFaceSet1587)

Scene12.addChild(Shape1584)
Shape1589 = x3d.Shape()
Appearance1590 = x3d.Appearance()
Material1591 = x3d.Material()
Material1591.setAmbientIntensity(0)
Material1591.setDiffuseColor(x3d.doubleToFloat([0.5,0.5,0.5]))
Material1591.setShininess(0)

Appearance1590.setMaterial(Material1591)

Shape1589.setAppearance(Appearance1590)
IndexedFaceSet1592 = x3d.IndexedFaceSet()
IndexedFaceSet1592.setSolid(False)
IndexedFaceSet1592.setTexCoordIndex([4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1])
IndexedFaceSet1592.setCoordIndex([4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1])
Coordinate1593 = x3d.Coordinate()
Coordinate1593.setPoint(x3d.doubleToFloat([13.03991,0.075,8.657146,13.2369,0.075,8.616992,13.4339,0.075,8.576838,13.17602,0.075,9.324924,13.37302,0.075,9.28477,13.57001,0.075,9.244616,13.31214,0.075,9.992702,13.50914,0.075,9.952547,13.70613,0.075,9.912394]))

IndexedFaceSet1592.setCoord(Coordinate1593)

Shape1589.setGeometry(IndexedFaceSet1592)

Scene12.addChild(Shape1589)
Shape1594 = x3d.Shape()
Appearance1595 = x3d.Appearance()
Material1596 = x3d.Material()
Material1596.setAmbientIntensity(0)
Material1596.setDiffuseColor(x3d.doubleToFloat([0.5,0.5,0.5]))
Material1596.setShininess(0)

Appearance1595.setMaterial(Material1596)

Shape1594.setAppearance(Appearance1595)
IndexedFaceSet1597 = x3d.IndexedFaceSet()
IndexedFaceSet1597.setSolid(False)
IndexedFaceSet1597.setTexCoordIndex([3,1,0,-1,3,0,2,-1])
IndexedFaceSet1597.setCoordIndex([3,1,0,-1,3,0,2,-1])
Coordinate1598 = x3d.Coordinate()
Coordinate1598.setPoint(x3d.doubleToFloat([13.70936,0.075,7.814958,13.84348,0.075,8.472938,12.90179,0.075,7.979569,13.03591,0.075,8.637548]))

IndexedFaceSet1597.setCoord(Coordinate1598)

Shape1594.setGeometry(IndexedFaceSet1597)

Scene12.addChild(Shape1594)
Shape1599 = x3d.Shape()
Appearance1600 = x3d.Appearance()
Material1601 = x3d.Material()
Material1601.setAmbientIntensity(0)
Material1601.setDiffuseColor(x3d.doubleToFloat([0.5,0.5,0.5]))
Material1601.setShininess(0)

Appearance1600.setMaterial(Material1601)

Shape1599.setAppearance(Appearance1600)
IndexedFaceSet1602 = x3d.IndexedFaceSet()
IndexedFaceSet1602.setSolid(False)
IndexedFaceSet1602.setTexCoordIndex([3,1,0,-1,3,0,2,-1])
IndexedFaceSet1602.setCoordIndex([3,1,0,-1,3,0,2,-1])
Coordinate1603 = x3d.Coordinate()
Coordinate1603.setPoint(x3d.doubleToFloat([13.57125,0.075,7.137382,13.70537,0.075,7.795361,12.76368,0.075,7.301993,12.8978,0.075,7.959972]))

IndexedFaceSet1602.setCoord(Coordinate1603)

Shape1599.setGeometry(IndexedFaceSet1602)

Scene12.addChild(Shape1599)
Shape1604 = x3d.Shape()
Appearance1605 = x3d.Appearance()
Material1606 = x3d.Material()
Material1606.setAmbientIntensity(0)
Material1606.setDiffuseColor(x3d.doubleToFloat([0.5,0.5,0.5]))
Material1606.setShininess(0)

Appearance1605.setMaterial(Material1606)

Shape1604.setAppearance(Appearance1605)
IndexedFaceSet1607 = x3d.IndexedFaceSet()
IndexedFaceSet1607.setSolid(False)
IndexedFaceSet1607.setTexCoordIndex([3,1,0,-1,3,0,2,-1])
IndexedFaceSet1607.setCoordIndex([3,1,0,-1,3,0,2,-1])
Coordinate1608 = x3d.Coordinate()
Coordinate1608.setPoint(x3d.doubleToFloat([12.90104,0.075,5.862537,13.29502,0.075,5.782229,13.17327,0.075,7.198093,13.56726,0.075,7.117785]))

IndexedFaceSet1607.setCoord(Coordinate1608)

Shape1604.setGeometry(IndexedFaceSet1607)

Scene12.addChild(Shape1604)
Shape1609 = x3d.Shape()
Appearance1610 = x3d.Appearance()
Material1611 = x3d.Material()
Material1611.setAmbientIntensity(0)
Material1611.setDiffuseColor(x3d.doubleToFloat([0.5,0.5,0.5]))
Material1611.setShininess(0)

Appearance1610.setMaterial(Material1611)

Shape1609.setAppearance(Appearance1610)
IndexedFaceSet1612 = x3d.IndexedFaceSet()
IndexedFaceSet1612.setSolid(False)
IndexedFaceSet1612.setTexCoordIndex([3,1,0,-1,3,0,2,-1])
IndexedFaceSet1612.setCoordIndex([3,1,0,-1,3,0,2,-1])
Coordinate1613 = x3d.Coordinate()
Coordinate1613.setPoint(x3d.doubleToFloat([12.48745,0.075,5.94684,12.88144,0.075,5.866532,12.75969,0.075,7.282396,13.15367,0.075,7.202087]))

IndexedFaceSet1612.setCoord(Coordinate1613)

Shape1609.setGeometry(IndexedFaceSet1612)

Scene12.addChild(Shape1609)
Shape1614 = x3d.Shape()
Appearance1615 = x3d.Appearance()
Material1616 = x3d.Material()
Material1616.setAmbientIntensity(0)
Material1616.setDiffuseColor(x3d.doubleToFloat([0.5,0.5,0.5]))
Material1616.setShininess(0)

Appearance1615.setMaterial(Material1616)

Shape1614.setAppearance(Appearance1615)
IndexedFaceSet1617 = x3d.IndexedFaceSet()
IndexedFaceSet1617.setSolid(False)
IndexedFaceSet1617.setTexCoordIndex([3,1,0,-1,3,0,2,-1])
IndexedFaceSet1617.setCoordIndex([3,1,0,-1,3,0,2,-1])
Coordinate1618 = x3d.Coordinate()
Coordinate1618.setPoint(x3d.doubleToFloat([12.48346,0.075,5.927243,12.34934,0.075,5.269264,13.29103,0.075,5.762632,13.15691,0.075,5.104652]))

IndexedFaceSet1617.setCoord(Coordinate1618)

Shape1614.setGeometry(IndexedFaceSet1617)

Scene12.addChild(Shape1614)
Shape1619 = x3d.Shape()
Appearance1620 = x3d.Appearance()
Material1621 = x3d.Material()
Material1621.setAmbientIntensity(0)
Material1621.setDiffuseColor(x3d.doubleToFloat([0.5,0.5,0.5]))
Material1621.setShininess(0)

Appearance1620.setMaterial(Material1621)

Shape1619.setAppearance(Appearance1620)
IndexedFaceSet1622 = x3d.IndexedFaceSet()
IndexedFaceSet1622.setSolid(False)
IndexedFaceSet1622.setTexCoordIndex([3,1,0,-1,3,0,2,-1])
IndexedFaceSet1622.setCoordIndex([3,1,0,-1,3,0,2,-1])
Coordinate1623 = x3d.Coordinate()
Coordinate1623.setPoint(x3d.doubleToFloat([12.34534,0.075,5.249667,12.21122,0.075,4.591687,13.15291,0.075,5.085055,13.0188,0.075,4.427076]))

IndexedFaceSet1622.setCoord(Coordinate1623)

Shape1619.setGeometry(IndexedFaceSet1622)

Scene12.addChild(Shape1619)
Shape1624 = x3d.Shape()
Appearance1625 = x3d.Appearance()
Material1626 = x3d.Material()
Material1626.setAmbientIntensity(0)
Material1626.setDiffuseColor(x3d.doubleToFloat([0.5,0.5,0.5]))
Material1626.setShininess(0)

Appearance1625.setMaterial(Material1626)

Shape1624.setAppearance(Appearance1625)
IndexedFaceSet1627 = x3d.IndexedFaceSet()
IndexedFaceSet1627.setSolid(False)
IndexedFaceSet1627.setTexCoordIndex([3,1,0,-1,3,0,2,-1])
IndexedFaceSet1627.setCoordIndex([3,1,0,-1,3,0,2,-1])
Coordinate1628 = x3d.Coordinate()
Coordinate1628.setPoint(x3d.doubleToFloat([12.34858,0.075,3.152231,12.74257,0.075,3.071923,12.62081,0.075,4.487787,13.0148,0.075,4.407479]))

IndexedFaceSet1627.setCoord(Coordinate1628)

Shape1624.setGeometry(IndexedFaceSet1627)

Scene12.addChild(Shape1624)
Shape1629 = x3d.Shape()
Appearance1630 = x3d.Appearance()
Material1631 = x3d.Material()
Material1631.setAmbientIntensity(0)
Material1631.setDiffuseColor(x3d.doubleToFloat([0.5,0.5,0.5]))
Material1631.setShininess(0)

Appearance1630.setMaterial(Material1631)

Shape1629.setAppearance(Appearance1630)
IndexedFaceSet1632 = x3d.IndexedFaceSet()
IndexedFaceSet1632.setSolid(False)
IndexedFaceSet1632.setTexCoordIndex([3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1])
IndexedFaceSet1632.setCoordIndex([3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1])
Coordinate1633 = x3d.Coordinate()
Coordinate1633.setPoint(x3d.doubleToFloat([11.935,0.075,3.236535,12.32898,0.075,3.156226,12.07111,0.075,3.904312,12.4651,0.075,3.824004,12.20723,0.075,4.57209,12.60122,0.075,4.491782]))

IndexedFaceSet1632.setCoord(Coordinate1633)

Shape1629.setGeometry(IndexedFaceSet1632)

Scene12.addChild(Shape1629)
Shape1634 = x3d.Shape()
Appearance1635 = x3d.Appearance()
Material1636 = x3d.Material()
Material1636.setAmbientIntensity(0)
Material1636.setDiffuseColor(x3d.doubleToFloat([0.5,0.5,0.5]))
Material1636.setShininess(0)

Appearance1635.setMaterial(Material1636)

Shape1634.setAppearance(Appearance1635)
IndexedFaceSet1637 = x3d.IndexedFaceSet()
IndexedFaceSet1637.setSolid(False)
IndexedFaceSet1637.setTexCoordIndex([3,1,0,-1,3,0,2,-1])
IndexedFaceSet1637.setCoordIndex([3,1,0,-1,3,0,2,-1])
Coordinate1638 = x3d.Coordinate()
Coordinate1638.setPoint(x3d.doubleToFloat([11.931,0.075,3.216938,11.79688,0.075,2.558958,12.73857,0.075,3.052326,12.60445,0.075,2.394347]))

IndexedFaceSet1637.setCoord(Coordinate1638)

Shape1634.setGeometry(IndexedFaceSet1637)

Scene12.addChild(Shape1634)
Shape1639 = x3d.Shape()
Appearance1640 = x3d.Appearance()
Material1641 = x3d.Material()
Material1641.setAmbientIntensity(0)
Material1641.setDiffuseColor(x3d.doubleToFloat([0.5,0.5,0.5]))
Material1641.setShininess(0)

Appearance1640.setMaterial(Material1641)

Shape1639.setAppearance(Appearance1640)
IndexedFaceSet1642 = x3d.IndexedFaceSet()
IndexedFaceSet1642.setSolid(False)
IndexedFaceSet1642.setTexCoordIndex([3,1,0,-1,3,0,2,-1])
IndexedFaceSet1642.setCoordIndex([3,1,0,-1,3,0,2,-1])
Coordinate1643 = x3d.Coordinate()
Coordinate1643.setPoint(x3d.doubleToFloat([15.36825,0.075,20.17994,15.50237,0.075,20.83792,14.56068,0.075,20.34455,14.6948,0.075,21.00253]))

IndexedFaceSet1642.setCoord(Coordinate1643)

Shape1639.setGeometry(IndexedFaceSet1642)

Scene12.addChild(Shape1639)
Shape1644 = x3d.Shape()
Appearance1645 = x3d.Appearance()
Material1646 = x3d.Material()
Material1646.setAmbientIntensity(0)
Material1646.setDiffuseColor(x3d.doubleToFloat([0.5,0.5,0.5]))
Material1646.setShininess(0)

Appearance1645.setMaterial(Material1646)

Shape1644.setAppearance(Appearance1645)
IndexedFaceSet1647 = x3d.IndexedFaceSet()
IndexedFaceSet1647.setSolid(False)
IndexedFaceSet1647.setTexCoordIndex([4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1])
IndexedFaceSet1647.setCoordIndex([4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1])
Coordinate1648 = x3d.Coordinate()
Coordinate1648.setPoint(x3d.doubleToFloat([14.55668,0.075,20.32495,14.48962,0.075,19.99596,14.42256,0.075,19.66698,15.36425,0.075,20.16034,15.29719,0.075,19.83135,15.23013,0.075,19.50236]))

IndexedFaceSet1647.setCoord(Coordinate1648)

Shape1644.setGeometry(IndexedFaceSet1647)

Scene12.addChild(Shape1644)
Shape1649 = x3d.Shape()
Appearance1650 = x3d.Appearance()
Material1651 = x3d.Material()
Material1651.setAmbientIntensity(0)
Material1651.setDiffuseColor(x3d.doubleToFloat([0.5,0.5,0.5]))
Material1651.setShininess(0)

Appearance1650.setMaterial(Material1651)

Shape1649.setAppearance(Appearance1650)
IndexedFaceSet1652 = x3d.IndexedFaceSet()
IndexedFaceSet1652.setSolid(False)
IndexedFaceSet1652.setTexCoordIndex([3,1,0,-1,3,0,2,-1])
IndexedFaceSet1652.setCoordIndex([3,1,0,-1,3,0,2,-1])
Coordinate1653 = x3d.Coordinate()
Coordinate1653.setPoint(x3d.doubleToFloat([14.55992,0.075,18.22752,14.95391,0.075,18.14721,14.83215,0.075,19.56307,15.22614,0.075,19.48277]))

IndexedFaceSet1652.setCoord(Coordinate1653)

Shape1649.setGeometry(IndexedFaceSet1652)

Scene12.addChild(Shape1649)
Shape1654 = x3d.Shape()
Appearance1655 = x3d.Appearance()
Material1656 = x3d.Material()
Material1656.setAmbientIntensity(0)
Material1656.setDiffuseColor(x3d.doubleToFloat([0.5,0.5,0.5]))
Material1656.setShininess(0)

Appearance1655.setMaterial(Material1656)

Shape1654.setAppearance(Appearance1655)
IndexedFaceSet1657 = x3d.IndexedFaceSet()
IndexedFaceSet1657.setSolid(False)
IndexedFaceSet1657.setTexCoordIndex([3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1])
IndexedFaceSet1657.setCoordIndex([3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1])
Coordinate1658 = x3d.Coordinate()
Coordinate1658.setPoint(x3d.doubleToFloat([14.14634,0.075,18.31182,14.54032,0.075,18.23151,14.28245,0.075,18.9796,14.67644,0.075,18.89929,14.41857,0.075,19.64738,14.81256,0.075,19.56707]))

IndexedFaceSet1657.setCoord(Coordinate1658)

Shape1654.setGeometry(IndexedFaceSet1657)

Scene12.addChild(Shape1654)
Shape1659 = x3d.Shape()
Appearance1660 = x3d.Appearance()
Material1661 = x3d.Material()
Material1661.setAmbientIntensity(0)
Material1661.setDiffuseColor(x3d.doubleToFloat([0.5,0.5,0.5]))
Material1661.setShininess(0)

Appearance1660.setMaterial(Material1661)

Shape1659.setAppearance(Appearance1660)
IndexedFaceSet1662 = x3d.IndexedFaceSet()
IndexedFaceSet1662.setSolid(False)
IndexedFaceSet1662.setTexCoordIndex([3,1,0,-1,3,0,2,-1])
IndexedFaceSet1662.setCoordIndex([3,1,0,-1,3,0,2,-1])
Coordinate1663 = x3d.Coordinate()
Coordinate1663.setPoint(x3d.doubleToFloat([14.14234,0.075,18.29222,14.00822,0.075,17.63424,14.94991,0.075,18.12761,14.81579,0.075,17.46964]))

IndexedFaceSet1662.setCoord(Coordinate1663)

Shape1659.setGeometry(IndexedFaceSet1662)

Scene12.addChild(Shape1659)
Shape1664 = x3d.Shape()
Appearance1665 = x3d.Appearance()
Material1666 = x3d.Material()
Material1666.setAmbientIntensity(0)
Material1666.setDiffuseColor(x3d.doubleToFloat([0.5,0.5,0.5]))
Material1666.setShininess(0)

Appearance1665.setMaterial(Material1666)

Shape1664.setAppearance(Appearance1665)
IndexedFaceSet1667 = x3d.IndexedFaceSet()
IndexedFaceSet1667.setSolid(False)
IndexedFaceSet1667.setTexCoordIndex([4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1])
IndexedFaceSet1667.setCoordIndex([4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1])
Coordinate1668 = x3d.Coordinate()
Coordinate1668.setPoint(x3d.doubleToFloat([14.00423,0.075,17.61465,13.93717,0.075,17.28566,13.87011,0.075,16.95667,14.8118,0.075,17.45004,14.74474,0.075,17.12105,14.67768,0.075,16.79206]))

IndexedFaceSet1667.setCoord(Coordinate1668)

Shape1664.setGeometry(IndexedFaceSet1667)

Scene12.addChild(Shape1664)
Shape1669 = x3d.Shape()
Appearance1670 = x3d.Appearance()
Material1671 = x3d.Material()
Material1671.setAmbientIntensity(0)
Material1671.setDiffuseColor(x3d.doubleToFloat([0.5,0.5,0.5]))
Material1671.setShininess(0)

Appearance1670.setMaterial(Material1671)

Shape1669.setAppearance(Appearance1670)
IndexedFaceSet1672 = x3d.IndexedFaceSet()
IndexedFaceSet1672.setSolid(False)
IndexedFaceSet1672.setTexCoordIndex([3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1])
IndexedFaceSet1672.setCoordIndex([3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1])
Coordinate1673 = x3d.Coordinate()
Coordinate1673.setPoint(x3d.doubleToFloat([14.67368,0.075,16.77246,14.2797,0.075,16.85277,14.53757,0.075,16.10468,14.14358,0.075,16.18499,14.40145,0.075,15.4369,14.00746,0.075,15.51721]))

IndexedFaceSet1672.setCoord(Coordinate1673)

Shape1669.setGeometry(IndexedFaceSet1672)

Scene12.addChild(Shape1669)
Shape1674 = x3d.Shape()
Appearance1675 = x3d.Appearance()
Material1676 = x3d.Material()
Material1676.setAmbientIntensity(0)
Material1676.setDiffuseColor(x3d.doubleToFloat([0.5,0.5,0.5]))
Material1676.setShininess(0)

Appearance1675.setMaterial(Material1676)

Shape1674.setAppearance(Appearance1675)
IndexedFaceSet1677 = x3d.IndexedFaceSet()
IndexedFaceSet1677.setSolid(False)
IndexedFaceSet1677.setTexCoordIndex([3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1])
IndexedFaceSet1677.setCoordIndex([3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1])
Coordinate1678 = x3d.Coordinate()
Coordinate1678.setPoint(x3d.doubleToFloat([14.2601,0.075,16.85676,13.86611,0.075,16.93707,14.12398,0.075,16.18899,13.73,0.075,16.26929,13.98787,0.075,15.52121,13.59388,0.075,15.60152]))

IndexedFaceSet1677.setCoord(Coordinate1678)

Shape1674.setGeometry(IndexedFaceSet1677)

Scene12.addChild(Shape1674)
Shape1679 = x3d.Shape()
Appearance1680 = x3d.Appearance()
Material1681 = x3d.Material()
Material1681.setAmbientIntensity(0)
Material1681.setDiffuseColor(x3d.doubleToFloat([0.5,0.5,0.5]))
Material1681.setShininess(0)

Appearance1680.setMaterial(Material1681)

Shape1679.setAppearance(Appearance1680)
IndexedFaceSet1682 = x3d.IndexedFaceSet()
IndexedFaceSet1682.setSolid(False)
IndexedFaceSet1682.setTexCoordIndex([3,1,0,-1,3,0,2,-1])
IndexedFaceSet1682.setCoordIndex([3,1,0,-1,3,0,2,-1])
Coordinate1683 = x3d.Coordinate()
Coordinate1683.setPoint(x3d.doubleToFloat([13.58989,0.075,15.58192,13.45577,0.075,14.92394,14.39746,0.075,15.41731,14.26334,0.075,14.75933]))

IndexedFaceSet1682.setCoord(Coordinate1683)

Shape1679.setGeometry(IndexedFaceSet1682)

Scene12.addChild(Shape1679)
Shape1684 = x3d.Shape()
Appearance1685 = x3d.Appearance()
Material1686 = x3d.Material()
Material1686.setAmbientIntensity(0)
Material1686.setDiffuseColor(x3d.doubleToFloat([0.5,0.5,0.5]))
Material1686.setShininess(0)

Appearance1685.setMaterial(Material1686)

Shape1684.setAppearance(Appearance1685)
IndexedFaceSet1687 = x3d.IndexedFaceSet()
IndexedFaceSet1687.setSolid(False)
IndexedFaceSet1687.setTexCoordIndex([4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1])
IndexedFaceSet1687.setCoordIndex([4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1])
Coordinate1688 = x3d.Coordinate()
Coordinate1688.setPoint(x3d.doubleToFloat([12.3501,0.075,7.386296,12.54709,0.075,7.346142,12.74408,0.075,7.305988,12.48621,0.075,8.054074,12.68321,0.075,8.01392,12.8802,0.075,7.973765,12.62233,0.075,8.721852,12.81932,0.075,8.681698,13.01632,0.075,8.641543]))

IndexedFaceSet1687.setCoord(Coordinate1688)

Shape1684.setGeometry(IndexedFaceSet1687)

Scene12.addChild(Shape1684)
Shape1689 = x3d.Shape()
Appearance1690 = x3d.Appearance()
Material1691 = x3d.Material()
Material1691.setAmbientIntensity(0)
Material1691.setDiffuseColor(x3d.doubleToFloat([0.5,0.5,0.5]))
Material1691.setShininess(0)

Appearance1690.setMaterial(Material1691)

Shape1689.setAppearance(Appearance1690)
IndexedFaceSet1692 = x3d.IndexedFaceSet()
IndexedFaceSet1692.setSolid(False)
IndexedFaceSet1692.setTexCoordIndex([3,1,0,-1,3,0,2,-1])
IndexedFaceSet1692.setCoordIndex([3,1,0,-1,3,0,2,-1])
Coordinate1693 = x3d.Coordinate()
Coordinate1693.setPoint(x3d.doubleToFloat([11.93651,0.075,7.470599,12.3305,0.075,7.390291,12.20875,0.075,8.806155,12.60273,0.075,8.725846]))

IndexedFaceSet1692.setCoord(Coordinate1693)

Shape1689.setGeometry(IndexedFaceSet1692)

Scene12.addChild(Shape1689)
Shape1694 = x3d.Shape()
Appearance1695 = x3d.Appearance()
Material1696 = x3d.Material()
Material1696.setAmbientIntensity(0)
Material1696.setDiffuseColor(x3d.doubleToFloat([0.5,0.5,0.5]))
Material1696.setShininess(0)

Appearance1695.setMaterial(Material1696)

Shape1694.setAppearance(Appearance1695)
IndexedFaceSet1697 = x3d.IndexedFaceSet()
IndexedFaceSet1697.setSolid(False)
IndexedFaceSet1697.setTexCoordIndex([3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1])
IndexedFaceSet1697.setCoordIndex([3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1])
Coordinate1698 = x3d.Coordinate()
Coordinate1698.setPoint(x3d.doubleToFloat([12.60597,0.075,6.628411,12.74009,0.075,7.286391,12.20218,0.075,6.710717,12.3363,0.075,7.368696,11.7984,0.075,6.793023,11.93252,0.075,7.451002]))

IndexedFaceSet1697.setCoord(Coordinate1698)

Shape1694.setGeometry(IndexedFaceSet1697)

Scene12.addChild(Shape1694)
Shape1699 = x3d.Shape()
Appearance1700 = x3d.Appearance()
Material1701 = x3d.Material()
Material1701.setAmbientIntensity(0)
Material1701.setDiffuseColor(x3d.doubleToFloat([0.5,0.5,0.5]))
Material1701.setShininess(0)

Appearance1700.setMaterial(Material1701)

Shape1699.setAppearance(Appearance1700)
IndexedFaceSet1702 = x3d.IndexedFaceSet()
IndexedFaceSet1702.setSolid(False)
IndexedFaceSet1702.setTexCoordIndex([3,1,0,-1,3,0,2,-1])
IndexedFaceSet1702.setCoordIndex([3,1,0,-1,3,0,2,-1])
Coordinate1703 = x3d.Coordinate()
Coordinate1703.setPoint(x3d.doubleToFloat([12.46786,0.075,5.950835,12.60197,0.075,6.608814,11.66028,0.075,6.115446,11.7944,0.075,6.773426]))

IndexedFaceSet1702.setCoord(Coordinate1703)

Shape1699.setGeometry(IndexedFaceSet1702)

Scene12.addChild(Shape1699)
Shape1704 = x3d.Shape()
Appearance1705 = x3d.Appearance()
Material1706 = x3d.Material()
Material1706.setAmbientIntensity(0)
Material1706.setDiffuseColor(x3d.doubleToFloat([0.5,0.5,0.5]))
Material1706.setShininess(0)

Appearance1705.setMaterial(Material1706)

Shape1704.setAppearance(Appearance1705)
IndexedFaceSet1707 = x3d.IndexedFaceSet()
IndexedFaceSet1707.setSolid(False)
IndexedFaceSet1707.setTexCoordIndex([4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1])
IndexedFaceSet1707.setCoordIndex([4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1])
Coordinate1708 = x3d.Coordinate()
Coordinate1708.setPoint(x3d.doubleToFloat([11.79764,0.075,4.675991,11.99463,0.075,4.635836,12.19163,0.075,4.595682,11.93376,0.075,5.343768,12.13075,0.075,5.303614,12.32774,0.075,5.26346,12.06987,0.075,6.011546,12.26687,0.075,5.971392,12.46386,0.075,5.931238]))

IndexedFaceSet1707.setCoord(Coordinate1708)

Shape1704.setGeometry(IndexedFaceSet1707)

Scene12.addChild(Shape1704)
Shape1709 = x3d.Shape()
Appearance1710 = x3d.Appearance()
Material1711 = x3d.Material()
Material1711.setAmbientIntensity(0)
Material1711.setDiffuseColor(x3d.doubleToFloat([0.5,0.5,0.5]))
Material1711.setShininess(0)

Appearance1710.setMaterial(Material1711)

Shape1709.setAppearance(Appearance1710)
IndexedFaceSet1712 = x3d.IndexedFaceSet()
IndexedFaceSet1712.setSolid(False)
IndexedFaceSet1712.setTexCoordIndex([4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1])
IndexedFaceSet1712.setCoordIndex([4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1])
Coordinate1713 = x3d.Coordinate()
Coordinate1713.setPoint(x3d.doubleToFloat([11.38406,0.075,4.760293,11.58105,0.075,4.720139,11.77804,0.075,4.679985,11.52017,0.075,5.428071,11.71717,0.075,5.387917,11.91416,0.075,5.347763,11.65629,0.075,6.095849,11.85328,0.075,6.055695,12.05028,0.075,6.015541]))

IndexedFaceSet1712.setCoord(Coordinate1713)

Shape1709.setGeometry(IndexedFaceSet1712)

Scene12.addChild(Shape1709)
Shape1714 = x3d.Shape()
Appearance1715 = x3d.Appearance()
Material1716 = x3d.Material()
Material1716.setAmbientIntensity(0)
Material1716.setDiffuseColor(x3d.doubleToFloat([0.5,0.5,0.5]))
Material1716.setShininess(0)

Appearance1715.setMaterial(Material1716)

Shape1714.setAppearance(Appearance1715)
IndexedFaceSet1717 = x3d.IndexedFaceSet()
IndexedFaceSet1717.setSolid(False)
IndexedFaceSet1717.setTexCoordIndex([3,1,0,-1,3,0,2,-1])
IndexedFaceSet1717.setCoordIndex([3,1,0,-1,3,0,2,-1])
Coordinate1718 = x3d.Coordinate()
Coordinate1718.setPoint(x3d.doubleToFloat([11.38006,0.075,4.740696,11.24594,0.075,4.082717,12.18763,0.075,4.576085,12.05351,0.075,3.918105]))

IndexedFaceSet1717.setCoord(Coordinate1718)

Shape1714.setGeometry(IndexedFaceSet1717)

Scene12.addChild(Shape1714)
Shape1719 = x3d.Shape()
Appearance1720 = x3d.Appearance()
Material1721 = x3d.Material()
Material1721.setAmbientIntensity(0)
Material1721.setDiffuseColor(x3d.doubleToFloat([0.5,0.5,0.5]))
Material1721.setShininess(0)

Appearance1720.setMaterial(Material1721)

Shape1719.setAppearance(Appearance1720)
IndexedFaceSet1722 = x3d.IndexedFaceSet()
IndexedFaceSet1722.setSolid(False)
IndexedFaceSet1722.setTexCoordIndex([3,1,0,-1,3,0,2,-1])
IndexedFaceSet1722.setCoordIndex([3,1,0,-1,3,0,2,-1])
Coordinate1723 = x3d.Coordinate()
Coordinate1723.setPoint(x3d.doubleToFloat([11.9154,0.075,3.240529,12.04952,0.075,3.898509,11.10783,0.075,3.40514,11.24195,0.075,4.06312]))

IndexedFaceSet1722.setCoord(Coordinate1723)

Shape1719.setGeometry(IndexedFaceSet1722)

Scene12.addChild(Shape1719)
Shape1724 = x3d.Shape()
Appearance1725 = x3d.Appearance()
Material1726 = x3d.Material()
Material1726.setAmbientIntensity(0)
Material1726.setDiffuseColor(x3d.doubleToFloat([0.5,0.5,0.5]))
Material1726.setShininess(0)

Appearance1725.setMaterial(Material1726)

Shape1724.setAppearance(Appearance1725)
IndexedFaceSet1727 = x3d.IndexedFaceSet()
IndexedFaceSet1727.setSolid(False)
IndexedFaceSet1727.setTexCoordIndex([3,1,0,-1,3,0,2,-1])
IndexedFaceSet1727.setCoordIndex([3,1,0,-1,3,0,2,-1])
Coordinate1728 = x3d.Coordinate()
Coordinate1728.setPoint(x3d.doubleToFloat([11.24518,0.075,1.965685,11.63917,0.075,1.885376,11.51742,0.075,3.30124,11.9114,0.075,3.220932]))

IndexedFaceSet1727.setCoord(Coordinate1728)

Shape1724.setGeometry(IndexedFaceSet1727)

Scene12.addChild(Shape1724)
Shape1729 = x3d.Shape()
Appearance1730 = x3d.Appearance()
Material1731 = x3d.Material()
Material1731.setAmbientIntensity(0)
Material1731.setDiffuseColor(x3d.doubleToFloat([0.5,0.5,0.5]))
Material1731.setShininess(0)

Appearance1730.setMaterial(Material1731)

Shape1729.setAppearance(Appearance1730)
IndexedFaceSet1732 = x3d.IndexedFaceSet()
IndexedFaceSet1732.setSolid(False)
IndexedFaceSet1732.setTexCoordIndex([4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1])
IndexedFaceSet1732.setCoordIndex([4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1])
Coordinate1733 = x3d.Coordinate()
Coordinate1733.setPoint(x3d.doubleToFloat([10.8316,0.075,2.049988,11.02859,0.075,2.009833,11.22559,0.075,1.969679,10.96772,0.075,2.717766,11.16471,0.075,2.677611,11.3617,0.075,2.637457,11.10383,0.075,3.385544,11.30083,0.075,3.345389,11.49782,0.075,3.305235]))

IndexedFaceSet1732.setCoord(Coordinate1733)

Shape1729.setGeometry(IndexedFaceSet1732)

Scene12.addChild(Shape1729)
Shape1734 = x3d.Shape()
Appearance1735 = x3d.Appearance()
Material1736 = x3d.Material()
Material1736.setAmbientIntensity(0)
Material1736.setDiffuseColor(x3d.doubleToFloat([0.5,0.5,0.5]))
Material1736.setShininess(0)

Appearance1735.setMaterial(Material1736)

Shape1734.setAppearance(Appearance1735)
IndexedFaceSet1737 = x3d.IndexedFaceSet()
IndexedFaceSet1737.setSolid(False)
IndexedFaceSet1737.setTexCoordIndex([3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1])
IndexedFaceSet1737.setCoordIndex([3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1])
Coordinate1738 = x3d.Coordinate()
Coordinate1738.setPoint(x3d.doubleToFloat([13.45652,0.075,17.04097,13.85051,0.075,16.96066,13.59264,0.075,17.70875,13.98663,0.075,17.62844,13.72876,0.075,18.37653,14.12274,0.075,18.29622]))

IndexedFaceSet1737.setCoord(Coordinate1738)

Shape1734.setGeometry(IndexedFaceSet1737)

Scene12.addChild(Shape1734)
Shape1739 = x3d.Shape()
Appearance1740 = x3d.Appearance()
Material1741 = x3d.Material()
Material1741.setAmbientIntensity(0)
Material1741.setDiffuseColor(x3d.doubleToFloat([0.5,0.5,0.5]))
Material1741.setShininess(0)

Appearance1740.setMaterial(Material1741)

Shape1739.setAppearance(Appearance1740)
IndexedFaceSet1742 = x3d.IndexedFaceSet()
IndexedFaceSet1742.setSolid(False)
IndexedFaceSet1742.setTexCoordIndex([4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1])
IndexedFaceSet1742.setCoordIndex([4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1])
Coordinate1743 = x3d.Coordinate()
Coordinate1743.setPoint(x3d.doubleToFloat([11.2467,0.075,6.199749,11.44369,0.075,6.159595,11.64069,0.075,6.119441,11.38282,0.075,6.867527,11.57981,0.075,6.827373,11.7768,0.075,6.787219,11.51893,0.075,7.535305,11.71593,0.075,7.495151,11.91292,0.075,7.454997]))

IndexedFaceSet1742.setCoord(Coordinate1743)

Shape1739.setGeometry(IndexedFaceSet1742)

Scene12.addChild(Shape1739)
Shape1744 = x3d.Shape()
Appearance1745 = x3d.Appearance()
Material1746 = x3d.Material()
Material1746.setAmbientIntensity(0)
Material1746.setDiffuseColor(x3d.doubleToFloat([0.5,0.5,0.5]))
Material1746.setShininess(0)

Appearance1745.setMaterial(Material1746)

Shape1744.setAppearance(Appearance1745)
IndexedFaceSet1747 = x3d.IndexedFaceSet()
IndexedFaceSet1747.setSolid(False)
IndexedFaceSet1747.setTexCoordIndex([4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1])
IndexedFaceSet1747.setCoordIndex([4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1])
Coordinate1748 = x3d.Coordinate()
Coordinate1748.setPoint(x3d.doubleToFloat([10.83312,0.075,6.284052,11.03011,0.075,6.243898,11.2271,0.075,6.203744,10.96923,0.075,6.95183,11.16623,0.075,6.911676,11.36322,0.075,6.871522,11.10535,0.075,7.619608,11.30234,0.075,7.579454,11.49934,0.075,7.539299]))

IndexedFaceSet1747.setCoord(Coordinate1748)

Shape1744.setGeometry(IndexedFaceSet1747)

Scene12.addChild(Shape1744)
Shape1749 = x3d.Shape()
Appearance1750 = x3d.Appearance()
Material1751 = x3d.Material()
Material1751.setAmbientIntensity(0)
Material1751.setDiffuseColor(x3d.doubleToFloat([0.5,0.5,0.5]))
Material1751.setShininess(0)

Appearance1750.setMaterial(Material1751)

Shape1749.setAppearance(Appearance1750)
IndexedFaceSet1752 = x3d.IndexedFaceSet()
IndexedFaceSet1752.setSolid(False)
IndexedFaceSet1752.setTexCoordIndex([3,1,0,-1,3,0,2,-1])
IndexedFaceSet1752.setCoordIndex([3,1,0,-1,3,0,2,-1])
Coordinate1753 = x3d.Coordinate()
Coordinate1753.setPoint(x3d.doubleToFloat([10.82912,0.075,6.264455,10.695,0.075,5.606476,11.63669,0.075,6.099844,11.50257,0.075,5.441864]))

IndexedFaceSet1752.setCoord(Coordinate1753)

Shape1749.setGeometry(IndexedFaceSet1752)

Scene12.addChild(Shape1749)
Shape1754 = x3d.Shape()
Appearance1755 = x3d.Appearance()
Material1756 = x3d.Material()
Material1756.setAmbientIntensity(0)
Material1756.setDiffuseColor(x3d.doubleToFloat([0.5,0.5,0.5]))
Material1756.setShininess(0)

Appearance1755.setMaterial(Material1756)

Shape1754.setAppearance(Appearance1755)
IndexedFaceSet1757 = x3d.IndexedFaceSet()
IndexedFaceSet1757.setSolid(False)
IndexedFaceSet1757.setTexCoordIndex([3,1,0,-1,3,0,2,-1])
IndexedFaceSet1757.setCoordIndex([3,1,0,-1,3,0,2,-1])
Coordinate1758 = x3d.Coordinate()
Coordinate1758.setPoint(x3d.doubleToFloat([10.69101,0.075,5.586879,10.55689,0.075,4.928899,11.49858,0.075,5.422267,11.36446,0.075,4.764288]))

IndexedFaceSet1757.setCoord(Coordinate1758)

Shape1754.setGeometry(IndexedFaceSet1757)

Scene12.addChild(Shape1754)
Shape1759 = x3d.Shape()
Appearance1760 = x3d.Appearance()
Material1761 = x3d.Material()
Material1761.setAmbientIntensity(0)
Material1761.setDiffuseColor(x3d.doubleToFloat([0.5,0.5,0.5]))
Material1761.setShininess(0)

Appearance1760.setMaterial(Material1761)

Shape1759.setAppearance(Appearance1760)
IndexedFaceSet1762 = x3d.IndexedFaceSet()
IndexedFaceSet1762.setSolid(False)
IndexedFaceSet1762.setTexCoordIndex([3,1,0,-1,3,0,2,-1])
IndexedFaceSet1762.setCoordIndex([3,1,0,-1,3,0,2,-1])
Coordinate1763 = x3d.Coordinate()
Coordinate1763.setPoint(x3d.doubleToFloat([10.69424,0.075,3.489444,11.08823,0.075,3.409135,10.96648,0.075,4.824999,11.36047,0.075,4.744691]))

IndexedFaceSet1762.setCoord(Coordinate1763)

Shape1759.setGeometry(IndexedFaceSet1762)

Scene12.addChild(Shape1759)
Shape1764 = x3d.Shape()
Appearance1765 = x3d.Appearance()
Material1766 = x3d.Material()
Material1766.setAmbientIntensity(0)
Material1766.setDiffuseColor(x3d.doubleToFloat([0.5,0.5,0.5]))
Material1766.setShininess(0)

Appearance1765.setMaterial(Material1766)

Shape1764.setAppearance(Appearance1765)
IndexedFaceSet1767 = x3d.IndexedFaceSet()
IndexedFaceSet1767.setSolid(False)
IndexedFaceSet1767.setTexCoordIndex([4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1])
IndexedFaceSet1767.setCoordIndex([4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1])
Coordinate1768 = x3d.Coordinate()
Coordinate1768.setPoint(x3d.doubleToFloat([10.28066,0.075,3.573746,10.47765,0.075,3.533592,10.67465,0.075,3.493438,10.41678,0.075,4.241524,10.61377,0.075,4.20137,10.81076,0.075,4.161216,10.55289,0.075,4.909302,10.74989,0.075,4.869148,10.94688,0.075,4.828994]))

IndexedFaceSet1767.setCoord(Coordinate1768)

Shape1764.setGeometry(IndexedFaceSet1767)

Scene12.addChild(Shape1764)
Shape1769 = x3d.Shape()
Appearance1770 = x3d.Appearance()
Material1771 = x3d.Material()
Material1771.setAmbientIntensity(0)
Material1771.setDiffuseColor(x3d.doubleToFloat([0.5,0.5,0.5]))
Material1771.setShininess(0)

Appearance1770.setMaterial(Material1771)

Shape1769.setAppearance(Appearance1770)
IndexedFaceSet1772 = x3d.IndexedFaceSet()
IndexedFaceSet1772.setSolid(False)
IndexedFaceSet1772.setTexCoordIndex([3,1,0,-1,3,0,2,-1])
IndexedFaceSet1772.setCoordIndex([3,1,0,-1,3,0,2,-1])
Coordinate1773 = x3d.Coordinate()
Coordinate1773.setPoint(x3d.doubleToFloat([10.27667,0.075,3.554149,10.14255,0.075,2.89617,11.08424,0.075,3.389538,10.95012,0.075,2.731559]))

IndexedFaceSet1772.setCoord(Coordinate1773)

Shape1769.setGeometry(IndexedFaceSet1772)

Scene12.addChild(Shape1769)
Shape1774 = x3d.Shape()
Appearance1775 = x3d.Appearance()
Material1776 = x3d.Material()
Material1776.setAmbientIntensity(0)
Material1776.setDiffuseColor(x3d.doubleToFloat([0.5,0.5,0.5]))
Material1776.setShininess(0)

Appearance1775.setMaterial(Material1776)

Shape1774.setAppearance(Appearance1775)
IndexedFaceSet1777 = x3d.IndexedFaceSet()
IndexedFaceSet1777.setSolid(False)
IndexedFaceSet1777.setTexCoordIndex([3,1,0,-1,3,0,2,-1])
IndexedFaceSet1777.setCoordIndex([3,1,0,-1,3,0,2,-1])
Coordinate1778 = x3d.Coordinate()
Coordinate1778.setPoint(x3d.doubleToFloat([10.13855,0.075,2.876573,10.00443,0.075,2.218594,10.94612,0.075,2.711962,10.812,0.075,2.053982]))

IndexedFaceSet1777.setCoord(Coordinate1778)

Shape1774.setGeometry(IndexedFaceSet1777)

Scene12.addChild(Shape1774)
Shape1779 = x3d.Shape()
Appearance1780 = x3d.Appearance()
Material1781 = x3d.Material()
Material1781.setAmbientIntensity(0)
Material1781.setDiffuseColor(x3d.doubleToFloat([0.5,0.5,0.5]))
Material1781.setShininess(0)

Appearance1780.setMaterial(Material1781)

Shape1779.setAppearance(Appearance1780)
IndexedFaceSet1782 = x3d.IndexedFaceSet()
IndexedFaceSet1782.setSolid(False)
IndexedFaceSet1782.setTexCoordIndex([3,1,0,-1,3,0,2,-1])
IndexedFaceSet1782.setCoordIndex([3,1,0,-1,3,0,2,-1])
Coordinate1783 = x3d.Coordinate()
Coordinate1783.setPoint(x3d.doubleToFloat([10.14007,0.075,7.110638,10.00595,0.075,6.452658,10.94764,0.075,6.946026,10.81352,0.075,6.288047]))

IndexedFaceSet1782.setCoord(Coordinate1783)

Shape1779.setGeometry(IndexedFaceSet1782)

Scene12.addChild(Shape1779)
Shape1784 = x3d.Shape()
Appearance1785 = x3d.Appearance()
Material1786 = x3d.Material()
Material1786.setAmbientIntensity(0)
Material1786.setDiffuseColor(x3d.doubleToFloat([0.5,0.5,0.5]))
Material1786.setShininess(0)

Appearance1785.setMaterial(Material1786)

Shape1784.setAppearance(Appearance1785)
IndexedFaceSet1787 = x3d.IndexedFaceSet()
IndexedFaceSet1787.setSolid(False)
IndexedFaceSet1787.setTexCoordIndex([3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1])
IndexedFaceSet1787.setCoordIndex([3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1])
Coordinate1788 = x3d.Coordinate()
Coordinate1788.setPoint(x3d.doubleToFloat([10.1433,0.075,5.013202,10.53729,0.075,4.932894,10.27942,0.075,5.68098,10.67341,0.075,5.600672,10.41554,0.075,6.348758,10.80952,0.075,6.26845]))

IndexedFaceSet1787.setCoord(Coordinate1788)

Shape1784.setGeometry(IndexedFaceSet1787)

Scene12.addChild(Shape1784)
Shape1789 = x3d.Shape()
Appearance1790 = x3d.Appearance()
Material1791 = x3d.Material()
Material1791.setAmbientIntensity(0)
Material1791.setDiffuseColor(x3d.doubleToFloat([0.5,0.5,0.5]))
Material1791.setShininess(0)

Appearance1790.setMaterial(Material1791)

Shape1789.setAppearance(Appearance1790)
IndexedFaceSet1792 = x3d.IndexedFaceSet()
IndexedFaceSet1792.setSolid(False)
IndexedFaceSet1792.setTexCoordIndex([3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1])
IndexedFaceSet1792.setCoordIndex([3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1])
Coordinate1793 = x3d.Coordinate()
Coordinate1793.setPoint(x3d.doubleToFloat([9.72972,0.075,5.097506,10.12371,0.075,5.017197,9.865837,0.075,5.765283,10.25982,0.075,5.684975,10.00195,0.075,6.433061,10.39594,0.075,6.352753]))

IndexedFaceSet1792.setCoord(Coordinate1793)

Shape1789.setGeometry(IndexedFaceSet1792)

Scene12.addChild(Shape1789)
Shape1794 = x3d.Shape()
Appearance1795 = x3d.Appearance()
Material1796 = x3d.Material()
Material1796.setAmbientIntensity(0)
Material1796.setDiffuseColor(x3d.doubleToFloat([0.5,0.5,0.5]))
Material1796.setShininess(0)

Appearance1795.setMaterial(Material1796)

Shape1794.setAppearance(Appearance1795)
IndexedFaceSet1797 = x3d.IndexedFaceSet()
IndexedFaceSet1797.setSolid(False)
IndexedFaceSet1797.setTexCoordIndex([3,1,0,-1,3,0,2,-1])
IndexedFaceSet1797.setCoordIndex([3,1,0,-1,3,0,2,-1])
Coordinate1798 = x3d.Coordinate()
Coordinate1798.setPoint(x3d.doubleToFloat([10.39918,0.075,4.255318,10.5333,0.075,4.913297,9.591606,0.075,4.419929,9.725726,0.075,5.077909]))

IndexedFaceSet1797.setCoord(Coordinate1798)

Shape1794.setGeometry(IndexedFaceSet1797)

Scene12.addChild(Shape1794)
Shape1799 = x3d.Shape()
Appearance1800 = x3d.Appearance()
Material1801 = x3d.Material()
Material1801.setAmbientIntensity(0)
Material1801.setDiffuseColor(x3d.doubleToFloat([0.5,0.5,0.5]))
Material1801.setShininess(0)

Appearance1800.setMaterial(Material1801)

Shape1799.setAppearance(Appearance1800)
IndexedFaceSet1802 = x3d.IndexedFaceSet()
IndexedFaceSet1802.setSolid(False)
IndexedFaceSet1802.setTexCoordIndex([3,1,0,-1,3,0,2,-1])
IndexedFaceSet1802.setCoordIndex([3,1,0,-1,3,0,2,-1])
Coordinate1803 = x3d.Coordinate()
Coordinate1803.setPoint(x3d.doubleToFloat([9.587612,0.075,4.400332,9.453492,0.075,3.742352,10.39518,0.075,4.235721,10.26106,0.075,3.577741]))

IndexedFaceSet1802.setCoord(Coordinate1803)

Shape1799.setGeometry(IndexedFaceSet1802)

Scene12.addChild(Shape1799)
Shape1804 = x3d.Shape()
Appearance1805 = x3d.Appearance()
Material1806 = x3d.Material()
Material1806.setAmbientIntensity(0)
Material1806.setDiffuseColor(x3d.doubleToFloat([0.5,0.5,0.5]))
Material1806.setShininess(0)

Appearance1805.setMaterial(Material1806)

Shape1804.setAppearance(Appearance1805)
IndexedFaceSet1807 = x3d.IndexedFaceSet()
IndexedFaceSet1807.setSolid(False)
IndexedFaceSet1807.setTexCoordIndex([3,1,0,-1,3,0,2,-1])
IndexedFaceSet1807.setCoordIndex([3,1,0,-1,3,0,2,-1])
Coordinate1808 = x3d.Coordinate()
Coordinate1808.setPoint(x3d.doubleToFloat([9.590848,0.075,2.302897,9.984836,0.075,2.222588,9.863082,0.075,3.638453,10.25707,0.075,3.558144]))

IndexedFaceSet1807.setCoord(Coordinate1808)

Shape1804.setGeometry(IndexedFaceSet1807)

Scene12.addChild(Shape1804)
Shape1809 = x3d.Shape()
Appearance1810 = x3d.Appearance()
Material1811 = x3d.Material()
Material1811.setAmbientIntensity(0)
Material1811.setDiffuseColor(x3d.doubleToFloat([0.5,0.5,0.5]))
Material1811.setShininess(0)

Appearance1810.setMaterial(Material1811)

Shape1809.setAppearance(Appearance1810)
IndexedFaceSet1812 = x3d.IndexedFaceSet()
IndexedFaceSet1812.setSolid(False)
IndexedFaceSet1812.setTexCoordIndex([3,1,0,-1,3,0,2,-1])
IndexedFaceSet1812.setCoordIndex([3,1,0,-1,3,0,2,-1])
Coordinate1813 = x3d.Coordinate()
Coordinate1813.setPoint(x3d.doubleToFloat([9.177264,0.075,2.3872,9.571251,0.075,2.306891,9.449498,0.075,3.722755,9.843485,0.075,3.642447]))

IndexedFaceSet1812.setCoord(Coordinate1813)

Shape1809.setGeometry(IndexedFaceSet1812)

Scene12.addChild(Shape1809)
Shape1814 = x3d.Shape()
Appearance1815 = x3d.Appearance()
Material1816 = x3d.Material()
Material1816.setAmbientIntensity(0)
Material1816.setDiffuseColor(x3d.doubleToFloat([0.5,0.5,0.5]))
Material1816.setShininess(0)

Appearance1815.setMaterial(Material1816)

Shape1814.setAppearance(Appearance1815)
IndexedFaceSet1817 = x3d.IndexedFaceSet()
IndexedFaceSet1817.setSolid(False)
IndexedFaceSet1817.setTexCoordIndex([3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1])
IndexedFaceSet1817.setCoordIndex([3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1])
Coordinate1818 = x3d.Coordinate()
Coordinate1818.setPoint(x3d.doubleToFloat([9.17327,0.075,2.367603,9.03915,0.075,1.709623,9.577055,0.075,2.285297,9.442936,0.075,1.627318,9.980841,0.075,2.202991,9.846722,0.075,1.545012]))

IndexedFaceSet1817.setCoord(Coordinate1818)

Shape1814.setGeometry(IndexedFaceSet1817)

Scene12.addChild(Shape1814)
Shape1819 = x3d.Shape()
Appearance1820 = x3d.Appearance()
Material1821 = x3d.Material()
Material1821.setAmbientIntensity(0)
Material1821.setDiffuseColor(x3d.doubleToFloat([0.5,0.5,0.5]))
Material1821.setShininess(0)

Appearance1820.setMaterial(Material1821)

Shape1819.setAppearance(Appearance1820)
IndexedFaceSet1822 = x3d.IndexedFaceSet()
IndexedFaceSet1822.setSolid(False)
IndexedFaceSet1822.setTexCoordIndex([3,1,0,-1,3,0,2,-1])
IndexedFaceSet1822.setCoordIndex([3,1,0,-1,3,0,2,-1])
Coordinate1823 = x3d.Coordinate()
Coordinate1823.setPoint(x3d.doubleToFloat([9.174786,0.075,6.601667,9.040667,0.075,5.943688,9.982357,0.075,6.437056,9.848237,0.075,5.779077]))

IndexedFaceSet1822.setCoord(Coordinate1823)

Shape1819.setGeometry(IndexedFaceSet1822)

Scene12.addChild(Shape1819)
Shape1824 = x3d.Shape()
Appearance1825 = x3d.Appearance()
Material1826 = x3d.Material()
Material1826.setAmbientIntensity(0)
Material1826.setDiffuseColor(x3d.doubleToFloat([0.5,0.5,0.5]))
Material1826.setShininess(0)

Appearance1825.setMaterial(Material1826)

Shape1824.setAppearance(Appearance1825)
IndexedFaceSet1827 = x3d.IndexedFaceSet()
IndexedFaceSet1827.setSolid(False)
IndexedFaceSet1827.setTexCoordIndex([3,1,0,-1,3,0,2,-1])
IndexedFaceSet1827.setCoordIndex([3,1,0,-1,3,0,2,-1])
Coordinate1828 = x3d.Coordinate()
Coordinate1828.setPoint(x3d.doubleToFloat([9.036672,0.075,5.924091,8.902553,0.075,5.266111,9.844243,0.075,5.75948,9.710123,0.075,5.1015]))

IndexedFaceSet1827.setCoord(Coordinate1828)

Shape1824.setGeometry(IndexedFaceSet1827)

Scene12.addChild(Shape1824)
Shape1829 = x3d.Shape()
Appearance1830 = x3d.Appearance()
Material1831 = x3d.Material()
Material1831.setAmbientIntensity(0)
Material1831.setDiffuseColor(x3d.doubleToFloat([0.5,0.5,0.5]))
Material1831.setShininess(0)

Appearance1830.setMaterial(Material1831)

Shape1829.setAppearance(Appearance1830)
IndexedFaceSet1832 = x3d.IndexedFaceSet()
IndexedFaceSet1832.setSolid(False)
IndexedFaceSet1832.setTexCoordIndex([4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1])
IndexedFaceSet1832.setCoordIndex([4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1])
Coordinate1833 = x3d.Coordinate()
Coordinate1833.setPoint(x3d.doubleToFloat([9.039908,0.075,3.826656,9.236902,0.075,3.786501,9.433895,0.075,3.746347,9.176025,0.075,4.494433,9.373018,0.075,4.454279,9.570012,0.075,4.414125,9.312142,0.075,5.162211,9.509135,0.075,5.122057,9.706129,0.075,5.081903]))

IndexedFaceSet1832.setCoord(Coordinate1833)

Shape1829.setGeometry(IndexedFaceSet1832)

Scene12.addChild(Shape1829)
Shape1834 = x3d.Shape()
Appearance1835 = x3d.Appearance()
Material1836 = x3d.Material()
Material1836.setAmbientIntensity(0)
Material1836.setDiffuseColor(x3d.doubleToFloat([0.5,0.5,0.5]))
Material1836.setShininess(0)

Appearance1835.setMaterial(Material1836)

Shape1834.setAppearance(Appearance1835)
IndexedFaceSet1837 = x3d.IndexedFaceSet()
IndexedFaceSet1837.setSolid(False)
IndexedFaceSet1837.setTexCoordIndex([3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1])
IndexedFaceSet1837.setCoordIndex([3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1])
Coordinate1838 = x3d.Coordinate()
Coordinate1838.setPoint(x3d.doubleToFloat([9.292545,0.075,5.166206,8.898558,0.075,5.246514,9.156428,0.075,4.498428,8.762442,0.075,4.578736,9.020311,0.075,3.83065,8.626325,0.075,3.910959]))

IndexedFaceSet1837.setCoord(Coordinate1838)

Shape1834.setGeometry(IndexedFaceSet1837)

Scene12.addChild(Shape1834)
Shape1839 = x3d.Shape()
Appearance1840 = x3d.Appearance()
Material1841 = x3d.Material()
Material1841.setAmbientIntensity(0)
Material1841.setDiffuseColor(x3d.doubleToFloat([0.5,0.5,0.5]))
Material1841.setShininess(0)

Appearance1840.setMaterial(Material1841)

Shape1839.setAppearance(Appearance1840)
IndexedFaceSet1842 = x3d.IndexedFaceSet()
IndexedFaceSet1842.setSolid(False)
IndexedFaceSet1842.setTexCoordIndex([3,1,0,-1,3,0,2,-1])
IndexedFaceSet1842.setCoordIndex([3,1,0,-1,3,0,2,-1])
Coordinate1843 = x3d.Coordinate()
Coordinate1843.setPoint(x3d.doubleToFloat([8.62233,0.075,3.891361,8.488211,0.075,3.233382,9.429901,0.075,3.72675,9.295781,0.075,3.068771]))

IndexedFaceSet1842.setCoord(Coordinate1843)

Shape1839.setGeometry(IndexedFaceSet1842)

Scene12.addChild(Shape1839)
Shape1844 = x3d.Shape()
Appearance1845 = x3d.Appearance()
Material1846 = x3d.Material()
Material1846.setAmbientIntensity(0)
Material1846.setDiffuseColor(x3d.doubleToFloat([0.5,0.5,0.5]))
Material1846.setShininess(0)

Appearance1845.setMaterial(Material1846)

Shape1844.setAppearance(Appearance1845)
IndexedFaceSet1847 = x3d.IndexedFaceSet()
IndexedFaceSet1847.setSolid(False)
IndexedFaceSet1847.setTexCoordIndex([3,1,0,-1,3,0,2,-1])
IndexedFaceSet1847.setCoordIndex([3,1,0,-1,3,0,2,-1])
Coordinate1848 = x3d.Coordinate()
Coordinate1848.setPoint(x3d.doubleToFloat([8.484216,0.075,3.213785,8.350097,0.075,2.555806,9.291787,0.075,3.049174,9.157667,0.075,2.391194]))

IndexedFaceSet1847.setCoord(Coordinate1848)

Shape1844.setGeometry(IndexedFaceSet1847)

Scene12.addChild(Shape1844)
Shape1849 = x3d.Shape()
Appearance1850 = x3d.Appearance()
Material1851 = x3d.Material()
Material1851.setAmbientIntensity(0)
Material1851.setDiffuseColor(x3d.doubleToFloat([0.5,0.5,0.5]))
Material1851.setShininess(0)

Appearance1850.setMaterial(Material1851)

Shape1849.setAppearance(Appearance1850)
IndexedFaceSet1852 = x3d.IndexedFaceSet()
IndexedFaceSet1852.setSolid(False)
IndexedFaceSet1852.setTexCoordIndex([4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1])
IndexedFaceSet1852.setCoordIndex([4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1])
Coordinate1853 = x3d.Coordinate()
Coordinate1853.setPoint(x3d.doubleToFloat([8.487453,0.075,1.11635,8.684446,0.075,1.076196,8.881439,0.075,1.036041,8.623569,0.075,1.784128,8.820562,0.075,1.743973,9.017556,0.075,1.703819,8.759686,0.075,2.451906,8.956679,0.075,2.411752,9.153673,0.075,2.371597]))

IndexedFaceSet1852.setCoord(Coordinate1853)

Shape1849.setGeometry(IndexedFaceSet1852)

Scene12.addChild(Shape1849)
Shape1854 = x3d.Shape()
Appearance1855 = x3d.Appearance()
Material1856 = x3d.Material()
Material1856.setAmbientIntensity(0)
Material1856.setDiffuseColor(x3d.doubleToFloat([0.5,0.5,0.5]))
Material1856.setShininess(0)

Appearance1855.setMaterial(Material1856)

Shape1854.setAppearance(Appearance1855)
IndexedFaceSet1857 = x3d.IndexedFaceSet()
IndexedFaceSet1857.setSolid(False)
IndexedFaceSet1857.setTexCoordIndex([4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1])
IndexedFaceSet1857.setCoordIndex([4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1])
Coordinate1858 = x3d.Coordinate()
Coordinate1858.setPoint(x3d.doubleToFloat([8.073869,0.075,1.200653,8.270862,0.075,1.160499,8.467855,0.075,1.120344,8.209986,0.075,1.868431,8.406979,0.075,1.828277,8.603972,0.075,1.788122,8.346102,0.075,2.536209,8.543096,0.075,2.496054,8.740088,0.075,2.4559]))

IndexedFaceSet1857.setCoord(Coordinate1858)

Shape1854.setGeometry(IndexedFaceSet1857)

Scene12.addChild(Shape1854)
Shape1859 = x3d.Shape()
Appearance1860 = x3d.Appearance()
Material1861 = x3d.Material()
Material1861.setAmbientIntensity(0)
Material1861.setDiffuseColor(x3d.doubleToFloat([0.5,0.5,0.5]))
Material1861.setShininess(0)

Appearance1860.setMaterial(Material1861)

Shape1859.setAppearance(Appearance1860)
IndexedFaceSet1862 = x3d.IndexedFaceSet()
IndexedFaceSet1862.setSolid(False)
IndexedFaceSet1862.setTexCoordIndex([4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1])
IndexedFaceSet1862.setCoordIndex([4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1])
Coordinate1863 = x3d.Coordinate()
Coordinate1863.setPoint(x3d.doubleToFloat([8.743325,0.075,0.3584649,8.810385,0.075,0.6874546,8.877445,0.075,1.016444,7.935755,0.075,0.5230764,8.002814,0.075,0.8520661,8.069874,0.075,1.181056]))

IndexedFaceSet1862.setCoord(Coordinate1863)

Shape1859.setGeometry(IndexedFaceSet1862)

Scene12.addChild(Shape1859)
Shape1864 = x3d.Shape()
Appearance1865 = x3d.Appearance()
Material1866 = x3d.Material()
Material1866.setAmbientIntensity(0)
Material1866.setDiffuseColor(x3d.doubleToFloat([0.5,0.5,0.5]))
Material1866.setShininess(0)

Appearance1865.setMaterial(Material1866)

Shape1864.setAppearance(Appearance1865)
IndexedFaceSet1867 = x3d.IndexedFaceSet()
IndexedFaceSet1867.setSolid(False)
IndexedFaceSet1867.setTexCoordIndex([3,1,0,-1,3,0,2,-1])
IndexedFaceSet1867.setCoordIndex([3,1,0,-1,3,0,2,-1])
Coordinate1868 = x3d.Coordinate()
Coordinate1868.setPoint(x3d.doubleToFloat([8.488969,0.075,5.350414,8.882956,0.075,5.270106,8.761202,0.075,6.68597,9.155189,0.075,6.605662]))

IndexedFaceSet1867.setCoord(Coordinate1868)

Shape1864.setGeometry(IndexedFaceSet1867)

Scene12.addChild(Shape1864)
Shape1869 = x3d.Shape()
Appearance1870 = x3d.Appearance()
Material1871 = x3d.Material()
Material1871.setAmbientIntensity(0)
Material1871.setDiffuseColor(x3d.doubleToFloat([0.5,0.5,0.5]))
Material1871.setShininess(0)

Appearance1870.setMaterial(Material1871)

Shape1869.setAppearance(Appearance1870)
IndexedFaceSet1872 = x3d.IndexedFaceSet()
IndexedFaceSet1872.setSolid(False)
IndexedFaceSet1872.setTexCoordIndex([4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1])
IndexedFaceSet1872.setCoordIndex([4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1])
Coordinate1873 = x3d.Coordinate()
Coordinate1873.setPoint(x3d.doubleToFloat([8.741605,0.075,6.689965,8.544612,0.075,6.730119,8.347618,0.075,6.770273,8.605488,0.075,6.022187,8.408495,0.075,6.062341,8.211501,0.075,6.102495,8.469372,0.075,5.354409,8.272378,0.075,5.394563,8.075385,0.075,5.434718]))

IndexedFaceSet1872.setCoord(Coordinate1873)

Shape1869.setGeometry(IndexedFaceSet1872)

Scene12.addChild(Shape1869)
Shape1874 = x3d.Shape()
Appearance1875 = x3d.Appearance()
Material1876 = x3d.Material()
Material1876.setAmbientIntensity(0)
Material1876.setDiffuseColor(x3d.doubleToFloat([0.5,0.5,0.5]))
Material1876.setShininess(0)

Appearance1875.setMaterial(Material1876)

Shape1874.setAppearance(Appearance1875)
IndexedFaceSet1877 = x3d.IndexedFaceSet()
IndexedFaceSet1877.setSolid(False)
IndexedFaceSet1877.setTexCoordIndex([3,1,0,-1,3,0,2,-1])
IndexedFaceSet1877.setCoordIndex([3,1,0,-1,3,0,2,-1])
Coordinate1878 = x3d.Coordinate()
Coordinate1878.setPoint(x3d.doubleToFloat([8.07139,0.075,5.415121,7.937271,0.075,4.757141,8.878961,0.075,5.250509,8.744842,0.075,4.59253]))

IndexedFaceSet1877.setCoord(Coordinate1878)

Shape1874.setGeometry(IndexedFaceSet1877)

Scene12.addChild(Shape1874)
Shape1879 = x3d.Shape()
Appearance1880 = x3d.Appearance()
Material1881 = x3d.Material()
Material1881.setAmbientIntensity(0)
Material1881.setDiffuseColor(x3d.doubleToFloat([0.5,0.5,0.5]))
Material1881.setShininess(0)

Appearance1880.setMaterial(Material1881)

Shape1879.setAppearance(Appearance1880)
IndexedFaceSet1882 = x3d.IndexedFaceSet()
IndexedFaceSet1882.setSolid(False)
IndexedFaceSet1882.setTexCoordIndex([3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1])
IndexedFaceSet1882.setCoordIndex([3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1])
Coordinate1883 = x3d.Coordinate()
Coordinate1883.setPoint(x3d.doubleToFloat([7.933276,0.075,4.737544,7.799157,0.075,4.079565,8.337062,0.075,4.655238,8.202942,0.075,3.997259,8.740847,0.075,4.572933,8.606728,0.075,3.914953]))

IndexedFaceSet1882.setCoord(Coordinate1883)

Shape1879.setGeometry(IndexedFaceSet1882)

Scene12.addChild(Shape1879)
Shape1884 = x3d.Shape()
Appearance1885 = x3d.Appearance()
Material1886 = x3d.Material()
Material1886.setAmbientIntensity(0)
Material1886.setDiffuseColor(x3d.doubleToFloat([0.5,0.5,0.5]))
Material1886.setShininess(0)

Appearance1885.setMaterial(Material1886)

Shape1884.setAppearance(Appearance1885)
IndexedFaceSet1887 = x3d.IndexedFaceSet()
IndexedFaceSet1887.setSolid(False)
IndexedFaceSet1887.setTexCoordIndex([3,1,0,-1,3,0,2,-1])
IndexedFaceSet1887.setCoordIndex([3,1,0,-1,3,0,2,-1])
Coordinate1888 = x3d.Coordinate()
Coordinate1888.setPoint(x3d.doubleToFloat([7.936512,0.075,2.640109,8.3305,0.075,2.5598,8.208746,0.075,3.975665,8.602733,0.075,3.895356]))

IndexedFaceSet1887.setCoord(Coordinate1888)

Shape1884.setGeometry(IndexedFaceSet1887)

Scene12.addChild(Shape1884)
Shape1889 = x3d.Shape()
Appearance1890 = x3d.Appearance()
Material1891 = x3d.Material()
Material1891.setAmbientIntensity(0)
Material1891.setDiffuseColor(x3d.doubleToFloat([0.5,0.5,0.5]))
Material1891.setShininess(0)

Appearance1890.setMaterial(Material1891)

Shape1889.setAppearance(Appearance1890)
IndexedFaceSet1892 = x3d.IndexedFaceSet()
IndexedFaceSet1892.setSolid(False)
IndexedFaceSet1892.setTexCoordIndex([4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1])
IndexedFaceSet1892.setCoordIndex([4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1])
Coordinate1893 = x3d.Coordinate()
Coordinate1893.setPoint(x3d.doubleToFloat([8.189149,0.075,3.979659,7.992156,0.075,4.019814,7.795162,0.075,4.059968,8.053032,0.075,3.311881,7.856039,0.075,3.352035,7.659045,0.075,3.39219,7.916915,0.075,2.644103,7.719922,0.075,2.684258,7.522929,0.075,2.724412]))

IndexedFaceSet1892.setCoord(Coordinate1893)

Shape1889.setGeometry(IndexedFaceSet1892)

Scene12.addChild(Shape1889)
Shape1894 = x3d.Shape()
Appearance1895 = x3d.Appearance()
Material1896 = x3d.Material()
Material1896.setAmbientIntensity(0)
Material1896.setDiffuseColor(x3d.doubleToFloat([0.5,0.5,0.5]))
Material1896.setShininess(0)

Appearance1895.setMaterial(Material1896)

Shape1894.setAppearance(Appearance1895)
IndexedFaceSet1897 = x3d.IndexedFaceSet()
IndexedFaceSet1897.setSolid(False)
IndexedFaceSet1897.setTexCoordIndex([3,1,0,-1,3,0,2,-1])
IndexedFaceSet1897.setCoordIndex([3,1,0,-1,3,0,2,-1])
Coordinate1898 = x3d.Coordinate()
Coordinate1898.setPoint(x3d.doubleToFloat([7.518934,0.075,2.704815,7.384815,0.075,2.046835,8.326505,0.075,2.540203,8.192386,0.075,1.882224]))

IndexedFaceSet1897.setCoord(Coordinate1898)

Shape1894.setGeometry(IndexedFaceSet1897)

Scene12.addChild(Shape1894)
Shape1899 = x3d.Shape()
Appearance1900 = x3d.Appearance()
Material1901 = x3d.Material()
Material1901.setAmbientIntensity(0)
Material1901.setDiffuseColor(x3d.doubleToFloat([0.5,0.5,0.5]))
Material1901.setShininess(0)

Appearance1900.setMaterial(Material1901)

Shape1899.setAppearance(Appearance1900)
IndexedFaceSet1902 = x3d.IndexedFaceSet()
IndexedFaceSet1902.setSolid(False)
IndexedFaceSet1902.setTexCoordIndex([3,1,0,-1,3,0,2,-1])
IndexedFaceSet1902.setCoordIndex([3,1,0,-1,3,0,2,-1])
Coordinate1903 = x3d.Coordinate()
Coordinate1903.setPoint(x3d.doubleToFloat([7.38082,0.075,2.027238,7.246701,0.075,1.369259,8.188391,0.075,1.862627,8.054272,0.075,1.204647]))

IndexedFaceSet1902.setCoord(Coordinate1903)

Shape1899.setGeometry(IndexedFaceSet1902)

Scene12.addChild(Shape1899)
Shape1904 = x3d.Shape()
Appearance1905 = x3d.Appearance()
Material1906 = x3d.Material()
Material1906.setAmbientIntensity(0)
Material1906.setDiffuseColor(x3d.doubleToFloat([0.5,0.5,0.5]))
Material1906.setShininess(0)

Appearance1905.setMaterial(Material1906)

Shape1904.setAppearance(Appearance1905)
IndexedFaceSet1907 = x3d.IndexedFaceSet()
IndexedFaceSet1907.setSolid(False)
IndexedFaceSet1907.setTexCoordIndex([4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1])
IndexedFaceSet1907.setCoordIndex([4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1])
Coordinate1908 = x3d.Coordinate()
Coordinate1908.setPoint(x3d.doubleToFloat([7.384057,0.075,-0.07019704,7.58105,0.075,-0.1103513,7.778044,0.075,-0.1505055,7.520174,0.075,0.5975809,7.717167,0.075,0.5574267,7.91416,0.075,0.5172724,7.65629,0.075,1.265359,7.853283,0.075,1.225205,8.050277,0.075,1.18505]))

IndexedFaceSet1907.setCoord(Coordinate1908)

Shape1904.setGeometry(IndexedFaceSet1907)

Scene12.addChild(Shape1904)
Shape1909 = x3d.Shape()
Appearance1910 = x3d.Appearance()
Material1911 = x3d.Material()
Material1911.setAmbientIntensity(0)
Material1911.setDiffuseColor(x3d.doubleToFloat([0.5,0.5,0.5]))
Material1911.setShininess(0)

Appearance1910.setMaterial(Material1911)

Shape1909.setAppearance(Appearance1910)
IndexedFaceSet1912 = x3d.IndexedFaceSet()
IndexedFaceSet1912.setSolid(False)
IndexedFaceSet1912.setTexCoordIndex([3,1,0,-1,3,0,2,-1])
IndexedFaceSet1912.setCoordIndex([3,1,0,-1,3,0,2,-1])
Coordinate1913 = x3d.Coordinate()
Coordinate1913.setPoint(x3d.doubleToFloat([6.970473,0.075,0.01410597,7.36446,0.075,-0.06620247,7.242706,0.075,1.349662,7.636693,0.075,1.269353]))

IndexedFaceSet1912.setCoord(Coordinate1913)

Shape1909.setGeometry(IndexedFaceSet1912)

Scene12.addChild(Shape1909)
Shape1914 = x3d.Shape()
Appearance1915 = x3d.Appearance()
Material1916 = x3d.Material()
Material1916.setAmbientIntensity(0)
Material1916.setDiffuseColor(x3d.doubleToFloat([0.5,0.5,0.5]))
Material1916.setShininess(0)

Appearance1915.setMaterial(Material1916)

Shape1914.setAppearance(Appearance1915)
IndexedFaceSet1917 = x3d.IndexedFaceSet()
IndexedFaceSet1917.setSolid(False)
IndexedFaceSet1917.setTexCoordIndex([4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1])
IndexedFaceSet1917.setCoordIndex([4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1])
Coordinate1918 = x3d.Coordinate()
Coordinate1918.setPoint(x3d.doubleToFloat([7.382336,0.075,6.261303,7.315277,0.075,5.932313,7.248217,0.075,5.603323,7.786121,0.075,6.178997,7.719062,0.075,5.850008,7.652002,0.075,5.521018,8.189907,0.075,6.096692,8.122848,0.075,5.767702,8.055788,0.075,5.438712]))

IndexedFaceSet1917.setCoord(Coordinate1918)

Shape1914.setGeometry(IndexedFaceSet1917)

Scene12.addChild(Shape1914)
Shape1919 = x3d.Shape()
Appearance1920 = x3d.Appearance()
Material1921 = x3d.Material()
Material1921.setAmbientIntensity(0)
Material1921.setDiffuseColor(x3d.doubleToFloat([0.5,0.5,0.5]))
Material1921.setShininess(0)

Appearance1920.setMaterial(Material1921)

Shape1919.setAppearance(Appearance1920)
IndexedFaceSet1922 = x3d.IndexedFaceSet()
IndexedFaceSet1922.setSolid(False)
IndexedFaceSet1922.setTexCoordIndex([3,1,0,-1,3,0,2,-1])
IndexedFaceSet1922.setCoordIndex([3,1,0,-1,3,0,2,-1])
Coordinate1923 = x3d.Coordinate()
Coordinate1923.setPoint(x3d.doubleToFloat([7.385573,0.075,4.163867,7.77956,0.075,4.083559,7.657806,0.075,5.499424,8.051793,0.075,5.419115]))

IndexedFaceSet1922.setCoord(Coordinate1923)

Shape1919.setGeometry(IndexedFaceSet1922)

Scene12.addChild(Shape1919)
Shape1924 = x3d.Shape()
Appearance1925 = x3d.Appearance()
Material1926 = x3d.Material()
Material1926.setAmbientIntensity(0)
Material1926.setDiffuseColor(x3d.doubleToFloat([0.5,0.5,0.5]))
Material1926.setShininess(0)

Appearance1925.setMaterial(Material1926)

Shape1924.setAppearance(Appearance1925)
IndexedFaceSet1927 = x3d.IndexedFaceSet()
IndexedFaceSet1927.setSolid(False)
IndexedFaceSet1927.setTexCoordIndex([3,1,0,-1,3,0,2,-1])
IndexedFaceSet1927.setCoordIndex([3,1,0,-1,3,0,2,-1])
Coordinate1928 = x3d.Coordinate()
Coordinate1928.setPoint(x3d.doubleToFloat([6.971989,0.075,4.24817,7.365976,0.075,4.167862,7.244222,0.075,5.583726,7.638209,0.075,5.503418]))

IndexedFaceSet1927.setCoord(Coordinate1928)

Shape1924.setGeometry(IndexedFaceSet1927)

Scene12.addChild(Shape1924)
Shape1929 = x3d.Shape()
Appearance1930 = x3d.Appearance()
Material1931 = x3d.Material()
Material1931.setAmbientIntensity(0)
Material1931.setDiffuseColor(x3d.doubleToFloat([0.5,0.5,0.5]))
Material1931.setShininess(0)

Appearance1930.setMaterial(Material1931)

Shape1929.setAppearance(Appearance1930)
IndexedFaceSet1932 = x3d.IndexedFaceSet()
IndexedFaceSet1932.setSolid(False)
IndexedFaceSet1932.setTexCoordIndex([3,1,0,-1,3,0,2,-1])
IndexedFaceSet1932.setCoordIndex([3,1,0,-1,3,0,2,-1])
Coordinate1933 = x3d.Coordinate()
Coordinate1933.setPoint(x3d.doubleToFloat([6.967994,0.075,4.228573,6.833875,0.075,3.570594,7.775565,0.075,4.063962,7.641446,0.075,3.405983]))

IndexedFaceSet1932.setCoord(Coordinate1933)

Shape1929.setGeometry(IndexedFaceSet1932)

Scene12.addChild(Shape1929)
Shape1934 = x3d.Shape()
Appearance1935 = x3d.Appearance()
Material1936 = x3d.Material()
Material1936.setAmbientIntensity(0)
Material1936.setDiffuseColor(x3d.doubleToFloat([0.5,0.5,0.5]))
Material1936.setShininess(0)

Appearance1935.setMaterial(Material1936)

Shape1934.setAppearance(Appearance1935)
IndexedFaceSet1937 = x3d.IndexedFaceSet()
IndexedFaceSet1937.setSolid(False)
IndexedFaceSet1937.setTexCoordIndex([3,1,0,-1,3,0,2,-1])
IndexedFaceSet1937.setCoordIndex([3,1,0,-1,3,0,2,-1])
Coordinate1938 = x3d.Coordinate()
Coordinate1938.setPoint(x3d.doubleToFloat([6.82988,0.075,3.550997,6.695761,0.075,2.893018,7.637451,0.075,3.386386,7.503332,0.075,2.728406]))

IndexedFaceSet1937.setCoord(Coordinate1938)

Shape1934.setGeometry(IndexedFaceSet1937)

Scene12.addChild(Shape1934)
Shape1939 = x3d.Shape()
Appearance1940 = x3d.Appearance()
Material1941 = x3d.Material()
Material1941.setAmbientIntensity(0)
Material1941.setDiffuseColor(x3d.doubleToFloat([0.5,0.5,0.5]))
Material1941.setShininess(0)

Appearance1940.setMaterial(Material1941)

Shape1939.setAppearance(Appearance1940)
IndexedFaceSet1942 = x3d.IndexedFaceSet()
IndexedFaceSet1942.setSolid(False)
IndexedFaceSet1942.setTexCoordIndex([4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1])
IndexedFaceSet1942.setCoordIndex([4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1])
Coordinate1943 = x3d.Coordinate()
Coordinate1943.setPoint(x3d.doubleToFloat([7.499337,0.075,2.708809,7.302343,0.075,2.748963,7.10535,0.075,2.789118,7.36322,0.075,2.041031,7.166227,0.075,2.081186,6.969234,0.075,2.12134,7.227104,0.075,1.373253,7.03011,0.075,1.413408,6.833117,0.075,1.453562]))

IndexedFaceSet1942.setCoord(Coordinate1943)

Shape1939.setGeometry(IndexedFaceSet1942)

Scene12.addChild(Shape1939)
Shape1944 = x3d.Shape()
Appearance1945 = x3d.Appearance()
Material1946 = x3d.Material()
Material1946.setAmbientIntensity(0)
Material1946.setDiffuseColor(x3d.doubleToFloat([0.5,0.5,0.5]))
Material1946.setShininess(0)

Appearance1945.setMaterial(Material1946)

Shape1944.setAppearance(Appearance1945)
IndexedFaceSet1947 = x3d.IndexedFaceSet()
IndexedFaceSet1947.setSolid(False)
IndexedFaceSet1947.setTexCoordIndex([3,1,0,-1,3,0,2,-1])
IndexedFaceSet1947.setCoordIndex([3,1,0,-1,3,0,2,-1])
Coordinate1948 = x3d.Coordinate()
Coordinate1948.setPoint(x3d.doubleToFloat([6.419533,0.075,1.537865,6.813519,0.075,1.457556,6.691766,0.075,2.873421,7.085753,0.075,2.793112]))

IndexedFaceSet1947.setCoord(Coordinate1948)

Shape1944.setGeometry(IndexedFaceSet1947)

Scene12.addChild(Shape1944)
Shape1949 = x3d.Shape()
Appearance1950 = x3d.Appearance()
Material1951 = x3d.Material()
Material1951.setAmbientIntensity(0)
Material1951.setDiffuseColor(x3d.doubleToFloat([0.5,0.5,0.5]))
Material1951.setShininess(0)

Appearance1950.setMaterial(Material1951)

Shape1949.setAppearance(Appearance1950)
IndexedFaceSet1952 = x3d.IndexedFaceSet()
IndexedFaceSet1952.setSolid(False)
IndexedFaceSet1952.setTexCoordIndex([3,1,0,-1,3,0,2,-1])
IndexedFaceSet1952.setCoordIndex([3,1,0,-1,3,0,2,-1])
Coordinate1953 = x3d.Coordinate()
Coordinate1953.setPoint(x3d.doubleToFloat([7.08899,0.075,0.695677,7.223109,0.075,1.353656,6.281419,0.075,0.8602884,6.415538,0.075,1.518268]))

IndexedFaceSet1952.setCoord(Coordinate1953)

Shape1949.setGeometry(IndexedFaceSet1952)

Scene12.addChild(Shape1949)
Shape1954 = x3d.Shape()
Appearance1955 = x3d.Appearance()
Material1956 = x3d.Material()
Material1956.setAmbientIntensity(0)
Material1956.setDiffuseColor(x3d.doubleToFloat([0.5,0.5,0.5]))
Material1956.setShininess(0)

Appearance1955.setMaterial(Material1956)

Shape1954.setAppearance(Appearance1955)
IndexedFaceSet1957 = x3d.IndexedFaceSet()
IndexedFaceSet1957.setSolid(False)
IndexedFaceSet1957.setTexCoordIndex([3,1,0,-1,3,0,2,-1])
IndexedFaceSet1957.setCoordIndex([3,1,0,-1,3,0,2,-1])
Coordinate1958 = x3d.Coordinate()
Coordinate1958.setPoint(x3d.doubleToFloat([6.277424,0.075,0.8406914,6.143305,0.075,0.182712,7.084995,0.075,0.6760799,6.950876,0.075,0.01810054]))

IndexedFaceSet1957.setCoord(Coordinate1958)

Shape1954.setGeometry(IndexedFaceSet1957)

Scene12.addChild(Shape1954)
Shape1959 = x3d.Shape()
Appearance1960 = x3d.Appearance()
Material1961 = x3d.Material()
Material1961.setAmbientIntensity(0)
Material1961.setDiffuseColor(x3d.doubleToFloat([0.5,0.5,0.5]))
Material1961.setShininess(0)

Appearance1960.setMaterial(Material1961)

Shape1959.setAppearance(Appearance1960)
IndexedFaceSet1962 = x3d.IndexedFaceSet()
IndexedFaceSet1962.setSolid(False)
IndexedFaceSet1962.setTexCoordIndex([3,1,0,-1,3,0,2,-1])
IndexedFaceSet1962.setCoordIndex([3,1,0,-1,3,0,2,-1])
Coordinate1963 = x3d.Coordinate()
Coordinate1963.setPoint(x3d.doubleToFloat([6.417054,0.075,5.752332,6.282935,0.075,5.094353,7.224625,0.075,5.587721,7.090506,0.075,4.929741]))

IndexedFaceSet1962.setCoord(Coordinate1963)

Shape1959.setGeometry(IndexedFaceSet1962)

Scene12.addChild(Shape1959)
Shape1964 = x3d.Shape()
Appearance1965 = x3d.Appearance()
Material1966 = x3d.Material()
Material1966.setAmbientIntensity(0)
Material1966.setDiffuseColor(x3d.doubleToFloat([0.5,0.5,0.5]))
Material1966.setShininess(0)

Appearance1965.setMaterial(Material1966)

Shape1964.setAppearance(Appearance1965)
IndexedFaceSet1967 = x3d.IndexedFaceSet()
IndexedFaceSet1967.setSolid(False)
IndexedFaceSet1967.setTexCoordIndex([3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1])
IndexedFaceSet1967.setCoordIndex([3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1])
Coordinate1968 = x3d.Coordinate()
Coordinate1968.setPoint(x3d.doubleToFloat([6.27894,0.075,5.074756,6.144821,0.075,4.416777,6.682726,0.075,4.99245,6.548606,0.075,4.334471,7.086511,0.075,4.910144,6.952392,0.075,4.252165]))

IndexedFaceSet1967.setCoord(Coordinate1968)

Shape1964.setGeometry(IndexedFaceSet1967)

Scene12.addChild(Shape1964)
Shape1969 = x3d.Shape()
Appearance1970 = x3d.Appearance()
Material1971 = x3d.Material()
Material1971.setAmbientIntensity(0)
Material1971.setDiffuseColor(x3d.doubleToFloat([0.5,0.5,0.5]))
Material1971.setShininess(0)

Appearance1970.setMaterial(Material1971)

Shape1969.setAppearance(Appearance1970)
IndexedFaceSet1972 = x3d.IndexedFaceSet()
IndexedFaceSet1972.setSolid(False)
IndexedFaceSet1972.setTexCoordIndex([3,1,0,-1,3,0,2,-1])
IndexedFaceSet1972.setCoordIndex([3,1,0,-1,3,0,2,-1])
Coordinate1973 = x3d.Coordinate()
Coordinate1973.setPoint(x3d.doubleToFloat([6.282177,0.075,2.977321,6.676164,0.075,2.897012,6.55441,0.075,4.312877,6.948397,0.075,4.232568]))

IndexedFaceSet1972.setCoord(Coordinate1973)

Shape1969.setGeometry(IndexedFaceSet1972)

Scene12.addChild(Shape1969)
Shape1974 = x3d.Shape()
Appearance1975 = x3d.Appearance()
Material1976 = x3d.Material()
Material1976.setAmbientIntensity(0)
Material1976.setDiffuseColor(x3d.doubleToFloat([0.5,0.5,0.5]))
Material1976.setShininess(0)

Appearance1975.setMaterial(Material1976)

Shape1974.setAppearance(Appearance1975)
IndexedFaceSet1977 = x3d.IndexedFaceSet()
IndexedFaceSet1977.setSolid(False)
IndexedFaceSet1977.setTexCoordIndex([3,1,0,-1,3,0,2,-1])
IndexedFaceSet1977.setCoordIndex([3,1,0,-1,3,0,2,-1])
Coordinate1978 = x3d.Coordinate()
Coordinate1978.setPoint(x3d.doubleToFloat([5.868593,0.075,3.061624,6.26258,0.075,2.981315,6.140826,0.075,4.39718,6.534813,0.075,4.316871]))

IndexedFaceSet1977.setCoord(Coordinate1978)

Shape1974.setGeometry(IndexedFaceSet1977)

Scene12.addChild(Shape1974)
Shape1979 = x3d.Shape()
Appearance1980 = x3d.Appearance()
Material1981 = x3d.Material()
Material1981.setAmbientIntensity(0)
Material1981.setDiffuseColor(x3d.doubleToFloat([0.5,0.5,0.5]))
Material1981.setShininess(0)

Appearance1980.setMaterial(Material1981)

Shape1979.setAppearance(Appearance1980)
IndexedFaceSet1982 = x3d.IndexedFaceSet()
IndexedFaceSet1982.setSolid(False)
IndexedFaceSet1982.setTexCoordIndex([3,1,0,-1,3,0,2,-1])
IndexedFaceSet1982.setCoordIndex([3,1,0,-1,3,0,2,-1])
Coordinate1983 = x3d.Coordinate()
Coordinate1983.setPoint(x3d.doubleToFloat([6.53805,0.075,2.219436,6.672169,0.075,2.877415,5.730479,0.075,2.384047,5.864598,0.075,3.042027]))

IndexedFaceSet1982.setCoord(Coordinate1983)

Shape1979.setGeometry(IndexedFaceSet1982)

Scene12.addChild(Shape1979)
Shape1984 = x3d.Shape()
Appearance1985 = x3d.Appearance()
Material1986 = x3d.Material()
Material1986.setAmbientIntensity(0)
Material1986.setDiffuseColor(x3d.doubleToFloat([0.5,0.5,0.5]))
Material1986.setShininess(0)

Appearance1985.setMaterial(Material1986)

Shape1984.setAppearance(Appearance1985)
IndexedFaceSet1987 = x3d.IndexedFaceSet()
IndexedFaceSet1987.setSolid(False)
IndexedFaceSet1987.setTexCoordIndex([3,1,0,-1,3,0,2,-1])
IndexedFaceSet1987.setCoordIndex([3,1,0,-1,3,0,2,-1])
Coordinate1988 = x3d.Coordinate()
Coordinate1988.setPoint(x3d.doubleToFloat([5.726484,0.075,2.36445,5.592365,0.075,1.706471,6.534055,0.075,2.199839,6.399936,0.075,1.541859]))

IndexedFaceSet1987.setCoord(Coordinate1988)

Shape1984.setGeometry(IndexedFaceSet1987)

Scene12.addChild(Shape1984)
Shape1989 = x3d.Shape()
Appearance1990 = x3d.Appearance()
Material1991 = x3d.Material()
Material1991.setAmbientIntensity(0)
Material1991.setDiffuseColor(x3d.doubleToFloat([0.5,0.5,0.5]))
Material1991.setShininess(0)

Appearance1990.setMaterial(Material1991)

Shape1989.setAppearance(Appearance1990)
IndexedFaceSet1992 = x3d.IndexedFaceSet()
IndexedFaceSet1992.setSolid(False)
IndexedFaceSet1992.setTexCoordIndex([3,1,0,-1,3,0,2,-1])
IndexedFaceSet1992.setCoordIndex([3,1,0,-1,3,0,2,-1])
Coordinate1993 = x3d.Coordinate()
Coordinate1993.setPoint(x3d.doubleToFloat([6.395941,0.075,1.522262,6.001954,0.075,1.602571,6.123708,0.075,0.1867066,5.729721,0.075,0.267015]))

IndexedFaceSet1992.setCoord(Coordinate1993)

Shape1989.setGeometry(IndexedFaceSet1992)

Scene12.addChild(Shape1989)
Shape1994 = x3d.Shape()
Appearance1995 = x3d.Appearance()
Material1996 = x3d.Material()
Material1996.setAmbientIntensity(0)
Material1996.setDiffuseColor(x3d.doubleToFloat([0.5,0.5,0.5]))
Material1996.setShininess(0)

Appearance1995.setMaterial(Material1996)

Shape1994.setAppearance(Appearance1995)
IndexedFaceSet1997 = x3d.IndexedFaceSet()
IndexedFaceSet1997.setSolid(False)
IndexedFaceSet1997.setTexCoordIndex([3,1,0,-1,3,0,2,-1])
IndexedFaceSet1997.setCoordIndex([3,1,0,-1,3,0,2,-1])
Coordinate1998 = x3d.Coordinate()
Coordinate1998.setPoint(x3d.doubleToFloat([5.316137,0.075,0.351318,5.710124,0.075,0.2710096,5.58837,0.075,1.686874,5.982357,0.075,1.606565]))

IndexedFaceSet1997.setCoord(Coordinate1998)

Shape1994.setGeometry(IndexedFaceSet1997)

Scene12.addChild(Shape1994)
Shape1999 = x3d.Shape()
Appearance2000 = x3d.Appearance()
Material2001 = x3d.Material()
Material2001.setAmbientIntensity(0)
Material2001.setDiffuseColor(x3d.doubleToFloat([0.5,0.5,0.5]))
Material2001.setShininess(0)

Appearance2000.setMaterial(Material2001)

Shape1999.setAppearance(Appearance2000)
IndexedFaceSet2002 = x3d.IndexedFaceSet()
IndexedFaceSet2002.setSolid(False)
IndexedFaceSet2002.setTexCoordIndex([3,1,0,-1,3,0,2,-1])
IndexedFaceSet2002.setCoordIndex([3,1,0,-1,3,0,2,-1])
Coordinate2003 = x3d.Coordinate()
Coordinate2003.setPoint(x3d.doubleToFloat([5.731237,0.075,4.50108,6.125224,0.075,4.420771,6.00347,0.075,5.836636,6.397457,0.075,5.756327]))

IndexedFaceSet2002.setCoord(Coordinate2003)

Shape1999.setGeometry(IndexedFaceSet2002)

Scene12.addChild(Shape1999)
Shape2004 = x3d.Shape()
Appearance2005 = x3d.Appearance()
Material2006 = x3d.Material()
Material2006.setAmbientIntensity(0)
Material2006.setDiffuseColor(x3d.doubleToFloat([0.5,0.5,0.5]))
Material2006.setShininess(0)

Appearance2005.setMaterial(Material2006)

Shape2004.setAppearance(Appearance2005)
IndexedFaceSet2007 = x3d.IndexedFaceSet()
IndexedFaceSet2007.setSolid(False)
IndexedFaceSet2007.setTexCoordIndex([3,1,0,-1,3,0,2,-1])
IndexedFaceSet2007.setCoordIndex([3,1,0,-1,3,0,2,-1])
Coordinate2008 = x3d.Coordinate()
Coordinate2008.setPoint(x3d.doubleToFloat([5.983873,0.075,5.84063,5.589886,0.075,5.920938,5.71164,0.075,4.505074,5.317653,0.075,4.585382]))

IndexedFaceSet2007.setCoord(Coordinate2008)

Shape2004.setGeometry(IndexedFaceSet2007)

Scene12.addChild(Shape2004)
Shape2009 = x3d.Shape()
Appearance2010 = x3d.Appearance()
Material2011 = x3d.Material()
Material2011.setAmbientIntensity(0)
Material2011.setDiffuseColor(x3d.doubleToFloat([0.5,0.5,0.5]))
Material2011.setShininess(0)

Appearance2010.setMaterial(Material2011)

Shape2009.setAppearance(Appearance2010)
IndexedFaceSet2012 = x3d.IndexedFaceSet()
IndexedFaceSet2012.setSolid(False)
IndexedFaceSet2012.setTexCoordIndex([3,1,0,-1,3,0,2,-1])
IndexedFaceSet2012.setCoordIndex([3,1,0,-1,3,0,2,-1])
Coordinate2013 = x3d.Coordinate()
Coordinate2013.setPoint(x3d.doubleToFloat([5.313658,0.075,4.565785,5.179539,0.075,3.907806,6.121229,0.075,4.401174,5.98711,0.075,3.743195]))

IndexedFaceSet2012.setCoord(Coordinate2013)

Shape2009.setGeometry(IndexedFaceSet2012)

Scene12.addChild(Shape2009)
Shape2014 = x3d.Shape()
Appearance2015 = x3d.Appearance()
Material2016 = x3d.Material()
Material2016.setAmbientIntensity(0)
Material2016.setDiffuseColor(x3d.doubleToFloat([0.5,0.5,0.5]))
Material2016.setShininess(0)

Appearance2015.setMaterial(Material2016)

Shape2014.setAppearance(Appearance2015)
IndexedFaceSet2017 = x3d.IndexedFaceSet()
IndexedFaceSet2017.setSolid(False)
IndexedFaceSet2017.setTexCoordIndex([3,1,0,-1,3,0,2,-1])
IndexedFaceSet2017.setCoordIndex([3,1,0,-1,3,0,2,-1])
Coordinate2018 = x3d.Coordinate()
Coordinate2018.setPoint(x3d.doubleToFloat([5.175544,0.075,3.888209,5.041425,0.075,3.23023,5.983115,0.075,3.723598,5.848996,0.075,3.065618]))

IndexedFaceSet2017.setCoord(Coordinate2018)

Shape2014.setGeometry(IndexedFaceSet2017)

Scene12.addChild(Shape2014)
Shape2019 = x3d.Shape()
Appearance2020 = x3d.Appearance()
Material2021 = x3d.Material()
Material2021.setAmbientIntensity(0)
Material2021.setDiffuseColor(x3d.doubleToFloat([0.5,0.5,0.5]))
Material2021.setShininess(0)

Appearance2020.setMaterial(Material2021)

Shape2019.setAppearance(Appearance2020)
IndexedFaceSet2022 = x3d.IndexedFaceSet()
IndexedFaceSet2022.setSolid(False)
IndexedFaceSet2022.setTexCoordIndex([4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1])
IndexedFaceSet2022.setCoordIndex([4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1])
Coordinate2023 = x3d.Coordinate()
Coordinate2023.setPoint(x3d.doubleToFloat([5.178781,0.075,1.790774,5.375774,0.075,1.75062,5.572768,0.075,1.710465,5.314898,0.075,2.458552,5.511891,0.075,2.418398,5.708885,0.075,2.378243,5.451015,0.075,3.12633,5.648008,0.075,3.086175,5.845001,0.075,3.046021]))

IndexedFaceSet2022.setCoord(Coordinate2023)

Shape2019.setGeometry(IndexedFaceSet2022)

Scene12.addChild(Shape2019)
Shape2024 = x3d.Shape()
Appearance2025 = x3d.Appearance()
Material2026 = x3d.Material()
Material2026.setAmbientIntensity(0)
Material2026.setDiffuseColor(x3d.doubleToFloat([0.5,0.5,0.5]))
Material2026.setShininess(0)

Appearance2025.setMaterial(Material2026)

Shape2024.setAppearance(Appearance2025)
IndexedFaceSet2027 = x3d.IndexedFaceSet()
IndexedFaceSet2027.setSolid(False)
IndexedFaceSet2027.setTexCoordIndex([3,1,0,-1,3,0,2,-1])
IndexedFaceSet2027.setCoordIndex([3,1,0,-1,3,0,2,-1])
Coordinate2028 = x3d.Coordinate()
Coordinate2028.setPoint(x3d.doubleToFloat([4.765197,0.075,1.875077,5.159184,0.075,1.794768,5.03743,0.075,3.210633,5.431417,0.075,3.130324]))

IndexedFaceSet2027.setCoord(Coordinate2028)

Shape2024.setGeometry(IndexedFaceSet2027)

Scene12.addChild(Shape2024)
Shape2029 = x3d.Shape()
Appearance2030 = x3d.Appearance()
Material2031 = x3d.Material()
Material2031.setAmbientIntensity(0)
Material2031.setDiffuseColor(x3d.doubleToFloat([0.5,0.5,0.5]))
Material2031.setShininess(0)

Appearance2030.setMaterial(Material2031)

Shape2029.setAppearance(Appearance2030)
IndexedFaceSet2032 = x3d.IndexedFaceSet()
IndexedFaceSet2032.setSolid(False)
IndexedFaceSet2032.setTexCoordIndex([3,1,0,-1,3,0,2,-1])
IndexedFaceSet2032.setCoordIndex([3,1,0,-1,3,0,2,-1])
Coordinate2033 = x3d.Coordinate()
Coordinate2033.setPoint(x3d.doubleToFloat([5.434654,0.075,1.032889,5.568773,0.075,1.690868,4.627083,0.075,1.1975,4.761202,0.075,1.85548]))

IndexedFaceSet2032.setCoord(Coordinate2033)

Shape2029.setGeometry(IndexedFaceSet2032)

Scene12.addChild(Shape2029)
Shape2034 = x3d.Shape()
Appearance2035 = x3d.Appearance()
Material2036 = x3d.Material()
Material2036.setAmbientIntensity(0)
Material2036.setDiffuseColor(x3d.doubleToFloat([0.5,0.5,0.5]))
Material2036.setShininess(0)

Appearance2035.setMaterial(Material2036)

Shape2034.setAppearance(Appearance2035)
IndexedFaceSet2037 = x3d.IndexedFaceSet()
IndexedFaceSet2037.setSolid(False)
IndexedFaceSet2037.setTexCoordIndex([3,1,0,-1,3,0,2,-1])
IndexedFaceSet2037.setCoordIndex([3,1,0,-1,3,0,2,-1])
Coordinate2038 = x3d.Coordinate()
Coordinate2038.setPoint(x3d.doubleToFloat([4.623088,0.075,1.177903,4.488969,0.075,0.519924,5.430659,0.075,1.013292,5.29654,0.075,0.3553126]))

IndexedFaceSet2037.setCoord(Coordinate2038)

Shape2034.setGeometry(IndexedFaceSet2037)

Scene12.addChild(Shape2034)
Shape2039 = x3d.Shape()
Appearance2040 = x3d.Appearance()
Material2041 = x3d.Material()
Material2041.setAmbientIntensity(0)
Material2041.setDiffuseColor(x3d.doubleToFloat([0.5,0.5,0.5]))
Material2041.setShininess(0)

Appearance2040.setMaterial(Material2041)

Shape2039.setAppearance(Appearance2040)
IndexedFaceSet2042 = x3d.IndexedFaceSet()
IndexedFaceSet2042.setSolid(False)
IndexedFaceSet2042.setTexCoordIndex([3,1,0,-1,3,0,2,-1])
IndexedFaceSet2042.setCoordIndex([3,1,0,-1,3,0,2,-1])
Coordinate2043 = x3d.Coordinate()
Coordinate2043.setPoint(x3d.doubleToFloat([4.762719,0.075,6.089544,4.628599,0.075,5.431565,5.570289,0.075,5.924933,5.43617,0.075,5.266953]))

IndexedFaceSet2042.setCoord(Coordinate2043)

Shape2039.setGeometry(IndexedFaceSet2042)

Scene12.addChild(Shape2039)
Shape2044 = x3d.Shape()
Appearance2045 = x3d.Appearance()
Material2046 = x3d.Material()
Material2046.setAmbientIntensity(0)
Material2046.setDiffuseColor(x3d.doubleToFloat([0.5,0.5,0.5]))
Material2046.setShininess(0)

Appearance2045.setMaterial(Material2046)

Shape2044.setAppearance(Appearance2045)
IndexedFaceSet2047 = x3d.IndexedFaceSet()
IndexedFaceSet2047.setSolid(False)
IndexedFaceSet2047.setTexCoordIndex([4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1])
IndexedFaceSet2047.setCoordIndex([4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1])
Coordinate2048 = x3d.Coordinate()
Coordinate2048.setPoint(x3d.doubleToFloat([4.624605,0.075,5.411968,4.557545,0.075,5.082978,4.490485,0.075,4.753989,5.432175,0.075,5.247356,5.365116,0.075,4.918367,5.298056,0.075,4.589377]))

IndexedFaceSet2047.setCoord(Coordinate2048)

Shape2044.setGeometry(IndexedFaceSet2047)

Scene12.addChild(Shape2044)
Shape2049 = x3d.Shape()
Appearance2050 = x3d.Appearance()
Material2051 = x3d.Material()
Material2051.setAmbientIntensity(0)
Material2051.setDiffuseColor(x3d.doubleToFloat([0.5,0.5,0.5]))
Material2051.setShininess(0)

Appearance2050.setMaterial(Material2051)

Shape2049.setAppearance(Appearance2050)
IndexedFaceSet2052 = x3d.IndexedFaceSet()
IndexedFaceSet2052.setSolid(False)
IndexedFaceSet2052.setTexCoordIndex([3,1,0,-1,3,0,2,-1])
IndexedFaceSet2052.setCoordIndex([3,1,0,-1,3,0,2,-1])
Coordinate2053 = x3d.Coordinate()
Coordinate2053.setPoint(x3d.doubleToFloat([4.627841,0.075,3.314533,5.021828,0.075,3.234224,4.900074,0.075,4.650089,5.294061,0.075,4.56978]))

IndexedFaceSet2052.setCoord(Coordinate2053)

Shape2049.setGeometry(IndexedFaceSet2052)

Scene12.addChild(Shape2049)
Shape2054 = x3d.Shape()
Appearance2055 = x3d.Appearance()
Material2056 = x3d.Material()
Material2056.setAmbientIntensity(0)
Material2056.setDiffuseColor(x3d.doubleToFloat([0.5,0.5,0.5]))
Material2056.setShininess(0)

Appearance2055.setMaterial(Material2056)

Shape2054.setAppearance(Appearance2055)
IndexedFaceSet2057 = x3d.IndexedFaceSet()
IndexedFaceSet2057.setSolid(False)
IndexedFaceSet2057.setTexCoordIndex([3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1])
IndexedFaceSet2057.setCoordIndex([3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1])
Coordinate2058 = x3d.Coordinate()
Coordinate2058.setPoint(x3d.doubleToFloat([4.214257,0.075,3.398836,4.608244,0.075,3.318527,4.350374,0.075,4.066614,4.744361,0.075,3.986305,4.486491,0.075,4.734392,4.880477,0.075,4.654083]))

IndexedFaceSet2057.setCoord(Coordinate2058)

Shape2054.setGeometry(IndexedFaceSet2057)

Scene12.addChild(Shape2054)
Shape2059 = x3d.Shape()
Appearance2060 = x3d.Appearance()
Material2061 = x3d.Material()
Material2061.setAmbientIntensity(0)
Material2061.setDiffuseColor(x3d.doubleToFloat([0.5,0.5,0.5]))
Material2061.setShininess(0)

Appearance2060.setMaterial(Material2061)

Shape2059.setAppearance(Appearance2060)
IndexedFaceSet2062 = x3d.IndexedFaceSet()
IndexedFaceSet2062.setSolid(False)
IndexedFaceSet2062.setTexCoordIndex([3,1,0,-1,3,0,2,-1])
IndexedFaceSet2062.setCoordIndex([3,1,0,-1,3,0,2,-1])
Coordinate2063 = x3d.Coordinate()
Coordinate2063.setPoint(x3d.doubleToFloat([4.210262,0.075,3.379239,4.076143,0.075,2.721259,5.017833,0.075,3.214627,4.883714,0.075,2.556648]))

IndexedFaceSet2062.setCoord(Coordinate2063)

Shape2059.setGeometry(IndexedFaceSet2062)

Scene12.addChild(Shape2059)
Shape2064 = x3d.Shape()
Appearance2065 = x3d.Appearance()
Material2066 = x3d.Material()
Material2066.setAmbientIntensity(0)
Material2066.setDiffuseColor(x3d.doubleToFloat([0.5,0.5,0.5]))
Material2066.setShininess(0)

Appearance2065.setMaterial(Material2066)

Shape2064.setAppearance(Appearance2065)
IndexedFaceSet2067 = x3d.IndexedFaceSet()
IndexedFaceSet2067.setSolid(False)
IndexedFaceSet2067.setTexCoordIndex([3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1])
IndexedFaceSet2067.setCoordIndex([3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1])
Coordinate2068 = x3d.Coordinate()
Coordinate2068.setPoint(x3d.doubleToFloat([4.7456,0.075,1.879071,4.879719,0.075,2.537051,4.341815,0.075,1.961377,4.475934,0.075,2.619357,3.938029,0.075,2.043683,4.072148,0.075,2.701662]))

IndexedFaceSet2067.setCoord(Coordinate2068)

Shape2064.setGeometry(IndexedFaceSet2067)

Scene12.addChild(Shape2064)
Shape2069 = x3d.Shape()
Appearance2070 = x3d.Appearance()
Material2071 = x3d.Material()
Material2071.setAmbientIntensity(0)
Material2071.setDiffuseColor(x3d.doubleToFloat([0.5,0.5,0.5]))
Material2071.setShininess(0)

Appearance2070.setMaterial(Material2071)

Shape2069.setAppearance(Appearance2070)
IndexedFaceSet2072 = x3d.IndexedFaceSet()
IndexedFaceSet2072.setSolid(False)
IndexedFaceSet2072.setTexCoordIndex([3,1,0,-1,3,0,2,-1])
IndexedFaceSet2072.setCoordIndex([3,1,0,-1,3,0,2,-1])
Coordinate2073 = x3d.Coordinate()
Coordinate2073.setPoint(x3d.doubleToFloat([4.741605,0.075,1.859474,4.347619,0.075,1.939783,4.469372,0.075,0.5239186,4.075385,0.075,0.604227]))

IndexedFaceSet2072.setCoord(Coordinate2073)

Shape2069.setGeometry(IndexedFaceSet2072)

Scene12.addChild(Shape2069)
Shape2074 = x3d.Shape()
Appearance2075 = x3d.Appearance()
Material2076 = x3d.Material()
Material2076.setAmbientIntensity(0)
Material2076.setDiffuseColor(x3d.doubleToFloat([0.5,0.5,0.5]))
Material2076.setShininess(0)

Appearance2075.setMaterial(Material2076)

Shape2074.setAppearance(Appearance2075)
IndexedFaceSet2077 = x3d.IndexedFaceSet()
IndexedFaceSet2077.setSolid(False)
IndexedFaceSet2077.setTexCoordIndex([3,1,0,-1,3,0,2,-1])
IndexedFaceSet2077.setCoordIndex([3,1,0,-1,3,0,2,-1])
Coordinate2078 = x3d.Coordinate()
Coordinate2078.setPoint(x3d.doubleToFloat([4.328022,0.075,1.943777,3.934035,0.075,2.024086,4.055788,0.075,0.6082216,3.661801,0.075,0.68853]))

IndexedFaceSet2077.setCoord(Coordinate2078)

Shape2074.setGeometry(IndexedFaceSet2077)

Scene12.addChild(Shape2074)
Shape2079 = x3d.Shape()
Appearance2080 = x3d.Appearance()
Material2081 = x3d.Material()
Material2081.setAmbientIntensity(0)
Material2081.setDiffuseColor(x3d.doubleToFloat([0.5,0.5,0.5]))
Material2081.setShininess(0)

Appearance2080.setMaterial(Material2081)

Shape2079.setAppearance(Appearance2080)
IndexedFaceSet2082 = x3d.IndexedFaceSet()
IndexedFaceSet2082.setSolid(False)
IndexedFaceSet2082.setTexCoordIndex([3,1,0,-1,3,0,2,-1])
IndexedFaceSet2082.setCoordIndex([3,1,0,-1,3,0,2,-1])
Coordinate2083 = x3d.Coordinate()
Coordinate2083.setPoint(x3d.doubleToFloat([4.331258,0.075,-0.1536579,4.465377,0.075,0.5043216,3.523687,0.075,0.0109536,3.657807,0.075,0.668933]))

IndexedFaceSet2082.setCoord(Coordinate2083)

Shape2079.setGeometry(IndexedFaceSet2082)

Scene12.addChild(Shape2079)
Shape2084 = x3d.Shape()
Appearance2085 = x3d.Appearance()
Material2086 = x3d.Material()
Material2086.setAmbientIntensity(0)
Material2086.setDiffuseColor(x3d.doubleToFloat([0.5,0.5,0.5]))
Material2086.setShininess(0)

Appearance2085.setMaterial(Material2086)

Shape2084.setAppearance(Appearance2085)
IndexedFaceSet2087 = x3d.IndexedFaceSet()
IndexedFaceSet2087.setSolid(False)
IndexedFaceSet2087.setTexCoordIndex([3,1,0,-1,3,0,2,-1])
IndexedFaceSet2087.setCoordIndex([3,1,0,-1,3,0,2,-1])
Coordinate2088 = x3d.Coordinate()
Coordinate2088.setPoint(x3d.doubleToFloat([4.076901,0.075,4.838292,4.470888,0.075,4.757983,4.349134,0.075,6.173848,4.743122,0.075,6.093539]))

IndexedFaceSet2087.setCoord(Coordinate2088)

Shape2084.setGeometry(IndexedFaceSet2087)

Scene12.addChild(Shape2084)
Shape2089 = x3d.Shape()
Appearance2090 = x3d.Appearance()
Material2091 = x3d.Material()
Material2091.setAmbientIntensity(0)
Material2091.setDiffuseColor(x3d.doubleToFloat([0.5,0.5,0.5]))
Material2091.setShininess(0)

Appearance2090.setMaterial(Material2091)

Shape2089.setAppearance(Appearance2090)
IndexedFaceSet2092 = x3d.IndexedFaceSet()
IndexedFaceSet2092.setSolid(False)
IndexedFaceSet2092.setTexCoordIndex([3,1,0,-1,3,0,2,-1])
IndexedFaceSet2092.setCoordIndex([3,1,0,-1,3,0,2,-1])
Coordinate2093 = x3d.Coordinate()
Coordinate2093.setPoint(x3d.doubleToFloat([3.663317,0.075,4.922595,4.057304,0.075,4.842286,3.935551,0.075,6.258151,4.329537,0.075,6.177842]))

IndexedFaceSet2092.setCoord(Coordinate2093)

Shape2089.setGeometry(IndexedFaceSet2092)

Scene12.addChild(Shape2089)
Shape2094 = x3d.Shape()
Appearance2095 = x3d.Appearance()
Material2096 = x3d.Material()
Material2096.setAmbientIntensity(0)
Material2096.setDiffuseColor(x3d.doubleToFloat([0.5,0.5,0.5]))
Material2096.setShininess(0)

Appearance2095.setMaterial(Material2096)

Shape2094.setAppearance(Appearance2095)
IndexedFaceSet2097 = x3d.IndexedFaceSet()
IndexedFaceSet2097.setSolid(False)
IndexedFaceSet2097.setTexCoordIndex([3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1])
IndexedFaceSet2097.setCoordIndex([3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1])
Coordinate2098 = x3d.Coordinate()
Coordinate2098.setPoint(x3d.doubleToFloat([3.659323,0.075,4.902997,3.525203,0.075,4.245018,4.063108,0.075,4.820692,3.928989,0.075,4.162713,4.466894,0.075,4.738386,4.332774,0.075,4.080407]))

IndexedFaceSet2097.setCoord(Coordinate2098)

Shape2094.setGeometry(IndexedFaceSet2097)

Scene12.addChild(Shape2094)
Shape2099 = x3d.Shape()
Appearance2100 = x3d.Appearance()
Material2101 = x3d.Material()
Material2101.setAmbientIntensity(0)
Material2101.setDiffuseColor(x3d.doubleToFloat([0.5,0.5,0.5]))
Material2101.setShininess(0)

Appearance2100.setMaterial(Material2101)

Shape2099.setAppearance(Appearance2100)
IndexedFaceSet2102 = x3d.IndexedFaceSet()
IndexedFaceSet2102.setSolid(False)
IndexedFaceSet2102.setTexCoordIndex([3,1,0,-1,3,0,2,-1])
IndexedFaceSet2102.setCoordIndex([3,1,0,-1,3,0,2,-1])
Coordinate2103 = x3d.Coordinate()
Coordinate2103.setPoint(x3d.doubleToFloat([4.19466,0.075,3.40283,4.32878,0.075,4.06081,3.387089,0.075,3.567442,3.521209,0.075,4.225421]))

IndexedFaceSet2102.setCoord(Coordinate2103)

Shape2099.setGeometry(IndexedFaceSet2102)

Scene12.addChild(Shape2099)
Shape2104 = x3d.Shape()
Appearance2105 = x3d.Appearance()
Material2106 = x3d.Material()
Material2106.setAmbientIntensity(0)
Material2106.setDiffuseColor(x3d.doubleToFloat([0.5,0.5,0.5]))
Material2106.setShininess(0)

Appearance2105.setMaterial(Material2106)

Shape2104.setAppearance(Appearance2105)
IndexedFaceSet2107 = x3d.IndexedFaceSet()
IndexedFaceSet2107.setSolid(False)
IndexedFaceSet2107.setTexCoordIndex([3,1,0,-1,3,0,2,-1])
IndexedFaceSet2107.setCoordIndex([3,1,0,-1,3,0,2,-1])
Coordinate2108 = x3d.Coordinate()
Coordinate2108.setPoint(x3d.doubleToFloat([3.524445,0.075,2.127986,3.918432,0.075,2.047678,3.796679,0.075,3.463542,4.190666,0.075,3.383233]))

IndexedFaceSet2107.setCoord(Coordinate2108)

Shape2104.setGeometry(IndexedFaceSet2107)

Scene12.addChild(Shape2104)
Shape2109 = x3d.Shape()
Appearance2110 = x3d.Appearance()
Material2111 = x3d.Material()
Material2111.setAmbientIntensity(0)
Material2111.setDiffuseColor(x3d.doubleToFloat([0.5,0.5,0.5]))
Material2111.setShininess(0)

Appearance2110.setMaterial(Material2111)

Shape2109.setAppearance(Appearance2110)
IndexedFaceSet2112 = x3d.IndexedFaceSet()
IndexedFaceSet2112.setSolid(False)
IndexedFaceSet2112.setTexCoordIndex([3,1,0,-1,3,0,2,-1])
IndexedFaceSet2112.setCoordIndex([3,1,0,-1,3,0,2,-1])
Coordinate2113 = x3d.Coordinate()
Coordinate2113.setPoint(x3d.doubleToFloat([3.777081,0.075,3.467536,3.383095,0.075,3.547845,3.504848,0.075,2.13198,3.110861,0.075,2.212289]))

IndexedFaceSet2112.setCoord(Coordinate2113)

Shape2109.setGeometry(IndexedFaceSet2112)

Scene12.addChild(Shape2109)
Shape2114 = x3d.Shape()
Appearance2115 = x3d.Appearance()
Material2116 = x3d.Material()
Material2116.setAmbientIntensity(0)
Material2116.setDiffuseColor(x3d.doubleToFloat([0.5,0.5,0.5]))
Material2116.setShininess(0)

Appearance2115.setMaterial(Material2116)

Shape2114.setAppearance(Appearance2115)
IndexedFaceSet2117 = x3d.IndexedFaceSet()
IndexedFaceSet2117.setSolid(False)
IndexedFaceSet2117.setTexCoordIndex([3,1,0,-1,3,0,2,-1])
IndexedFaceSet2117.setCoordIndex([3,1,0,-1,3,0,2,-1])
Coordinate2118 = x3d.Coordinate()
Coordinate2118.setPoint(x3d.doubleToFloat([3.106867,0.075,2.192692,2.972747,0.075,1.534712,3.914438,0.075,2.02808,3.780318,0.075,1.370101]))

IndexedFaceSet2117.setCoord(Coordinate2118)

Shape2114.setGeometry(IndexedFaceSet2117)

Scene12.addChild(Shape2114)
Shape2119 = x3d.Shape()
Appearance2120 = x3d.Appearance()
Material2121 = x3d.Material()
Material2121.setAmbientIntensity(0)
Material2121.setDiffuseColor(x3d.doubleToFloat([0.5,0.5,0.5]))
Material2121.setShininess(0)

Appearance2120.setMaterial(Material2121)

Shape2119.setAppearance(Appearance2120)
IndexedFaceSet2122 = x3d.IndexedFaceSet()
IndexedFaceSet2122.setSolid(False)
IndexedFaceSet2122.setTexCoordIndex([3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1])
IndexedFaceSet2122.setCoordIndex([3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1])
Coordinate2123 = x3d.Coordinate()
Coordinate2123.setPoint(x3d.doubleToFloat([2.968753,0.075,1.515115,2.834633,0.075,0.8571361,3.372538,0.075,1.43281,3.238419,0.075,0.7748303,3.776324,0.075,1.350504,3.642204,0.075,0.6925246]))

IndexedFaceSet2122.setCoord(Coordinate2123)

Shape2119.setGeometry(IndexedFaceSet2122)

Scene12.addChild(Shape2119)
Shape2124 = x3d.Shape()
Appearance2125 = x3d.Appearance()
Material2126 = x3d.Material()
Material2126.setAmbientIntensity(0)
Material2126.setDiffuseColor(x3d.doubleToFloat([0.5,0.5,0.5]))
Material2126.setShininess(0)

Appearance2125.setMaterial(Material2126)

Shape2124.setAppearance(Appearance2125)
IndexedFaceSet2127 = x3d.IndexedFaceSet()
IndexedFaceSet2127.setSolid(False)
IndexedFaceSet2127.setTexCoordIndex([4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1])
IndexedFaceSet2127.setCoordIndex([4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1])
Coordinate2128 = x3d.Coordinate()
Coordinate2128.setPoint(x3d.doubleToFloat([3.63821,0.075,0.6729276,3.441216,0.075,0.7130818,3.244223,0.075,0.753236,3.502093,0.075,0.005149654,3.305099,0.075,0.04530387,3.108106,0.075,0.08545809,3.365976,0.075,-0.6626283,3.168983,0.075,-0.622474,2.971989,0.075,-0.5823198]))

IndexedFaceSet2127.setCoord(Coordinate2128)

Shape2124.setGeometry(IndexedFaceSet2127)

Scene12.addChild(Shape2124)
Shape2129 = x3d.Shape()
Appearance2130 = x3d.Appearance()
Material2131 = x3d.Material()
Material2131.setAmbientIntensity(0)
Material2131.setDiffuseColor(x3d.doubleToFloat([0.5,0.5,0.5]))
Material2131.setShininess(0)

Appearance2130.setMaterial(Material2131)

Shape2129.setAppearance(Appearance2130)
IndexedFaceSet2132 = x3d.IndexedFaceSet()
IndexedFaceSet2132.setSolid(False)
IndexedFaceSet2132.setTexCoordIndex([3,1,0,-1,3,0,2,-1])
IndexedFaceSet2132.setCoordIndex([3,1,0,-1,3,0,2,-1])
Coordinate2133 = x3d.Coordinate()
Coordinate2133.setPoint(x3d.doubleToFloat([2.558405,0.075,-0.4980168,2.952392,0.075,-0.5783253,2.830639,0.075,0.837539,3.224626,0.075,0.7572306]))

IndexedFaceSet2132.setCoord(Coordinate2133)

Shape2129.setGeometry(IndexedFaceSet2132)

Scene12.addChild(Shape2129)
Shape2134 = x3d.Shape()
Appearance2135 = x3d.Appearance()
Material2136 = x3d.Material()
Material2136.setAmbientIntensity(0)
Material2136.setDiffuseColor(x3d.doubleToFloat([0.5,0.5,0.5]))
Material2136.setShininess(0)

Appearance2135.setMaterial(Material2136)

Shape2134.setAppearance(Appearance2135)
IndexedFaceSet2137 = x3d.IndexedFaceSet()
IndexedFaceSet2137.setSolid(False)
IndexedFaceSet2137.setTexCoordIndex([4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1])
IndexedFaceSet2137.setCoordIndex([4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1])
Coordinate2138 = x3d.Coordinate()
Coordinate2138.setPoint(x3d.doubleToFloat([2.970269,0.075,5.74918,2.903209,0.075,5.42019,2.836149,0.075,5.091201,3.374054,0.075,5.666874,3.306994,0.075,5.337884,3.239935,0.075,5.008895,3.77784,0.075,5.584569,3.71078,0.075,5.255579,3.64372,0.075,4.926589]))

IndexedFaceSet2137.setCoord(Coordinate2138)

Shape2134.setGeometry(IndexedFaceSet2137)

Scene12.addChild(Shape2134)
Shape2139 = x3d.Shape()
Appearance2140 = x3d.Appearance()
Material2141 = x3d.Material()
Material2141.setAmbientIntensity(0)
Material2141.setDiffuseColor(x3d.doubleToFloat([0.5,0.5,0.5]))
Material2141.setShininess(0)

Appearance2140.setMaterial(Material2141)

Shape2139.setAppearance(Appearance2140)
IndexedFaceSet2142 = x3d.IndexedFaceSet()
IndexedFaceSet2142.setSolid(False)
IndexedFaceSet2142.setTexCoordIndex([3,1,0,-1,3,0,2,-1])
IndexedFaceSet2142.setCoordIndex([3,1,0,-1,3,0,2,-1])
Coordinate2143 = x3d.Coordinate()
Coordinate2143.setPoint(x3d.doubleToFloat([2.973505,0.075,3.651745,3.367492,0.075,3.571436,3.245739,0.075,4.9873,3.639726,0.075,4.906992]))

IndexedFaceSet2142.setCoord(Coordinate2143)

Shape2139.setGeometry(IndexedFaceSet2142)

Scene12.addChild(Shape2139)
Shape2144 = x3d.Shape()
Appearance2145 = x3d.Appearance()
Material2146 = x3d.Material()
Material2146.setAmbientIntensity(0)
Material2146.setDiffuseColor(x3d.doubleToFloat([0.5,0.5,0.5]))
Material2146.setShininess(0)

Appearance2145.setMaterial(Material2146)

Shape2144.setAppearance(Appearance2145)
IndexedFaceSet2147 = x3d.IndexedFaceSet()
IndexedFaceSet2147.setSolid(False)
IndexedFaceSet2147.setTexCoordIndex([3,1,0,-1,3,0,2,-1])
IndexedFaceSet2147.setCoordIndex([3,1,0,-1,3,0,2,-1])
Coordinate2148 = x3d.Coordinate()
Coordinate2148.setPoint(x3d.doubleToFloat([2.559921,0.075,3.736048,2.953908,0.075,3.655739,2.832155,0.075,5.071604,3.226142,0.075,4.991295]))

IndexedFaceSet2147.setCoord(Coordinate2148)

Shape2144.setGeometry(IndexedFaceSet2147)

Scene12.addChild(Shape2144)
Shape2149 = x3d.Shape()
Appearance2150 = x3d.Appearance()
Material2151 = x3d.Material()
Material2151.setAmbientIntensity(0)
Material2151.setDiffuseColor(x3d.doubleToFloat([0.5,0.5,0.5]))
Material2151.setShininess(0)

Appearance2150.setMaterial(Material2151)

Shape2149.setAppearance(Appearance2150)
IndexedFaceSet2152 = x3d.IndexedFaceSet()
IndexedFaceSet2152.setSolid(False)
IndexedFaceSet2152.setTexCoordIndex([3,1,0,-1,3,0,2,-1])
IndexedFaceSet2152.setCoordIndex([3,1,0,-1,3,0,2,-1])
Coordinate2153 = x3d.Coordinate()
Coordinate2153.setPoint(x3d.doubleToFloat([3.229378,0.075,2.89386,3.363497,0.075,3.551839,2.421807,0.075,3.058471,2.555927,0.075,3.716451]))

IndexedFaceSet2152.setCoord(Coordinate2153)

Shape2149.setGeometry(IndexedFaceSet2152)

Scene12.addChild(Shape2149)
Shape2154 = x3d.Shape()
Appearance2155 = x3d.Appearance()
Material2156 = x3d.Material()
Material2156.setAmbientIntensity(0)
Material2156.setDiffuseColor(x3d.doubleToFloat([0.5,0.5,0.5]))
Material2156.setShininess(0)

Appearance2155.setMaterial(Material2156)

Shape2154.setAppearance(Appearance2155)
IndexedFaceSet2157 = x3d.IndexedFaceSet()
IndexedFaceSet2157.setSolid(False)
IndexedFaceSet2157.setTexCoordIndex([3,1,0,-1,3,0,2,-1])
IndexedFaceSet2157.setCoordIndex([3,1,0,-1,3,0,2,-1])
Coordinate2158 = x3d.Coordinate()
Coordinate2158.setPoint(x3d.doubleToFloat([2.417813,0.075,3.038874,2.283693,0.075,2.380895,3.225384,0.075,2.874263,3.091264,0.075,2.216284]))

IndexedFaceSet2157.setCoord(Coordinate2158)

Shape2154.setGeometry(IndexedFaceSet2157)

Scene12.addChild(Shape2154)
Shape2159 = x3d.Shape()
Appearance2160 = x3d.Appearance()
Material2161 = x3d.Material()
Material2161.setAmbientIntensity(0)
Material2161.setDiffuseColor(x3d.doubleToFloat([0.5,0.5,0.5]))
Material2161.setShininess(0)

Appearance2160.setMaterial(Material2161)

Shape2159.setAppearance(Appearance2160)
IndexedFaceSet2162 = x3d.IndexedFaceSet()
IndexedFaceSet2162.setSolid(False)
IndexedFaceSet2162.setTexCoordIndex([3,1,0,-1,3,0,2,-1])
IndexedFaceSet2162.setCoordIndex([3,1,0,-1,3,0,2,-1])
Coordinate2163 = x3d.Coordinate()
Coordinate2163.setPoint(x3d.doubleToFloat([3.08727,0.075,2.196687,2.693283,0.075,2.276995,2.815036,0.075,0.8611306,2.421049,0.075,0.941439]))

IndexedFaceSet2162.setCoord(Coordinate2163)

Shape2159.setGeometry(IndexedFaceSet2162)

Scene12.addChild(Shape2159)
Shape2164 = x3d.Shape()
Appearance2165 = x3d.Appearance()
Material2166 = x3d.Material()
Material2166.setAmbientIntensity(0)
Material2166.setDiffuseColor(x3d.doubleToFloat([0.5,0.5,0.5]))
Material2166.setShininess(0)

Appearance2165.setMaterial(Material2166)

Shape2164.setAppearance(Appearance2165)
IndexedFaceSet2167 = x3d.IndexedFaceSet()
IndexedFaceSet2167.setSolid(False)
IndexedFaceSet2167.setTexCoordIndex([3,1,0,-1,3,0,2,-1])
IndexedFaceSet2167.setCoordIndex([3,1,0,-1,3,0,2,-1])
Coordinate2168 = x3d.Coordinate()
Coordinate2168.setPoint(x3d.doubleToFloat([2.673686,0.075,2.280989,2.279699,0.075,2.361298,2.401452,0.075,0.9454336,2.007465,0.075,1.025742]))

IndexedFaceSet2167.setCoord(Coordinate2168)

Shape2164.setGeometry(IndexedFaceSet2167)

Scene12.addChild(Shape2164)
Shape2169 = x3d.Shape()
Appearance2170 = x3d.Appearance()
Material2171 = x3d.Material()
Material2171.setAmbientIntensity(0)
Material2171.setDiffuseColor(x3d.doubleToFloat([0.5,0.5,0.5]))
Material2171.setShininess(0)

Appearance2170.setMaterial(Material2171)

Shape2169.setAppearance(Appearance2170)
IndexedFaceSet2172 = x3d.IndexedFaceSet()
IndexedFaceSet2172.setSolid(False)
IndexedFaceSet2172.setTexCoordIndex([3,1,0,-1,3,0,2,-1])
IndexedFaceSet2172.setCoordIndex([3,1,0,-1,3,0,2,-1])
Coordinate2173 = x3d.Coordinate()
Coordinate2173.setPoint(x3d.doubleToFloat([2.003471,0.075,1.006145,1.869351,0.075,0.3481656,2.811042,0.075,0.8415336,2.676922,0.075,0.1835542]))

IndexedFaceSet2172.setCoord(Coordinate2173)

Shape2169.setGeometry(IndexedFaceSet2172)

Scene12.addChild(Shape2169)
Shape2174 = x3d.Shape()
Appearance2175 = x3d.Appearance()
Material2176 = x3d.Material()
Material2176.setAmbientIntensity(0)
Material2176.setDiffuseColor(x3d.doubleToFloat([0.5,0.5,0.5]))
Material2176.setShininess(0)

Appearance2175.setMaterial(Material2176)

Shape2174.setAppearance(Appearance2175)
IndexedFaceSet2177 = x3d.IndexedFaceSet()
IndexedFaceSet2177.setSolid(False)
IndexedFaceSet2177.setTexCoordIndex([3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1])
IndexedFaceSet2177.setCoordIndex([3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1])
Coordinate2178 = x3d.Coordinate()
Coordinate2178.setPoint(x3d.doubleToFloat([1.866873,0.075,4.562633,1.732753,0.075,3.904654,2.270658,0.075,4.480328,2.136539,0.075,3.822348,2.674444,0.075,4.398022,2.540324,0.075,3.740042]))

IndexedFaceSet2177.setCoord(Coordinate2178)

Shape2174.setGeometry(IndexedFaceSet2177)

Scene12.addChild(Shape2174)
Shape2179 = x3d.Shape()
Appearance2180 = x3d.Appearance()
Material2181 = x3d.Material()
Material2181.setAmbientIntensity(0)
Material2181.setDiffuseColor(x3d.doubleToFloat([0.5,0.5,0.5]))
Material2181.setShininess(0)

Appearance2180.setMaterial(Material2181)

Shape2179.setAppearance(Appearance2180)
IndexedFaceSet2182 = x3d.IndexedFaceSet()
IndexedFaceSet2182.setSolid(False)
IndexedFaceSet2182.setTexCoordIndex([4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1])
IndexedFaceSet2182.setCoordIndex([4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1])
Coordinate2183 = x3d.Coordinate()
Coordinate2183.setPoint(x3d.doubleToFloat([1.870109,0.075,2.465198,2.067103,0.075,2.425044,2.264096,0.075,2.38489,2.006226,0.075,3.132976,2.203219,0.075,3.092822,2.400213,0.075,3.052667,2.142343,0.075,3.800754,2.339336,0.075,3.7606,2.53633,0.075,3.720445]))

IndexedFaceSet2182.setCoord(Coordinate2183)

Shape2179.setGeometry(IndexedFaceSet2182)

Scene12.addChild(Shape2179)
Shape2184 = x3d.Shape()
Appearance2185 = x3d.Appearance()
Material2186 = x3d.Material()
Material2186.setAmbientIntensity(0)
Material2186.setDiffuseColor(x3d.doubleToFloat([0.5,0.5,0.5]))
Material2186.setShininess(0)

Appearance2185.setMaterial(Material2186)

Shape2184.setAppearance(Appearance2185)
IndexedFaceSet2187 = x3d.IndexedFaceSet()
IndexedFaceSet2187.setSolid(False)
IndexedFaceSet2187.setTexCoordIndex([3,1,0,-1,3,0,2,-1])
IndexedFaceSet2187.setCoordIndex([3,1,0,-1,3,0,2,-1])
Coordinate2188 = x3d.Coordinate()
Coordinate2188.setPoint(x3d.doubleToFloat([1.456525,0.075,2.549501,1.850512,0.075,2.469193,1.728759,0.075,3.885057,2.122746,0.075,3.804748]))

IndexedFaceSet2187.setCoord(Coordinate2188)

Shape2184.setGeometry(IndexedFaceSet2187)

Scene12.addChild(Shape2184)
Shape2189 = x3d.Shape()
Appearance2190 = x3d.Appearance()
Material2191 = x3d.Material()
Material2191.setAmbientIntensity(0)
Material2191.setDiffuseColor(x3d.doubleToFloat([0.5,0.5,0.5]))
Material2191.setShininess(0)

Appearance2190.setMaterial(Material2191)

Shape2189.setAppearance(Appearance2190)
IndexedFaceSet2192 = x3d.IndexedFaceSet()
IndexedFaceSet2192.setSolid(False)
IndexedFaceSet2192.setTexCoordIndex([4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1])
IndexedFaceSet2192.setCoordIndex([4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1])
Coordinate2193 = x3d.Coordinate()
Coordinate2193.setPoint(x3d.doubleToFloat([1.452531,0.075,2.529904,1.385471,0.075,2.200914,1.318411,0.075,1.871925,1.856316,0.075,2.447598,1.789257,0.075,2.118608,1.722197,0.075,1.789619,2.260102,0.075,2.365293,2.193042,0.075,2.036303,2.125982,0.075,1.707313]))

IndexedFaceSet2192.setCoord(Coordinate2193)

Shape2189.setGeometry(IndexedFaceSet2192)

Scene12.addChild(Shape2189)
Shape2194 = x3d.Shape()
Appearance2195 = x3d.Appearance()
Material2196 = x3d.Material()
Material2196.setAmbientIntensity(0)
Material2196.setDiffuseColor(x3d.doubleToFloat([0.5,0.5,0.5]))
Material2196.setShininess(0)

Appearance2195.setMaterial(Material2196)

Shape2194.setAppearance(Appearance2195)
IndexedFaceSet2197 = x3d.IndexedFaceSet()
IndexedFaceSet2197.setSolid(False)
IndexedFaceSet2197.setTexCoordIndex([3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1])
IndexedFaceSet2197.setCoordIndex([3,1,0,-1,3,0,2,-1,5,3,2,-1,5,2,4,-1])
Coordinate2198 = x3d.Coordinate()
Coordinate2198.setPoint(x3d.doubleToFloat([1.314417,0.075,1.852327,1.180297,0.075,1.194348,1.718202,0.075,1.770022,1.584083,0.075,1.112042,2.121988,0.075,1.687716,1.987868,0.075,1.029737]))

IndexedFaceSet2197.setCoord(Coordinate2198)

Shape2194.setGeometry(IndexedFaceSet2197)

Scene12.addChild(Shape2194)
Shape2199 = x3d.Shape()
Appearance2200 = x3d.Appearance()
Material2201 = x3d.Material()
Material2201.setAmbientIntensity(0)
Material2201.setDiffuseColor(x3d.doubleToFloat([0.5,0.5,0.5]))
Material2201.setShininess(0)

Appearance2200.setMaterial(Material2201)

Shape2199.setAppearance(Appearance2200)
IndexedFaceSet2202 = x3d.IndexedFaceSet()
IndexedFaceSet2202.setSolid(False)
IndexedFaceSet2202.setTexCoordIndex([4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1])
IndexedFaceSet2202.setCoordIndex([4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1])
Coordinate2203 = x3d.Coordinate()
Coordinate2203.setPoint(x3d.doubleToFloat([1.983874,0.075,1.01014,1.78688,0.075,1.050294,1.589887,0.075,1.090448,1.847757,0.075,0.3423617,1.650764,0.075,0.3825159,1.45377,0.075,0.4226701,1.71164,0.075,-0.3254162,1.514647,0.075,-0.285262,1.317653,0.075,-0.2451078]))

IndexedFaceSet2202.setCoord(Coordinate2203)

Shape2199.setGeometry(IndexedFaceSet2202)

Scene12.addChild(Shape2199)
Shape2204 = x3d.Shape()
Appearance2205 = x3d.Appearance()
Material2206 = x3d.Material()
Material2206.setAmbientIntensity(0)
Material2206.setDiffuseColor(x3d.doubleToFloat([0.5,0.5,0.5]))
Material2206.setShininess(0)

Appearance2205.setMaterial(Material2206)

Shape2204.setAppearance(Appearance2205)
IndexedFaceSet2207 = x3d.IndexedFaceSet()
IndexedFaceSet2207.setSolid(False)
IndexedFaceSet2207.setTexCoordIndex([4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1])
IndexedFaceSet2207.setCoordIndex([4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1])
Coordinate2208 = x3d.Coordinate()
Coordinate2208.setPoint(x3d.doubleToFloat([0.9040694,0.075,-0.1608048,1.101063,0.075,-0.200959,1.298056,0.075,-0.2411132,1.040186,0.075,0.5069731,1.23718,0.075,0.4668189,1.434173,0.075,0.4266647,1.176303,0.075,1.174751,1.373296,0.075,1.134597,1.57029,0.075,1.094443]))

IndexedFaceSet2207.setCoord(Coordinate2208)

Shape2204.setGeometry(IndexedFaceSet2207)

Scene12.addChild(Shape2204)
Shape2209 = x3d.Shape()
Appearance2210 = x3d.Appearance()
Material2211 = x3d.Material()
Material2211.setAmbientIntensity(0)
Material2211.setDiffuseColor(x3d.doubleToFloat([0.5,0.5,0.5]))
Material2211.setShininess(0)

Appearance2210.setMaterial(Material2211)

Shape2209.setAppearance(Appearance2210)
IndexedFaceSet2212 = x3d.IndexedFaceSet()
IndexedFaceSet2212.setSolid(False)
IndexedFaceSet2212.setTexCoordIndex([4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1])
IndexedFaceSet2212.setCoordIndex([4,1,0,-1,4,0,3,-1,5,2,1,-1,5,1,4,-1,7,4,3,-1,7,3,6,-1,8,5,4,-1,8,4,7,-1])
Coordinate2213 = x3d.Coordinate()
Coordinate2213.setPoint(x3d.doubleToFloat([0.7667135,0.075,1.278651,0.9637069,0.075,1.238497,1.1607,0.075,1.198343,0.9028302,0.075,1.946429,1.099824,0.075,1.906275,1.296817,0.075,1.866121,1.038947,0.075,2.614207,1.23594,0.075,2.574053,1.432934,0.075,2.533899]))

IndexedFaceSet2212.setCoord(Coordinate2213)

Shape2209.setGeometry(IndexedFaceSet2212)

Scene12.addChild(Shape2209)
Shape2214 = x3d.Shape()
Appearance2215 = x3d.Appearance()
Material2216 = x3d.Material()
Material2216.setAmbientIntensity(0)
Material2216.setDiffuseColor(x3d.doubleToFloat([0.5,0.5,0.5]))
Material2216.setShininess(0)

Appearance2215.setMaterial(Material2216)

Shape2214.setAppearance(Appearance2215)
IndexedFaceSet2217 = x3d.IndexedFaceSet()
IndexedFaceSet2217.setSolid(False)
IndexedFaceSet2217.setTexCoordIndex([3,1,0,-1,3,0,2,-1])
IndexedFaceSet2217.setCoordIndex([3,1,0,-1,3,0,2,-1])
Coordinate2218 = x3d.Coordinate()
Coordinate2218.setPoint(x3d.doubleToFloat([0.349135,0.075,1.343357,0.2150155,0.075,0.6853777,1.156706,0.075,1.178746,1.022586,0.075,0.5207662]))

IndexedFaceSet2217.setCoord(Coordinate2218)

Shape2214.setGeometry(IndexedFaceSet2217)

Scene12.addChild(Shape2214)
Shape2219 = x3d.Shape()
Appearance2220 = x3d.Appearance()
Material2221 = x3d.Material()
Material2221.setAmbientIntensity(0)
Material2221.setDiffuseColor(x3d.doubleToFloat([0.5,0.5,0.5]))
Material2221.setShininess(0)

Appearance2220.setMaterial(Material2221)

Shape2219.setAppearance(Appearance2220)
IndexedFaceSet2222 = x3d.IndexedFaceSet()
IndexedFaceSet2222.setSolid(False)
IndexedFaceSet2222.setTexCoordIndex([3,1,0,-1,3,0,2,-1])
IndexedFaceSet2222.setCoordIndex([3,1,0,-1,3,0,2,-1])
Coordinate2223 = x3d.Coordinate()
Coordinate2223.setPoint(x3d.doubleToFloat([0.211021,0.075,0.6657807,0.07690154,0.075,0.007801231,1.018592,0.075,0.5011692,0.8844724,0.075,-0.1568102]))

IndexedFaceSet2222.setCoord(Coordinate2223)

Shape2219.setGeometry(IndexedFaceSet2222)

Scene12.addChild(Shape2219)

X3D0.setScene(Scene12)
X3D0.toFileX3D("../data/PathMeshTopSurface.new.graalpy.x3d")
X3D0.toFileJSON("../data/PathMeshTopSurface.new.graalpy.x3dj")
