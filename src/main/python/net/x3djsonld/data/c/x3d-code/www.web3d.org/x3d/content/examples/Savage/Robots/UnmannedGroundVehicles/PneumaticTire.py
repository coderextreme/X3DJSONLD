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
    meta(content='PneumaticTire.x3d',name='title'),
    meta(content='High-pressure rugged tire used on small mobile robots such as ATRV.',name='description'),
    meta(content='Monty Williams',name='creator'),
    meta(content='22 September 2002',name='created'),
    meta(content='14 January 2014',name='modified'),
    meta(content='ATRV.x3d',name='reference'),
    meta(content='atrv_tech_2001.pdf',name='reference'),
    meta(content='http://www.irobot.com/_post/rwi/atrv_tech_2001.pdf',name='reference'),
    meta(content='http://www.irobot.com/rwi/p02.asp',name='reference'),
    meta(content='Mobile wheeled robot',name='subject'),
    meta(content='https://savage.nps.edu/Savage/Robots/UnmannedGroundVehicles/PneumaticTire.x3d',name='identifier'),
    meta(content='X3D-Edit 3.2, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    Transform(DEF='WheelTransform',
      children=[
      Group(DEF='Wheel',
        children=[
        Transform(rotation=(1,0,0,1.57),
          children=[
          Shape(
            appearance=Appearance(
              material=Material(diffuseColor=(0.2,0.2,0.2))),
            geometry=Extrusion(creaseAngle=1.57,crossSection=[(1.00,0.00),(0.92,-0.38),(0.71,-0.71),(0.38,-0.92),(0.00,-1.00),(-0.38,-0.92),(-0.71,-0.71),(-0.92,-0.38),(-1.00,-0.00),(-0.92,0.38),(-0.71,0.71),(-0.38,0.92),(0.00,1.00),(0.38,0.92),(0.71,0.71),(0.92,0.38),(1.00,0.00)],spine=[(2.00,0.0,0.00),(1.85,0.0,0.77),(1.41,0.0,1.41),(0.77,0.0,1.85),(0.00,0.0,2.00),(-0.77,0.0,1.85),(-1.41,0.0,1.41),(-1.85,0.0,0.77),(-2.00,0.0,0.00),(-1.85,0.0,-0.77),(-1.41,0.0,-1.41),(-0.77,0.0,-1.85),(0.00,0.0,-2.00),(0.77,0.0,-1.85),(1.41,0.0,-1.41),(1.85,0.0,-0.77),(2.00,0.0,0.00)])),
          Shape(
            appearance=Appearance(
              material=Material(ambientIntensity=0.4,diffuseColor=(0.15,0.15,0.15),shininess=0.05,specularColor=(0.7,0.7,0.7))),
            geometry=Cylinder(height=0.8,radius=1.1)),
          Transform(
            children=[
            Shape(
              appearance=Appearance(
                material=Material(diffuseColor=(0.2,0.2,0.2))),
              geometry=Cylinder(height=0.85,radius=0.2))]),
          Transform(translation=(0.4,0.0,0.4),
            children=[
            Shape(DEF='WheelHole',
              appearance=Appearance(
                material=Material(diffuseColor=(0.2,0.2,0.2))),
              geometry=Cylinder(height=0.85,radius=0.15))]),
          Transform(translation=(0.4,0.0,-0.4),
            children=[
            Shape(USE='WheelHole')]),
          Transform(translation=(-0.4,0.0,0.4),
            children=[
            Shape(USE='WheelHole')]),
          Transform(translation=(-0.4,0.0,-0.4),
            children=[
            Shape(USE='WheelHole')])]),
        TouchSensor(DEF='WheelTouchSensor',description='touch to spin'),
        TimeSensor(DEF='WheelClock',enabled=False,loop=True),
        OrientationInterpolator(DEF='WheelPathInterpolator',key=[0.0,0.5,1.0],keyValue=[(0,0,1,0.0),(0,0,1,-3.14),(0,0,1,-6.28)])])]),
    ROUTE(fromField='isOver',fromNode='WheelTouchSensor',toField='set_enabled',toNode='WheelClock'),
    ROUTE(fromField='fraction_changed',fromNode='WheelClock',toField='set_fraction',toNode='WheelPathInterpolator'),
    ROUTE(fromField='value_changed',fromNode='WheelPathInterpolator',toField='set_rotation',toNode='WheelTransform')])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for PneumaticTire.py")
