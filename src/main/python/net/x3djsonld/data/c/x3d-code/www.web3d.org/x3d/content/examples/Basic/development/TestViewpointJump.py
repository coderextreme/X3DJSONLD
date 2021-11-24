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
    meta(content='TestViewpointJump.x3d',name='title'),
    meta(content='Conformance Test for Viewpoint: immediate switching (jump=true) and smooth animation (jump=false). Press PgUp/PgDn or touch geometry to change viewpoints.',name='description'),
    meta(content='CosmoPlayer 2.1.1 fails when "Animate transition between viewpoints" option is turned off. First, try this test by opening the Control Panel, selecting "Animate transition between viewpoints". Use Page Down key to switch between viewpoints. You should smoothly transition between viewpoints. Next, turn the "Animate transition bewtween viewpoints" option off. Use Page Down key to switch between viewpoints. You should see a jump to the objects labeled "jump=true" and an animated transition to the objects labeled "jump=false".',name='warning'),
    meta(content='Jeffrey Weekley and Don Brutzman',name='creator'),
    meta(content='25 July 2001',name='created'),
    meta(content='20 October 2019',name='modified'),
    meta(content='https://www.web3d.org/technicalinfo/specifications/vrml97/part1/nodesRef.html#Viewpoint',name='reference'),
    meta(content='Viewpoint conformance test',name='subject'),
    meta(content='https://www.web3d.org/x3d/content/examples/Basic/development/TestViewpointJump.x3d',name='identifier'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../license.html',name='license')]),
  Scene=Scene(
    children=[
    WorldInfo(title='TestViewpointJump.x3d'),
    Viewpoint(description='Initial viewpoint, default jump (jump true)',position=(0,0,7.5)),
    #  default value for field is jump='true' 
    Viewpoint(DEF='ConeView',description='Red Cone (jump true)',orientation=(0,-1,0,1),position=(-4.6,1.4,1.9)),
    Viewpoint(DEF='SphereView',description='Blue Sphere (jump false)',jump=False,orientation=(0,1,0,.7572),position=(4.7,-1.2,3.3)),
    Viewpoint(DEF='CubeView',description='Magenta Cube (jump true)',orientation=(0,-1,0,1.0529),position=(-6.1,-1.5,2.7)),
    Viewpoint(DEF='CylinderView',description='White Cylinder (jump false)',jump=False,orientation=(0,1,0,1),position=(5.6,1.4,2.8)),
    Group(DEF='Geometry',
      children=[
      Transform(DEF='Box',translation=(-1.5,-1.5,0),
        children=[
        Shape(
          geometry=Box(size=(1,1,1)),
          appearance=Appearance(
            material=Material(diffuseColor=(1,0,1)))),
        Transform(translation=(0,1,0),
          children=[
          Billboard(
            children=[
            Shape(
              geometry=Text(string=["Magenta Cube Viewpoint","jump=true"],
                fontStyle=FontStyle(justify=["MIDDLE","MIDDLE"],size=0.25)),
              appearance=Appearance(
                material=Material(diffuseColor=(0.4,0.8,0.6),shininess=0.8)))])]),
        TouchSensor(DEF='BoxTouchSensor',description='click to bind this viewpoint'),
        ROUTE(fromField='isActive',fromNode='BoxTouchSensor',toField='set_bind',toNode='CubeView')]),
      Transform(DEF='Sphere',translation=(1.5,-1.5,0),
        children=[
        Shape(
          geometry=Sphere(radius=0.5),
          appearance=Appearance(
            material=Material(diffuseColor=(0,0,1)))),
        Transform(translation=(0,1,0),
          children=[
          Billboard(
            children=[
            Shape(
              geometry=Text(string=["Blue Sphere Viewpoint","jump=false"],
                fontStyle=FontStyle(justify=["MIDDLE","MIDDLE"],size=0.25)),
              appearance=Appearance(
                material=Material(diffuseColor=(0.4,0.8,0.6),shininess=0.8)))])]),
        TouchSensor(DEF='SphereTouchSensor',description='click for blue sphere viewpoint'),
        ROUTE(fromField='isActive',fromNode='SphereTouchSensor',toField='set_bind',toNode='SphereView')]),
      Transform(DEF='Cone',translation=(-1.5,1.25,0),
        children=[
        Shape(
          geometry=Cone(bottomRadius=0.5,height=1),
          appearance=Appearance(
            material=Material(diffuseColor=(1,0,0)))),
        Transform(translation=(0,1,0),
          children=[
          Billboard(
            children=[
            Shape(
              geometry=Text(string=["Red Cone Viewpoint","jump=true"],
                fontStyle=FontStyle(justify=["MIDDLE","MIDDLE"],size=0.25)),
              appearance=Appearance(
                material=Material(diffuseColor=(0.4,0.8,0.6),shininess=0.8)))])]),
        TouchSensor(DEF='ConeTouchSensor',description='click for red cone viewpoint'),
        ROUTE(fromField='isActive',fromNode='ConeTouchSensor',toField='set_bind',toNode='ConeView')]),
      Transform(DEF='Cylinder',translation=(1.5,1.25,0),
        children=[
        Shape(
          geometry=Cylinder(height=1,radius=0.5),
          appearance=Appearance(
            material=Material(diffuseColor=(1,1,1)))),
        Transform(translation=(0,1,0),
          children=[
          Billboard(
            children=[
            Shape(
              geometry=Text(string=["White Cylinder Viewpoint","jump=false"],
                fontStyle=FontStyle(justify=["MIDDLE","MIDDLE"],size=0.25)),
              appearance=Appearance(
                material=Material(diffuseColor=(0.4,0.8,0.6),shininess=0.8)))])]),
        TouchSensor(DEF='CylinderTouchSensor',description='click for white cylinder viewpoint'),
        ROUTE(fromField='isActive',fromNode='CylinderTouchSensor',toField='set_bind',toNode='CylinderView')])])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for TestViewpointJump.py")
