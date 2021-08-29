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
    meta(content='PortPalOdometer.x3d',name='title'),
    meta(content='Selcuk OZTURK',name='creator'),
    meta(content='Port Pal Odometer.',name='description'),
    meta(content='16 September 2002',name='created'),
    meta(content='12 January 2012',name='modified'),
    meta(content='https://savage.nps.edu/Savage/AircraftMiscellaneous/Zeppelin/PortPalOdometer.x3d',name='identifier'),
    meta(content='X3D-Edit 3.2, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    Transform(scale=(1,1,0.1),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0,1,0))),
        geometry=Sphere(),)]),
    Transform(DEF='SCALE',rotation=(0,0,1,-0.7),
      children=[
      Transform(scale=(1,1,0.1),translation=(0,0.8,0.1),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(1,0,0))),
          geometry=Cone(bottomRadius=0.1,height=0.2))]),
      Transform(scale=(1,1,0.1),translation=(0,0.3,0.1),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(1,0,0))),
          geometry=Cylinder(height=0.8,radius=0.04))]),
      TimeSensor(DEF='Clock',cycleInterval=0.2,loop=True),
      OrientationInterpolator(DEF='MovePath',key=[0,0.5,1],keyValue=[(0,0,1,0.1),(0,0,1,0),(0,0,1,-0.1)]),
      ROUTE(fromField='fraction_changed',fromNode='Clock',toField='set_fraction',toNode='MovePath'),
      ROUTE(fromField='value_changed',fromNode='MovePath',toField='set_rotation',toNode='SCALE')])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for PortPalOdometer.py")
