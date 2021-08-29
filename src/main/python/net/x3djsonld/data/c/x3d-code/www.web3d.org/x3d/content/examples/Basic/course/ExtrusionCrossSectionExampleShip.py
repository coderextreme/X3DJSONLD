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

newModel=X3D(profile='Immersive',version='3.2',
  head=head(
    children=[
    meta(content='ExtrusionCrossSectionExampleShip.x3d',name='title'),
    meta(content='Don Brutzman',name='creator'),
    meta(content='20 December 1999',name='created'),
    meta(content='20 October 2019',name='modified'),
    meta(content='Ship model as example use of ExtrusionCrossSectionPrototype for drawing several different Extrusion spines and cross sections.',name='description'),
    meta(content='ExtrusionCrossSectionExampleShip.png',name='Image'),
    meta(content='Utilize ExtrusionCrossSection ProtoInstance as a Shape node (with containerField="children") rather than an Extrusion node (with containerField="geometry").',name='hint'),
    meta(content='ExtrusionExampleShip.x3d',name='reference'),
    meta(content='ExtrusionCrossSectionExampleTorus.x3d',name='reference'),
    meta(content='ExtrusionCrossSectionPrototype.x3d',name='reference'),
    meta(content='VRML 97 Specification, 6.18 Extrusion',name='reference'),
    meta(content='https://www.web3d.org/technicalinfo/specifications/vrml97/part1/nodesRef.html#Extrusion',name='reference'),
    meta(content='VRML 97 Specification, Figure 6.6',name='Image'),
    meta(content='https://www.web3d.org/technicalinfo/specifications/vrml97/part1/Images/Extrusion.gif',name='Image'),
    meta(content='https://www.web3d.org/x3d/content/examples/Basic/course/ExtrusionCrossSectionExampleShip.x3d',name='identifier'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../license.html',name='license')]),
  Scene=Scene(
    #  Utilize ExtrusionCrossSection ProtoInstance as a Shape node (with containerField="children") rather than an Extrusion node (with containerField="geometry"). 
    children=[
    WorldInfo(title='ExtrusionCrossSectionExampleShip.x3d'),
    ExternProtoDeclare(appinfo='Shape prototype for Extrusion node that also draws spine line plus oriented scaled cross sections at each spine point',documentation='https://www.web3d.org/x3d/content/examples/Basic/course/ExtrusionCrossSectionPrototype.x3d',name='ExtrusionCrossSection',url=["ExtrusionCrossSectionPrototype.x3d#ExtrusionCrossSection","https://www.web3d.org/x3d/content/examples/Basic/course/ExtrusionCrossSectionPrototype.x3d#ExtrusionCrossSection","ExtrusionCrossSectionPrototype.wrl#ExtrusionCrossSection","https://www.web3d.org/x3d/content/examples/Basic/course/ExtrusionCrossSectionPrototype.wrl#ExtrusionCrossSection"],
      #  run-time eventIn Extrusion-modification interfaces for VRML 97 compatibility 
      field=[
      field(accessType='initializeOnly',appinfo='Extrusion name',name='name',type='SFString'),
      field(accessType='initializeOnly',appinfo='Extrusion field',name='crossSection',type='MFVec2f'),
      field(accessType='initializeOnly',appinfo='Extrusion field',name='spine',type='MFVec3f'),
      field(accessType='initializeOnly',appinfo='Extrusion field',name='scale',type='MFVec2f'),
      field(accessType='initializeOnly',appinfo='Extrusion field',name='orientation',type='MFRotation'),
      field(accessType='initializeOnly',appinfo='Extrusion field',name='beginCap',type='SFBool'),
      field(accessType='initializeOnly',appinfo='Extrusion field',name='endCap',type='SFBool'),
      field(accessType='initializeOnly',appinfo='Extrusion field',name='ccw',type='SFBool'),
      field(accessType='initializeOnly',appinfo='Extrusion field',name='convex',type='SFBool'),
      field(accessType='initializeOnly',appinfo='Extrusion field',name='creaseAngle',type='SFFloat'),
      field(accessType='initializeOnly',appinfo='Extrusion field',name='solid',type='SFBool'),
      field(accessType='inputOutput',appinfo='emissiveColor of spine',name='spineColor',type='SFColor'),
      field(accessType='inputOutput',appinfo='diffuseColor of crossSection',name='crossSectionColor',type='SFColor'),
      field(accessType='inputOutput',appinfo='transparency of crossSection',name='crossSectionTransparency',type='SFFloat'),
      field(accessType='inputOutput',appinfo='diffuseColor of extrusion hull',name='extrusionColor',type='SFColor'),
      field(accessType='inputOutput',appinfo='transparency of extrusion hull',name='extrusionTransparency',type='SFFloat'),
      field(accessType='initializeOnly',appinfo='Image to apply to Extrusion',name='extrusionImageTexture',type='SFNode'),
      field(accessType='initializeOnly',appinfo='TextureTransform coordinates of image applied to Extrusion',name='extrusionTextureTransform',type='SFNode'),
      field(accessType='inputOnly',appinfo='Extrusion field',name='set_crossSection',type='MFVec2f'),
      field(accessType='inputOnly',appinfo='Extrusion field',name='set_spine',type='MFVec3f'),
      field(accessType='inputOnly',appinfo='Extrusion field',name='set_scale',type='MFVec2f'),
      field(accessType='inputOnly',appinfo='Extrusion field',name='set_orientation',type='MFRotation'),
      field(accessType='initializeOnly',appinfo='Whether to provide initialization trace statements showing node construction',name='traceEnabled',type='SFBool')]),
    #  ==================== 
    #  Example instance 
    NavigationInfo(speed=4),
    Viewpoint(description='ship hull',position=(0,0,40)),
    Viewpoint(description='stack',position=(8,5,20)),
    Viewpoint(description='smoke extrusion start',position=(6.8,7,10)),
    Viewpoint(description='forward starboard quarter',orientation=(0,1,0,0.5),position=(20,3,25)),
    Transform(rotation=(0,1,0,1.57),translation=(15,30,0),
      children=[
      Viewpoint(description='touch smoke to animate',orientation=(1,0,0,-1),position=(0,0,0))]),
    Background(groundColor=[(0.7,0.7,0.7)],skyAngle=[0.05,1.5,1.59],skyColor=[(0.6,0.6,0.4),(0.4,0.4,0.7),(0.3,0.3,0.6),(0.1,0.1,0.3)]),
    #  ==================== 
    Transform(DEF='SmokePosition',translation=(5.8,7,0),
      #  Smoke shows that crossSection, spine, scale and orientation can be animated 
      children=[
      ProtoInstance(DEF='Smoke',name='ExtrusionCrossSection',
        fieldValue=[
        fieldValue(name='name',value='Smoke'),
        fieldValue(name='crossSection',value=[(0,1),(-1,0),(0,-0.5),(1.5,0),(0,1)]),
        fieldValue(name='spine',value=[(0,0,0),(-1,0,0),(-2,0,0),(-3,0,0),(-5,0,0)]),
        fieldValue(name='scale',value=[(0.8,0.7),(0.7,0.6),(0.6,0.5),(0.5,0.3),(0.4,0.2)]),
        fieldValue(name='orientation',value=[(0,1,0,0),(0,1,0,0),(0,1,0,-0.4),(0,1,0,0),(1,0,0,0.4)]),
        fieldValue(name='creaseAngle',value=1),
        fieldValue(name='solid',value=False),
        fieldValue(name='spineColor',value=(1,1,1)),
        fieldValue(name='crossSectionColor',value=(0.2,0.2,0.6)),
        fieldValue(name='extrusionColor',value=(0.0,0.9,0.9)),
        fieldValue(name='extrusionTransparency',value=0.5),
        fieldValue(name='traceEnabled',value=False)]),
      TouchSensor(DEF='TouchSmoke',description='click smoke to animate'),
      TimeSensor(DEF='SmokeClock',cycleInterval=30,startTime=-1),
      CoordinateInterpolator(DEF='SmokeSpineInterpolator',key=[0,0.2,0.5,0.8,1],keyValue=[(0,0,0),(-1,0,0),(-2,0,0),(-3,0,0),(-5,0,0),(0,0,0),(-2,0,0),(-4,-0.5,0),(-6,-1,0),(-8,-2,0),(0,0,0),(-4,0,0),(-8,-1,0),(-13,-2,0),(-20,-2.5,0),(0,0,0),(-2,0,0),(-4,-0.5,0),(-6,-1,0),(-8,-2,0),(0,0,0),(-1,0,0),(-2,0,0),(-3,0,0),(-5,0,0)]),
      ROUTE(fromField='touchTime',fromNode='TouchSmoke',toField='startTime',toNode='SmokeClock'),
      ROUTE(fromField='fraction_changed',fromNode='SmokeClock',toField='set_fraction',toNode='SmokeSpineInterpolator'),
      ROUTE(fromField='value_changed',fromNode='SmokeSpineInterpolator',toField='set_spine',toNode='Smoke')]),
    Transform(DEF='SuperstructurePosition',translation=(12,1,0),
      children=[
      ProtoInstance(DEF='Superstructure',name='ExtrusionCrossSection',
        fieldValue=[
        fieldValue(name='name',value='Superstructure'),
        fieldValue(name='crossSection',value=[(0.1,1),(0.1,-1),(-1,-1),(-1,1),(0.1,1)]),
        fieldValue(name='spine',value=[(0,0,0),(0,1,0),(0,1.95,0),(0,1.96,0),(0,3,0)]),
        fieldValue(name='scale',value=[(6,2),(6,2),(6,2),(1,1.8),(1,1.8)]),
        fieldValue(name='spineColor',value=(0.7,0.7,0)),
        fieldValue(name='ccw',value=True),
        fieldValue(name='crossSectionColor',value=(0.6,0.6,0.2)),
        fieldValue(name='extrusionColor',value=(0.3,0.6,0.6)),
        fieldValue(name='extrusionTransparency',value=0.6),
        fieldValue(name='traceEnabled',value=False)])]),
    Transform(DEF='StackPosition',translation=(8,1,0),
      children=[
      ProtoInstance(DEF='Stack',name='ExtrusionCrossSection',
        fieldValue=[
        fieldValue(name='name',value='Stack'),
        fieldValue(name='crossSection',value=[(0,1),(0.38,0.92),(0.71,0.71),(0.92,0.38),(1,0),(0.92,-0.38),(0.71,-0.71),(0.38,-0.92),(0,-1),(-0.38,-0.92),(-0.71,-0.71),(-0.92,-0.38),(-1,0),(-0.92,0.38),(-0.71,0.71),(-0.38,0.92),(0,1)]),
        fieldValue(name='spine',value=[(0.1,2,0),(0,5,0),(-0.4,5.6,0),(-1,6,0)]),
        fieldValue(name='scale',value=[(1,1),(1,1),(0.9,0.85),(0.8,0.4)]),
        fieldValue(name='orientation',value=[(0,1,0,0),(0,1,0,0),(0,1,0,0),(0,0,1,0.4)]),
        fieldValue(name='spineColor',value=(1,1,1)),
        fieldValue(name='creaseAngle',value=1),
        fieldValue(name='crossSectionColor',value=(0.8,0.2,0.2)),
        fieldValue(name='crossSectionTransparency',value=0.1),
        fieldValue(name='extrusionColor',value=(0.3,0.3,0.3)),
        fieldValue(name='extrusionTransparency',value=0.5),
        fieldValue(name='traceEnabled',value=False)])]),
    Transform(DEF='HullPosition',translation=(0,1,0),
      children=[
      ProtoInstance(DEF='Hull',name='ExtrusionCrossSection',
        fieldValue=[
        fieldValue(name='name',value='Hull'),
        fieldValue(name='solid',value=False),
        fieldValue(name='crossSection',value=[(0,1),(0.38,0.92),(0.71,0.71),(0.92,0.38),(1,0),(0.92,-0.38),(0.71,-0.71),(0.38,-0.92),(0,-1)]),
        fieldValue(name='spine',value=[(-20,0,0),(-17,0,0),(0,0,0),(10,0,0),(22,1,0)]),
        fieldValue(name='scale',value=[(3,4),(4,4),(4,4),(4,4),(5,.1)]),
        fieldValue(name='orientation',value=[(1,0,0,0),(1,0,0,0),(1,0,0,0),(0,1,0,0),(0,0,1,-0.5)]),
        fieldValue(name='traceEnabled',value=False)])]),
    #  ==================== 
    #  Display world coordinate axes at (0 0 0) 
    Transform(scale=(5,5,5),
      children=[
      Inline(DEF='CoordinateAxes',url=["../../X3dForWebAuthors/Chapter03Grouping/CoordinateAxes.x3d","../../Savage/Tools/Authoring/CoordinateAxes.x3d","http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter03Grouping/CoordinateAxes.x3d","https://savage.nps.edu/Savage/Tools/Authoring/CoordinateAxes.x3d","../../X3dForWebAuthors/Chapter03Grouping/CoordinateAxes.wrl","../../Savage/Tools/Authoring/CoordinateAxes.wrl","http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter03Grouping/CoordinateAxes.wrl","https://savage.nps.edu/Savage/Tools/Authoring/CoordinateAxes.wrl"])]),
    #  Display smoke extrusion coordinate axes: y along spine, x pointing up 
    Transform(translation=(6,8.5,0),
      children=[
      Transform(rotation=(0,0,1,1.57),
        children=[
        Inline(USE='CoordinateAxes')])])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for ExtrusionCrossSectionExampleShip.py")
