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

newModel=X3D(profile='Interchange',version='3.0',
  head=head(
    children=[
    component(name='Networking',level=2),
    meta(name='generator',content='view3dscene, https://castle-engine.io/view3dscene.php'),
    meta(name='source',content='t1.wrl')]),
  Scene=Scene(
    children=[
    NavigationInfo(type='"EXAMINE" "FLY" "WALK"',speed=3,avatarSize=[200,200,120]),
    WorldInfo(title='Arts Mapper'),
    Viewpoint(description='looking North',position=(0,60,110),orientation=(1,0,0,-0.699999988079071),fieldOfView=0.785398125648499),
    Viewpoint(description='looking East',position=(-140,30,0),orientation=(0,0.400000005960464,0,-1.39999997615814),fieldOfView=0.785398125648499),
    Viewpoint(description='Overhead',position=(0,150,0),orientation=(1,0,0,-1.57000005245209),fieldOfView=0.785398125648499),
    ProtoDeclare(name='org',
      ProtoInterface=ProtoInterface(
        field=[
        field(accessType='initializeOnly',type='SFVec3f',name='posi',value=(0,0,0)),
        field(accessType='initializeOnly',type='SFColor',name='col',value=(0,0,0))]),
      ProtoBody=ProtoBody(
        children=[
        Transform(
          children=[
          Shape(
            appearance=Appearance(
              material=Material(transparency=0.400000005960464,
                IS=IS(
                  connect=[
                  connect(nodeField='emissiveColor',protoField='col')]))),
            geometry=Sphere(radius=1.10000002384186))],
          IS=IS(
            connect=[
            connect(nodeField='translation',protoField='posi')]))])),
    ProtoDeclare(name='r',
      ProtoInterface=ProtoInterface(
        field=[
        field(accessType='initializeOnly',type='SFVec3f',name='pos',value=(0,0,0))]),
      ProtoBody=ProtoBody(
        children=[
        ProtoInstance(name='org',
          fieldValue=[
          fieldValue(name='col',value=(0,0.300000011920929,1)),
          fieldValue(name='posi')],
          IS=IS(
            connect=[
            connect(nodeField='posi',protoField='pos')]))])),
    Anchor(url=["javascript:window.open(\'./data/574.html\',\'details\',\'height=550,width=400,top=50,left=50,menubar=no,status=no,toolbar=no,titlebar=no\');"],description='High Peak Community Arts',
      children=[
      ProtoInstance(name='r',
        fieldValue=[
        fieldValue(name='pos',value=(400,0.100000001490116,-385))])])])
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
