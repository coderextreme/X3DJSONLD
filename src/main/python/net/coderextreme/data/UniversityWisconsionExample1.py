print('<!--')
import x3d
print('-->')
X3D0 = x3d.X3D()
X3D0.profile = "Immersive"
X3D0.version = "4.0"
head1 = x3d.head()
component2 = x3d.component()
component2.name = "HAnim"
component2.level = 3

head1.children.append(component2)
meta3 = x3d.meta()
meta3.name = "title"
meta3.content = "BvhUniversityWisconsionExample1.x3d"

head1.children.append(meta3)
meta4 = x3d.meta()
meta4.name = "description"
meta4.content = "BVH file conversion: *enter description here, short-sentence summaries preferred*"

head1.children.append(meta4)
meta5 = x3d.meta()
meta5.name = "creator"
meta5.content = "*enter name of original author here*"

head1.children.append(meta5)
meta6 = x3d.meta()
meta6.name = "created"
meta6.content = "*enter date of initial version here*"

head1.children.append(meta6)
meta7 = x3d.meta()
meta7.name = "translated"
meta7.content = "2 September 2023"

head1.children.append(meta7)
meta8 = x3d.meta()
meta8.name = "modified"
meta8.content = "Mon, 15 Sep 2025 05:21:02 GMT"

head1.children.append(meta8)
meta9 = x3d.meta()
meta9.name = "reference"
meta9.content = "BvhUniversityWIsconsionExample1.bvh"

head1.children.append(meta9)
meta10 = x3d.meta()
meta10.name = "reference"
meta10.content = "https://TODO/UniversityWIsconsionExample1.bvh"

head1.children.append(meta10)
meta11 = x3d.meta()
meta11.name = "reference"
meta11.content = "https://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html#MOCAP"

head1.children.append(meta11)
meta12 = x3d.meta()
meta12.name = "generator"
meta12.content = "Java BVH to X3D Converter, org.web3d.x3d.hanim.bvh package"

head1.children.append(meta12)
meta13 = x3d.meta()
meta13.name = "generator"
meta13.content = "X3D-Edit 4.0, https://www.web3d.org/x3d/tools/X3D-Edit"

head1.children.append(meta13)

X3D0.head = head1
Scene14 = x3d.Scene()
WorldInfo15 = x3d.WorldInfo()
WorldInfo15.title = "BvhUniversityWisconsionExample1.x3d"

Scene14.children.append(WorldInfo15)
NavigationInfo16 = x3d.NavigationInfo()

Scene14.children.append(NavigationInfo16)
Group17 = x3d.Group()
Group17.DEF = "BvhUniversityWisconsionExample1_BvhToX3dConversionImportInformation"
MetadataSet18 = x3d.MetadataSet()
MetadataSet18.name = "BvhToHAnimNameConversionTable"
MetadataString19 = x3d.MetadataString()
MetadataString19.name = "ROOT_Hips"
MetadataString19.reference = "ROOT"
MetadataString19.value = ["humanoid_root","sacrum"]

if MetadataSet18.value is None:
    MetadataSet18.value = []
MetadataSet18.value.append(MetadataString19)
MetadataString20 = x3d.MetadataString()
MetadataString20.name = "Chest"
MetadataString20.reference = "JOINT"
MetadataString20.value = ["vl5","l5"]

if MetadataSet18.value is None:
    MetadataSet18.value = []
MetadataSet18.value.append(MetadataString20)
MetadataString21 = x3d.MetadataString()
MetadataString21.name = "Neck"
MetadataString21.reference = "JOINT"
MetadataString21.value = ["Neck","vl5_to_Neck"]

if MetadataSet18.value is None:
    MetadataSet18.value = []
MetadataSet18.value.append(MetadataString21)
MetadataString22 = x3d.MetadataString()
MetadataString22.name = "Head"
MetadataString22.reference = "JOINT"
MetadataString22.value = ["skullbase","skull"]

if MetadataSet18.value is None:
    MetadataSet18.value = []
MetadataSet18.value.append(MetadataString22)
MetadataString23 = x3d.MetadataString()
MetadataString23.name = "HeadSite"
MetadataString23.reference = "Site"
MetadataString23.value = ["skullbase_tip"]

if MetadataSet18.value is None:
    MetadataSet18.value = []
MetadataSet18.value.append(MetadataString23)
MetadataString24 = x3d.MetadataString()
MetadataString24.name = "LeftCollar"
MetadataString24.reference = "JOINT"
MetadataString24.value = ["LeftCollar","vl5_to_LeftCollar"]

if MetadataSet18.value is None:
    MetadataSet18.value = []
MetadataSet18.value.append(MetadataString24)
MetadataString25 = x3d.MetadataString()
MetadataString25.name = "LeftUpArm"
MetadataString25.reference = "JOINT"
MetadataString25.value = ["LeftUpArm","LeftCollar_to_LeftUpArm"]

if MetadataSet18.value is None:
    MetadataSet18.value = []
MetadataSet18.value.append(MetadataString25)
MetadataString26 = x3d.MetadataString()
MetadataString26.name = "LeftLowArm"
MetadataString26.reference = "JOINT"
MetadataString26.value = ["LeftLowArm","LeftUpArm_to_LeftLowArm"]

if MetadataSet18.value is None:
    MetadataSet18.value = []
MetadataSet18.value.append(MetadataString26)
MetadataString27 = x3d.MetadataString()
MetadataString27.name = "LeftHand"
MetadataString27.reference = "JOINT"
MetadataString27.value = ["LeftHand","LeftLowArm_to_LeftHand"]

if MetadataSet18.value is None:
    MetadataSet18.value = []
MetadataSet18.value.append(MetadataString27)
MetadataString28 = x3d.MetadataString()
MetadataString28.name = "LeftHandSite"
MetadataString28.reference = "Site"
MetadataString28.value = ["LeftHand_tip"]

if MetadataSet18.value is None:
    MetadataSet18.value = []
MetadataSet18.value.append(MetadataString28)
MetadataString29 = x3d.MetadataString()
MetadataString29.name = "RightCollar"
MetadataString29.reference = "JOINT"
MetadataString29.value = ["RightCollar","vl5_to_RightCollar"]

if MetadataSet18.value is None:
    MetadataSet18.value = []
MetadataSet18.value.append(MetadataString29)
MetadataString30 = x3d.MetadataString()
MetadataString30.name = "RightUpArm"
MetadataString30.reference = "JOINT"
MetadataString30.value = ["RightUpArm","RightCollar_to_RightUpArm"]

if MetadataSet18.value is None:
    MetadataSet18.value = []
MetadataSet18.value.append(MetadataString30)
MetadataString31 = x3d.MetadataString()
MetadataString31.name = "RightLowArm"
MetadataString31.reference = "JOINT"
MetadataString31.value = ["RightLowArm","RightUpArm_to_RightLowArm"]

if MetadataSet18.value is None:
    MetadataSet18.value = []
MetadataSet18.value.append(MetadataString31)
MetadataString32 = x3d.MetadataString()
MetadataString32.name = "RightHand"
MetadataString32.reference = "JOINT"
MetadataString32.value = ["RightHand","RightLowArm_to_RightHand"]

if MetadataSet18.value is None:
    MetadataSet18.value = []
MetadataSet18.value.append(MetadataString32)
MetadataString33 = x3d.MetadataString()
MetadataString33.name = "RightHandSite"
MetadataString33.reference = "Site"
MetadataString33.value = ["RightHand_tip"]

if MetadataSet18.value is None:
    MetadataSet18.value = []
MetadataSet18.value.append(MetadataString33)
MetadataString34 = x3d.MetadataString()
MetadataString34.name = "LeftUpLeg"
MetadataString34.reference = "JOINT"
MetadataString34.value = ["LeftUpLeg","humanoid_root_to_LeftUpLeg"]

if MetadataSet18.value is None:
    MetadataSet18.value = []
MetadataSet18.value.append(MetadataString34)
MetadataString35 = x3d.MetadataString()
MetadataString35.name = "LeftLowLeg"
MetadataString35.reference = "JOINT"
MetadataString35.value = ["LeftLowLeg","LeftUpLeg_to_LeftLowLeg"]

if MetadataSet18.value is None:
    MetadataSet18.value = []
MetadataSet18.value.append(MetadataString35)
MetadataString36 = x3d.MetadataString()
MetadataString36.name = "LeftFoot"
MetadataString36.reference = "JOINT"
MetadataString36.value = ["LeftFoot","LeftLowLeg_to_LeftFoot"]

if MetadataSet18.value is None:
    MetadataSet18.value = []
MetadataSet18.value.append(MetadataString36)
MetadataString37 = x3d.MetadataString()
MetadataString37.name = "LeftFootSite"
MetadataString37.reference = "Site"
MetadataString37.value = ["LeftFoot_tip"]

if MetadataSet18.value is None:
    MetadataSet18.value = []
MetadataSet18.value.append(MetadataString37)
MetadataString38 = x3d.MetadataString()
MetadataString38.name = "RightUpLeg"
MetadataString38.reference = "JOINT"
MetadataString38.value = ["RightUpLeg","humanoid_root_to_RightUpLeg"]

if MetadataSet18.value is None:
    MetadataSet18.value = []
MetadataSet18.value.append(MetadataString38)
MetadataString39 = x3d.MetadataString()
MetadataString39.name = "RightLowLeg"
MetadataString39.reference = "JOINT"
MetadataString39.value = ["RightLowLeg","RightUpLeg_to_RightLowLeg"]

if MetadataSet18.value is None:
    MetadataSet18.value = []
MetadataSet18.value.append(MetadataString39)
MetadataString40 = x3d.MetadataString()
MetadataString40.name = "RightFoot"
MetadataString40.reference = "JOINT"
MetadataString40.value = ["RightFoot","RightLowLeg_to_RightFoot"]

if MetadataSet18.value is None:
    MetadataSet18.value = []
MetadataSet18.value.append(MetadataString40)
MetadataString41 = x3d.MetadataString()
MetadataString41.name = "RightFootSite"
MetadataString41.reference = "Site"
MetadataString41.value = ["RightFoot_tip"]

if MetadataSet18.value is None:
    MetadataSet18.value = []
MetadataSet18.value.append(MetadataString41)

Group17.metadata = MetadataSet18

Scene14.children.append(Group17)
Transform42 = x3d.Transform()
Transform42.DEF = "InitialPositionScaled"
Transform42.translation = [0,1.244,0]
Viewpoint43 = x3d.Viewpoint()
Viewpoint43.description = "BvhUniversityWisconsionExample1 model BVH to X3D conversion, from 8m"
Viewpoint43.position = [0,0,8]

Transform42.children.append(Viewpoint43)
Viewpoint44 = x3d.Viewpoint()
Viewpoint44.description = "BvhUniversityWisconsionExample1 initial motion position"
Viewpoint44.position = [0.803,3.501,16.836]

Transform42.children.append(Viewpoint44)
Viewpoint45 = x3d.Viewpoint()
Viewpoint45.description = "BvhUniversityWisconsionExample1 final motion position"
Viewpoint45.position = [0.781,3.51,16.647]

Transform42.children.append(Viewpoint45)

