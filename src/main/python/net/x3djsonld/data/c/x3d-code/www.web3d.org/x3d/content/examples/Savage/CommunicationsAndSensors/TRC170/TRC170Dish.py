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
    meta(content='TRC170Dish.x3d',name='title'),
    meta(content='Mike Hunsberger',name='creator'),
    meta(content='7 May 2001',name='created'),
    meta(content='22 August 2018',name='modified'),
    meta(content='Dish of TRC-170 long-range SHF communication system. It operates in 3 modes: Direct point-to-point link (< 30 miles); Tropospheric shot (up to 100 or 150 miles, depending on system version); Defraction shot over an a terrain feature or object in the path ( < 50 miles).',name='description'),
    meta(content='https://savage.nps.edu/Savage/CommunicationsAndSensors/TRC170/TRC170Dish.x3d',name='identifier'),
    meta(content='X3D-Edit 3.2, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    Background(groundAngle=[1.57079],groundColor=[(1,0.8,0.6),(0.6,0.4,0.2)],skyAngle=[0.2],skyColor=[(1,1,1),(0.2,0.2,1)]),
    Group(DEF='TRC170Body',
      children=[
      Transform(
        children=[
        Shape(
          geometry=Extrusion(beginCap=False,convex=False,crossSection=[(1,0),(.866,.5),(.707,.707),(.5,.866),(0,1),(-.5,.866),(-.707,.707),(-.866,.5),(-1,0),(-.866,-.5),(-.707,-.707),(-.5,-.866),(0,-1),(.5,-.866),(.707,-.707),(.866,-.5),(1,0)],endCap=False,scale=[(.001,.001),(1.5,1.5)],solid=False,spine=[(0,0,0),(.15,0,0)]),
          appearance=Appearance(DEF='DarkGreen',
            material=Material(diffuseColor=(.1,.5,.1))))]),
      Group(DEF='Columns',
        children=[
        Transform(rotation=(0,0,1,1.57),translation=(.5,0,.35),
          children=[
          Shape(DEF='column',
            geometry=Cylinder(height=1,radius=.05),
            appearance=Appearance(
              material=Material(diffuseColor=(.2,.2,.2))))]),
        Transform(rotation=(0,0,1,1.57),translation=(.5,0,-.35),
          children=[
          Shape(USE='column')]),
        Transform(rotation=(0,0,1,1.57),translation=(.5,.35,0),
          children=[
          Shape(USE='column')]),
        Transform(rotation=(0,0,1,1.57),translation=(.5,-.35,0),
          children=[
          Shape(USE='column')])]),
      Group(
        children=[
        Transform(translation=(1,0,0),
          children=[
          Shape(
            geometry=Box(size=(.1,.05,.7)),
            appearance=Appearance(
              material=Material(diffuseColor=(.2,.2,.2))))]),
        Transform(translation=(1,0,0),
          children=[
          Shape(
            geometry=Box(size=(.1,.7,.05)),
            appearance=Appearance(
              material=Material(diffuseColor=(.2,.2,.2))))]),
        Transform(translation=(.9,0,0),
          children=[
          Shape(
            geometry=Sphere(radius=.1),
            appearance=Appearance(USE='DarkGreen'))])])])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for TRC170Dish.py")
