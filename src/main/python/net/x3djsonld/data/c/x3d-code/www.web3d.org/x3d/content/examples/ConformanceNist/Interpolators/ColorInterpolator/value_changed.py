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
    meta(content='Test of a ColorInterpolatorss ability to load the correct keyValue into its value_changed field before any events are received. The Sphere on the left has its color set to that of the value_changed field of a ColorInterpolator that has "blue" as its first SFColor keyValue. This value is routed to the Spheres Material node diffuseColor through a Script node. As a result, the left Sphere should first appear "white", then, when the pointing device passes over the left Sphere, it should turn blue, then return to white when the pointing device is no longer over the Sphere. The second Sphere on the right has a similar set of conditions, with the exception of having a ColorInterpolator with NULL keys and keyValues. This should result in the value_changed field having an initial SFColor value of 0 0 0 before any events are received by the ColorInterpolator. As a result, the right Sphere should first appear white, then turn "black" (a default of 0 0 0) when the pointing device passes over the Sphere, then return to white when the pointing device no longer indicates the Sphere.',name='description'),
    meta(content='https://www.web3d.org/x3d/content/examples/ConformanceNist/Interpolators/ColorInterpolator/value_changed.x3d',name='identifier'),
    meta(content='Vrml97ToX3dNist, http://ovrt.nist.gov/v2_x3d.html',name='generator'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    WorldInfo(title='value_changed.x3d'),
    Background(groundColor=[(0,0,0)],skyColor=[(0.2,0.2,0.2)]),
    ColorInterpolator(DEF='COLORINTERP1',key=[0,0.5,1],keyValue=[(0,0,1),(0,0,1),(0,0,1)]),
    ColorInterpolator(DEF='COLORINTERP2'),
    Transform(DEF='TRANS1',translation=(-2,0,0),
      children=[
      TouchSensor(DEF='TS1',description='touch to activate'),
      Shape(
        appearance=Appearance(
          material=Material(DEF='SPHEREMATERIAL1',diffuseColor=(1,1,1))),
        geometry=Sphere(),)]),
    Transform(DEF='TRANS2',translation=(2,0,0),
      children=[
      TouchSensor(DEF='TS2',description='touch to activate'),
      Shape(
        appearance=Appearance(
          material=Material(DEF='SPHEREMATERIAL2')),
        geometry=Sphere(),)]),
    Script(DEF='COLORIT',directOutput=True,url=["value_changed.js","https://www.web3d.org/x3d/content/examples/ConformanceNist/Interpolators/ColorInterpolator/value_changed.js"],
      field=[
      field(accessType='initializeOnly',name='nodein',type='SFNode',
        children=[
        ColorInterpolator(USE='COLORINTERP1')]),
      field(accessType='initializeOnly',name='nodein2',type='SFNode',
        children=[
        ColorInterpolator(USE='COLORINTERP2')]),
      field(accessType='initializeOnly',name='nodeout',type='SFNode',
        children=[
        Material(USE='SPHEREMATERIAL1')]),
      field(accessType='initializeOnly',name='nodeout2',type='SFNode',
        children=[
        Material(USE='SPHEREMATERIAL2')]),
      field(accessType='inputOnly',name='isOver',type='SFBool'),
      field(accessType='inputOnly',name='isOver2',type='SFBool'),
      field(accessType='outputOnly',name='color',type='SFColor')]),
    ROUTE(fromField='isOver',fromNode='TS1',toField='isOver',toNode='COLORIT'),
    ROUTE(fromField='isOver',fromNode='TS2',toField='isOver2',toNode='COLORIT')])
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
