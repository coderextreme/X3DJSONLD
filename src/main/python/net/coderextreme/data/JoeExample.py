'''
x3d.py package 4.0.64.2 loaded, have fun with X3D Graphics!
'''
from x3d import *
print(
X3D(version="3.0", profile="Immersive", 
head=head(), 
Scene=Scene(children=[
Script(DEF="OpenVault", field=[field(name="openVault", type="SFTime", accessType="inputOnly"),
field(name="combinationEntered", type="SFBool", accessType="inputOnly"),
field(name="vaultUnlocked", type="SFTime", accessType="outputOnly"),
field(name="unlocked", type="SFBool", value=False, accessType="initializeOnly")
], 
#['', '', '', '', '      ecmascript:', '', '      function combinationEntered (value) {', '', '        unlocked = value;', '', '      }', '', '      function openVault(value) {', '', '      if (unlocked) vaultUnlocked = value;', '', '      }', '', '', '', '']
),
Shape(
appearance=
Appearance(
material=
Material(diffuseColor=((1,0,0)))), 
geometry=
Sphere()),
Sound(maxBack=1000, maxFront=1000, minBack=1000, minFront=1000, 
source=
AudioClip(DEF="Click", stopTime=1, description="clicking sound", url=["../resources/chandubabamusic1.wav"])),
TouchSensor(DEF="TS"),
ROUTE(fromNode="TS", fromField="isOver", toNode="OpenVault", toField="combinationEntered"),
ROUTE(fromNode="TS", fromField="touchTime", toNode="OpenVault", toField="openVault"),
ROUTE(fromNode="OpenVault", fromField="vaultUnlocked", toNode="Click", toField="startTime")]))
.XML())
