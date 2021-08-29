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
    meta(content='RoundedRectangleComparison.x3d',name='title'),
    meta(content='RoundedRectangleComparison shows three RoundedRectangle shapes using polygons/lines/points rendering. Note that reuse of RoundedRectangle geometry requires only Interchange profile, but Text requires Immersive profile.',name='description'),
    meta(content='8 November 2014',name='created'),
    meta(content='20 October 2019',name='modified'),
    meta(content='RoundedRectangleComparison.png',name='Image'),
    meta(content='RoundedRectanglePrimitives.x3d',name='reference'),
    meta(content='RoundedRectangle2D.x3d',name='reference'),
    meta(content='RoundedRectangleDesign.vsd',name='reference'),
    meta(content='RoundedRectangleDesign.png',name='reference'),
    meta(content='RoundedRectangleDesign.svg',name='reference'),
    meta(content='Don Brutzman',name='creator'),
    meta(content='https://en.wikipedia.org/wiki/Squircle',name='reference'),
    meta(content='https://en.wiktionary.org/wiki/roundrect',name='reference'),
    meta(content='Development of this scene added new features to X3D-Edit',name='info'),
    meta(content='https://x3dgraphics.com/examples/X3dForAdvancedModeling/GeometricShapes/RoundedRectangleComparison.x3d',name='identifier'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../license.html',name='license')]),
  Scene=Scene(
    children=[
    WorldInfo(title='RoundedRectangleComparison.x3d'),
    Background(skyColor=[(0.1,0.1,0.1)]),
    Viewpoint(description='RoundedRectangle Comparison',position=(0,0,7)),
    Viewpoint(description='Polygons RoundedRectangle',position=(-2,0,3)),
    Viewpoint(description='Lines RoundedRectangle',position=(0,0,3)),
    Viewpoint(description='Points RoundedRectangle',position=(2,0,3)),
    Transform(translation=(-2,0,0),
      children=[
      Shape(DEF='polygonsRoundedRectangle',
        #  RoundedRectangle with 44 perimeter points + 4 internal points on each level 
        geometry=IndexedFaceSet(coordIndex=[0,1,2,3,0,-1,0,14,15,1,0,-1,1,25,26,2,1,-1,2,36,37,3,2,-1,3,47,4,0,3,-1,0,4,5,6,7,8,9,10,11,12,13,14,0,-1,1,15,16,17,18,19,20,21,22,23,24,25,1,-1,2,26,27,28,29,30,31,32,33,34,35,36,2,-1,3,37,38,39,40,41,42,43,44,45,46,47,3,-1,48,49,50,51,48,-1,48,62,63,49,48,-1,49,73,74,50,49,-1,50,84,85,51,50,-1,51,95,52,48,51,-1,48,52,53,54,55,56,57,58,59,60,61,62,48,-1,49,63,64,65,66,67,68,69,70,71,72,73,49,-1,50,74,75,76,77,78,79,80,81,82,83,84,50,-1,51,85,86,87,88,89,90,91,92,93,94,95,51,-1,5,4,52,53,-1,6,5,53,54,-1,7,6,54,55,-1,8,7,55,56,-1,9,8,56,57,-1,10,9,57,58,-1,11,10,58,59,-1,12,11,59,60,-1,13,12,60,61,-1,14,13,61,62,-1,15,14,62,63,-1,16,15,63,64,-1,17,16,64,65,-1,18,17,65,66,-1,19,18,66,67,-1,20,19,67,68,-1,21,20,68,69,-1,22,21,69,70,-1,23,22,70,71,-1,24,23,71,72,-1,25,24,72,73,-1,26,25,73,74,-1,27,26,74,75,-1,28,27,75,76,-1,29,28,76,77,-1,30,29,77,78,-1,31,30,78,79,-1,32,31,79,80,-1,33,32,80,81,-1,34,33,81,82,-1,35,34,82,83,-1,36,35,83,84,-1,37,36,84,85,-1,38,37,85,86,-1,39,38,86,87,-1,40,39,87,88,-1,41,40,88,89,-1,42,41,89,90,-1,43,42,90,91,-1,44,43,91,92,-1,45,44,92,93,-1,46,45,93,94,-1,47,46,94,95,-1,47,95,52,4,-1],creaseAngle=6.28,solid=False,
          coord=Coordinate(DEF='PointArray2x1x0.2',point=[(0.450,0.900,0.100),(0.450,-0.900,0.100),(-0.450,-0.900,0.100),(-0.450,0.900,0.100),(0.450,1.000,0.100),(0.466,0.999,0.100),(0.481,0.995,0.100),(0.495,0.989,0.100),(0.509,0.981,0.100),(0.521,0.971,0.100),(0.531,0.959,0.100),(0.539,0.945,0.100),(0.545,0.931,0.100),(0.549,0.916,0.100),(0.550,0.900,0.100),(0.550,-0.900,0.100),(0.549,-0.916,0.100),(0.545,-0.931,0.100),(0.539,-0.945,0.100),(0.531,-0.959,0.100),(0.521,-0.971,0.100),(0.509,-0.981,0.100),(0.495,-0.989,0.100),(0.481,-0.995,0.100),(0.466,-0.999,0.100),(0.450,-1.000,0.100),(-0.450,-1.000,0.100),(-0.466,-0.999,0.100),(-0.481,-0.995,0.100),(-0.495,-0.989,0.100),(-0.509,-0.981,0.100),(-0.521,-0.971,0.100),(-0.531,-0.959,0.100),(-0.539,-0.945,0.100),(-0.545,-0.931,0.100),(-0.549,-0.916,0.100),(-0.550,-0.900,0.100),(-0.550,0.900,0.100),(-0.549,0.916,0.100),(-0.545,0.931,0.100),(-0.539,0.945,0.100),(-0.531,0.959,0.100),(-0.521,0.971,0.100),(-0.509,0.981,0.100),(-0.495,0.989,0.100),(-0.481,0.995,0.100),(-0.466,0.999,0.100),(-0.450,1.000,0.100),(0.450,0.900,-0.100),(0.450,-0.900,-0.100),(-0.450,-0.900,-0.100),(-0.450,0.900,-0.100),(0.450,1.000,-0.100),(0.466,0.999,-0.100),(0.481,0.995,-0.100),(0.495,0.989,-0.100),(0.509,0.981,-0.100),(0.521,0.971,-0.100),(0.531,0.959,-0.100),(0.539,0.945,-0.100),(0.545,0.931,-0.100),(0.549,0.916,-0.100),(0.550,0.900,-0.100),(0.550,-0.900,-0.100),(0.549,-0.916,-0.100),(0.545,-0.931,-0.100),(0.539,-0.945,-0.100),(0.531,-0.959,-0.100),(0.521,-0.971,-0.100),(0.509,-0.981,-0.100),(0.495,-0.989,-0.100),(0.481,-0.995,-0.100),(0.466,-0.999,-0.100),(0.450,-1.000,-0.100),(-0.450,-1.000,-0.100),(-0.466,-0.999,-0.100),(-0.481,-0.995,-0.100),(-0.495,-0.989,-0.100),(-0.509,-0.981,-0.100),(-0.521,-0.971,-0.100),(-0.531,-0.959,-0.100),(-0.539,-0.945,-0.100),(-0.545,-0.931,-0.100),(-0.549,-0.916,-0.100),(-0.550,-0.900,-0.100),(-0.550,0.900,-0.100),(-0.549,0.916,-0.100),(-0.545,0.931,-0.100),(-0.539,0.945,-0.100),(-0.531,0.959,-0.100),(-0.521,0.971,-0.100),(-0.509,0.981,-0.100),(-0.495,0.989,-0.100),(-0.481,0.995,-0.100),(-0.466,0.999,-0.100),(-0.450,1.000,-0.100)])),
        appearance=Appearance(
          #  Polygon color is primarily defined by diffuseColor 
          material=Material(DEF='PeriwinkleDiffuse',diffuseColor=(0.8,0.8,1.0)))),
      Transform(translation=(0,-1.5,0),
        children=[
        Shape(
          geometry=Text(string=["Polygons"],
            fontStyle=FontStyle(DEF='SmallCenteredFont',family=["SANS"],justify=["MIDDLE","MIDDLE"],size=0.2,style_='BOLD')),
          appearance=Appearance(
            material=Material(USE='PeriwinkleDiffuse')))])]),
    Shape(DEF='linesRoundedRectangle',
      geometry=IndexedLineSet(coordIndex=[0,1,2,3,0,-1,0,14,15,1,0,-1,1,25,26,2,1,-1,2,36,37,3,2,-1,3,47,4,0,3,-1,0,4,5,6,7,8,9,10,11,12,13,14,0,-1,1,15,16,17,18,19,20,21,22,23,24,25,1,-1,2,26,27,28,29,30,31,32,33,34,35,36,2,-1,3,37,38,39,40,41,42,43,44,45,46,47,3,-1,48,49,50,51,48,-1,48,62,63,49,48,-1,49,73,74,50,49,-1,50,84,85,51,50,-1,51,95,52,48,51,-1,48,52,53,54,55,56,57,58,59,60,61,62,48,-1,49,63,64,65,66,67,68,69,70,71,72,73,49,-1,50,74,75,76,77,78,79,80,81,82,83,84,50,-1,51,85,86,87,88,89,90,91,92,93,94,95,51,-1,5,4,52,53,-1,6,5,53,54,-1,7,6,54,55,-1,8,7,55,56,-1,9,8,56,57,-1,10,9,57,58,-1,11,10,58,59,-1,12,11,59,60,-1,13,12,60,61,-1,14,13,61,62,-1,15,14,62,63,-1,16,15,63,64,-1,17,16,64,65,-1,18,17,65,66,-1,19,18,66,67,-1,20,19,67,68,-1,21,20,68,69,-1,22,21,69,70,-1,23,22,70,71,-1,24,23,71,72,-1,25,24,72,73,-1,26,25,73,74,-1,27,26,74,75,-1,28,27,75,76,-1,29,28,76,77,-1,30,29,77,78,-1,31,30,78,79,-1,32,31,79,80,-1,33,32,80,81,-1,34,33,81,82,-1,35,34,82,83,-1,36,35,83,84,-1,37,36,84,85,-1,38,37,85,86,-1,39,38,86,87,-1,40,39,87,88,-1,41,40,88,89,-1,42,41,89,90,-1,43,42,90,91,-1,44,43,91,92,-1,45,44,92,93,-1,46,45,93,94,-1,47,46,94,95,-1,47,95,52,4,-1],
        coord=Coordinate(USE='PointArray2x1x0.2')),
      appearance=Appearance(
        #  Line color is only! defined by emissiveColor 
        material=Material(DEF='PeriwinkleEmissive',emissiveColor=(0.8,0.8,1.0)))),
    Transform(translation=(0,-1.5,0),
      children=[
      Shape(
        geometry=Text(string=["Lines"],
          fontStyle=FontStyle(USE='SmallCenteredFont')),
        appearance=Appearance(
          material=Material(USE='PeriwinkleDiffuse')))]),
    Transform(translation=(2,0,0),
      children=[
      Shape(DEF='pointsRoundedRectangle',
        geometry=PointSet(
          coord=Coordinate(USE='PointArray2x1x0.2')),
        appearance=Appearance(
          #  Point color is only! defined by emissiveColor 
          material=Material(USE='PeriwinkleEmissive'))),
      Transform(translation=(0,-1.5,0),
        children=[
        Shape(
          geometry=Text(string=["Points"],
            fontStyle=FontStyle(USE='SmallCenteredFont')),
          appearance=Appearance(
            material=Material(USE='PeriwinkleDiffuse')))])])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for RoundedRectangleComparison.py")
