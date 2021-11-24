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
    meta(content='default_color.x3d',name='title'),
    meta(content='http://www.nist.gov/vrml.html',name='reference'),
    meta(content='http://www.itl.nist.gov/div897/ctg/vrml/vrml.html',name='reference'),
    meta(content='http://www.itl.nist.gov/div897/ctg/vrml/members.html',name='creator'),
    meta(content='This file was provided by the National Institute of Standards and Technology, and is part of the X3D Conformance Test Suite, available at http://www.nist.gov/vrml.html The information contained within this file is provided for use in establishing conformance to the ISO VRML97 Specification. Conformance to this test does not imply recommendation or endorsement by the National Institute of Standards and Technology. This software can be redistributed and/or modified freely provided that any derivative works bear some notice that they are derived from it, and any modified versions bear some notice that they have been modified.',name='disclaimer'),
    meta(content='Correct definition and compliance of this conformance scene is maintained by the X3D Working Group, https://www.web3d.org/working-groups/x3d',name='info'),
    meta(content='Michael Kass NIST, Don Brutzman NPS',name='translator'),
    meta(content='21 January 2001',name='translated'),
    meta(content='20 October 2019',name='modified'),
    meta(content='Test default Fog color. A Fog node with a default color is present in this world. A Box geometry moves forward and backward through the world. Because the default value of the "color" field is "1 1 1", the Fog will have a white color. The result should be: The white Box should vary in intensity as it moves backward and forward through the world; being brightest at its farthest point from the viewer, and at its lowest intensity when at its closest point to the viewer.',name='description'),
    meta(content='https://www.web3d.org/x3d/content/examples/ConformanceNist/BindableNodes/Fog/default_color.x3d',name='identifier'),
    meta(content='Vrml97ToX3dNist, http://ovrt.nist.gov/v2_x3d.html',name='generator'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    WorldInfo(title='default_color.x3d'),
    NavigationInfo(type=["EXAMINE","WALK","FLY","ANY"]),
    Viewpoint(description='Front View'),
    Fog(DEF='DEFAULT_FOG',visibilityRange=40),
    TimeSensor(DEF='TIME',cycleInterval=10,loop=True),
    PositionInterpolator(DEF='POSITION',key=[0,0.1,0.2,0.3,0.4,0.5,0.6,0.7,0.8,0.9,1],keyValue=[(0,0,-50),(0,0,-40),(0,0,-30),(0,0,-20),(0,0,-10),(0,0,0),(0,0,-10),(0,0,-20),(0,0,-30),(0,0,-40),(0,0,-50)]),
    Transform(DEF='TRANS',
      children=[
      Shape(
        appearance=Appearance(
          material=Material(DEF='COLOR',diffuseColor=(0,0,0))),
        geometry=Box(size=(3,3,3)))]),
    Transform(translation=(-3.5,3,0),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(1,1,1))),
        geometry=Text(string=["Default color = 1 1 1"],
          fontStyle=FontStyle(style_='BOLD')))]),
    Transform(translation=(-3,-3,0),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(1,1,1))),
        geometry=Text(DEF='DEFAULT_TEXT',string=["message from Script is inserted here"],
          fontStyle=FontStyle(style_='BOLD')))]),
    Script(DEF='STACKSCRIPT',directOutput=True,url=["default_color.js","https://www.web3d.org/x3d/content/examples/ConformanceNist/BindableNodes/Fog/default_color.js"],
      field=[
      field(accessType='initializeOnly',name='defaultFog',type='SFNode',
        children=[
        Fog(USE='DEFAULT_FOG')]),
      field(accessType='initializeOnly',name='defaultText',type='SFNode',
        children=[
        Text(USE='DEFAULT_TEXT')]),
      field(accessType='initializeOnly',name='defaultTrueString',type='MFString',value=["true"]),
      field(accessType='initializeOnly',name='defaultFalseString',type='MFString',value=["false"]),
      field(accessType='inputOnly',name='queryDefault',type='SFBool')]),
    ROUTE(fromField='isBound',fromNode='DEFAULT_FOG',toField='queryDefault',toNode='STACKSCRIPT'),
    ROUTE(fromField='fraction_changed',fromNode='TIME',toField='set_fraction',toNode='POSITION'),
    ROUTE(fromField='value_changed',fromNode='POSITION',toField='set_translation',toNode='TRANS')])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for default_color.py")
