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
    meta(content='Radar.x3d',name='title'),
    meta(content='1 September 2004',name='created'),
    meta(content='2 January 2019',name='modified'),
    meta(content='Tay Yeong Kiang Winston',name='creator'),
    meta(content='https://savage.nps.edu/Savage/ShipsMilitary/HovercraftSnr6Singapore/Radar.x3d',name='identifier'),
    meta(content='Creates the rotating radar element of the hovercraft',name='description'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    Group(
      children=[
      Transform(DEF='Radar',
        children=[
        Transform(rotation=(0,0,1,-0.1),translation=(0,0.5,0),
          children=[
          Shape(
            geometry=Box(size=(0.8,0.05,4)),
            appearance=Appearance(
              material=Material(ambientIntensity=0.0,diffuseColor=(0.0,0.0,0.0),shininess=0.056122,specularColor=(0.918367,0.910614,0.885116))))]),
        Transform(translation=(-0.4,0.6,0),
          children=[
          Shape(
            geometry=Box(size=(0.1,0.2,4)),
            appearance=Appearance(
              material=Material(ambientIntensity=0.0,diffuseColor=(0.0,0.0,0.0),shininess=0.056122,specularColor=(0.918367,0.910614,0.885116))))]),
        Shape(
          geometry=Extrusion(crossSection=[(1.00,0.00),(0.92,-0.38),(0.71,-0.71),(0.38,-0.92),(0.00,-1.00),(-0.38,-0.92),(-0.71,-0.71),(-0.92,-0.38),(-1.00,-0.00),(-0.92,0.38),(-0.71,0.71),(-0.38,0.92),(0.00,1.00),(0.38,0.92),(0.71,0.71),(0.92,0.38),(1.00,0.00)],scale=[(0.2,0.2),(0.15,0.15),(0.1,0.1)],spine=[(0,0,0),(0,0.25,0),(0,0.5,0)]),
          appearance=Appearance(
            material=Material(ambientIntensity=0.0,diffuseColor=(0.0,0.0,0.0),shininess=0.056122,specularColor=(0.918367,0.910614,0.885116))))]),
      TimeSensor(DEF='CLOCK',cycleInterval=4,loop=True),
      OrientationInterpolator(DEF='RadarPath',key=[0,0.5,1],keyValue=[(0.0,1.0,0.0,0.0),(0.0,1.0,0.0,3.14),(0.0,1.0,0.0,6.28)])]),
    ROUTE(fromField='fraction_changed',fromNode='CLOCK',toField='set_fraction',toNode='RadarPath'),
    ROUTE(fromField='value_changed',fromNode='RadarPath',toField='set_rotation',toNode='Radar')])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for Radar.py")