Scene14.children.append(Transform42)
HAnimHumanoid46 = x3d.HAnimHumanoid()
HAnimHumanoid46.DEF = "BvhUniversityWisconsionExample1_ROOT_Hips"
HAnimHumanoid46.name = "ROOT_Hips"
MetadataSet47 = x3d.MetadataSet()
MetadataSet47.name = "HAnimHumanoid.info"
MetadataSet47.reference = "https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/ObjectInterfaces.html#Humanoid"
MetadataString48 = x3d.MetadataString()
MetadataString48.name = "authorEmail"
MetadataString48.value = ["*TODO*"]

if MetadataSet47.value is None:
    MetadataSet47.value = []
MetadataSet47.value.append(MetadataString48)
MetadataString49 = x3d.MetadataString()
MetadataString49.name = "authorName"
MetadataString49.value = ["*TODO*"]

if MetadataSet47.value is None:
    MetadataSet47.value = []
MetadataSet47.value.append(MetadataString49)
MetadataString50 = x3d.MetadataString()
MetadataString50.name = "copyright"
MetadataString50.value = ["Copyright (c) 2023"]

if MetadataSet47.value is None:
    MetadataSet47.value = []
MetadataSet47.value.append(MetadataString50)
MetadataString51 = x3d.MetadataString()
MetadataString51.name = "humanoidVersion"
MetadataString51.value = ["*TODO*"]

if MetadataSet47.value is None:
    MetadataSet47.value = []
MetadataSet47.value.append(MetadataString51)
MetadataString52 = x3d.MetadataString()
MetadataString52.name = "usageDescription"
MetadataString52.value = ["*TODO*"]

if MetadataSet47.value is None:
    MetadataSet47.value = []
MetadataSet47.value.append(MetadataString52)

HAnimHumanoid46.metadata = MetadataSet47
HAnimJoint53 = x3d.HAnimJoint()
HAnimJoint53.DEF = "BvhUniversityWisconsionExample1_humanoid_root"
HAnimJoint53.name = "humanoid_root"
HAnimJoint53.translation = [0.7849403,3.508388,8.680851]
HAnimJoint53.rotation = [-0.0184530858032817,-0.992698784706892,-0.119199859336308,2.9151883640198]
HAnimJoint53.scale = [0.1,0.1,0.1]
HAnimSegment54 = x3d.HAnimSegment()
HAnimSegment54.DEF = "BvhUniversityWisconsionExample1_sacrum"
HAnimSegment54.name = "sacrum"
Switch55 = x3d.Switch()
Switch55.whichChoice = 0
Group56 = x3d.Group()
TouchSensor57 = x3d.TouchSensor()
TouchSensor57.description = "HAnimHumanoid ROOT ROOT_Hips, HAnimSegment sacrum"

Group56.children.append(TouchSensor57)
Shape58 = x3d.Shape()
Shape58.DEF = "HAnimRootShape"
Appearance59 = x3d.Appearance()
Material60 = x3d.Material()
Material60.DEF = "HAnimRootMaterial"
Material60.diffuseColor = [0.8,0,0]
Material60.transparency = 0.3

Appearance59.material = Material60

Shape58.appearance = Appearance59
Sphere61 = x3d.Sphere()
Sphere61.DEF = "HAnimJointSphere"
Sphere61.radius = 0.254

Shape58.geometry = Sphere61

Group56.children.append(Shape58)

Switch55.children.append(Group56)
Shape62 = x3d.Shape()
Shape62.DEF = "HAnimJointShape"
Appearance63 = x3d.Appearance()
Material64 = x3d.Material()
Material64.DEF = "HAnimJointMaterial"
Material64.diffuseColor = [0,0,0.8]
Material64.transparency = 0.3

Appearance63.material = Material64

Shape62.appearance = Appearance63
Sphere65 = x3d.Sphere()
Sphere65.USE = "HAnimJointSphere"

Shape62.geometry = Sphere65

Switch55.children.append(Shape62)
Shape66 = x3d.Shape()
LineSet67 = x3d.LineSet()
LineSet67.vertexCount = [2]
ColorRGBA68 = x3d.ColorRGBA()
ColorRGBA68.DEF = "HAnimSegmentLineColorRGBA"
ColorRGBA68.color = [(1, 1, 0, 1),(1, 1, 0, 0.1)]

LineSet67.color = ColorRGBA68
Coordinate69 = x3d.Coordinate()
Coordinate69.point = [(0, 0, 0),(0, 0, 0)]

LineSet67.coord = Coordinate69

Shape66.geometry = LineSet67

Switch55.children.append(Shape66)
Shape70 = x3d.Shape()
Shape70.DEF = "HAnimSiteShape"
Appearance71 = x3d.Appearance()
Material72 = x3d.Material()
Material72.diffuseColor = [1,0.5,0]
Material72.transparency = 0.3

Appearance71.material = Material72

Shape70.appearance = Appearance71
IndexedFaceSet73 = x3d.IndexedFaceSet()
IndexedFaceSet73.DEF = "DiamondIFS"
IndexedFaceSet73.solid = False
IndexedFaceSet73.creaseAngle = 0.5
IndexedFaceSet73.coordIndex = [0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]
Coordinate74 = x3d.Coordinate()
Coordinate74.point = [(0, 0.254, 0),(-0.254, 0, 0),(0, 0, 0.254),(0.254, 0, 0),(0, 0, -0.254),(0, -0.254, 0)]

IndexedFaceSet73.coord = Coordinate74

Shape70.geometry = IndexedFaceSet73

Switch55.children.append(Shape70)
Shape75 = x3d.Shape()
LineSet76 = x3d.LineSet()
LineSet76.vertexCount = [2]
ColorRGBA77 = x3d.ColorRGBA()
ColorRGBA77.DEF = "HAnimSiteLineColorRGBA"
ColorRGBA77.color = [(1, 0.5, 0, 1),(1, 0.5, 0, 0.1)]

LineSet76.color = ColorRGBA77
Coordinate78 = x3d.Coordinate()
Coordinate78.point = [(0, 0, 0),(0, 0, 0)]

LineSet76.coord = Coordinate78

Shape75.geometry = LineSet76

Switch55.children.append(Shape75)

HAnimSegment54.children.append(Switch55)
Shape79 = x3d.Shape()
LineSet80 = x3d.LineSet()
LineSet80.vertexCount = [2]
ColorRGBA81 = x3d.ColorRGBA()
ColorRGBA81.USE = "HAnimSegmentLineColorRGBA"

LineSet80.color = ColorRGBA81
Coordinate82 = x3d.Coordinate()
Coordinate82.point = [(0, 0, 0),(0, 5.21, 0)]

LineSet80.coord = Coordinate82

Shape79.geometry = LineSet80

HAnimSegment54.children.append(Shape79)
Shape83 = x3d.Shape()
LineSet84 = x3d.LineSet()
LineSet84.vertexCount = [2]
ColorRGBA85 = x3d.ColorRGBA()
ColorRGBA85.USE = "HAnimSegmentLineColorRGBA"

LineSet84.color = ColorRGBA85
Coordinate86 = x3d.Coordinate()
Coordinate86.point = [(0, 0, 0),(3.91, 0, 0)]

LineSet84.coord = Coordinate86

Shape83.geometry = LineSet84

HAnimSegment54.children.append(Shape83)
Shape87 = x3d.Shape()
LineSet88 = x3d.LineSet()
LineSet88.vertexCount = [2]
ColorRGBA89 = x3d.ColorRGBA()
ColorRGBA89.USE = "HAnimSegmentLineColorRGBA"

LineSet88.color = ColorRGBA89
Coordinate90 = x3d.Coordinate()
Coordinate90.point = [(0, 0, 0),(-3.91, 0, 0)]

LineSet88.coord = Coordinate90

Shape87.geometry = LineSet88

HAnimSegment54.children.append(Shape87)

HAnimJoint53.children.append(HAnimSegment54)
HAnimJoint91 = x3d.HAnimJoint()
HAnimJoint91.DEF = "BvhUniversityWisconsionExample1_vl5"
HAnimJoint91.name = "vl5"
HAnimJoint91.rotation = [0.929559139694865,-0.360437334785587,0.0774902155269029,0.820797255601436]
HAnimJoint91.center = [0,5.21,0]
HAnimSegment92 = x3d.HAnimSegment()
HAnimSegment92.DEF = "BvhUniversityWisconsionExample1_l5"
HAnimSegment92.name = "l5"
Transform93 = x3d.Transform()
Transform93.translation = [0,5.21,0]
TouchSensor94 = x3d.TouchSensor()
TouchSensor94.description = "HAnimJoint Chest vl5, HAnimSegment l5"

Transform93.children.append(TouchSensor94)
Shape95 = x3d.Shape()
Shape95.USE = "HAnimJointShape"

Transform93.children.append(Shape95)
Shape96 = x3d.Shape()
LineSet97 = x3d.LineSet()
LineSet97.vertexCount = [2]
ColorRGBA98 = x3d.ColorRGBA()
ColorRGBA98.USE = "HAnimSegmentLineColorRGBA"

LineSet97.color = ColorRGBA98
Coordinate99 = x3d.Coordinate()
Coordinate99.point = [(0, 0, 0),(0, 18.65, 0)]

LineSet97.coord = Coordinate99

Shape96.geometry = LineSet97

Transform93.children.append(Shape96)
Shape100 = x3d.Shape()
LineSet101 = x3d.LineSet()
LineSet101.vertexCount = [2]
ColorRGBA102 = x3d.ColorRGBA()
ColorRGBA102.USE = "HAnimSegmentLineColorRGBA"

LineSet101.color = ColorRGBA102
Coordinate103 = x3d.Coordinate()
Coordinate103.point = [(0, 0, 0),(1.12, 16.23, 1.87)]

LineSet101.coord = Coordinate103

Shape100.geometry = LineSet101

Transform93.children.append(Shape100)
Shape104 = x3d.Shape()
LineSet105 = x3d.LineSet()
LineSet105.vertexCount = [2]
ColorRGBA106 = x3d.ColorRGBA()
ColorRGBA106.USE = "HAnimSegmentLineColorRGBA"

LineSet105.color = ColorRGBA106
Coordinate107 = x3d.Coordinate()
Coordinate107.point = [(0, 0, 0),(-1.12, 16.23, 1.87)]

LineSet105.coord = Coordinate107

Shape104.geometry = LineSet105

Transform93.children.append(Shape104)

HAnimSegment92.children.append(Transform93)

HAnimJoint91.children.append(HAnimSegment92)
HAnimJoint108 = x3d.HAnimJoint()
HAnimJoint108.DEF = "BvhUniversityWisconsionExample1_Neck"
HAnimJoint108.name = "Neck"
HAnimJoint108.rotation = [0.983970484111271,0.0663053900569327,0.16554661472597,0.772979753553571]
HAnimJoint108.center = [0,23.86,0]
HAnimSegment109 = x3d.HAnimSegment()
HAnimSegment109.DEF = "BvhUniversityWisconsionExample1_vl5_to_Neck"
HAnimSegment109.name = "vl5_to_Neck"
Transform110 = x3d.Transform()
Transform110.translation = [0,23.86,0]
TouchSensor111 = x3d.TouchSensor()
TouchSensor111.description = "HAnimJoint Neck Neck, HAnimSegment vl5_to_Neck"

