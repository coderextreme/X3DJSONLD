print('<!--')
import x3d
print('-->')
X3D0 = x3d.X3D()
X3D0.profile = "Immersive"
X3D0.version = "4.0"
head1 = x3d.head()
component2 = x3d.component()
component2.name = "HAnim"
component2.level = 1

head1.children.append(component2)
meta3 = x3d.meta()
meta3.name = "title"
meta3.content = "DiamondManLOA0.x3d"

head1.children.append(meta3)
meta4 = x3d.meta()
meta4.name = "description"
meta4.content = "HAnim skeletal structure for Level of Action (LOA) zero, with one diamond at the base node for the structure. HumanoidRoot only, so this is the minimum legal HAnim humanoid."

head1.children.append(meta4)
meta5 = x3d.meta()
meta5.name = "creator"
meta5.content = "Matthew T. Beitler"

head1.children.append(meta5)
meta6 = x3d.meta()
meta6.name = "translator"
meta6.content = "Joel S. Pawloski"

head1.children.append(meta6)
meta7 = x3d.meta()
meta7.name = "created"
meta7.content = "12 November 2001"

head1.children.append(meta7)
meta8 = x3d.meta()
meta8.name = "modified"
meta8.content = "Mon, 15 Sep 2025 05:18:46 GMT"

head1.children.append(meta8)
meta9 = x3d.meta()
meta9.name = "motto"
meta9.content = "(a) \"Diamonds are a girl's best friend.\" (b) \"Gosh, it sure is chilly in here.\""

head1.children.append(meta9)
meta10 = x3d.meta()
meta10.name = "reference"
meta10.content = "HAnim 2.0 specification, Appendix A: Nominal human body dimensions and levels of articulation (LOAs)"

head1.children.append(meta10)
meta11 = x3d.meta()
meta11.name = "reference"
meta11.content = "https://www.web3d.org/documents/specifications/19774-1/V2.0/HAnim/BodyDimensionsAndLOAs.html"

head1.children.append(meta11)
meta12 = x3d.meta()
meta12.name = "reference"
meta12.content = "https://www.web3d.org/documents/specifications/19774-1/V2.0/HAnim/BodyDimensionsAndLOAs.html#LevelOfArticulationZero"

head1.children.append(meta12)
meta13 = x3d.meta()
meta13.name = "reference"
meta13.content = "HAnim 1.1 specification, Appendix A: Suggested Body Dimensions and Levels of Articulation, Level of Articulation Zero"

head1.children.append(meta13)
meta14 = x3d.meta()
meta14.name = "reference"
meta14.content = "http://HAnim.org/Specifications/HAnim1.1/appendices.html#appendixa"

head1.children.append(meta14)
meta15 = x3d.meta()
meta15.name = "reference"
meta15.content = "http://HAnim.org/Specifications/HAnim1.1/JointCenters1_1_LOA0.wrl"

head1.children.append(meta15)
meta16 = x3d.meta()
meta16.name = "reference"
meta16.content = "http://HAnim.org/Specifications/HAnim1.1/JointCenters1_1_LOA0-diamond.wrl"

head1.children.append(meta16)
meta17 = x3d.meta()
meta17.name = "reference"
meta17.content = "http://ece.uwaterloo.ca/~HAnim"

head1.children.append(meta17)
meta18 = x3d.meta()
meta18.name = "reference"
meta18.content = "http://www.cis.upenn.edu/~badler/anthro/89-71.pdf"

head1.children.append(meta18)
meta19 = x3d.meta()
meta19.name = "reference"
meta19.content = "http://www.cis.upenn.edu/~badler/anthro/89-71.ps"

head1.children.append(meta19)
meta20 = x3d.meta()
meta20.name = "reference"
meta20.content = "http://www.cis.upenn.edu/~beitler"

head1.children.append(meta20)
meta21 = x3d.meta()
meta21.name = "Image"
meta21.content = "humanoid_landmark_locations.gif"

head1.children.append(meta21)
meta22 = x3d.meta()
meta22.name = "Image"
meta22.content = "http://HAnim.org/Specifications/HAnim1.1/humanoid_landmark_locations.gif"

