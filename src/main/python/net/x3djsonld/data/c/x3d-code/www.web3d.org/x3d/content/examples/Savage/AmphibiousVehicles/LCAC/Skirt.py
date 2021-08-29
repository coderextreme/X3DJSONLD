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
    component(level=3,name='Interpolation'),
    meta(content='Skirt.x3d',name='title'),
    meta(content='Animated Skirt for LCAC which animates using a Vector2FloatArray Interpolator - click geometry to activate animation loop.',name='description'),
    meta(content='Jeff Weekley, Don Brutzman and Jane Wu',name='creator'),
    meta(content='15 July 2001',name='created'),
    meta(content='3 September 2015',name='modified'),
    meta(content='http://www.web3d.org/technicalinfo/specifications/vrml97/part1/concepts.html#4.6.8',name='reference'),
    meta(content='http://www.web3d.org/technicalinfo/specifications/vrml97/part1/nodesRef.html#CoordinateInterpolator',name='reference'),
    meta(content='http://www.web3d.org/technicalinfo/specifications/vrml97/part1/nodesRef.html#Extrusion',name='reference'),
    meta(content='Skirt',name='subject'),
    meta(content='https://savage.nps.edu/Savage/AmphibiousVehicles/LCAC/Skirt.x3d',name='identifier'),
    meta(content='X3D-Edit 3.2, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    Background(skyColor=[(0.25,0.4,0.85)]),
    #  ====================================== 
    Viewpoint(description='Click to inflate/deflate skirt',orientation=(1,0,0,0.5),position=(15,-15,30)),
    TimeSensor(DEF='Clock',cycleInterval=5,enabled=False,loop=True),
    CoordinateInterpolator2D(DEF='InterpolateCrossSection',key=[0,0.4,0.5,0.9,1],keyValue=[(0,2),(-0.05,1.8),(-0.05,1.6),(-0.0625,1.4),(-0.1,1.2),(-0.125,1),(-0.2,0.8),(-0.25,0.6),(-0.2625,0.4),(-0.275,0.3),(-0.225,0.2),(-0.15,0.1),(-0.075,0.05),(0,0),(0,0),(0,2),(-0.2,2),(-1.2,1),(-1.2,0.9),(-1.3,0.85),(-1.4,0.8),(-1.5,0.7),(-1.55,0.5),(-1.6,0.4),(-1.55,0.2),(-1.475,0.1),(-1.39,0),(0,0),(0,0),(0,2),(-0.2,2),(-1.2,1),(-1.2,0.9),(-1.3,0.85),(-1.4,0.8),(-1.5,0.7),(-1.55,0.5),(-1.6,0.4),(-1.55,0.2),(-1.475,0.1),(-1.39,0),(0,0),(0,2),(-0.05,1.8),(-0.05,1.6),(-0.0625,1.4),(-0.1,1.2),(-0.125,1),(-0.2,0.8),(-0.25,0.6),(-0.2625,0.4),(-0.275,0.3),(-0.225,0.2),(-0.15,0.1),(-0.075,0.05),(0,0),(0,2),(-0.05,1.8),(-0.05,1.6),(-0.0625,1.4),(-0.1,1.2),(-0.125,1),(-0.2,0.8),(-0.25,0.6),(-0.2625,0.4),(-0.275,0.3),(-0.225,0.2),(-0.15,0.1),(-0.075,0.05),(0,0)]),
    ROUTE(fromField='fraction_changed',fromNode='Clock',toField='set_fraction',toNode='InterpolateCrossSection'),
    Group(
      children=[
      Shape(
        geometry=Extrusion(DEF='AnimatedCrossSectionExtrusion',convex=False,creaseAngle=3.14,crossSection=[(0,2),(-0.05,1.8),(-0.05,1.6),(-0.0625,1.4),(-0.1,1.2),(-0.125,1),(-0.2,0.8),(-0.25,0.6),(-0.2625,0.4),(-0.275,0.3),(-0.225,0.2),(-0.15,0.1),(-0.075,0.05),(0,0)],scale=[(1.66,1.66),(1.5,1.5),(1.25,1.25),(1,1),(1,1),(1,1),(1,1),(1,1),(1,1),(1,1),(1.25,1.25),(1.5,1.5),(1.66,1.66)],solid=False,spine=[(0,0,0),(0,6,0),(0,7,0),(1,7.225,0),(29.4,7.225,0),(30.1,7,0),(30.1,0,0),(30.1,-7,0),(29.4,-7.225,0),(1,-7.225,0),(0,-7,0),(0,-6,0),(0,0,0)]),
        appearance=Appearance(
          material=Material(diffuseColor=(0.05,0.075,0.15),shininess=0.125,specularColor=(0.4,0.45,0.45)))),
      TouchSensor(DEF='Toucher',description='touch skirt to inflate/deflate'),
      ROUTE(fromField='isActive',fromNode='Toucher',toField='enabled',toNode='Clock'),
      #  also reset clock to restart 
      ROUTE(fromField='touchTime',fromNode='Toucher',toField='startTime',toNode='Clock')]),
    ROUTE(fromField='value_changed',fromNode='InterpolateCrossSection',toField='set_crossSection',toNode='AnimatedCrossSectionExtrusion')])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for Skirt.py")
