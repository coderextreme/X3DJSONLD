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
    meta(content='SeaDiver.x3d',name='title'),
    meta(content="Systeme d'Exploration Autonome D'Intervention VERsatile (SeaDiver) is an unmanned underwater vehicle (UUV) based on an underwater-glider concept. Dimensions: 2.8m long x 1.7m wide x 0.6m high. Hint: click on plane surfaces for simple animation.",name='description'),
    meta(content='Don Brutzman et Didier Leandri',name='creator'),
    meta(content='17 Avril 2002',name='created'),
    meta(content='14 January 2014',name='modified'),
    meta(content='http://www.univ-tln.fr',name='reference'),
    meta(content='SeaDiverConceptPresentation.ppt',name='reference'),
    meta(content='SeaDiverIsometricForwardStarboardQuarterView.jpg',name='Image'),
    meta(content='SeaDiverSideViewPeauQueue.jpg',name='Image'),
    meta(content='https://savage.nps.edu/Savage/Robots/UnmannedUnderwaterVehicles/SeaDiver.x3d',name='identifier'),
    meta(content='X3D-Edit 3.2, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    Background(skyColor=[(0.05,0.1,0.3)]),
    PointLight(DEF='SurfaceLight',color=(0.6,0.6,0.6),intensity=0.5,location=(0,3,0),radius=8),
    Viewpoint(DEF='StarboardView',description='SeaDiver starboard side 5m',position=(0,0,5)),
    Transform(rotation=(0,1,0,-1.57),translation=(-5,1,0),
      children=[
      Viewpoint(description='SeaDiver over-the-shoulder 5m',orientation=(1,0,0,-0.25),position=(0,0,0))]),
    LOD(range=[1000],
      children=[
      Group(
        children=[
        Viewpoint(description='SeaDiver from above 100m',orientation=(-0.58,-0.58,-0.58,2.09),position=(0,100,0)),
        Viewpoint(description='SeaDiver starboard side 25m',position=(0,0,25)),
        Viewpoint(description='SeaDiver astern 25m',orientation=(0,1,0,-1.57),position=(-25,0,0)),
        Viewpoint(description='SeaDiver astern 5m',orientation=(0,1,0,-1.57),position=(-5,0,0)),
        Viewpoint(description='SeaDiver port side 25m',orientation=(0,1,0,3.14),position=(0,0,-25)),
        Viewpoint(description='SeaDiver port side 5m',orientation=(0,1,0,3.14),position=(0,0,-5))]),
      WorldInfo(info=["null node outside of LOD range"])]),
    #  This file builds the SeaDiver Unmanned Underwater Vehicle (UUV). 
    Transform(
      #  Body 
      children=[
      Shape(
        geometry=Extrusion(creaseAngle=3.14,crossSection=[(0.3,0),(0.3,-0.7),(0.2,-0.8),(0,-.85),(-0.2,-0.8),(-0.3,-0.7),(-0.3,0),(-0.3,0.7),(-0.2,0.8),(0,.85),(0.2,0.8),(0.3,0.7),(0.3,0)],scale=[(0.3,0.3),(0.6,0.6),(0.77,0.77),(0.95,0.95),(1,1),(0.9,0.95),(0.7,0.9),(0.4,0.86),(0.1,0.8)],spine=[(1.3,0,0),(1.25,0,0),(1.15,0,0),(1.0,0,0),(0.7,0,0),(0.0,0,0),(-0.7,0,0),(-1.1,0,0),(-1.5,0,0)]),
        appearance=Appearance(DEF='HullAppearance',
          material=Material(ambientIntensity=0.6,diffuseColor=(0.94,0.94,1),shininess=0.9,specularColor=(0.7,1,0.8)))),
      #  Astern diving planes 
      Transform(translation=(-1.5,0,0),
        children=[
        Transform(DEF='RotateDivePlanes',center=(0.25,0,0),
          children=[
          TouchSensor(DEF='TouchDivePlanes',description='waggle dive planes'),
          Transform(translation=(0,0,0.7),
            children=[
            Shape(DEF='RightDivePlane',
              geometry=IndexedFaceSet(coordIndex=[0,3,2,1,0,-1,4,7,6,5,4,-1,1,2,6,5,-1,2,3,7,6,2,-1,3,0,4,7,3,-1,0,1,5,4,0,-1],creaseAngle=3.14,solid=False,
                coord=Coordinate(point=[(0,0.02,0),(0.57,0.02,0.06),(0.25,0.02,0.25),(0,0.02,0.28),(0,-0.02,0),(0.57,-0.02,0.06),(0.25,-0.02,0.25),(0,-0.02,0.28)])),
              appearance=Appearance(USE='HullAppearance'))]),
          Transform(translation=(0,0,-0.7),
            children=[
            Shape(DEF='LeftDivePlane',
              geometry=IndexedFaceSet(coordIndex=[0,3,2,1,0,-1,4,7,6,5,4,-1,1,2,6,5,-1,2,3,7,6,2,-1,3,0,4,7,3,-1,0,1,5,4,0,-1],creaseAngle=3.14,solid=False,
                coord=Coordinate(point=[(0,0.02,0),(0.57,0.02,-0.06),(0.25,0.02,-0.25),(0,0.02,-0.28),(0,-0.02,0),(0.57,-0.02,-0.06),(0.25,-0.02,-0.25),(0,-0.02,-0.28)])),
              appearance=Appearance(USE='HullAppearance'))])]),
        Group(DEF='RudderGroup',
          children=[
          TouchSensor(DEF='TouchRudders',description='wiggle rudders'),
          Transform(DEF='OffsetRudderLeft',translation=(0,0.05,-0.3),
            children=[
            Transform(DEF='RotateRudderLeft',center=(0.25,0,0),
              children=[
              Shape(DEF='Rudder',
                geometry=IndexedFaceSet(coordIndex=[0,3,2,1,0,-1,4,7,6,5,4,-1,1,2,6,5,-1,2,3,7,6,2,-1,3,0,4,7,3,-1,0,1,5,4,0,-1],creaseAngle=3.14,solid=False,
                  coord=Coordinate(point=[(0,0,0.02),(0.0,0.25,0.02),(0.25,0.25,0.02),(0.5,0.125,0.02),(0,0,-0.02),(0.0,0.25,-0.02),(0.25,0.25,-0.02),(0.5,0.125,-0.02)])),
                appearance=Appearance(USE='HullAppearance'))])]),
          Transform(DEF='OffsetRudderRight',translation=(0,0.05,0.3),
            children=[
            Transform(DEF='RotateRudderRight',center=(0.25,0,0),
              children=[
              Shape(USE='Rudder')])])])]),
      #  Astern diving-planes shaft 
      Transform(rotation=(1,0,0,1.57),translation=(-1.25,0,0),
        children=[
        Shape(
          geometry=Cylinder(bottom=False,height=1.5,radius=0.01,top=False),
          appearance=Appearance(USE='HullAppearance'))])]),
    #  Example animation for dive planes 
    TimeSensor(DEF='WiggleClock',cycleInterval=4),
    ROUTE(fromField='touchTime',fromNode='TouchDivePlanes',toField='set_startTime',toNode='WiggleClock'),
    OrientationInterpolator(DEF='PlaneWiggler',key=[0,0.25,0.75,1],keyValue=[(0,0,1,0),(0,0,1,0.15),(0,0,1,-0.15),(0,0,1,0)]),
    ROUTE(fromField='fraction_changed',fromNode='WiggleClock',toField='set_fraction',toNode='PlaneWiggler'),
    ROUTE(fromField='value_changed',fromNode='PlaneWiggler',toField='set_rotation',toNode='RotateDivePlanes'),
    #  Example animation for rudders 
    TimeSensor(DEF='WaggleClock',cycleInterval=4),
    ROUTE(fromField='touchTime',fromNode='TouchRudders',toField='set_startTime',toNode='WaggleClock'),
    OrientationInterpolator(DEF='RudderWaggler',key=[0,0.25,0.75,1],keyValue=[(0,1,0,0),(0,1,0,0.15),(0,1,0,-0.15),(0,1,0,0)]),
    ROUTE(fromField='fraction_changed',fromNode='WaggleClock',toField='set_fraction',toNode='RudderWaggler'),
    ROUTE(fromField='value_changed',fromNode='RudderWaggler',toField='set_rotation',toNode='RotateRudderLeft'),
    ROUTE(fromField='value_changed',fromNode='RudderWaggler',toField='set_rotation',toNode='RotateRudderRight')])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for SeaDiver.py")
