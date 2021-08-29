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
    meta(content='headlight_range.x3d',name='title'),
    meta(content='http://www.nist.gov/vrml.html',name='reference'),
    meta(content='http://www.itl.nist.gov/div897/ctg/vrml/vrml.html',name='reference'),
    meta(content='http://www.itl.nist.gov/div897/ctg/vrml/members.html',name='creator'),
    meta(content='This file was provided by the National Institute of Standards and Technology, and is part of the X3D Conformance Test Suite, available at http://www.nist.gov/vrml.html The information contained within this file is provided for use in establishing conformance to the ISO VRML97 Specification. Conformance to this test does not imply recommendation or endorsement by the National Institute of Standards and Technology. This software can be redistributed and/or modified freely provided that any derivative works bear some notice that they are derived from it, and any modified versions bear some notice that they have been modified.',name='disclaimer'),
    meta(content='Correct definition and compliance of this conformance scene is maintained by the X3D Working Group, https://www.web3d.org/working-groups/x3d',name='info'),
    meta(content='Michael Kass NIST, Don Brutzman NPS',name='translator'),
    meta(content='21 January 2001',name='translated'),
    meta(content='20 October 2019',name='modified'),
    meta(content='headlight_rangeOn.png',name='Image'),
    meta(content='headlight_rangeOff.png',name='Image'),
    meta(content='This is a test of the default state of the headlight field, and setting headlight to true and false. Initially the Box geometry should be illuminated, indicating that the default headlight value is true. Pressing the pointing device button while over the Box geometry in this world should toggle the headlight field value of the NavigationInfo node from true to false, turning off the headlight, and providing no illumination to the Box geometry. The Box geometry should appear black. Subsequent toggling of the headlight should turn it on and off.',name='description'),
    meta(content='https://www.web3d.org/x3d/content/examples/ConformanceNist/BindableNodes/NavigationInfo/headlight_range.x3d',name='identifier'),
    meta(content='Vrml97ToX3dNist, http://ovrt.nist.gov/v2_x3d.html',name='generator'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    WorldInfo(title='headlight_range.x3d'),
    Background(groundAngle=[1.57],groundColor=[(0,0.5,0),(0,0.5,0)],skyColor=[(0,0,1)]),
    Viewpoint(description='Front View'),
    NavigationInfo(DEF='NAV1'),
    Transform(
      children=[
      TouchSensor(DEF='TOUCH',description='touch to toggle light switch'),
      Shape(
        appearance=Appearance(
          material=Material(),),
        geometry=Box(),)]),
    Script(DEF='LIGHTSWITCH',directOutput=True,url=["headlight_range.js","https://www.web3d.org/x3d/content/examples/ConformanceNist/BindableNodes/NavigationInfo/headlight_range.js"],
      field=[
      field(accessType='initializeOnly',name='nav1',type='SFNode',
        children=[
        NavigationInfo(USE='NAV1')]),
      field(accessType='inputOnly',name='toggle',type='SFBool')]),
    ROUTE(fromField='isActive',fromNode='TOUCH',toField='toggle',toNode='LIGHTSWITCH')])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for headlight_range.py")
