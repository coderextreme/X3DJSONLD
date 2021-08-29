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
    meta(content='CockpitSeats.x3d',name='title'),
    meta(content='This file defines the cockpit seats of an OH58D helicopter, and is inlined to complete the cockpit of the helicopter.',name='description'),
    meta(content='Del Beilstein',name='creator'),
    meta(content='21 September 2001',name='created'),
    meta(content='11 November 2002',name='modified'),
    meta(content='https://savage.nps.edu/Savage/AircraftHelicopters/OH58dKiowaWarriorUnitedStates/CockpitSeats.x3d',name='identifier'),
    meta(content='X3D-Edit 3.2, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    Background(skyColor=[(.9,.9,.9)]),
    Transform(scale=(1,2,1),
      children=[
      Shape(
        geometry=Extrusion(creaseAngle=3.14,crossSection=[(-1,0),(-.8,.1),(-.6,.15),(-.4,.2),(.4,.2),(.6,.15),(.8,.1),(1,0),(.8,-.1),(.6,-.15),(.4,-.2),(-.4,-.2),(-.6,-.15),(-.8,-.1),(-1,0)],scale=[(1,1),(.8,1),(.6,1),(.5,1)],spine=[(0,0,0),(0,.8,0),(0,1,0),(0,1.2,0)]),
        appearance=Appearance(
          material=Material(diffuseColor=(0.2,0.2,0.2)))),
      Transform(rotation=(1,0,0,1.57),scale=(1,1.5,1),
        children=[
        Shape(
          geometry=Extrusion(creaseAngle=3.14,crossSection=[(-1,0),(-.8,.1),(-.6,.15),(-.4,.2),(.4,.2),(.6,.15),(.8,.1),(1,0),(.8,-.1),(.6,-.15),(.4,-.2),(-.4,-.2),(-.6,-.15),(-.8,-.1),(-1,0)],scale=[(1,.7),(1.05,.7),(1.1,.7)],spine=[(0,0,0),(0,.8,0),(0,1,0)]),
          appearance=Appearance(
            material=Material(diffuseColor=(0.2,0.2,0.2))))])])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for CockpitSeats.py")
