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
    meta(content='TextLengthMaxExtent.x3d',name='title'),
    meta(content='Simple Text node, illustrating length array and maxExtent field',name='description'),
    meta(content='Don Brutzman',name='creator'),
    meta(content='25 January 2009',name='created'),
    meta(content='20 October 2019',name='modified'),
    meta(content='TextLengthMaxExtent.png',name='reference'),
    meta(content='Copyright (c) Don Brutzman and Leonard Daly, 2005',name='rights'),
    meta(content='http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter02GeometryPrimitives/TextLengthMaxExtent.x3d',name='identifier'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../license.html',name='license')]),
  Scene=Scene(
    children=[
    WorldInfo(title='TextLengthMaxExtent.x3d'),
    Viewpoint(description='Default View',position=(0,0,6)),
    Viewpoint(description='Book View',position=(0.89,-1.11,2.33)),
    Transform(translation=(-2,0,0),
      children=[
      Shape(
        geometry=Text(DEF='LengthText',length=[2,3,4],string=["length=\'2 3 4\'","Second line 25 characters","Line 3 shortest"],
          fontStyle=FontStyle(DEF='CenteredFontStyle',justify=["MIDDLE","MIDDLE"])),
        appearance=Appearance(
          material=Material(DEF='BlueMaterial',diffuseColor=(0.219608,0.345098,1))))]),
    Transform(translation=(2,0,0),
      children=[
      Shape(
        geometry=Text(DEF='maxExtentText',maxExtent=2.5,string=["maxExtent=\'2.5\'","Second line 25 characters","Line 3 shortest"],
          fontStyle=FontStyle(USE='CenteredFontStyle')),
        appearance=Appearance(
          material=Material(),))])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for TextLengthMaxExtent.py")
