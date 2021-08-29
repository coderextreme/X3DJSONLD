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
    meta(content='Mast.x3d',name='title'),
    meta(content='Ozan Apaydin',name='creator'),
    meta(content='7 September 2001',name='created'),
    meta(content='2 January 2019',name='modified'),
    meta(content='Mast of a Yavuz Class Frigate',name='description'),
    meta(content='https://savage.nps.edu/Savage/ShipsMilitary/DestroyerSovremennyRussia/AntennaMast.x3d',name='reference'),
    meta(content='https://savage.nps.edu/Savage/ShipsMilitary/FrigateYavuzTurkey/Mast.x3d',name='identifier'),
    meta(content='X3D-Edit 3.2, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    Viewpoint(description='Antenna Mast',orientation=(0,1,0,0.79),position=(18,7,18)),
    Background(skyColor=[(0.8,0.8,1)]),
    #  Radar Mast Structure 
    Group(DEF='HalfMastStructure',
      children=[
      Transform(rotation=(-1,0,0,0.16),translation=(0,0,2),
        children=[
        Group(DEF='FrontSide',
          children=[
          Transform(rotation=(0,0,1,1.57),translation=(0,.05,0),
            children=[
            Shape(
              geometry=Cylinder(height=4,radius=.1),
              appearance=Appearance(DEF='Black',
                material=Material(diffuseColor=(0.2,0.2,0.2))))]),
          Transform(rotation=(0,0,1,-.1644),translation=(-1,6,0),
            children=[
            Shape(
              geometry=Cylinder(height=12.166,radius=.1),
              appearance=Appearance(USE='Black'))]),
          Transform(rotation=(0,0,1,.1644),translation=(1,6,0),
            children=[
            Shape(
              geometry=Cylinder(height=12.166,radius=.1),
              appearance=Appearance(USE='Black'))]),
          Transform(rotation=(0,0,1,.8614),translation=(.2,1.5,0),
            children=[
            Shape(
              geometry=Cylinder(height=4.61,radius=.1),
              appearance=Appearance(USE='Black'))]),
          Transform(rotation=(0,0,1,-.8614),translation=(-.2,1.5,0),
            children=[
            Shape(
              geometry=Cylinder(height=4.61,radius=.1),
              appearance=Appearance(USE='Black'))]),
          Transform(rotation=(0,0,1,.6939),translation=(.2,4.5,0),
            children=[
            Shape(
              geometry=Cylinder(height=3.905,radius=.1),
              appearance=Appearance(USE='Black'))]),
          Transform(rotation=(0,0,1,-.6939),translation=(-.2,4.5,0),
            children=[
            Shape(
              geometry=Cylinder(height=3.905,radius=.1),
              appearance=Appearance(USE='Black'))]),
          Transform(rotation=(0,0,1,.4629),translation=(.25,7.5,0),
            children=[
            Shape(
              geometry=Cylinder(height=3.354,radius=.1),
              appearance=Appearance(USE='Black'))]),
          Transform(rotation=(0,0,1,-.4629),translation=(-.25,7.5,0),
            children=[
            Shape(
              geometry=Cylinder(height=3.354,radius=.1),
              appearance=Appearance(USE='Black'))]),
          Transform(rotation=(0,0,1,1.57),translation=(0,9,0),
            children=[
            Shape(
              geometry=Cylinder(height=1,radius=.1),
              appearance=Appearance(USE='Black'))]),
          Transform(rotation=(0,0,1,1.57),translation=(0,6,0),
            children=[
            Shape(
              geometry=Cylinder(radius=.1),
              appearance=Appearance(USE='Black'))]),
          Transform(rotation=(0,0,1,1.57),translation=(0,3,0),
            children=[
            Shape(
              geometry=Cylinder(height=3,radius=.1),
              appearance=Appearance(USE='Black'))]),
          Transform(translation=(0,1.67,0),
            children=[
            Shape(
              appearance=Appearance(USE='Black'),
              geometry=Box(size=(.45,.45,.17)))]),
          Transform(translation=(0,4.78,0),
            children=[
            Shape(
              appearance=Appearance(USE='Black'),
              geometry=Box(size=(.45,.45,.17)))]),
          Transform(translation=(0,8,0),
            children=[
            Shape(
              appearance=Appearance(USE='Black'),
              geometry=Box(size=(.45,.45,.17)))])])]),
      Transform(rotation=(1,0,0,0.16),translation=(0,0,-2),
        children=[
        Group(USE='FrontSide')])]),
    Transform(rotation=(0,1,0,1.57),
      children=[
      Group(USE='HalfMastStructure')]),
    Transform(translation=(0,13,0),
      children=[
      Shape(
        appearance=Appearance(USE='Black'),
        geometry=Cylinder(height=2.5,radius=.13))]),
    Transform(translation=(0,12.5,0),
      children=[
      Shape(
        appearance=Appearance(USE='Black'),
        geometry=Cylinder(height=2.5,radius=.25))]),
    Transform(DEF='NavigationAntennaTr',rotation=(0,1,0,1.57),translation=(0,14.4,0),
      children=[
      Shape(
        appearance=Appearance(USE='Black'),
        geometry=Box(size=(3.2,.5,.7))),
      OrientationInterpolator(DEF='RotateAntenna',key=[0,1,2],keyValue=[(0,1,0,0),(0,1,0,3.14),(0,1,0,6.28)]),
      TimeSensor(DEF='AntennaTimer',cycleInterval=3.0,loop=True)]),
    Transform(rotation=(0,0,1,1.57),translation=(.7,11.8,0),
      children=[
      Shape(
        appearance=Appearance(USE='Black'),
        geometry=Cylinder(height=1.5,radius=.1))]),
    Transform(translation=(1.395,12.095,0),
      children=[
      Shape(
        appearance=Appearance(USE='Black'),
        geometry=Cylinder(height=.6,radius=.1))]),
    Transform(translation=(1.395,12.59,0),
      children=[
      Shape(
        appearance=Appearance(USE='Black'),
        geometry=Cylinder(height=.5,radius=.5))]),
    ROUTE(fromField='fraction_changed',fromNode='AntennaTimer',toField='set_fraction',toNode='RotateAntenna'),
    ROUTE(fromField='value_changed',fromNode='RotateAntenna',toField='set_rotation',toNode='NavigationAntennaTr'),
    Transform(translation=(-2.1,14.5,0),
      children=[
      Shape(
        appearance=Appearance(USE='Black'),
        geometry=Cylinder(height=3.2,radius=.125))]),
    Transform(rotation=(0,0,1,1.57),translation=(-1.2,13,0),
      children=[
      Shape(
        appearance=Appearance(USE='Black'),
        geometry=Cylinder(radius=.125))])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for Mast.py")
