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

newModel=X3D(profile='Immersive',version='3.3',
  head=head(
    children=[
    meta(content='ProximitySensorOverlap.x3d',name='title'),
    meta(content='Example multiply-instanced ProximitySensor with overlapping regions',name='description'),
    meta(content='Leonard Daly and Don Brutzman',name='creator'),
    meta(content='15 July 2006',name='created'),
    meta(content='20 October 2019',name='modified'),
    meta(content='ProximitySensorMultiple.x3d',name='reference'),
    meta(content='ProximitySensorNoOverlap.x3d',name='reference'),
    meta(content='ProximitySensorSingle.x3d',name='reference'),
    meta(content='http://X3dGraphics.com',name='reference'),
    meta(content='https://www.web3d.org/x3d/content/examples/X3dResources.html',name='reference'),
    meta(content='Copyright Don Brutzman and Leonard Daly 2007',name='rights'),
    meta(content='X3D book, X3D graphics, X3D-Edit, http://www.x3dGraphics.com',name='subject'),
    meta(content='http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter12EnvironmentSensorSound/ProximitySensorOverlap.x3d',name='identifier'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../license.html',name='license')]),
  Scene=Scene(
    children=[
    WorldInfo(title='ProximitySensorOverlap.x3d'),
    Viewpoint(description='Book Viewpoint',orientation=(0,1,0,-0.06),position=(0.05,0,8.71)),
    Background(skyColor=[(1,1,1)]),
    Collision(enabled=False,
      children=[
      Transform(DEF='SensorGroup',
        children=[
        ProximitySensor(DEF='HereIAm1',size=(2,2,2)),
        Transform(DEF='SensorSize',
          children=[
          Shape(DEF='BoxOutline',
            appearance=Appearance(
              material=Material(emissiveColor=(0.8,0.8,0.8))),
            geometry=IndexedLineSet(coordIndex=[0,1,2,3,0,-1,4,5,6,7,4,-1,0,4,-1,1,5,-1,2,6,-1,3,7,-1],
              coord=Coordinate(point=[(1,1,1),(1,1,-1),(1,-1,-1),(1,-1,1),(-1,1,1),(-1,1,-1),(-1,-1,-1),(-1,-1,1)]))),
          Shape(DEF='BoxSurface',
            appearance=Appearance(
              material=Material(diffuseColor=(1,.5,0),transparency=.8)),
            geometry=Box(),)])])]),
    Collision(enabled=False,
      children=[
      Transform(rotation=(.707,.707,0,1),translation=(3,1,2),
        children=[
        ProximitySensor(USE='HereIAm1'),
        Transform(USE='SensorSize')])]),
    Collision(enabled=False,
      children=[
      Transform(translation=(-1,.5,-.5),
        children=[
        ProximitySensor(USE='HereIAm1'),
        Transform(USE='SensorSize')])]),
    Collision(enabled=False,
      children=[
      Transform(translation=(-2,-1,.5),
        children=[
        ProximitySensor(USE='HereIAm1'),
        Transform(USE='SensorSize')])]),
    Script(DEF='LocationReport',url=["ProximitySensorSingleScriptLocationReport.js","http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter12EnvironmentSensorSound/ProximitySensorSingleScriptLocationReport.js"],
      field=[
      field(accessType='inputOnly',name='position',type='SFVec3f'),
      field(accessType='inputOnly',name='orientation',type='SFRotation')]),
    ROUTE(fromField='position_changed',fromNode='HereIAm1',toField='position',toNode='LocationReport'),
    ROUTE(fromField='orientation_changed',fromNode='HereIAm1',toField='orientation',toNode='LocationReport')])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for ProximitySensorOverlap.py")
