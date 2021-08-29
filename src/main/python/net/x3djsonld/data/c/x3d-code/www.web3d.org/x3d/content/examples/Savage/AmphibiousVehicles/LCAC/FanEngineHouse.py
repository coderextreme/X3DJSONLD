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
    meta(content='FanEngineHouse.x3d',name='title'),
    meta(content='Engine House for the LCAC',name='description'),
    meta(content='Jeffrey Weekley',name='creator'),
    meta(content='7 July 2001',name='created'),
    meta(content='12 January 2014',name='modified'),
    meta(content='http://www.hazegray.org/features/nato/us/lcac',name='reference'),
    meta(content='lcac.pdf',name='reference'),
    meta(content='http://www.fas.org/man/dod-101/sys/ship/lcac.htm',name='reference'),
    meta(content='lsd-44_990829-N-9593R-002.jpg',name='reference'),
    meta(content='http://www.fas.org/man/dod-101/sys/ship/lsd-44_990829-N-9593R-002.jpg',name='reference'),
    meta(content='lcac-kb97_8.jpg',name='reference'),
    meta(content='http://www.fas.org/man/dod-101/sys/ship/lcac-kb97_8.jpg',name='reference'),
    meta(content='lcac-dvic076.jpg',name='reference'),
    meta(content='http://www.fas.org/man/dod-101/sys/ship/lcac-dvic076.jpg',name='reference'),
    meta(content='https://savage.nps.edu/Savage/AmphibiousVehicles/LCAC/FanEngineHouse.x3d',name='identifier'),
    meta(content='LCAC Fan Engine House',name='subject'),
    meta(content='X3D-Edit 3.2, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    Background(skyColor=[(0.66,0.8,0.8)]),
    Group(DEF='ForwardCover',
      children=[
      Transform(
        children=[
        Transform(DEF='Outside',
          children=[
          Shape(
            appearance=Appearance(
              material=Material(),),
            geometry=IndexedFaceSet(convex=False,coordIndex=[0,1,2,3,4,5,6,7,-1],solid=False,
              coord=Coordinate(point=[(0,0,-2.5),(-4,0,-2.5),(-4,1.25,-2.5),(1,1.25,-2.5),(1,3,-2.5),(4,3,-2.5),(4,0,-2.5),(0,0,-2.5)]))),
          Transform(DEF='RailingWall',
            children=[
            Shape(
              appearance=Appearance(
                material=Material(),),
              geometry=IndexedFaceSet(convex=False,coordIndex=[0,1,2,3,4,-1],solid=False,
                coord=Coordinate(point=[(-4,0,-2.4),(-4,1.25,-2.4),(-2,1.25,-2.4),(-2,0,-2.4),(-4,0,-2.4)])))]),
          Transform(DEF='TopRailingWall',
            children=[
            Shape(
              appearance=Appearance(
                material=Material(),),
              geometry=IndexedFaceSet(convex=False,coordIndex=[0,1,2,3,4,-1],solid=False,
                coord=Coordinate(point=[(-4,1.25,-2.4),(-4,1.25,-2.5),(-2,1.25,-2.5),(-2,1.25,-2.4),(-4,1.25,-2.4)])))]),
          Transform(DEF='EndRailingWall',
            children=[
            Shape(
              appearance=Appearance(
                material=Material(),),
              geometry=IndexedFaceSet(convex=False,coordIndex=[0,1,2,3,4,-1],solid=False,
                coord=Coordinate(point=[(-4,1.25,-2.4),(-4,1.25,-2.5),(-4,0,-2.5),(-4,0,-2.4),(-4,1.25,-2.4)])))])]),
        Transform(DEF='Inside',
          children=[
          Shape(
            appearance=Appearance(
              material=Material(),),
            geometry=IndexedFaceSet(convex=False,coordIndex=[0,1,2,3,4,5,6,7,-1],solid=False,
              coord=Coordinate(point=[(0,0,0),(-2,0,0),(-2,1.25,0),(1,1.25,0),(1,3,0),(4,3,0),(4,0,0),(0,0,0)])))]),
        Transform(DEF='TopInside',
          children=[
          Shape(
            appearance=Appearance(
              material=Material(diffuseColor=(0.3,0.3,0.3))),
            geometry=IndexedFaceSet(convex=False,coordIndex=[0,1,2,3,4,-1],solid=False,
              coord=Coordinate(point=[(-2,1.25,0),(-2,3,0),(1,3,0),(1,1.25,0),(-2,1.25,0)])))]),
        Transform(DEF='TopOutside',
          children=[
          Shape(
            appearance=Appearance(
              material=Material(diffuseColor=(0.75,0.75,0.75))),
            geometry=IndexedFaceSet(convex=False,coordIndex=[0,1,2,3,4,-1],solid=False,
              coord=Coordinate(point=[(-2,1.25,-2.5),(-2,3,-2.5),(1,3,-2.5),(1,1.25,-2.5),(-2,1.25,-2.5)])))]),
        Transform(DEF='Top',
          children=[
          Shape(
            appearance=Appearance(
              material=Material(diffuseColor=(0.3,0.3,0.3))),
            geometry=IndexedFaceSet(convex=False,coordIndex=[0,1,2,3,4,-1],solid=False,
              coord=Coordinate(point=[(-2,3,-2.5),(-2,3,0),(4,3,0),(4,3,-2.5),(-2,3,-2.5)])))]),
        Transform(DEF='Back',
          children=[
          Shape(
            appearance=Appearance(
              material=Material(diffuseColor=(0.3,0.3,0.3))),
            geometry=IndexedFaceSet(convex=False,coordIndex=[0,1,2,3,4,-1],solid=False,
              coord=Coordinate(point=[(-2,3,0),(-2,3,-2.5),(-2,0,-2.5),(-2,0,0),(-2,3,0)])))]),
        Transform(DEF='Front',
          children=[
          Shape(
            appearance=Appearance(
              material=Material(diffuseColor=(0.3,0.3,0.3))),
            geometry=IndexedFaceSet(convex=False,coordIndex=[0,1,2,3,4,-1],solid=False,
              coord=Coordinate(point=[(4,3,0),(4,3,-2.5),(4,0,-2.5),(4,0,0),(4,3,0)])))]),
        Transform(DEF='Posts',
          children=[
          Transform(translation=(-4,0.625,-2.45),
            children=[
            Shape(
              appearance=Appearance(
                material=Material(diffuseColor=(0.4,0.5,0.5))),
              geometry=Cylinder(height=1.26,radius=0.075))]),
          Transform(translation=(-3,0.625,-2.45),
            children=[
            Shape(
              appearance=Appearance(
                material=Material(diffuseColor=(0.4,0.5,0.5))),
              geometry=Cylinder(height=1.26,radius=0.075))]),
          Transform(translation=(-2.1,0.625,-2.45),
            children=[
            Shape(
              appearance=Appearance(
                material=Material(diffuseColor=(0.4,0.5,0.5))),
              geometry=Cylinder(height=1.26,radius=0.075))])]),
        Transform(DEF='Flag',translation=(-0.3,-0.25,0),
          children=[
          Shape(
            geometry=IndexedFaceSet(ccw=False,coordIndex=[0,1,2,3,4,-1],
              coord=Coordinate(point=[(2.9,2,-2.52),(3.9,2,-2.52),(3.9,3,-2.52),(2.9,3,-2.52),(2.9,2,-2.52)])),
            appearance=Appearance(
              material=Material(),
              texture=ImageTexture(url=["USFlag.png","https://savage.nps.edu/Savage/AmphibiousVehicles/LCAC/USFlag.png"])))]),
        Transform(DEF='US',rotation=(0,1,0,3.14),translation=(5,0,-5.02),
          children=[
          Shape(
            geometry=IndexedFaceSet(coordIndex=[0,1,2,3,4,-1],solid=False,
              coord=Coordinate(point=[(2.9,2,-2.52),(3.9,2,-2.52),(3.9,2.75,-2.52),(2.9,2.75,-2.52),(2.9,2,-2.52)])),
            appearance=Appearance(
              material=Material(),
              texture=ImageTexture(url=["USGFlag.jpg","https://savage.nps.edu/Savage/AmphibiousVehicles/LCAC/USGFlag.jpg"])))])])]),
    Group(DEF='Stacks',
      children=[
      Transform(DEF='ExhaustStack',rotation=(0,1,0,1.57),translation=(1.5,3,-2),
        children=[
        Transform(DEF='OutsideStack',
          children=[
          Shape(
            geometry=IndexedFaceSet(coordIndex=[0,1,2,3,4,-1],solid=False,
              coord=Coordinate(point=[(-0.3,0,-0.4),(-0.3,0,0.4),(-0.3,0.6,0.4),(-0.3,0.6,-0.4),(-0.3,0,-0.4)])),
            appearance=Appearance(
              material=Material(diffuseColor=(0.425,0.425,0.45))))]),
        Transform(DEF='FrontsideStack',
          children=[
          Shape(
            geometry=IndexedFaceSet(coordIndex=[0,1,2,3,4,-1],solid=False,
              coord=Coordinate(point=[(0.3,0,-0.4),(0.3,0,0.4),(0.3,0.45,0.4),(0.3,0.45,-0.4),(0.3,0,-0.4)])),
            appearance=Appearance(
              material=Material(diffuseColor=(0.425,0.425,0.45))))]),
        Transform(DEF='SideOneStack',
          children=[
          Shape(
            geometry=IndexedFaceSet(coordIndex=[0,1,2,3,4,-1],solid=False,
              coord=Coordinate(point=[(-0.3,0,0.4),(0.3,0,0.4),(0.3,0.45,0.4),(-0.3,0.6,0.4),(-0.3,0,0.4)])),
            appearance=Appearance(
              material=Material(diffuseColor=(0.425,0.425,0.45))))]),
        Transform(DEF='SideTwoStack',
          children=[
          Shape(
            geometry=IndexedFaceSet(coordIndex=[0,1,2,3,4,-1],solid=False,
              coord=Coordinate(point=[(-0.3,0,-0.4),(0.3,0,-0.4),(0.3,0.45,-0.4),(-0.3,0.6,-0.4),(-0.3,0,-0.4)])),
            appearance=Appearance(
              material=Material(diffuseColor=(0.425,0.425,0.45))))]),
        Transform(
          children=[
          Transform(DEF='InsideStack',
            children=[
            Shape(
              geometry=IndexedFaceSet(coordIndex=[0,1,2,3,4,-1],solid=False,
                coord=Coordinate(point=[(-0.2,0,-0.4),(-0.2,0,0.4),(-0.3,0.6,0.4),(-0.3,0.6,-0.4),(-0.2,0,-0.4)])),
              appearance=Appearance(
                material=Material(diffuseColor=(0.425,0.425,0.45))))]),
          Transform(DEF='FrontInsideStack',
            children=[
            Shape(
              geometry=IndexedFaceSet(coordIndex=[0,1,2,3,4,-1],solid=False,
                coord=Coordinate(point=[(0.2,0,-0.4),(0.2,0,0.4),(0.3,0.45,0.4),(0.3,0.45,-0.4),(0.2,0,-0.4)])),
              appearance=Appearance(
                material=Material(diffuseColor=(0.425,0.425,0.45))))]),
          Transform(DEF='InsideOneStack',
            children=[
            Shape(
              geometry=IndexedFaceSet(coordIndex=[0,1,2,3,4,-1],solid=False,
                coord=Coordinate(point=[(-0.3,0,0.3),(0.3,0,0.3),(0.3,0.45,0.4),(-0.3,0.6,0.4),(-0.3,0,0.3)])),
              appearance=Appearance(
                material=Material(diffuseColor=(0.425,0.425,0.45))))]),
          Transform(DEF='insideTwoStack',
            children=[
            Shape(
              geometry=IndexedFaceSet(coordIndex=[0,1,2,3,4,-1],solid=False,
                coord=Coordinate(point=[(-0.3,0,-0.3),(0.3,0,-0.3),(0.3,0.45,-0.4),(-0.3,0.6,-0.4),(-0.3,0,-0.3)])),
              appearance=Appearance(
                material=Material(diffuseColor=(0.425,0.425,0.45))))])])]),
      Transform(DEF='ExhaustStackTwo',translation=(1.5,0,0),
        children=[
        Transform(USE='ExhaustStack')]),
      Transform(translation=(3.66,3.167,-0.75),
        children=[
        Shape(
          geometry=Cylinder(height=0.333,radius=0.2),
          appearance=Appearance(
            material=Material(diffuseColor=(0.425,0.425,0.45),shininess=1,specularColor=(0.85,0.85,0.9))))])]),
    Transform(DEF='FrontBoxOfUnknownUse',translation=(4.5,0.875,-1.25),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.425,0.425,0.45),shininess=1,specularColor=(0.85,0.85,0.9))),
        geometry=Box(size=(1,1.75,2.5)))])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for FanEngineHouse.py")
