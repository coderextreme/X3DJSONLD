####################################################################################################
#
# Invoking X3D model self-test:
#
#   $ python indexedfaceset_pixeltexture_plus.py
#
# Python package x3d.py package is available on PyPI for import.
#   This approach simplifies Python X3D deployment and use.
#   https://pypi.org/project/x3d
#
# Installation:
#       pip install x3d
# or
#       python -m pip install x3d
#
# Developer options for loading x3d package in other Python programs:
#
#    from x3d import *  # preferred approach, terser source that avoids x3d.* class prefixes
#
# or
#    import x3d         # traditional way to subclass x3d package, all classes require x3d.* prefix,
#                       # but python source is very verbose, for example x3d.Material x3d.Shape etc.
#                       # X3dToPython.xslt stylesheet insertPackagePrefix=true supports this option.
#
####################################################################################################

from x3d import *

newModel=X3D(profile='Interchange',version='4.0',
  head=head(
    children=[
    meta(content='indexedfaceset_pixeltexture_plus.x3d',name='title'),
    meta(content='indexedfaceset_pixeltexture_plus-front.jpg',name='Image'),
    meta(content='indexedfaceset_pixeltexture_plus-rear.jpg',name='Image'),
    meta(content='indexedfaceset_pixeltexture_plus-top.jpg',name='Image'),
    meta(content='indexedfaceset_pixeltexture_plus-bottom.jpg',name='Image'),
    meta(content='indexedfaceset_pixeltexture_plus-left.jpg',name='Image'),
    meta(content='indexedfaceset_pixeltexture_plus-right.jpg',name='Image'),
    meta(content='http://www.nist.gov/vrml.html',name='reference'),
    meta(content='http://www.itl.nist.gov/div897/ctg/vrml/vrml.html',name='reference'),
    meta(content='http://www.itl.nist.gov/div897/ctg/vrml/members.html',name='creator'),
    meta(content='This file was provided by the National Institute of Standards and Technology, and is part of the X3D Conformance Test Suite, available at http://www.nist.gov/vrml.html The information contained within this file is provided for use in establishing conformance to the ISO VRML97 Specification. Conformance to this test does not imply recommendation or endorsement by the National Institute of Standards and Technology. This software can be redistributed and/or modified freely provided that any derivative works bear some notice that they are derived from it, and any modified versions bear some notice that they have been modified.',name='disclaimer'),
    meta(content='Correct definition and compliance of this conformance scene is maintained by the X3D Working Group, https://www.web3d.org/working-groups/x3d',name='info'),
    meta(content='Michael Kass NIST, Don Brutzman NPS',name='translator'),
    meta(content='21 January 2001',name='translated'),
    meta(content='13 January 2014',name='modified'),
    meta(content='Test of browser ability to map a 3 times multiple of an PixelTexture onto an IndexedFaceSet geometry. A 3 by 3 matrix of four equal sized red, green, white and yellow squares in the pixel texture map all the faces of the cube.',name='description'),
    meta(content='https://www.web3d.org/x3d/content/examples/ConformanceNist/GeometricProperties/TextureCoordinate/indexedfaceset_pixeltexture_plus.x3d',name='identifier'),
    meta(content='Vrml97ToX3dNist, http://ovrt.nist.gov/v2_x3d.html',name='generator'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    Viewpoint(description='Front View'),
    Viewpoint(description='Rear View',orientation=(0,1,0,3.14),position=(0,0,-10)),
    Viewpoint(description='Top View',orientation=(1,0,0,-1.57),position=(0,10,0)),
    Viewpoint(description='Bottom View',orientation=(1,0,0,1.57),position=(0,-10,0)),
    Viewpoint(description='Right View',orientation=(0,1,0,1.57),position=(10,0,0)),
    Viewpoint(description='Left View',orientation=(0,1,0,-1.57),position=(-10,0,0)),
    NavigationInfo(type='"EXAMINE" "WALK" "FLY" "ANY"'),
    Shape(
      appearance=Appearance(
        material=Material(),
        texture=PixelTexture(image=[2,2,4,0xFF0000FF,0x00FF00FF,0xFFFFFFFF,0xFFFF00FF])),
      geometry=IndexedFaceSet(colorPerVertex=False,coordIndex=[0,1,3,2,-1,4,5,7,6,-1,6,7,1,0,-1,2,3,5,4,-1,6,0,2,4,-1,1,7,5,3,-1],creaseAngle=0.5,texCoordIndex=[0,1,3,2,-1,0,1,3,2,-1,0,1,3,2,-1,0,1,3,2,-1,0,1,3,2,-1,0,1,3,2,-1],
        color=Color(color=[(0,1,0),(0,1,0),(0,1,0),(0,1,0),(0,1,0),(0,1,0)]),
        coord=Coordinate(point=[(-2,1,1),(-2,-1,1),(2,1,1),(2,-1,1),(2,1,-1),(2,-1,-1),(-2,1,-1),(-2,-1,-1)]),
        texCoord=TextureCoordinate(point=[(-1,2),(-1,-1),(2,2),(2,-1)])))])
) # X3D model complete

####################################################################################################
# Self-test diagnostics
####################################################################################################

print('Self-test diagnostics for indexedfaceset_pixeltexture_plus.py:')
if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel)) # display meta info, hint, warning, error, TODO values in this model
# print('check newModel.XML() serialization...')
newModelXML= newModel.XML() # test export method XML() for exceptions during export
newModel.XMLvalidate()
# print(newModelXML) # diagnostic

try:
#   print('check newModel.VRML() serialization...')
    newModelVRML=newModel.VRML() # test export method VRML() for exceptions during export
    # print(prependLineNumbers(newModelVRML)) # debug
    print("Python-to-VRML export of VRML output successful", flush=True)
except Exception as err: # usually BaseException
    # https://stackoverflow.com/questions/18176602/how-to-get-the-name-of-an-exception-that-was-caught-in-python
    print("*** Python-to-VRML export of VRML output failed:", type(err).__name__, err)
    if newModelVRML: # may have failed to generate
        print(prependLineNumbers(newModelVRML, err.lineno))

try:
#   print('check newModel.JSON() serialization...')
    newModelJSON=newModel.JSON() # test export method JSON() for exceptions during export
#   print(prependLineNumbers(newModelJSON)) # debug
    print("Python-to-JSON export of JSON output successful (under development)")
except Exception as err: # usually SyntaxError
    print("*** Python-to-JSON export of JSON output failed:", type(err).__name__, err)
    if newModelJSON: # may have failed to generate
        print(prependLineNumbers(newModelJSON,err.lineno))

print("python indexedfaceset_pixeltexture_plus.py load and self-test diagnostics complete.")
