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
    meta(content='HfAntenna.x3d',name='title'),
    meta(content='This file defines an HF Antena that is inlined to create the tail boom for a helicopter',name='description'),
    meta(content='Jane Wu (adapted from the original hfantenatest.wrl created for vrtp demo helicopter)',name='creator'),
    meta(content='8 January 2001',name='created'),
    meta(content='15 March 2002',name='modified'),
    meta(content='https://savage.nps.edu/Savage/AircraftHelicopters/HelicopterUnitedStates/HfAntenna.x3d',name='identifier'),
    meta(content='X3D-Edit 3.2, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    Group(DEF='HF_ANTENA',
      children=[
      Shape(
        appearance=Appearance(DEF='GRAY',
          material=Material(diffuseColor=(0.25,0.25,0.25))),
        geometry=Cylinder(height=4.0,radius=0.04)),
      Transform(rotation=(0.0,0.0,1.0,1.57),translation=(-0.13,0.0,0.0),
        children=[
        Shape(
          appearance=Appearance(USE='GRAY'),
          geometry=Cylinder(height=0.3,radius=0.04))]),
      Transform(rotation=(0.0,0.0,1.0,1.57),translation=(-0.18,-2.0,0.0),
        children=[
        Shape(
          appearance=Appearance(USE='GRAY'),
          geometry=Cylinder(height=0.4,radius=0.04))])])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for HfAntenna.py")
