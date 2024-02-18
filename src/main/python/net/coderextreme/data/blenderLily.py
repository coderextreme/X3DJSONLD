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
Pymeta(name="filename", content="blenderLily.x3d"),
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
Transform(DEF="Light_001_TRANSFORM", rotation=((0.20594,0.33152,0.9207,1.92627)), translation=((4.07625,1.00545,5.90386)), children=[
PointLight(DEF="LA_Light_001", location=((2.9802322387695312e-08,-4.023313522338867e-07,1.043081283569336e-07)), radius=29.999982833862305)]),
Transform(DEF="Camera_001_TRANSFORM", rotation=((0.77344,0.33383,0.53884,1.35072)), translation=((7.35889,-6.92579,4.95831)), children=[
Viewpoint(DEF="CA_Camera_001", fieldOfView=0.6911112070083618, orientation=((0.0,-0.9842411279678345,-0.17683151364326477,0.0)), position=((-2.4214492100327334e-07,4.991888999938965e-07,-7.152557373046875e-07)))]),
Transform(DEF="World_TRANSFORM", rotation=((1.0,-0.0,-0.0,1.5708)), scale=((0.01,0.01,0.01)), children=[
Transform(DEF="World_001_TRANSFORM", rotation=((0.0,-0.0,-0.0,0.0)), children=[
Transform(DEF="lily_7_3_animate_TRANSFORM", rotation=((0.0,-0.0,-0.0,0.0)), children=[
Transform(DEF="CINEMA_4D_Editor_TRANSFORM", rotation=((0.03965,0.99809,0.04742,1.39469)), translation=((-2.3832,26.84083,170.68776)), children=[
Transform(DEF="CINEMA_4D_Editor_001_TRANSFORM", rotation=((-0.0,-1.0,0.0,3.14159)), translation=((1e-05,0.0,-0.0)), children=[
Viewpoint(DEF="CA_CINEMA_4D_Editor_001", fieldOfView=0.9272952079772949, orientation=((-0.027008524164557457,0.9700849652290344,-0.24125854671001434,0.0)), position=((-2.7477741241455078e-05,4.980713129043579e-06,-3.4847350889322115e-06)))])]),
Transform(DEF="node_t_Lily_RV7_Shape_TRANSFORM", rotation=((0.0,-0.0,-0.0,0.0)), translation=((0.0,0.0,-0.0)), children=[
Transform(DEF="humanoid_root_TRANSFORM", rotation=((-0.0,-1.0,-0.0,1.5708)), translation=((-0.0,-0.91969,0.0)), children=[
HAnimHumanoid(name="armature_humanoid_root", DEF="hanim_armature_humanoid_root", version="2.0", 
coord=
Coordinate(USE="coords_ME_mesh_t_Lily_RV7_Shape"))])])])]),
Transform(DEF="Environment_TRANSFORM", rotation=((0.0,-0.0,-0.0,0.0)), children=[
Transform(DEF="Sky_TRANSFORM", rotation=((1.0,-0.0,0.0,3.14159)), translation=((0.0,305.0,-0.0)), children=[
PointLight(DEF="LA_Sky", intensity=0.005714285586561475, location=((-9.59823986859581e-19,-3.051758176297881e-05,-9.094947017729282e-12)), radius=0.25)]),
Transform(DEF="DistantLight_TRANSFORM", rotation=((-0.99144,0.13053,-0.0,3.14159)), translation=((0.0,305.0,-0.0)), children=[
DirectionalLight(DEF="LA_DistantLight", ambientIntensity=0.07, direction=((5.329070518200751e-15,-3.552713678800501e-15,-1.0)), global_=True, intensity=0.005714285586561475)])])]),
Transform(DEF="SkinnedMeshes_TRANSFORM", rotation=((1.0,-0.0,-0.0,1.5708)), scale=((0.01,0.01,0.01)))])))
output = model.JSON()
json.loads(output)
