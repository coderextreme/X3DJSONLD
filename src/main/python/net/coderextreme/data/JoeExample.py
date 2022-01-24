from x3d import *
print(
X3D(
  version="3.0", profile="Immersive", head=head(  children=[
      
          meta(name="filename", content="Scripting.x3d"),
          meta(name="translated", content="22 January 2022"),
          meta(name="generator", content="X3dToJson.xslt, https://www.web3d.org/x3d/stylesheets/X3dToJson.html"),
          meta(name="reference", content="X3D JSON encoding: https://www.web3d.org/wiki/index.php/X3D_JSON_Encoding")]), Scene=Scene(
    children=[
        Script(
          DEF="OpenVault", field=[
              field(name="openVault", type="SFTime", accessType="inputOnly"),
              field(name="combinationEntered", type="SFBool", accessType="inputOnly"),
              field(name="vaultUnlocked", type="SFTime", accessType="outputOnly"),
              field(name="unlocked", type="SFBool", value=False, accessType="initializeOnly")], #['', '', '', '', '      ecmascript:', '', '      function combinationEntered (value) {', '', '        unlocked = value;', '', '      }', '', '      function openVault(value) {', '', '      if (unlocked) vaultUnlocked = value;', '', '      }', '', '', '', '']
    
    ),
        Shape(
          appearance=Appearance(
              material=Material(
                  diffuseColor=(1,0,0))), geometry=Sphere(
              )),
        Sound(
          maxBack=1000, maxFront=1000, minBack=1000, minFront=1000, source(
            AudioClip(
              DEF="Click", stopTime=1, description="clicking sound", url=["../resources/chandubabamusic1.wav"]))),
        TouchSensor(
          DEF="TS"),
        ROUTE(
          fromNode="TS", fromField="isOver", toNode="OpenVault", toField="combinationEntered"),
        ROUTE(
          fromNode="TS", fromField="touchTime", toNode="OpenVault", toField="openVault"),
        ROUTE(
          fromNode="OpenVault", fromField="vaultUnlocked", toNode="Click", toField="startTime")]))
.XML())
