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

newModel=X3D(profile='Interactive',version='3.0',
  head=head(
    children=[
    meta(content='Door.x3d',name='title'),
    meta(content='A door which has an opening capability.',name='description'),
    meta(content='Selcuk OZTURK',name='creator'),
    meta(content='10 August 2002',name='created'),
    meta(content='12 October 2002',name='modified'),
    meta(content='https://savage.nps.edu/Savage/AircraftMiscellaneous/Zeppelin/Door.x3d',name='identifier'),
    meta(content='X3D-Edit 3.2, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    #  Rotating Cube, the Door35.jpg is dowloaded from 3DCafe.com for free. 
    children=[
    Viewpoint(description='Door',position=(0,0,15)),
    Group(
      children=[
      Transform(DEF='DOOR_TRANSFORM',center=(0.5,0,0),
        children=[
        Shape(
          geometry=Box(size=(1,2.5,0.1)),
          appearance=Appearance(
            texture=ImageTexture(url=["door35.jpg","https://savage.nps.edu/Savage/AircraftMiscellaneous/Zeppelin/door35.jpg"]))),
        Transform(translation=(-0.4,0,0.07),
          children=[
          Shape(
            geometry=Sphere(radius=0.1),
            appearance=Appearance(
              material=Material(diffuseColor=(0.6,0.4,0.3))))])]),
      TouchSensor(DEF='MyTouchSensor',description='touch to operate door'),
      TimeSensor(DEF='CLOCK',cycleInterval=10),
      OrientationInterpolator(DEF='CubePathInterpolator',key=[0.0,0.50,1.0],keyValue=[(0.0,1.0,0.0,0.0),(0.0,1.0,0.0,1.57),(0.0,1.0,0.0,0.0)])]),
    ROUTE(fromField='touchTime',fromNode='MyTouchSensor',toField='set_startTime',toNode='CLOCK'),
    ROUTE(fromField='fraction_changed',fromNode='CLOCK',toField='set_fraction',toNode='CubePathInterpolator'),
    ROUTE(fromField='value_changed',fromNode='CubePathInterpolator',toField='set_rotation',toNode='DOOR_TRANSFORM')])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for Door.py")
