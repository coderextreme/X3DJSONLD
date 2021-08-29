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
    meta(content='value_changed.x3d',name='title'),
    meta(content='value_changed-movie.mpg',name='MovingImage'),
    meta(content='http://www.nist.gov/vrml.html',name='reference'),
    meta(content='http://www.itl.nist.gov/div897/ctg/vrml/vrml.html',name='reference'),
    meta(content='http://www.itl.nist.gov/div897/ctg/vrml/members.html',name='creator'),
    meta(content='This file was provided by the National Institute of Standards and Technology, and is part of the X3D Conformance Test Suite, available at http://www.nist.gov/vrml.html The information contained within this file is provided for use in establishing conformance to the ISO VRML97 Specification. Conformance to this test does not imply recommendation or endorsement by the National Institute of Standards and Technology. This software can be redistributed and/or modified freely provided that any derivative works bear some notice that they are derived from it, and any modified versions bear some notice that they have been modified.',name='disclaimer'),
    meta(content='Correct definition and compliance of this conformance scene is maintained by the X3D Working Group, https://www.web3d.org/working-groups/x3d',name='info'),
    meta(content='Michael Kass NIST, Don Brutzman NPS',name='translator'),
    meta(content='21 January 2001',name='translated'),
    meta(content='20 October 2019',name='modified'),
    meta(content='Test of a ScalarInterpolators ability to set its initial "value_changed" field to the correct value prior to receiving any events. Two ScalarInterpolator node are associated with two seperate Cylinder geometry. The ScalarInterpolator associated with the Cylinder on the left has a keyValue of 1.0, while the ScalarInterpolator associated with the right Cylinder has the default of no keyValues, or [ ]. As a result, the ScalarInterpolator on the left should initialize its "value_changed" field to the value of its first keyValue, or 1.0 . Because no keyValues are provided to the right ScalarInterpolator, it should initialize its "value_changed" field to the SFFloat default value of 0.0 A Script node reads this value for each ScalarInterpolator, and will illuminate the associated Cylinder in intensity by a value equal to its initially read "value_changed" SFFloat value. When the pointing device passes over the left Cylinder, it should illumminate to an intensity value of 1.0 (bright) each time it is indicated, then return to its original intensity (0.5) when no longer indicated by the pointing device. When the pointing device passes over the right Cylinder, it have no light intensity (ie. it should remain black).',name='description'),
    meta(content='https://www.web3d.org/x3d/content/examples/ConformanceNist/Interpolators/ScalarInterpolator/value_changed.x3d',name='identifier'),
    meta(content='Vrml97ToX3dNist, http://ovrt.nist.gov/v2_x3d.html',name='generator'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    WorldInfo(title='value_changed.x3d'),
    NavigationInfo(headlight=False,type=["EXAMINE","WALK","FLY","ANY"]),
    Background(groundColor=[(0,0,0)],skyColor=[(0.2,0.2,0.2)]),
    ScalarInterpolator(DEF='SCALAR_INTERPOLATOR1',key=[0,0.25,0.5,0.75,1],keyValue=[1,1,1,1,1]),
    ScalarInterpolator(DEF='SCALAR_INTERPOLATOR2'),
    Group(
      children=[
      Transform(translation=(-2,0,0),
        children=[
        TouchSensor(DEF='TS1',description='touch to activate'),
        Shape(
          appearance=Appearance(
            material=Material(),),
          geometry=Cylinder(),),
        Transform(translation=(0,0,1),
          children=[
          SpotLight(DEF='LIGHT1',beamWidth=1.570796,cutOffAngle=.785398,direction=(-0.6,0,-1),intensity=0)])]),
      Transform(translation=(2,0,0),
        children=[
        TouchSensor(DEF='TS2',description='touch to activate'),
        Shape(
          appearance=Appearance(
            material=Material(),),
          geometry=Cylinder(),),
        Transform(translation=(0,0,1),
          children=[
          SpotLight(DEF='LIGHT2',beamWidth=1.570796,cutOffAngle=.785398,direction=(0.6,0,-1),intensity=0)])])]),
    Script(DEF='LIGHTIT',directOutput=True,url=["value_changed.js","https://www.web3d.org/x3d/content/examples/ConformanceNist/Interpolators/ScalarInterpolator/value_changed.js"],
      field=[
      field(accessType='initializeOnly',name='nodein1',type='SFNode',
        children=[
        ScalarInterpolator(USE='SCALAR_INTERPOLATOR1')]),
      field(accessType='initializeOnly',name='nodein2',type='SFNode',
        children=[
        ScalarInterpolator(USE='SCALAR_INTERPOLATOR2')]),
      field(accessType='initializeOnly',name='nodeout1',type='SFNode',
        children=[
        SpotLight(USE='LIGHT1')]),
      field(accessType='initializeOnly',name='nodeout2',type='SFNode',
        children=[
        SpotLight(USE='LIGHT2')]),
      field(accessType='initializeOnly',name='reset',type='SFFloat',value=0.0),
      field(accessType='inputOnly',name='isOver1',type='SFBool'),
      field(accessType='inputOnly',name='isOver2',type='SFBool'),
      field(accessType='outputOnly',name='intensity',type='SFFloat')]),
    ROUTE(fromField='isOver',fromNode='TS1',toField='isOver1',toNode='LIGHTIT'),
    ROUTE(fromField='isOver',fromNode='TS2',toField='isOver2',toNode='LIGHTIT')])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for value_changed.py")
