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
    meta(content='SightGauge.x3d',name='title'),
    meta(content='This file defines a sight gauge that is inlined to create the cockpit console of a helicopter',name='description'),
    meta(content='Jane Wu (adapted from the original Sight.wrl created for vrtp demo helicopter)',name='creator'),
    meta(content='9 January 2001',name='created'),
    meta(content='27 September 2002',name='modified'),
    meta(content='https://savage.nps.edu/Savage/AircraftHelicopters/OH58dKiowaWarriorUnitedStates/SightGauge.x3d',name='identifier'),
    meta(content='X3D-Edit 3.2, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    Group(
      children=[
      Shape(
        appearance=Appearance(DEF='TRANSPARENT_OFF_WHITE',
          material=Material(diffuseColor=(0.9,0.9,0.9),transparency=0.8)),
        geometry=Box(size=(0.2,0.2,0.03))),
      Transform(rotation=(1.0,0.0,0.0,1.57),translation=(0.0,0.0,0.015),
        children=[
        Shape(
          appearance=Appearance(DEF='TRANSPARENT_WHITE',
            material=Material(diffuseColor=(1.0,1.0,1.0),transparency=0.8)),
          geometry=Cylinder(bottom=False,height=0.008,radius=0.1))]),
      Transform(translation=(0.0,0.0,0.018),
        children=[
        Shape(DEF='RETICLE',
          appearance=Appearance(DEF='WHITE',
            material=Material(diffuseColor=(1.0,1.0,1.0))),
          geometry=Box(size=(0.002,0.2,0.003)))]),
      Transform(translation=(-0.06,0.0,0.018),
        children=[
        Shape(DEF='SHORT_RETICLE',
          appearance=Appearance(USE='WHITE'),
          geometry=Box(size=(0.002,0.05,0.003)))]),
      Transform(translation=(0.06,0.0,0.018),
        children=[
        Shape(USE='SHORT_RETICLE')]),
      Transform(rotation=(0.0,0.0,1.0,1.57),translation=(0.0,0.0,0.018),
        children=[
        Shape(USE='RETICLE')]),
      Transform(rotation=(0.0,0.0,1.0,1.57),translation=(0.0,0.06,0.018),
        children=[
        Shape(USE='SHORT_RETICLE')]),
      Transform(rotation=(0.0,0.0,1.0,1.57),translation=(0.0,-0.06,0.018),
        children=[
        Shape(USE='SHORT_RETICLE')])])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for SightGauge.py")
