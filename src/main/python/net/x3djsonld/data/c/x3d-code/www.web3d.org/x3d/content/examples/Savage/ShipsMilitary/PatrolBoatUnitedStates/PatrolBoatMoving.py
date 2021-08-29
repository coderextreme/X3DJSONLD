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

newModel=X3D(profile='Immersive',version='3.1',
  head=head(
    children=[
    component(level=3,name='Interpolation'),
    meta(content='PatrolBoatMoving.x3d',name='title'),
    meta(content='A US Navy security patrol boat',name='description'),
    meta(content='Planet9 Studios http://www.planet9.com',name='creator'),
    meta(content='1 August 2007',name='created'),
    meta(content='2 January 2019',name='modified'),
    meta(content='PatrolBoatIdle.x3d',name='reference'),
    meta(content='X3D-Edit 3.2, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='https://savage.nps.edu/Savage/ShipsMilitary/PatrolBoatUnitedStates/PatrolBoatMoving.x3d',name='identifier'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    Background(groundAngle=[1.4,1.57],groundColor=[(0.863,0.549,0.235),(0.863,0.549,0.235),(0.627,0.275,0.157)],skyAngle=[1.1,1.4,1.57],skyColor=[(0.333,0.118,0.118),(0.333,0.118,0.118),(0.706,0.392,0.235),(0.941,0.863,0.392)]),
    #  Transform rotation='0 1 0 -1.57075' scale='0.013022 0.0180494 0.0180494' translation='-0.00785065 0.0517558 9.84711' 
    Transform(rotation=(0,1,0,-1.57075),scale=(0.013022,0.0180494,0.0180494),translation=(-9.84711,0.2,0.0),
      children=[
      Shape(
        appearance=Appearance(
          textureTransform=TextureTransform(DEF='WAKE_TT'),
          texture=ImageTexture(url=["wake.png","https://savage.nps.edu/Savage/ShipsMilitary/PatrolBoatUnitedStates/wake.png"])),
        geometry=IndexedFaceSet(coordIndex=[5,0,6,-1,1,6,0,-1,6,1,7,-1,2,7,1,-1,7,2,8,-1,3,8,2,-1,8,3,9,-1,4,9,3,-1,10,5,11,-1,6,11,5,-1,11,6,12,-1,7,12,6,-1,12,7,13,-1,8,13,7,-1,13,8,14,-1,9,14,8,-1,15,10,16,-1,11,16,10,-1,16,11,17,-1,12,17,11,-1,17,12,18,-1,13,18,12,-1,18,13,19,-1,14,19,13,-1,20,15,21,-1,16,21,15,-1,21,16,22,-1,17,22,16,-1,22,17,23,-1,18,23,17,-1,23,18,24,-1,19,24,18,-1],texCoordIndex=[5,0,6,-1,1,6,0,-1,6,1,7,-1,2,7,1,-1,7,2,8,-1,3,8,2,-1,8,3,9,-1,4,9,3,-1,10,5,11,-1,6,11,5,-1,11,6,12,-1,7,12,6,-1,12,7,13,-1,8,13,7,-1,13,8,14,-1,9,14,8,-1,15,10,16,-1,11,16,10,-1,16,11,17,-1,12,17,11,-1,17,12,18,-1,13,18,12,-1,18,13,19,-1,14,19,13,-1,20,15,21,-1,16,21,15,-1,21,16,22,-1,17,22,16,-1,22,17,23,-1,18,23,17,-1,23,18,24,-1,19,24,18,-1],
          coord=Coordinate(point=[(-123.635,0.0,380.689),(-61.8176,0.0,380.689),(0.0,0.0,380.689),(61.8176,0.0,380.689),(123.635,0.0,380.689),(-123.635,0.0,190.344),(-61.8176,0.0,190.344),(0.0,0.0,190.344),(61.8176,0.0,190.344),(123.635,0.0,190.344),(-123.635,0.0,0.0),(-61.8176,0.0,0.0),(0.0,0.0,0.0),(61.8176,0.0,0.0),(123.635,0.0,0.0),(-123.635,0.0,-190.344),(-61.8176,0.0,-190.344),(0.0,0.0,-190.344),(61.8176,0.0,-190.344),(123.635,0.0,-190.344),(-123.635,0.0,-380.689),(-61.8176,0.0,-380.689),(0.0,0.0,-380.689),(61.8176,0.0,-380.689),(123.635,0.0,-380.689)]),
          texCoord=TextureCoordinate(point=[(4.99517E-4,4.99606E-4),(0.25025,4.99576E-4),(0.5,4.99576E-4),(0.74975,4.99547E-4),(0.9995,4.99517E-4),(4.99696E-4,0.25025),(0.25025,0.25025),(0.5,0.25025),(0.74975,0.25025),(0.9995,0.25025),(4.99874E-4,0.5),(0.25025,0.5),(0.5,0.5),(0.74975,0.5),(0.9995,0.5),(5.00053E-4,0.74975),(0.25025,0.74975),(0.5,0.74975),(0.74975,0.74975),(0.9995,0.74975),(5.00232E-4,0.999501),(0.25025,0.9995),(0.5,0.9995),(0.74975,0.9995),(0.999501,0.9995)])))]),
    TimeSensor(DEF='WAKE_TIME',cycleInterval=0.25,loop=True),
    PositionInterpolator2D(DEF='WAKE_INTERP',key=[0,1],keyValue=[(0,0),(0,0.02)]),
    ROUTE(fromField='fraction_changed',fromNode='WAKE_TIME',toField='set_fraction',toNode='WAKE_INTERP'),
    ROUTE(fromField='value_changed',fromNode='WAKE_INTERP',toField='set_translation',toNode='WAKE_TT'),
    Inline(url=["PatrolBoatIdle.x3d","PatrolBoatIdle.wrl","https://savage.nps.edu/Savage/ShipsMilitary/PatrolBoatUnitedStates/PatrolBoatIdle.x3d","https://savage.nps.edu/Savage/ShipsMilitary/PatrolBoatUnitedStates/PatrolBoatIdle.wrl"])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for PatrolBoatMoving.py")
