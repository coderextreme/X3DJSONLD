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
    meta(content='ViewpointSequencerExample.x3d',name='title'),
    meta(content='Animate through a set of Viewpoints and repeat',name='description'),
    meta(content='Don Brutzman',name='creator'),
    meta(content='11 December 2002',name='created'),
    meta(content='14 November 2014',name='modified'),
    meta(content='Viewpoint Tour',name='subject'),
    meta(content='https://savage.nps.edu/Savage/Tools/Animation/ViewpointSequencerExample.x3d',name='identifier'),
    meta(content='X3D-Edit 3.2, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    ExternProtoDeclare(appinfo='Sequentially binds each Viewpoint in a set of Viewpoint USE nodes, creating an automatic tour for a scene',name='ViewpointSequencer',url=["../../../Savage/Tools/Animation/ViewpointSequencerPrototype.x3d#ViewpointSequencer","https://savage.nps.edu/Savage/Tools/Animation/ViewpointSequencerPrototype.x3d#ViewpointSequencer","../../../Savage/Tools/Animation/ViewpointSequencerPrototype.wrl#ViewpointSequencer","https://savage.nps.edu/Savage/Tools/Animation/ViewpointSequencerPrototype.wrl#ViewpointSequencer"],
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
    #  ===============Example============== 
    Group(DEF='Viewpoints',
      children=[
      Viewpoint(DEF='View0',description='View zero (+Y axis)',orientation=(1,0,0,-1.57),position=(0,10,0)),
      Viewpoint(DEF='View1',description='View one (+Z axis)'),
      Viewpoint(DEF='View2',description='View two (+X axis)',orientation=(0,1,0,1.57),position=(10,0,0)),
      Viewpoint(DEF='View3',description='View three (-Z axis)',orientation=(0,1,0,3.14),position=(0,0,-10)),
      Viewpoint(DEF='View4',description='View four (-X axis)',orientation=(0,1,0,-1.57),position=(-10,0,0))]),
    Transform(translation=(0,-2,0),
      children=[
      ProtoInstance(name='ViewpointSequencer',
        fieldValue=[
        fieldValue(name='viewpoints',
          children=[
          Viewpoint(USE='View0'),
          Viewpoint(USE='View1'),
          Viewpoint(USE='View2'),
          Viewpoint(USE='View3'),
          Viewpoint(USE='View4')]),
        fieldValue(name='interval',value=2),
        #  initially enabled is off, scene provides selectable text to activate 
        fieldValue(name='enabled',value=False),
        fieldValue(name='traceEnabled',value=True)])]),
    Shape(
      geometry=Box(DEF='BackdropBox',size=(0.2,0.4,0.6)),
      appearance=Appearance(
        material=Material(diffuseColor=(1,0.4,0.2)))),
    Inline(DEF='CoordinateAxes',url=["../../../X3dForWebAuthors/Chapter03Grouping/CoordinateAxes.x3d","../../Tools/Authoring/CoordinateAxes.x3d","http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter03Grouping/CoordinateAxes.x3d","https://savage.nps.edu/Savage/Tools/Authoring/CoordinateAxes.x3d","../../../X3dForWebAuthors/Chapter03Grouping/CoordinateAxes.wrl","../../Tools/Authoring/CoordinateAxes.wrl","http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter03Grouping/CoordinateAxes.wrl","https://savage.nps.edu/Savage/Tools/Authoring/CoordinateAxes.wrl"])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for ViewpointSequencerExample.py")
