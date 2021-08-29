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

newModel=X3D(profile='Interchange',version='3.3',
  head=head(
    children=[
    meta(content='NonplanarPolygons.x3d',name='title'),
    meta(content='Illustration of nonplanar polygons.',name='description'),
    meta(content='22 May 2006',name='created'),
    meta(content='20 October 2019',name='modified'),
    meta(content='Leonard Daly and Don Brutzman',name='creator'),
    meta(content='NonplanarPolygons.png',name='Image'),
    meta(content='http://X3dGraphics.com',name='reference'),
    meta(content='https://www.web3d.org/x3d/content/examples/X3dResources.html',name='reference'),
    meta(content='Copyright 2006, Daly Realism and Don Brutzman',name='rights'),
    meta(content='X3D book, X3D graphics, X3D-Edit, http://www.x3dGraphics.com',name='subject'),
    meta(content='http://X3dGraphics.com/examples/X3dForWebAuthors/Chapter13GeometryTrianglesQuadrilaterals/NonplanarPolygons.x3d',name='identifier'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../license.html',name='license')]),
  Scene=Scene(
    children=[
    WorldInfo(title='NonplanarPolygons.x3d'),
    Viewpoint(description='Initial'),
    Viewpoint(description='Book View',orientation=(0,-1,0,0.1),position=(-0.71,-0.52,8.9)),
    Background(skyColor=[(1,1,1)]),
    NavigationInfo(headlight=False),
    DirectionalLight(direction=(0,-1,0)),
    Transform(translation=(0,2,0),
      children=[
      Transform(translation=(-2,0,0),
        children=[
        Shape(DEF='SimplePoints',
          appearance=Appearance(DEF='Black',
            material=Material(diffuseColor=(0,0,0),specularColor=(1,0,0))),
          geometry=PointSet(
            coord=Coordinate(DEF='Points',point=[(-1,-1,3),(1,-2,3),(1,-1,1),(-1,-2,1)]))),
        Group(DEF='OutlineWithExaggeratedPoints',
          children=[
          Shape(
            appearance=Appearance(USE='Black'),
            geometry=IndexedLineSet(coordIndex=[0,1,2,3,0,-1],
              coord=Coordinate(USE='Points'))),
          Transform(translation=(-1,-1,3),
            children=[
            Shape(
              appearance=Appearance(USE='Black'),
              geometry=Sphere(DEF='Ball',radius=.1))]),
          Transform(translation=(1,-2,3),
            children=[
            Shape(
              appearance=Appearance(USE='Black'),
              geometry=Sphere(USE='Ball'))]),
          Transform(translation=(1,-1,1),
            children=[
            Shape(
              appearance=Appearance(USE='Black'),
              geometry=Sphere(USE='Ball'))]),
          Transform(translation=(-1,-2,1),
            children=[
            Shape(
              appearance=Appearance(USE='Black'),
              geometry=Sphere(USE='Ball'))])])]),
      Transform(translation=(2,0,0),
        children=[
        Group(USE='OutlineWithExaggeratedPoints')])]),
    Transform(translation=(-2,0,0),
      children=[
      Shape(
        geometry=IndexedFaceSet(coordIndex=[0,1,2,-1,2,3,0,-1],creaseAngle=1.57,solid=False,
          coord=Coordinate(USE='Points')),
        appearance=Appearance(DEF='Look',
          material=Material(),))]),
    Transform(translation=(2,0,0),
      children=[
      Shape(
        geometry=IndexedFaceSet(coordIndex=[0,1,3,-1,1,2,3,-1],creaseAngle=1.57,solid=False,
          coord=Coordinate(USE='Points')),
        appearance=Appearance(USE='Look'))])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for NonplanarPolygons.py")
