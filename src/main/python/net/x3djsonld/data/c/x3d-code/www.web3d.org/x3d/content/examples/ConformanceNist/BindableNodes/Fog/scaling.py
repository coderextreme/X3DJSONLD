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
    meta(content='scaling.x3d',name='title'),
    meta(content='http://www.nist.gov/vrml.html',name='reference'),
    meta(content='http://www.itl.nist.gov/div897/ctg/vrml/vrml.html',name='reference'),
    meta(content='http://www.itl.nist.gov/div897/ctg/vrml/members.html',name='creator'),
    meta(content='This file was provided by the National Institute of Standards and Technology, and is part of the X3D Conformance Test Suite, available at http://www.nist.gov/vrml.html The information contained within this file is provided for use in establishing conformance to the ISO VRML97 Specification. Conformance to this test does not imply recommendation or endorsement by the National Institute of Standards and Technology. This software can be redistributed and/or modified freely provided that any derivative works bear some notice that they are derived from it, and any modified versions bear some notice that they have been modified.',name='disclaimer'),
    meta(content='Correct definition and compliance of this conformance scene is maintained by the X3D Working Group, https://www.web3d.org/working-groups/x3d',name='info'),
    meta(content='Michael Kass NIST, Don Brutzman NPS',name='translator'),
    meta(content='21 January 2001',name='translated'),
    meta(content='20 October 2019',name='modified'),
    meta(content='Test Transform scaling effect on Fog visibility. This world contains two Viewpoint nodes, residing in two seperate Transforms. One Viewpoint is contained in a Transform with a scale of 1 1 1. A second Viewpoint is contained in a Transform with a scale of (.01 .01 .01). Indicating the Text geometry associated with each Viewpoint places the viewer in that Viepoints local coordinate system. A single Fog node with a visibilityLimit of 40 meters, and Box geometry exist in the root Transform. Indicating the appropriate Text geometry with the pointing device moves the Viewpoint to either of the two Transforms local coordinate systems. As a result: indicating the left Text geometry places the Viewpoint at a distance of 20 meters from the Box, while indicating the right Text places the Viewpoint in a local coordinate system where the viewer is 2000 meters from the Box. Hence, indicating the left Text results in a half-fogged Box, while indicating the right Text renderes a fully-fogged Box.',name='description'),
    meta(content='https://www.web3d.org/x3d/content/examples/ConformanceNist/BindableNodes/Fog/scaling.x3d',name='identifier'),
    meta(content='Vrml97ToX3dNist, http://ovrt.nist.gov/v2_x3d.html',name='generator'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    WorldInfo(title='scaling.x3d'),
    Viewpoint(DEF='DUMMYVIEW',description='initial view',position=(0,0,20)),
    Fog(DEF='DUMMYFOG'),
    Fog(DEF='REDFOG',color=(1,0,0),visibilityRange=40),
    Transform(translation=(0,2,0),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(),),
        geometry=Box(size=(6,6,2)))]),
    Transform(translation=(-10,2.5,2),
      children=[
      TouchSensor(DEF='TOUCH1',description='touch for close range'),
      Shape(
        appearance=Appearance(
          material=Material(),),
        geometry=Text(string=["scale = 1 1 1","(distance = 20)"],
          fontStyle=FontStyle(style_='BOLD')))]),
    Transform(translation=(4.2,2.5,2),
      children=[
      TouchSensor(DEF='TOUCH2',description='touch for far range'),
      Shape(
        appearance=Appearance(
          material=Material(),),
        geometry=Text(string=["scale = .01 .01 .01","(distance = 2000)"],
          fontStyle=FontStyle(style_='BOLD')))]),
    Transform(
      children=[
      Viewpoint(DEF='VIEW1',description='1-to-1 scale view',position=(0,0,20))]),
    Transform(scale=(0.01,0.01,0.01),
      children=[
      Viewpoint(DEF='VIEW2',description='1-to-100 scale view',position=(0,0,2000))]),
    Script(DEF='STACKSCRIPT',directOutput=True,url=["scaling.js","https://www.web3d.org/x3d/content/examples/ConformanceNist/BindableNodes/Fog/scaling.js"],
      field=[
      field(accessType='initializeOnly',name='redfog',type='SFNode',
        children=[
        Fog(USE='REDFOG')]),
      field(accessType='initializeOnly',name='view1',type='SFNode',
        children=[
        Viewpoint(USE='VIEW1')]),
      field(accessType='initializeOnly',name='view2',type='SFNode',
        children=[
        Viewpoint(USE='VIEW2')]),
      field(accessType='inputOnly',name='smallScale',type='SFBool'),
      field(accessType='inputOnly',name='largeScale',type='SFBool')]),
    ROUTE(fromField='isOver',fromNode='TOUCH1',toField='largeScale',toNode='STACKSCRIPT'),
    ROUTE(fromField='isOver',fromNode='TOUCH2',toField='smallScale',toNode='STACKSCRIPT')])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for scaling.py")
