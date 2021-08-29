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
    meta(content='ExtrusionExampleShip.x3d',name='title'),
    meta(content='Don Brutzman',name='creator'),
    meta(content='3 September 2005',name='created'),
    meta(content='20 October 2019',name='modified'),
    meta(content='Ship model for drawing several different Extrusion spines and cross sections - see ExtrusionCrossSectionExampleShip for corresponding use of ExtrusionCrossSectionPrototype.',name='description'),
    meta(content='ExtrusionExampleShip.png',name='Image'),
    meta(content='ExtrusionCrossSectionExampleShip.x3d',name='reference'),
    meta(content='ExtrusionCrossSectionExampleTorus.x3d',name='reference'),
    meta(content='ExtrusionCrossSectionPrototype.x3d',name='reference'),
    meta(content='VRML 97 Specification, 6.18 Extrusion',name='reference'),
    meta(content='https://www.web3d.org/technicalinfo/specifications/vrml97/part1/nodesRef.html#Extrusion',name='reference'),
    meta(content='VRML 97 Specification, Figure 6.6',name='Image'),
    meta(content='https://www.web3d.org/technicalinfo/specifications/vrml97/part1/Images/Extrusion.gif',name='Image'),
    meta(content='https://www.web3d.org/x3d/content/examples/Basic/course/ExtrusionExampleShip.x3d',name='identifier'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../license.html',name='license')]),
  Scene=Scene(
    #  ==================== 
    #  Example instance 
    children=[
    WorldInfo(title='ExtrusionExampleShip.x3d'),
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
      Shape(
        geometry=Extrusion(DEF='Smoke',creaseAngle=1,crossSection=[(0,1),(-1,0),(0,-0.5),(1.5,0),(0,1)],orientation=[(0,1,0,0),(0,1,0,0),(0,1,0,-0.4),(0,1,0,0),(1,0,0,0.4)],scale=[(0.8,0.7),(0.7,0.6),(0.6,0.5),(0.5,0.3),(0.4,0.2)],solid=False,spine=[(0,0,0),(-1,0,0),(-2,0,0),(-3,0,0),(-5,0,0)]),
        appearance=Appearance(
          material=Material(diffuseColor=(0.0,0.9,0.9),transparency=0.3))),
      TouchSensor(DEF='TouchSmoke',description='click smoke to animate'),
      TimeSensor(DEF='SmokeClock',cycleInterval=30,startTime=-1),
      CoordinateInterpolator(DEF='SmokeSpineInterpolator',key=[0,0.2,0.5,0.8,1],keyValue=[(0,0,0),(-1,0,0),(-2,0,0),(-3,0,0),(-5,0,0),(0,0,0),(-2,0,0),(-4,-0.5,0),(-6,-1,0),(-8,-2,0),(0,0,0),(-4,0,0),(-8,-1,0),(-13,-2,0),(-20,-2.5,0),(0,0,0),(-2,0,0),(-4,-0.5,0),(-6,-1,0),(-8,-2,0),(0,0,0),(-1,0,0),(-2,0,0),(-3,0,0),(-5,0,0)]),
      ROUTE(fromField='touchTime',fromNode='TouchSmoke',toField='startTime',toNode='SmokeClock'),
      ROUTE(fromField='fraction_changed',fromNode='SmokeClock',toField='set_fraction',toNode='SmokeSpineInterpolator'),
      ROUTE(fromField='value_changed',fromNode='SmokeSpineInterpolator',toField='set_spine',toNode='Smoke')]),
    Transform(DEF='SuperstructurePosition',translation=(12,1,0),
      children=[
      Shape(
        geometry=Extrusion(DEF='Superstructure',crossSection=[(0.1,1),(0.1,-1),(-1,-1),(-1,1),(0.1,1)],scale=[(6,2),(6,2),(6,2),(1,1.8),(1,1.8)],spine=[(0,0,0),(0,1,0),(0,1.95,0),(0,1.96,0),(0,3,0)]),
        appearance=Appearance(
          material=Material(diffuseColor=(0.3,0.6,0.6))))]),
    Transform(DEF='StackPosition',translation=(8,1,0),
      children=[
      Shape(
        geometry=Extrusion(DEF='Stack',creaseAngle=1,crossSection=[(0,1),(0.38,0.92),(0.71,0.71),(0.92,0.38),(1,0),(0.92,-0.38),(0.71,-0.71),(0.38,-0.92),(0,-1),(-0.38,-0.92),(-0.71,-0.71),(-0.92,-0.38),(-1,0),(-0.92,0.38),(-0.71,0.71),(-0.38,0.92),(0,1)],orientation=[(0,1,0,0),(0,1,0,0),(0,1,0,0),(0,0,1,0.4)],scale=[(1,1),(1,1),(0.9,0.85),(0.8,0.4)],spine=[(0.1,2,0),(0,5,0),(-0.4,5.6,0),(-1,6,0)]),
        appearance=Appearance(
          material=Material(diffuseColor=(0.3,0.3,0.3),transparency=0.5)))]),
    Transform(DEF='HullPosition',translation=(0,1,0),
      children=[
      Shape(
        geometry=Extrusion(DEF='Hull',creaseAngle=3.14,crossSection=[(0,1),(0.38,0.92),(0.71,0.71),(0.92,0.38),(1,0),(0.92,-0.38),(0.71,-0.71),(0.38,-0.92),(0,-1)],orientation=[(1,0,0,0),(1,0,0,0),(1,0,0,0),(0,1,0,0),(0,0,1,-0.5)],scale=[(3,4),(4,4),(4,4),(4,4),(5,.1)],solid=False,spine=[(-20,0,0),(-17,0,0),(0,0,0),(10,0,0),(22,1,0)]),
        appearance=Appearance(
          material=Material(diffuseColor=(0.5,0.5,0.5))))]),
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

print ("python x3d.py load successful for ExtrusionExampleShip.py")
