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

newModel=X3D(version='3.0',profile='Immersive',
  head=head(
    children=[
    meta(content='Sovremenny.wrl Sovremenny.x3d',name='title'),
    meta(content='Anderson, Kevin S.',name='creator'),
    meta(content='9/1/2000',name='modified'),
    meta(content='Russian Destroyer Sovremenny I Class',name='description'),
    meta(content='*enter url address here*',name='identifier'),
    meta(content='X3D-Edit 3.2, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(name='license',content='../../license.html')]),
  Scene=Scene(
    children=[
    Viewpoint(position=(0,0,25)),
    Background(groundColor=[(0,0,.7)],skyColor=[(0,0,.7)]),
    # Scene nodes are added here
    Transform(scale=(.2,.2,.2),
      children=[
      Shape(DEF='BottomHullBelowWaterLine',
        appearance=Appearance(DEF='Black',
          material=Material(diffuseColor=(.1,.1,.1))),
        geometry=Extrusion(crossSection=[(0,8.65),(4.412,6.65),(4.412,-6.65),(0,-8.65),(0,8.65)],orientation=[(0,0,1,.45),(0,0,1,0),(0,0,1,-.785)],scale=[(1.1,1),(1,1),(1.9,.02)],spine=[(-84.68,0,0),(45,0,0),(70,0,0)])),
      Shape(DEF='BottomHull',
        appearance=Appearance(DEF='HullGrey',
          material=Material(diffuseColor=(.62,.639,.612))),
        geometry=Extrusion(crossSection=[(-2.206,9.65),(0,8.65),(0,-8.65),(-2.206,-9.65),(-2.206,9.65)],orientation=[(0,0,1,.45),(0,0,1,0),(0,0,1,-.785)],scale=[(1.1,1),(1,1),(1.9,.02)],spine=[(-84.68,0,0),(45,0,0),(70,0,0)])),
      Shape(DEF='CenterHull',
        appearance=Appearance(USE='HullGrey'),
        geometry=Extrusion(crossSection=[(-4.67,9.65),(-2.206,9.65),(-2.206,-9.65),(-4.67,-9.65),(-4.67,9.65)],orientation=[(0,0,1,0),(0,0,1,0),(0,0,1,-.785)],scale=[(1,1),(1,1),(1.9,.02)],spine=[(-85.7456,0,0),(45,0,0),(70,0,0)])),
      Shape(DEF='UpperHullFwd',
        appearance=Appearance(USE='HullGrey'),
        geometry=Extrusion(crossSection=[(-7,9.65),(-4.67,9.65),(-4.67,-9.65),(-7,-9.65),(-7,9.65)],orientation=[(0,0,1,-.6),(0,0,1,0),(0,0,1,-.785)],scale=[(1.2,1),(1,1),(1.9,.02)],spine=[(16,0,0),(45,0,0),(70,0,0)])),
      Shape(DEF='MissileDeckStructure',
        appearance=Appearance(USE='HullGrey'),
        geometry=Extrusion(creaseAngle=.7,crossSection=[(-57.67,-2.4),(-57.67,2.4),(-50.3,8.5),(-23.3,8.5),(-23.3,4.85),(30.72,4.85),(35.63,2.4),(35.63,-2.4),(30.72,-4.85),(-23.3,-4.85),(-23.3,-8.5),(-50.3,-8.5),(-57.67,-2.4)],spine=[(0,2,0),(0,6.8,0)])),
      Shape(DEF='MissileDeck',
        appearance=Appearance(DEF='TopsideDeck',
          material=Material(diffuseColor=(.7529,.341,.2588))),
        geometry=Extrusion(creaseAngle=.7,crossSection=[(-58.67,-3.4),(-58.67,3.4),(-50.3,9.65),(-23.3,9.65),(-23.3,-9.65),(-50.3,-9.65),(-58.67,-3.4)],spine=[(0,6.8,0),(0,7,0)])),
      Shape(DEF='FlightDeckStructure',
        appearance=Appearance(USE='HullGrey'),
        geometry=Extrusion(creaseAngle=.7,crossSection=[(-49.08,-3.5),(-49.08,3.5),(-41.7,7.5),(-33.12,7.5),(-30.66,9.65),(-30,9.65),(-29.44,9),(-26.98,9),(-26.98,8.5),(-23.3,8.5),(-23.3,-8.5),(-26.98,-8.5),(-26.98,-9),(-29.44,-9),(-30,-9.65),(-30.66,-9.65),(-33.12,-7.5),(-41.7,-7.5),(-49.08,-3.5)],spine=[(0,6.9,0),(0,9.8,0)])),
      Shape(DEF='FlightDeck',
        appearance=Appearance(USE='TopsideDeck'),
        geometry=Extrusion(creaseAngle=.7,crossSection=[(-50.08,-4.5),(-50.08,4.5),(-41.7,8.5),(-33.12,8.5),(-31.89,9.65),(-29.44,9.65),(-29.44,9),(-23.3,9),(-23.3,-9),(-29.44,-9),(-29.44,-9.65),(-31.89,-9.65),(-33.12,-8.5),(-41.7,-8.5),(-50.08,-4.5)],spine=[(0,9.8,0),(0,10,0)])),
      Shape(DEF='AuxDeckStructure',
        appearance=Appearance(USE='HullGrey'),
        geometry=Extrusion(creaseAngle=.55,crossSection=[(-26.25,-6.5),(-26.25,6.5),(-25.75,7.5),(-23.3,8),(-23.3,-8),(-25.75,-7.5),(-26.25,-6.5)],spine=[(0,9.8,0),(0,12.8,0)])),
      Shape(DEF='AuxDeck',
        appearance=Appearance(USE='TopsideDeck'),
        geometry=Extrusion(creaseAngle=.55,crossSection=[(-27.25,-8),(-27.25,8),(-23.3,8),(-23.3,-8),(-27.25,-8)],spine=[(0,12.8,0),(0,13,0)])),
      Shape(DEF='LowerExaustStrucure',
        appearance=Appearance(USE='HullGrey'),
        geometry=Extrusion(creaseAngle=.55,crossSection=[(-28.21,-2),(-28.21,2),(-27.9,2.2),(-27.6,2.4),(-24.53,2.4),(-23.3,3.65),(-15.93,3.65),(-14.7,2.4),(-14.7,-2.4),(-15.93,-3.65),(-23.3,-3.65),(-24.53,-2.4),(-27.6,-2.4),(-27.9,-2.2),(-28.21,-2)],spine=[(0,6.8,0),(0,18.8,0)])),
      Shape(DEF='UpperExaustStrucure',
        appearance=Appearance(USE='HullGrey'),
        geometry=Extrusion(creaseAngle=.55,crossSection=[(-23.3,3.65),(-15.93,3.65),(-14.7,2.4),(-14.7,-2.4),(-15.93,-3.65),(-23.3,-3.65)],spine=[(0,18.8,0),(0,20.8,0)])),
      Shape(DEF='InnerExaustStrucure',
        appearance=Appearance(USE='Black'),
        geometry=Extrusion(creaseAngle=.55,crossSection=[(-24.51,-2.38),(-24.51,2.38),(-23.3,3.63),(-15.93,3.63),(-14.72,2.38),(-14.72,-2.38),(-15.93,-3.63),(-23.3,-3.63),(-24.51,-2.38)],spine=[(0,18.8,0),(0,21,0)])),
      Shape(DEF='Fwd02LevelStructure',
        appearance=Appearance(USE='HullGrey'),
        geometry=Extrusion(creaseAngle=.7,crossSection=[(-15.93,-2.4),(-15.93,2.4),(-6.11,2.4),(-6.11,4.85),(-1.2,9.65),(3.7,9.65),(8,6.5),(8,4.85),(30.72,4.85),(35.63,2.4),(35.63,-2.4),(30.72,-4.85),(8,-4.85),(8,-6.5),(3.7,-9.65),(-1.2,-9.65),(-6.11,-4.85),(-6.11,-2.4),(-15.93,-2.4)],spine=[(0,3.8,0),(0,8.8,0)])),
      Shape(DEF='Center01LevelDeck',
        appearance=Appearance(USE='TopsideDeck'),
        geometry=Extrusion(creaseAngle=.7,crossSection=[(-15.90,-9.65),(-15.93,-9.61),(-15.96,-9.57),(-18.3,-3.65),(-18.3,3.65),(-15.96,9.57),(-15.93,9.61),(-15.9,9.65),(-1.2,9.65),(-1.2,-9.65),(-15.9,-9.65)],spine=[(0,6.8,0),(0,7,0)])),
      Shape(DEF='Fwd02LevelDeck',
        appearance=Appearance(USE='TopsideDeck'),
        geometry=Extrusion(convex=False,creaseAngle=.7,crossSection=[(-20.84,-4.85),(-20.84,4.85),(-6.11,4.85),(1.25,4.85),(1.25,9.65),(3.7,9.65),(8,6.5),(8,4.55),(30.72,4.55),(35.13,2.4),(35.13,-2.4),(30.72,-4.55),(8,-4.55),(8,-6.5),(3.7,-9.65),(1.25,-9.65),(1.25,-4.85),(-6.11,-4.85),(-20.84,-4.85)],spine=[(0,8.8,0),(0,8.9,0)])),
      Transform(translation=(-7,4.4,9.45),
        children=[
        Shape(DEF='FwdDeckSupport',
          appearance=Appearance(USE='HullGrey'),
          geometry=Extrusion(convex=False,creaseAngle=1.5,crossSection=[(-1,-.2),(-1,.2),(1,.2),(1,-.2),(-1,-.2)],scale=[(1.4,1),(1.15,1),(1,1),(1.15,1),(1.4,1)],spine=[(0,0,0),(0,.6,0),(0,1.2,0),(0,1.8,0),(0,2.4,0)]))]),
      Transform(translation=(-7,4.4,-9.45),
        children=[
        Shape(USE='FwdDeckSupport')]),
      Transform(translation=(-1.2,4.4,-9.45),
        children=[
        Shape(USE='FwdDeckSupport')]),
      Transform(translation=(-1.2,4.4,9.45),
        children=[
        Shape(USE='FwdDeckSupport')]),
      Transform(scale=(2,.45,1),translation=(4.8,4.5,-9.45),
        children=[
        Shape(USE='FwdDeckSupport')]),
      Transform(scale=(2,.45,1),translation=(4.8,4.5,9.45),
        children=[
        Shape(USE='FwdDeckSupport')]),
      Shape(DEF='OutBoardAux01LevelDeck',
        appearance=Appearance(USE='TopsideDeck'),
        geometry=Extrusion(convex=False,creaseAngle=.7,crossSection=[(3.7,-9.64),(3.7,9.64),(9.5,9.64),(9.5,-9.64),(3.7,-9.64)],spine=[(0,5.5,0),(0,5.7,0)])),
      Transform(scale=(.6,1,1),translation=(-30.3,4.4,9.45),
        children=[
        Shape(DEF='AftDeckSupport',
          appearance=Appearance(USE='HullGrey'),
          geometry=Extrusion(convex=False,creaseAngle=1.5,crossSection=[(-.8,-.2),(-.8,.2),(.8,.2),(.8,-.2),(-.8,-.2)],scale=[(1.4,1),(1.15,1),(1,1),(.925,1),(.85,1)],spine=[(0,0,0),(0,.6,0),(0,1.2,0),(0,1.8,0),(0,2.4,0)]))]),
      Transform(scale=(.6,1,1),translation=(-30.3,4.4,-9.45),
        children=[
        Shape(USE='AftDeckSupport')]),
      Shape(DEF='Ctr02LevelStructure',
        appearance=Appearance(USE='HullGrey'),
        geometry=Extrusion(creaseAngle=.7,crossSection=[(-6.11,-4.85),(-6.11,4.85),(-1.2,9.65),(1.25,9.65),(1.25,-9.65),(-1.2,-9.65),(-6.11,-4.85)],spine=[(0,8.8,0),(0,9.8,0)])),
      Shape(DEF='Ctr02LevelDeck',
        appearance=Appearance(USE='TopsideDeck'),
        geometry=Extrusion(convex=False,creaseAngle=.7,crossSection=[(-6.11,-4.85),(-6.11,4.85),(-1.2,9.65),(1.25,9.65),(1.25,-9.65),(-1.2,-9.65),(-6.11,-4.85)],spine=[(0,9.8,0),(0,9.9,0)])),
      Shape(DEF='Fwd03LevelStructure',
        appearance=Appearance(USE='HullGrey'),
        geometry=Extrusion(creaseAngle=.7,crossSection=[(20.9,-2.4),(20.9,2.4),(29.5,2.4),(29.5,-2.4),(20.9,-2.4)],spine=[(0,8.8,0),(0,9.8,0)])),
      Shape(DEF='Fwd03LevelDeck',
        appearance=Appearance(USE='TopsideDeck'),
        geometry=Extrusion(convex=False,creaseAngle=.7,crossSection=[(20.9,-2.2),(20.9,2.2),(29.15,2.2),(29.15,-2.2),(20.9,-2.2)],spine=[(0,9.8,0),(0,9.9,0)])),
      Shape(DEF='Fwd04LevelStructure',
        appearance=Appearance(USE='HullGrey'),
        geometry=Extrusion(creaseAngle=.7,crossSection=[(12.3,-1.8),(12.3,1.8),(16,1.8),(16,3.8),(20.9,3.8),(20.9,1.8),(23.35,1.8),(23.35,-1.8),(20.9,-1.8),(20.9,-3.8),(16,-3.8),(16,-1.8),(12.3,-1.8)],spine=[(0,8.8,0),(0,12.8,0)])),
      Shape(DEF='Fwd04LevelDeck',
        appearance=Appearance(USE='TopsideDeck'),
        geometry=Extrusion(convex=False,creaseAngle=.7,crossSection=[(12.3,-1.8),(12.3,1.8),(16.3,1.8),(16.3,3.6),(20.6,3.6),(20.6,1.6),(23.05,1.6),(23.05,-1.6),(20.6,-1.6),(20.6,-3.6),(16.3,-3.6),(16.3,-1.8),(12.3,-1.8)],spine=[(0,12.8,0),(0,12.9,0)])),
      Shape(DEF='Ctr03LevelStructure',
        appearance=Appearance(USE='HullGrey'),
        geometry=Extrusion(creaseAngle=.7,crossSection=[(-11.02,-2.4),(-11.02,2.4),(-7.2,2.4),(-7.2,4.85),(12.3,4.85),(14.77,3.8),(14.77,-3.8),(12.3,-4.85),(-7.2,-4.85),(-7.2,-2.4),(-11.02,-2.4)],spine=[(0,6.8,0),(0,11,0)])),
      Shape(DEF='Ctr03LevelDeck',
        appearance=Appearance(USE='TopsideDeck'),
        geometry=Extrusion(convex=False,creaseAngle=.7,crossSection=[(-12,-3.8),(-12,3.8),(9.84,3.8),(9.84,4.85),(14.77,4.85),(14.77,-4.85),(9.84,-4.85),(9.84,-3.8),(-12,-3.8)],spine=[(0,11,0),(0,11.2,0)])),
      Shape(DEF='BridgeStructure',
        appearance=Appearance(USE='HullGrey'),
        geometry=Extrusion(creaseAngle=.7,crossSection=[(-7.2,-4.85),(-7.2,4.85),(9.84,4.85),(12.3,2.4),(12.3,-2.4),(9.84,-4.85),(-7.2,-4.85)],spine=[(0,11,0),(0,16.8,0)])),
      Shape(DEF='BridgeOverHang',
        appearance=Appearance(USE='HullGrey'),
        geometry=Extrusion(creaseAngle=.7,crossSection=[(-7.2,-5.4),(-7.2,5.4),(9.84,5.4),(12.85,2.7),(12.85,-2.7),(9.84,-5.4),(-7.2,-5.4)],spine=[(0,16.8,0),(0,17.2,0)])),
      Shape(DEF='BridgeOverHangDeck',
        appearance=Appearance(USE='TopsideDeck'),
        geometry=Extrusion(convex=False,creaseAngle=.7,crossSection=[(-7.2,-4.85),(-7.2,4.85),(9.84,4.85),(12.3,2.4),(12.3,-2.4),(9.84,-4.85),(-7.2,-4.85)],spine=[(0,17.2,0),(0,17.3,0)])),
      Shape(DEF='UpperBridgeStructure',
        appearance=Appearance(USE='HullGrey'),
        geometry=Extrusion(creaseAngle=.7,crossSection=[(-7.2,-2.4),(-7.2,2.4),(6.16,2.4),(7.39,1.2),(7.39,-1.2),(6.16,-2.4),(-7.2,-2.4)],spine=[(0,17.3,0),(0,20,0)])),
      Shape(DEF='UpperBridgeDeck',
        appearance=Appearance(USE='TopsideDeck'),
        geometry=Extrusion(convex=False,creaseAngle=.7,crossSection=[(-7,-2.2),(-7,2.2),(6.16,2.2),(7.14,1.1),(7.14,-1.1),(6.16,-2.2),(-7,-2.2)],spine=[(0,20,0),(0,20.1,0)])),
      Shape(DEF='BridgeWingStructure',
        appearance=Appearance(USE='HullGrey'),
        geometry=Extrusion(creaseAngle=.7,crossSection=[(-11,-3.6),(-11,3.6),(-8.56,3.6),(-8.56,6),(4.9,6),(4.9,-6),(-8.56,-6),(-8.56,-3.6),(-11,-3.6)],spine=[(0,13,0),(0,14.7,0)])),
      Shape(DEF='BridgeWingDeck',
        appearance=Appearance(USE='TopsideDeck'),
        geometry=Extrusion(convex=False,creaseAngle=.7,crossSection=[(-11,-3.6),(-11,3.6),(-8.56,3.6),(-8.56,6),(-7.2,6),(-7.2,-6),(-8.56,-6),(-8.56,-3.6),(-11,-3.6)],spine=[(0,14.7,0),(0,14.8,0)])),
      Shape(DEF='AftBridgeWingStructure',
        appearance=Appearance(USE='HullGrey'),
        geometry=Extrusion(creaseAngle=.7,crossSection=[(-11,-2),(-11,2),(-7.88,2),(-7.88,-2),(-11,-2)],spine=[(0,14.7,0),(0,17,0)])),
      Shape(DEF='AftBridgeWingDeck',
        appearance=Appearance(USE='TopsideDeck'),
        geometry=Extrusion(convex=False,creaseAngle=.7,crossSection=[(-11,-2),(-11,2),(-7.88,2),(-7.88,-2),(-11,-2)],spine=[(0,17,0),(0,17.1,0)])),
      Transform(translation=(-7.2,17.2,0),
        children=[
        Inline(url=["Superstructure.wrl","Superstructure.x3d"])])])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for Sovremenny.py")
