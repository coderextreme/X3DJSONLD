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
    meta(content='Bench.x3d',name='title'),
    meta(content='Bench of the Soccer Field',name='description'),
    meta(content='LT Christos Kalogrias - Hellenic Navy',name='creator'),
    meta(content='1 September 2003',name='created'),
    meta(content='25 July 2009',name='modified'),
    meta(content='https://savage.nps.edu/Savage/Buildings/SoccerStadium/Bench.x3d',name='identifier'),
    meta(content='http://www.web3d.org/x3d/content/README.X3D-Edit.html',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    Viewpoint(description='BenchView',position=(0,1.8,8)),
    Transform(DEF='Bench',scale=(0.6,0.8,1.3),
      children=[
      Transform(DEF='Vertiron',translation=(-3.66,1.2,0),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(DEF='Aloumni',ambientIntensity=0.9,shininess=0.9,specularColor=(0.7,0.7,0.8))),
          geometry=Cylinder(height=2.4,radius=0.1)),
        Transform(translation=(0,1.2,0),
          children=[
          Shape(
            appearance=Appearance(
              material=Material(USE='Aloumni')),
            geometry=Sphere(radius=0.1))])]),
      Transform(translation=(7.32,0,0),
        children=[
        Transform(USE='Vertiron')]),
      Transform(DEF='HorIron',rotation=(0,0,1,1.57),translation=(0,2.4,0),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(USE='Aloumni')),
          geometry=Cylinder(height=7.32,radius=0.1))]),
      Transform(DEF='SmallSide',rotation=(0,1,0,1.57),translation=(-3.66,0,0),
        children=[
        Shape(DEF='BackIron',
          appearance=Appearance(
            material=Material(diffuseColor=(0.5,0.5,0.5),emissiveColor=(0.5,0.5,0.5))),
          geometry=Extrusion(creaseAngle=0.785,crossSection=[(0.1000,0),(0.0998,0.0063),(0.0992,0.0125),(0.0982,0.0187),(0.0969,0.0249),(0.0951,0.0309),(0.0930,0.0368),(0.0905,0.0426),(0.0876,0.0482),(0.0844,0.0536),(0.0809,0.0588),(0.0771,0.0637),(0.0729,0.0685),(0.0685,0.0729),(0.0637,0.0771),(0.0588,0.0809),(0.0536,0.0844),(0.0482,0.0876),(0.0426,0.0905),(0.0368,0.0930),(0.0309,0.0951),(0.0249,0.0969),(0.0187,0.0982),(0.0125,0.0992),(0.0063,0.0998),(0.0,0.1000),(-0.0063,0.0998),(-0.0125,0.0992),(-0.0187,0.0982),(-0.0249,0.0969),(-0.0309,0.0951),(-0.0368,0.0930),(-0.0426,0.0905),(-0.0482,0.0876),(-0.0536,0.0844),(-0.0588,0.0809),(-0.0637,0.0771),(-0.0685,0.0729),(-0.0729,0.0685),(-0.0771,0.0637),(-0.0809,0.0588),(-0.0844,0.0536),(-0.0876,0.0482),(-0.0905,0.0426),(-0.0930,0.0368),(-0.0951,0.0309),(-0.0969,0.0249),(-0.0982,0.0187),(-0.0992,0.0125),(-0.0998,0.0063),(-0.1000,0.0000),(-0.0998,-0.0063),(-0.0992,-0.0125),(-0.0982,-0.0187),(-0.0969,-0.0249),(-0.0951,-0.0309),(-0.0930,-0.0368),(-0.0905,-0.0426),(-0.0876,-0.0482),(-0.0844,-0.0536),(-0.0809,-0.0588),(-0.0771,-0.0637),(-0.0729,-0.0685),(-0.0685,-0.0729),(-0.0637,-0.0771),(-0.0588,-0.0809),(-0.0536,-0.0844),(-0.0482,-0.0876),(-0.0426,-0.0905),(-0.0368,-0.0930),(-0.0309,-0.0951),(-0.0249,-0.0969),(-0.0187,-0.0982),(-0.0125,-0.0992),(-0.0063,-0.0998),(-0.0,-0.1000),(0.0063,-0.0998),(0.0125,-0.0992),(0.0187,-0.0982),(0.0249,-0.0969),(0.0309,-0.0951),(0.0368,-0.0930),(0.0426,-0.0905),(0.0482,-0.0876),(0.0536,-0.0844),(0.0588,-0.0809),(0.0637,-0.0771),(0.0685,-0.0729),(0.0729,-0.0685),(0.0771,-0.0637),(0.0809,-0.0588),(0.0844,-0.0536),(0.0876,-0.0482),(0.0905,-0.0426),(0.0930,-0.0368),(0.0951,-0.0309),(0.0969,-0.0249),(0.0982,-0.0187),(0.0992,-0.0125),(0.0998,-0.0063),(0.1000,-0.0)],spine=[(0,2.3906,0),(0.1000,2.3984,0),(0.2000,2.3998,0),(0.3000,2.4000,0),(0.4000,2.4000,0),(0.5000,2.4000,0),(0.6000,2.4000,0),(0.7000,2.4000,0),(0.8000,2.3998,0),(0.9000,2.3984,0),(1.0,2.3906,0),(1.1000,2.3597,0),(1.2000,2.2616,0),(1.3000,1.9973,0),(1.4000,1.3669,0),(1.5000,0,0)])),
        Shape(DEF='SmallGlass',
          appearance=Appearance(
            material=Material(ambientIntensity=0.9,diffuseColor=(0.6,0.6,0.6),shininess=0.9,specularColor=(0.7,0.7,0.8),transparency=0.7)),
          geometry=IndexedFaceSet(coordIndex=[0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,-1],creaseAngle=1.57,solid=False,
            coord=Coordinate(point=[(0,2.3906,0),(0.1000,2.3984,0),(0.2000,2.3998,0),(0.3000,2.4000,0),(0.4000,2.4000,0),(0.5000,2.4000,0),(0.6000,2.4000,0),(0.7000,2.4000,0),(0.8000,2.3998,0),(0.9000,2.3984,0),(1.0,2.3906,0),(1.1000,2.3597,0),(1.2000,2.2616,0),(1.3000,1.9973,0),(1.4000,1.3669,0),(1.5000,0,0),(0,0,0),(0,2.3906,0)])))]),
      Transform(translation=(7.32,0,0),
        #  Right BackPost 
        children=[
        Transform(USE='SmallSide')]),
      Transform(rotation=(0,1,0,1.57),translation=(-3.66,0,0),
        children=[
        Shape(DEF='LargeGlass',
          appearance=Appearance(
            material=Material(ambientIntensity=0.9,diffuseColor=(0.6,0.6,0.6),shininess=0.9,specularColor=(0.7,0.7,0.8),transparency=0.7)),
          geometry=IndexedFaceSet(coordIndex=[0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,31,30,29,28,27,26,25,24,23,22,21,20,19,18,17,16,-1],creaseAngle=1.57,solid=False,
            coord=Coordinate(point=[(-0.85,2.3906,0),(0.1000,2.3984,0),(0.2000,2.3998,0),(0.3000,2.4000,0),(0.4000,2.4000,0),(0.5000,2.4000,0),(0.6000,2.4000,0),(0.7000,2.4000,0),(0.8000,2.3998,0),(0.9000,2.3984,0),(1.0,2.3906,0),(1.1000,2.3597,0),(1.2000,2.2616,0),(1.3000,1.9973,0),(1.4000,1.3669,0),(1.5000,0,0),(-0.85,2.3906,7.32),(0.1000,2.3984,7.32),(0.2000,2.3998,7.32),(0.3000,2.4000,7.32),(0.4000,2.4000,7.32),(0.5000,2.4000,7.32),(0.6000,2.4000,7.32),(0.7000,2.4000,7.32),(0.8000,2.3998,7.32),(0.9000,2.3984,7.32),(1.0,2.3906,7.32),(1.1000,2.3597,7.32),(1.2000,2.2616,7.32),(1.3000,1.9973,7.32),(1.4000,1.3669,7.32),(1.5000,0,7.32)])))])]),
    Transform(rotation=(0,0,1,1.57),translation=(0,0.5,-1.2),
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0.2,0.2,0.2))),
        geometry=Cylinder(height=4.392,radius=0.1)),
      Transform(DEF='Base',rotation=(0,0,1,1.57),translation=(-0.25,0,0),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(diffuseColor=(0.2,0.2,0.2))),
          geometry=Cylinder(height=0.5,radius=0.1))]),
      Transform(translation=(0,1.5,0),
        children=[
        Transform(USE='Base')]),
      Transform(translation=(0,-1.5,0),
        children=[
        Transform(USE='Base')])]),
    Transform(DEF='Seat',scale=(0.3,0.3,0.3),translation=(0,1,-1.3),
      children=[
      Inline(url=["./ViewerSeat.wrl","https://savage.nps.edu/Savage/Buildings/SoccerStadium/ViewerSeat.wrl"])]),
    Transform(translation=(0.6,0,0),
      children=[
      Transform(USE='Seat')]),
    Transform(translation=(1.2,0,0),
      children=[
      Transform(USE='Seat')]),
    Transform(translation=(1.8,0,0),
      children=[
      Transform(USE='Seat')]),
    Transform(translation=(-0.6,0,0),
      children=[
      Transform(USE='Seat')]),
    Transform(translation=(-1.2,0,0),
      children=[
      Transform(USE='Seat')]),
    Transform(translation=(-1.8,0,0),
      children=[
      Transform(USE='Seat')])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for Bench.py")
