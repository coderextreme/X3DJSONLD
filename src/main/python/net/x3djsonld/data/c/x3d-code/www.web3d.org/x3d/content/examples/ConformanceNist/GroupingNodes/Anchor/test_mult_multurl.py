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
    meta(content='test_mult_multurl.x3d',name='title'),
    meta(content='http://www.nist.gov/vrml.html',name='reference'),
    meta(content='http://www.itl.nist.gov/div897/ctg/vrml/vrml.html',name='reference'),
    meta(content='http://www.itl.nist.gov/div897/ctg/vrml/members.html',name='creator'),
    meta(content='This file was provided by the National Institute of Standards and Technology, and is part of the X3D Conformance Test Suite, available at http://www.nist.gov/vrml.html The information contained within this file is provided for use in establishing conformance to the ISO VRML97 Specification. Conformance to this test does not imply recommendation or endorsement by the National Institute of Standards and Technology. This software can be redistributed and/or modified freely provided that any derivative works bear some notice that they are derived from it, and any modified versions bear some notice that they have been modified.',name='disclaimer'),
    meta(content='Correct definition and compliance of this conformance scene is maintained by the X3D Working Group, https://www.web3d.org/working-groups/x3d',name='info'),
    meta(content='Michael Kass NIST, Don Brutzman NPS',name='translator'),
    meta(content='21 January 2001',name='translated'),
    meta(content='20 October 2019',name='modified'),
    meta(content='Test browser to nest multiple Anchor nodes in the children field of a parent Anchor node. This test defines an Anchor node with three Shape nodes as children (within another Anchor node). Each child is associated with a different url. The files referenced in the url fields are stored in the same directory where the calling Anchor file is. The test should generate a blue box if the first sphere is clicked, a blue cone if the second one is clicked and a blue cylinder if the third one is clicked. No viewpoints are associated with the url fields.',name='description'),
    meta(content='https://www.web3d.org/x3d/content/examples/ConformanceNist/GroupingNodes/Anchor/test_mult_multurl.x3d',name='identifier'),
    meta(content='Vrml97ToX3dNist, http://ovrt.nist.gov/v2_x3d.html',name='generator'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    WorldInfo(title='test_mult_multurl.x3d'),
    NavigationInfo(type=["EXAMINE","WALK","FLY","ANY"]),
    Viewpoint(description='Front View',position=(0,0,19)),
    Transform(translation=(0,2,0),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(1,0,0),emissiveColor=(1,0,0))),
        geometry=Text(string=["CLICK ANY SPHERE TO START"],
          fontStyle=FontStyle(justify=["MIDDLE","MIDDLE"])))]),
    Anchor(description='Parent Anchor should be ignored',url=["../../HelloWorld.x3d","https://www.web3d.org/x3d/content/examples/ConformanceNist/HelloWorld.x3d","../../HelloWorld.wrl","https://www.web3d.org/x3d/content/examples/ConformanceNist/HelloWorld.wrl"],
      children=[
      Anchor(description='Multiple children referencing different urls',url=["url1.x3d","https://www.web3d.org/x3d/content/examples/ConformanceNist/GroupingNodes/Anchor/url1.x3d","url1.wrl","https://www.web3d.org/x3d/content/examples/ConformanceNist/GroupingNodes/Anchor/url1.wrl"],
        children=[
        Transform(translation=(-3,0,0),
          children=[
          Shape(DEF='the-shape',
            appearance=Appearance(
              material=Material(diffuseColor=(0,1,0),emissiveColor=(0,1,0))),
            geometry=Sphere(),)])]),
      Anchor(description='Multiple children referencing different urls',url=["url2.x3d","https://www.web3d.org/x3d/content/examples/ConformanceNist/GroupingNodes/Anchor/url2.x3d","url2.wrl","https://www.web3d.org/x3d/content/examples/ConformanceNist/GroupingNodes/Anchor/url2.wrl"],
        children=[
        Transform(
          children=[
          Shape(USE='the-shape')])]),
      Anchor(description='Multiple children referencing multiple urls',url=["url3.x3d","https://www.web3d.org/x3d/content/examples/ConformanceNist/GroupingNodes/Anchor/url3.x3d","url3.wrl","https://www.web3d.org/x3d/content/examples/ConformanceNist/GroupingNodes/Anchor/url3.wrl"],
        children=[
        Transform(translation=(3,0,0),
          children=[
          Shape(USE='the-shape')])])])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for test_mult_multurl.py")
