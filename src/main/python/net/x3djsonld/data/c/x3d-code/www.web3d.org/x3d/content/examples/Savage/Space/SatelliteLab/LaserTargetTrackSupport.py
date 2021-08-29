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
    meta(content='LaserTargetTrackSupport.x3d',name='title'),
    meta(content='Support leg for target track rail.',name='description'),
    meta(content='Brian Kibel',name='creator'),
    meta(content='4 September 2006',name='created'),
    meta(content='22 February 2010',name='modified'),
    meta(content='https://savage.nps.edu/Savage/Space/SatelliteLab/LaserTargetTrackSupport.x3d',name='identifier'),
    meta(content='X3D-Edit 3.2, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    Group(DEF='TrackSupport',
      children=[
      Transform(rotation=(1,0,0,1.5707),scale=(.2,2.5,.05),
        children=[
        Shape(DEF='SupportBeam',
          geometry=Box(),
          appearance=Appearance(
            material=Material(diffuseColor=(.8,.6,0))))]),
      Transform(rotation=(1,0,0,-.523),scale=(.2,2.5,.05),translation=(0,2.25,1.25),
        children=[
        Shape(USE='SupportBeam')]),
      Transform(rotation=(1,0,0,.523),scale=(.2,2.5,.05),translation=(0,2.25,-1.25),
        children=[
        Shape(USE='SupportBeam')]),
      Transform(scale=(.3,.2,.2),translation=(0,0,2.5),
        children=[
        Shape(USE='SupportBeam')]),
      Transform(scale=(.3,.2,.2),translation=(0,0,-2.5),
        children=[
        Shape(USE='SupportBeam')]),
      Transform(rotation=(0,0,1,1.5707),scale=(.2,.1,.2),translation=(0,-.3,2.5),
        children=[
        Shape(DEF='Wheel',
          geometry=Cylinder(),
          appearance=Appearance(
            material=Material(diffuseColor=(.1,.1,.1))))]),
      Transform(rotation=(0,0,1,1.5707),scale=(.2,.1,.2),translation=(0,-.3,-2.5),
        children=[
        Shape(USE='Wheel')])])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for LaserTargetTrackSupport.py")
