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
    meta(content='Superstructure.x3d',name='title'),
    meta(content='Anderson, Kevin S.',name='creator'),
    meta(content='1 September 2000',name='created'),
    meta(content='10 November 2002',name='modified'),
    meta(content='Superstructure for Sovremmeny Ship, includes inline YardArm.',name='description'),
    meta(content='https://savage.nps.edu/Savage/ShipsMilitary/DestroyerSovremennyRussia/Superstructure.x3d',name='identifier'),
    meta(content='X3D-Edit 3.2, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    #  Forward Superstructure 
    children=[
    Group(
      children=[
      Shape(
        appearance=Appearance(DEF='HullGrey',
          material=Material(diffuseColor=(.62,.639,.612))),
        geometry=Extrusion(crossSection=[(0,-2.4),(0,2.4),(4.9,2.4),(4.9,-2.4),(0,-2.4)],scale=[(1,1),(.5,1)],spine=[(0,0,0),(0,7,0)])),
      Shape(
        appearance=Appearance(USE='HullGrey'),
        geometry=Extrusion(crossSection=[(-1.225,-2.4),(-1.225,2.4),(1.225,2.4),(1.225,-2.4),(-1.225,-2.4)],scale=[(1,1),(.4,.3)],spine=[(1.225,7,0),(1.225,8.7,0)])),
      Transform(translation=(1.225,8.7,0),
        children=[
        Shape(
          appearance=Appearance(USE='HullGrey'),
          geometry=Cylinder(height=.1,radius=2.6))]),
      Transform(DEF='RadarAntennaPole',
        children=[
        Shape(
          appearance=Appearance(USE='HullGrey'),
          geometry=Extrusion(creaseAngle=1.57,crossSection=[(1.00,0.00),(0.92,-0.38),(0.71,-0.71),(0.38,-0.92),(0.00,-1.00),(-0.38,-0.92),(-0.71,-0.71),(-0.92,-0.38),(-1.00,-0.0),(-0.92,0.38),(-0.71,0.71),(-0.38,0.92),(0.00,1.00),(0.38,0.92),(0.71,0.71),(0.92,0.38),(1.00,0.00)],scale=[(.5,.5),(.5,.5),(.7,.7),(.35,.5)],spine=[(1.225,8.6,0),(1.225,12.5,0),(1.225,12.5,0),(1.225,13.35,0)])),
        Transform(DEF='Antenna',center=(-.2,2,0),rotation=(0,0,1,.45),translation=(1.2,12,0),
          children=[
          Shape(
            appearance=Appearance(USE='HullGrey'),
            geometry=Box(size=(.25,3,4)))]),
        Transform(rotation=(0,1,0,3.14),scale=(.8,.7,.7),translation=(2.2,4.1,0),
          children=[
          Transform(USE='Antenna')])]),
      Transform(rotation=(0,1,0,1.57),scale=(.95,1,.53),translation=(1.3,3.6,0),
        children=[
        Inline(url=["YardArm.wrl","https://savage.nps.edu/Savage/ShipsMilitary/DestroyerSovremennyRussia/YardArm.wrl","YardArm.x3d","https://savage.nps.edu/Savage/ShipsMilitary/DestroyerSovremennyRussia/YardArm.x3d"])])])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for Superstructure.py")
