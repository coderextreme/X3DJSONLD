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
    meta(content='KeySensorLefty.x3d',name='title'),
    meta(content='A KeySensor is used to change relative Viewpoints looking at the shark Lefty, while a SphereSensor can also rotate Lefty in place.',name='description'),
    meta(content='Leonard Daly and Don Brutzman',name='creator'),
    meta(content='10 June 2006',name='created'),
    meta(content='20 October 2019',name='modified'),
    meta(content='http://X3dGraphics.com',name='reference'),
    meta(content='https://www.web3d.org/x3d/content/examples/X3dResources.html',name='reference'),
    meta(content='Copyright 2006, Leonard Daly and Don Brutzman',name='rights'),
    meta(content='X3D book, X3D graphics, X3D-Edit, http://www.x3dGraphics.com',name='subject'),
    meta(content='http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter08UserInteractivity/KeySensorLefty.x3d',name='identifier'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../license.html',name='license')]),
  Scene=Scene(
    children=[
    WorldInfo(title='KeySensorLefty.x3d'),
    Background(skyColor=[(1,1,1)]),
    Group(DEF='LeftyViewpointsUnrotated',
      children=[
      Viewpoint(DEF='View1',description='Lefty from the Right'),
      Viewpoint(DEF='View2',description='Lefty from the Front',orientation=(0,1,0,1.57),position=(10,0,0)),
      Viewpoint(DEF='View3',description='Lefty from the Left',orientation=(0,1,0,3.14),position=(0,0,-10)),
      Viewpoint(DEF='View4',description='Lefty from Behind',orientation=(0,1,0,-1.57),position=(-10,0,0)),
      Viewpoint(DEF='View5',description='Lefty from the Top',orientation=(1,0,0,-1.57),position=(0,10,0)),
      Viewpoint(DEF='View6',description='Lefty from the Bottom',orientation=(1,0,0,1.57),position=(0,-10,0))]),
    Transform(translation=(-2,2,0),
      children=[
      Billboard(axisOfRotation=(0,0,0),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0,0,0))),
          geometry=Text(string=["Press \'n\' key for next Viewpoint,","press \'p\' key ppnnfor previous Viewpoint."],
            fontStyle=FontStyle(family=["SANS"],justify=["BEGIN","BEGIN"],size=0.5)))])]),
    Transform(DEF='OrientationControl',translation=(2,-2,3),
      children=[
      SphereSensor(DEF='Rotator',description='Select and drag to rotate'),
      Transform(DEF='OrientationDisplay',
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0,0,1))),
          geometry=Sphere(radius=.5))])]),
    Transform(scale=(3,3,3),
      children=[
      Transform(DEF='ReOrient',
        children=[
        Inline(url=["../KelpForestExhibit/SharkLefty.x3d","http://X3dGraphics.com/examples/X3dForWebAuthors/KelpForestExhibit/SharkLefty.x3d","../KelpForestExhibit/SharkLefty.wrl","http://X3dGraphics.com/examples/X3dForWebAuthors/KelpForestExhibit/SharkLefty.wrl"])])]),
    ROUTE(fromField='rotation_changed',fromNode='Rotator',toField='rotation',toNode='OrientationDisplay'),
    ROUTE(fromField='rotation_changed',fromNode='Rotator',toField='rotation',toNode='ReOrient'),
    KeySensor(DEF='KeyDetector'),
    Script(DEF='KeyHandler',url=["KeySensorLeftyScript.js","http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter08UserInteractivity/KeySensorLeftyScript.js"],
      field=[
      field(accessType='inputOnly',name='keyPress',type='SFString'),
      field(accessType='initializeOnly',name='viewpointIndex',type='SFInt32',value=1),
      field(accessType='outputOnly',name='bind_View1',type='SFBool'),
      field(accessType='outputOnly',name='bind_View2',type='SFBool'),
      field(accessType='outputOnly',name='bind_View3',type='SFBool'),
      field(accessType='outputOnly',name='bind_View4',type='SFBool'),
      field(accessType='outputOnly',name='bind_View5',type='SFBool'),
      field(accessType='outputOnly',name='bind_View6',type='SFBool')]),
    ROUTE(fromField='keyPress',fromNode='KeyDetector',toField='keyPress',toNode='KeyHandler'),
    ROUTE(fromField='bind_View1',fromNode='KeyHandler',toField='set_bind',toNode='View1'),
    ROUTE(fromField='bind_View2',fromNode='KeyHandler',toField='set_bind',toNode='View2'),
    ROUTE(fromField='bind_View3',fromNode='KeyHandler',toField='set_bind',toNode='View3'),
    ROUTE(fromField='bind_View4',fromNode='KeyHandler',toField='set_bind',toNode='View4'),
    ROUTE(fromField='bind_View5',fromNode='KeyHandler',toField='set_bind',toNode='View5'),
    ROUTE(fromField='bind_View6',fromNode='KeyHandler',toField='set_bind',toNode='View6')])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for KeySensorLefty.py")