Transform110.children.append(TouchSensor111)
Shape112 = x3d.Shape()
Shape112.USE = "HAnimJointShape"

Transform110.children.append(Shape112)
Shape113 = x3d.Shape()
LineSet114 = x3d.LineSet()
LineSet114.vertexCount = [2]
ColorRGBA115 = x3d.ColorRGBA()
ColorRGBA115.USE = "HAnimSegmentLineColorRGBA"

LineSet114.color = ColorRGBA115
Coordinate116 = x3d.Coordinate()
Coordinate116.point = [(0, 0, 0),(0, 5.45, 0)]

LineSet114.coord = Coordinate116

Shape113.geometry = LineSet114

Transform110.children.append(Shape113)

HAnimSegment109.children.append(Transform110)

HAnimJoint108.children.append(HAnimSegment109)
HAnimJoint117 = x3d.HAnimJoint()
HAnimJoint117.DEF = "BvhUniversityWisconsionExample1_skullbase"
HAnimJoint117.name = "skullbase"
HAnimJoint117.rotation = [-0.979126474330309,0.150183590569867,-0.136953409556093,0.734508385229556]
HAnimJoint117.center = [0,29.31,0]
HAnimSegment118 = x3d.HAnimSegment()
HAnimSegment118.DEF = "BvhUniversityWisconsionExample1_skull"
HAnimSegment118.name = "skull"
Transform119 = x3d.Transform()
Transform119.translation = [0,29.31,0]
HAnimSite120 = x3d.HAnimSite()
HAnimSite120.DEF = "BvhUniversityWisconsionExample1_skull_tip"
HAnimSite120.name = "skull_tip"
HAnimSite120.translation = [0,3.87,0]
TouchSensor121 = x3d.TouchSensor()
TouchSensor121.description = "HAnimSite skull_tip"

HAnimSite120.children.append(TouchSensor121)
Shape122 = x3d.Shape()
Shape122.USE = "HAnimSiteShape"

HAnimSite120.children.append(Shape122)
Shape123 = x3d.Shape()
LineSet124 = x3d.LineSet()
LineSet124.vertexCount = [2]
ColorRGBA125 = x3d.ColorRGBA()
ColorRGBA125.USE = "HAnimSiteLineColorRGBA"

LineSet124.color = ColorRGBA125
Coordinate126 = x3d.Coordinate()
Coordinate126.point = [(0, -3.87, 0),(0, 0, 0)]

LineSet124.coord = Coordinate126

Shape123.geometry = LineSet124

HAnimSite120.children.append(Shape123)

Transform119.children.append(HAnimSite120)
TouchSensor127 = x3d.TouchSensor()
TouchSensor127.description = "HAnimJoint Head skullbase, HAnimSegment skull"

Transform119.children.append(TouchSensor127)
Shape128 = x3d.Shape()
Shape128.USE = "HAnimJointShape"

Transform119.children.append(Shape128)

HAnimSegment118.children.append(Transform119)

HAnimJoint117.children.append(HAnimSegment118)

HAnimJoint108.children.append(HAnimJoint117)

HAnimJoint91.children.append(HAnimJoint108)
HAnimJoint129 = x3d.HAnimJoint()
HAnimJoint129.DEF = "BvhUniversityWisconsionExample1_LeftCollar"
HAnimJoint129.name = "LeftCollar"
HAnimJoint129.rotation = [-0.0400336310146056,0.285571817840178,0.957520780580368,0.318543581718216]
HAnimJoint129.center = [1.12,21.44,1.87]
HAnimSegment130 = x3d.HAnimSegment()
HAnimSegment130.DEF = "BvhUniversityWisconsionExample1_vl5_to_LeftCollar"
HAnimSegment130.name = "vl5_to_LeftCollar"
Transform131 = x3d.Transform()
Transform131.translation = [1.12,21.44,1.87]
TouchSensor132 = x3d.TouchSensor()
TouchSensor132.description = "HAnimJoint LeftCollar LeftCollar, HAnimSegment vl5_to_LeftCollar"

Transform131.children.append(TouchSensor132)
Shape133 = x3d.Shape()
Shape133.USE = "HAnimJointShape"

Transform131.children.append(Shape133)
Shape134 = x3d.Shape()
LineSet135 = x3d.LineSet()
LineSet135.vertexCount = [2]
ColorRGBA136 = x3d.ColorRGBA()
ColorRGBA136.USE = "HAnimSegmentLineColorRGBA"

LineSet135.color = ColorRGBA136
Coordinate137 = x3d.Coordinate()
Coordinate137.point = [(0, 0, 0),(5.54, 0, 0)]

LineSet135.coord = Coordinate137

Shape134.geometry = LineSet135

Transform131.children.append(Shape134)

HAnimSegment130.children.append(Transform131)

HAnimJoint129.children.append(HAnimSegment130)
HAnimJoint138 = x3d.HAnimJoint()
HAnimJoint138.DEF = "BvhUniversityWisconsionExample1_LeftUpArm"
HAnimJoint138.name = "LeftUpArm"
HAnimJoint138.rotation = [-0.027309899849048,-0.170484979510911,0.984981746598077,1.66813504770243]
HAnimJoint138.center = [6.66,21.44,1.87]
HAnimSegment139 = x3d.HAnimSegment()
HAnimSegment139.DEF = "BvhUniversityWisconsionExample1_LeftCollar_to_LeftUpArm"
HAnimSegment139.name = "LeftCollar_to_LeftUpArm"
Transform140 = x3d.Transform()
Transform140.translation = [6.66,21.44,1.87]
TouchSensor141 = x3d.TouchSensor()
TouchSensor141.description = "HAnimJoint LeftUpArm LeftUpArm, HAnimSegment LeftCollar_to_LeftUpArm"

Transform140.children.append(TouchSensor141)
Shape142 = x3d.Shape()
Shape142.USE = "HAnimJointShape"

Transform140.children.append(Shape142)
Shape143 = x3d.Shape()
LineSet144 = x3d.LineSet()
LineSet144.vertexCount = [2]
ColorRGBA145 = x3d.ColorRGBA()
ColorRGBA145.USE = "HAnimSegmentLineColorRGBA"

LineSet144.color = ColorRGBA145
Coordinate146 = x3d.Coordinate()
Coordinate146.point = [(0, 0, 0),(0, -11.96, 0)]

LineSet144.coord = Coordinate146

Shape143.geometry = LineSet144

Transform140.children.append(Shape143)

HAnimSegment139.children.append(Transform140)

HAnimJoint138.children.append(HAnimSegment139)
HAnimJoint147 = x3d.HAnimJoint()
HAnimJoint147.DEF = "BvhUniversityWisconsionExample1_LeftLowArm"
HAnimJoint147.name = "LeftLowArm"
HAnimJoint147.rotation = [-0.998249192144246,0.0587758586859541,-0.00662939055192083,1.65994762916941]
HAnimJoint147.center = [6.66,9.48,1.87]
HAnimSegment148 = x3d.HAnimSegment()
HAnimSegment148.DEF = "BvhUniversityWisconsionExample1_LeftUpArm_to_LeftLowArm"
HAnimSegment148.name = "LeftUpArm_to_LeftLowArm"
Transform149 = x3d.Transform()
Transform149.translation = [6.66,9.48,1.87]
TouchSensor150 = x3d.TouchSensor()
TouchSensor150.description = "HAnimJoint LeftLowArm LeftLowArm, HAnimSegment LeftUpArm_to_LeftLowArm"

Transform149.children.append(TouchSensor150)
Shape151 = x3d.Shape()
Shape151.USE = "HAnimJointShape"

Transform149.children.append(Shape151)
Shape152 = x3d.Shape()
LineSet153 = x3d.LineSet()
LineSet153.vertexCount = [2]
ColorRGBA154 = x3d.ColorRGBA()
ColorRGBA154.USE = "HAnimSegmentLineColorRGBA"

LineSet153.color = ColorRGBA154
Coordinate155 = x3d.Coordinate()
Coordinate155.point = [(0, 0, 0),(0, -9.93, 0)]

LineSet153.coord = Coordinate155

Shape152.geometry = LineSet153

Transform149.children.append(Shape152)

HAnimSegment148.children.append(Transform149)

HAnimJoint147.children.append(HAnimSegment148)
HAnimJoint156 = x3d.HAnimJoint()
HAnimJoint156.DEF = "BvhUniversityWisconsionExample1_LeftHand"
HAnimJoint156.name = "LeftHand"
HAnimJoint156.rotation = [0.404520441533964,0.00251538810905742,0.914525497293667,0.0133189030390886]
HAnimJoint156.center = [6.66,-0.45,1.87]
HAnimSegment157 = x3d.HAnimSegment()
HAnimSegment157.DEF = "BvhUniversityWisconsionExample1_LeftLowArm_to_LeftHand"
HAnimSegment157.name = "LeftLowArm_to_LeftHand"
Transform158 = x3d.Transform()
Transform158.translation = [6.66,-0.45,1.87]
HAnimSite159 = x3d.HAnimSite()
HAnimSite159.DEF = "BvhUniversityWisconsionExample1_LeftLowArm_to_LeftHand_tip"
HAnimSite159.name = "LeftLowArm_to_LeftHand_tip"
HAnimSite159.translation = [0,-7,0]
TouchSensor160 = x3d.TouchSensor()
TouchSensor160.description = "HAnimSite LeftLowArm_to_LeftHand_tip"

HAnimSite159.children.append(TouchSensor160)
Shape161 = x3d.Shape()
Shape161.USE = "HAnimSiteShape"

HAnimSite159.children.append(Shape161)
Shape162 = x3d.Shape()
LineSet163 = x3d.LineSet()
LineSet163.vertexCount = [2]
ColorRGBA164 = x3d.ColorRGBA()
ColorRGBA164.USE = "HAnimSiteLineColorRGBA"

LineSet163.color = ColorRGBA164
Coordinate165 = x3d.Coordinate()
Coordinate165.point = [(0, 7, 0),(0, 0, 0)]

LineSet163.coord = Coordinate165

Shape162.geometry = LineSet163

HAnimSite159.children.append(Shape162)

Transform158.children.append(HAnimSite159)
TouchSensor166 = x3d.TouchSensor()
TouchSensor166.description = "HAnimJoint LeftHand LeftHand, HAnimSegment LeftLowArm_to_LeftHand"

Transform158.children.append(TouchSensor166)
Shape167 = x3d.Shape()
Shape167.USE = "HAnimJointShape"

Transform158.children.append(Shape167)

HAnimSegment157.children.append(Transform158)

HAnimJoint156.children.append(HAnimSegment157)

HAnimJoint147.children.append(HAnimJoint156)

HAnimJoint138.children.append(HAnimJoint147)

HAnimJoint129.children.append(HAnimJoint138)

HAnimJoint91.children.append(HAnimJoint129)
HAnimJoint168 = x3d.HAnimJoint()
HAnimJoint168.DEF = "BvhUniversityWisconsionExample1_RightCollar"
HAnimJoint168.name = "RightCollar"
HAnimJoint168.rotation = [-0.0717927567877157,-0.898736438505571,-0.432572091304025,0.383573753513759]
HAnimJoint168.center = [-1.12,21.44,1.87]
HAnimSegment169 = x3d.HAnimSegment()
HAnimSegment169.DEF = "BvhUniversityWisconsionExample1_vl5_to_RightCollar"
HAnimSegment169.name = "vl5_to_RightCollar"
Transform170 = x3d.Transform()
Transform170.translation = [-1.12,21.44,1.87]
TouchSensor171 = x3d.TouchSensor()
TouchSensor171.description = "HAnimJoint RightCollar RightCollar, HAnimSegment vl5_to_RightCollar"

