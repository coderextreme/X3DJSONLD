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
    meta(content='RotationCalculatorExample.x3d',name='title'),
    meta(content='Don Brutzman',name='creator'),
    meta(content='30 December 2015',name='created'),
    meta(content='20 October 2019',name='modified'),
    meta(content='Demonstrate composition of rotation values using X3D-Edit RotationCalculator.',name='description'),
    meta(content='https://savage.nps.edu/X3D-Edit/images/RotationCalculator.png',name='drawing'),
    meta(content='../HumanoidAnimation/RotationTests.x3d',name='reference'),
    meta(content='https://x3dgraphics.com/examples/X3dForAdvancedModeling/Animation/RotationCalculatorExample.x3d',name='identifier'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../license.html',name='license')]),
  Scene=Scene(
    children=[
    WorldInfo(title='RotationCalculatorExample.x3d'),
    Background(skyColor=[(0.8,0.8,0.9)]),
    NavigationInfo(),
    Viewpoint(description='Rotation Calculator Example',position=(0,0,12)),
    Viewpoint(description='Left side direct view',position=(-3,0,12)),
    Viewpoint(description='Right side direct view',position=(3,0,12)),
    Transform(DEF='LeftSide',translation=(-3,0,0),
      #  Individual nested rotations follow 
      children=[
      Transform(DEF='OuterRotationXaxis135degrees',rotation=(1,0,0,2.356194),
        children=[
        Transform(DEF='CenterRotationYaxis45Degrees',rotation=(0,1,0,0.785398),
          children=[
          Transform(DEF='InnerRotationZaxis-30degrees',rotation=(0,0,1,-0.523599),
            children=[
            Inline(DEF='CubeWithLabeledSides',url=["../GeometricShapes/CubeWithLabeledSides.x3d","https://x3dgraphics.com/examples/X3dForAdvancedModeling/GeometricShapes/CubeWithLabeledSides.x3d","../GeometricShapes/CubeWithLabeledSides.wrl","https://x3dgraphics.com/examples/X3dForAdvancedModeling/GeometricShapes/CubeWithLabeledSides.wrl"],
              metadata=MetadataString(name='profile',value=["Interchange"])),
            Shape(DEF='AxisLinesShape',
              geometry=IndexedLineSet(colorIndex=[0,1,2],colorPerVertex=False,coordIndex=[0,1,-1,0,2,-1,0,3,-1],
                coord=Coordinate(point=[(0,0,0),(1.78,0,0),(0,1.78,0),(0,0,1.78)]),
                color=Color(color=[(1,0,0),(0,0.6,0),(0,0,1)])),
              appearance=Appearance(
                material=Material(diffuseColor=(0.9,0.9,0.9))))])])]),
      Transform(translation=(0,3,0),
        children=[
        Shape(
          geometry=Text(string=["Multiple single-axis","Transform rotations"],
            fontStyle=FontStyle(family=["SANS"],justify=["MIDDLE","MIDDLE"],size=0.5,style_='BOLD')),
          appearance=Appearance(DEF='TextAppearance',
            material=Material(diffuseColor=(0.1,0.2,0.9))))]),
      Transform(translation=(0,-3,0),
        children=[
        Shape(
          geometry=Text(string=["using multiple","nested Transform nodes"],
            fontStyle=FontStyle(family=["SANS"],justify=["MIDDLE","MIDDLE"],size=0.5,style_='BOLD')),
          appearance=Appearance(USE='TextAppearance'))])]),
    Transform(DEF='RightSide',translation=(3,0,0),
      #  Composed equivalent rotation follows, X3D-Edit can reload rotation array values from embedded comment 
      children=[
      Transform(DEF='ComposedRotation',rotation=(0.87262,0.40202,0.27735,2.24592),
        #  RotationCalculator composed rotation: 1.0 0.0 0.0 2.35619, 0.0 1.0 0.0 0.785398, 0.0 0.0 1.0 -0.523599 
        children=[
        Inline(USE='CubeWithLabeledSides'),
        Shape(USE='AxisLinesShape')]),
      Transform(translation=(0,3,0),
        children=[
        Shape(
          geometry=Text(string=["Single composed","Transform rotation"],
            fontStyle=FontStyle(family=["SANS"],justify=["MIDDLE","MIDDLE"],size=0.5,style_='BOLD')),
          appearance=Appearance(USE='TextAppearance'))]),
      Transform(translation=(0,-3,0),
        children=[
        Shape(
          geometry=Text(string=["computed with X3D-Edit","Rotation Calculator"],
            fontStyle=FontStyle(family=["SANS"],justify=["MIDDLE","MIDDLE"],size=0.5,style_='BOLD')),
          appearance=Appearance(USE='TextAppearance'))])])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for RotationCalculatorExample.py")
