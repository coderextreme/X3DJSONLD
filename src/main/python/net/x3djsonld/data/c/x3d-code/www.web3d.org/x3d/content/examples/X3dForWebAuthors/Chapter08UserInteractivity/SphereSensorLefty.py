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
    meta(content='SphereSensorLefty.x3d',name='title'),
    meta(content='Using a separate SphereSensor, Lefty shark can be oriented in any direction by remote control. Navigation locked so that no other scene rotation is possible.',name='description'),
    meta(content='Leonard Daly and Don Brutzman',name='creator'),
    meta(content='10 June 2006',name='created'),
    meta(content='20 October 2019',name='modified'),
    meta(content='Xj3D not supporting SphereSensor autoOffset field correctly',name='warning'),
    meta(content='http://X3dGraphics.com',name='reference'),
    meta(content='https://www.web3d.org/x3d/content/examples/X3dResources.html',name='reference'),
    meta(content='Copyright 2006, Leonard Daly and Don Brutzman',name='rights'),
    meta(content='X3D book, X3D graphics, X3D-Edit, http://www.x3dGraphics.com',name='subject'),
    meta(content='http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter08UserInteractivity/SphereSensorLefty.x3d',name='identifier'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../license.html',name='license')]),
  Scene=Scene(
    children=[
    WorldInfo(title='SphereSensorLefty.x3d'),
    Background(skyColor=[(1,1,1)]),
    NavigationInfo(DEF='LockUserSceneRotation',type=["NONE"]),
    Viewpoint(description='Book View',orientation=(0,-1,0,0.05),position=(-0.06,-0.29,8.78)),
    Transform(DEF='UserInterfaceTranslation',translation=(2,-2,3),
      #  Note that splitting the single Transform into two, and embedding SphereSensor here, shields it from affecting other nodes in scene 
      children=[
      SphereSensor(DEF='Rotator',description='drag sphere to rotate Lefty'),
      #  this nested Transform allows rotation about the center of the local coordinate frame 
      Transform(DEF='UserInterfaceRotation',
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0,0,1))),
          geometry=Sphere(radius=.5))])]),
    #  note that the shark is translated to a different coordinate reference frame, so the SphereSensor is like a remote control 
    Transform(DEF='SharkRotation',translation=(0,0,7),
      children=[
      Inline(url=["../KelpForestExhibit/SharkLefty.x3d","http://X3dGraphics.com/examples/X3dForWebAuthors/KelpForestExhibit/SharkLefty.x3d","../KelpForestExhibit/SharkLefty.wrl","http://X3dGraphics.com/examples/X3dForWebAuthors/KelpForestExhibit/SharkLefty.wrl"])]),
    ROUTE(fromField='rotation_changed',fromNode='Rotator',toField='rotation',toNode='SharkRotation'),
    #  note that the shark will rotate without this ROUTE but that user interaction feels smoother and more natural 
    ROUTE(fromField='rotation_changed',fromNode='Rotator',toField='rotation',toNode='UserInterfaceRotation')])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for SphereSensorLefty.py")