Transform170.children.append(TouchSensor171)
Shape172 = x3d.Shape()
Shape172.USE = "HAnimJointShape"

Transform170.children.append(Shape172)
Shape173 = x3d.Shape()
LineSet174 = x3d.LineSet()
LineSet174.vertexCount = [2]
ColorRGBA175 = x3d.ColorRGBA()
ColorRGBA175.USE = "HAnimSegmentLineColorRGBA"

LineSet174.color = ColorRGBA175
Coordinate176 = x3d.Coordinate()
Coordinate176.point = [(0, 0, 0),(-6.07, 0, 0)]

LineSet174.coord = Coordinate176

Shape173.geometry = LineSet174

Transform170.children.append(Shape173)

HAnimSegment169.children.append(Transform170)

HAnimJoint168.children.append(HAnimSegment169)
HAnimJoint177 = x3d.HAnimJoint()
HAnimJoint177.DEF = "BvhUniversityWisconsionExample1_RightUpArm"
HAnimJoint177.name = "RightUpArm"
HAnimJoint177.rotation = [-0.750052184733347,-0.545300751513553,-0.374257679380781,1.93524054510947]
HAnimJoint177.center = [-7.19,21.44,1.87]
HAnimSegment178 = x3d.HAnimSegment()
HAnimSegment178.DEF = "BvhUniversityWisconsionExample1_RightCollar_to_RightUpArm"
HAnimSegment178.name = "RightCollar_to_RightUpArm"
Transform179 = x3d.Transform()
Transform179.translation = [-7.19,21.44,1.87]
TouchSensor180 = x3d.TouchSensor()
TouchSensor180.description = "HAnimJoint RightUpArm RightUpArm, HAnimSegment RightCollar_to_RightUpArm"

Transform179.children.append(TouchSensor180)
Shape181 = x3d.Shape()
Shape181.USE = "HAnimJointShape"

Transform179.children.append(Shape181)
Shape182 = x3d.Shape()
LineSet183 = x3d.LineSet()
LineSet183.vertexCount = [2]
ColorRGBA184 = x3d.ColorRGBA()
ColorRGBA184.USE = "HAnimSegmentLineColorRGBA"

LineSet183.color = ColorRGBA184
Coordinate185 = x3d.Coordinate()
Coordinate185.point = [(0, 0, 0),(0, -11.82, 0)]

LineSet183.coord = Coordinate185

Shape182.geometry = LineSet183

Transform179.children.append(Shape182)

HAnimSegment178.children.append(Transform179)

HAnimJoint177.children.append(HAnimSegment178)
HAnimJoint186 = x3d.HAnimJoint()
HAnimJoint186.DEF = "BvhUniversityWisconsionExample1_RightLowArm"
HAnimJoint186.name = "RightLowArm"
HAnimJoint186.rotation = [-0.942326628906139,0.260683574441484,0.209915693722034,1.36514284873355]
HAnimJoint186.center = [-7.19,9.62,1.87]
HAnimSegment187 = x3d.HAnimSegment()
HAnimSegment187.DEF = "BvhUniversityWisconsionExample1_RightUpArm_to_RightLowArm"
HAnimSegment187.name = "RightUpArm_to_RightLowArm"
Transform188 = x3d.Transform()
Transform188.translation = [-7.19,9.62,1.87]
TouchSensor189 = x3d.TouchSensor()
TouchSensor189.description = "HAnimJoint RightLowArm RightLowArm, HAnimSegment RightUpArm_to_RightLowArm"

Transform188.children.append(TouchSensor189)
Shape190 = x3d.Shape()
Shape190.USE = "HAnimJointShape"

Transform188.children.append(Shape190)
Shape191 = x3d.Shape()
LineSet192 = x3d.LineSet()
LineSet192.vertexCount = [2]
ColorRGBA193 = x3d.ColorRGBA()
ColorRGBA193.USE = "HAnimSegmentLineColorRGBA"

LineSet192.color = ColorRGBA193
Coordinate194 = x3d.Coordinate()
Coordinate194.point = [(0, 0, 0),(0, -10.65, 0)]

LineSet192.coord = Coordinate194

Shape191.geometry = LineSet192

Transform188.children.append(Shape191)

HAnimSegment187.children.append(Transform188)

HAnimJoint186.children.append(HAnimSegment187)
HAnimJoint195 = x3d.HAnimJoint()
HAnimJoint195.DEF = "BvhUniversityWisconsionExample1_RightHand"
HAnimJoint195.name = "RightHand"
HAnimJoint195.rotation = [0.487401172792782,0.00827736333346378,-0.87313892480885,0.0323338299925714]
HAnimJoint195.center = [-7.19,-1.03,1.87]
HAnimSegment196 = x3d.HAnimSegment()
HAnimSegment196.DEF = "BvhUniversityWisconsionExample1_RightLowArm_to_RightHand"
HAnimSegment196.name = "RightLowArm_to_RightHand"
Transform197 = x3d.Transform()
Transform197.translation = [-7.19,-1.03,1.87]
HAnimSite198 = x3d.HAnimSite()
HAnimSite198.DEF = "BvhUniversityWisconsionExample1_RightLowArm_to_RightHand_tip"
HAnimSite198.name = "RightLowArm_to_RightHand_tip"
HAnimSite198.translation = [0,-7,0]
TouchSensor199 = x3d.TouchSensor()
TouchSensor199.description = "HAnimSite RightLowArm_to_RightHand_tip"

HAnimSite198.children.append(TouchSensor199)
Shape200 = x3d.Shape()
Shape200.USE = "HAnimSiteShape"

HAnimSite198.children.append(Shape200)
Shape201 = x3d.Shape()
LineSet202 = x3d.LineSet()
LineSet202.vertexCount = [2]
ColorRGBA203 = x3d.ColorRGBA()
ColorRGBA203.USE = "HAnimSiteLineColorRGBA"

LineSet202.color = ColorRGBA203
Coordinate204 = x3d.Coordinate()
Coordinate204.point = [(0, 7, 0),(0, 0, 0)]

LineSet202.coord = Coordinate204

Shape201.geometry = LineSet202

HAnimSite198.children.append(Shape201)

Transform197.children.append(HAnimSite198)
TouchSensor205 = x3d.TouchSensor()
TouchSensor205.description = "HAnimJoint RightHand RightHand, HAnimSegment RightLowArm_to_RightHand"

Transform197.children.append(TouchSensor205)
Shape206 = x3d.Shape()
Shape206.USE = "HAnimJointShape"

Transform197.children.append(Shape206)

HAnimSegment196.children.append(Transform197)

HAnimJoint195.children.append(HAnimSegment196)

HAnimJoint186.children.append(HAnimJoint195)

HAnimJoint177.children.append(HAnimJoint186)

HAnimJoint168.children.append(HAnimJoint177)

HAnimJoint91.children.append(HAnimJoint168)

HAnimJoint53.children.append(HAnimJoint91)
HAnimJoint207 = x3d.HAnimJoint()
HAnimJoint207.DEF = "BvhUniversityWisconsionExample1_LeftUpLeg"
HAnimJoint207.name = "LeftUpLeg"
HAnimJoint207.rotation = [0.798274116909833,-0.0905296906431976,0.595451769150005,0.374616063385567]
HAnimJoint207.center = [3.91,0,0]
HAnimSegment208 = x3d.HAnimSegment()
HAnimSegment208.DEF = "BvhUniversityWisconsionExample1_humanoid_root_to_LeftUpLeg"
HAnimSegment208.name = "humanoid_root_to_LeftUpLeg"
Transform209 = x3d.Transform()
Transform209.translation = [3.91,0,0]
TouchSensor210 = x3d.TouchSensor()
TouchSensor210.description = "HAnimJoint LeftUpLeg LeftUpLeg, HAnimSegment humanoid_root_to_LeftUpLeg"

Transform209.children.append(TouchSensor210)
Shape211 = x3d.Shape()
Shape211.USE = "HAnimJointShape"

Transform209.children.append(Shape211)
Shape212 = x3d.Shape()
LineSet213 = x3d.LineSet()
LineSet213.vertexCount = [2]
ColorRGBA214 = x3d.ColorRGBA()
ColorRGBA214.USE = "HAnimSegmentLineColorRGBA"

LineSet213.color = ColorRGBA214
Coordinate215 = x3d.Coordinate()
Coordinate215.point = [(0, 0, 0),(0, -18.34, 0)]

LineSet213.coord = Coordinate215

Shape212.geometry = LineSet213

Transform209.children.append(Shape212)

HAnimSegment208.children.append(Transform209)

HAnimJoint207.children.append(HAnimSegment208)
HAnimJoint216 = x3d.HAnimJoint()
HAnimJoint216.DEF = "BvhUniversityWisconsionExample1_LeftLowLeg"
HAnimJoint216.name = "LeftLowLeg"
HAnimJoint216.rotation = [0.969171949455709,0.159020234805176,0.188197495495361,1.02828103886506]
HAnimJoint216.center = [3.91,-18.34,0]
HAnimSegment217 = x3d.HAnimSegment()
HAnimSegment217.DEF = "BvhUniversityWisconsionExample1_LeftUpLeg_to_LeftLowLeg"
HAnimSegment217.name = "LeftUpLeg_to_LeftLowLeg"
Transform218 = x3d.Transform()
Transform218.translation = [3.91,-18.34,0]
TouchSensor219 = x3d.TouchSensor()
TouchSensor219.description = "HAnimJoint LeftLowLeg LeftLowLeg, HAnimSegment LeftUpLeg_to_LeftLowLeg"

Transform218.children.append(TouchSensor219)
Shape220 = x3d.Shape()
Shape220.USE = "HAnimJointShape"

Transform218.children.append(Shape220)
Shape221 = x3d.Shape()
LineSet222 = x3d.LineSet()
LineSet222.vertexCount = [2]
ColorRGBA223 = x3d.ColorRGBA()
ColorRGBA223.USE = "HAnimSegmentLineColorRGBA"

LineSet222.color = ColorRGBA223
Coordinate224 = x3d.Coordinate()
Coordinate224.point = [(0, 0, 0),(0, -17.37, 0)]

LineSet222.coord = Coordinate224

Shape221.geometry = LineSet222

Transform218.children.append(Shape221)

HAnimSegment217.children.append(Transform218)

