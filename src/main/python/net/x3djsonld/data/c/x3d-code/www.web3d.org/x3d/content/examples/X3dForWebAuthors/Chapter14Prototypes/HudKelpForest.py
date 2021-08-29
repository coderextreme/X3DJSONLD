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
    meta(content='HudKelpForest.x3d',name='title'),
    meta(content='Demonstrates use of a ProximitySensor in building a HUD, with display values showing current view location.',name='description'),
    meta(content='Leonard Daly and Don Brutzman',name='creator'),
    meta(content='15 July 2006',name='created'),
    meta(content='20 October 2019',name='modified'),
    meta(content='HudKelpForestScreenshot.png',name='Image'),
    meta(content='http://X3dGraphics.com',name='reference'),
    meta(content='https://www.web3d.org/x3d/content/examples/X3dResources.html',name='reference'),
    meta(content='Copyright 2006, Daly Realism and Don Brutzman',name='rights'),
    meta(content='X3D book, X3D graphics, X3D-Edit, http://www.x3dGraphics.com',name='subject'),
    meta(content='http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter14Prototypes/HudKelpForest.x3d',name='identifier'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../license.html',name='license')]),
  Scene=Scene(
    children=[
    WorldInfo(title='HudKelpForest.x3d'),
    ExternProtoDeclare(appinfo='Heads-up display (HUD) keeps child geometry aligned on screen in a consistent location',name='HeadsUpDisplay',url=["HeadsUpDisplayPrototype.x3d#HeadsUpDisplay","http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter14Prototypes/HeadsUpDisplayPrototype.x3d#HeadsUpDisplay","HeadsUpDisplayPrototype.wrl#HeadsUpDisplay","http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter14Prototypes/HeadsUpDisplayPrototype.wrl#HeadsUpDisplay"],
      field=[
      field(accessType='inputOutput',appinfo='offset position for HUD relative to current view location, default 0 0 -5',name='screenOffset',type='SFVec3f'),
      field(accessType='inputOutput',appinfo='X3D content positioned at HUD offset',name='children',type='MFNode'),
      field(accessType='outputOnly',appinfo='HUD position update (in world coordinates) relative to original location',name='position_changed',type='SFVec3f'),
      field(accessType='outputOnly',appinfo='HUD orientation update relative to original location',name='orientation_changed',type='SFRotation')]),
    ExternProtoDeclare(name='TextString',url=["TextStringPrototype.x3d#TextString","http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter14Prototypes/TextStringPrototype.x3d#TextString","TextStringPrototype.wrl#TextString","http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter14Prototypes/TextStringPrototype.wrl#TextString"],
      field=[
      field(accessType='inputOutput',name='offset',type='SFVec3f'),
      field(accessType='inputOutput',name='string',type='MFString'),
      field(accessType='inputOutput',name='color',type='SFColor'),
      field(accessType='initializeOnly',name='size',type='SFFloat'),
      field(accessType='initializeOnly',name='justify',type='MFString'),
      field(accessType='initializeOnly',name='style',type='SFString'),
      field(accessType='initializeOnly',name='family',type='MFString')]),
    Background(backUrl=["urn:web3d:media:textures/panoramas/horizon_3_back.jpg","horizon_3_back.jpg","../../Basic/UniversalMediaPanoramas/horizon_3_back.jpg","https://www.web3d.org/WorkingGroups/media/textures/panoramas/horizon_3_back.jpg","https://www.web3d.org/x3d/content/examples/UniversalMediaPanoramas/horizon_3_back.jpg","http://www.web3dmedia.com/UniversalMedia/textures/panoramas/horizon_3_back.jpg","http://www.officetowers.com/UniversalMedia/textures/panoramas/horizon_3_back.jpg","http://geometrek.com/UniversalMedia/textures/panoramas/horizon_3_back.jpg","http://www.sc.ehu.es/ccwgamoa/UniversalMedia/textures/panoramas/horizon_3_back.jpg"],bottomUrl=["urn:web3d:media:textures/panoramas/horizon_3_bottom.jpg","horizon_3_bottom.jpg","../../Basic/UniversalMediaPanoramas/horizon_3_bottom.jpg","https://www.web3d.org/WorkingGroups/media/textures/panoramas/horizon_3_bottom.jpg","https://www.web3d.org/x3d/content/examples/UniversalMediaPanoramas/horizon_3_bottom.jpg","http://www.web3dmedia.com/UniversalMedia/textures/panoramas/horizon_3_bottom.jpg","http://www.officetowers.com/UniversalMedia/textures/panoramas/horizon_3_bottom.jpg","http://geometrek.com/UniversalMedia/textures/panoramas/horizon_3_bottom.jpg","http://www.sc.ehu.es/ccwgamoa/UniversalMedia/textures/panoramas/horizon_3_bottom.jpg"],frontUrl=["urn:web3d:media:textures/panoramas/horizon_3_front.jpg","horizon_3_front.jpg","../../Basic/UniversalMediaPanoramas/horizon_3_front.jpg","https://www.web3d.org/WorkingGroups/media/textures/panoramas/horizon_3_front.jpg","https://www.web3d.org/x3d/content/examples/UniversalMediaPanoramas/horizon_3_front.jpg","http://www.web3dmedia.com/UniversalMedia/textures/panoramas/horizon_3_front.jpg","http://www.officetowers.com/UniversalMedia/textures/panoramas/horizon_3_front.jpg","http://geometrek.com/UniversalMedia/textures/panoramas/horizon_3_front.jpg","http://www.sc.ehu.es/ccwgamoa/UniversalMedia/textures/panoramas/horizon_3_front.jpg"],groundAngle=[1.309,1.5707],groundColor=[(0.1,0.1,0),(0.4,0.25,0.2),(0.6,0.6,0.6)],leftUrl=["urn:web3d:media:textures/panoramas/horizon_3_left.jpg","horizon_3_left.jpg","../../Basic/UniversalMediaPanoramas/horizon_3_left.jpg","https://www.web3d.org/WorkingGroups/media/textures/panoramas/horizon_3_left.jpg","https://www.web3d.org/x3d/content/examples/UniversalMediaPanoramas/horizon_3_left.jpg","http://www.web3dmedia.com/UniversalMedia/textures/panoramas/horizon_3_left.jpg","http://www.officetowers.com/UniversalMedia/textures/panoramas/horizon_3_left.jpg","http://geometrek.com/UniversalMedia/textures/panoramas/horizon_3_left.jpg","http://www.sc.ehu.es/ccwgamoa/UniversalMedia/textures/panoramas/horizon_3_left.jpg"],rightUrl=["urn:web3d:media:textures/panoramas/horizon_3_right.jpg","horizon_3_right.jpg","../../Basic/UniversalMediaPanoramas/horizon_3_right.jpg","https://www.web3d.org/WorkingGroups/media/textures/panoramas/horizon_3_right.jpg","https://www.web3d.org/x3d/content/examples/UniversalMediaPanoramas/horizon_3_right.jpg","http://www.web3dmedia.com/UniversalMedia/textures/panoramas/horizon_3_right.jpg","http://www.officetowers.com/UniversalMedia/textures/panoramas/horizon_3_right.jpg","http://geometrek.com/UniversalMedia/textures/panoramas/horizon_3_right.jpg","http://www.sc.ehu.es/ccwgamoa/UniversalMedia/textures/panoramas/horizon_3_right.jpg"],skyAngle=[1.309,1.5707],skyColor=[(0,0.5,1),(0,0,1),(0,0,1)],topUrl=["urn:web3d:media:textures/panoramas/horizon_3_top.jpg","horizon_3_top.jpg","../../Basic/UniversalMediaPanoramas/horizon_3_top.jpg","https://www.web3d.org/WorkingGroups/media/textures/panoramas/horizon_3_top.jpg","https://www.web3d.org/x3d/content/examples/UniversalMediaPanoramas/horizon_3_top.jpg","http://www.web3dmedia.com/UniversalMedia/textures/panoramas/horizon_3_top.jpg","http://www.officetowers.com/UniversalMedia/textures/panoramas/horizon_3_top.jpg","http://geometrek.com/UniversalMedia/textures/panoramas/horizon_3_top.jpg","http://www.sc.ehu.es/ccwgamoa/UniversalMedia/textures/panoramas/horizon_3_top.jpg"]),
    Switch(whichChoice=-1,
      children=[
      Transform(DEF='HudContent',translation=(-0.5,-0.5,.1),
        children=[
        ProtoInstance(DEF='TopLabel',name='TextString',
          fieldValue=[
          fieldValue(name='offset',value=(-0.07,-.2,0)),
          fieldValue(name='string',value=["Position: "]),
          fieldValue(name='color',value=(0,0,0)),
          fieldValue(name='size',value=.1)]),
        ProtoInstance(DEF='BottomLabel',name='TextString',
          fieldValue=[
          fieldValue(name='offset',value=(-0.13,-.3,0)),
          fieldValue(name='string',value=["Orientation: "]),
          fieldValue(name='color',value=(0,0,0)),
          fieldValue(name='size',value=.1)]),
        ProtoInstance(DEF='TopLine',name='TextString',
          fieldValue=[
          fieldValue(name='offset',value=(.5,-.2,0)),
          fieldValue(name='string',value=[""]),
          fieldValue(name='color',value=(0,0,1)),
          fieldValue(name='size',value=.1)]),
        ProtoInstance(DEF='BottomLine',name='TextString',
          fieldValue=[
          fieldValue(name='offset',value=(.5,-.3,0)),
          fieldValue(name='string',value=["0 1 0 0"]),
          fieldValue(name='color',value=(0.1,.7,0.1)),
          fieldValue(name='size',value=.1)]),
        Transform(translation=(0.27,-0.25,-0.1),
          children=[
          Shape(
            geometry=Box(size=(1.4,0.25,0.01)),
            appearance=Appearance(
              material=Material(diffuseColor=(0.9,0.9,0.9),transparency=0.5)))])])]),
    ProtoInstance(DEF='HeadsUpDisplayInstance',name='HeadsUpDisplay',
      fieldValue=[
      fieldValue(name='screenOffset',value=(0.2,0.5,-2)),
      fieldValue(name='children',
        children=[
        Transform(USE='HudContent')])]),
    Script(DEF='ConvertValueScript',url=["HudKelpForestScriptConvert.js","http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter14Prototypes/HudKelpForestScriptConvert.js"],
      field=[
      field(accessType='inputOnly',name='sfVec3f',type='SFVec3f'),
      field(accessType='inputOnly',name='sfRotation',type='SFRotation'),
      field(accessType='outputOnly',name='sfVec3fString',type='MFString'),
      field(accessType='outputOnly',name='sfRotationString',type='MFString')]),
    ROUTE(fromField='position_changed',fromNode='HeadsUpDisplayInstance',toField='sfVec3f',toNode='ConvertValueScript'),
    ROUTE(fromField='orientation_changed',fromNode='HeadsUpDisplayInstance',toField='sfRotation',toNode='ConvertValueScript'),
    ROUTE(fromField='sfVec3fString',fromNode='ConvertValueScript',toField='string',toNode='TopLine'),
    ROUTE(fromField='sfRotationString',fromNode='ConvertValueScript',toField='string',toNode='BottomLine'),
    Inline(url=["../KelpForestExhibit/KelpForestMain.x3d","http://X3dGraphics.com/examples/X3dForWebAuthors/KelpForestExhibit/KelpForestMain.x3d","../KelpForestExhibit//KelpForestMain.wrl","http://X3dGraphics.com/examples/X3dForWebAuthors/KelpForestExhibit/KelpForestMain.wrl"])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for HudKelpForest.py")
