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
    meta(content='SupertankerLowDetail.x3d',name='title'),
    meta(content='Andrew Wiest',name='creator'),
    meta(content='6 May 2001',name='created'),
    meta(content='14 January 2014',name='modified'),
    meta(content='Supertanker model based on Exxon Valdez, low detail.',name='description'),
    meta(content='https://savage.nps.edu/Savage/ShipsCivilian/Supertanker/SupertankerLowDetail.x3d',name='identifier'),
    meta(content='X3D-Edit 3.2, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    Background(skyColor=[(.7,.8,.95)]),
    Viewpoint(description='Supertanker Low Detail',orientation=(-0.429808,0.899118,0.0827735,0.422004),position=(150,50,250)),
    NavigationInfo(speed=10),
    Transform(DEF='ShipSUpertankerMasterNode',
      children=[
      Transform(DEF='MainHull',
        children=[
        Shape(DEF='HE1',
          appearance=Appearance(
            material=Material(DEF='GreyBlack',diffuseColor=(.3,.3,.3),shininess=.1,specularColor=(.1,.1,.1))),
          geometry=Extrusion(creaseAngle=.785,crossSection=[(169.8,0),(166.8,-9.1),(160.7,-15.2),(154.6,-21.2),(145.6,-24.3),(-103.1,-24.3),(-112.2,-21.3),(-118.3,-15.2),(-122.5,-9.3),(-124.3,0),(-122.5,9.3),(-118.3,15.2),(-112.2,21.3),(-103.1,24.3),(145.6,24.3),(154.6,21.2),(160.7,15.2),(166.8,9.1),(169.8,0)],endCap=False,scale=[(1,1),(1.018,1)],solid=False,spine=[(0,0,0),(0,9.1,0)])),
        Shape(DEF='HE2',
          appearance=Appearance(
            material=Material(DEF='Rustyred',diffuseColor=(.8,.3,.2),shininess=.1,specularColor=(.3,.1,.05))),
          geometry=Extrusion(creaseAngle=.785,crossSection=[(169.8,0),(166.8,-9.1),(160.7,-15.2),(154.6,-21.2),(145.6,-24.3),(-103.1,-24.3),(-112.2,-21.3),(-118.3,-15.2),(-122.5,-9.3),(-124.3,0),(-122.5,9.3),(-118.3,15.2),(-112.2,21.3),(-103.1,24.3),(145.6,24.3),(154.6,21.2),(160.7,15.2),(166.8,9.1),(169.8,0)],endCap=False,scale=[(0.66,0.7),(0.8,0.8),(1,1)],solid=False,spine=[(0.0,-19.66,0.0),(0,-15,0),(0,0,0)]))]),
      Transform(DEF='HE4BowUnderWater',scale=(.98,.999,.835),translation=(133,-.1,0),
        children=[
        Shape(DEF='HE4',
          appearance=Appearance(
            material=Material(diffuseColor=(.8,.3,.2),shininess=.1,specularColor=(.3,.1,.05))),
          geometry=Extrusion(creaseAngle=1.3,crossSection=[(42.4,0),(40.6,-6.1),(36.3,-17.0),(30.3,-24.3),(-40.4,-24.3),(-40.4,24.3),(30.3,24.3),(36.3,17.0),(40.6,6.1),(42.4,0)],endCap=False,scale=[(0.8,0.8),(0.95,0.95),(1.0,1.0),(0.95,0.95),(0.8,0.7)],spine=[(0,-19.66,0),(0,-15,0),(0,-10,0),(0,-5,0),(0,6,0)]))]),
      Transform(DEF='HE3Topside',translation=(157.6,9.1,0),
        children=[
        Shape(DEF='HE3',
          appearance=Appearance(
            material=Material(USE='GreyBlack')),
          geometry=Extrusion(beginCap=False,creaseAngle=.785,crossSection=[(-13.93,24.3),(-9.53,24.3),(-0.33,21.2),(5.87,15.2),(12.07,9.1),(15.17,0),(12.07,-9.1),(5.87,-15.2),(-0.33,-21.2),(-9.53,-24.3),(-13.93,-24.3)],endCap=False,orientation=[(0,0,1,0.86),(0,0,1,0.86)],solid=False,spine=[(0,-.2,0),(5,4.0,0)]))]),
      Transform(DEF='Deck',scale=(1.01,1.0,1.0),translation=(0,7,0),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(DEF='Rustyreddeck',diffuseColor=(.8,.3,.2),shininess=.1,specularColor=(.3,.1,.05))),
          geometry=IndexedFaceSet(coordIndex=[0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,0],creaseAngle=1.5,
            coord=Coordinate(point=[(169.8,0,0),(166.8,0,-9.1),(160.7,0,-15.2),(154.6,0,-21.2),(145.6,0,-24.3),(-103.1,0,-24.3),(-112.2,0,-21.3),(-118.3,0,-15.2),(-122.5,0,-9.3),(-124.3,0,0),(-122.5,0,9.3),(-118.3,0,15.2),(-112.2,0,21.3),(-103.1,0,24.3),(145.6,0,24.3),(154.6,0,21.2),(160.7,0,15.2),(166.8,0,9.1)])))]),
      Transform(DEF='superstructure',
        children=[
        Transform(DEF='SS1',translation=(-86.9,12.1,0),
          children=[
          Shape(
            appearance=Appearance(
              material=Material(DEF='offwhite',diffuseColor=(.98,.98,.98))),
            geometry=Box(size=(18.2,24.3,24.3)))]),
        Transform(DEF='SS2',translation=(-85.8,26.4,0),
          children=[
          Shape(
            appearance=Appearance(
              material=Material(USE='offwhite')),
            geometry=Box(size=(17,4.2,12.1))),
          Viewpoint(description='Bridge view',orientation=(0,1,0,-1.57),position=(-30,10,0))]),
        Transform(DEF='bridgewings',center=(-75.9,25.8,0),scale=(1,1.03,1),translation=(-5,-.2,0),
          children=[
          Shape(
            appearance=Appearance(
              material=Material(USE='offwhite')),
            geometry=IndexedFaceSet(coordIndex=[0,1,2,3,4,5,6,7,-1,8,9,10,11,12,13,14,15,-1,0,1,9,8,-1,1,2,10,9,-1,2,3,11,10,-1,3,4,12,11,-1,4,5,13,12,-1,5,6,14,13,-1,6,7,15,14,-1,7,0,8,15],solid=False,
              coord=Coordinate(point=[(-72.8,27.3,-24.3),(-76.4,27.3,-24.3),(-78.9,27.3,-12.1),(-78.9,27.3,12.1),(-76.4,27.3,24.3),(-72.8,27.3,24.3),(-72.8,27.3,12.2),(-72.8,27.3,-12.2),(-72.8,25.3,-24.3),(-76.4,25.3,-24.3),(-78.9,24.3,-12.1),(-78.9,24.3,12.1),(-76.4,25.3,24.3),(-72.8,25.3,24.3),(-72.8,24.3,12.2),(-72.8,24.3,-12.2)])))]),
        Transform(DEF='leftsupport',translation=(-80.8,12.1,-18.2),
          children=[
          Shape(DEF='bridgewingsupport',
            appearance=Appearance(
              material=Material(USE='offwhite')),
            geometry=Cylinder(bottom=False,height=24.9,radius=.5,top=False))]),
        Transform(DEF='rightsupport',translation=(-80.8,12.1,18.2),
          children=[
          Shape(USE='bridgewingsupport')]),
        Transform(DEF='SS3',translation=(-89.9,12.1,0),
          children=[
          Shape(
            appearance=Appearance(
              material=Material(USE='offwhite')),
            geometry=Box(size=(12.2,24.3,28.3)))]),
        Transform(DEF='smokestackbase',translation=(-109,9.1,0),
          children=[
          Shape(
            appearance=Appearance(
              material=Material(USE='offwhite')),
            geometry=Box(size=(12.1,14,20)))]),
        Transform(DEF='smokestack',
          children=[
          Shape(
            appearance=Appearance(DEF='smakestackblack',
              material=Material(diffuseColor=(.1,.1,.1),shininess=.3,specularColor=(.1,.1,.1))),
            geometry=Extrusion(crossSection=[(4.85,-6.1),(-6.1,-6.1),(-6.1,6.1),(4.85,6.1),(4.85,-6.1)],scale=[(.8,.8),(.6,.6)],spine=[(-108,16,0),(-107.5,32,0)])),
          Transform(DEF='smokestackexhaust',translation=(-107,33,0),
            children=[
            Shape(
              geometry=Cylinder(height=4,radius=1.8),
              appearance=Appearance(USE='smakestackblack'))])])])])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for SupertankerLowDetail.py")
