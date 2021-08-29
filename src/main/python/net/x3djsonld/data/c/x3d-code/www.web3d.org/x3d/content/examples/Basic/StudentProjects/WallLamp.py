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

newModel=X3D(profile='Immersive',version='3.0',
  head=head(
    children=[
    meta(content='WallLamp.x3d',name='title'),
    meta(content='A reusable wall lamp: prototype using an inverted cone with embedded PointLight.',name='description'),
    meta(content='Frederic Roussille',name='creator'),
    meta(content='1 April 2001',name='created'),
    meta(content='20 October 2019',name='modified'),
    meta(content='https://www.web3d.org/x3d/content/examples/Basic/StudentProjects/WallLamp.x3d',name='identifier'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../license.html',name='license')]),
  Scene=Scene(
    children=[
    WorldInfo(title='WallLamp.x3d'),
    ProtoDeclare(name='WallLamp',
      ProtoInterface=ProtoInterface(
        field=[
        field(accessType='inputOutput',name='lampColor',type='SFColor',value=(0,0,1)),
        field(accessType='inputOutput',name='lightColor',type='SFColor',value=(0.7,0.5,0)),
        field(accessType='inputOutput',name='lightIntensity',type='SFFloat',value=0.8),
        field(accessType='inputOutput',name='lightAttenuation',type='SFVec3f',value=(0,0.6,0)),
        field(accessType='inputOutput',name='radius',type='SFFloat',value=50),
        field(accessType='inputOutput',name='lightLocation',type='SFVec3f',value=(0,0,5))]),
      ProtoBody=ProtoBody(
        children=[
        Group(
          children=[
          Shape(
            appearance=Appearance(
              material=Material(DEF='lamp_color',
                IS=IS(
                  connect=[
                  connect(nodeField='diffuseColor',protoField='lampColor')]))),
            geometry=IndexedFaceSet(coordIndex=[0,9,1,-1,1,9,2,-1,2,9,3,-1,3,9,4,-1,4,9,5,-1,5,9,6,-1,6,9,7,-1,7,9,8,-1,9,0,8,-1],creaseAngle=1.57,solid=False,
              coord=Coordinate(point=[(-1,0,0),(-0.92,0,0.38),(-0.71,0,0.71),(-0.38,0,0.92),(0,0,1),(0.38,0,0.92),(0.71,0,0.71),(0.92,0,0.38),(1,0,0),(0,-3,0)]))),
          PointLight(DEF='lamp_light',
            IS=IS(
              connect=[
              connect(nodeField='color',protoField='lightColor'),
              connect(nodeField='intensity',protoField='lightIntensity'),
              connect(nodeField='attenuation',protoField='lightAttenuation'),
              connect(nodeField='radius',protoField='radius'),
              connect(nodeField='location',protoField='lightLocation')]))])])),
    ProtoInstance(name='WallLamp')])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for WallLamp.py")
