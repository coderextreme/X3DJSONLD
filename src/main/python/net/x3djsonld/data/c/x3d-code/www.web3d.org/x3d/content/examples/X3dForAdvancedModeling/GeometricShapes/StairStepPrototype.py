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
    meta(content='StairStepPrototype.x3d',name='title'),
    meta(content='Build one or more stair steps, in a straight line',name='description'),
    meta(content='Don Brutzman, Michele Foti, Chad Hutchins',name='creator'),
    meta(content='25 January 2012',name='created'),
    meta(content='20 October 2019',name='modified'),
    meta(content='under development',name='warning'),
    meta(content='https://x3dgraphics.com/examples/X3dForAdvancedModeling/GeometricShapes/StairStepPrototype.x3d',name='identifier'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../license.html',name='license')]),
  Scene=Scene(
    children=[
    WorldInfo(title='StairStepPrototype.x3d'),
    Viewpoint(description='hey step',orientation=(-0.59028,0.76927,0.2445,0.98786),position=(2,2,2)),
    Background(skyColor=[(1,1,1)]),
    ProtoDeclare(appinfo='Generate multiple stair steps, bottom left-hand corner at origin, going up along X axis',name='StairSteps',
      ProtoInterface=ProtoInterface(
        field=[
        field(accessType='inputOutput',appinfo='default value 0.8 0.8 0.6',name='diffuseColor',type='SFColor',value=(0.8,0.8,0.6)),
        field(accessType='inputOutput',appinfo='size of step, default',name='scale',type='SFVec3f',value=(1,0.2,0.3)),
        field(accessType='inputOutput',appinfo='TODO',name='numberOfSteps',type='SFInt32',value=1),
        field(accessType='inputOutput',appinfo='debug trace to Browser output console',name='traceEnabled',type='SFBool',value=True)]),
      ProtoBody=ProtoBody(
        #  First node determines node type of this prototype 
        children=[
        Transform(DEF='TransformXdepthYheightZwidth',
          IS=IS(
            connect=[
            connect(nodeField='scale',protoField='scale')]),
          children=[
          Shape(DEF='SingleStepShape',
            geometry=IndexedFaceSet(DEF='StepIFS',coordIndex=[0,1,2,3,-1,4,5,6,7,-1,0,1,5,4,-1,1,2,6,5,-1,0,3,7,4,-1,3,2,6,7,-1],solid=False,
              coord=Coordinate(DEF='StepCoordinate',point=[(0,0,0),(1,0,0),(1,0,1),(0,0,1),(0,1,0),(1,1,0),(1,1,1),(0,1,1)])),
            appearance=Appearance(
              material=Material(
                IS=IS(
                  connect=[
                  connect(nodeField='diffuseColor',protoField='diffuseColor')])),
              #  TODO expose ImageTexture 
              ))]),
        #  Subsequent nodes do not render, but still must be a valid X3D subgraph 
        #  This Script provides the X3D author with additional visibility and control over prototype inputs and outputs 
        Script(DEF='StairStepPrototypeScript',directOutput=True,url=["StairStepPrototypeScript.js","https://x3dgraphics.com/examples/X3dForAdvancedModeling/GeometricShapes/StairStepPrototypeScript.js"],
          field=[
          field(accessType='inputOutput',appinfo='default value 0.8 0.8 0.6',name='diffuseColor',type='SFColor'),
          field(accessType='inputOutput',appinfo='size of step',name='scale',type='SFVec3f'),
          field(accessType='inputOutput',appinfo='TODO',name='numberOfSteps',type='SFInt32'),
          field(accessType='inputOutput',appinfo='debug trace to Browser output console',name='traceEnabled',type='SFBool'),
          field(accessType='outputOnly',name='computedPoints',type='MFVec3f'),
          field(accessType='outputOnly',name='computedCoordIndex',type='MFInt32')],
          IS=IS(
            connect=[
            connect(nodeField='diffuseColor',protoField='diffuseColor'),
            connect(nodeField='scale',protoField='scale'),
            connect(nodeField='numberOfSteps',protoField='numberOfSteps'),
            connect(nodeField='traceEnabled',protoField='traceEnabled')])),
        ROUTE(fromField='computedCoordIndex',fromNode='StairStepPrototypeScript',toField='set_coordIndex',toNode='StepIFS'),
        ROUTE(fromField='computedPoints',fromNode='StairStepPrototypeScript',toField='point',toNode='StepCoordinate')])),
    ProtoInstance(DEF='stairs',name='StairSteps',
      fieldValue=[
      fieldValue(name='diffuseColor',value=(0.0,0.3,0.6)),
      fieldValue(name='numberOfSteps',value=7),
      fieldValue(name='scale',value=(1.0,0.2,0.3))]),
    Inline(DEF='CoordinateAxes',url=["../../X3dForWebAuthors/Chapter03Grouping/CoordinateAxes.x3d","../../../Savage/Tools/Authoring/CoordinateAxes.x3d","https://x3dgraphics.com/examples/X3dForWebAuthors/Chapter03Grouping/CoordinateAxes.x3d","https://savage.nps.edu/Savage/Tools/Authoring/CoordinateAxes.x3d","../../X3dForWebAuthors/Chapter03Grouping/CoordinateAxes.wrl","../../../Savage/Tools/Authoring/CoordinateAxes.wrl","https://x3dgraphics.com/examples/X3dForWebAuthors/Chapter03Grouping/CoordinateAxes.wrl","https://savage.nps.edu/Savage/Tools/Authoring/CoordinateAxes.wrl"])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for StairStepPrototype.py")
