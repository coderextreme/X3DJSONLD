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
    meta(content='Rotor.x3d',name='title'),
    meta(content='1 September 2004',name='created'),
    meta(content='2 January 2019',name='modified'),
    meta(content='Tay Yeong Kiang Winston',name='creator'),
    meta(content='https://savage.nps.edu/Savage/ShipsMilitary/HovercraftSnr6Singapore/Rotor.x3d',name='identifier'),
    meta(content='Creates the motor rotor with touch sensor for rotating the blades.',name='description'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    Viewpoint(description='Rotor Side View',orientation=(0,1,0,1.57),position=(10,0,0)),
    Group(
      children=[
      Transform(DEF='ROTOR_TRANSFORM',
        children=[
        Group(DEF='Rotor',
          children=[
          Shape(
            geometry=Extrusion(crossSection=[(1.00,0.00),(0.92,-0.38),(0.71,-0.71),(0.38,-0.92),(0.00,-1.00),(-0.38,-0.92),(-0.71,-0.71),(-0.92,-0.38),(-1.00,-0.00),(-0.92,0.38),(-0.71,0.71),(-0.38,0.92),(0.00,1.00),(0.38,0.92),(0.71,0.71),(0.92,0.38),(1.00,0.00)],scale=[(0.2,0.2),(0.15,0.15),(0.1,0.1)],spine=[(0,0,0.5),(0,0,0.1),(0,0,0)]),
            appearance=Appearance(
              material=Material(ambientIntensity=0.0,diffuseColor=(0.0,0.0,0.0),shininess=0.056122,specularColor=(0.918367,0.910614,0.885116))))]),
        Group(DEF='Blade',
          children=[
          Shape(
            geometry=Extrusion(crossSection=[(1.00,0.00),(0.92,-0.38),(0.71,-0.71),(0.38,-0.92),(0.00,-1.00),(-0.38,-0.92),(-0.71,-0.71),(-0.92,-0.38),(-1.00,-0.00),(-0.92,0.38),(-0.71,0.71),(-0.38,0.92),(0.00,1.00),(0.38,0.92),(0.71,0.71),(0.92,0.38),(1.00,0.00)],orientation=[(0,1,0,0),(0,1,0,1.2),(0,1,0,1.5),(0,1,0,1.7)],scale=[(0.05,0.1),(0.05,0.15),(0.05,0.15),(0.05,0.15)],spine=[(0,0,0.1),(0,0.6,0.1),(0,2,0.1),(0,2.5,0.1)]),
            appearance=Appearance(
              material=Material(ambientIntensity=0.0,diffuseColor=(0.0,0.0,0.0),shininess=0.056122,specularColor=(0.918367,0.910614,0.885116))))]),
        Transform(rotation=(0,0,1,1.57),
          children=[
          Group(USE='Blade')]),
        Transform(rotation=(0,0,1,-1.57),
          children=[
          Group(USE='Blade')]),
        Transform(rotation=(0,0,1,3.14),
          children=[
          Group(USE='Blade')])]),
      TouchSensor(DEF='MyTouchSensor',description='click to start'),
      TimeSensor(DEF='CLOCK',cycleInterval=4),
      OrientationInterpolator(DEF='RotorPathInterpolator',key=[0,0.5,1],keyValue=[(0.0,0.0,1.0,0.0),(0.0,0.0,1.0,3.14),(0.0,0.0,1.0,6.28)])]),
    ROUTE(fromField='touchTime',fromNode='MyTouchSensor',toField='set_startTime',toNode='CLOCK'),
    ROUTE(fromField='fraction_changed',fromNode='CLOCK',toField='set_fraction',toNode='RotorPathInterpolator'),
    ROUTE(fromField='value_changed',fromNode='RotorPathInterpolator',toField='set_rotation',toNode='ROTOR_TRANSFORM')])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for Rotor.py")
