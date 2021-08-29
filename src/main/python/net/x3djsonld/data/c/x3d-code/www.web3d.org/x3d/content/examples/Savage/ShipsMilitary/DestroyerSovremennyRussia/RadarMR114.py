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
    meta(content='RadarMR114.x3d',name='title'),
    meta(content='Kevin Anderson',name='creator'),
    meta(content='1 October 2000',name='created'),
    meta(content='10 November 2002',name='modified'),
    meta(content='MR114 Kite Screech Radar for use with Sovremennny and/or other Russian Warships. Designed to photos supplied by Janes Online.',name='description'),
    meta(content='https://savage.nps.edu/Savage/ShipsMilitary/DestroyerSovremennyRussia/RadarMR114.x3d',name='identifier'),
    meta(content='X3D-Edit 3.2, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    #  MR-114 Kite Screech Radar 
    children=[
    Group(DEF='Base',
      children=[
      Shape(
        geometry=Extrusion(ccw=False,creaseAngle=.7,crossSection=[(-.4,.4),(-.4,-.4),(.4,-.4),(.4,.4),(-.4,.4)],scale=[(1,1),(.4,.4)],spine=[(0,0,0),(0,1.8,0)]),
        appearance=Appearance(DEF='Gray',
          material=Material(diffuseColor=(.55,.53,.5)))),
      Transform(translation=(0,2,0),
        children=[
        Shape(
          appearance=Appearance(USE='Gray'),
          geometry=Cylinder(height=.6,radius=.12))])]),
    Group(DEF='Antenna',
      children=[
      Transform(rotation=(0,0,1,.35),translation=(1.7,1.4,0),
        children=[
        Transform(rotation=(1,0,0,1.57),scale=(.5,.9,1.3),translation=(0,1.5,0),
          children=[
          Shape(DEF='AntennaDish',
            geometry=Extrusion(beginCap=False,ccw=False,creaseAngle=.7,crossSection=[(0,-1),(-.095,-.92),(-.1775,-.71),(-.23,-.38),(-.25,0),(-.23,.38),(-.1775,.71),(-.095,.92),(0,1),(.095,.92),(.1775,.71),(.23,.38),(.25,0),(.23,-.38),(.1775,-.71),(.095,-.92),(0,-1)],endCap=False,scale=[(1,.02),(1,.38),(1,.71),(1,.92),(1,1),(1,.92),(1,.71),(1,.38),(1,.02)],solid=False,spine=[(0,-1,0),(-0.38,-0.92,0),(-0.71,-0.71,0),(-0.92,-0.38,0),(-1.00,0.00,0),(-0.92,0.38,0),(-0.71,0.71,0),(-0.38,0.92,0),(0,1,0)]),
            appearance=Appearance(USE='Gray')),
          Transform(rotation=(0,0,1,.87),translation=(.5,.5,0),
            children=[
            Shape(DEF='Bar',
              appearance=Appearance(USE='Gray'),
              geometry=Box(size=(.2,1.8,.05)))]),
          Transform(rotation=(0,0,1,-.87),translation=(.5,-.5,0),
            children=[
            Shape(USE='Bar')])]),
        Transform(DEF='FeedHorn',rotation=(0,0,1,1.57),translation=(.45,1.53,0),
          children=[
          Shape(
            appearance=Appearance(USE='Gray'),
            geometry=Cylinder(height=.25,radius=.17)),
          Transform(translation=(0,.125,0),
            children=[
            Shape(
              appearance=Appearance(USE='Gray'),
              geometry=Sphere(radius=.17))]),
          Transform(scale=(1,.5,1),translation=(0,-.125,0),
            children=[
            Shape(
              appearance=Appearance(USE='Gray'),
              geometry=Sphere(radius=.17))])]),
        Transform(translation=(-1.56,1.53,0),
          children=[
          Shape(
            appearance=Appearance(USE='Gray'),
            geometry=Box(size=(1.8,.9,.9))),
          Transform(rotation=(0,0,1,1.57),
            children=[
            Shape(
              appearance=Appearance(USE='Gray'),
              geometry=Cylinder(height=2.2,radius=.16)),
            Transform(translation=(0,1.1,0),
              children=[
              Shape(
                appearance=Appearance(USE='Gray'),
                geometry=Sphere(radius=.16))])])])])])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for RadarMR114.py")
