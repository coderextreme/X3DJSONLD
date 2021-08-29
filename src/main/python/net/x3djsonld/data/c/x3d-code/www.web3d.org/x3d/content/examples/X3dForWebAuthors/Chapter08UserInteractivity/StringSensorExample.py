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

newModel=X3D(profile='Immersive',version='3.3',
  head=head(
    children=[
    meta(content='StringSensorExample.x3d',name='title'),
    meta(content='A StringSensor example that displays typed text in the world.',name='description'),
    meta(content='Leonard Daly and Don Brutzman',name='creator'),
    meta(content='7 June 2006',name='created'),
    meta(content='14 June 2020',name='modified'),
    meta(content='http://X3dGraphics.com',name='reference'),
    meta(content='https://www.web3d.org/x3d/content/examples/X3dResources.html',name='reference'),
    meta(content='Copyright (c) 2006, Daly Realism and Don Brutzman',name='rights'),
    meta(content='X3D book, X3D graphics, X3D-Edit, http://www.x3dGraphics.com',name='subject'),
    meta(content='http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter08UserInteractivity/StringSensorExample.x3d',name='identifier'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../license.html',name='license')]),
  Scene=Scene(
    children=[
    WorldInfo(title='StringSensor.x3d'),
    Background(skyColor=[(1,1,1)]),
    Viewpoint(description='Book View',position=(-0.02,0.01,6.85)),
    StringSensor(DEF='GenText'),
    Transform(translation=(0,0.8,0),
      children=[
      Transform(translation=(0,0,-.1),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(1,1,.6))),
          geometry=Box(size=(8,1.5,.01)))]),
      Transform(translation=(-3.8,0.2,0),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0,0,1))),
          geometry=Text(DEF='DisplayText',
            fontStyle=FontStyle(justify=["BEGIN","MIDDLE"],size=0.75)))]),
      #  convert StringSensor SFString into Text node MFString by using explicit typecasting in ECMAScript 
      Script(DEF='Converter',url=["StringSensorScriptConverter.js","http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter08UserInteractivity/StringSensorScriptConverter.js"],
        field=[
        field(accessType='inputOnly',name='SFString_MFString',type='SFString'),
        field(accessType='outputOnly',name='MFString_out',type='MFString'),
        field(accessType='outputOnly',name='SFFloat_Xout',type='SFFloat'),
        field(accessType='outputOnly',name='SFFloat_Yout',type='SFFloat'),
        field(accessType='outputOnly',name='SFFloat_Zout',type='SFFloat')]),
      ROUTE(fromField='enteredText',fromNode='GenText',toField='SFString_MFString',toNode='Converter'),
      ROUTE(fromField='MFString_out',fromNode='Converter',toField='string',toNode='DisplayText'),
      Transform(translation=(0,-1.25,0),
        children=[
        Group(
          children=[
          Shape(
            geometry=Text(string=["StringSensor lets users enter text...","please type to test"],
              fontStyle=FontStyle(family=["SANS"],justify=["MIDDLE","BEGIN"],size=0.5)),
            appearance=Appearance(
              material=Material(diffuseColor=(0.7,0.7,0.7))))])])])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for StringSensorExample.py")