HAnimJoint216.children.append(HAnimSegment217)
HAnimJoint225 = x3d.HAnimJoint()
HAnimJoint225.DEF = "BvhUniversityWisconsionExample1_LeftFoot"
HAnimJoint225.name = "LeftFoot"
HAnimJoint225.rotation = [1.00000000000036,0,0,0.0199134632110525]
HAnimJoint225.center = [3.91,-35.71,0]
HAnimSegment226 = x3d.HAnimSegment()
HAnimSegment226.DEF = "BvhUniversityWisconsionExample1_LeftLowLeg_to_LeftFoot"
HAnimSegment226.name = "LeftLowLeg_to_LeftFoot"
Transform227 = x3d.Transform()
Transform227.translation = [3.91,-35.71,0]
HAnimSite228 = x3d.HAnimSite()
HAnimSite228.DEF = "BvhUniversityWisconsionExample1_LeftLowLeg_to_LeftFoot_tip"
HAnimSite228.name = "LeftLowLeg_to_LeftFoot_tip"
HAnimSite228.translation = [0,-3.46,0]
TouchSensor229 = x3d.TouchSensor()
TouchSensor229.description = "HAnimSite LeftLowLeg_to_LeftFoot_tip"

HAnimSite228.children.append(TouchSensor229)
Shape230 = x3d.Shape()
Shape230.USE = "HAnimSiteShape"

HAnimSite228.children.append(Shape230)
Shape231 = x3d.Shape()
LineSet232 = x3d.LineSet()
LineSet232.vertexCount = [2]
ColorRGBA233 = x3d.ColorRGBA()
ColorRGBA233.USE = "HAnimSiteLineColorRGBA"

LineSet232.color = ColorRGBA233
Coordinate234 = x3d.Coordinate()
Coordinate234.point = [(0, 3.46, 0),(0, 0, 0)]

LineSet232.coord = Coordinate234

Shape231.geometry = LineSet232

HAnimSite228.children.append(Shape231)

Transform227.children.append(HAnimSite228)
TouchSensor235 = x3d.TouchSensor()
TouchSensor235.description = "HAnimJoint LeftFoot LeftFoot, HAnimSegment LeftLowLeg_to_LeftFoot"

Transform227.children.append(TouchSensor235)
Shape236 = x3d.Shape()
Shape236.USE = "HAnimJointShape"

Transform227.children.append(Shape236)

HAnimSegment226.children.append(Transform227)

HAnimJoint225.children.append(HAnimSegment226)

HAnimJoint216.children.append(HAnimJoint225)

HAnimJoint207.children.append(HAnimJoint216)

HAnimJoint53.children.append(HAnimJoint207)
HAnimJoint237 = x3d.HAnimJoint()
HAnimJoint237.DEF = "BvhUniversityWisconsionExample1_RightUpLeg"
HAnimJoint237.name = "RightUpLeg"
HAnimJoint237.rotation = [-0.529026768997627,-0.0781104813974245,-0.845002621522441,0.345959390966261]
HAnimJoint237.center = [-3.91,0,0]
HAnimSegment238 = x3d.HAnimSegment()
HAnimSegment238.DEF = "BvhUniversityWisconsionExample1_humanoid_root_to_RightUpLeg"
HAnimSegment238.name = "humanoid_root_to_RightUpLeg"
Transform239 = x3d.Transform()
Transform239.translation = [-3.91,0,0]
TouchSensor240 = x3d.TouchSensor()
TouchSensor240.description = "HAnimJoint RightUpLeg RightUpLeg, HAnimSegment humanoid_root_to_RightUpLeg"

Transform239.children.append(TouchSensor240)
Shape241 = x3d.Shape()
Shape241.USE = "HAnimJointShape"

Transform239.children.append(Shape241)
Shape242 = x3d.Shape()
LineSet243 = x3d.LineSet()
LineSet243.vertexCount = [2]
ColorRGBA244 = x3d.ColorRGBA()
ColorRGBA244.USE = "HAnimSegmentLineColorRGBA"

LineSet243.color = ColorRGBA244
Coordinate245 = x3d.Coordinate()
Coordinate245.point = [(0, 0, 0),(0, -17.63, 0)]

LineSet243.coord = Coordinate245

Shape242.geometry = LineSet243

Transform239.children.append(Shape242)

HAnimSegment238.children.append(Transform239)

HAnimJoint237.children.append(HAnimSegment238)
HAnimJoint246 = x3d.HAnimJoint()
HAnimJoint246.DEF = "BvhUniversityWisconsionExample1_RightLowLeg"
HAnimJoint246.name = "RightLowLeg"
HAnimJoint246.rotation = [0.978057447453843,-0.194999101930461,0.073341527979632,0.971415273794883]
HAnimJoint246.center = [-3.91,-17.63,0]
HAnimSegment247 = x3d.HAnimSegment()
HAnimSegment247.DEF = "BvhUniversityWisconsionExample1_RightUpLeg_to_RightLowLeg"
HAnimSegment247.name = "RightUpLeg_to_RightLowLeg"
Transform248 = x3d.Transform()
Transform248.translation = [-3.91,-17.63,0]
TouchSensor249 = x3d.TouchSensor()
TouchSensor249.description = "HAnimJoint RightLowLeg RightLowLeg, HAnimSegment RightUpLeg_to_RightLowLeg"

Transform248.children.append(TouchSensor249)
Shape250 = x3d.Shape()
Shape250.USE = "HAnimJointShape"

Transform248.children.append(Shape250)
Shape251 = x3d.Shape()
LineSet252 = x3d.LineSet()
LineSet252.vertexCount = [2]
ColorRGBA253 = x3d.ColorRGBA()
ColorRGBA253.USE = "HAnimSegmentLineColorRGBA"

LineSet252.color = ColorRGBA253
Coordinate254 = x3d.Coordinate()
Coordinate254.point = [(0, 0, 0),(0, -17.14, 0)]

LineSet252.coord = Coordinate254

Shape251.geometry = LineSet252

Transform248.children.append(Shape251)

HAnimSegment247.children.append(Transform248)

HAnimJoint246.children.append(HAnimSegment247)
HAnimJoint255 = x3d.HAnimJoint()
HAnimJoint255.DEF = "BvhUniversityWisconsionExample1_RightFoot"
HAnimJoint255.name = "RightFoot"
HAnimJoint255.rotation = [-1,0,0,0.446403006744384]
HAnimJoint255.center = [-3.91,-34.77,0]
HAnimSegment256 = x3d.HAnimSegment()
HAnimSegment256.DEF = "BvhUniversityWisconsionExample1_RightLowLeg_to_RightFoot"
HAnimSegment256.name = "RightLowLeg_to_RightFoot"
Transform257 = x3d.Transform()
Transform257.translation = [-3.91,-34.77,0]
HAnimSite258 = x3d.HAnimSite()
HAnimSite258.DEF = "BvhUniversityWisconsionExample1_RightLowLeg_to_RightFoot_tip"
HAnimSite258.name = "RightLowLeg_to_RightFoot_tip"
HAnimSite258.translation = [0,-3.75,0]
TouchSensor259 = x3d.TouchSensor()
TouchSensor259.description = "HAnimSite RightLowLeg_to_RightFoot_tip"

HAnimSite258.children.append(TouchSensor259)
Shape260 = x3d.Shape()
Shape260.USE = "HAnimSiteShape"

HAnimSite258.children.append(Shape260)
Shape261 = x3d.Shape()
LineSet262 = x3d.LineSet()
LineSet262.vertexCount = [2]
ColorRGBA263 = x3d.ColorRGBA()
ColorRGBA263.USE = "HAnimSiteLineColorRGBA"

LineSet262.color = ColorRGBA263
Coordinate264 = x3d.Coordinate()
Coordinate264.point = [(0, 3.75, 0),(0, 0, 0)]

LineSet262.coord = Coordinate264

Shape261.geometry = LineSet262

HAnimSite258.children.append(Shape261)

Transform257.children.append(HAnimSite258)
TouchSensor265 = x3d.TouchSensor()
TouchSensor265.description = "HAnimJoint RightFoot RightFoot, HAnimSegment RightLowLeg_to_RightFoot"

Transform257.children.append(TouchSensor265)
Shape266 = x3d.Shape()
Shape266.USE = "HAnimJointShape"

Transform257.children.append(Shape266)

HAnimSegment256.children.append(Transform257)

HAnimJoint255.children.append(HAnimSegment256)

HAnimJoint246.children.append(HAnimJoint255)

HAnimJoint237.children.append(HAnimJoint246)

HAnimJoint53.children.append(HAnimJoint237)

HAnimHumanoid46.skeleton.append(HAnimJoint53)
HAnimJoint267 = x3d.HAnimJoint()
HAnimJoint267.USE = "BvhUniversityWisconsionExample1_humanoid_root"

HAnimHumanoid46.joints.append(HAnimJoint267)
HAnimJoint268 = x3d.HAnimJoint()
HAnimJoint268.USE = "BvhUniversityWisconsionExample1_vl5"

HAnimHumanoid46.joints.append(HAnimJoint268)
HAnimJoint269 = x3d.HAnimJoint()
HAnimJoint269.USE = "BvhUniversityWisconsionExample1_Neck"

HAnimHumanoid46.joints.append(HAnimJoint269)
HAnimJoint270 = x3d.HAnimJoint()
HAnimJoint270.USE = "BvhUniversityWisconsionExample1_skullbase"

HAnimHumanoid46.joints.append(HAnimJoint270)
HAnimJoint271 = x3d.HAnimJoint()
HAnimJoint271.USE = "BvhUniversityWisconsionExample1_LeftCollar"

HAnimHumanoid46.joints.append(HAnimJoint271)
HAnimJoint272 = x3d.HAnimJoint()
HAnimJoint272.USE = "BvhUniversityWisconsionExample1_LeftUpArm"

HAnimHumanoid46.joints.append(HAnimJoint272)
HAnimJoint273 = x3d.HAnimJoint()
HAnimJoint273.USE = "BvhUniversityWisconsionExample1_LeftLowArm"

HAnimHumanoid46.joints.append(HAnimJoint273)
HAnimJoint274 = x3d.HAnimJoint()
HAnimJoint274.USE = "BvhUniversityWisconsionExample1_LeftHand"

HAnimHumanoid46.joints.append(HAnimJoint274)
HAnimJoint275 = x3d.HAnimJoint()
HAnimJoint275.USE = "BvhUniversityWisconsionExample1_RightCollar"

HAnimHumanoid46.joints.append(HAnimJoint275)
HAnimJoint276 = x3d.HAnimJoint()
HAnimJoint276.USE = "BvhUniversityWisconsionExample1_RightUpArm"

HAnimHumanoid46.joints.append(HAnimJoint276)
HAnimJoint277 = x3d.HAnimJoint()
HAnimJoint277.USE = "BvhUniversityWisconsionExample1_RightLowArm"

HAnimHumanoid46.joints.append(HAnimJoint277)
HAnimJoint278 = x3d.HAnimJoint()
HAnimJoint278.USE = "BvhUniversityWisconsionExample1_RightHand"

HAnimHumanoid46.joints.append(HAnimJoint278)
HAnimJoint279 = x3d.HAnimJoint()
HAnimJoint279.USE = "BvhUniversityWisconsionExample1_LeftUpLeg"

HAnimHumanoid46.joints.append(HAnimJoint279)
HAnimJoint280 = x3d.HAnimJoint()
HAnimJoint280.USE = "BvhUniversityWisconsionExample1_LeftLowLeg"

HAnimHumanoid46.joints.append(HAnimJoint280)
HAnimJoint281 = x3d.HAnimJoint()
HAnimJoint281.USE = "BvhUniversityWisconsionExample1_LeftFoot"

