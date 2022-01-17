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

newModel=X3D(profile='Full',version='4.0',
  head=head(
    children=[
    meta(content='InlineSoundSource.x3d',name='title'),
    meta(content='This demo is the same with the Single Audio Demo, with the difference that it uses the Inline grouping node. Namely, the scene is an X3D file and all nodes are loaded by Inline node via the "url" of X3D file.',name='description'),
    meta(content='This work presents an innovative solution of the spatial sound in X3DOM framework, that based on a combinational methodology. Specifically, we suggested the enrichment of X3DOM with spatial sound features, using both the X3D sound nodes and the structure of Web Audio API.',name='info'),
    meta(content='Efi Lakka, Athanasios Malamos, Dick Puk, Don Brutzman',name='creator'),
    meta(content='28 October 2020',name='created'),
    meta(content='4 August 2021',name='modified'),
    meta(content='CHANGELOG.txt',name='reference'),
    meta(content='credit for audio files',name='TODO'),
    meta(content='https://medialab.hmu.gr/minipages/x3domAudio',name='reference'),
    meta(content='https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/InlineSoundSource.x3d',name='identifier'),
    meta(content='X3D-Edit 4.0, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../license.html',name='license')]),
  Scene=Scene(
    children=[
    WorldInfo(title='InlineSoundSource.x3d'),
    NavigationInfo(DEF='NAV'),
    Background(backUrl=["images/generic/BK1.png","https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/images/generic/BK1.png"],bottomUrl=["images/generic/DN1.png","https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/images/generic/DN1.png"],frontUrl=["images/generic/FR1.png","https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/images/generic/FR1.png"],leftUrl=["images/generic/LF1.png","https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/images/generic/LF1.png"],rightUrl=["images/generic/RT1.png","https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/images/generic/RT1.png"],topUrl=["images/generic/UP1.png","https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/images/generic/UP1.png"]),
    Viewpoint(DEF='Camera001',description='Camera001',farDistance=0,nearDistance=1.000000,orientation=(1.000000,0.000000,-0.000000,-0.523599),position=(0.000000,2000.000000,3500.000000)),
    Transform(DEF='Floor',translation=(1.241,0.000,0.358),
      children=[
      Shape(
        appearance=Appearance(DEF='WireColor',
          material=Material(diffuseColor=(0.122,0.114,0.125))),
        geometry=IndexedFaceSet(DEF='Box001-GEOMETRY',coordIndex=[0,1,2,-1,3,4,5,-1,6,7,8,-1,9,10,11,-1,12,13,14,-1,15,16,17,-1,18,19,20,-1,21,22,23,-1,24,25,26,-1,27,28,29,-1,30,31,32,-1,33,34,35,-1],solid=False,
          coord=Coordinate(point=[(-1000.000000,0.000000,1000.000000),(-1000.000000,0.000000,-1000.000000),(1000.000000,0.000000,-1000.000000),(1000.000000,0.000000,-1000.000000),(1000.000000,0.000000,1000.000000),(-1000.000000,0.000000,1000.000000),(-1000.000000,8.031588,1000.000000),(1000.000000,8.031588,1000.000000),(1000.000000,8.031588,-1000.000000),(1000.000000,8.031588,-1000.000000),(-1000.000000,8.031588,-1000.000000),(-1000.000000,8.031588,1000.000000),(-1000.000000,0.000000,1000.000000),(1000.000000,0.000000,1000.000000),(1000.000000,8.031588,1000.000000),(1000.000000,8.031588,1000.000000),(-1000.000000,8.031588,1000.000000),(-1000.000000,0.000000,1000.000000),(1000.000000,0.000000,1000.000000),(1000.000000,0.000000,-1000.000000),(1000.000000,8.031588,-1000.000000),(1000.000000,8.031588,-1000.000000),(1000.000000,8.031588,1000.000000),(1000.000000,0.000000,1000.000000),(1000.000000,0.000000,-1000.000000),(-1000.000000,0.000000,-1000.000000),(-1000.000000,8.031588,-1000.000000),(-1000.000000,8.031588,-1000.000000),(1000.000000,8.031588,-1000.000000),(1000.000000,0.000000,-1000.000000),(-1000.000000,0.000000,-1000.000000),(-1000.000000,0.000000,1000.000000),(-1000.000000,8.031588,1000.000000),(-1000.000000,8.031588,1000.000000),(-1000.000000,8.031588,-1000.000000),(-1000.000000,0.000000,-1000.000000)]),
          normal=Normal(vector=[(0.000000,-1.000000,0.000000),(0.000000,-1.000000,0.000000),(0.000000,-1.000000,0.000000),(0.000000,-1.000000,0.000000),(0.000000,-1.000000,0.000000),(0.000000,-1.000000,0.000000),(0.000000,1.000000,0.000000),(0.000000,1.000000,0.000000),(0.000000,1.000000,0.000000),(0.000000,1.000000,0.000000),(0.000000,1.000000,0.000000),(0.000000,1.000000,0.000000),(0.000000,0.000000,1.000000),(0.000000,0.000000,1.000000),(0.000000,0.000000,1.000000),(0.000000,0.000000,1.000000),(0.000000,0.000000,1.000000),(0.000000,0.000000,1.000000),(1.000000,0.000000,0.000000),(1.000000,0.000000,0.000000),(1.000000,0.000000,0.000000),(1.000000,0.000000,0.000000),(1.000000,0.000000,0.000000),(1.000000,0.000000,0.000000),(0.000000,0.000000,-1.000000),(0.000000,0.000000,-1.000000),(0.000000,0.000000,-1.000000),(0.000000,0.000000,-1.000000),(0.000000,0.000000,-1.000000),(0.000000,0.000000,-1.000000),(-1.000000,0.000000,0.000000),(-1.000000,0.000000,0.000000),(-1.000000,0.000000,0.000000),(-1.000000,0.000000,0.000000),(-1.000000,0.000000,0.000000),(-1.000000,0.000000,0.000000)])))]),
    Transform(DEF='InlineScene',
      children=[
      Inline(DEF='inline',url=["x3d/example1.x3d","https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/x3d/example1.x3d","x3d/example1.wrl","https://x3dgraphics.com/examples/X3dForAdvancedModeling/AudioSpatialSound/x3d/example1.wrl"])])])
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

print("python x3d.py load and self-test complete for InlineSoundSource.py")
