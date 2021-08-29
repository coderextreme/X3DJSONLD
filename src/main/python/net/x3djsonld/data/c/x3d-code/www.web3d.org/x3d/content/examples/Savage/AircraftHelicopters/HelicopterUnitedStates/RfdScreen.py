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
    meta(content='RfdScreen.x3d',name='title'),
    meta(content='This file defines a RFD instrument that is inlined to create the cockpit console of a helicopter',name='description'),
    meta(content='Jane Wu (adapted from the original rfd.wrl created for vrtp demo helicopter)',name='creator'),
    meta(content='9 January 2001',name='created'),
    meta(content='15 March 2002',name='modified'),
    meta(content='https://savage.nps.edu/Savage/AircraftHelicopters/HelicopterUnitedStates/RfdScreen.x3d',name='identifier'),
    meta(content='X3D-Edit 3.2, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    Group(
      children=[
      Shape(
        appearance=Appearance(DEF='GREEN',
          material=Material(diffuseColor=(0.0,1.0,0.0))),
        geometry=Box(size=(0.18,0.12,0.03))),
      Transform(translation=(0.0,0.0,0.015),
        children=[
        Shape(
          appearance=Appearance(DEF='OFF_WHITE',
            material=Material(diffuseColor=(0.75,0.75,0.75))),
          geometry=Box(size=(0.12,0.075,0.01)))]),
      Transform(translation=(-0.04,0.025,0.02155),
        children=[
        Shape(
          appearance=Appearance(DEF='BLACK',
            material=Material(diffuseColor=(0.0,0.0,0.0))),
          geometry=Text(length=[0.09,0.09,0.09,0.09],string=["1 01 37.500","2 08 251.200","3 20 142.900","5 02 53.700"],
            fontStyle=FontStyle(size=0.015,spacing=1.3)))]),
      Transform(translation=(-0.075,0.015,0.015),
        children=[
        Shape(DEF='CIPHER_BUTTON',
          appearance=Appearance(USE='BLACK'),
          geometry=Box(size=(0.015,0.028,0.01)))]),
      Transform(translation=(0.075,0.015,0.015),
        children=[
        Shape(USE='CIPHER_BUTTON')]),
      Transform(rotation=(1.0,0.0,0.0,1.57),translation=(-0.075,-0.025,0.015),
        children=[
        Shape(
          appearance=Appearance(USE='BLACK'),
          geometry=Cylinder(height=0.02,radius=0.0075))])])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for RfdScreen.py")
