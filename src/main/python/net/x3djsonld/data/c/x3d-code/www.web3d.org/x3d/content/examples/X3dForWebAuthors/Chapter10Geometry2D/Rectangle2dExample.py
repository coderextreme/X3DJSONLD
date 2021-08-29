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
    component(level=2,name='Geometry2D'),
    meta(content='Rectangle2dExample.x3d',name='title'),
    meta(content='Example of Rectangle2D showing two simple polygonal shapes.',name='description'),
    meta(content='Leonard Daly and Don Brutzman',name='creator'),
    meta(content='17 April 2006',name='created'),
    meta(content='14 June 2020',name='modified'),
    meta(content='http://X3dGraphics.com',name='reference'),
    meta(content='https://www.web3d.org/x3d/content/examples/X3dResources.html',name='reference'),
    meta(content='Copyright 2006, Daly Realism and Don Brutzman',name='rights'),
    meta(content='X3D book, X3D graphics, X3D-Edit, http://www.x3dGraphics.com',name='subject'),
    meta(content='http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter10Geometry2D/Rectangle2D.x3d',name='identifier'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../license.html',name='license')]),
  Scene=Scene(
    children=[
    WorldInfo(title='Rectangle2D.x3d'),
    Background(skyColor=[(1,1,1)]),
    Viewpoint(description='Rectangle2D example',orientation=(0.981,0.178,-0.08,0.01),position=(-1.52,-0.17,8.11)),
    Transform(translation=(-2.5,1,0),
      children=[
      Shape(
        geometry=Rectangle2D(size=(2.00,2.00)),
        appearance=Appearance(DEF='MagentaAppearance',
          material=Material(diffuseColor=(1,0,0),emissiveColor=(0,0,1),specularColor=(0,.8,0))))]),
    Transform(translation=(-1,-1.5,0),
      children=[
      Shape(
        geometry=Rectangle2D(size=(2,1)),
        appearance=Appearance(USE='MagentaAppearance'))])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for Rectangle2dExample.py")
