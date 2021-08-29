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
    meta(content='Fuselage.x3d',name='title'),
    meta(content='Michael Collins',name='creator'),
    meta(content='LT Terry D. Norbraten, USN',name='contributor'),
    meta(content='19 March 2001',name='created'),
    meta(content='1 January 2019',name='modified'),
    meta(content='Helicopter body.',name='description'),
    meta(content='X3D-Edit 3.2, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='http://www.fas.org/man/dod-101/sys/ac/sh-60.htm',name='reference'),
    meta(content='https://savage.nps.edu/Savage/AircraftHelicopters/SH60SeahawkUnitedStates/Fuselage.x3d',name='identifier'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    Group(
      children=[
      Shape(
        appearance=Appearance(
          material=Material(),),
        geometry=IndexedFaceSet(convex=False,coordIndex=[0,1,2,3,4,5,6,7,8,9,10,11,-1,12,13,14,15,16,17,5,4,3,2,1,0,-1,17,16,15,14,13,12,24,25,26,27,28,29,-1,5,17,18,6,-1,18,17,29,30,-1,18,19,20,21,22,23,11,10,9,8,7,6,-1,23,22,21,20,19,18,30,31,32,33,34,35,-1,11,23,12,0,-1,12,23,35,24,-1,24,36,37,38,26,25,-1,35,34,43,37,36,-1,34,33,32,31,30,41,42,43,-1,37,43,42,41,40,39,38,-1,29,28,27,26,38,39,40,-1,40,41,30,29,-1,52,53,47,46,45,44,-1,47,53,54,48,-1,49,48,54,55,51,50,-1,51,55,52,44,-1,55,54,53,52,-1,56,57,58,59,60,61,62,63,64,65,66,-1,67,68,69,70,71,72,61,60,59,58,57,56,-1,78,79,80,81,82,83,72,71,70,69,68,67,-1,89,90,91,92,83,82,81,80,79,78,-1,96,97,92,91,90,89,-1,66,65,64,63,62,61,72,73,74,75,76,77,-1,77,76,75,74,73,72,83,84,85,86,87,88,-1,88,87,86,85,84,83,92,93,94,95,-1,95,94,93,92,97,98,-1,98,97,96,99,100,-1],creaseAngle=1.57,solid=False,
          coord=Coordinate(point=[(0.5,1,1.6),(7,0,1.3),(8,0,.7),(9,0,.3),(10,0,.2),(17,0,.2),(17,0,3.8),(10,0,3.8),(9,0,3.2),(8,0,3.0),(7,0,2.7),(.5,1,2.4),(0.5,1.1,1.5),(7,.2,1.1),(8,.2,.5),(9,.2,.1),(10,.2,0),(17,.2,0),(17,.2,4),(10,.2,4),(9,.2,3.9),(8,.2,3.5),(7,.2,2.9),(.5,1.1,2.5),(0.5,1.9,1.5),(7,2,1),(8,2,.5),(9,2,.1),(10,2,0),(17,2,0),(17,2,4),(10,2,4),(9,2,3.9),(8,2,3.5),(7,2,2.9),(.5,1.9,2.5),(0.5,1.9,2),(7,2.2,2),(9,3,.3),(10,3,.2),(17,3,.2),(17,3,3.8),(10,3,3.9),(9,3,3.2),(9.2,2.9,.6),(11,3,.4),(15,3,.4),(17,3,.4),(17,3,3.7),(15,3,3.7),(11,3,3.7),(9.2,2.9,3.5),(11,4,1.1),(15,4,1.1),(15,4,2.9),(11,4,2.9),(17,0,.2),(18,0,.2),(19,0,.4),(20,0,1.2),(20.3,.1,1.7),(20.4,.2,2),(20.3,.1,2.3),(20,0,2.8),(19,0,3.6),(18,0,3.8),(17,0,3.8),(17,.2,0),(18,.2,0),(19,.2,.2),(20,.2,1.0),(20.4,.3,1.5),(20.5,.4,2.0),(20.4,.3,2.5),(20,.2,3),(19,.2,3.8),(18,.2,4),(17,.2,4),(17,1,0),(18,1,.2),(19,1,.4),(20,1,1.2),(20.2,1,1.7),(20.3,1,2),(20.2,1,2.3),(20,1,2.8),(19,1,3.6),(18,1,3.8),(17,1,4.0),(17,1.2,0),(18,1.2,.4),(19,1.2,.6),(19.5,1.2,1.8),(19,1.2,3.4),(18,1.2,3.6),(17,1.2,4.0),(17,2.5,.1),(18,2.5,2),(17,2.5,3.9),(17,3,.2),(17,3,3.8)])))]),
    Background(groundAngle=[1.309,1.570796],groundColor=[(0.1,0.1,0),(0.4,0.25,0.2),(0.6,0.6,0.6)],skyAngle=[1.309,1.571],skyColor=[(0,0.2,0.7),(0,0.5,1),(1,1,1)]),
    Group(
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(.3,.3,.3))),
        geometry=IndexedFaceSet(convex=False,coordIndex=[3,2,1,0,-1],creaseAngle=1.4,solid=False,
          coord=Coordinate(point=[(13.5,.8,-.1),(14.5,.8,-.1),(14.5,1.8,-.1),(13.5,1.8,-.1)])))]),
    Group(
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(.3,.3,.3))),
        geometry=IndexedFaceSet(convex=False,coordIndex=[3,2,1,0,-1],creaseAngle=1.4,solid=False,
          coord=Coordinate(point=[(12.4,.8,-.1),(13.4,.8,-.1),(13.4,1.8,-.1),(12.4,1.8,-.1)])))]),
    Group(
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(.3,.3,.3))),
        geometry=IndexedFaceSet(convex=False,coordIndex=[0,1,2,3,-1,3,2,1,0,-1],creaseAngle=1.4,solid=False,
          coord=Coordinate(point=[(15,.3,4.1),(12.5,.3,4.1),(12.5,2,4.1),(15,2,4.1)])))]),
    Group(
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(.3,.3,.3))),
        geometry=IndexedFaceSet(convex=False,coordIndex=[96,97,92,91,90,89,-1,95,94,93,92,97,98,-1],creaseAngle=1.57,solid=False,
          coord=Coordinate(point=[(0.5,1,1.6),(7,0,1.3),(8,0,.7),(9,0,.3),(10,0,.2),(17,0,.2),(17,0,3.8),(10,0,3.8),(9,0,3.2),(8,0,3.0),(7,0,2.7),(.5,1,2.4),(0.5,1.1,1.5),(7,.2,1.1),(8,.2,.5),(9,.2,.1),(10,.2,0),(17,.2,0),(17,.2,4),(10,.2,4),(9,.2,3.9),(8,.2,3.5),(7,.2,2.9),(.5,1.1,2.5),(0.5,1.9,1.5),(7,2,1),(8,2,.5),(9,2,.1),(10,2,0),(17,2,0),(17,2,4),(10,2,4),(9,2,3.9),(8,2,3.5),(7,2,2.9),(.5,1.9,2.5),(0.5,1.9,2),(7,2.2,2),(9,3,.3),(10,3,.2),(17,3,.2),(17,3,3.8),(10,3,3.9),(9,3,3.2),(9.2,2.9,.6),(11,3,.4),(15,3,.4),(17,3,.4),(17,3,3.7),(15,3,3.7),(11,3,3.7),(9.2,2.9,3.5),(11,4,1.1),(15,4,1.1),(15,4,2.9),(11,4,2.9),(17,0,.2),(18,0,.2),(19,0,.4),(20,0,1.2),(20.3,.1,1.7),(20.4,.2,2),(20.3,.1,2.3),(20,0,2.8),(19,0,3.6),(18,0,3.8),(17,0,3.8),(17.1,.2,0),(18.1,.2,0),(19.1,.2,.2),(20.1,.2,1.0),(20.5,.3,1.5),(20.6,.4,2.0),(20.5,.3,2.5),(20.1,.2,3),(19.1,.2,3.8),(18.1,.2,4),(17.1,.2,4),(17.1,1,0),(18.1,1,.2),(19.1,1,.4),(20.1,1,1.2),(20.3,1,1.7),(20.4,1,2),(20.3,1,2.3),(20.1,1,2.8),(19.1,1,3.6),(18.1,1,3.8),(17.1,1,4.0),(17.1,1.3,0),(18.1,1.3,.4),(19.1,1.2,.6),(19.6,1.2,1.8),(19.1,1.2,3.4),(18.1,1.2,3.6),(17.1,1.2,4.0),(17.1,2.5,.1),(18.1,2.5,2),(17.1,2.5,3.9),(17,3,.2),(17,3,3.8)])))]),
    Group(
      children=[
      Transform(scale=(.2,.2,.2),translation=(17,.5,4.05),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(.1,.1,.1))),
          geometry=Text(string=["LT Mike Collins"],
            fontStyle=FontStyle(style_='BOLD',
              #  Added BOLD FontStyle to make text show up better on the fuselage. 
              )))])])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for Fuselage.py")