head1.children.append(meta22)
meta23 = x3d.meta()
meta23.name = "identifier"
meta23.content = "https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Templates/DiamondManLOA0.x3d"

head1.children.append(meta23)

X3D0.head = head1
Scene24 = x3d.Scene()
WorldInfo25 = x3d.WorldInfo()
WorldInfo25.title = "HANIM 2.0 Default Joint Centers, LOA0"
WorldInfo25.info = ["HAnim 2.0 Default Joint Centers, Level Of Articulation (LOA) 0 -------------------------------------------------------- HANIM 1.1 (VRML 2.0) Author name: eMpTy (a.k.a. Matthew T. Beitler) HANIM 1.1 (VRML 2.0) Author email: beitler@graphics.cis.upenn.edu or beitler@acm.org HANIM 1.1 (VRML 2.0) Author homepage: http://www.cis.upenn.edu/~beitler HANIM 1.1 (VRML 2.0) Compliance Date: May 12, 1999 HANIM 1.1 Compliance Information: http://ece.uwaterloo.ca/~HAnim/ Construction Info (joint centers): The joint centers of this figure are based on the work of Norman Badler, director of the Center for Human Modeling and Simulation at the University of Pennsylvania. The original document which these joint centers are based on can be found at: http://www.cis.upenn.edu/~badler/anthro/89-71.ps, .pdf"]

Scene24.children.append(WorldInfo25)
NavigationInfo26 = x3d.NavigationInfo()
NavigationInfo26.speed = 1.5

Scene24.children.append(NavigationInfo26)
Viewpoint27 = x3d.Viewpoint()
Viewpoint27.description = "Diamond Man, LOA 0"
Viewpoint27.position = [0,1,3]
Viewpoint27.centerOfRotation = [0,1,0]

Scene24.children.append(Viewpoint27)
HAnimHumanoid28 = x3d.HAnimHumanoid()
HAnimHumanoid28.DEF = "hanim_humanoid"
HAnimHumanoid28.name = "humanoid"
HAnimHumanoid28.loa = 0
MetadataSet29 = x3d.MetadataSet()
MetadataSet29.name = "HAnimHumanoid.info"
MetadataSet29.reference = "https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/ObjectInterfaces.html#Humanoid"
MetadataString30 = x3d.MetadataString()
MetadataString30.name = "authorEmail"

if MetadataSet29.value is None:
    MetadataSet29.value = []
MetadataSet29.value.append(MetadataString30)
MetadataString31 = x3d.MetadataString()
MetadataString31.name = "authorName"

if MetadataSet29.value is None:
    MetadataSet29.value = []
MetadataSet29.value.append(MetadataString31)
MetadataString32 = x3d.MetadataString()
MetadataString32.name = "copyright"

if MetadataSet29.value is None:
    MetadataSet29.value = []
MetadataSet29.value.append(MetadataString32)
MetadataString33 = x3d.MetadataString()
MetadataString33.name = "creationDate"

if MetadataSet29.value is None:
    MetadataSet29.value = []
MetadataSet29.value.append(MetadataString33)
MetadataString34 = x3d.MetadataString()
MetadataString34.name = "humanoidVersion"

if MetadataSet29.value is None:
    MetadataSet29.value = []
MetadataSet29.value.append(MetadataString34)
MetadataString35 = x3d.MetadataString()
MetadataString35.name = "usageRestrictions"

if MetadataSet29.value is None:
    MetadataSet29.value = []
MetadataSet29.value.append(MetadataString35)

