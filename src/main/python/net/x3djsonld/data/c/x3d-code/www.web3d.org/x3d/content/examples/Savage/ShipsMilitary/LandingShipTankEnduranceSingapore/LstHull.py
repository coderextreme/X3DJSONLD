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
    meta(content='LstHull.x3d',name='title'),
    meta(content='Boon Chuan LEE',name='creator'),
    meta(content='Hull of the LST',name='description'),
    meta(content='8 August 2001',name='created'),
    meta(content='2 January 2019',name='modified'),
    meta(content="Ship's crane situated on helo deck near superstructure",name='description'),
    meta(content='http://www.mindef.gov.sg/navy/pict/ship/ship2.html',name='reference'),
    meta(content='http://www.mindef.gov.sg/navy/pict/ship/pics/shp_nls1.jpg',name='reference'),
    meta(content='http://www.mindef.gov.sg/navy/pict/ship/pics/shp_nls2.jpg',name='reference'),
    meta(content='http://www.mindef.gov.sg/navy/pict/ship/pics/shp_nls3.jpg',name='reference'),
    meta(content='http://www.mindef.gov.sg/navy/pict/ship/pics/shp_nls4.jpg',name='reference'),
    meta(content='http://www.janesonline.com',name='reference'),
    meta(content='https://savage.nps.edu/Savage/ShipsMilitary/LandingShipTankEnduranceSingapore/LstHull.x3d',name='identifier'),
    meta(content='X3D-Edit 3.2, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    Background(groundAngle=[1.57],groundColor=[(0,0,1),(0.7,0.7,0.8)],skyAngle=[1.57],skyColor=[(0.8,0.8,0.9),(0.7,0.7,0.8)]),
    Viewpoint(position=(0,0,120)),
    Transform(translation=(0,-3.6,0),
      children=[
      Group(DEF='HullAssembly',
        children=[
        Transform(translation=(0,-1.8,0),
          children=[
          Shape(DEF='BelowWaterHull',
            appearance=Appearance(DEF='DarkGrey',
              material=Material(diffuseColor=(0.45,0.45,0.45))),
            geometry=Extrusion(creaseAngle=0.85,crossSection=[(3.5,10),(8.5,8.5),(10,5),(11,3),(11,-3),(10,-5),(8.5,-8.5),(3.5,-10),(3.5,10)],orientation=[(0,0,1,0.25),(0,0,1,0),(0,0,1,0),(0,0,1,-0.05),(0,0,1,-0.06),(0,0,1,-0.07),(0,0,1,-0.1),(0,0,1,-0.2),(0,0,1,-0.3),(0,0,1,-0.35),(0,0,1,-0.38),(0,0,1,-0.4)],scale=[(1,1),(1,1),(1,1),(1,0.99),(1,0.95),(1,0.83),(1,0.72),(1,0.51),(1,0.2),(1,0.1),(0.9,0.095),(0.6,0.02)],solid=False,spine=[(-71.3,0,0),(40,0,0),(45,0,0),(48,0,0),(50,0,0),(55,0,0),(60,0,0),(65,0,0),(68,0,0),(68.8,0,0),(69.1,0,0),(69.6,0,0)]))]),
        Transform(scale=(0.23,0.38,0.35),translation=(59,-4.5,0),
          children=[
          Shape(DEF='BelowWaterBow',
            appearance=Appearance(USE='DarkGrey'),
            geometry=Extrusion(creaseAngle=0.785,crossSection=[(-48,25.3),(-15.00,24.5),(10.00,23.00),(26.00,19.00),(36.00,15.00),(45.00,10.00),(48.00,5.00),(49.00,0.00),(48.00,-5.00),(45.00,-10.00),(36.00,-15.00),(26.00,-19.00),(10.00,-23.00),(-15.00,-24.5),(-48,-25.3),(-48,25.3)],scale=[(0.2,0.2),(0.6,0.6),(0.67,0.67),(0.75,0.75),(0.91,0.91),(0.94,0.94),(0.9,0.9),(0.7,0.7)],solid=False,spine=[(0,-22,0),(0,-20,0),(0,-19,0),(0,-18,0),(0,-15,0),(0,-10,0),(0,-5,0),(0,1,0)]))]),
        Shape(DEF='CenterHull',
          appearance=Appearance(DEF='HullGrey',
            material=Material(diffuseColor=(.55,.55,.55),shininess=0.6,specularColor=(0.1,0.1,0.1))),
          geometry=Extrusion(creaseAngle=0.7,crossSection=[(-3.6,10.5),(5.4,10),(5.4,-10),(-3.6,-10.5),(-3.6,10.5)],scale=[(1,1),(1,0.98),(1,0.94),(1,0.9),(0.8,0.8)],solid=False,spine=[(-70,0,0),(48,0,0),(50,0,0),(52,0,0),(54,0,0)])),
        Shape(DEF='UpperFwd',
          appearance=Appearance(USE='HullGrey'),
          geometry=Extrusion(creaseAngle=.785,crossSection=[(48,10.1),(53,9.3),(58,8.2),(63,7),(67,5.5),(68,4.5),(69,3.5),(70,2.3),(70.5,1),(71,0),(70.5,-1),(70,-2.3),(69,-3.5),(68,-4.5),(67,-5.5),(63,-7),(58,-8.2),(53,-9.3),(48,-10.1),(48,10.1)],orientation=[(0,0,1,0),(0,0,1,0)],scale=[(1,1),(1.03,1)],spine=[(2.7,3,0),(2.7,4.8,0)])),
        Transform(translation=(52,4,0),
          children=[
          Shape(DEF='Fwd',
            appearance=Appearance(USE='HullGrey'),
            geometry=Box(size=(3.05,1.66,19.6)))]),
        Transform(translation=(3.3,3.2,0),
          children=[
          Shape(DEF='FwdSkirt',
            appearance=Appearance(USE='HullGrey'),
            geometry=Extrusion(beginCap=False,creaseAngle=.785,crossSection=[(46,10.3),(53,9.4),(58,8.2),(63,7),(67,5.5),(68,4.5),(69,3.5),(70,2.2),(70.5,0.8),(70.8,0.3),(70.9,0.1),(71,0),(70.9,-0.1),(70.8,-0.3),(70.5,-0.8),(70,-2.2),(69,-3.5),(68,-4.5),(67,-5.5),(63,-7),(58,-8.2),(53,-9.4),(46,-10.3)],endCap=False,orientation=[(0,0,1,.668),(0,0,1,0)],solid=False,spine=[(-6.48,-8.1,0),(2.65,3.3,0)]))])]),
      Group(DEF='BowAnchor',
        children=[
        Transform(translation=(59,-0.5,8.5),
          children=[
          Group(DEF='Anchor',
            children=[
            Transform(scale=(1.2,1.5,1),
              children=[
              Shape(DEF='Blade',
                geometry=Extrusion(crossSection=[(-1.2,0.7),(-0.2,0),(0.2,0),(1.2,0.7),(1.2,-0.4),(-1.2,-0.4),(-1.2,0.6)],spine=[(0,0,0.1),(0,0,-0.1)]),
                appearance=Appearance(
                  material=Material(diffuseColor=(0.2,0.2,0.2))))]),
            Transform(translation=(0,0.75,0),
              children=[
              Shape(DEF='Stem',
                geometry=Box(size=(0.5,1.5,0.2)),
                appearance=Appearance(
                  material=Material(diffuseColor=(0.2,0.2,0.2))))])])]),
        Transform(translation=(59,-0.5,-8.5),
          children=[
          Group(USE='Anchor')])]),
      Group(DEF='BowWinch',
        children=[
        Transform(rotation=(1,0,1,1.57),translation=(56,5.3,3),
          children=[
          Shape(
            geometry=Cylinder(height=1.5,radius=0.7),
            appearance=Appearance(
              material=Material(diffuseColor=(0.9,0.9,0.9))))]),
        Transform(rotation=(1,0,-1,1.57),translation=(56,5.3,-3),
          children=[
          Shape(
            geometry=Cylinder(height=1.5,radius=0.7),
            appearance=Appearance(
              material=Material(diffuseColor=(0.9,0.9,0.9))))])]),
      Group(DEF='Fixtures',
        children=[
        Transform(translation=(60,5,4),
          children=[
          Shape(
            geometry=Cylinder(height=0.5,radius=0.7),
            appearance=Appearance(DEF='GreyFix',
              material=Material(diffuseColor=(0.4,0.4,0.4))))]),
        Transform(translation=(60,5,-4),
          children=[
          Shape(
            geometry=Cylinder(height=0.5,radius=0.7),
            appearance=Appearance(USE='GreyFix'))]),
        Transform(translation=(70,5,0),
          children=[
          Shape(
            geometry=Cylinder(height=0.5,radius=0.8),
            appearance=Appearance(USE='GreyFix'))]),
        Transform(translation=(73,5,0),
          children=[
          Shape(
            geometry=Cylinder(height=1,radius=0.5),
            appearance=Appearance(USE='GreyFix'))]),
        Transform(translation=(-8,3.65,7),
          children=[
          Shape(
            geometry=Cylinder(height=0.5,radius=0.8),
            appearance=Appearance(USE='GreyFix'))]),
        Transform(translation=(-8,3.65,-7),
          children=[
          Shape(
            geometry=Cylinder(height=1,radius=0.8),
            appearance=Appearance(USE='GreyFix'))]),
        Transform(scale=(1.5,1,1),translation=(-43,3.65,8),
          children=[
          Shape(
            geometry=Cylinder(height=1,radius=0.8),
            appearance=Appearance(USE='GreyFix'))])]),
      Group(DEF='HeloPadLines',
        children=[
        Transform(translation=(-38,3.65,-9),
          children=[
          Shape(DEF='LineHori',
            geometry=Box(size=(60,0.1,0.6)))]),
        Transform(translation=(-38,3.65,9),
          children=[
          Shape(USE='LineHori')]),
        Transform(scale=(0.25,1,1),translation=(-45.3,3.65,-2.5),
          children=[
          Shape(USE='LineHori')]),
        Transform(center=(-7.5,0,0),rotation=(0,1,0,0.785),scale=(0.2,1,1),translation=(-45.3,3.65,-2.5),
          children=[
          Shape(USE='LineHori')]),
        Transform(center=(-7.5,0,0),rotation=(0,1,0,-0.785),scale=(0.2,1,1),translation=(-45.3,3.65,-2.5),
          children=[
          Shape(USE='LineHori')]),
        Transform(scale=(0.25,1,1),translation=(-15.3,3.65,2.5),
          children=[
          Shape(USE='LineHori')]),
        Transform(center=(-7.5,0,0),rotation=(0,1,0,-0.785),scale=(0.2,1,1),translation=(-15.3,3.65,2.5),
          children=[
          Shape(USE='LineHori')]),
        Transform(center=(-7.5,0,0),rotation=(0,1,0,0.785),scale=(0.2,1,1),translation=(-15.3,3.65,2.5),
          children=[
          Shape(USE='LineHori')]),
        Transform(translation=(-68,3.65,0),
          children=[
          Shape(DEF='LineVert',
            geometry=Box(size=(0.6,0.1,18.5)))]),
        Transform(translation=(-53,3.65,0),
          children=[
          Shape(USE='LineVert')]),
        Transform(translation=(-38,3.65,0),
          children=[
          Shape(USE='LineVert')]),
        Transform(translation=(-23,3.65,0),
          children=[
          Shape(USE='LineVert')]),
        Transform(translation=(-8,3.65,0),
          children=[
          Shape(USE='LineVert')]),
        Transform(translation=(-56.8,3.65,-2.5),
          children=[
          Group(DEF='Circles',
            children=[
            Transform(scale=(1.6,1,1.6),
              children=[
              Shape(DEF='BigCircle',
                geometry=Extrusion(ccw=False,creaseAngle=1.3,crossSection=[(-.2,0),(.2,0),(.2,-.1),(-.2,-.1),(-.2,0)],spine=[(2.00,0.0,0.00),(1.85,0.0,0.77),(1.41,0.0,1.41),(0.77,0.0,1.85),(0.00,0.0,2.00),(-0.77,0.0,1.85),(-1.41,0.0,1.41),(-1.85,0.0,0.77),(-2.00,0.0,0.00),(-1.85,0.0,-0.77),(-1.41,0.0,-1.41),(-0.77,0.0,-1.85),(0.00,0.0,-2.00),(0.77,0.0,-1.85),(1.41,0.0,-1.41),(1.85,0.0,-0.77),(2.00,0.0,0.00)]))]),
            Transform(scale=(0.3,0.3,0.3),
              children=[
              Shape(DEF='SmallCircle',
                geometry=Extrusion(ccw=False,creaseAngle=1.3,crossSection=[(2.00,0.00),(1.85,0.77),(1.41,1.41),(0.77,1.85),(0.00,2.00),(-0.77,1.85),(-1.41,1.41),(-1.85,0.77),(-2.00,0.00),(-1.85,-0.77),(-1.41,-1.41),(-0.77,-1.85),(0.00,-2.00),(0.77,-1.85),(1.41,-1.41),(1.85,-0.77),(2.00,0.00)],spine=[(0,0,0),(0,0.2,0)]))])])]),
        Transform(translation=(-26.8,3.65,2.5),
          children=[
          Group(USE='Circles')]),
        Transform(rotation=(0,1,0,-1.57),scale=(3,2.5,2.5),translation=(-57.5,3.65,-4.5),
          children=[
          Transform(rotation=(1,0,0,-1.57),
            children=[
            Shape(
              geometry=Text(string=["2"],
                fontStyle=FontStyle(style_='BOLD')))])]),
        Transform(rotation=(0,1,0,-1.57),scale=(4,2.5,2.5),translation=(-27.5,3.65,3),
          children=[
          Transform(rotation=(1,0,0,-1.57),
            children=[
            Shape(
              geometry=Text(string=["1"],
                fontStyle=FontStyle(style_='BOLD')))])])]),
      Group(DEF='WellHole',
        children=[
        Transform(translation=(-68,2,0),
          children=[
          Shape(DEF='Hole1',
            appearance=Appearance(
              material=Material(diffuseColor=(0.2,0.2,0.2),specularColor=(0.1,0.1,0.1))),
            geometry=Box(size=(3,2,21.05)))]),
        Transform(translation=(-64.5,2,0),
          children=[
          Shape(USE='Hole1')]),
        Transform(translation=(-61,2,0),
          children=[
          Shape(USE='Hole1')])]),
      Group(DEF='PennantNo',
        children=[
        Transform(rotation=(0,1,0,0.255),scale=(4,4,4),translation=(57,2.2,9.52),
          children=[
          Transform(rotation=(1,0,0,0.15),
            children=[
            Shape(DEF='Pennant',
              geometry=Text(string=["208"],
                fontStyle=FontStyle(style_='BOLD')))])]),
        Transform(rotation=(0,1,0,-3.38),scale=(4,4,4),translation=(56.5,2.2,-9.52),
          children=[
          Transform(rotation=(1,0,0,0.15),translation=(-1.4,0,0),
            children=[
            Shape(USE='Pennant')])]),
        Transform(rotation=(0,1,0,-1.57),scale=(4,4,4),translation=(-66.5,3.65,2),
          children=[
          Transform(rotation=(1,0,0,-1.57),
            children=[
            Shape(USE='Pennant')])]),
        Transform(scale=(2,2,2),translation=(-68,-1,10.505),
          children=[
          Transform(
            children=[
            Shape(USE='Pennant')])]),
        Transform(scale=(2,2,2),translation=(-65.5,-1,-10.505),
          children=[
          Transform(rotation=(0,1,0,3.14),
            children=[
            Shape(
              geometry=Text(string=["208"]))])])]),
      Group(DEF='WellDeckDoor',
        children=[
        Transform(
          children=[
          Shape(DEF='WellEntrance',
            appearance=Appearance(
              material=Material(diffuseColor=(0.1,0.1,0.1))),
            geometry=Extrusion(creaseAngle=0.7,crossSection=[(-2.6,9.5),(4.4,9),(4.4,-9),(-2.6,-9.5),(-2.6,9.5)],solid=False,spine=[(-70.1,0,0),(-69,0,0)]))]),
        Transform(rotation=(1,0,0,1.57),translation=(-70,-5,0),
          children=[
          CylinderSensor(DEF='WellDoorSensor',maxAngle=1.57),
          Transform(DEF='WellDoorTransform',
            children=[
            Transform(rotation=(1,0,0,-1.57),
              children=[
              Shape(DEF='WellDoor',
                appearance=Appearance(USE='HullGrey'),
                geometry=Extrusion(creaseAngle=0.7,crossSection=[(-3.6,10.5),(5.4,10),(5.4,-10),(-3.6,-10.5),(-3.6,10.5)],solid=False,spine=[(-0.4,5,0),(0.1,5,0)])),
              Transform(rotation=(0,1,0,-1.57),scale=(4,4,4),translation=(-0.5,5,2),
                children=[
                Transform(
                  children=[
                  Shape(USE='Pennant')])])])])])])]),
    ROUTE(fromField='rotation_changed',fromNode='WellDoorSensor',toField='set_rotation',toNode='WellDoorTransform')])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for LstHull.py")
