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
    meta(content='HeloHanger',name='title'),
    meta(content='HeloHanger.x3d',name='HeloHanger'),
    meta(content='Spruance Helo Hanger',name='description'),
    meta(content='LT Josh Hansen',name='creator'),
    meta(content='17 September 2001',name='created'),
    meta(content='14 January 2014',name='modified'),
    meta(content='https://savage.nps.edu/Savage/ShipsMilitary/DD963SpruanceUnitedStates/HeloHanger.x3d',name='identifier'),
    meta(content='http://www.fas.org/man/dod-101/sys/ac/sh-60.htm',name='reference'),
    meta(content='X3D-Edit 3.2, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    Group(
      children=[
      Transform(translation=(0,0,-10),
        children=[
        Shape(
          geometry=Box(size=(10,3,10)),
          appearance=Appearance(
            material=Material(diffuseColor=(.6,.6,.6)))),
        Transform(translation=(0,5.5,0),
          children=[
          Shape(
            geometry=Box(size=(15,8,10)),
            appearance=Appearance(
              material=Material(diffuseColor=(.6,.6,.6))))])])])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for .py")