HAnimHumanoid28.metadata = MetadataSet29
HAnimJoint36 = x3d.HAnimJoint()
HAnimJoint36.DEF = "hanim_humanoid_root"
HAnimJoint36.name = "humanoid_root"
HAnimJoint36.center = [0,0.824,0.0277]
HAnimJoint37 = x3d.HAnimJoint()
HAnimJoint37.DEF = "hanim_sacroiliac"
HAnimJoint37.name = "sacroiliac"
HAnimJoint37.center = [0,0.9149,0.0016]
HAnimSegment38 = x3d.HAnimSegment()
HAnimSegment38.DEF = "hanim_pelvis"
HAnimSegment38.name = "pelvis"
Transform39 = x3d.Transform()
Transform39.translation = [0,0.9149,0.0016]
Shape40 = x3d.Shape()
Shape40.DEF = "DiamondShape"
Appearance41 = x3d.Appearance()
Material42 = x3d.Material()
Material42.diffuseColor = [1,1,0]

Appearance41.material = Material42

Shape40.appearance = Appearance41
IndexedFaceSet43 = x3d.IndexedFaceSet()
IndexedFaceSet43.creaseAngle = 0.5
IndexedFaceSet43.coordIndex = [0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1,5,2,1,-1,5,3,2,-1,5,4,3,-1,5,1,4,-1]
Coordinate44 = x3d.Coordinate()
Coordinate44.point = [(0, 0.01, 0),(-0.01, 0, 0),(0, 0, 0.01),(0.01, 0, 0),(0, 0, -0.01),(0, -0.01, 0)]

IndexedFaceSet43.coord = Coordinate44

Shape40.geometry = IndexedFaceSet43

Transform39.children.append(Shape40)

HAnimSegment38.children.append(Transform39)

HAnimJoint37.children.append(HAnimSegment38)

HAnimJoint36.children.append(HAnimJoint37)

HAnimHumanoid28.skeleton.append(HAnimJoint36)
HAnimJoint45 = x3d.HAnimJoint()
HAnimJoint45.USE = "hanim_humanoid_root"

HAnimHumanoid28.joints.append(HAnimJoint45)
HAnimJoint46 = x3d.HAnimJoint()
HAnimJoint46.USE = "hanim_sacroiliac"

HAnimHumanoid28.joints.append(HAnimJoint46)
HAnimSegment47 = x3d.HAnimSegment()
HAnimSegment47.USE = "hanim_pelvis"

HAnimHumanoid28.segments.append(HAnimSegment47)
HAnimSite48 = x3d.HAnimSite()
HAnimSite48.DEF = "hanim_site_view"
HAnimSite48.name = "site_view"
Viewpoint49 = x3d.Viewpoint()
Viewpoint49.DEF = "InclinedView"
Viewpoint49.description = "Inclined View"
Viewpoint49.position = [1.62,1.05,2.06]
Viewpoint49.orientation = [-0.113,0.993,0.0347,0.671]

HAnimSite48.children.append(Viewpoint49)
Viewpoint50 = x3d.Viewpoint()
Viewpoint50.DEF = "FrontView"
Viewpoint50.description = "Front View"
Viewpoint50.position = [0,0.854,2.57665]

HAnimSite48.children.append(Viewpoint50)
Viewpoint51 = x3d.Viewpoint()
Viewpoint51.DEF = "SideView"
Viewpoint51.description = "Side View"
Viewpoint51.position = [2.5929,0.854,0]
Viewpoint51.orientation = [0,1,0,1.57079]

HAnimSite48.children.append(Viewpoint51)
Viewpoint52 = x3d.Viewpoint()
Viewpoint52.DEF = "TopView"
Viewpoint52.description = "Top View"
Viewpoint52.position = [0,3.4495,0]
Viewpoint52.orientation = [1,0,0,-1.57079]

HAnimSite48.children.append(Viewpoint52)

HAnimHumanoid28.viewpoints.append(HAnimSite48)

Scene24.children.append(HAnimHumanoid28)

X3D0.Scene = Scene24
f = open("../data/DiamondManLOA0.new.python.x3d", mode="w", encoding="utf-8")
f.write(X3D0.XML())
f.close()
f = open("../data/DiamondManLOA0.new.python.x3dv", mode="w", encoding="utf-8")
f.write(X3D0.VRML())
f.close()
f = open("../data/DiamondManLOA0.new.python.x3dj", mode="w", encoding="utf-8")
f.write(X3D0.JSON())
f.close()
