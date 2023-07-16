# x3d.py package 4.0.64.4 loaded, have fun with X3D Graphics!
print("<!--")
from x3d import *
print("-->")
print(
X3D(profile="Immersive", version="4.0", 
head=head(children=[meta(name="title", content="DesignPatternsApparelMedicalSkinLayers.x3d"),
meta(name="description", content="Design patterns for skin and apparel using HAnim2 standard in X3D4"),
meta(name="creator", content="Don Brutzman"),
meta(name="creator", content="Joe D. Williams"),
meta(name="creator", content="Dick Puk"),
meta(name="created", content="23 December 2022"),
meta(name="modified", content="26 December 2022"),
meta(name="reference", content="DesignPatternsApparelVariations.txt"),
meta(name="reference", content="HAnim2 Part 1, HAnim architecture, 4.3 Humanoid object https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/concepts.html#HumanoidObject"),
meta(name="reference", content="HAnim2 Part 1, HAnim architecture, E.4 Multiple humanoids per file https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/Guidelines.html#MultipleHumanoidsPerFile"),
meta(name="reference", content="X3D4 Architecture, clause 26 HAnim component, 26.3.2 HAnimHumanoid https://www.web3d.org/specifications/X3Dv4Draft/ISO-IEC19775-1v4-DIS/Part01/components/hanim.html#HAnimHumanoid"),
meta(name="warning", content="Under development. This template example does not produce renderable HAnim models."),
meta(name="identifier", content="https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Skin/DesignPatternsApparelMedicalSkinLayers.x3d"),
meta(name="generator", content="X3D-Edit 4.0, https://savage.nps.edu/X3D-Edit"),
meta(name="license", content="../license.html"),
meta(name="translated", content="16 July 2023"),
meta(name="generator", content="X3dToJson.xslt, https://www.web3d.org/x3d/stylesheets/X3dToJson.html"),
meta(name="reference", content="X3D JSON encoding: https://www.web3d.org/wiki/index.php/X3D_JSON_Encoding")
]), 
Scene=Scene(children=[
WorldInfo(title="HAnimHumanoid skin design patterns for apparel, medical"),
Background(skyColor=[(0,0.6,0.6)]),
Group(DEF="MultipleHumanoids", 
metadata=(
MetadataString(name="HAnimArchitecture", reference="https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/Guidelines.html#MultipleHumanoidsPerFile", value=["E.4 Multiple humanoids per file"])), children=[
Comment(value=''' ============================== '''),

HAnimHumanoid(name="SimpleSkeleton", DEF="a_SimpleSkeleton", version="2.0", skeleton=[
HAnimJoint(name="humanoid_root", ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
HAnimSegment(name="sacrum", children=[
Shape(DEF="JointVisualization"),
Shape(DEF="SegmentVisualization"),
HAnimSite(name="feature01_tip", DEF="a_feature01_tip", children=[
Shape(DEF="SiteVisualization")])])])]),
Comment(value=''' ============================== '''),

HAnimHumanoid(name="SimpleSkeletonMesh", DEF="b_SimpleSkeletonMesh", version="2.0", skeleton=[
HAnimJoint(name="humanoid_root", ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
HAnimSegment(name="sacrum", children=[
Shape(
geometry=
IndexedFaceSet(DEF="SegmentBoneMesh"))])])]),
Comment(value=''' ============================== '''),

HAnimHumanoid(name="SkinIndexedGeometry", DEF="c_SkinIndexedGeometry", version="2.0", skeleton=[
HAnimJoint(name="humanoid_root", ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
HAnimSegment(name="sacrum")])], skin=[
IndexedFaceSet(DEF="SkinMeshIFS")]),
Comment(value=''' ============================== '''),

HAnimHumanoid(name="SkinShapeIndexedGeometry", DEF="d_SkinShapeIndexedGeometry", version="2.0", skeleton=[
HAnimJoint(name="humanoid_root", ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
HAnimSegment(name="sacrum")])], skin=[
Shape(
geometry=
IndexedFaceSet(USE="SkinMeshIFS"))]),
Comment(value=''' ============================== '''),

HAnimHumanoid(name="SkinSwitchShapeIndexedGeometry", DEF="e_SkinSwitchShapeIndexedGeometry", version="2.0", skeleton=[
HAnimJoint(name="humanoid_root", ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
HAnimSegment(name="sacrum")])]),
Comment(value=''' similarly for LOD '''),

Comment(value=''' ============================== '''),

HAnimHumanoid(name="SynthesizedSkinShapeIndexedTwoPartGeometry", DEF="f_SynthesizedSkinShapeIndexedTwoPartGeometry", version="2.0", skeleton=[
HAnimJoint(name="humanoid_root", ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
HAnimSegment(name="sacrum")])], skin=[
Shape(
geometry=
IndexedFaceSet(DEF="TwoPartIndexedSkinMesh", 
coord=
Coordinate(DEF="TwoPartSkinMesh")))]),
Comment(value=''' ============================== '''),

HAnimHumanoid(name="ApparelSkinIndexedGeometryMultipleShapes", DEF="g_ApparelSkinIndexedGeometryMultipleShapes", version="2.0", skeleton=[
HAnimJoint(name="humanoid_root", ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
HAnimSegment(name="sacrum")])], skin=[
Shape()]),
Comment(value=''' ============================== '''),

HAnimHumanoid(name="AnatomySkinIndexedGeometryMultipleShapes", DEF="h_AnatomySkinIndexedGeometryMultipleShapes", version="2.0", skeleton=[
HAnimJoint(name="humanoid_root", ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
HAnimSegment(name="sacrum")])], skin=[
Shape()]),
Comment(value=''' ============================== '''),
]),
Viewpoint(DEF="ViewHelpText", description="Select text to see website", position=((0,0,12))),
Comment(value=''' Selectable Text design pattern has transparent Box and TouchSensor description as a tooltip '''),

Anchor(description="DesignPatternsApparelMedicalSkinLayers.x3d explores potential apparel approaches", parameter=("target=blank"), url=["https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Skin/DesignPatternsApparelMedicalSkinLayersIndex.html"], children=[
Shape(
geometry=
Text(string=["DesignPatternsApparelMedicalSkinLayers.x3d","","explores potential apparel approaches"], 
fontStyle=
FontStyle(family=["SANS"], justify=["MIDDLE","MIDDLE"], size=0.6, style_="BOLD")), 
appearance=
Appearance(
material=
Material(diffuseColor=((0.9,0.9,0.9))))),
Shape(
geometry=
Box(size=((11,2,0.001))), 
appearance=
Appearance(
material=
Material(transparency=1)))]),]))
.XML())
