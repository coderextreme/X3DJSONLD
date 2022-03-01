####################################################################################################
#
# Now available: developmental python x3d.py package on PyPi for import.
#   This approach simplifies Python X3D deployment and use.
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
#
####################################################################################################

from x3d import *

newModel=X3D(profile='Immersive',version='4.0',
  head=head(
    children=[
    meta(name='title',content='sphereflowers.x3d'),
    meta(name='creator',content='John Carlson'),
    meta(name='description',content='5 or more prismatic flowers'),
    meta(name='generator',content='X3D-Edit, https://savage.nps.edu/X3D-Edit'),
    meta(name='identifier',content='https://coderextreme.net/X3DJSONLD/sphereflowers.x3d')]),
  Scene=Scene(
    children=[
    NavigationInfo(),
    Background(backUrl=["../resources/images/all_probes/stpeters_cross/stpeters_back.png","https://coderextreme.net/X3DJSONLD/src/main/resourcesimages/all_probes/stpeters_cross/stpeters_back.png"],bottomUrl=["../resources/images/all_probes/stpeters_cross/stpeters_bottom.png","https://coderextreme.net/X3DJSONLD/src/main/resourcesimages/all_probes/stpeters_cross/stpeters_bottom.png"],frontUrl=["../resources/images/all_probes/stpeters_cross/stpeters_front.png","https://coderextreme.net/X3DJSONLD/src/main/resourcesimages/all_probes/stpeters_cross/stpeters_front.png"],leftUrl=["../resources/images/all_probes/stpeters_cross/stpeters_left.png","https://coderextreme.net/X3DJSONLD/src/main/resourcesimages/all_probes/stpeters_cross/stpeters_left.png"],rightUrl=["../resources/images/all_probes/stpeters_cross/stpeters_right.png","https://coderextreme.net/X3DJSONLD/src/main/resourcesimages/all_probes/stpeters_cross/stpeters_right.png"],topUrl=["../resources/images/all_probes/stpeters_cross/stpeters_top.png","https://coderextreme.net/X3DJSONLD/images/src/main/resourcesall_probes/stpeters_cross/stpeters_top.png"]),
    Group(
      children=[
      ExternProtoDeclare(name='FlowerProto',url=["../personal/flowerproto.json#FlowerProto","https://coderextreme.net/X3DJSONLD/src/main/personal/flowerproto.json#FlowerProto","https://localhost:3000/src/main/personal/flowerproto.json#FlowerProto"],
        field=[
        field(accessType='inputOutput',name='vertex',type='MFString'),
        field(accessType='inputOutput',name='fragment',type='MFString')]),
      ProtoDeclare(name='flower',
        ProtoBody=ProtoBody(
          children=[
          Group(
            children=[
            ProtoInstance(name='FlowerProto',
              fieldValue=[
              fieldValue(name='vertex',value=["../shaders/x_ite_flowers_chromatic.vs"]),
              fieldValue(name='fragment',value=["../shaders/x_ite.fs"])])])])),
      ProtoInstance(name='flower'),
      ProtoInstance(name='flower'),
      ProtoInstance(name='flower'),
      ProtoInstance(name='flower'),
      ProtoInstance(name='flower'),
      ProtoInstance(name='flower'),
      TimeSensor(DEF='SongTime',loop=True),
      Sound(maxBack=100,maxFront=100,minBack=20,minFront=20,
        source=AudioClip(DEF='AudioClip',description='Chandubabamusic #1',url=["../resources/chandubabamusic1.wav"])),
      ROUTE(fromField='cycleTime',fromNode='SongTime',toField='startTime',toNode='AudioClip')])])
) # X3D model complete

####################################################################################################
# Self-test diagnostics
####################################################################################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
# print('check newModel.XML() serialization...')
newModelXML= newModel.XML() # test export method XML() for exceptions during export
newModel.XMLvalidate()
# print(newModelXML) # diagnostic

try:
#   print('check newModel.VRML() serialization...')
    newModelVRML=newModel.VRML() # test export method VRML() for exceptions during export
    # print(prependLineNumbers(newModelVRML)) # debug
    print("Python-to-VRML export of VRML output successful")
except Exception as err: # usually BaseException
    # https://stackoverflow.com/questions/18176602/how-to-get-the-name-of-an-exception-that-was-caught-in-python
    print("*** Python-to-VRML export of VRML output failed:", type(err).__name__, err)
    if newModelVRML: # may have failed to generate
        print(prependLineNumbers(newModelVRML, err.lineno))

try:
#   print('check newModel.JSON() serialization...')
    newModelJSON=newModel.JSON() # test export method JSON() for exceptions during export
#   print(prependLineNumbers(newModelJSON)) # debug
    print("Python-to-JSON export of JSON output successful (under development)")
except Exception as err: # usually SyntaxError
    print("*** Python-to-JSON export of JSON output failed:", type(err).__name__, err)
    if newModelJSON: # may have failed to generate
        print(prependLineNumbers(newModelJSON,err.lineno))

print("python x3d.py load and self-test complete for sphereflowers.py")
