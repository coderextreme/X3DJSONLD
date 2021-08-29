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

newModel=X3D(profile='Interchange',version='3.1',
  head=head(
    children=[
    meta(content='Compass.x3d',name='title'),
    meta(content='Brazilian Naval Academy Training Ship',name='description'),
    meta(content='Claudio Coreixas',name='creator'),
    meta(content='20 October 2009',name='created'),
    meta(content='2 January 2019',name='modified'),
    meta(content='http://www.en.mar.mil.br',name='reference'),
    meta(content='ships parts',name='subject'),
    meta(content='https://savage.nps.edu/Savage/ShipsMilitary/PatrolCraftNavalAcademyBrazil/Compass.x3d',name='identifier'),
    meta(content='X3D-Edit, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    Transform(DEF='Cylinder01',
      children=[
      Transform(translation=(0.0,5.904,0.0),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.82,0.78,0.74))),
          geometry=Cylinder(height=11.81,radius=5.373))])]),
    Transform(DEF='Sphere01',translation=(-0.02133,13.3,-0.00694),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(ambientIntensity=0.02,diffuseColor=(0.701961,0.588235,0),shininess=0.29,specularColor=(1,0.887979,0))),
        geometry=Sphere(radius=5.567))]),
    Transform(DEF='Cylinder02',scale=(1.0,0.7737,1.0),
      children=[
      Transform(translation=(0.0,0.8903,0.0),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.82,0.78,0.74))),
          geometry=Cylinder(height=1.781,radius=6.611))])]),
    Transform(DEF='Box01',translation=(0.001388,9.608,-0.05238),
      children=[
      Transform(translation=(0.0,0.6588,0.0),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.82,0.78,0.74))),
          geometry=Box(size=(17.75,1.318,1.851)))])]),
    Transform(DEF='Sphere02',translation=(-8.315,12.98,-0.00694),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(ambientIntensity=1.0,diffuseColor=(0.03922,0.5647,0.0),shininess=0.145)),
        geometry=Sphere(radius=1.781))]),
    Transform(DEF='Sphere03',translation=(8.403,12.98,-0.00694),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(ambientIntensity=1.0,diffuseColor=(0.9765,0.0,0.0),shininess=0.145)),
        geometry=Sphere(radius=1.781))]),
    Transform(DEF='Ellipse01',rotation=(-1.0,0.0,0.0,-1.833),translation=(-0.1223,15.26,-5.407),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(ambientIntensity=0.02,diffuseColor=(0.701961,0.588235,0),shininess=0.29,specularColor=(1,0.887979,0))),
        geometry=IndexedFaceSet(DEF='Ellipse01-FACES',coordIndex=[0,1,29,-1,0,29,28,-1,1,2,30,-1,1,30,29,-1,2,3,31,-1,2,31,30,-1,3,4,32,-1,3,32,31,-1,4,5,33,-1,4,33,32,-1,5,6,34,-1,5,34,33,-1,6,7,35,-1,6,35,34,-1,7,8,36,-1,7,36,35,-1,8,9,37,-1,8,37,36,-1,9,10,38,-1,9,38,37,-1,10,11,39,-1,10,39,38,-1,11,12,40,-1,11,40,39,-1,12,13,41,-1,12,41,40,-1,13,14,42,-1,13,42,41,-1,14,15,43,-1,14,43,42,-1,15,16,44,-1,15,44,43,-1,16,17,45,-1,16,45,44,-1,17,18,46,-1,17,46,45,-1,18,19,47,-1,18,47,46,-1,19,20,48,-1,19,48,47,-1,20,21,49,-1,20,49,48,-1,21,22,50,-1,21,50,49,-1,22,23,51,-1,22,51,50,-1,23,24,52,-1,23,52,51,-1,24,25,53,-1,24,53,52,-1,25,26,54,-1,25,54,53,-1,26,27,55,-1,26,55,54,-1,27,0,28,-1,27,28,55,-1,27,1,0,-1,27,2,1,-1,26,2,27,-1,26,3,2,-1,25,3,26,-1,24,3,25,-1,24,4,3,-1,24,5,4,-1,23,5,24,-1,22,5,23,-1,22,6,5,-1,21,6,22,-1,21,7,6,-1,20,7,21,-1,20,8,7,-1,19,8,20,-1,19,9,8,-1,19,10,9,-1,18,10,19,-1,17,10,18,-1,17,11,10,-1,17,12,11,-1,16,12,17,-1,15,12,16,-1,15,13,12,-1,14,13,15,-1,55,28,29,-1,55,29,30,-1,54,55,30,-1,54,30,31,-1,53,54,31,-1,52,53,31,-1,52,31,32,-1,52,32,33,-1,51,52,33,-1,50,51,33,-1,50,33,34,-1,49,50,34,-1,49,34,35,-1,48,49,35,-1,48,35,36,-1,47,48,36,-1,47,36,37,-1,47,37,38,-1,46,47,38,-1,45,46,38,-1,45,38,39,-1,45,39,40,-1,44,45,40,-1,43,44,40,-1,43,40,41,-1,42,43,41,-1],
          coord=Coordinate(DEF='Ellipse01-COORD',point=[(3.059,0.0,0.0),(2.978,0.0,-0.4736),(2.748,0.0,-0.9084),(2.386,0.0,-1.292),(1.912,0.0,-1.612),(1.344,0.0,-1.856),(0.7009,0.0,-2.012),(0.0,0.0,-2.067),(-0.7009,0.0,-2.012),(-1.344,0.0,-1.856),(-1.912,0.0,-1.612),(-2.386,0.0,-1.292),(-2.748,0.0,-0.9084),(-2.978,0.0,-0.4736),(-3.059,0.0,0.0),(-2.978,0.0,0.4736),(-2.748,0.0,0.9084),(-2.386,0.0,1.292),(-1.912,0.0,1.612),(-1.344,0.0,1.856),(-0.7009,0.0,2.012),(0.0,0.0,2.067),(0.7009,0.0,2.012),(1.344,0.0,1.856),(1.912,0.0,1.612),(2.386,0.0,1.292),(2.748,0.0,0.9084),(2.978,0.0,0.4736),(3.059,1.5,0.0),(2.978,1.5,-0.4736),(2.748,1.5,-0.9084),(2.386,1.5,-1.292),(1.912,1.5,-1.612),(1.344,1.5,-1.856),(0.7009,1.5,-2.012),(0.0,1.5,-2.067),(-0.7009,1.5,-2.012),(-1.344,1.5,-1.856),(-1.912,1.5,-1.612),(-2.386,1.5,-1.292),(-2.748,1.5,-0.9084),(-2.978,1.5,-0.4736),(-3.059,1.5,0.0),(-2.978,1.5,0.4736),(-2.748,1.5,0.9084),(-2.386,1.5,1.292),(-1.912,1.5,1.612),(-1.344,1.5,1.856),(-0.7009,1.5,2.012),(0.0,1.5,2.067),(0.7009,1.5,2.012),(1.344,1.5,1.856),(1.912,1.5,1.612),(2.386,1.5,1.292),(2.748,1.5,0.9084),(2.978,1.5,0.4736)])))])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for Compass.py")
