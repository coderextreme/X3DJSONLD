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

newModel=X3D(profile='Interactive',version='3.0',
  head=head(
    children=[
    meta(content='Example08.x3d',name='title'),
    meta(content='Don Brutzman',name='creator'),
    meta(content='27 June 2000',name='created'),
    meta(content='28 October 2019',name='modified'),
    meta(content='X3D working group',name='creator'),
    meta(content='originals/exampleD_8.wrl',name='reference'),
    meta(content='VRML 97 specification example: Anchor examples.',name='description'),
    meta(content='VRML 97, ISO/IEC 14772-1, Part 1: Functional specification and UTF-8 encoding, D.8 Anchor',name='specificationSection'),
    meta(content='https://www.web3d.org/documents/specifications/14772/V2.0/part1/examples.html#D.8',name='specificationUrl'),
    meta(content='https://www.web3d.org/x3d/content/examples/Basic/Vrml97Specification/Example08.x3d',name='identifier'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../license.html',name='license')]),
  Scene=Scene(
    children=[
    WorldInfo(title='Example08.x3d'),
    Anchor(description='example link',parameter=["target=name_of_frame"],url=["http://somehost/somefile.html"],
      children=[
      Shape(
        geometry=Cylinder(),
        appearance=Appearance(DEF='DefaultAppearance',
          material=Material(),))]),
    Anchor(description='another example link',url=["http://www.school.edu/vrml/someScene.wrl#OverView"],
      children=[
      Shape(
        geometry=Box(),
        appearance=Appearance(USE='DefaultAppearance'))]),
    #  Doorway Viewpoint added. 
    Viewpoint(DEF='Doorway',description='Example view'),
    #  Error in the VRML 97 specification example: the following Anchor url did not point to a Viewpoint. Doorway Viewpoint needed. 
    Anchor(description='Doorway viewpoint',url=["#Doorway"],
      children=[
      Shape(
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

print ("python x3d.py load successful for Example08.py")
