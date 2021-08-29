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
    meta(content='CubeWithLabeledSidesViewpointSequencer.x3d',name='title'),
    meta(content='ViewpointSequencer animation of a cube-shaped test model with faces on each side individually labeled.',name='description'),
    meta(content='Don Brutzman',name='creator'),
    meta(content='14 November 2014',name='created'),
    meta(content='20 October 2019',name='modified'),
    meta(content='Viewpoint Tour',name='subject'),
    meta(content='ViewpointSequencerPrototypeIndex.html',name='reference'),
    meta(content='add ability for prototype to hide text',name='TODO'),
    meta(content='BoxSwitch.x3d',name='reference'),
    meta(content='CubeWithLabeledSidesViewpointSequencer.png',name='reference'),
    meta(content='CubeWithLabeledSidesViewpointSequencer.vsd',name='drawing'),
    meta(content='../GeometricShapes/CubeWithLabeledSides.x3d',name='reference'),
    meta(content='https://www.web3d.org/x3d/content/examples/Basic/DistributedInteractiveSimulation/TestCube.x3d',name='reference'),
    meta(content='https://www.web3d.org/x3d/content/examples/Basic/DistributedInteractiveSimulation/images/TestBoxImages.vsd',name='drawing'),
    meta(content='https://x3dgraphics.com/examples/X3dForAdvancedModeling/Animation/CubeWithLabeledSidesViewpointSequencer.x3d',name='identifier'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../license.html',name='license')]),
  Scene=Scene(
    children=[
    WorldInfo(title='CubeWithLabeledSidesViewpointSequencer.x3d'),
    Background(skyColor=[(0.3,0.3,0.3)]),
    Inline(url=["../GeometricShapes/CubeWithLabeledSides.x3d","https://x3dgraphics.com/examples/X3dForAdvancedModeling/GeometricShapes/CubeWithLabeledSides.x3d","../GeometricShapes/CubeWithLabeledSides.wrl","https://x3dgraphics.com/examples/X3dForAdvancedModeling/GeometricShapes/CubeWithLabeledSides.wrl"]),
    #  ==================== 
    ExternProtoDeclare(appinfo='Sequentially binds each Viewpoint in a set of Viewpoint USE nodes, creating an automatic tour for a scene',name='ViewpointSequencer',url=["ViewpointSequencerPrototype.x3d#ViewpointSequencer","https://x3dgraphics.com/examples/X3dForAdvancedModeling/Animation/ViewpointSequencerPrototype.x3d#ViewpointSequencer","ViewpointSequencerPrototype.wrl#ViewpointSequencer","https://x3dgraphics.com/examples/X3dForAdvancedModeling/Animation/ViewpointSequencerPrototype.wrl#ViewpointSequencer"],
      field=[
      field(accessType='initializeOnly',appinfo='Viewpoint USE nodes that are sequentially bound',name='viewpoints',type='MFNode'),
      field(accessType='inputOutput',appinfo='number of seconds between viewpoint shifts',name='interval',type='SFTime'),
      field(accessType='inputOutput',appinfo='whether ViewpointSequencer is enabled or not',name='enabled',type='SFBool'),
      field(accessType='inputOnly',appinfo='whether ViewpointSequencer is enabled or not',name='set_enabled',type='SFBool'),
      field(accessType='inputOnly',appinfo='bind previous Viewpoint in list',name='previous',type='SFBool'),
      field(accessType='inputOnly',appinfo='bind next Viewpoint in list',name='next',type='SFBool'),
      field(accessType='inputOutput',appinfo='Select message to toggle ViewpointSequencer',name='toggleMessage',type='MFString'),
      field(accessType='initializeOnly',appinfo='Font size for toggleMessage text',name='toggleMessageFontSize',type='SFFloat'),
      field(accessType='inputOutput',appinfo='Color for toggleMessage text',name='toggleMessageColor',type='SFColor'),
      field(accessType='inputOutput',appinfo='enable console output',name='traceEnabled',type='SFBool')]),
    Transform(scale=(0.5,0.5,0.5),translation=(0,-2,0),
      #  Only one copy of a given ExternProtoDeclare is needed in a scene. Multiple ProtoInstance nodes can be created like the following: 
      children=[
      ProtoInstance(DEF='ViewpointSequencerExample',name='ViewpointSequencer',
        fieldValue=[
        fieldValue(name='interval',value=2),
        fieldValue(name='viewpoints',
          #  These viewpoints were copied from the Inline scene above. Authors can also DEF/USE other Viewpoint nodes used elsewhere in a scene 
          children=[
          Viewpoint(DEF='FrontViewSequenced',description='Front view, sequenced',orientation=(0,1,0,1.57),position=(8,0,0)),
          Viewpoint(DEF='LeftViewSequenced',description='Left view, sequenced',orientation=(0,1,0,3.1416),position=(0,0,-8)),
          Viewpoint(DEF='TopViewSequenced',description='Top view, sequenced',orientation=(1,0,0,-1.57),position=(0,8,0)),
          Viewpoint(DEF='BackViewSequenced',description='Back view, sequenced',orientation=(0,1,0,-1.57),position=(-8,0,0)),
          Viewpoint(DEF='RightViewSequenced',description='Right view, sequenced',position=(0,0,8)),
          Viewpoint(DEF='BottomViewSequenced',description='Bottom view, sequenced',orientation=(1,0,0,1.57),position=(0,-8,0))]),
        #  initially enabled field is off (false), scene provides selectable text to activate 
        fieldValue(name='enabled',value=False)])]
      #  Example use can be found at https://savage.nps.edu/Savage/Tools/Animation/ViewpointSequencerExample.x3d 
      )]
    #  ==================== 
    )
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for CubeWithLabeledSidesViewpointSequencer.py")
