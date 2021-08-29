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
    meta(content='PoolView.x3d',name='title'),
    meta(content='Display swimming pool with deck chairs, tables, umbrella, and water fixture',name='description'),
    meta(content='Ms Ng, Hwee Ping',name='creator'),
    meta(content='2 August 2004',name='created'),
    meta(content='12 January 2014',name='modified'),
    meta(content='https://savage.nps.edu/Savage/Buildings/ZenCondominium/PoolView.x3d',name='identifier'),
    meta(content='X3D-Edit 3.2, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    Transform(
      children=[
      Shape(
        geometry=Box(size=(7,0.2,10)),
        appearance=Appearance(
          material=Material(diffuseColor=(0,0,1)),
          texture=ImageTexture(url=["pool.jpg","http://www.web3d.org/x3d/content/examples/Vrml2Sourcebook/pool.jpg"])))]),
    PointLight(),
    Transform(scale=(0.7,0.7,0.7),translation=(-7,0.55,0),
      children=[
      Group(DEF='DeckChair',
        children=[
        Transform(
          children=[
          Shape(DEF='body',
            geometry=Extrusion(crossSection=[(3,0.1),(3,0.2),(0,0.2),(-0.25,0.1),(-0.5,0),(-0.9,-0.5),(-1.2,-1),(-1.1,-1),(-0.8,-0.5),(-0.4,0),(0,0.1),(3,0.1)],spine=[(0,0,0),(0,0,2)]),
            appearance=Appearance(
              material=Material(diffuseColor=(1,1,1),transparency=0.2)))]),
        Transform(
          children=[
          Shape(DEF='leg',
            geometry=Extrusion(crossSection=[(-1.2,0.3),(-1.2,0.45),(-1.1,0.45),(-1.1,0.35),(2.9,0.35),(2.9,0.7),(3,0.7),(3,0.3),(-1.2,0.3)],spine=[(0,0,0),(0,0,0.1)]),
            appearance=Appearance(
              material=Material(diffuseColor=(0.6,0.6,0.6))))]),
        Transform(translation=(0,0,2),
          children=[
          Shape(USE='leg')]),
        Transform(DEF='support1',center=(0,-0.6,0.01),rotation=(1,0,0,1.57),translation=(-0.8,0.6,-0.5),
          children=[
          Shape(
            geometry=Box(size=(0.1,0.1,0.65)),
            appearance=Appearance(
              material=Material(diffuseColor=(0.6,0.6,0.6))))]),
        Transform(translation=(0,0,1.8),
          children=[
          Transform(USE='support1')]),
        Transform(DEF='support2',rotation=(1,0,0,1.57),translation=(2.4,-0.26,0.06),
          children=[
          Shape(
            geometry=Box(size=(0.1,0.1,0.1)),
            appearance=Appearance(
              material=Material(diffuseColor=(0.6,0.6,0.6))))]),
        Transform(translation=(0,0,1.98),
          children=[
          Transform(USE='support2')]),
        Transform(
          children=[
          Shape(DEF='side',
            appearance=Appearance(
              material=Material(diffuseColor=(0.3,0.3,0.3))),
            geometry=Extrusion(crossSection=[(3,0.1),(3,0.2),(0,0.2),(-0.25,0.1),(-0.5,0),(-0.9,-0.5),(-1.2,-1),(-1.1,-1),(-0.8,-0.5),(-0.4,0),(0,0.1),(3,0.1)],spine=[(0,0,0),(0,0,0.08)]))]),
        Transform(translation=(0,0,2),
          children=[
          Shape(USE='side')]),
        Transform(DEF='wheel',center=(-1.4,-0.7,0.04),scale=(0.17,0.17,0.12),
          children=[
          Shape(
            geometry=Sphere(),
            appearance=Appearance(
              material=Material(diffuseColor=(1,0,0))))]),
        Transform(translation=(0,0,2),
          children=[
          Transform(USE='wheel')]),
        Transform(translation=(-0.8,-0.3,1.02),
          children=[
          Shape(
            geometry=Box(size=(0.07,0.07,2.05)),
            appearance=Appearance(
              material=Material(diffuseColor=(0.6,0.6,0.6))))])])]),
    Transform(scale=(0.7,0.7,0.7),translation=(-7,0.55,2.5),
      children=[
      Group(USE='DeckChair')]),
    Transform(scale=(0.7,0.7,0.7),translation=(-7,0.55,-2.5),
      children=[
      Group(USE='DeckChair')]),
    Transform(rotation=(0,1,0,1.57),scale=(0.7,0.7,0.7),translation=(-2,0.55,8.5),
      children=[
      Group(USE='DeckChair')]),
    Transform(rotation=(0,1,0,1.7),scale=(0.7,0.7,0.7),translation=(2,0.55,8.5),
      children=[
      Group(USE='DeckChair')]),
    Transform(rotation=(0,-1,0,1.57),scale=(0.7,0.7,0.7),translation=(-2,0.55,-8.5),
      children=[
      Group(USE='DeckChair')]),
    Transform(rotation=(0,-1,0,1.57),scale=(0.7,0.7,0.7),translation=(0.5,0.55,-8.5),
      children=[
      Group(USE='DeckChair')]),
    Transform(rotation=(0,-1,0,1.57),scale=(0.7,0.7,0.7),translation=(3,0.55,-8.5),
      children=[
      Group(USE='DeckChair')]),
    Transform(rotation=(0,1,0,3.14),scale=(0.7,0.7,0.7),translation=(7,0.5,2.5),
      children=[
      Group(USE='DeckChair')]),
    Transform(rotation=(0,1,0,3),scale=(0.7,0.7,0.7),translation=(6.6,0.5,6),
      children=[
      Group(USE='DeckChair')]),
    Transform(scale=(0.75,0.75,0.75),translation=(3,2.5,0),
      children=[
      Group(DEF='WaterArch',
        children=[
        Shape(DEF='UmbTop',
          geometry=Extrusion(crossSection=[(0,1),(1.2,1),(1.2,0.56),(2.8,0.56),(2.8,1),(4,1),(4,0),(0,0),(0,1)],spine=[(0,0,0),(0,0,0.7)]),
          appearance=Appearance(
            material=Material(diffuseColor=(0,0,1)),
            texture=ImageTexture(DEF='Marble',url=["marble-19b-zoom.jpg","http://www.web3d.org/x3d/content/examples/Vrml2Sourcebook/pool.jpg"]))),
        Group(DEF='Column',
          children=[
          Transform(translation=(0.6,-1.1,0.35),
            children=[
            Shape(DEF='MidArch',
              geometry=Box(size=(1.2,0.2,0.7)),
              appearance=Appearance(
                material=Material(diffuseColor=(0.76,0.906,0.672))))]),
          Transform(translation=(0.6,-1.23,0.35),
            children=[
            Shape(DEF='MiniLayer',
              geometry=Box(size=(1.2,0.05,0.7)),
              appearance=Appearance(
                material=Material(diffuseColor=(0,0,0))))]),
          Transform(translation=(0.6,-1.34,0.35),
            children=[
            Shape(USE='MidArch')]),
          Transform(translation=(0.6,-1.47,0.35),
            children=[
            Shape(USE='MiniLayer')]),
          Transform(translation=(0.6,-1.58,0.35),
            children=[
            Shape(USE='MidArch')]),
          Transform(translation=(0.6,-1.71,0.35),
            children=[
            Shape(USE='MiniLayer')]),
          Transform(translation=(0.6,-1.82,0.35),
            children=[
            Shape(USE='MidArch')]),
          Transform(translation=(0.6,-2.52,0.35),
            children=[
            Shape(
              geometry=Box(size=(1.2,1.2,0.7)),
              appearance=Appearance(
                texture=ImageTexture(USE='Marble')))])]),
        Transform(translation=(2.8,0,0),
          children=[
          Group(USE='Column')]),
        Transform(translation=(-0.1,-0.5,0.35),
          children=[
          Shape(
            geometry=Box(size=(0.3,0.5,0.5)))])])]),
    Transform(scale=(0.75,0.75,0.75),translation=(3,2.5,-1.6),
      children=[
      Group(USE='WaterArch')]),
    Transform(scale=(0.75,0.75,0.75),translation=(3,2.5,-3.2),
      children=[
      Group(USE='WaterArch')]),
    Transform(translation=(-7,5.2,-4),
      children=[
      Group(DEF='Umbrella',
        children=[
        Transform(DEF='Top',
          children=[
          Shape(
            geometry=IndexedFaceSet(coordIndex=[0,1,2,-1,0,2,3,-1,0,3,4,-1,0,4,1,-1],solid=False,
              coord=Coordinate(point=[(0,0,0),(-2,-2,2),(2,-2,2),(2,-2,-2),(-2,-2,-2)])),
            appearance=Appearance(
              material=Material(diffuseColor=(1,0,0))))]),
        Transform(rotation=(0,0,1,3.14),translation=(0,-2.7,0),
          children=[
          Shape(
            geometry=Cylinder(height=5.2,radius=0.1))])])]),
    Transform(translation=(4,5.2,-8.5),
      children=[
      Group(USE='Umbrella')]),
    DirectionalLight(direction=(4,0,5)),
    DirectionalLight(direction=(0,6,0)),
    Transform(scale=(0.7,0.7,0.7),translation=(0.6,0.95,8.5),
      children=[
      Group(DEF='Table',
        children=[
        Transform(
          children=[
          Shape(
            geometry=Cylinder(height=0.1),
            appearance=Appearance(
              material=Material(transparency=0.2)))]),
        Transform(translation=(0,-.65,0),
          children=[
          Shape(
            geometry=Box(size=(0.1,1.3,0.1)))]),
        Transform(translation=(0,-1.3,0),
          children=[
          Shape(
            geometry=Cylinder(height=0.1,radius=0.3),
            appearance=Appearance(
              material=Material(diffuseColor=(1,0,0))))])])]),
    Transform(scale=(0.7,0.7,0.7),translation=(-6,0.95,5.5),
      children=[
      Group(USE='Table')]),
    Transform(scale=(0.7,0.7,0.7),translation=(-6,0.95,-3.5),
      children=[
      Group(USE='Table')]),
    Viewpoint(description='Block Tower',orientation=(-0.495,0.854,0.163,0.7545),position=(32.3,17.2,63.5))])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for PoolView.py")
