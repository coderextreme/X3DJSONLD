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

newModel=X3D(profile='Interchange',version='3.3',
  head=head(
    children=[
    meta(content='PixelTextureExample.x3d',name='title'),
    meta(content='This example shows a colorful PixelTexture applied to the standard primitive shapes.',name='description'),
    meta(content='Leonard Daly and Don Brutzman',name='creator'),
    meta(content='2 February 2006',name='created'),
    meta(content='2 February 2006',name='translated'),
    meta(content='14 June 2020',name='modified'),
    meta(content='http://X3dGraphics.com',name='reference'),
    meta(content='https://www.web3d.org/x3d/content/examples/X3dResources.html',name='reference'),
    meta(content='Copyright (c) 2006, Daly Realism and Don Brutzman',name='rights'),
    meta(content='X3D book, X3D graphics, X3D-Edit, http://www.x3dGraphics.com',name='subject'),
    meta(content='http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter05AppearanceMaterialTextures/PixelTextureExample.x3d',name='identifier'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../license.html',name='license')]),
  Scene=Scene(
    children=[
    WorldInfo(title='PixelTexture.x3d'),
    Background(skyColor=[(1,1,1)]),
    Viewpoint(description='Book Viewpoint',orientation=(0.736,0.615,-0.284,-0.32),position=(-2.9,1.64,9.33)),
    Transform(translation=(2,2,0),
      children=[
      Shape(
        appearance=Appearance(
          texture=PixelTexture(DEF='PixelColors',image=[2,4,3,0xff0000,0xffff00,0x007700,0xff0077,0x0000ff,0xff7700,0x00ff77,0x888888],repeatS=False,repeatT=False)),
        geometry=Box(),)]),
    Transform(translation=(-2,2,0),
      children=[
      Shape(
        appearance=Appearance(
          texture=PixelTexture(USE='PixelColors')),
        geometry=Cone(),)]),
    Transform(translation=(2,-2,0),
      children=[
      Shape(
        appearance=Appearance(
          texture=PixelTexture(USE='PixelColors')),
        geometry=Cylinder(),)]),
    Transform(translation=(-2,-2,0),
      children=[
      Shape(
        appearance=Appearance(
          texture=PixelTexture(USE='PixelColors')),
        geometry=Sphere(),)])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for PixelTextureExample.py")
