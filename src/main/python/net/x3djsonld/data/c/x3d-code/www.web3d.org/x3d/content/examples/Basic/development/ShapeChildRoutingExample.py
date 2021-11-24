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
    meta(content='ShapeChildRoutingExample.x3d',name='title'),
    meta(content='Don Brutzman',name='creator'),
    meta(content='7 November 2000',name='created'),
    meta(content='20 October 2019',name='modified'),
    meta(content='Show routing of a node as an input to a Script - success shows a Sphere, failure shows a Box.',name='description'),
    meta(content='https://www.web3d.org/x3d/content/examples/Basic/development/ShapeChildRoutingExample.x3d',name='identifier'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../license.html',name='license')]),
  Scene=Scene(
    children=[
    WorldInfo(title='ShapeChildRoutingExample.x3d'),
    Transform(
      children=[
      Shape(DEF='A_SHAPE',
        geometry=Box(),
        appearance=Appearance(
          material=Material(diffuseColor=(0.8,0.4,0)))),
      Script(DEF='A_SCRIPT',directOutput=True,
        field=[
        field(accessType='outputOnly',name='geometryResult',type='SFNode')]
        #  Scripting code is wrapped in a CDATA section to preserve all characters without normalization 
        )]),
    ROUTE(fromField='geometryResult',fromNode='A_SCRIPT',toField='geometry',toNode='A_SHAPE')])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for ShapeChildRoutingExample.py")
