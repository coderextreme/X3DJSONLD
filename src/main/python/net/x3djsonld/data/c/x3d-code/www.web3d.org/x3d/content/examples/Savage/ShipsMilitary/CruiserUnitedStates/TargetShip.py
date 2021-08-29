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

newModel=X3D(profile='Immersive',version='3.1',
  head=head(
    children=[
    meta(content='TargetShip.x3d',name='title'),
    meta(content='Ugur Demiryurek, Mike Hunsberger',name='creator'),
    meta(content='James Harney',name='modified by'),
    meta(content='15 October 2000',name='created'),
    meta(content='15 November 2004',name='modified'),
    meta(content='Generic cruiser-class ship modified to be a surface target for the ArleighBurke model.',name='description'),
    meta(content='https://savage.nps.edu/Savage/ShipsMilitary/CruiserUnitedStates/TargetShip.x3d',name='identifier'),
    meta(content='X3D-Edit 3.2, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    Viewpoint(DEF='SideView',description='Right Side View',position=(-5,15,150)),
    Viewpoint(description='Back View',orientation=(0.0,1.0,0.0,-1.5),position=(-150,10,0)),
    Viewpoint(DEF='FrontView',description='Front View',orientation=(0,-1.0,0,-1.5),position=(100,10,0)),
    Viewpoint(DEF='TopView',description='Top View',orientation=(1,0,0,-1.1),position=(0,150,75)),
    Background(groundColor=[(0,0,0)],skyColor=[(0,0.5,.5)]),
    #  Scene nodes are added here 
    Transform(translation=(1.13,1,1),
      children=[
      Transform(DEF='CRUSIERMAINBODY',
        children=[
        Shape(DEF='BelowWaterHull',
          appearance=Appearance(DEF='Black',
            material=Material(diffuseColor=(.1,.1,.1))),
          geometry=Extrusion(creaseAngle=0.85,crossSection=[(0,8.4),(4.412,6.65),(4.412,-6.65),(0,-8.4),(0,8.4)],orientation=[(0,0,1,.45),(0,0,1,0),(0,0,1,-.785)],scale=[(1.1,1),(1,1),(1.9,.02)],solid=False,spine=[(-82.00,0,0),(45,0,0),(70,0,0)])),
        Shape(DEF='BottomHull',
          appearance=Appearance(DEF='HullGrey',
            material=Material(diffuseColor=(.62,.639,.612))),
          geometry=Extrusion(creaseAngle=0.85,crossSection=[(-2.206,9.65),(0,8.4),(0,-8.4),(-2.206,-9.65),(-2.206,9.65)],orientation=[(0,0,1,.45),(0,0,1,0),(0,0,1,-.785)],scale=[(1.1,1),(1,1),(1.9,.02)],solid=False,spine=[(-82.0,0,0),(45,0,0),(70,0,0)])),
        Shape(DEF='CenterHull',
          appearance=Appearance(USE='HullGrey'),
          geometry=Extrusion(creaseAngle=0.7,crossSection=[(-4.67,9.65),(-2.206,9.65),(-2.206,-9.65),(-4.67,-9.65),(-4.67,9.65)],orientation=[(0,0,1,0),(0,0,1,0),(0,0,1,-.785)],scale=[(1,1),(1,1),(1.9,.02)],solid=False,spine=[(-83.0,0,0),(45,0,0),(70,0,0)])),
        Shape(DEF='UpperHullFwd',
          appearance=Appearance(USE='HullGrey'),
          geometry=Extrusion(creaseAngle=0.7,crossSection=[(-7,9.65),(-4.67,9.65),(-4.67,-9.65),(-7,-9.65),(-7,9.65)],orientation=[(0,0,1,-.6),(0,0,1,0),(0,0,1,-.785)],scale=[(1.2,1),(1,1),(1.9,.02)],solid=False,spine=[(40,0,0),(45,0,0),(70,0,0)])),
        Shape(DEF='MissileDeck',
          appearance=Appearance(USE='HullGrey'),
          geometry=Extrusion(creaseAngle=1.2,crossSection=[(-55.5,-2.5),(-55.5,2.5),(-50.3,9.65),(45,9.65),(45,-9.65),(-50.3,-9.65),(-55.5,-2.5)],solid=False,spine=[(0,2,0),(0,6.9,0)]))]),
      Transform(DEF='FRONTGUN',rotation=(1,0.05,0,-1.57),scale=(0.7,0.7,0.7),translation=(55,9.4,1.5),
        children=[
        Transform(DEF='FrontGunBody',scale=(0.5,0.5,0.7),
          children=[
          Shape(
            appearance=Appearance(USE='HullGrey'),
            geometry=Extrusion(creaseAngle=1.5,crossSection=[(-6.0,0.0),(-5.9,0.7),(-5.7,1.2),(-5.3,1.7),(-5,2.1),(-4,2.2),(-3,2.3),(-2,2.4),(0,2.5),(1,2.6),(2,2.65),(3,2.25),(4,1.7),(5,1),(6,0),(7,-2.5),(-5.5,-2.5),(-6,0)],spine=[(0,1,0),(0,7,0)]))]),
        Transform(DEF='FrontGunFire',rotation=(-0.3,0,1,1.57),translation=(4,2.1,1),
          children=[
          Shape(
            appearance=Appearance(USE='HullGrey'),
            geometry=Cylinder(bottom=False,height=10,radius=0.2,top=False))]),
        Transform(DEF='FrontGunBottom1',rotation=(1,0,0,1.57),translation=(0,2.2,-2.2),
          children=[
          Shape(
            appearance=Appearance(USE='HullGrey'),
            geometry=Cylinder(height=0.25,radius=4))]),
        Transform(DEF='FrontGunBottom2',rotation=(1,0,0,1.57),translation=(0,2.0,-2.0),
          children=[
          Shape(
            appearance=Appearance(USE='HullGrey'),
            geometry=Cylinder(height=0.5,radius=1.25))])]),
      Transform(DEF='BACKGUN',rotation=(0,1,1,-3.1),translation=(-65,7.0,-1.8),
        children=[
        Transform(DEF='BackGunBody',scale=(0.5,0.5,0.7),
          children=[
          Shape(DEF='gun',
            appearance=Appearance(USE='HullGrey'),
            geometry=Extrusion(creaseAngle=1.5,crossSection=[(-6.0,0.0),(-5.9,0.7),(-5.7,1.2),(-5.3,1.7),(-5,2.1),(-4,2.2),(-3,2.3),(-2,2.4),(0,2.5),(1,2.6),(2,2.65),(3,2.25),(4,1.7),(5,1),(6,0),(7,-2.5),(-5.5,-2.5),(-6,0)],spine=[(0,1,0),(0,7,0)]))]),
        Transform(DEF='BackGunFirePipe',rotation=(-0.3,0,1,1.57),translation=(4,2.1,1),
          children=[
          Shape(
            appearance=Appearance(USE='HullGrey'),
            geometry=Cylinder(bottom=False,height=10,radius=0.2,top=False))]),
        Transform(DEF='BackGunBottom1',rotation=(1,0,0,1.57),translation=(0,2.2,-2.2),
          children=[
          Shape(
            appearance=Appearance(USE='HullGrey'),
            geometry=Cylinder(height=0.25,radius=4))]),
        Transform(DEF='BackGunBottom2',rotation=(1,0,0,1.57),translation=(0,2.5,-2.0),
          children=[
          Shape(
            appearance=Appearance(USE='HullGrey'),
            geometry=Cylinder(height=0.5,radius=1.25))])]),
      Transform(DEF='HARPOON',scale=(1.3,1.3,1.3),translation=(-77.5,7.9,-6.2),
        children=[
        Transform(DEF='HarpoonBunch1',translation=(0,0.1,0),
          children=[
          Group(DEF='HarpoonBunch',
            children=[
            Transform(translation=(0,-0.245,0),
              children=[
              Group(DEF='Harpoon',
                children=[
                Transform(rotation=(1,0,0,-0.5),
                  children=[
                  Shape(DEF='HarpoonWithHolders',
                    appearance=Appearance(USE='HullGrey'),
                    geometry=Cylinder(height=5,radius=0.25)),
                  Transform(DEF='HarpoonDownHolder',translation=(0,-1.5,0),
                    children=[
                    Shape(
                      appearance=Appearance(
                        material=Material(),),
                      geometry=Box(size=(0.5,0.2,0.5)))]),
                  Transform(DEF='HarpoonTopHolder',translation=(0,1.5,0),
                    children=[
                    Shape(
                      appearance=Appearance(
                        material=Material(),),
                      geometry=Box(size=(0.5,0.2,0.5)))])])])]),
            Transform(translation=(0.5,-0.245,0),
              children=[
              Group(USE='Harpoon')]),
            Transform(translation=(0,0,0.5),
              children=[
              Group(USE='Harpoon')]),
            Transform(translation=(0.5,0,0.5),
              children=[
              Group(USE='Harpoon')]),
            Transform(rotation=(1,0,0,-0.5),translation=(0.25,-0.45,-0.26),
              children=[
              Shape(
                appearance=Appearance(USE='HullGrey'),
                geometry=Box(size=(1.05,5,0.1)))])])]),
        Transform(DEF='HarpoonBunch2',rotation=(1,0,0,-1.7),translation=(-1.1,-0.77,0.7),
          children=[
          Group(USE='HarpoonBunch')]),
        Transform(DEF='HarpoonSupport1',translation=(-0.85,-2.25,0.5),
          children=[
          Shape(
            appearance=Appearance(USE='HullGrey'),
            geometry=Box(size=(1,1.5,0.1)))]),
        Transform(DEF='HarpoonSupport2',translation=(0.225,-1.85,0.0),
          children=[
          Shape(
            appearance=Appearance(USE='HullGrey'),
            geometry=Box(size=(1,1.5,0.1)))])]),
      Transform(DEF='Cruiser_Superstructure',scale=(1,0.78,0.8),translation=(4,-2.5,0),
        children=[
        Group(DEF='Rear-Superstructure-grouping',
          children=[
          Transform(DEF='Rear-Superstructure',translation=(-55,10,0),
            children=[
            Transform(translation=(6,0,0),
              children=[
              Shape(DEF='FlightDeckStructure',
                appearance=Appearance(USE='HullGrey'),
                geometry=Extrusion(ccw=False,creaseAngle=.7,crossSection=[(0,-5.5),(2.5,-7.25),(22,-7.25),(22,7.25),(2.5,7.25),(0,5.5),(0,-5.5)],spine=[(0,0.0,0),(0,4,0)]))]),
            Shape(DEF='RightSideFlightDeck',
              appearance=Appearance(USE='HullGrey'),
              geometry=Extrusion(ccw=False,creaseAngle=.7,crossSection=[(20,7.25),(21,9.65),(44.5,9.65),(44.5,7.25),(20,7.25)],solid=False,spine=[(0,0.0,0),(0,4,0)])),
            Shape(DEF='LeftSideFlightDeck',
              appearance=Appearance(USE='HullGrey'),
              geometry=Extrusion(ccw=False,creaseAngle=.7,crossSection=[(20,-7.25),(21,-9.65),(44.5,-9.65),(44.5,-7.25),(20,-7.25)],spine=[(0,0.0,0),(0,4,0)])),
            Shape(DEF='RearStructure1',
              appearance=Appearance(USE='HullGrey'),
              geometry=Extrusion(ccw=False,creaseAngle=.7,crossSection=[(28,-7.25),(44.5,-7.25),(44.5,7.25),(28,7.25),(28,-7.25)],solid=False,spine=[(0,0.0,0),(0,13.5,0)])),
            Shape(DEF='RearStructure1-Top1',
              appearance=Appearance(USE='HullGrey'),
              geometry=Extrusion(ccw=False,creaseAngle=.7,crossSection=[(28,2),(35,2),(35,7.25),(28,7.25),(28,2)],spine=[(0,13.5,0),(0,18.5,0)])),
            Shape(DEF='RearStructureTop2',
              appearance=Appearance(USE='HullGrey'),
              geometry=Extrusion(ccw=False,creaseAngle=.7,crossSection=[(35,3),(44.5,3),(44.5,7.25),(35,7.25),(35,3)],spine=[(0,13.5,0),(0,20.5,0)])),
            Transform(DEF='Stack1-Rear-LargeStructure',translation=(38,23,5),
              children=[
              Shape(DEF='Stack1',
                appearance=Appearance(USE='HullGrey'),
                geometry=Cylinder(height=5,radius=2,top=False)),
              Shape(DEF='InnerStack',
                appearance=Appearance(
                  material=Material(diffuseColor=(0,0,0))),
                geometry=Cylinder(height=4.9,radius=1.9))]),
            Transform(DEF='Stack2-Rear-LargeStructure',translation=(42,23,5),
              children=[
              Shape(USE='Stack1'),
              Shape(USE='InnerStack')]),
            Transform(DEF='Rear-Large-Structure-Top',
              children=[
              Shape(
                appearance=Appearance(USE='HullGrey'),
                geometry=IndexedFaceSet(ccw=False,coordIndex=[4,5,6,7,-1,0,1,2,3,-1,0,1,5,4,-1,1,2,6,5,-1,2,3,7,6,-1,0,4,7,3],solid=False,
                  #  top, bottom, front, left, back, right 
                  coord=Coordinate(point=[(28,13.5,2),(28,13.5,-7.25),(44.5,13.5,-7.25),(44.5,13.5,2),(28,23.5,2),(28,23.5,-5.25),(44.5,23.5,-5.25),(44.5,23.5,2)])))])])]),
        Group(DEF='Front-Superstructure-Grouping',
          children=[
          Transform(DEF='Front-Superstructure',translation=(4,10,0),
            children=[
            Transform(DEF='Front-Super-RearBox',translation=(12,4.5,0),
              children=[
              Shape(
                appearance=Appearance(USE='HullGrey'),
                geometry=Box(size=(24,9,12)))]),
            Transform(DEF='Front-Super-RearBox-upper',translation=(12,11,0),
              children=[
              Shape(DEF='LargeStructureTop1',
                appearance=Appearance(USE='HullGrey'),
                geometry=Box(size=(24,4,8)))]),
            Transform(DEF='Front-Super-RearBox-small-upper',translation=(12,16,0),
              children=[
              Shape(
                appearance=Appearance(USE='HullGrey'),
                geometry=Box(size=(12,6,6)))]),
            Transform(DEF='Front-Super-Stack',translation=(10.5,21,0),
              children=[
              Shape(DEF='Front-Super-Stack1',
                appearance=Appearance(USE='HullGrey'),
                geometry=Cylinder(height=5,radius=2,top=False)),
              Shape(DEF='Front-InnerStack',
                appearance=Appearance(
                  material=Material(diffuseColor=(0,0,0))),
                geometry=Cylinder(height=4.9,radius=1.9))]),
            Transform(DEF='Front-Super-Stack2',translation=(15,21,0),
              children=[
              Shape(USE='Front-Super-Stack1'),
              Shape(USE='Front-InnerStack')]),
            Transform(DEF='Front-Super-FrontBox',translation=(30,4,0),
              children=[
              Shape(
                appearance=Appearance(USE='HullGrey'),
                geometry=Box(size=(12,8,12)))]),
            Transform(DEF='Front-Super-FrontBox-Top',
              children=[
              Shape(
                appearance=Appearance(USE='HullGrey'),
                geometry=IndexedFaceSet(ccw=False,coordIndex=[4,5,6,7,-1,0,1,2,3,-1,0,1,5,4,-1,1,2,6,5,-1,2,3,7,6,-1,0,4,7,3],solid=False,
                  #  top, bottom, front, left, back, right 
                  coord=Coordinate(point=[(24,8,6),(24,8,-6),(36,8,-6),(36,8,6),(24,13.5,5),(24,13.5,-5),(34,13.5,-5),(34,13.5,5)])))]),
            Transform(DEF='Front-Super-Bridge',translation=(28,14,0),
              children=[
              Transform(DEF='Front-Super-Bridge-Lower',translation=(0,.25,0),
                children=[
                Shape(
                  appearance=Appearance(USE='HullGrey'),
                  geometry=Box(size=(8,1.5,6)))]),
              Transform(DEF='Front-Super-Bridge-Windows',translation=(0,1.75,0),
                children=[
                Shape(
                  appearance=Appearance(
                    material=Material(transparency=.6)),
                  geometry=Box(size=(8,1.5,6)))]),
              Transform(DEF='Front-Super-Bridge-Roof',translation=(0,2.5,0),
                children=[
                Shape(
                  appearance=Appearance(USE='HullGrey'),
                  geometry=Box(size=(8,.1,6)))]),
              Transform(DEF='Front-Super-Bridge-Back',translation=(-4,1,0),
                children=[
                Shape(
                  appearance=Appearance(USE='HullGrey'),
                  geometry=Box(size=(.1,3,6)))])]),
            Transform(DEF='Front-Super-antenna',scale=(1,1.2,1),translation=(21,13,0),
              children=[
              Inline(DEF='AntennaMast',url=["../DestroyerSovremennyRussia/AntennaMast.wrl","https://savage.nps.edu/Savage/ShipsMilitary/DestroyerSovremennyRussia/AntennaMast.wrl","../DestroyerSovremennyRussia/AntennaMast.x3d","https://savage.nps.edu/Savage/ShipsMilitary/DestroyerSovremennyRussia/AntennaMast.x3d"])])])]),
        Group(DEF='Mid-Superstructure-Grouping',
          children=[
          Transform(DEF='Mid-Super-Box',translation=(-3,10.5,0),
            children=[
            Transform(translation=(0,6,0),
              children=[
              Shape(
                appearance=Appearance(USE='HullGrey'),
                geometry=Box(size=(15,13,8)))])]),
          Transform(DEF='Mid-Super-antenna',scale=(1.3,1.8,1.3),translation=(0,23,0),
            children=[
            Inline(USE='AntennaMast')])])])])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for TargetShip.py")
