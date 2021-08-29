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
    meta(content='size_spacing.x3d',name='title'),
    meta(content='size_spacing-front.jpg',name='Image'),
    meta(content='http://www.nist.gov/vrml.html',name='reference'),
    meta(content='http://www.itl.nist.gov/div897/ctg/vrml/vrml.html',name='reference'),
    meta(content='http://www.itl.nist.gov/div897/ctg/vrml/members.html',name='creator'),
    meta(content='This file was provided by the National Institute of Standards and Technology, and is part of the X3D Conformance Test Suite, available at http://www.nist.gov/vrml.html The information contained within this file is provided for use in establishing conformance to the ISO VRML97 Specification. Conformance to this test does not imply recommendation or endorsement by the National Institute of Standards and Technology. This software can be redistributed and/or modified freely provided that any derivative works bear some notice that they are derived from it, and any modified versions bear some notice that they have been modified.',name='disclaimer'),
    meta(content='Correct definition and compliance of this conformance scene is maintained by the X3D Working Group, https://www.web3d.org/working-groups/x3d',name='info'),
    meta(content='Michael Kass NIST, Don Brutzman NPS',name='translator'),
    meta(content='21 January 2001',name='translated'),
    meta(content='20 October 2019',name='modified'),
    meta(content='Test different size and spacing values for FontStyle node. Three different "size" and "spacing" combinations are used here to test browser ability to properly space text both horizontally and vertically. The first test sets size = 2 and spacing = 0.5 (the red text). Distance between the base of the two text lines should be 1 unit. For the horizontal text this is measured between the bottoms of the text lines. For the vertical text, spacing is measured between the left sides of adjacent text lines. In both cases, the nominal vertical height of the fonts should be 2 units. The second test sets size = 1 and spacing = 1 (the yellow text). Distance between the base of the two text lines should be 1 unit. For the horizontal text this is measured between the bottoms of the text lines. For the vertical text, spacing is measured between the left sides of adjacent text lines. In both cases, the nominal vertical height of the fonts should be 1 unit. The first test sets size = 0.75 and spacing = 4 (the blue text). Distance between the base of the two text lines should be 3 units. For the horizontal text this is measured between the bottoms of the text lines. For the vertical text, spacing is measured between the left sides of adjacent text lines. In both cases, the nominal vertical height of the fonts should be 0.75 units.',name='description'),
    meta(content='https://www.web3d.org/x3d/content/examples/ConformanceNist/Appearance/FontStyle/size_spacing.x3d',name='identifier'),
    meta(content='Vrml97ToX3dNist, http://ovrt.nist.gov/v2_x3d.html',name='generator'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    WorldInfo(title='size_spacing.x3d'),
    Viewpoint(description='FontStyle size and spacing',position=(0,0,22)),
    Transform(translation=(-15,6,0),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(1,0,0))),
        geometry=Text(string=["Size 2","Spacing .5"],
          fontStyle=FontStyle(size=2,spacing=0.5)))]),
    Transform(translation=(-8,1,0),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(1,1,0))),
        geometry=Text(string=["Size 1","Spacing 1"],
          fontStyle=FontStyle(),))]),
    Transform(translation=(0,9,0),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(1,0,0))),
        geometry=Text(string=["Size 2","Spacing .5"],
          fontStyle=FontStyle(horizontal=False,size=2,spacing=0.5)))]),
    Transform(translation=(7,9,0),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(1,1,0))),
        geometry=Text(string=["Size 1","Spacing 1"],
          fontStyle=FontStyle(horizontal=False)))]),
    Transform(translation=(-15,-4,0),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0,0,1))),
        geometry=Text(string=["Size 0.75","Spacing 4"],
          fontStyle=FontStyle(size=0.75,spacing=4)))]),
    Transform(translation=(12,9,0),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0,0,1))),
        geometry=Text(string=["Size 0.75","Spacing 4"],
          fontStyle=FontStyle(horizontal=False,size=0.75,spacing=4)))]),
    Transform(DEF='LEFT',
      children=[
      Shape(
        geometry=IndexedLineSet(coordIndex=[0,1,-1,2,3,-1,4,5,-1,6,7,-1,8,9,-1,10,11,-1,12,13,-1,14,15,-1,16,17,-1,18,19,-1,20,21,-1,22,23,-1,24,25,-1,26,27,-1,28,29,-1,30,31,-1,32,33,-1,34,35,-1,36,37,-1,38,39,-1],
          coord=Coordinate(point=[(-20,-10,0),(0,-10,0),(-20,-9,0),(0,-9,0),(-20,-8,0),(0,-8,0),(-20,-7,0),(0,-7,0),(-20,-6,0),(0,-6,0),(-20,-5,0),(0,-5,0),(-20,-4,0),(0,-4,0),(-20,-3,0),(0,-3,0),(-20,-2,0),(0,-2,0),(-20,-1,0),(0,-1,0),(-20,1,0),(0,1,0),(-20,2,0),(0,2,0),(-20,3,0),(0,3,0),(-20,4,0),(0,4,0),(-20,5,0),(0,5,0),(-20,6,0),(0,6,0),(-20,7,0),(0,7,0),(-20,8,0),(0,8,0),(-20,9,0),(0,9,0),(-20,10,0),(0,10,0)])),
        appearance=Appearance(
          material=Material(emissiveColor=(0,1,0))))]),
    Transform(DEF='RIGHT',
      children=[
      Shape(
        geometry=IndexedLineSet(coordIndex=[0,1,-1,2,3,-1,4,5,-1,6,7,-1,8,9,-1,10,11,-1,12,13,-1,14,15,-1,16,17,-1,18,19,-1,20,21,-1,22,23,-1,24,25,-1,26,27,-1,28,29,-1,30,31,-1,32,33,-1,34,35,-1,36,37,-1,38,39,-1],
          coord=Coordinate(point=[(1,10,0),(1,-10,0),(2,10,0),(2,-10,0),(3,10,0),(3,-10,0),(4,10,0),(4,-10,0),(5,10,0),(5,-10,0),(6,10,0),(6,-10,0),(7,10,0),(7,-10,0),(8,10,0),(8,-10,0),(9,10,0),(9,-10,0),(10,10,0),(10,-10,0),(11,10,0),(11,-10,0),(12,10,0),(12,-10,0),(13,10,0),(13,-10,0),(14,10,0),(14,-10,0),(15,10,0),(15,-10,0),(16,10,0),(16,-10,0),(17,10,0),(17,-10,0),(18,10,0),(18,-10,0),(19,10,0),(19,-10,0),(20,10,0),(20,-10,0)])),
        appearance=Appearance(
          material=Material(emissiveColor=(0,1,0))))]),
    Transform(
      children=[
      Shape(
        appearance=Appearance(
          material=Material(emissiveColor=(0,1,0))),
        geometry=IndexedLineSet(DEF='AXES',coordIndex=[0,1,-1,2,3,-1],
          coord=Coordinate(point=[(-20,0,0),(20,0,0),(0,10,0),(0,-10,0)])))])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for size_spacing.py")
