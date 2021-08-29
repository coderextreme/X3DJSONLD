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
    meta(content='LODExample.x3d',name='title'),
    meta(content='Example for LOD node',name='description'),
    meta(content='Leonard Daly and Don Brutzman',name='creator'),
    meta(content='14 November 2005',name='created'),
    meta(content='14 June 2020',name='modified'),
    meta(content='https://github.com/create3000/x_ite/issues/38',name='reference'),
    meta(content='http://X3dGraphics.com',name='reference'),
    meta(content='https://www.web3d.org/x3d/content/examples/X3dResources.html',name='reference'),
    meta(content='Copyright 2006, Daly Realism and Don Brutzman',name='rights'),
    meta(content='X3D book, X3D graphics, X3D-Edit, http://www.x3dGraphics.com',name='subject'),
    meta(content='http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter03Grouping/LODExample.x3d',name='identifier'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../license.html',name='license')]),
  Scene=Scene(
    children=[
    Background(skyColor=[(1,1,1)]),
    NavigationInfo(type=["FLY","ANY"]),
    Viewpoint(description='Book View - Near, all shapes shown',orientation=(0.866,-0.497,0.058,-0.59),position=(1.2,1.98,3.4)),
    Viewpoint(description='Book View - Farther, texture shown',orientation=(0.866,-0.497,0.058,-0.59),position=(1.47,2.43,4.18)),
    Viewpoint(description='Book View - Farthest, nothing shown',position=(0,0,12)),
    LOD(range=[5,9],
      children=[
      Group(DEF='View3dModelAtCloseRange',
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(1,0,0))),
          geometry=Box(),),
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0,0,1))),
          geometry=Sphere(radius=1.4))]),
      Group(DEF='View2dImageAtLongerRange',
        children=[
        Shape(
          appearance=Appearance(
            material=Material(),
            #  https://github.com/create3000/x_ite/issues/38 
            texture=ImageTexture(url=["LOD.jpg","http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter03Grouping/LOD.jpg"])),
          geometry=Box(),)]),
      WorldInfo(info=["Not visible at farthest range"])])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for LODExample.py")