HAnimHumanoid46.joints.append(HAnimJoint281)
HAnimJoint282 = x3d.HAnimJoint()
HAnimJoint282.USE = "BvhUniversityWisconsionExample1_RightUpLeg"

HAnimHumanoid46.joints.append(HAnimJoint282)
HAnimJoint283 = x3d.HAnimJoint()
HAnimJoint283.USE = "BvhUniversityWisconsionExample1_RightLowLeg"

HAnimHumanoid46.joints.append(HAnimJoint283)
HAnimJoint284 = x3d.HAnimJoint()
HAnimJoint284.USE = "BvhUniversityWisconsionExample1_RightFoot"

HAnimHumanoid46.joints.append(HAnimJoint284)
HAnimSegment285 = x3d.HAnimSegment()
HAnimSegment285.USE = "BvhUniversityWisconsionExample1_sacrum"

HAnimHumanoid46.segments.append(HAnimSegment285)
HAnimSegment286 = x3d.HAnimSegment()
HAnimSegment286.USE = "BvhUniversityWisconsionExample1_l5"

HAnimHumanoid46.segments.append(HAnimSegment286)
HAnimSegment287 = x3d.HAnimSegment()
HAnimSegment287.USE = "BvhUniversityWisconsionExample1_vl5_to_Neck"

HAnimHumanoid46.segments.append(HAnimSegment287)
HAnimSegment288 = x3d.HAnimSegment()
HAnimSegment288.USE = "BvhUniversityWisconsionExample1_skull"

HAnimHumanoid46.segments.append(HAnimSegment288)
HAnimSegment289 = x3d.HAnimSegment()
HAnimSegment289.USE = "BvhUniversityWisconsionExample1_vl5_to_LeftCollar"

HAnimHumanoid46.segments.append(HAnimSegment289)
HAnimSegment290 = x3d.HAnimSegment()
HAnimSegment290.USE = "BvhUniversityWisconsionExample1_LeftCollar_to_LeftUpArm"

HAnimHumanoid46.segments.append(HAnimSegment290)
HAnimSegment291 = x3d.HAnimSegment()
HAnimSegment291.USE = "BvhUniversityWisconsionExample1_LeftUpArm_to_LeftLowArm"

HAnimHumanoid46.segments.append(HAnimSegment291)
HAnimSegment292 = x3d.HAnimSegment()
HAnimSegment292.USE = "BvhUniversityWisconsionExample1_LeftLowArm_to_LeftHand"

HAnimHumanoid46.segments.append(HAnimSegment292)
HAnimSegment293 = x3d.HAnimSegment()
HAnimSegment293.USE = "BvhUniversityWisconsionExample1_vl5_to_RightCollar"

HAnimHumanoid46.segments.append(HAnimSegment293)
HAnimSegment294 = x3d.HAnimSegment()
HAnimSegment294.USE = "BvhUniversityWisconsionExample1_RightCollar_to_RightUpArm"

HAnimHumanoid46.segments.append(HAnimSegment294)
HAnimSegment295 = x3d.HAnimSegment()
HAnimSegment295.USE = "BvhUniversityWisconsionExample1_RightUpArm_to_RightLowArm"

HAnimHumanoid46.segments.append(HAnimSegment295)
HAnimSegment296 = x3d.HAnimSegment()
HAnimSegment296.USE = "BvhUniversityWisconsionExample1_RightLowArm_to_RightHand"

HAnimHumanoid46.segments.append(HAnimSegment296)
HAnimSegment297 = x3d.HAnimSegment()
HAnimSegment297.USE = "BvhUniversityWisconsionExample1_humanoid_root_to_LeftUpLeg"

HAnimHumanoid46.segments.append(HAnimSegment297)
HAnimSegment298 = x3d.HAnimSegment()
HAnimSegment298.USE = "BvhUniversityWisconsionExample1_LeftUpLeg_to_LeftLowLeg"

HAnimHumanoid46.segments.append(HAnimSegment298)
HAnimSegment299 = x3d.HAnimSegment()
HAnimSegment299.USE = "BvhUniversityWisconsionExample1_LeftLowLeg_to_LeftFoot"

HAnimHumanoid46.segments.append(HAnimSegment299)
HAnimSegment300 = x3d.HAnimSegment()
HAnimSegment300.USE = "BvhUniversityWisconsionExample1_humanoid_root_to_RightUpLeg"

HAnimHumanoid46.segments.append(HAnimSegment300)
HAnimSegment301 = x3d.HAnimSegment()
HAnimSegment301.USE = "BvhUniversityWisconsionExample1_RightUpLeg_to_RightLowLeg"

HAnimHumanoid46.segments.append(HAnimSegment301)
HAnimSegment302 = x3d.HAnimSegment()
HAnimSegment302.USE = "BvhUniversityWisconsionExample1_RightLowLeg_to_RightFoot"

HAnimHumanoid46.segments.append(HAnimSegment302)
HAnimSite303 = x3d.HAnimSite()
HAnimSite303.DEF = "BvhUniversityWisconsionExample1_humanoid_root_view"
HAnimSite303.name = "humanoid_root_view"
Viewpoint304 = x3d.Viewpoint()
Viewpoint304.DEF = "BvhUniversityWisconsionExample1_humanoid_root_viewpoint"
Viewpoint304.description = "BvhUniversityWisconsionExample1 front view towards HAnimHumanoid center"
Viewpoint304.position = [0,0,80]

HAnimSite303.children.append(Viewpoint304)

HAnimHumanoid46.viewpoints.append(HAnimSite303)
HAnimSite305 = x3d.HAnimSite()
HAnimSite305.USE = "BvhUniversityWisconsionExample1_skull_tip"

HAnimHumanoid46.sites.append(HAnimSite305)
HAnimSite306 = x3d.HAnimSite()
HAnimSite306.USE = "BvhUniversityWisconsionExample1_LeftLowArm_to_LeftHand_tip"

HAnimHumanoid46.sites.append(HAnimSite306)
HAnimSite307 = x3d.HAnimSite()
HAnimSite307.USE = "BvhUniversityWisconsionExample1_RightLowArm_to_RightHand_tip"

HAnimHumanoid46.sites.append(HAnimSite307)
HAnimSite308 = x3d.HAnimSite()
HAnimSite308.USE = "BvhUniversityWisconsionExample1_LeftLowLeg_to_LeftFoot_tip"

HAnimHumanoid46.sites.append(HAnimSite308)
HAnimSite309 = x3d.HAnimSite()
HAnimSite309.USE = "BvhUniversityWisconsionExample1_RightLowLeg_to_RightFoot_tip"

HAnimHumanoid46.sites.append(HAnimSite309)
HAnimSite310 = x3d.HAnimSite()
HAnimSite310.USE = "BvhUniversityWisconsionExample1_humanoid_root_view"

HAnimHumanoid46.sites.append(HAnimSite310)

Scene14.children.append(HAnimHumanoid46)
Group311 = x3d.Group()
Group311.DEF = "BvhUniversityWisconsionExample1_MotionGroup"
TimeSensor312 = x3d.TimeSensor()
TimeSensor312.DEF = "RealTimer"
TimeSensor312.cycleInterval = 0.067
TimeSensor312.loop = True

Group311.children.append(TimeSensor312)
TimeSensor313 = x3d.TimeSensor()
TimeSensor313.DEF = "StepTimer"
TimeSensor313.enabled = False
TimeSensor313.cycleInterval = 2
TimeSensor313.loop = True

Group311.children.append(TimeSensor313)
ScalarInterpolator314 = x3d.ScalarInterpolator()
ScalarInterpolator314.DEF = "FrameStepper"
ScalarInterpolator314.key = [0,1,1]
ScalarInterpolator314.keyValue = [0,0,1]

Group311.children.append(ScalarInterpolator314)
PositionInterpolator315 = x3d.PositionInterpolator()
PositionInterpolator315.DEF = "Interpolator0_humanoid_root"
PositionInterpolator315.key = [0,1]
PositionInterpolator315.keyValue = [(0.803, 3.501, 8.836),(0.781, 3.51, 8.647)]

Group311.children.append(PositionInterpolator315)
OrientationInterpolator316 = x3d.OrientationInterpolator()
OrientationInterpolator316.DEF = "Interpolator1_humanoid_root"
OrientationInterpolator316.key = [0,1]
OrientationInterpolator316.keyValue = [(-0.0118, -0.9911, -0.1325, 2.8785),(-0.0199, -0.993, -0.1163, 2.9232)]

Group311.children.append(OrientationInterpolator316)
OrientationInterpolator317 = x3d.OrientationInterpolator()
OrientationInterpolator317.DEF = "Interpolator2_vl5"
OrientationInterpolator317.key = [0,1]
OrientationInterpolator317.keyValue = [(0.9093, -0.4082, 0.0806, 0.8073),(0.9336, -0.3501, 0.0768, 0.824)]

Group311.children.append(OrientationInterpolator317)
OrientationInterpolator318 = x3d.OrientationInterpolator()
OrientationInterpolator318.DEF = "Interpolator3_Neck"
OrientationInterpolator318.key = [0,1]
OrientationInterpolator318.keyValue = [(0.9834, 0.0677, 0.1685, 0.7761),(0.9841, 0.066, 0.1649, 0.7723)]

Group311.children.append(OrientationInterpolator318)
OrientationInterpolator319 = x3d.OrientationInterpolator()
OrientationInterpolator319.DEF = "Interpolator4_skullbase"
OrientationInterpolator319.key = [0,1]
OrientationInterpolator319.keyValue = [(-0.9778, 0.1629, -0.1317, 0.736),(-0.9794, 0.1474, -0.1381, 0.7342)]

Group311.children.append(OrientationInterpolator319)
OrientationInterpolator320 = x3d.OrientationInterpolator()
OrientationInterpolator320.DEF = "Interpolator5_LeftCollar"
OrientationInterpolator320.key = [0,1]
OrientationInterpolator320.keyValue = [(-0.0626, 0.7102, 0.7012, 0.2502),(-0.0355, 0.2109, 0.9769, 0.3411)]

Group311.children.append(OrientationInterpolator320)
OrientationInterpolator321 = x3d.OrientationInterpolator()
OrientationInterpolator321.DEF = "Interpolator6_LeftUpArm"
OrientationInterpolator321.key = [0,1]
OrientationInterpolator321.keyValue = [(-0.1561, -0.2157, 0.9639, 1.7536),(0.0022, -0.1597, 0.9872, 1.6521)]

Group311.children.append(OrientationInterpolator321)
OrientationInterpolator322 = x3d.OrientationInterpolator()
OrientationInterpolator322.DEF = "Interpolator7_LeftLowArm"
OrientationInterpolator322.key = [0,1]
OrientationInterpolator322.keyValue = [(-0.9933, -0.0526, -0.103, 1.6066),(-0.9965, 0.0822, 0.0138, 1.6744)]

Group311.children.append(OrientationInterpolator322)
OrientationInterpolator323 = x3d.OrientationInterpolator()
OrientationInterpolator323.DEF = "Interpolator8_LeftHand"
OrientationInterpolator323.key = [0,1]
OrientationInterpolator323.keyValue = [(0.0434, 0.0003, 0.9991, 0.0121),(0.4673, 0.0029, 0.8841, 0.0138)]

