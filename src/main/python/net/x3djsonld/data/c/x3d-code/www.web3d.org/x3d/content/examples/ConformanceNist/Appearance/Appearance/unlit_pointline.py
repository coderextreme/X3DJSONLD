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

newModel=X3D(profile='Interchange',version='3.0',
  head=head(
    children=[
    meta(content='unlit_pointline.x3d',name='title'),
    meta(content='unlit_pointline-front.jpg',name='Image'),
    meta(content='http://www.nist.gov/vrml.html',name='reference'),
    meta(content='http://www.itl.nist.gov/div897/ctg/vrml/vrml.html',name='reference'),
    meta(content='http://www.itl.nist.gov/div897/ctg/vrml/members.html',name='creator'),
    meta(content='This file was provided by the National Institute of Standards and Technology, and is part of the X3D Conformance Test Suite, available at http://www.nist.gov/vrml.html The information contained within this file is provided for use in establishing conformance to the ISO VRML97 Specification. Conformance to this test does not imply recommendation or endorsement by the National Institute of Standards and Technology. This software can be redistributed and/or modified freely provided that any derivative works bear some notice that they are derived from it, and any modified versions bear some notice that they have been modified.',name='disclaimer'),
    meta(content='Correct definition and compliance of this conformance scene is maintained by the X3D Working Group, https://www.web3d.org/working-groups/x3d',name='info'),
    meta(content='Michael Kass NIST, Don Brutzman NPS',name='translator'),
    meta(content='21 January 2001',name='translated'),
    meta(content='20 October 2019',name='modified'),
    meta(content='Test unlit PointSet and IndexedLineSet rendering. No Material node, no Color node and no texture is applied to a row containing an IndexedLineSet and a PointSet. Expected results are undetermined.',name='description'),
    meta(content='Material nodes, Color nodes and texture nodes are are intentionally omitted to perform this test.',name='warning'),
    meta(content='https://www.web3d.org/x3d/content/examples/ConformanceNist/Appearance/Appearance/unlit_pointline.x3d',name='identifier'),
    meta(content='Vrml97ToX3dNist, http://ovrt.nist.gov/v2_x3d.html',name='generator'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    WorldInfo(title='unlit_pointline.x3d'),
    Background(groundColor=[(0,0,0)],skyColor=[(0.4,0.4,0.4)]),
    NavigationInfo(type=["EXAMINE","WALK","FLY","ANY"]),
    Group(
      children=[
      Transform(scale=(0.737161,0.737161,0.737161),translation=(1.50776,-2.23396,-4.72618),
        children=[
        Shape(
          geometry=PointSet(
            coord=Coordinate(point=[(1,0,0),(0.970142,0.242536,0),(0.970142,0,0.242536),(0.904534,0.301511,0.301511),(0.83205,0,0.5547),(0.666667,0.333333,0.666667),(0.5547,0,0.83205),(0.301511,0.301511,0.904534),(0.242536,0,0.970142),(0,0.242536,0.970142),(0,0,1),(0.83205,0.5547,0),(0.666667,0.666667,0.333333),(0.333333,0.666667,0.666667),(0,0.5547,0.83205),(0.5547,0.83205,0),(0.301511,0.904534,0.301511),(0,0.83205,0.5547),(0.242536,0.970142,0),(0,0.970142,0.242536),(0,1,0),(-0.242536,0,0.970142),(-0.301511,0.301511,0.904534),(-0.5547,0,0.83205),(-0.666667,0.333333,0.666667),(-0.83205,0,0.5547),(-0.904534,0.301511,0.301511),(-0.970142,0,0.242536),(-0.970142,0.242536,0),(-1,0,0),(-0.333333,0.666667,0.666667),(-0.666667,0.666667,0.333333),(-0.83205,0.5547,0),(-0.301511,0.904534,0.301511),(-0.5547,0.83205,0),(-0.242536,0.970142,0),(0,-0.242536,0.970142),(0.301511,-0.301511,0.904534),(0.666667,-0.333333,0.666667),(0.904534,-0.301511,0.301511),(0.970142,-0.242536,0),(0,-0.5547,0.83205),(0.333333,-0.666667,0.666667),(0.666667,-0.666667,0.333333),(0.83205,-0.5547,0),(0,-0.83205,0.5547),(0.301511,-0.904534,0.301511),(0.5547,-0.83205,0),(0,-0.970142,0.242536),(0.242536,-0.970142,0),(0,-1,0),(-0.970142,-0.242536,0),(-0.904534,-0.301511,0.301511),(-0.666667,-0.333333,0.666667),(-0.301511,-0.301511,0.904534),(-0.83205,-0.5547,0),(-0.666667,-0.666667,0.333333),(-0.333333,-0.666667,0.666667),(-0.5547,-0.83205,0),(-0.301511,-0.904534,0.301511),(-0.242536,-0.970142,0),(0,0,-1),(0,0.242536,-0.970142),(0.242536,0,-0.970142),(0.301511,0.301511,-0.904534),(0.5547,0,-0.83205),(0.666667,0.333333,-0.666667),(0.83205,0,-0.5547),(0.904534,0.301511,-0.301511),(0.970142,0,-0.242536),(0,0.5547,-0.83205),(0.333333,0.666667,-0.666667),(0.666667,0.666667,-0.333333),(0,0.83205,-0.5547),(0.301511,0.904534,-0.301511),(0,0.970142,-0.242536),(-0.970142,0,-0.242536),(-0.904534,0.301511,-0.301511),(-0.83205,0,-0.5547),(-0.666667,0.333333,-0.666667),(-0.5547,0,-0.83205),(-0.301511,0.301511,-0.904534),(-0.242536,0,-0.970142),(-0.666667,0.666667,-0.333333),(-0.333333,0.666667,-0.666667),(-0.301511,0.904534,-0.301511),(0.904534,-0.301511,-0.301511),(0.666667,-0.333333,-0.666667),(0.301511,-0.301511,-0.904534),(0,-0.242536,-0.970142),(0.666667,-0.666667,-0.333333),(0.333333,-0.666667,-0.666667),(0,-0.5547,-0.83205),(0.301511,-0.904534,-0.301511),(0,-0.83205,-0.5547),(0,-0.970142,-0.242536),(-0.301511,-0.301511,-0.904534),(-0.666667,-0.333333,-0.666667),(-0.904534,-0.301511,-0.301511),(-0.333333,-0.666667,-0.666667),(-0.666667,-0.666667,-0.333333),(-0.301511,-0.904534,-0.301511)])))]),
      Transform(scale=(0.360228,0.360228,0.360228),translation=(-1.60431,-2.31731,-4.61505),
        children=[
        Shape(
          geometry=IndexedLineSet(coordIndex=[0,1,-1,1,2,-1,2,3,-1,3,0,-1,4,5,-1,5,6,-1,6,7,-1,7,4,-1,0,4,-1,1,5,-1,2,6,-1,3,7,-1],
            coord=Coordinate(point=[(-3,2,2),(3,2,2),(3,2,-2),(-3,2,-2),(-3,-2,2),(3,-2,2),(3,-2,-2),(-3,-2,-2)])))])])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for unlit_pointline.py")
