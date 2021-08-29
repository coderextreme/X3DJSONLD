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
    meta(content='Superstructure.x3d',name='title'),
    meta(content='Boon Chuan LEE',name='creator'),
    meta(content='LST Superstructure',name='description'),
    meta(content='16 August 2001',name='created'),
    meta(content='2 January 2019',name='modified'),
    meta(content='16 January 2014',name='modified'),
    meta(content="Ship's crane situated on helo deck near superstructure",name='description'),
    meta(content='http://www.mindef.gov.sg/navy/pict/ship/ship2.html',name='reference'),
    meta(content='http://www.mindef.gov.sg/navy/pict/ship/pics/shp_nls1.jpg',name='reference'),
    meta(content='http://www.mindef.gov.sg/navy/pict/ship/pics/shp_nls2.jpg',name='reference'),
    meta(content='http://www.mindef.gov.sg/navy/pict/ship/pics/shp_nls3.jpg',name='reference'),
    meta(content='http://www.mindef.gov.sg/navy/pict/ship/pics/shp_nls4.jpg',name='reference'),
    meta(content='http://www.janesonline.com',name='reference'),
    meta(content='https://savage.nps.edu/Savage/ShipsMilitary/LandingShipTankEnduranceSingapore/Superstructure.x3d',name='identifier'),
    meta(content='X3D-Edit 3.2, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    Background(groundAngle=[1.57],groundColor=[(0,0,1),(0.7,0.7,0.8)],skyAngle=[1.57],skyColor=[(0.8,0.8,0.9),(0.7,0.7,0.8)]),
    Viewpoint(position=(0,0,80)),
    #  Scene nodes are added here 
    Transform(translation=(23,2.4,0),
      children=[
      Group(DEF='MainStructure',
        children=[
        Transform(translation=(0.5,0,0),
          children=[
          Shape(DEF='LowerLayer',
            geometry=Box(size=(54,5,14)),
            appearance=Appearance(DEF='Grey',
              material=Material(diffuseColor=(0.6,0.6,0.6),shininess=0.3)))]),
        Transform(translation=(-7.5,3.75,0),
          children=[
          Shape(DEF='MidLayer',
            geometry=Box(size=(38,2.5,14)),
            appearance=Appearance(USE='Grey'))]),
        Transform(translation=(-13.5,6,0),
          children=[
          Shape(DEF='BridgeLayer',
            geometry=Box(size=(26,2,11)),
            appearance=Appearance(USE='Grey'))]),
        Transform(translation=(-24.95,6,0),
          children=[
          Shape(DEF='Link',
            geometry=Box(size=(3,2,17)),
            appearance=Appearance(USE='Grey'))]),
        Transform(
          children=[
          Shape(DEF='BridgeWing',
            geometry=Extrusion(crossSection=[(-1.00,10.50),(3.50,10.50),(5.50,7.00),(7.00,4.50),(7.00,-4.50),(5.50,-7.00),(3.50,-10.50),(-1.00,-10.50),(-1.00,10.50)],scale=[(1,0.2),(1,1),(1,1)],spine=[(0,2,0),(0,5,0),(0,7,0)]),
            appearance=Appearance(USE='Grey'))]),
        Transform(
          children=[
          Shape(DEF='Bridge',
            geometry=Extrusion(crossSection=[(-1.00,6.2),(5.50,7.00),(7.00,4.50),(7.00,-4.50),(5.50,-7.00),(-1.00,-6.2),(-1.00,6.2)],spine=[(0,6,0),(0,8.3,0)]),
            appearance=Appearance(USE='Grey')),
          Shape(DEF='BridgeTop',
            geometry=Extrusion(crossSection=[(-1.00,6.2),(5.50,7.00),(7.00,4.50),(7.00,-4.50),(5.50,-7.00),(-1.00,-6.2),(-1.00,6.2)],scale=[(1,1),(1.08,1.08)],spine=[(0,8.3,0),(0,8.5,0)]),
            appearance=Appearance(
              material=Material(diffuseColor=(0.5,0.5,0.5)))),
          Group(DEF='Windows',
            children=[
            Transform(translation=(6.85,7.5,0),
              children=[
              Shape(DEF='Glass',
                appearance=Appearance(
                  material=Material(diffuseColor=(0.2,0.2,0.2),specularColor=(0.5,0.5,0.5))),
                geometry=Box(size=(0.5,1,1.8)))]),
            Transform(translation=(6.85,7.5,3),
              children=[
              Shape(USE='Glass')]),
            Transform(translation=(6.85,7.5,-3),
              children=[
              Shape(USE='Glass')]),
            Transform(rotation=(0,1,0,-0.58),translation=(6.1,7.5,5.6),
              children=[
              Shape(USE='Glass')]),
            Transform(rotation=(0,1,0,0.58),translation=(6.1,7.5,-5.6),
              children=[
              Shape(USE='Glass')]),
            Transform(translation=(-26.4,5.9,2.9),
              children=[
              Shape(USE='Glass')]),
            Transform(translation=(-26.4,5.9,-2.9),
              children=[
              Shape(USE='Glass')]),
            Transform(translation=(-26.4,5.9,0),
              children=[
              Shape(USE='Glass')]),
            Transform(translation=(-26.4,5.9,5.8),
              children=[
              Shape(USE='Glass')]),
            Transform(translation=(-26.4,5.9,-5.8),
              children=[
              Shape(USE='Glass')])])])]),
      Group(DEF='MastAssembly',
        children=[
        Transform(
          children=[
          Shape(DEF='FrontBase',
            geometry=Extrusion(crossSection=[(1.00,3.00),(17.00,3.00),(17.00,-3.00),(1.00,-3.00),(1.00,3.00)],scale=[(1.1,1.1),(1,1)],spine=[(-25,7,0),(-25,10,0)]),
            appearance=Appearance(USE='Grey'))]),
        Transform(
          children=[
          Shape(DEF='RadarBase',
            geometry=Extrusion(crossSection=[(-1.8,3.00),(1.8,3.00),(1.8,-3.00),(-1.8,-3.00),(-1.8,3.00)],scale=[(1,1),(0.8,0.8)],spine=[(-12,10,0),(-12,14,0)]),
            appearance=Appearance(USE='Grey')),
          Shape(DEF='BaseTop',
            geometry=Extrusion(crossSection=[(-1.8,3.00),(1.8,3.00),(1.8,-3.00),(-1.8,-3.00),(-1.8,3.00)],scale=[(0.85,0.85),(0.85,0.85)],spine=[(-12,13.5,0),(-12,14.5,0)]),
            appearance=Appearance(
              material=Material(diffuseColor=(0.5,0.5,0.5),shininess=0.3)))]),
        Transform(
          children=[
          Shape(DEF='BackBase',
            geometry=Extrusion(crossSection=[(0.00,1.5),(8,1.5),(8,-1.5),(0.00,-1.5),(0.00,1.5)],scale=[(1.1,1.1),(0.9,0.9)],spine=[(-24,10,0),(-24,12,0)]),
            appearance=Appearance(USE='Grey'))]),
        Transform(
          children=[
          Shape(DEF='MainMast',
            geometry=Extrusion(crossSection=[(0,1),(3,1),(3,-1),(0,-1),(0,1)],scale=[(1,1.3),(0.2,0.2)],spine=[(-22,12,0),(-22,25,0)]),
            appearance=Appearance(USE='Grey')),
          Shape(DEF='StructureBottom1',
            geometry=Extrusion(crossSection=[(-0.25,4.3),(0.25,4.3),(0.25,-4.3),(-0.25,-4.3),(-0.25,4.3)],scale=[(0.5,0.5),(1,1.2)],spine=[(-21.5,21,0),(-21.5,21.5,0)]),
            appearance=Appearance(USE='Grey')),
          Shape(DEF='StructureBottom2',
            geometry=Extrusion(crossSection=[(-2.2,0.3),(2.4,0.3),(2.4,-0.3),(-2.2,-0.3),(-2.2,0.3)],scale=[(0.3,0.3),(1,1.1)],spine=[(-21.6,21,0),(-21.6,21.5,0)]),
            appearance=Appearance(USE='Grey')),
          Shape(DEF='StructureTop1',
            geometry=Extrusion(crossSection=[(-0.25,4.3),(0.25,4.3),(0.25,-4.3),(-0.25,-4.3),(-0.25,4.3)],scale=[(0.5,0.5),(1,1.25)],spine=[(-21.5,23,0),(-21.5,23.5,0)]),
            appearance=Appearance(USE='Grey')),
          Shape(DEF='StructureTop2',
            geometry=Extrusion(crossSection=[(-2.2,0.3),(2.3,0.3),(2.3,-0.3),(-2.2,-0.3),(-2.2,0.3)],scale=[(0.3,0.3),(1,1.1)],spine=[(-21.6,23,0),(-21.6,23.5,0)]),
            appearance=Appearance(USE='Grey'))])]),
      Group(DEF='ChimneyAssembly',
        children=[
        Transform(translation=(-24,1.5,9.25),
          children=[
          Group(DEF='Chimney',
            children=[
            Shape(DEF='Bottom',
              geometry=Box(size=(5,8,2.5)),
              appearance=Appearance(DEF='ChimGrey',
                material=Material(diffuseColor=(0.5,0.5,0.5)))),
            Shape(DEF='Top',
              geometry=Extrusion(crossSection=[(0,1.25),(5,1.25),(5,-1.25),(0,-1.25),(0,1.25)],scale=[(1,1),(0.8,0.6)],spine=[(-2.5,4,0),(-2.5,7,0)]),
              appearance=Appearance(USE='ChimGrey')),
            Shape(DEF='TopHole',
              geometry=Extrusion(crossSection=[(0,1.25),(5,1.25),(5,-1.25),(0,-1.25),(0,1.25)],scale=[(0.8,0.6),(0.8,0.6)],spine=[(-2.5,7,0),(-2.5,7.1,0)]),
              appearance=Appearance(
                material=Material(diffuseColor=(0.1,0.1,0.1))))])]),
        Transform(translation=(-24,1.5,-9.25),
          children=[
          Group(USE='Chimney')])]),
      Group(DEF='SideCraneRight',
        children=[
        Transform(center=(0,0,9),rotation=(1,0,0,-0.2),translation=(0.5,0,0),
          children=[
          Group(DEF='Crane1',
            children=[
            Transform(translation=(4,3.5,9),
              children=[
              Shape(DEF='TopBar',
                geometry=Box(size=(13,0.5,0.8)),
                appearance=Appearance(
                  material=Material(diffuseColor=(0.5,0.5,0.5))))]),
            Transform(translation=(-2.5,0.5,9),
              children=[
              Shape(DEF='SideBar',
                geometry=Box(size=(0.5,6.5,0.8)),
                appearance=Appearance(
                  material=Material(diffuseColor=(0.5,0.5,0.5))))]),
            Transform(translation=(10.5,0.5,9),
              children=[
              Shape(USE='SideBar')])])]),
        Transform(center=(0,0,9),rotation=(1,0,0,-0.2),scale=(1,1.1,1),translation=(-17.5,0,0),
          children=[
          Group(USE='Crane1')]),
        Transform(center=(0,0,9),rotation=(1,0,0,-0.33),scale=(1,0.85,1),translation=(15,-0.5,0),
          children=[
          Group(USE='Crane1')])]),
      Group(DEF='SideCraneLeft',
        children=[
        Transform(center=(0,0,-9),rotation=(1,0,0,0.2),translation=(0.5,0,0),
          children=[
          Group(DEF='Crane2',
            children=[
            Transform(translation=(4,3.5,-9),
              children=[
              Shape(USE='TopBar')]),
            Transform(translation=(-2.5,0.5,-9),
              children=[
              Shape(USE='SideBar')]),
            Transform(translation=(10.5,0.5,-9),
              children=[
              Shape(USE='SideBar')])])]),
        Transform(center=(0,0,-9),rotation=(1,0,0,0.2),scale=(1,1.1,1),translation=(-17.5,0,0),
          children=[
          Group(USE='Crane2')]),
        Transform(center=(0,0,-9),rotation=(1,0,0,0.33),scale=(1,0.85,1),translation=(15,-0.5,0),
          children=[
          Group(USE='Crane2')])]),
      Group(DEF='SideColumn',
        children=[
        Transform(translation=(-4.5,1.5,8.75),
          children=[
          Group(DEF='ColumnRight',
            children=[
            Shape(
              geometry=Box(size=(2.5,8,3.5)),
              appearance=Appearance(
                material=Material(diffuseColor=(0.5,0.5,0.5)))),
            Transform(translation=(1.25,3.75,-0.75),
              children=[
              Shape(
                geometry=Box(size=(5,0.49,5)),
                appearance=Appearance(
                  material=Material(diffuseColor=(0.5,0.5,0.5))))])])]),
        Transform(translation=(-4.5,1.5,-8.75),
          children=[
          Group(DEF='ColumnLeft',
            children=[
            Shape(
              geometry=Box(size=(2.5,8,3.5)),
              appearance=Appearance(
                material=Material(diffuseColor=(0.5,0.5,0.5)))),
            Transform(translation=(1.25,3.75,0.75),
              children=[
              Shape(
                geometry=Box(size=(5,0.49,5)),
                appearance=Appearance(
                  material=Material(diffuseColor=(0.5,0.5,0.5))))])])])]),
      Group(DEF='SatComm',
        children=[
        Transform(translation=(-2.5,7.5,0),
          children=[
          Shape(
            geometry=Cylinder(height=1.5,radius=0.8),
            appearance=Appearance(DEF='BrightGrey',
              material=Material(),))]),
        Transform(translation=(-2.5,8.25,0),
          children=[
          Shape(
            geometry=Sphere(radius=0.8),
            appearance=Appearance(USE='BrightGrey'))])]),
      Group(DEF='Antenna',
        children=[
        Transform(translation=(10.5,6,-6),
          children=[
          Shape(DEF='HF1',
            geometry=Cylinder(height=5,radius=0.1),
            appearance=Appearance(
              material=Material(),))]),
        Transform(translation=(10.5,6,6),
          children=[
          Shape(USE='HF1')]),
        Transform(translation=(-5,8,0),
          children=[
          Shape(USE='HF1')]),
        Transform(translation=(3.5,8,0),
          children=[
          Shape(DEF='Ariel',
            geometry=Cylinder(height=4,radius=0.2),
            appearance=Appearance(
              material=Material(),))])]),
      Group(DEF='Flag',
        children=[
        Transform(rotation=(0,0,1,0.13),translation=(-22,11.1,0),
          children=[
          Shape(DEF='Line',
            geometry=Cylinder(height=25,radius=0.05),
            appearance=Appearance(
              material=Material(),))]),
        Transform(rotation=(0,0,1,0.13),translation=(-24.5,22.8,0),
          children=[
          Shape(
            geometry=Box(size=(2,1,0.01)),
            appearance=Appearance(
              texture=ImageTexture(url=["FlagSingapore.gif","https://savage.nps.edu/Savage/ShipsMilitary/LandingShipTankEnduranceSingapore/FlagSingapore.gif"])))])]),
      Group(DEF='AuxBox',
        children=[
        Transform(translation=(-14.5,5.5,0),
          children=[
          Shape(DEF='Box2',
            geometry=Box(size=(2,1.3,13)),
            appearance=Appearance(USE='Grey'))]),
        Transform(translation=(-9,5.5,0),
          children=[
          Shape(DEF='Box1',
            geometry=Box(size=(2,1.3,13)),
            appearance=Appearance(USE='Grey'))])])])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for Superstructure.py")
