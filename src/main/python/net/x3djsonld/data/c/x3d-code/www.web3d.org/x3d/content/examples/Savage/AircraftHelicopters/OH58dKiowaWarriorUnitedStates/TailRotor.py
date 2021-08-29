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
    meta(content='TailRotor.x3d',name='title'),
    meta(content='This file defines the tail rotor of an OH58D.',name='description'),
    meta(content='Del Beilstein',name='creator'),
    meta(content='21 September 2001',name='created'),
    meta(content='21 September 2001',name='modified'),
    meta(content='https://savage.nps.edu/Savage/AircraftHelicopters/OH58dKiowaWarriorUnitedStates/TailRotor.x3d',name='identifier'),
    meta(content='X3D-Edit 3.2, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    Transform(rotation=(1,0,0,1.57),scale=(.12,1,.12),
      children=[
      Transform(DEF='TAIL_ROTOR',
        children=[
        Shape(DEF='ROTOR_DISK_SHAPE',
          appearance=Appearance(DEF='SEMI_TRANSPARENT_WHITE',
            material=Material(diffuseColor=(1.0,1.0,1.0),transparency=0.5)),
          geometry=Cylinder(height=0.04,radius=5.5)),
        Transform(translation=(0,-.2,0),
          children=[
          Shape(
            geometry=Cylinder(DEF='TRDriveShaft',height=.4,radius=.15),
            appearance=Appearance(
              material=Material(diffuseColor=(.8,.8,.8))))])]),
      TimeSensor(DEF='TRCLOCK',cycleInterval=2.0,loop=True),
      OrientationInterpolator(DEF='TAIL_ROTOR_PATH',key=[0.0,1.0],keyValue=[(0.0,1.0,0.0,0.0),(0.0,1.0,0.0,3.142)])]),
    ROUTE(fromField='fraction_changed',fromNode='TRCLOCK',toField='set_fraction',toNode='TAIL_ROTOR_PATH'),
    ROUTE(fromField='value_changed',fromNode='TAIL_ROTOR_PATH',toField='set_rotation',toNode='TAIL_ROTOR')])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for TailRotor.py")
