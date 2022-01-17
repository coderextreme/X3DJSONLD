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
    meta(content='HeadsUpDisplayExample.x3d',name='title'),
    meta(content='Prototype definition that demonstrates use of a simple HeadsUpDisplay (HUD) prototype that maintains a stable position for its children on the screen.',name='description'),
    meta(content='Leonard Daly and Don Brutzman',name='creator'),
    meta(content='15 July 2006',name='created'),
    meta(content='24 October 2016',name='modified'),
    meta(content='HeadsUpDisplayPrototype.x3d',name='reference'),
    meta(content='http://X3dGraphics.com',name='reference'),
    meta(content='https://www.web3d.org/x3d/content/examples/X3dResources.html',name='reference'),
    meta(content='Copyright 2006, Daly Realism and Don Brutzman',name='rights'),
    meta(content='X3D book, X3D graphics, X3D-Edit, http://www.x3dGraphics.com',name='subject'),
    meta(content='http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter14Prototypes/HeadsUpDisplayExample.x3d',name='identifier'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../license.html',name='license')]),
  Scene=Scene(
    #  Simple Heads-Up Display (HUD) Prototype\n \n Manages the display of a HUD and maintains its position on the screen.\n Changes to fieldOfView (in Viewpoint node) will change screen position\n \n Fields:\n hudSize Size of HUD (initializeOnly - SFVec3f) default="1 1 .01"\n hudColor Color of HUD (inputOutput - SFColor) default="1 1 1"\n screenOffset Offset of HUD. This field positions the HUD on the display screen (inputOutput - SFVec3f) default="0 0 0"\n hudGeometry Geometry to be placed on the HUD. Origin is center of HUD. (inputOutput - MFNode) default = []\n position_changed Current viewer location (outputOnly - SFVec3f)\n orientation_changed Current viewer orientation (outputOnly - SFRotation)\n \n \n 
    children=[
    ExternProtoDeclare(appinfo='Heads-up display (HUD) keeps child geometry aligned on screen in a consistent location',name='HeadsUpDisplay',url=["HeadsUpDisplayPrototype.x3d#HeadsUpDisplay","http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter14Prototypes/HeadsUpDisplayPrototype.x3d#HeadsUpDisplay","HeadsUpDisplayPrototype.wrl#HeadsUpDisplay","http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter14Prototypes/HeadsUpDisplayPrototype.wrl#HeadsUpDisplay"],
      field=[
      field(accessType='inputOutput',appinfo='offset position for HUD relative to current view location, default 0 0 -5',name='screenOffset',type='SFVec3f'),
      field(accessType='inputOutput',appinfo='X3D content positioned at HUD offset',name='children',type='MFNode'),
      field(accessType='outputOnly',appinfo='HUD position update (in world coordinates) relative to original location',name='position_changed',type='SFVec3f'),
      field(accessType='outputOnly',appinfo='HUD orientation update relative to original location',name='orientation_changed',type='SFRotation')]),
    Background(DEF='SandyShallowBottom',groundAngle=[0.05,1.52,1.56,1.5707],groundColor=[(0.2,0.2,0),(0.3,0.3,0),(0.5,0.5,0.3),(0.1,0.3,0.4),(0,0.2,0.4)],skyAngle=[0.04,0.05,0.1,1.309,1.570],skyColor=[(0.8,0.8,0.2),(0.8,0.8,0.2),(0.1,0.1,0.6),(0.1,0.1,0.6),(0.1,0.25,0.8),(0.6,0.6,0.9)]),
    Viewpoint(description='Heads-up display (HUD)'),
    #  ProtoDeclare is the "cookie cutter" template, ProtoInstance creates an actual occurrence 
    ProtoInstance(DEF='HeadsUpDisplayInstance',name='HeadsUpDisplay',
      #  example: upper left-hand corner of screen (x=-2, y=1) and set back z=-5 from user view 
      fieldValue=[
      fieldValue(name='screenOffset',value=(-0.75,1,-5)),
      fieldValue(name='children',
        children=[
        Shape(
          geometry=Text(string=["HUD text stays fixed","while user navigates"],
            fontStyle=FontStyle(justify=["MIDDLE","MIDDLE"],size=0.3)),
          appearance=Appearance(
            material=Material(diffuseColor=(0.894118,0.819608,1))))])]),
    Inline(url=["../HelloWorld.x3d","http://X3dGraphics.com/examples/X3dForWebAuthors/HelloWorld.x3d","../HelloWorld.wrl","http://X3dGraphics.com/examples/X3dForWebAuthors/HelloWorld.wrl"])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
# print('check newModel.XML() serialization...')
newModelXML= newModel.XML() # test export method XML() for exceptions during export
newModel.XMLvalidate()

try:
#   print('check newModel.VRML() serialization...')
    newModelVRML=newModel.VRML() # test export method VRML() for exceptions during export
    # print(prependLineNumbers(newModelVRML)) # debug
    print("Python-to-VRML export of VRML output successful")
except BaseException as err:
    print("*** Python-to-VRML export of VRML output failed:", err)
    if newModelVRML: # may have failed to generate
        print(prependLineNumbers(newModelVRML, err.lineno))

try:
#   print('check newModel.JSON() serialization...')
    newModelJSON=newModel.JSON() # test export method JSON() for exceptions during export
#   print(prependLineNumbers(newModelJSON)) # debug
    print("Python-to-JSON export of JSON output successful (still testing)")
except SyntaxError as err:
    print("*** Python-to-JSON export of JSON output failed:", err)
    if newModelJSON: # may have failed to generate
        print(prependLineNumbers(newModelJSON,err.lineno))

print("python x3d.py load and self-test complete for HeadsUpDisplayExample.py")
