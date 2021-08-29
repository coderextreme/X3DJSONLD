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

newModel=X3D(profile='Interchange',version='3.0',
  head=head(
    children=[
    meta(content='Cockpit.x3d',name='title'),
    meta(content='F16, Fighting Falcon, Turkish Air Force (TUAF) cockpit',name='description'),
    meta(content='Murat ONDER, LTJG, Turkish Navy',name='creator'),
    meta(content='13 July 2003',name='created'),
    meta(content='22 October 2018',name='modified'),
    meta(content='https://savage.nps.edu/Savage/AircraftFixedWing/F16FightingFalconTurkey/Cockpit.x3d',name='identifier'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    #  Example scene to illustrate X3D tags and attributes. 
    children=[
    Group(
      children=[
      Transform(
        children=[
        Shape(
          geometry=IndexedFaceSet(convex=False,coordIndex=[0,1,2,3,4,5,6,7,8,9],
            coord=Coordinate(point=[(25.5,0,0),(25.5,10,0),(18,17,0),(8,17,0),(5,21,0),(-5,21,0),(-8,17,0),(-18,17,0),(-25.5,10,0),(-25.5,0,0)])),
          appearance=Appearance(
            texture=ImageTexture(url=["Cockpit.jpg","https://savage.nps.edu/Savage/AircraftFixedWing/F16FightingFalconTurkey/Cockpit.jpg"])))]),
      Transform(
        children=[
        Shape(
          geometry=IndexedFaceSet(convex=False,coordIndex=[0,1,2,3],
            coord=Coordinate(point=[(25,-22.55,0),(25,0,0),(-25,0,0),(-25,-22.55,0)])),
          appearance=Appearance(
            texture=ImageTexture(url=["Cockpit2.jpg","../../../Savage/AircraftFixedWing/F16FightingFalconTurkey/Cockpit2.jpg","https://savage.nps.edu/Savage/AircraftFixedWing/F16FightingFalconTurkey/Cockpit2.jpg"])))]),
      Transform(
        children=[
        Shape(
          geometry=IndexedFaceSet(coordIndex=[0,1,2,3],creaseAngle=0.57,
            coord=Coordinate(point=[(5,21,0),(6.5,33,0),(-6.5,33,0),(-5,21,0)])),
          appearance=Appearance(
            material=Material(diffuseColor=(0.0,0.0,0.5),transparency=0.3)))]),
      Transform(center=(-29,0,0),rotation=(0,1,0,1.5),translation=(3.6,0,4),
        children=[
        Shape(
          geometry=IndexedFaceSet(convex=False,coordIndex=[0,1,2,3],
            coord=Coordinate(point=[(-25,-22.5,0),(-25,10,0),(-38,10,0),(-38,-22.5,0)])),
          appearance=Appearance(
            texture=ImageTexture(DEF='SideImage',url=["Side.jpg","../../../Savage/AircraftFixedWing/F16FightingFalconTurkey/Side.jpg","https://savage.nps.edu/Savage/AircraftFixedWing/F16FightingFalconTurkey/Side.jpg"])))]),
      Transform(center=(29,0,0),rotation=(0,-1,0,1.5),translation=(-3.6,0,4),
        children=[
        Shape(
          geometry=IndexedFaceSet(convex=False,coordIndex=[0,1,2,3],
            coord=Coordinate(point=[(38,-22.5,0),(38,10,0),(25,10,0),(25,-22.5,0)])),
          appearance=Appearance(
            texture=ImageTexture(USE='SideImage')))])])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for Cockpit.py")
