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
    meta(content='TRC170Tripod.x3d',name='title'),
    meta(content='Mike Hunsberger',name='creator'),
    meta(content='8 May 2001',name='created'),
    meta(content='22 August 2018',name='modified'),
    meta(content='Tripod stand for TRC-170 antenna body. A TRC-170 is a long-range SHF communication system. It operates in 3 modes. 1)Direct point-to-point link (< 30 miles). 2) Tropospheric shot (up to 100 or 150 miles, depending on system version). 3) Defraction shot over an a terrain feature or object in the path ( < 50 miles).',name='description'),
    meta(content='https://savage.nps.edu/Savage/CommunicationsAndSensors/TRC170/TRC170Tripod.x3d',name='identifier'),
    meta(content='X3D-Edit 3.2, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    Background(groundAngle=[1.57079],groundColor=[(1,0.8,0.6),(0.6,0.4,0.2)],skyAngle=[0.2],skyColor=[(1,1,1),(0.2,0.2,1)]),
    Transform(translation=(-.25,-.4,0),
      children=[
      Group(DEF='Tripod',
        children=[
        Transform(translation=(-.75,5,0),
          children=[
          Shape(
            geometry=Box(size=(2.25,.5,1.5)),
            appearance=Appearance(DEF='DarkGray',
              material=Material(diffuseColor=(.2,.2,.2))))]),
        Transform(rotation=(1,0,0,-.35),translation=(.05,2.5,1.5),
          children=[
          Transform(rotation=(0,0,1,.1),
            children=[
            Shape(
              geometry=Cylinder(height=5.0,radius=.2),
              appearance=Appearance(USE='DarkGray'))])]),
        Transform(rotation=(1,0,0,.35),translation=(.05,2.5,-1.5),
          children=[
          Transform(rotation=(0,0,1,.1),
            children=[
            Shape(
              geometry=Cylinder(height=5.0,radius=.2),
              appearance=Appearance(USE='DarkGray'))])]),
        Transform(rotation=(0,0,1,-.75),translation=(-3.75,2.75,0),
          children=[
          Shape(
            geometry=Cylinder(height=6.0,radius=.2),
            appearance=Appearance(USE='DarkGray'))]),
        Transform(rotation=(0,0,1,1.8),translation=(.5,5,0),
          children=[
          Shape(
            geometry=Cylinder(height=1.54,radius=.15),
            appearance=Appearance(USE='DarkGray'))])])])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for TRC170Tripod.py")
