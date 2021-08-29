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
    meta(content='style.x3d',name='title'),
    meta(content='style-front.jpg',name='Image'),
    meta(content='http://www.nist.gov/vrml.html',name='reference'),
    meta(content='http://www.itl.nist.gov/div897/ctg/vrml/vrml.html',name='reference'),
    meta(content='http://www.itl.nist.gov/div897/ctg/vrml/members.html',name='creator'),
    meta(content='This file was provided by the National Institute of Standards and Technology, and is part of the X3D Conformance Test Suite, available at http://www.nist.gov/vrml.html The information contained within this file is provided for use in establishing conformance to the ISO VRML97 Specification. Conformance to this test does not imply recommendation or endorsement by the National Institute of Standards and Technology. This software can be redistributed and/or modified freely provided that any derivative works bear some notice that they are derived from it, and any modified versions bear some notice that they have been modified.',name='disclaimer'),
    meta(content='Correct definition and compliance of this conformance scene is maintained by the X3D Working Group, https://www.web3d.org/working-groups/x3d',name='info'),
    meta(content='Michael Kass NIST, Don Brutzman NPS',name='translator'),
    meta(content='21 January 2001',name='translated'),
    meta(content='20 October 2019',name='modified'),
    meta(content='Test style attribute for FontStyle node. All three required family fonts are used to test the four "style" types of "PLAIN" (upper left quadrant), "ITALIC" (upper right quadrant), "BOLD" (lower left quadrant) and "BOLDITALIC" (lower right quadrant). Text should reflect these styles.',name='description'),
    meta(content='https://www.web3d.org/x3d/content/examples/ConformanceNist/Appearance/FontStyle/style.x3d',name='identifier'),
    meta(content='Vrml97ToX3dNist, http://ovrt.nist.gov/v2_x3d.html',name='generator'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    WorldInfo(title='style.x3d'),
    Viewpoint(description='FontStyle style attribute',position=(0,0,20)),
    Transform(translation=(-14,3,0),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(),),
        geometry=Text(string=["This is PLAIN SERIF"],
          fontStyle=FontStyle(),))]),
    Transform(translation=(-14,2,0),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(),),
        geometry=Text(string=["This is PLAIN SANS"],
          fontStyle=FontStyle(family=["SANS"])))]),
    Transform(translation=(-14,1,0),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(),),
        geometry=Text(string=["This is PLAIN TYPEWRITER"],
          fontStyle=FontStyle(family=["TYPEWRITER"])))]),
    Transform(translation=(0,3,0),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(),),
        geometry=Text(string=["This is ITALIC SERIF"],
          fontStyle=FontStyle(style_='ITALIC')))]),
    Transform(translation=(0,2,0),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(),),
        geometry=Text(string=["This is ITALIC SANS"],
          fontStyle=FontStyle(family=["SANS"],style_='ITALIC')))]),
    Transform(translation=(0,1,0),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(),),
        geometry=Text(string=["This is ITALIC TYPEWRITER"],
          fontStyle=FontStyle(family=["TYPEWRITER"],style_='ITALIC')))]),
    Transform(translation=(-14,-1,0),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(),),
        geometry=Text(string=["This is BOLD SERIF"],
          fontStyle=FontStyle(style_='BOLD')))]),
    Transform(translation=(-14,-2,0),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(),),
        geometry=Text(string=["This is BOLD SANS"],
          fontStyle=FontStyle(family=["SANS"],style_='BOLD')))]),
    Transform(translation=(-14,-3,0),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(),),
        geometry=Text(string=["This is BOLD TYPEWRITER"],
          fontStyle=FontStyle(family=["TYPEWRITER"],style_='BOLD')))]),
    Transform(translation=(0,-1,0),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(),),
        geometry=Text(string=["This is BOLDITALIC SERIF"],
          fontStyle=FontStyle(style_='BOLDITALIC')))]),
    Transform(translation=(0,-2,0),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(),),
        geometry=Text(string=["This is BOLDITALIC SANS"],
          fontStyle=FontStyle(family=["SANS"],style_='BOLDITALIC')))]),
    Transform(translation=(0,-3,0),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(),),
        geometry=Text(string=["This is BOLDITALIC TYPEWRITER"],
          fontStyle=FontStyle(family=["TYPEWRITER"],style_='BOLDITALIC')))]),
    Transform(
      children=[
      Shape(
        geometry=IndexedLineSet(DEF='LINES',coordIndex=[0,1,-1,1,2,-1,3,4,-1,4,5,-1,6,7,-1,7,8,-1,9,10,-1,10,11,-1,12,13,-1,13,14,-1,15,16,-1,16,17,-1,18,19,-1,19,20,-1,21,22,-1,22,23,-1,24,25,-1,25,26,-1,27,28,-1,28,29,-1],
          coord=Coordinate(point=[(-20,-5,0),(0,-5,0),(20,-5,0),(-20,-4,0),(0,-4,0),(20,-4,0),(-20,-3,0),(0,-3,0),(20,-3,0),(-20,-2,0),(0,-2,0),(20,-2,0),(-20,-1,0),(0,-1,0),(20,-1,0),(-20,1,0),(0,1,0),(20,1,0),(-20,2,0),(0,2,0),(20,2,0),(-20,3,0),(0,3,0),(20,3,0),(-20,4,0),(0,4,0),(20,4,0),(-20,5,0),(0,5,0),(20,5,0)])),
        appearance=Appearance(
          material=Material(emissiveColor=(0,1,0))))]),
    Transform(
      children=[
      Shape(
        appearance=Appearance(
          material=Material(emissiveColor=(0,1,0))),
        geometry=IndexedLineSet(DEF='AXES',coordIndex=[0,1,-1,2,3,-1],
          coord=Coordinate(point=[(-20,0,0),(20,0,0),(0,5,0),(0,-5,0)])))])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for style.py")
