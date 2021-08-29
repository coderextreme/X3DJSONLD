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
    meta(content='default_binding_single.x3d',name='title'),
    meta(content='default_binding_single-front.jpg',name='Image'),
    meta(content='http://www.nist.gov/vrml.html',name='reference'),
    meta(content='http://www.itl.nist.gov/div897/ctg/vrml/vrml.html',name='reference'),
    meta(content='http://www.itl.nist.gov/div897/ctg/vrml/members.html',name='creator'),
    meta(content='This file was provided by the National Institute of Standards and Technology, and is part of the X3D Conformance Test Suite, available at http://www.nist.gov/vrml.html The information contained within this file is provided for use in establishing conformance to the ISO VRML97 Specification. Conformance to this test does not imply recommendation or endorsement by the National Institute of Standards and Technology. This software can be redistributed and/or modified freely provided that any derivative works bear some notice that they are derived from it, and any modified versions bear some notice that they have been modified.',name='disclaimer'),
    meta(content='Correct definition and compliance of this conformance scene is maintained by the X3D Working Group, https://www.web3d.org/working-groups/x3d',name='info'),
    meta(content='Michael Kass NIST, Don Brutzman NPS',name='translator'),
    meta(content='21 January 2001',name='translated'),
    meta(content='20 October 2019',name='modified'),
    meta(content='Test binding a single NavigationInfo node. A single NavigationInfo node, with type of EXAMINE is present in this world. This NavigationInfo node should be bound to the top of the stack, and EXAMINE should be the navigation type. This means that the entire world should appear as a single geometry, with the viewer allowed to view it from any angle or distance. A Text message stating that the node is bound to the stack should appear at the top of the scene, and that the isBound field of the node is set to true.',name='description'),
    meta(content='https://www.web3d.org/x3d/content/examples/ConformanceNist/BindableNodes/NavigationInfo/default_binding_single.x3d',name='identifier'),
    meta(content='Vrml97ToX3dNist, http://ovrt.nist.gov/v2_x3d.html',name='generator'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    WorldInfo(title='default_binding_single.x3d'),
    Viewpoint(description='Close View'),
    Viewpoint(description='Distant View',position=(0,0,50)),
    Background(groundAngle=[1.57],groundColor=[(0,0.5,0),(0,0.5,0)],skyColor=[(0,0,1)]),
    NavigationInfo(DEF='NAV1',type=["EXAMINE"]),
    Billboard(axisOfRotation=(0,0,0),
      children=[
      Transform(translation=(-5,6,-8),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(1,1,1))),
          geometry=Text(DEF='TYPESTRING1',string=["message from Script is inserted here"],
            fontStyle=FontStyle(style_='BOLD')))]),
      Transform(translation=(-3,5,-8),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(1,1,1))),
          geometry=Text(DEF='TYPESTRING2',string=["message from Script is inserted here"],
            fontStyle=FontStyle(style_='BOLD')))]),
      Transform(translation=(-3,4,-8),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(1,1,1))),
          geometry=Text(DEF='TYPESTRING3',string=["message from Script is inserted here"],
            fontStyle=FontStyle(style_='BOLD')))]),
      Transform(translation=(0,4,-8),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(1,1,1))),
          geometry=Text(DEF='TYPESTRING4',string=["message from Script is inserted here"],
            fontStyle=FontStyle(style_='BOLD')))])]),
    Transform(
      children=[
      Shape(
        appearance=Appearance(
          material=Material(DEF='BOX1')),
        geometry=Box(),)]),
    Script(DEF='NAVTYPE',directOutput=True,url=["default_binding_single.js","https://www.web3d.org/x3d/content/examples/ConformanceNist/BindableNodes/NavigationInfo/default_binding_single.js"],
      field=[
      field(accessType='initializeOnly',name='nav1',type='SFNode',
        children=[
        NavigationInfo(USE='NAV1')]),
      field(accessType='inputOnly',name='printType1',type='SFBool'),
      field(accessType='initializeOnly',name='typestring1',type='SFNode',
        children=[
        Text(USE='TYPESTRING1')]),
      field(accessType='initializeOnly',name='typestring2',type='SFNode',
        children=[
        Text(USE='TYPESTRING2')]),
      field(accessType='initializeOnly',name='typestring3',type='SFNode',
        children=[
        Text(USE='TYPESTRING3')]),
      field(accessType='initializeOnly',name='typestring4',type='SFNode',
        children=[
        Text(USE='TYPESTRING4')])]),
    ROUTE(fromField='isBound',fromNode='NAV1',toField='printType1',toNode='NAVTYPE')])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for default_binding_single.py")
