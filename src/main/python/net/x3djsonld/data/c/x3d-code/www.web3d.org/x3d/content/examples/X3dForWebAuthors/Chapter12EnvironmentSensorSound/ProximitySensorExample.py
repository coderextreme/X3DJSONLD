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
    meta(content='ProximitySensorExample.x3d',name='title'),
    meta(content='Demonstrates use of a ProximitySensor in building a HUD',name='description'),
    meta(content='Leonard Daly and Don Brutzman',name='creator'),
    meta(content='15 July 2006',name='created'),
    meta(content='14 June 2020',name='modified'),
    meta(content='ProximitySensorVisualization.png',name='Image'),
    meta(content='http://X3dGraphics.com',name='reference'),
    meta(content='https://www.web3d.org/x3d/content/examples/X3dResources.html',name='reference'),
    meta(content='Copyright 2006, Daly Realism and Don Brutzman',name='rights'),
    meta(content='X3D book, X3D graphics, X3D-Edit, http://www.x3dGraphics.com',name='subject'),
    meta(content='http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter12EnvironmentSensorSound/ProximitySensorExample.x3d',name='identifier'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../license.html',name='license')]),
  Scene=Scene(
    #  HUD = Heads-Up Display, which stays on screen in same relative location even while user navigates 
    #  TODO: authors should use X3D-Edit editing pane to try out the ProximitySensor Visualize capability 
    children=[
    WorldInfo(title='ProximitySensor.x3d'),
    ProximitySensor(DEF='HereIAm',size=(100,100,100)),
    Inline(url=["../KelpForestExhibit/KelpForestMain.x3d","http://X3dGraphics.com/examples/X3dForWebAuthors/KelpForestExhibit/KelpForestMain.x3d","../KelpForestExhibit/KelpForestMain.wrl","http://X3dGraphics.com/examples/X3dForWebAuthors/KelpForestExhibit/KelpForestMain.wrl"]),
    Transform(DEF='HUD',
      children=[
      Transform(DEF='PushBack',translation=(-.8,1.,-3),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(1,1,0))),
          geometry=Box(size=(1.5,.4,.1))),
        Transform(DEF='HudContents',translation=(-.7,.3,.1),
          children=[
          Transform(DEF='TopText',translation=(0,-.2,0),
            children=[
            Shape(
              appearance=Appearance(DEF='Text_app',
                material=Material(diffuseColor=(0,0,0))),
              geometry=Text(DEF='TopTextLine',string=["Position 0.00 0.00 10.00"],
                fontStyle=FontStyle(DEF='TextStyle',family=["SANS","SERIF"],justify=["BEGIN","BEGIN"],size=0.1)))]),
          Transform(DEF='BottomText',translation=(0,-.4,0),
            children=[
            Shape(
              appearance=Appearance(USE='Text_app'),
              geometry=Text(DEF='BottomTextLine',string=["Orientation: 0.000 1.000 0.000 0.00"],
                fontStyle=FontStyle(USE='TextStyle')))])])])]),
    Script(DEF='CnvText',url=["ProximitySensorScriptConvertText.js","http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter12EnvironmentSensorSound/ProximitySensorScriptConvertText.js"],
      field=[
      field(accessType='inputOnly',name='position',type='SFVec3f'),
      field(accessType='inputOnly',name='orientation',type='SFRotation'),
      field(accessType='outputOnly',name='positionText',type='MFString'),
      field(accessType='outputOnly',name='orientationText',type='MFString')]),
    ROUTE(fromField='orientation_changed',fromNode='HereIAm',toField='rotation',toNode='HUD'),
    ROUTE(fromField='position_changed',fromNode='HereIAm',toField='translation',toNode='HUD'),
    ROUTE(fromField='position_changed',fromNode='HereIAm',toField='position',toNode='CnvText'),
    ROUTE(fromField='orientation_changed',fromNode='HereIAm',toField='orientation',toNode='CnvText'),
    ROUTE(fromField='positionText',fromNode='CnvText',toField='string',toNode='TopTextLine'),
    ROUTE(fromField='orientationText',fromNode='CnvText',toField='string',toNode='BottomTextLine')])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for ProximitySensorExample.py")
