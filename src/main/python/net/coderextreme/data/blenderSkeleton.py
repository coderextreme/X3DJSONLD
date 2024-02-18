# x3d.py package 4.0.64.4 loaded, have fun with X3D Graphics!
print("<!--")
from x3d import *
print("-->")
import json
model = (
X3D(profile="Immersive", version="4.0", 
head=Pyhead(
children=[
Pycomponent(name="HAnim", level=3),
Pymeta(name="filename", content="blenderSkeleton.x3d"),
Pymeta(name="copyright", content="2023"),
Pymeta(name="reference", content="http://www.web3D.org"),
Pymeta(name="generator", content="Blender 3.6.4"),
Pymeta(name="exporter", content="io_scene_x3dv"),
Pymeta(name="translated", content="30 December 2023"),
Pymeta(name="generator", content="X3dToJson.xslt, https://www.web3d.org/x3d/stylesheets/X3dToJson.html"),
Pymeta(name="reference", content="X3D JSON encoding: https://www.web3d.org/wiki/index.php/X3D_JSON_Encoding")
]), 
Scene=PyScene(children=[
NavigationInfo(),
Background(DEF="WO_World", groundColor=[(0.05087608844041824,0.05087608844041824,0.05087608844041824)], skyColor=[(0.05087608844041824,0.05087608844041824,0.05087608844041824)]),
Transform(children=[
Shape(DEF="SiteShape", 
appearance=
Appearance(
material=
Material(diffuseColor=((0,0,1)))), 
geometry=
Box(size=((0.05,0.05,0.05))))]),
Transform(children=[
Shape(DEF="JointShape", 
appearance=
Appearance(DEF="JointAppearance", 
material=
Material(diffuseColor=((1,0.5,0)), transparency=0.5)), 
geometry=
Sphere(radius=0.06))]),
Transform(DEF="Light_TRANSFORM", rotation=((0.20594,0.33152,0.9207,1.92627)), translation=((4.07625,1.00545,5.90386)), children=[
PointLight(DEF="LA_Light", location=((-8.940696716308594e-08,-3.5762786865234375e-07,4.6193599700927734e-07)), radius=29.999982833862305)]),
Transform(DEF="Camera_TRANSFORM", rotation=((0.77344,0.33383,0.53884,1.35072)), translation=((7.35889,-6.92579,4.95831)), children=[
Viewpoint(DEF="CA_Camera", fieldOfView=0.6911112070083618, orientation=((-3.627339850709177e-08,-0.4730778932571411,-0.8810206651687622,0.0)), position=((-3.927080456378462e-07,-2.123415470123291e-07,2.384185791015625e-07)))]),
Transform(DEF="Humanoid_collection_TRANSFORM", children=[
HAnimHumanoid(name="armature_Humanoid_collection", DEF="hanim_armature_Humanoid_collection", version="2.0")])])))
output = model.JSON()
json.loads(output)
