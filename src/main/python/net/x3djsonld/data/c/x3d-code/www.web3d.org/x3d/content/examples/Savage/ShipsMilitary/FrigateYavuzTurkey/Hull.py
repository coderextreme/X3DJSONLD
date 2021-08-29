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
    meta(content='Hull.x3d',name='title'),
    meta(content='Hull of a YAVUZ class frigate active in TURKISH NAVY.',name='description'),
    meta(content='Ozan APAYDIN',name='creator'),
    meta(content='4 August 2001',name='created'),
    meta(content='26 February 2016',name='modified'),
    meta(content='https://savage.nps.edu/Savage/ShipsMilitary/FrigateYavuzTurkey/Hull.x3d',name='identifier'),
    meta(content='X3D-Edit 3.2, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    Background(skyColor=[(0.4,0,1.0)]),
    Viewpoint(description='SideView',position=(0,0,92)),
    Viewpoint(description='frontView',jump=False,orientation=(0,1,0,-1.57),position=(-90.0,0.0,0.0)),
    Viewpoint(description='TopView',orientation=(1.0,0.0,0.0,-1.57),position=(0,80,0)),
    Viewpoint(description='BackView',jump=False,orientation=(0,1,0,1.57),position=(90.0,0.0,0.0)),
    Transform(rotation=(0,0.0,1.0,1.57),translation=(50.0,-5.0,0.0),
      children=[
      Group(DEF='Hull',
        children=[
        Shape(DEF='BHull',
          geometry=Extrusion(crossSection=[(2.0,4.5),(2.0,-4.5),(0.0,0.0),(2.0,4.5)],spine=[(0.0,-12.0,0.0),(0.0,90.0,0.0)]),
          appearance=Appearance(DEF='BlackHull',
            material=Material(diffuseColor=(.0,.2,.2)))),
        Transform(translation=(2.0,0.0,0.0),
          children=[
          Shape(DEF='SecHull',
            geometry=Extrusion(crossSection=[(4.0,9.0),(4.0,-9.0),(0.0,-4.5),(0.0,4.5),(4.0,9.0)],spine=[(0.0,-12.0,0.0),(0.0,90.0,0.0)]),
            appearance=Appearance(DEF='HullBlue',
              material=Material(diffuseColor=(.62,.639,.812))))]),
        Transform(translation=(6.0,0.0,0.0),
          children=[
          Shape(DEF='AboveHull',
            geometry=Extrusion(crossSection=[(0.0,9.0),(4,11.0),(4,-11.0),(0.0,-9.0),(0.0,9.0)],spine=[(0.0,0.0,0.0),(0.0,90.0,0.0)]),
            appearance=Appearance(USE='HullBlue'))]),
        Transform(translation=(8.5,-12.0,0.0),
          children=[
          Shape(DEF='SternTop',
            geometry=Extrusion(crossSection=[(0.0,10.25),(1.5,11.00),(1.5,-11.00),(0.0,-10.25),(0.0,10.25)],spine=[(0.0,0.0,0.0),(0.0,12.0,0.0)]),
            appearance=Appearance(USE='HullBlue'))]),
        Transform(translation=(0.0,90.0,0.0),
          children=[
          Shape(DEF='bow1',
            appearance=Appearance(USE='HullBlue'),
            geometry=IndexedFaceSet(coordIndex=[0,1,2,3,4,0],
              coord=Coordinate(point=[(2.0,0.0,4.5),(6.0,0.0,9.0),(10.0,0.0,11.0),(11.0,20.0,0.0),(2.0,10.0,0.0)]))),
          Shape(DEF='bow2',
            appearance=Appearance(USE='HullBlue'),
            geometry=IndexedFaceSet(coordIndex=[0,1,2,3,4,0],
              coord=Coordinate(point=[(2.0,0.0,-4.5),(2.0,10.0,0.0),(11.0,20.0,0.0),(10.0,0.0,-11.0),(6.0,0.0,-9.0)]))),
          Shape(DEF='bowdown1',
            geometry=Extrusion(crossSection=[(2.0,4.5),(2.0,-4.5),(0.0,0.0),(2.0,4.5)],scale=[(1.0,1.0),(0.1,0.001)],spine=[(0.0,0.0,0.0),(0.0,8.3,0.0)]),
            appearance=Appearance(USE='BlackHull')),
          Shape(DEF='bowdown2',
            appearance=Appearance(USE='BlackHull'),
            geometry=IndexedFaceSet(coordIndex=[0,1,2,3,0],
              coord=Coordinate(point=[(2.0,0.0,4.5),(2.0,10.0,0.0),(2.0,0.0,-4.5),(0.0,8.3,0.0)]))),
          Shape(DEF='GuverBov',
            appearance=Appearance(USE='HullBlue'),
            geometry=IndexedFaceSet(coordIndex=[0,1,2,0],
              coord=Coordinate(point=[(11.0,20.0,0.0),(10.0,0.0,11.0),(10.0,0.0,-11.0)])))]),
        Transform(translation=(8.0,-11.75,0.0),
          children=[
          Shape(DEF='SternMidBox',
            geometry=Box(size=(4.0,0.5,4.0)),
            appearance=Appearance(USE='HullBlue'))]),
        Shape(DEF='portStern1',
          appearance=Appearance(USE='HullBlue'),
          geometry=IndexedFaceSet(coordIndex=[0,1,2,3,4,5,0],solid=False,
            coord=Coordinate(point=[(6.0,-12.0,7.0),(8.5,-12.0,8.0),(8.5,-12.0,10.2),(8.5,-10.0,10.2),(6.0,-10.0,9.0),(6.0,-12.0,9.0)]))),
        Shape(DEF='starStern1',
          appearance=Appearance(USE='HullBlue'),
          geometry=IndexedFaceSet(coordIndex=[0,1,2,3,4,5,0],solid=False,
            coord=Coordinate(point=[(8.5,-12.0,-8.0),(6.0,-12.0,-7.0),(6.0,-12.0,-9.0),(6.0,-10.0,-9.0),(8.5,-10.0,-10.2),(8.5,-12.0,-10.2)]))),
        Shape(DEF='portStern2',
          appearance=Appearance(USE='HullBlue'),
          geometry=IndexedFaceSet(coordIndex=[0,1,2,3,0],solid=False,
            coord=Coordinate(point=[(8.5,-5.0,10.2),(8.5,-3.0,10.2),(6.0,-3.0,9.0),(6.0,-5.0,9.0)]))),
        Shape(DEF='starStern2',
          appearance=Appearance(USE='HullBlue'),
          geometry=IndexedFaceSet(coordIndex=[0,1,2,3,0],solid=False,
            coord=Coordinate(point=[(8.5,-5.0,-10.2),(6.0,-5.0,-9.0),(6.0,-3.0,-9.0),(8.5,-3.0,-10.2)])))])]),
    Transform(rotation=(0.0,1.0,0.0,-0.6),translation=(-48.0,0.0,2.95),
      children=[
      Transform(rotation=(1.0,0.0,0.0,0.78),
        children=[
        Shape(DEF='BOARDNOport',
          geometry=Text(DEF='F243',string=["F243"],
            fontStyle=FontStyle(family=["SANS"],size=4.0,style_='BOLD')),
          appearance=Appearance(
            material=Material(diffuseColor=(0.3,0.3,0.4)))),
        Transform(translation=(-1.5,0.0,0.3),
          children=[
          Shape(DEF='AnchorNestP',
            geometry=Box(size=(2.0,0.8,0.1)),
            appearance=Appearance(
              material=Material(diffuseColor=(0.1,0.1,0.1))))])]),
      Transform(rotation=(0.0,1.0,0.0,-1.57),
        children=[
        Transform(rotation=(0.0,1.0,0.0,-0.45),translation=(-12.0,0.0,0.5),
          children=[
          Transform(rotation=(1.0,0.0,0.0,0.7),
            children=[
            Shape(DEF='BOARDNOstar',
              geometry=Text(USE='F243'),
              appearance=Appearance(
                material=Material(diffuseColor=(0.3,0.3,0.4)))),
            Transform(translation=(9.3,-0.3,0.0),
              children=[
              Shape(DEF='AnchorNestS',
                geometry=Box(size=(2.0,0.8,0.1)),
                appearance=Appearance(
                  material=Material(diffuseColor=(0.1,0.1,0.1))))])])])])])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for Hull.py")
