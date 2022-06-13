'''
x3d.py package 4.0.64.1 loaded, have fun with X3D Graphics!
'''
from x3d import *
from x3d import SFBool
print(
X3D(profile="Immersive", version="4.0", 
head=head(), 
Scene=Scene(children=[
WorldInfo(info=["HAnim 2.0 Default Joint Centers, Level Of Articulation (LOA) 0 -------------------------------------------------------- HANIM 1.1 (VRML 2.0) Author name: eMpTy (a.k.a. Matthew T. Beitler) HANIM 1.1 (VRML 2.0) Author email: beitler@graphics.cis.upenn.edu or beitler@acm.org HANIM 1.1 (VRML 2.0) Author homepage: http://www.cis.upenn.edu/~beitler HANIM 1.1 (VRML 2.0) Compliance Date: May 12, 1999 HANIM 1.1 Compliance Information: http://ece.uwaterloo.ca/~HAnim/ Construction Info (joint centers): The joint centers of this figure are based on the work of Norman Badler, director of the Center for Human Modeling and Simulation at the University of Pennsylvania. The original document which these joint centers are based on can be found at: http://www.cis.upenn.edu/~badler/anthro/89-71.ps, .pdf"], title="HANIM 2.0 Default Joint Centers, LOA0"),
NavigationInfo(speed=1.5),
Viewpoint(centerOfRotation=((0,1,0)), description="Diamond Man, LOA 0", position=((0,1,3))),
HAnimHumanoid(name="humanoid", DEF="hanim_humanoid", loa=0, version="2.0", 
metadata=(
MetadataSet(name="HAnimHumanoid.info", reference="https://www.web3d.org/documents/specifications/19774/V2.0/Architecture/ObjectInterfaces.html#Humanoid", value=[
MetadataString(name="authorEmail", value=["beitler@graphics.cis.upenn.edu beitler@acm.org"]),
MetadataString(name="authorName", value=["Matthew T. Beitler"]),
MetadataString(name="copyright", value=["Copyright 1999 Matthew T. Beitler"]),
MetadataString(name="creationDate", value=["05/12/99"]),
MetadataString(name="humanoidVersion", value=["JointCenters 1.1 LOA0"]),
MetadataString(name="usageRestrictions", value=["PERMISSION TO FULLY USE THIS SCENE GRAPH IS GRANTED PROVIDED THIS COPYRIGHT INFORMATION AND DOCUMENTATION OF THE ORIGINAL AUTHOR IS INCLUDED. This humanoid scene graph is provided _as-is_ and without warranty of any kind express implied or otherwise including without limitation any warranty of merchantability or fitness for a particular purpose."])])), skeleton=[
HAnimJoint(name="humanoid_root", DEF="hanim_humanoid_root", center=((0.0,0.824,0.0277)), ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
HAnimJoint(name="sacroiliac", DEF="hanim_sacroiliac", center=((0.0,0.9149,0.0016)), ulimit=[float(0),float(0),float(0)], llimit=[float(0),float(0),float(0)], children=[
HAnimSegment(name="pelvis", DEF="hanim_pelvis", children=[
Transform(translation=((0.0,0.9149,0.0016)), children=[
Shape(DEF="DiamondShape", 
geometry=
IndexedFaceSet(coordIndex=[int(0),int(1),int(2),int(-1),int(0),int(2),int(3),int(-1),int(0),int(3),int(4),int(-1),int(0),int(4),int(1),int(-1),int(5),int(2),int(1),int(-1),int(5),int(3),int(2),int(-1),int(5),int(4),int(3),int(-1),int(5),int(1),int(4),int(-1)], creaseAngle=0.5, 
coord=
Coordinate(point=[(0,0.01,0),(-0.01,0,0),(0,0,0.01),(0.01,0,0),(0,0,-0.01),(0,-0.01,0)])), 
appearance=
Appearance(
material=
Material(diffuseColor=((1,1,0)))))])])])])], viewpoints=[
HAnimSite(name="site_view", DEF="hanim_site_view", children=[
Viewpoint(DEF="InclinedView", description="Inclined View", orientation=((-0.113,0.993,0.0347,0.671)), position=((1.62,1.05,2.06))),
Viewpoint(DEF="FrontView", description="Front View", position=((0,0.854,2.57665))),
Viewpoint(DEF="SideView", description="Side View", orientation=((0,1,0,1.57079)), position=((2.5929,0.854,0))),
Viewpoint(DEF="TopView", description="Top View", orientation=((1,0,0,-1.57079)), position=((0,3.4495,0)))])], joints=(
HAnimJoint(USE="hanim_humanoid_root"),
HAnimJoint(USE="hanim_sacroiliac")), segments=[
HAnimSegment(USE="hanim_pelvis")])]))
.XML())
