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

newModel=X3D(profile='Immersive',version='3.3',
  head=head(
    children=[
    meta(name='creator',content='John W Carlson'),
    meta(name='created',content='December 13 2015'),
    meta(name='title',content='text.x3d'),
    meta(name='identifier',content='https://coderextreme.net/X3DJSONLD/text.x3d'),
    meta(name='description',content='test \n text'),
    meta(name='generator',content='Vim, X3D-Edit, https://savage.nps.edu/X3D-Edit')]),
  Scene=Scene(
    children=[
    Transform(
      children=[
      Shape(
        geometry=Text(string=["Node\"\"\""],
          fontStyle=FontStyle(),),
        appearance=Appearance(
          material=Material(),)),
      Shape(
        geometry=Text(string=["Node2","\\","\\\\","Node2"],
          fontStyle=FontStyle(),),
        appearance=Appearance(
          material=Material(),)),
      Shape(
        geometry=Text(string=["Node3 \\\\ \\ ","Node3\"\"\""],
          fontStyle=FontStyle(),),
        appearance=Appearance(
          material=Material(),)),
      Script(
        field=[
        field(name='frontUrls',type='MFString',accessType='initializeOnly',value=["rnl_front.png","uffizi_front.png"])])])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if         metaDiagnostics(newModel): # built-in utility method in X3D class
    print (metaDiagnostics(newModel))
print ("python x3d.py load successful for text.py")
