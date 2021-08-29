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
    meta(content='DragonFly.x3d',name='title'),
    meta(content='Dragon Fly to fly in the playround with sound effect.',name='description'),
    meta(content='Kok Keng Ng',name='creator'),
    meta(content='22 August 2002',name='created'),
    meta(content='14 January 2014',name='modified'),
    meta(content='You may reuse my creation without any constraint!',name='rights'),
    meta(content='https://savage.nps.edu/Savage/Buildings/PlayGround/DragonFly.x3d',name='identifier'),
    meta(content='X3D-Edit 3.2, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    Transform(DEF='DRAGONFLYTx',
      children=[
      Group(DEF='DRAGONFLYBody',
        children=[
        Transform(translation=(0,0,0.5),
          children=[
          Shape(DEF='EYE',
            geometry=Sphere(radius=0.55),
            appearance=Appearance(
              material=Material(diffuseColor=(0.1,0.1,0.1))))]),
        Transform(translation=(0,0,-0.5),
          children=[
          Shape(USE='EYE')]),
        Transform(
          children=[
          Group(
            children=[
            Transform(
              children=[
              Shape(
                geometry=Sphere(radius=0.37),
                appearance=Appearance(DEF='EYEApp',
                  material=Material(diffuseColor=(0.9,0.1,0.1))))]),
            Transform(
              children=[
              Transform(),
              Transform(rotation=(0,0,1,-1.575),translation=(5,0,0),
                children=[
                Shape(
                  geometry=Cone(bottomRadius=0.35,height=10),
                  appearance=Appearance(USE='EYEApp'))])])])])]),
      Group(
        children=[
        Transform(
          children=[
          Group(DEF='LEFTWings',
            children=[
            Transform(
              children=[
              Group(DEF='WING',
                children=[
                Transform(
                  children=[
                  Transform(rotation=(0,1,0,1.575),scale=(5,0.000001,0.8),translation=(1.5,0,4.7),
                    children=[
                    Shape(
                      geometry=Sphere(radius=1.2),
                      appearance=Appearance(
                        material=Material(diffuseColor=(0.9,0.1,0.1),transparency=0.8)))])])])]),
            Transform(translation=(2,0,0),
              children=[
              Group(USE='WING')])])]),
        Transform(rotation=(1,0,0,3.1415),
          children=[
          Group(USE='LEFTWings')])])]),
    Transform(
      children=[
      Sound(maxBack=5,maxFront=5,minBack=0,minFront=0,
        source=AudioClip(DEF='WingSound',loop=True,url=["wings2.wav","https://savage.nps.edu/Savage/Buildings/PlayGround/wings2.wav"]))]),
    Transform(),
    Transform(),
    Transform(rotation=(0,1,0,1.575),
      children=[
      Viewpoint(description='Dragon Fly (Top)',orientation=(1,0,0,-1.1),position=(0,3,1.2))]),
    Viewpoint(description='Dragon Fly (Side)',orientation=(1,0,0,-0.87575),position=(0,20,20)),
    Transform(),
    Transform(),
    Transform(),
    Background(skyColor=[(0.25,0.5,0.95)])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for DragonFly.py")