Group311.children.append(OrientationInterpolator323)
OrientationInterpolator324 = x3d.OrientationInterpolator()
OrientationInterpolator324.DEF = "Interpolator9_RightCollar"
OrientationInterpolator324.key = [0,1]
OrientationInterpolator324.keyValue = [(-0.0734, -0.5964, -0.7993, 0.3057),(-0.07, -0.9291, -0.3633, 0.4091)]

Group311.children.append(OrientationInterpolator324)
OrientationInterpolator325 = x3d.OrientationInterpolator()
OrientationInterpolator325.DEF = "Interpolator10_RightUpArm"
OrientationInterpolator325.key = [0,1]
OrientationInterpolator325.keyValue = [(-0.6801, -0.6074, -0.4106, 2.0536),(-0.765, -0.5303, -0.3654, 1.9107)]

Group311.children.append(OrientationInterpolator325)
OrientationInterpolator326 = x3d.OrientationInterpolator()
OrientationInterpolator326.DEF = "Interpolator11_RightLowArm"
OrientationInterpolator326.key = [0,1]
OrientationInterpolator326.keyValue = [(-0.9378, 0.2739, 0.2135, 1.4058),(-0.9433, 0.2577, 0.2091, 1.3563)]

Group311.children.append(OrientationInterpolator326)
OrientationInterpolator327 = x3d.OrientationInterpolator()
OrientationInterpolator327.DEF = "Interpolator12_RightHand"
OrientationInterpolator327.key = [0,1]
OrientationInterpolator327.keyValue = [(0.4025, 0.0061, -0.9154, 0.0299),(0.5037, 0.0087, -0.8638, 0.0329)]

Group311.children.append(OrientationInterpolator327)
OrientationInterpolator328 = x3d.OrientationInterpolator()
OrientationInterpolator328.DEF = "Interpolator13_LeftUpLeg"
OrientationInterpolator328.key = [0,1]
OrientationInterpolator328.keyValue = [(0.8595, -0.1039, 0.5004, 0.4748),(0.7784, -0.0864, 0.6217, 0.3536)]

Group311.children.append(OrientationInterpolator328)
OrientationInterpolator329 = x3d.OrientationInterpolator()
OrientationInterpolator329.DEF = "Interpolator14_LeftLowLeg"
OrientationInterpolator329.key = [0,1]
OrientationInterpolator329.keyValue = [(0.9184, 0.2378, 0.3162, 0.9291),(0.9762, 0.1432, 0.1627, 1.0525)]

Group311.children.append(OrientationInterpolator329)
OrientationInterpolator330 = x3d.OrientationInterpolator()
OrientationInterpolator330.DEF = "Interpolator15_LeftFoot"
OrientationInterpolator330.key = [0,1]
OrientationInterpolator330.keyValue = [(-1, 0, 0, 0.0199),(1, 0, 0, 0.0286)]

Group311.children.append(OrientationInterpolator330)
OrientationInterpolator331 = x3d.OrientationInterpolator()
OrientationInterpolator331.DEF = "Interpolator16_RightUpLeg"
OrientationInterpolator331.key = [0,1]
OrientationInterpolator331.keyValue = [(-0.5548, -0.0795, -0.8282, 0.3423),(-0.5234, -0.0778, -0.8485, 0.3468)]

Group311.children.append(OrientationInterpolator331)
OrientationInterpolator332 = x3d.OrientationInterpolator()
OrientationInterpolator332.DEF = "Interpolator17_RightLowLeg"
OrientationInterpolator332.key = [0,1]
OrientationInterpolator332.keyValue = [(0.9694, -0.234, 0.0739, 0.9755),(0.9797, -0.1864, 0.0732, 0.9707)]

Group311.children.append(OrientationInterpolator332)
OrientationInterpolator333 = x3d.OrientationInterpolator()
OrientationInterpolator333.DEF = "Interpolator18_RightFoot"
OrientationInterpolator333.key = [0,1]
OrientationInterpolator333.keyValue = [(-1, 0, 0, 0.418),(-1, 0, 0, 0.4526)]

Group311.children.append(OrientationInterpolator333)

Scene14.children.append(Group311)
ROUTE334 = x3d.ROUTE()
ROUTE334.fromNode = "StepTimer"
ROUTE334.fromField = "fraction_changed"
ROUTE334.toNode = "FrameStepper"
ROUTE334.toField = "set_fraction"

Scene14.children.append(ROUTE334)
ROUTE335 = x3d.ROUTE()
ROUTE335.fromNode = "RealTimer"
ROUTE335.fromField = "fraction_changed"
ROUTE335.toNode = "Interpolator0_humanoid_root"
ROUTE335.toField = "set_fraction"

Scene14.children.append(ROUTE335)
ROUTE336 = x3d.ROUTE()
ROUTE336.fromNode = "FrameStepper"
ROUTE336.fromField = "value_changed"
ROUTE336.toNode = "Interpolator0_humanoid_root"
ROUTE336.toField = "set_fraction"

Scene14.children.append(ROUTE336)
ROUTE337 = x3d.ROUTE()
ROUTE337.fromNode = "Interpolator0_humanoid_root"
ROUTE337.fromField = "value_changed"
ROUTE337.toNode = "BvhUniversityWisconsionExample1_humanoid_root"
ROUTE337.toField = "set_translation"

Scene14.children.append(ROUTE337)
ROUTE338 = x3d.ROUTE()
ROUTE338.fromNode = "RealTimer"
ROUTE338.fromField = "fraction_changed"
ROUTE338.toNode = "Interpolator1_humanoid_root"
ROUTE338.toField = "set_fraction"

Scene14.children.append(ROUTE338)
ROUTE339 = x3d.ROUTE()
ROUTE339.fromNode = "FrameStepper"
ROUTE339.fromField = "value_changed"
ROUTE339.toNode = "Interpolator1_humanoid_root"
ROUTE339.toField = "set_fraction"

Scene14.children.append(ROUTE339)
ROUTE340 = x3d.ROUTE()
ROUTE340.fromNode = "Interpolator1_humanoid_root"
ROUTE340.fromField = "value_changed"
ROUTE340.toNode = "BvhUniversityWisconsionExample1_humanoid_root"
ROUTE340.toField = "set_rotation"

Scene14.children.append(ROUTE340)
ROUTE341 = x3d.ROUTE()
ROUTE341.fromNode = "RealTimer"
ROUTE341.fromField = "fraction_changed"
ROUTE341.toNode = "Interpolator2_vl5"
ROUTE341.toField = "set_fraction"

Scene14.children.append(ROUTE341)
ROUTE342 = x3d.ROUTE()
ROUTE342.fromNode = "FrameStepper"
ROUTE342.fromField = "value_changed"
ROUTE342.toNode = "Interpolator2_vl5"
ROUTE342.toField = "set_fraction"

Scene14.children.append(ROUTE342)
ROUTE343 = x3d.ROUTE()
ROUTE343.fromNode = "Interpolator2_vl5"
ROUTE343.fromField = "value_changed"
ROUTE343.toNode = "BvhUniversityWisconsionExample1_vl5"
ROUTE343.toField = "set_rotation"

Scene14.children.append(ROUTE343)
ROUTE344 = x3d.ROUTE()
ROUTE344.fromNode = "RealTimer"
ROUTE344.fromField = "fraction_changed"
ROUTE344.toNode = "Interpolator3_Neck"
ROUTE344.toField = "set_fraction"

Scene14.children.append(ROUTE344)
ROUTE345 = x3d.ROUTE()
ROUTE345.fromNode = "FrameStepper"
ROUTE345.fromField = "value_changed"
ROUTE345.toNode = "Interpolator3_Neck"
ROUTE345.toField = "set_fraction"

Scene14.children.append(ROUTE345)
ROUTE346 = x3d.ROUTE()
ROUTE346.fromNode = "Interpolator3_Neck"
ROUTE346.fromField = "value_changed"
ROUTE346.toNode = "BvhUniversityWisconsionExample1_Neck"
ROUTE346.toField = "set_rotation"

Scene14.children.append(ROUTE346)
ROUTE347 = x3d.ROUTE()
ROUTE347.fromNode = "RealTimer"
ROUTE347.fromField = "fraction_changed"
ROUTE347.toNode = "Interpolator4_skullbase"
ROUTE347.toField = "set_fraction"

Scene14.children.append(ROUTE347)
ROUTE348 = x3d.ROUTE()
ROUTE348.fromNode = "FrameStepper"
ROUTE348.fromField = "value_changed"
ROUTE348.toNode = "Interpolator4_skullbase"
ROUTE348.toField = "set_fraction"

Scene14.children.append(ROUTE348)
ROUTE349 = x3d.ROUTE()
ROUTE349.fromNode = "Interpolator4_skullbase"
ROUTE349.fromField = "value_changed"
ROUTE349.toNode = "BvhUniversityWisconsionExample1_skullbase"
ROUTE349.toField = "set_rotation"

Scene14.children.append(ROUTE349)
ROUTE350 = x3d.ROUTE()
ROUTE350.fromNode = "RealTimer"
ROUTE350.fromField = "fraction_changed"
ROUTE350.toNode = "Interpolator5_LeftCollar"
ROUTE350.toField = "set_fraction"

Scene14.children.append(ROUTE350)
ROUTE351 = x3d.ROUTE()
ROUTE351.fromNode = "FrameStepper"
ROUTE351.fromField = "value_changed"
ROUTE351.toNode = "Interpolator5_LeftCollar"
ROUTE351.toField = "set_fraction"

Scene14.children.append(ROUTE351)
ROUTE352 = x3d.ROUTE()
ROUTE352.fromNode = "Interpolator5_LeftCollar"
ROUTE352.fromField = "value_changed"
ROUTE352.toNode = "BvhUniversityWisconsionExample1_LeftCollar"
ROUTE352.toField = "set_rotation"

Scene14.children.append(ROUTE352)
ROUTE353 = x3d.ROUTE()
ROUTE353.fromNode = "RealTimer"
ROUTE353.fromField = "fraction_changed"
ROUTE353.toNode = "Interpolator6_LeftUpArm"
ROUTE353.toField = "set_fraction"

Scene14.children.append(ROUTE353)
ROUTE354 = x3d.ROUTE()
ROUTE354.fromNode = "FrameStepper"
ROUTE354.fromField = "value_changed"
ROUTE354.toNode = "Interpolator6_LeftUpArm"
ROUTE354.toField = "set_fraction"

Scene14.children.append(ROUTE354)
ROUTE355 = x3d.ROUTE()
ROUTE355.fromNode = "Interpolator6_LeftUpArm"
ROUTE355.fromField = "value_changed"
ROUTE355.toNode = "BvhUniversityWisconsionExample1_LeftUpArm"
ROUTE355.toField = "set_rotation"

Scene14.children.append(ROUTE355)
ROUTE356 = x3d.ROUTE()
ROUTE356.fromNode = "RealTimer"
ROUTE356.fromField = "fraction_changed"
ROUTE356.toNode = "Interpolator7_LeftLowArm"
ROUTE356.toField = "set_fraction"

Scene14.children.append(ROUTE356)
ROUTE357 = x3d.ROUTE()
ROUTE357.fromNode = "FrameStepper"
ROUTE357.fromField = "value_changed"
ROUTE357.toNode = "Interpolator7_LeftLowArm"
ROUTE357.toField = "set_fraction"

