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
    meta(content='SpotLightVisualization.x3d',name='title'),
    meta(content='Create outline geometry to show SpotLight coverage. Author TODO: use the X3D-Edit SpotLight editor to modify and re-visualize the first SpotLight.',name='description'),
    meta(content='Don Brutzman',name='creator'),
    meta(content='14 November 2009',name='created'),
    meta(content='14 November 2009',name='generated'),
    meta(content='20 October 2019',name='modified'),
    meta(content='SpotLightVisualization.png',name='reference'),
    meta(content='http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter11LightingEnvironmentalEffects/SpotLightVisualization.x3d',name='identifier'),
    meta(content='../Chapter09EventUtilitiesScripting/CircleLines.java',name='generator'),
    meta(content='../license.html',name='license')]),
  Scene=Scene(
    children=[
    WorldInfo(title='SpotLightVisualization.x3d'),
    NavigationInfo(headlight=False),
    Background(skyColor=[(0.05,0.1,0.2)]),
    Viewpoint(centerOfRotation=(0,0,-5),description='Two examples of a single SpotLight',position=(0,0,15)),
    Viewpoint(centerOfRotation=(0,0,-5),description='View from above',orientation=(1,0,0,-0.588),position=(0,10,10)),
    Transform(DEF='RightSide',translation=(6,0,0),
      #  Author TODO: use the X3D-Edit SpotLight editor to modify and re-visualize the first SpotLight 
      children=[
      SpotLight(beamWidth=0.1745,color=(0.8,0.8,0.2),cutOffAngle=0.7837,radius=10),
      Viewpoint(description='View from behind DirectionalLight',orientation=(-0.8932,0.4488,0.0279,0.1389),position=(0.5,1,8)),
      Inline(DEF='CoordinateAxes',url=["../../X3dForWebAuthors/Chapter03Grouping/CoordinateAxes.x3d","http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter03Grouping/CoordinateAxes.x3d","https://savage.nps.edu/Savage/Tools/Authoring/CoordinateAxes.x3d","../../X3dForWebAuthors/Chapter03Grouping/CoordinateAxes.wrl","http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter03Grouping/CoordinateAxes.wrl","https://savage.nps.edu/Savage/Tools/Authoring/CoordinateAxes.wrl"]),
      Transform(DEF='PolygonalWall',rotation=(1,0,0,1.57079),translation=(-5,5,-5),
        children=[
        Shape(
          geometry=ElevationGrid(height=[0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0],solid=False,xDimension=11,zDimension=11),
          appearance=Appearance(
            material=Material(diffuseColor=(1,1,1))))])]),
    Transform(DEF='LeftSide',translation=(-6,0,0),
      #  Watch out for global scope bugs if you copy a light by DEF/USE 
      children=[
      SpotLight(beamWidth=0.1745,color=(0.8,0.8,0.2),cutOffAngle=0.7837,radius=10),
      Viewpoint(description='View from behind SpotLight',orientation=(-0.8932,0.4488,0.0279,0.1389),position=(0.5,1,8)),
      Viewpoint(description='Side view of SpotLight outline',orientation=(0,1,0,1.57079),position=(12,0,-2.5)),
      Transform(DEF='BeamLines',scale=(1,1,5),
        #  CircleLines made out of 24 line segments, turned into a cone with 8 side lines 
        children=[
        Shape(
          geometry=IndexedLineSet(coordIndex=[0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,-1,25,0,-1,25,3,-1,25,6,-1,25,9,-1,25,12,-1,25,15,-1,25,18,-1,25,21,-1],
            coord=Coordinate(point=[(0,1,-1),(0.259,0.966,-1),(0.5,0.866,-1),(0.707,0.707,-1),(0.866,0.5,-1),(0.966,0.259,-1),(1,0,-1),(0.966,-0.259,-1),(0.866,-0.5,-1),(0.707,-0.707,-1),(0.5,-0.866,-1),(0.259,-0.966,-1),(0,-1,-1),(-0.259,-0.966,-1),(-0.5,-0.866,-1),(-0.707,-0.707,-1),(-0.866,-0.5,-1),(-0.966,-0.259,-1),(-1,-0,-1),(-0.966,0.259,-1),(-0.866,0.5,-1),(-0.707,0.707,-1),(-0.5,0.866,-1),(-0.259,0.966,-1),(0,1,-1),(0,0,0),(0,0,-1)])),
          appearance=Appearance(
            material=Material(emissiveColor=(0.8,0.8,0.2)))),
        Shape(
          geometry=IndexedLineSet(coordIndex=[0,1,-1],
            coord=Coordinate(point=[(0,0,0),(0,0,-1)])),
          appearance=Appearance(
            material=Material(),))]),
      Transform(DEF='CutOffCone',scale=(5,5,5),
        children=[
        Transform(rotation=(1,0,0,1.57079),translation=(0,0,-0.5),
          children=[
          Shape(
            geometry=Cone(bottom=False,height=1),
            appearance=Appearance(
              material=Material(diffuseColor=(0,0,0),emissiveColor=(0.4,0.4,0.1),transparency=0.75)))])]),
      Inline(USE='CoordinateAxes'),
      Transform(USE='PolygonalWall')])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for SpotLightVisualization.py")
