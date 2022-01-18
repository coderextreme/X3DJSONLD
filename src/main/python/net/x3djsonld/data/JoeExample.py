###############################################
#
# Now available: developmental python x3d.py package on PyPi for import.
#   This approach greatly simplifies Python X3D deployment and use.
#   https://pypi.org/project/x3d
#
# Installation:
#       pip install x3d
# or
#       python -m pip install x3d
#
# Developer options for loading x3d package:
#
#    from x3d import *  # preferred approach, terser source that avoids x3d.* class prefixes
#
# or
#    import x3d         # traditional way to subclass x3d package, all classes require x3d.* prefix
#                       # but python source is very verbose, for example x3d.Material x3d.Shape etc.
#                       # X3dToPython.xslt stylesheet insertPackagePrefix=true supports this option.

from x3d import *

###############################################

newModel=X3D(version='3.0',profile='Immersive',
  head=head(
    children=[
    meta(name='filename',content='Scripting.x3d')]),
  Scene=Scene(
    children=[
    Script(DEF='OpenVault',
      field=[
      field(name='openVault',type='SFTime',accessType='inputOnly'),
      field(name='combinationEntered',type='SFBool',accessType='inputOnly'),
      field(name='vaultUnlocked',type='SFTime',accessType='outputOnly'),
      field(name='unlocked',type='SFBool',value=False,accessType='initializeOnly')],

      sourceCode="""
ecmascript:

      function combinationEntered (value) {

        unlocked = value;

      }

      function openVault(value) {

      if (unlocked) vaultUnlocked = value;

      }
"""),
    Shape(
      appearance=Appearance(
        material=Material(diffuseColor=(1,0,0))),
      geometry=Sphere(),),
    Sound(maxBack=1000,maxFront=1000,minBack=1000,minFront=1000,
      source=AudioClip(DEF='Click',stopTime=1,description='clicking sound',url=["../resources/chandubabamusic1.wav"])),
    TouchSensor(DEF='TS'),
    ROUTE(fromNode='TS',fromField='isOver',toNode='OpenVault',toField='combinationEntered'),
    ROUTE(fromNode='TS',fromField='touchTime',toNode='OpenVault',toField='openVault'),
    ROUTE(fromNode='OpenVault',fromField='vaultUnlocked',toNode='Click',toField='startTime')])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
# print('check newModel.XML() serialization...')
newModelXML= newModel.XML() # test export method XML() for exceptions during export
newModel.XMLvalidate()

try:
#   print('check newModel.VRML() serialization...')
    newModelVRML=newModel.VRML() # test export method VRML() for exceptions during export
    # print(prependLineNumbers(newModelVRML)) # debug
    print("Python-to-VRML export of VRML output successful")
except BaseException as err:
    print("*** Python-to-VRML export of VRML output failed:", err)
    if newModelVRML: # may have failed to generate
        print(prependLineNumbers(newModelVRML, err.lineno))

try:
#   print('check newModel.JSON() serialization...')
    newModelJSON=newModel.JSON() # test export method JSON() for exceptions during export
#   print(prependLineNumbers(newModelJSON)) # debug
    print("Python-to-JSON export of JSON output successful (still testing)")
except SyntaxError as err:
    print("*** Python-to-JSON export of JSON output failed:", err)
    if newModelJSON: # may have failed to generate
        print(prependLineNumbers(newModelJSON,err.lineno))

print("python x3d.py load and self-test complete")