Scene14.children.append(ROUTE357)
ROUTE358 = x3d.ROUTE()
ROUTE358.fromNode = "Interpolator7_LeftLowArm"
ROUTE358.fromField = "value_changed"
ROUTE358.toNode = "BvhUniversityWisconsionExample1_LeftLowArm"
ROUTE358.toField = "set_rotation"

Scene14.children.append(ROUTE358)
ROUTE359 = x3d.ROUTE()
ROUTE359.fromNode = "RealTimer"
ROUTE359.fromField = "fraction_changed"
ROUTE359.toNode = "Interpolator8_LeftHand"
ROUTE359.toField = "set_fraction"

Scene14.children.append(ROUTE359)
ROUTE360 = x3d.ROUTE()
ROUTE360.fromNode = "FrameStepper"
ROUTE360.fromField = "value_changed"
ROUTE360.toNode = "Interpolator8_LeftHand"
ROUTE360.toField = "set_fraction"

Scene14.children.append(ROUTE360)
ROUTE361 = x3d.ROUTE()
ROUTE361.fromNode = "Interpolator8_LeftHand"
ROUTE361.fromField = "value_changed"
ROUTE361.toNode = "BvhUniversityWisconsionExample1_LeftHand"
ROUTE361.toField = "set_rotation"

Scene14.children.append(ROUTE361)
ROUTE362 = x3d.ROUTE()
ROUTE362.fromNode = "RealTimer"
ROUTE362.fromField = "fraction_changed"
ROUTE362.toNode = "Interpolator9_RightCollar"
ROUTE362.toField = "set_fraction"

Scene14.children.append(ROUTE362)
ROUTE363 = x3d.ROUTE()
ROUTE363.fromNode = "FrameStepper"
ROUTE363.fromField = "value_changed"
ROUTE363.toNode = "Interpolator9_RightCollar"
ROUTE363.toField = "set_fraction"

Scene14.children.append(ROUTE363)
ROUTE364 = x3d.ROUTE()
ROUTE364.fromNode = "Interpolator9_RightCollar"
ROUTE364.fromField = "value_changed"
ROUTE364.toNode = "BvhUniversityWisconsionExample1_RightCollar"
ROUTE364.toField = "set_rotation"

Scene14.children.append(ROUTE364)
ROUTE365 = x3d.ROUTE()
ROUTE365.fromNode = "RealTimer"
ROUTE365.fromField = "fraction_changed"
ROUTE365.toNode = "Interpolator10_RightUpArm"
ROUTE365.toField = "set_fraction"

Scene14.children.append(ROUTE365)
ROUTE366 = x3d.ROUTE()
ROUTE366.fromNode = "FrameStepper"
ROUTE366.fromField = "value_changed"
ROUTE366.toNode = "Interpolator10_RightUpArm"
ROUTE366.toField = "set_fraction"

Scene14.children.append(ROUTE366)
ROUTE367 = x3d.ROUTE()
ROUTE367.fromNode = "Interpolator10_RightUpArm"
ROUTE367.fromField = "value_changed"
ROUTE367.toNode = "BvhUniversityWisconsionExample1_RightUpArm"
ROUTE367.toField = "set_rotation"

Scene14.children.append(ROUTE367)
ROUTE368 = x3d.ROUTE()
ROUTE368.fromNode = "RealTimer"
ROUTE368.fromField = "fraction_changed"
ROUTE368.toNode = "Interpolator11_RightLowArm"
ROUTE368.toField = "set_fraction"

Scene14.children.append(ROUTE368)
ROUTE369 = x3d.ROUTE()
ROUTE369.fromNode = "FrameStepper"
ROUTE369.fromField = "value_changed"
ROUTE369.toNode = "Interpolator11_RightLowArm"
ROUTE369.toField = "set_fraction"

Scene14.children.append(ROUTE369)
ROUTE370 = x3d.ROUTE()
ROUTE370.fromNode = "Interpolator11_RightLowArm"
ROUTE370.fromField = "value_changed"
ROUTE370.toNode = "BvhUniversityWisconsionExample1_RightLowArm"
ROUTE370.toField = "set_rotation"

Scene14.children.append(ROUTE370)
ROUTE371 = x3d.ROUTE()
ROUTE371.fromNode = "RealTimer"
ROUTE371.fromField = "fraction_changed"
ROUTE371.toNode = "Interpolator12_RightHand"
ROUTE371.toField = "set_fraction"

Scene14.children.append(ROUTE371)
ROUTE372 = x3d.ROUTE()
ROUTE372.fromNode = "FrameStepper"
ROUTE372.fromField = "value_changed"
ROUTE372.toNode = "Interpolator12_RightHand"
ROUTE372.toField = "set_fraction"

Scene14.children.append(ROUTE372)
ROUTE373 = x3d.ROUTE()
ROUTE373.fromNode = "Interpolator12_RightHand"
ROUTE373.fromField = "value_changed"
ROUTE373.toNode = "BvhUniversityWisconsionExample1_RightHand"
ROUTE373.toField = "set_rotation"

Scene14.children.append(ROUTE373)
ROUTE374 = x3d.ROUTE()
ROUTE374.fromNode = "RealTimer"
ROUTE374.fromField = "fraction_changed"
ROUTE374.toNode = "Interpolator13_LeftUpLeg"
ROUTE374.toField = "set_fraction"

Scene14.children.append(ROUTE374)
ROUTE375 = x3d.ROUTE()
ROUTE375.fromNode = "FrameStepper"
ROUTE375.fromField = "value_changed"
ROUTE375.toNode = "Interpolator13_LeftUpLeg"
ROUTE375.toField = "set_fraction"

Scene14.children.append(ROUTE375)
ROUTE376 = x3d.ROUTE()
ROUTE376.fromNode = "Interpolator13_LeftUpLeg"
ROUTE376.fromField = "value_changed"
ROUTE376.toNode = "BvhUniversityWisconsionExample1_LeftUpLeg"
ROUTE376.toField = "set_rotation"

Scene14.children.append(ROUTE376)
ROUTE377 = x3d.ROUTE()
ROUTE377.fromNode = "RealTimer"
ROUTE377.fromField = "fraction_changed"
ROUTE377.toNode = "Interpolator14_LeftLowLeg"
ROUTE377.toField = "set_fraction"

Scene14.children.append(ROUTE377)
ROUTE378 = x3d.ROUTE()
ROUTE378.fromNode = "FrameStepper"
ROUTE378.fromField = "value_changed"
ROUTE378.toNode = "Interpolator14_LeftLowLeg"
ROUTE378.toField = "set_fraction"

Scene14.children.append(ROUTE378)
ROUTE379 = x3d.ROUTE()
ROUTE379.fromNode = "Interpolator14_LeftLowLeg"
ROUTE379.fromField = "value_changed"
ROUTE379.toNode = "BvhUniversityWisconsionExample1_LeftLowLeg"
ROUTE379.toField = "set_rotation"

Scene14.children.append(ROUTE379)
ROUTE380 = x3d.ROUTE()
ROUTE380.fromNode = "RealTimer"
ROUTE380.fromField = "fraction_changed"
ROUTE380.toNode = "Interpolator15_LeftFoot"
ROUTE380.toField = "set_fraction"

Scene14.children.append(ROUTE380)
ROUTE381 = x3d.ROUTE()
ROUTE381.fromNode = "FrameStepper"
ROUTE381.fromField = "value_changed"
ROUTE381.toNode = "Interpolator15_LeftFoot"
ROUTE381.toField = "set_fraction"

Scene14.children.append(ROUTE381)
ROUTE382 = x3d.ROUTE()
ROUTE382.fromNode = "Interpolator15_LeftFoot"
ROUTE382.fromField = "value_changed"
ROUTE382.toNode = "BvhUniversityWisconsionExample1_LeftFoot"
ROUTE382.toField = "set_rotation"

Scene14.children.append(ROUTE382)
ROUTE383 = x3d.ROUTE()
ROUTE383.fromNode = "RealTimer"
ROUTE383.fromField = "fraction_changed"
ROUTE383.toNode = "Interpolator16_RightUpLeg"
ROUTE383.toField = "set_fraction"

Scene14.children.append(ROUTE383)
ROUTE384 = x3d.ROUTE()
ROUTE384.fromNode = "FrameStepper"
ROUTE384.fromField = "value_changed"
ROUTE384.toNode = "Interpolator16_RightUpLeg"
ROUTE384.toField = "set_fraction"

Scene14.children.append(ROUTE384)
ROUTE385 = x3d.ROUTE()
ROUTE385.fromNode = "Interpolator16_RightUpLeg"
ROUTE385.fromField = "value_changed"
ROUTE385.toNode = "BvhUniversityWisconsionExample1_RightUpLeg"
ROUTE385.toField = "set_rotation"

Scene14.children.append(ROUTE385)
ROUTE386 = x3d.ROUTE()
ROUTE386.fromNode = "RealTimer"
ROUTE386.fromField = "fraction_changed"
ROUTE386.toNode = "Interpolator17_RightLowLeg"
ROUTE386.toField = "set_fraction"

Scene14.children.append(ROUTE386)
ROUTE387 = x3d.ROUTE()
ROUTE387.fromNode = "FrameStepper"
ROUTE387.fromField = "value_changed"
ROUTE387.toNode = "Interpolator17_RightLowLeg"
ROUTE387.toField = "set_fraction"

Scene14.children.append(ROUTE387)
ROUTE388 = x3d.ROUTE()
ROUTE388.fromNode = "Interpolator17_RightLowLeg"
ROUTE388.fromField = "value_changed"
ROUTE388.toNode = "BvhUniversityWisconsionExample1_RightLowLeg"
ROUTE388.toField = "set_rotation"

Scene14.children.append(ROUTE388)
ROUTE389 = x3d.ROUTE()
ROUTE389.fromNode = "RealTimer"
ROUTE389.fromField = "fraction_changed"
ROUTE389.toNode = "Interpolator18_RightFoot"
ROUTE389.toField = "set_fraction"

Scene14.children.append(ROUTE389)
ROUTE390 = x3d.ROUTE()
ROUTE390.fromNode = "FrameStepper"
ROUTE390.fromField = "value_changed"
ROUTE390.toNode = "Interpolator18_RightFoot"
ROUTE390.toField = "set_fraction"

Scene14.children.append(ROUTE390)
ROUTE391 = x3d.ROUTE()
ROUTE391.fromNode = "Interpolator18_RightFoot"
ROUTE391.fromField = "value_changed"
ROUTE391.toNode = "BvhUniversityWisconsionExample1_RightFoot"
ROUTE391.toField = "set_rotation"

Scene14.children.append(ROUTE391)

X3D0.Scene = Scene14
f = open("../data/UniversityWisconsionExample1.new.python.x3d", mode="w", encoding="utf-8")
f.write(X3D0.XML())
f.close()
f = open("../data/UniversityWisconsionExample1.new.python.x3dv", mode="w", encoding="utf-8")
f.write(X3D0.VRML())
f.close()
f = open("../data/UniversityWisconsionExample1.new.python.x3dj", mode="w", encoding="utf-8")
f.write(X3D0.JSON())
f.close()
