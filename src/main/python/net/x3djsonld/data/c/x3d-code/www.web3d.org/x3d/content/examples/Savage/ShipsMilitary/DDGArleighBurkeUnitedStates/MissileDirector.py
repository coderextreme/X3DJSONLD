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
    meta(content='MissileDirector.x3d',name='title'),
    meta(content='Mike Hunsberger',name='creator'),
    meta(content='Modified by James Harney for DDG-51 model',name='name:'),
    meta(content='7 May 2001',name='created'),
    meta(content='14 January 2014',name='modified'),
    meta(content='Arleigh Burke Director, modified from TRC-170 model.',name='description'),
    meta(content='https://savage.nps.edu/Savage/ShipsMilitary/DDGArleighBurkeUnitedStates/MissileDirector.x3d',name='identifier'),
    meta(content='X3D-Edit 3.2, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    Transform(rotation=(0,1,0,-1.57),
      children=[
      Group(DEF='TRC170Body',
        children=[
        Group(DEF='POST',
          children=[
          Transform(translation=(-.25,-1,0),
            children=[
            Shape(
              appearance=Appearance(
                material=Material(diffuseColor=(.4,.4,.4))),
              geometry=Cylinder(radius=.3))])]),
        Transform(rotation=(0,0,1,.7),
          children=[
          Transform(
            children=[
            Shape(
              geometry=Extrusion(beginCap=False,convex=False,crossSection=[(1,0),(.866,.5),(.707,.707),(.5,.866),(0,1),(-.5,.866),(-.707,.707),(-.866,.5),(-1,0),(-.866,-.5),(-.707,-.707),(-.5,-.866),(0,-1),(.5,-.866),(.707,-.707),(.866,-.5),(1,0)],endCap=False,scale=[(.001,.001),(1.5,1.5)],solid=False,spine=[(0,0,0),(.15,0,0)]),
              appearance=Appearance(DEF='DarkGrey',
                material=Material(diffuseColor=(.4,.4,.4))))]),
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
                appearance=Appearance(USE='DarkGrey'))])])])])])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for MissileDirector.py")
