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
    meta(content='SimpleCarrierHull.x3d',name='title'),
    meta(content='Don Brutzman and MV4204 class',name='creator'),
    meta(content='31 August 2000',name='created'),
    meta(content='20 October 2019',name='modified'),
    meta(content='Using Extrusion to model a simple hull. Scaled VRML coordinate axes superimposed.',name='description'),
    meta(content='https://www.web3d.org/x3d/content/examples/Basic/course/SimpleCarrierHull.x3d',name='identifier'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../license.html',name='license')]),
  Scene=Scene(
    children=[
    WorldInfo(title='SimpleCarrierHull.x3d'),
    Viewpoint(description='Simple Carrier Hull',position=(0,0,350)),
    Transform(
      children=[
      Shape(
        geometry=Extrusion(crossSection=[(20,-15),(-16,-12),(-20,-10),(-20,10),(-16,12),(20,15)],scale=[(0.5,0.5),(1,1),(1,1),(1,1)],solid=False,spine=[(150,0,0),(100,0,0),(0,0,0),(-175,0,0)]),
        appearance=Appearance(
          material=Material(diffuseColor=(.4,.4,.4))))]),
    Transform(scale=(200,50,50),
      children=[
      Inline(DEF='CoordinateAxes',url=["../../X3dForWebAuthors/Chapter03Grouping/CoordinateAxes.x3d","http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter03Grouping/CoordinateAxes.x3d","https://savage.nps.edu/Savage/Tools/Authoring/CoordinateAxes.x3d","../../X3dForWebAuthors/Chapter03Grouping/CoordinateAxes.wrl","http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter03Grouping/CoordinateAxes.wrl","https://savage.nps.edu/Savage/Tools/Authoring/CoordinateAxes.wrl"])])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for SimpleCarrierHull.py")
