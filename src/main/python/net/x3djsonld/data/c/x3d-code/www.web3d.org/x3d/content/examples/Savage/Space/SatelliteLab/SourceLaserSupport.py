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
    meta(content='SourceLaserSupport.x3d',name='title'),
    meta(content='Support for the source Laser.',name='description'),
    meta(content='Brian Kibel',name='creator'),
    meta(content='18 September 2006',name='created'),
    meta(content='14 January 2014',name='modified'),
    meta(content='https://savage.nps.edu/Savage/Space/SatelliteLab/SourceLaserSupport.x3d',name='identifier'),
    meta(content='X3D-Edit 3.2, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    Group(DEF='LaserSupport',
      children=[
      Transform(DEF='Leg1',rotation=(-1,0,1,.757),translation=(1.24,2.25,1.65),
        children=[
        Transform(scale=(.1,2.5,.1),
          children=[
          Shape(DEF='SupportBeam',
            geometry=Cylinder(),
            appearance=Appearance(
              material=Material(diffuseColor=(.7,.7,.73))))])]),
      Transform(DEF='Leg2',rotation=(1,0,1,-.757),translation=(-1.24,2.25,1.65),
        children=[
        Transform(scale=(.1,2.5,.1),
          children=[
          Shape(USE='SupportBeam')])]),
      Transform(DEF='Leg3',rotation=(1,0,0,.757),scale=(.1,2.5,.1),translation=(0,2.25,-1.25),
        children=[
        Shape(USE='SupportBeam')]),
      Transform(scale=(.3,.2,.3),translation=(2.5,.3,2.9),
        children=[
        Shape(USE='SupportBeam')]),
      Transform(scale=(.3,.2,.3),translation=(0,.3,-2.95),
        children=[
        Shape(USE='SupportBeam')]),
      Transform(rotation=(0,0,1,1.5707),scale=(.2,.1,.2),translation=(2.5,0,2.9),
        children=[
        Shape(DEF='Wheel',
          geometry=Cylinder(),
          appearance=Appearance(
            material=Material(diffuseColor=(.1,.1,.1))))]),
      Transform(rotation=(0,0,1,1.5707),scale=(.2,.1,.2),translation=(0,0,-2.95),
        children=[
        Shape(USE='Wheel')]),
      Transform(scale=(.3,.2,.3),translation=(-2.5,.3,2.9),
        children=[
        Shape(USE='SupportBeam')]),
      Transform(rotation=(0,0,1,1.5707),scale=(.2,.1,.2),translation=(-2.5,0,2.9),
        children=[
        Shape(USE='Wheel')]),
      Transform(DEF='MainSupport',scale=(.2,1.2,.2),translation=(0,4.5,.5),
        children=[
        Shape(USE='SupportBeam'),
        Transform(scale=(.75,1.8,.75),translation=(0,1,0),
          children=[
          Shape(USE='SupportBeam')])]),
      Transform(scale=(.3,.3,.3),translation=(0,6,.5),
        children=[
        Shape(USE='Wheel')]),
      Transform(DEF='Knob',scale=(.4,1,1),translation=(.35,6,.5),
        children=[
        Shape(
          geometry=Sphere(radius=.2),
          appearance=Appearance(
            material=Material(diffuseColor=(.7,.7,.73))))])])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for SourceLaserSupport.py")
