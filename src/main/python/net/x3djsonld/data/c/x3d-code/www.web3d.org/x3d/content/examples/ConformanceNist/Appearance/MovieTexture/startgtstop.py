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
    meta(content='startgtstop.x3d',name='title'),
    meta(content='startgtstop-movie.mpg',name='MovingImage'),
    meta(content='http://www.nist.gov/vrml.html',name='reference'),
    meta(content='http://www.itl.nist.gov/div897/ctg/vrml/vrml.html',name='reference'),
    meta(content='http://www.itl.nist.gov/div897/ctg/vrml/members.html',name='creator'),
    meta(content='This file was provided by the National Institute of Standards and Technology, and is part of the X3D Conformance Test Suite, available at http://www.nist.gov/vrml.html The information contained within this file is provided for use in establishing conformance to the ISO VRML97 Specification. Conformance to this test does not imply recommendation or endorsement by the National Institute of Standards and Technology. This software can be redistributed and/or modified freely provided that any derivative works bear some notice that they are derived from it, and any modified versions bear some notice that they have been modified.',name='disclaimer'),
    meta(content='Correct definition and compliance of this conformance scene is maintained by the X3D Working Group, https://www.web3d.org/working-groups/x3d',name='info'),
    meta(content='Michael Kass NIST, Don Brutzman NPS',name='translator'),
    meta(content='21 January 2001',name='translated'),
    meta(content='20 October 2019',name='modified'),
    meta(content='Test startTime greater than stopTime. With the loop field is set to false, and the startTime (clicked by user) is greater than stopTime (with a default of 0) and speed is not equal to 0 (with a default of 1), the movie will run once, right to left.',name='description'),
    meta(content='https://www.web3d.org/x3d/content/examples/ConformanceNist/Appearance/MovieTexture/startgtstop.x3d',name='identifier'),
    meta(content='Vrml97ToX3dNist, http://ovrt.nist.gov/v2_x3d.html',name='generator'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    WorldInfo(title='startgtstop.x3d'),
    NavigationInfo(type=["EXAMINE","WALK","FLY","ANY"]),
    Group(
      children=[
      Transform(DEF='Cube',
        children=[
        Shape(
          appearance=Appearance(
            texture=MovieTexture(DEF='Movie',loop=True,url=["vts.mpg","https://www.web3d.org/x3d/content/examples/ConformanceNist/vts.mpg"])),
          geometry=Box(),)])]),
    Group(
      children=[
      Transform(scale=(0.02,0.02,0.02),translation=(-2,2.5,0),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(DEF='GoMaterial',ambientIntensity=1,diffuseColor=(0,1,0))),
          geometry=Text(DEF='Start',string=["now"],
            fontStyle=FontStyle(size=32,style_='BOLD')))]),
      TouchSensor(DEF='TouchStart',description='touch to activate'),
      TimeSensor(DEF='GoTimer'),
      ColorInterpolator(DEF='GoFlash',key=[0,0.5,1],keyValue=[(0,1,0),(1,1,1),(0,1,0)])]),
    ROUTE(fromField='touchTime',fromNode='TouchStart',toField='set_startTime',toNode='Movie'),
    ROUTE(fromField='touchTime',fromNode='TouchStart',toField='set_startTime',toNode='GoTimer'),
    ROUTE(fromField='fraction_changed',fromNode='GoTimer',toField='set_fraction',toNode='GoFlash'),
    ROUTE(fromField='value_changed',fromNode='GoFlash',toField='set_diffuseColor',toNode='GoMaterial')])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for startgtstop.py")
